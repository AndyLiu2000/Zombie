using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Human : MonoBehaviour{

    const int KILL_HUMAN_SP = 5;
    const int INFECT_HUMAN_SP = 4;
    const float INFECT_BTN_DISAPPEAR = 1.0f;
    const int INFECTION_THRESHOLD = 30; //传染的感染度临界值
    const float INFECT_INTERVAL = 5.0f;

    //Model：Human
    public int HumanID;
    public int MaxHP;
    public int MaxInfection;
    public int Atk_P;
    public int Atk_M;
    public int Def_P;
    public int Def_M;
    public int InfectShield;
    public int InfectionAnti;
    public int CommunicationAnti;
    public int HPHealing;
    public string Name;
    public string Res;

    //战斗变量
    public int HP;
    public int Infection;
    public int ClimateBoost = 0;
    public int EnviBoost = 0;
    public Environment Envi;
    public Climate Clim;

    public bool Infected = false;

    //预制体相关
    public GameObject ZombieModel;
    GameObject Entity;
    public UISprite Image;
    public UILabel LabelName;
    public GameObject HPBar;
    public GameObject InfectionBar;
    public UISprite ClimIcon;
    public UISprite EnviIcon;
    public UISprite AbilityIcon;
    public GameObject StartBubble;

    //环境变量
    Battle_C Battle;
    float oneSecondDeltaTime = 0;
    float fiveSecondDeltaTime = 0;
    Human self;

    private void Awake()
    {
        Battle = GameObject.Find(GameManager.BATTLE).GetComponent<Battle_C>();
    }

    private void Start()
    {
        self = gameObject.GetComponent<Human>();
        Entity = GameObject.Find("Entity");

        UIEventListener.Get(StartBubble).onClick = InfectBtn_Click;
    }

    private void FixedUpdate()
    {
        if (Battle.BattleState == BattleState.Start)
        {

        }

        if (Battle.BattleState == BattleState.Game)
        {
            oneSecondDeltaTime += Time.fixedDeltaTime;
            fiveSecondDeltaTime += Time.fixedDeltaTime;

            //回血 restore
            if (self.HP < self.MaxHP)
            {
                if (oneSecondDeltaTime >= 1.0f)
                {
                    self.HP += HPHealing;
                }
            }

            //人类死亡 human die
            if (self.HP <= 0)
            {
                Battle.ZombieKillNum += 1;
                GenerateZombie();
            }

            //解药相关 medicine
            if (Battle.medicineOK == true)
            {
                self.Infected = false;
            }

            //感染 infect
            if (self.Infected)
            {
                if (oneSecondDeltaTime >= 1.0f)
                {
                    //感染加深
                    Infection += Battle.CurVirus.InfectSpeed;
                    Infection += 200;
                    InfectionBar.GetComponent<UISlider>().value = (float)(Infection * 1.0f / MaxInfection);

                    //解药研发 research
                    if (Infection  * 5 >= MaxInfection)
                    {
                        Battle.Medicine += 10.0f;
                    }
                }

                //感染度为满，人类死亡，变成丧尸 if infection exceeds maxinfection, then human dies and turns into zombie
                if (Infection >= MaxInfection)
                {
                    Battle.InfectKillNum += 1;

                    GenerateZombie();

                    //后面的代码全部不再执行
                    //return;
                }

                //传染，大于临界值才开始传染
                if (MaxInfection <= INFECTION_THRESHOLD * Infection)
                {
                    //Battle.CurVirus.CommunicateRate用在这里，缩短传染的时间间隔
                    if (fiveSecondDeltaTime >= INFECT_INTERVAL * 1000 / (1000 + Battle.CurVirus.CommunicateRate))
                    {
                        List<GameObject> unInfectedHumans = new List<GameObject>();
                        foreach (GameObject h in Battle.HumanArray)
                        {
                            if (h.GetComponent<Human>().Infected == false)
                            {
                                //取得所有未感染的人类
                                unInfectedHumans.Add(h);
                            }
                        }

                        /*
                        //感染的规则要重写
                        float distance = Mathf.Sqrt(Mathf.Pow(SelfModel.transform.localPosition.x - h.transform.localPosition.x, 2.0f) + Mathf.Pow(SelfModel.transform.localPosition.y - h.transform.localPosition.y, 2.0f));
                        float rate = Battle.CurVirus.CommunicateRate * distance / Screen.width;
                        float random = UnityEngine.Random.Range(0.0f, 1.0f);
                        if (rate < random)
                        {
                            h.GetComponent<Human>().Infected = true;
                            Debug.Log("感染一个新人类");
                            Battle.SP_Add(INFECT_HUMAN_SP, Battle.StrategyBtn, Battle.LabelStrategy, false);
                            break;
                        }*/
                        
                        if (unInfectedHumans.Count > 0)
                        {
                            Debug.Log("找随机目标传染一次");
                            GameObject unInfectedHuman = Formula.ListRandomElement(unInfectedHumans);
                            unInfectedHuman.GetComponent<Human>().InfectShield -= Battle.CurVirus.InfectSpeed;
                            if (unInfectedHuman.GetComponent<Human>().InfectShield < 0)
                            {
                                unInfectedHuman.GetComponent<Human>().InfectShield = 0;
                                unInfectedHuman.GetComponent<Human>().Infected = true;
                                Debug.Log("感染一个新人类");
                                Battle.InfectNum += 1;
                                Battle.SP_Add(INFECT_HUMAN_SP, Battle.StrategyBtn, Battle.LabelStrategy, false);
                            }
                            Debug.Log("InfectShield = " + unInfectedHuman.GetComponent<Human>().InfectShield);
                        }
                        
                    }
                }
                
            }

            //每5秒攻击一次 attack every 5 seconds
            if (fiveSecondDeltaTime >= 100)
            {
                foreach (GameObject z in Battle.ZombieArray)
                {
                    z.GetComponent<Zombie>().HP -= (int)(Atk_P * 0.0001);
                }
            }

            //按秒执行操作
            if (oneSecondDeltaTime >= 1.0f)
            {
                oneSecondDeltaTime = 0.0f;
            }

            if (fiveSecondDeltaTime >= INFECT_INTERVAL * 1000 / (1000 + Battle.CurVirus.CommunicateRate))
            {
                fiveSecondDeltaTime = 0.0f;
            }
        }

        if (Battle.BattleState == BattleState.End)
        {

        }

    }

    void GenerateZombie()
    {
        //杀死人类获得SP
        Battle.SP_Add(KILL_HUMAN_SP, Battle.StrategyBtn, Battle.LabelStrategy, false);

        //生成丧尸，只能从已解锁的丧尸ID中随机。通过IAP可以购买新的丧尸
        int randomZombieID = Formula.RandomZombie();

        ZombieModel.GetComponent<Zombie>().CreateZombie(randomZombieID, Battle.MissionID, Clim, Envi);

        GameObject zm = NGUITools.AddChild(Entity, ZombieModel);
        zm.transform.localPosition = gameObject.transform.localPosition;

        NGUITools.SetDirty(Entity);

        Battle.ZombieArray.Add(zm);

        Battle.HumanArray.Remove(gameObject);
        Destroy(gameObject);
    }

    public void CreatHuman(int curMissionID)
    {
        //数据初始化
        //Model - DNAUp + Mission

        //随机HumanID
        HumanID = Formula.RandomHuman();

        Human_Sheet human = new Human_Sheet();
        foreach(Human_Sheet h in DataManager.Model_Human)
        {
            if (h.HumanID == HumanID.ToString())
            {
                human = h;
                break;
            }
        }

        //Model值
        MaxHP = int.Parse(human.MaxHP);
        MaxInfection = int.Parse(human.MaxInfection);
        Atk_P = int.Parse(human.Atk_P);
        Atk_M = int.Parse(human.Atk_M);
        Def_P = int.Parse(human.Def_P);
        Def_M = int.Parse(human.Def_M);
        InfectShield = int.Parse(human.InfectShield);
        InfectionAnti = int.Parse(human.InfectionAnti);
        CommunicationAnti = int.Parse(human.CommunicationAnti);
        HPHealing = int.Parse(human.HPHealing);

        //根据随机分配到的气候和环境来决定使用哪个参数

        //随机气候        
        Clim = (Climate)UnityEngine.Random.Range(0, Enum.GetNames(Type.GetType("Climate")).Length);

        switch (Clim)
        {
            case Climate.Dry:
                ClimateBoost = int.Parse(human.ClimateBoost_1);
                break;
            case Climate.Wet:
                ClimateBoost = int.Parse(human.ClimateBoost_2);
                break;
            case Climate.Normal:
                ClimateBoost = int.Parse(human.ClimateBoost_3);
                break;
        }

        //随机环境 random environment
        Envi = (Environment)UnityEngine.Random.Range(0, Enum.GetNames(Type.GetType("Environment")).Length);

        Debug.Log("randomClim = " + Clim + ",randomEnvi = " + Envi);
        switch (Envi)
        {
            case Environment.Hot:
                EnviBoost = int.Parse(human.EnviBoost_1);
                break;
            case Environment.Cold:
                EnviBoost = int.Parse(human.EnviBoost_2);
                break;
            case Environment.Balance:
                EnviBoost = int.Parse(human.EnviBoost_3);
                break;
        }

        //DNA值
        MaxHP = MaxHP * 1000 / (1000 + Formula.FieldNameToValue("MaxHP", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        MaxInfection = MaxInfection * 1000 / (1000 + Formula.FieldNameToValue("MaxInfection", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        Debug.Log("MaxInfection 1 = " + MaxInfection);
        Debug.Log("MaxInfection.dna = " + Formula.FieldNameToValue("MaxInfection", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        Atk_P = Atk_P * 1000 / (1000 + Formula.FieldNameToValue("Atk_P", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        Atk_M = Atk_M * 1000 / (1000 + Formula.FieldNameToValue("Atk_M", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        Def_P = Def_P * 1000 / (1000 + Formula.FieldNameToValue("Def_P", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        Def_M = Def_M * 1000 / (1000 + Formula.FieldNameToValue("Def_M", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        InfectShield = InfectShield * 1000 / (1000 + Formula.FieldNameToValue("InfectShield", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        InfectionAnti = InfectionAnti * 1000 / (1000 + Formula.FieldNameToValue("InfectionAnti", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        CommunicationAnti = CommunicationAnti * 1000 / (1000 + Formula.FieldNameToValue("CommunicationAnti", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));
        HPHealing = HPHealing * 1000 / (1000 + Formula.FieldNameToValue("HPHealing", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]));

        //根据随机分配到的气候和环境来决定使用哪个参数
        switch (Clim)
        {
            case Climate.Dry:
                ClimateBoost += Formula.FieldNameToValue("ClimateBoost_1", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]);
                break;
            case Climate.Wet:
                ClimateBoost += Formula.FieldNameToValue("ClimateBoost_2", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]);
                break;
            case Climate.Normal:
                ClimateBoost += Formula.FieldNameToValue("ClimateBoost_3", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]);
                break;
        }

        switch (Envi)
        {
            case Environment.Hot:
                EnviBoost += Formula.FieldNameToValue("EnviBoost_1", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]);
                break;
            case Environment.Cold:
                EnviBoost += Formula.FieldNameToValue("EnviBoost_2", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]);
                break;
            case Environment.Balance:
                EnviBoost += Formula.FieldNameToValue("EnviBoost_3", DataManager.DNAUp_Human, GameManager.user.DB_u_dna[1]);
                break;
        }

        //Mission值
        Mission_Sheet mission = new Mission_Sheet();
        foreach(Mission_Sheet m in DataManager.Mission_Parameter)
        {
            if (m.MissionID == curMissionID.ToString())
            {
                mission = m;
                break;
            }
        }

        int missionBoost = int.Parse(mission.ClimateBoost) + int.Parse(mission.EnviBoost);

        MaxHP = MaxHP  * (1000 + int.Parse(mission.MaxHPBoost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        MaxInfection = MaxInfection * (1000 + int.Parse(mission.InfectionBoost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        Atk_P = Atk_P * (1000 + int.Parse(mission.Atk_P_Boost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        Atk_M = Atk_M * (1000 + int.Parse(mission.Atk_M_Boost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        Def_P = Def_P * (1000 + int.Parse(mission.Def_P_Boost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        Def_M = Def_M * (1000 + int.Parse(mission.Def_M_Boost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        InfectShield = InfectShield * (1000 + int.Parse(mission.Speed_Boost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        InfectionAnti = InfectionAnti * (1000 + int.Parse(mission.InfectionAntiBoost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        CommunicationAnti = CommunicationAnti *(1000 + int.Parse(mission.CommunicationAntiBoost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;
        HPHealing = HPHealing * (1000 + int.Parse(mission.HPHealingBoost)) / 1000 * (1000 + missionBoost + ClimateBoost + EnviBoost) / 1000;

        HP = MaxHP;
        Infection = 0;
        Infected = false;

        //预制体初始化
        Image.spriteName = human.Res;
        LabelName.text = LocalizationEx.LoadLanguageTextName(human.Name);
        HPBar.GetComponent<UISlider>().value = (float)(HP * 1.0f/MaxHP);
        InfectionBar.GetComponent<UISlider>().value = (float)(Infection * 1.0f / MaxInfection);
        ClimIcon.spriteName = Formula.ClimateIcon(ref ClimIcon, Clim);
        EnviIcon.spriteName = Formula.EnviIcon(ref ClimIcon, Envi);
        AbilityIcon.spriteName = "Button Y";

}

    public Human HumanBattleEvent()
    {
        //Human基础值 + 事件影响值
        return this;
    }

    public void HumanBtn_Click()
    {
        if (Battle.BattleState == BattleState.Start)
        {
            Debug.Log("感染按钮");

            //把所有其他人类上的感染按钮消除
            foreach (GameObject h in Battle.HumanArray)
            {
                if(h.transform.Find("InfectBtn(Clone)") != null)
                {
                    Destroy(h.transform.Find("InfectBtn(Clone)").gameObject);
                }
            }
            
            GameObject startBubble = NGUITools.AddChild(gameObject, StartBubble);
            UIEventListener.Get(startBubble).onClick = InfectBtn_Click;
            startBubble.transform.localPosition = Vector3.zero;
        }
    }

    public void InfectBtn_Click(GameObject button)
    {
        if (Battle.BattleState == BattleState.Start)
        {
            if (Battle.VirusNum > 0)
            {
                //如果未被感染，则将病毒附着于本人类上 if no one is infected,then pick one to infect
                Debug.Log("有感染种子");
                if (!self.Infected)
                {
                    Debug.Log("感染成功");
                    self.Infected = true;
                    Battle.InfectNum += 1;
                    Battle.VirusNum -= 1;
                    Battle.SP_Add(INFECT_HUMAN_SP, Battle.StrategyBtn, Battle.LabelStrategy, false);

                    Destroy(button, INFECT_BTN_DISAPPEAR);
                    Battle.BattleState = BattleState.Game;
                }
            }
        }
    }
}
