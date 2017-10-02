﻿using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System;

public enum Modes
{
    None,
    Campaign,
    Trial,
    Endless
}

public enum Environment
{
    Hot,
    Cold,
    Balance
}

public enum Climate
{
    Dry,
    Wet,
    Normal
}

public enum BattleState
{
    Start,
    Game,
    End
}

public class Battle_C : MonoBehaviour {

    //常量值 constant
    const int SPBubble_SP = 3;
    const float SPBUBBLEDIAPPEAR = 3.0f;
    const int VIRUSNUM = 2;
    const float MEDICINEWORK = 100000000.0f;

    //关卡数据
    public int MissionID;
    public int VirusID;
    Modes mode;
    float deltaTime = 0;
    float deltaTime2 = 0;
    float deltaTime3 = 0;
    public int VirusNum = VIRUSNUM;                //单局病毒量
    public float Medicine = 0;              //解药当前进度
    public float MedicineWork = MEDICINEWORK;       //解药总进度
    public bool medicineOK = false;
    GameObject MedicineBar;
    public BattleState BattleState;
    public bool Result = false;
    public int StrategyPoint;
    public float TotalInfection;
    public int TotalDamage;
    bool Accelarate;
    Battle_C BC;

    public float TimeSecond;
    public int InfectNum;
    public int InfectKillNum;
    public int ZombieKillNum;

    //物件引用
    public GameObject StrategyBtn;
    public GameObject LabelStrategy;
    GameObject Battle;
    GameObject Entity;
    GameObject EndBattleBtn;
    GameObject InGameUpgradePanel;
    GameObject UpgradeMap;
    GameObject VirusUpBtn;
    GameObject HumanUpBtn;
    GameObject ZombieUpBtn;
    GameObject EvolutionBtn;
    GameObject SpeedBtn;
    UILabel Label_EvolutionDes;
    UILabel LabelEvolutionCost;
    UILabel LabelSpeed;

    //模具引用 prefabs
    public GameObject HumanModel;
    public GameObject ZombieModel;
    public GameObject LabelStrategyPoint;
    public GameObject GeneModel;
    public Gene GeneSelected;
    public GameObject LabelSP;
    public GameObject SP_Bubble;

    //各单位集合 entity arraylists
    public Virus CurVirus;
    public ArrayList UpgradedGenes_Virus = new ArrayList();
    public ArrayList UpgradedGenes_Human = new ArrayList();
    public ArrayList UpgradedGenes_Zombie = new ArrayList();
    public ArrayList VirusArray = new ArrayList();
    public ArrayList HumanArray = new ArrayList();
    public ArrayList ZombieArray = new ArrayList();

    public ArrayList VirusGeneArray = new ArrayList();
    public ArrayList HumanGeneArray = new ArrayList();
    public ArrayList ZombieGeneArray = new ArrayList();

    public List<Infection_Sheet> InfectionList = new List<Infection_Sheet>();
    public List<Damage_Sheet> DamageList = new List<Damage_Sheet>();

    private void Awake()
    {
        BC = GameObject.Find(GameManager.BATTLE).GetComponent<Battle_C>();
    }

    private void Start()
    {
        Battle = GameObject.Find(GameManager.BATTLE);
        EndBattleBtn = GameObject.Find("EndBattleBtn");
        UIEventListener.Get(EndBattleBtn).onClick = EndBattleBtn_Click;

        UIEventListener.Get(StrategyBtn).onClick = StrategyBtn_Click;

        EvolutionBtn = GameObject.Find("EvolutionBtn");
        UIEventListener.Get(EvolutionBtn).onClick = EvolutionBtn_Click;

        SpeedBtn = GameObject.Find("SpeedBtn");
        UIEventListener.Get(SpeedBtn).onClick = SpeedBtn_Click;

        MedicineBar = GameObject.Find("MedicineBar");

        Entity = GameObject.Find("Entity");
        InGameUpgradePanel = GameObject.Find("InGameUpgrade");

        UpgradeMap = GameObject.Find("UpgradeMap");

        VirusUpBtn = GameObject.Find("VirusUpBtn");
        UIEventListener.Get(VirusUpBtn).onClick = VirusUpBtn_Click;

        HumanUpBtn = GameObject.Find("HumanUpBtn");
        UIEventListener.Get(HumanUpBtn).onClick = HumanUpBtn_Click;

        ZombieUpBtn = GameObject.Find("ZombieUpBtn");
        UIEventListener.Get(ZombieUpBtn).onClick = ZombieUpBtn_Click;

        GameObject strategyCloseBtn = GameObject.Find("StrategyCloseBtn");
        UIEventListener.Get(strategyCloseBtn).onClick = StrategyCloseBtn_Click;

        Label_EvolutionDes = GameObject.Find("Label_EvolutionDes").GetComponent<UILabel>();

        LabelEvolutionCost = GameObject.Find("LabelEvolutionCost").GetComponent<UILabel>();

        LabelSpeed = GameObject.Find("LabelSpeed").GetComponent<UILabel>();
    }

    //接收不同模式的数据，方便以后独立处理，Enter结束之后才开始Update. init mode data
    public void Enter(int curVirusID, int curMissionID,Modes curMode)
    {
        EndBattleBtn.SetActive(false);
        InGameUpgradePanel.SetActive(false);
        StrategyBtn.SetActive(true);
        SpeedBtn.SetActive(true);
        Accelarate = false;
        LabelSpeed.text = "X 1";

        BC.TimeSecond = 0.0f;
        BC.InfectNum = 0;
        BC.InfectKillNum = 0;
        BC.ZombieKillNum = 0;

        //BC.missionID = curMissionID;
        //StrategyPoint = 100;
        MissionID = curMissionID;
        VirusID = curVirusID;
        //要读取病毒特性
        BC.VirusNum = VIRUSNUM;
        mode = curMode;

        BC.Medicine = 0.0f;
        BC.MedicineWork = MEDICINEWORK;
        BC.medicineOK = false;

        for(int i = 0; i < DataManager.InfectionSheet.Count; i++)
        {
            BC.InfectionList.Add(DataManager.InfectionSheet[i]);
        }

        for (int i = 0; i < DataManager.DamageSheet.Count; i++)
        {
            BC.DamageList.Add(DataManager.DamageSheet[i]);
        }

        LoadEntity(VirusID,MissionID);
        LoadBattleEvent(MissionID);
        //LoadBattleStrategy();

        BattleState = BattleState.Start;
    }

    void LoadEntity(int curVirusID, int curMissionID)
    {
        //病毒数据 virus data
        CurVirus = new Virus(curVirusID, MissionID);
        StrategyPoint = CurVirus.InitialSP;

        //随机生成人类数据，矩阵排布，临时方案 temporary resolution. line all humans in matrix
        int row = int.Parse(DataManager.Mission_Parameter[MissionID].DistributionParam1);
        int column = int.Parse(DataManager.Mission_Parameter[MissionID].DistributionParam2);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                HumanModel.GetComponent<Human>().CreatHuman(curMissionID);

                GameObject hm = NGUITools.AddChild(Entity, HumanModel);
                Vector3 pos = new Vector3((-column / 2 + j) * HumanModel.GetComponent<Human>().Image.width, (-row / 2 + i) * HumanModel.GetComponent<Human>().Image.height, 0);
                hm.transform.localPosition = pos;

                NGUITools.SetDirty(Entity);

                HumanArray.Add(hm);
            }
        }
    }

    void LoadBattleEvent(int curMissionID)
    {
        //根据关卡ID决定使用什么战斗事件 load battle event according to mission id
    }

    void LoadBattleStrategy(string boardID)
    {
        //Use object pool to restore objects here, modify later
        //先清除数据 clear data
        Transform[] children = UpgradeMap.GetComponentsInChildren<Transform>();

        //若小于等于2，此时新建数据 re-init data
        if (children.Length <= 2)
        {
            Debug.Log("初始化战术板");
            GameObject gm;
            //根据病毒ID决定使用什么策略面板 change strategy board accroding to virus id
            foreach (BattleStrategy_Sheet bss in DataManager.BattleStrategy_Strategy)
            {
                if (bss.StrategyID == BC.CurVirus.StrategyID)
                {
                    //该策略ID的全部加载
                    GeneModel.GetComponent<Gene>().CreateGene(bss.GeneID);
                    gm = NGUITools.AddChild(UpgradeMap, GeneModel);
                    gm.GetComponent<UISprite>().depth = 10;
                    gm.transform.localPosition = GeneModel.GetComponent<Gene>().Pos;
                    gm.SetActive(gm.GetComponent<Gene>().IsVisible);

                    switch (bss.BoardID)
                    {
                        case "1":
                            VirusGeneArray.Add(gm);
                            break;
                        case "2":
                            HumanGeneArray.Add(gm);
                            break;
                        case "3":
                            ZombieGeneArray.Add(gm);
                            break;
                        default:
                            break;
                    }
                }
            }
        }

        Debug.Log("更新数据");
        foreach (GameObject go in VirusGeneArray)
        {
            go.GetComponent<Gene>().UpdateData(boardID);
        }

        foreach (GameObject go in HumanGeneArray)
        {
            go.GetComponent<Gene>().UpdateData(boardID);
        }

        foreach (GameObject go in ZombieGeneArray)
        {
            go.GetComponent<Gene>().UpdateData(boardID);
        }

        //清空Label的内容
        switch (boardID)
        {
            case "1":
                Label_EvolutionDes.text = LocalizationEx.LoadLanguageTextName("VirusUpgradeDefaultDes");
                break;
            case "2":
                Label_EvolutionDes.text = LocalizationEx.LoadLanguageTextName("HumanUpgradeDefaultDes");
                break;
            case "3":
                Label_EvolutionDes.text = LocalizationEx.LoadLanguageTextName("ZombieUpgradeDefaultDes");
                break;
            default:
                break;
        }

        LabelEvolutionCost.text = "";
    }

    void EvolutionBtn_Click(GameObject button)
    {
        Debug.Log("基因进化处理");
        Debug.Log("GeneSelected.sp = "+ Formula.StrategyPointCal(GeneSelected));
        if(BC.StrategyPoint >= Formula.StrategyPointCal(GeneSelected) && GeneSelected.IsUpgradable && !GeneSelected.IsUpgraded)
        {
            //消耗策略点 consume sp
            BC.StrategyPoint -= Formula.StrategyPointCal(GeneSelected);
            //效果生效 
            Formula.ResolveBattleUpgrade(GeneSelected.EventID);
            //标记基因的进化状态 change the state of gene
            GeneSelected.IsUpgraded = true;

            //记录已升级的Gene record upgraded gene
            switch (GeneSelected.BoardID)
            {
                case "1":
                    BC.UpgradedGenes_Virus.Add(GeneSelected);
                    break;
                case "2":
                    BC.UpgradedGenes_Human.Add(GeneSelected);
                    break;
                case "3":
                    BC.UpgradedGenes_Zombie.Add(GeneSelected);
                    break;
                default:
                    break;
            }

            //更新数据状态 update data
            LoadBattleStrategy(GeneSelected.BoardID);
            //这里改变进化按钮的外观为不可用状态 set evolution button disable
            Formula.ChangeButtonDisable(button);
        }
    }

    //final plan of genetating humans
    void GenerateHuman()
    {

    }

    private void FixedUpdate()
    {
        if (BattleState == BattleState.Start)
        {
            Debug.Log("BattleState.Start");
            MedicineBar.GetComponent<UISlider>().value = BC.Medicine / BC.MedicineWork;

            LabelStrategyPoint.GetComponent<UILabel>().text = string.Format("StrategyPoint:" + BC.StrategyPoint);
        }

        if (BattleState == BattleState.Game)
        {
            //Debug.Log("BattleState.Game");

            //战斗用时计时器 battle timer
            TimeSecond += Time.fixedDeltaTime;
            //战斗事件计时器 battle event timer
            deltaTime += Time.fixedDeltaTime;
            //系统定时给予策略点计时器 sp timer
            deltaTime2 += Time.fixedDeltaTime;
            //系统出现黄色DNA气泡计时器 dna timer
            deltaTime3 += Time.fixedDeltaTime;

            if (deltaTime3 >= float.Parse(DataManager.Mission_Parameter[MissionID].EventMin) && deltaTime3 <= float.Parse(DataManager.Mission_Parameter[MissionID].EventMax))
            {
                Debug.Log("进入随机出现气泡");
                float random = UnityEngine.Random.Range(0.0f, 1.0f);
                if (random > 0.1f)
                {
                    //出现黄色气泡 yellow bubble
                    Debug.Log("出现黄色气泡");

                    int randomHuman = UnityEngine.Random.Range(0, HumanArray.Count);

                    GameObject spBubble = NGUITools.AddChild(HumanArray[randomHuman] as GameObject, SP_Bubble);
                    UIEventListener.Get(spBubble).onClick = SPBubble_Click;
                    spBubble.transform.localPosition = Vector3.zero;

                    Destroy(spBubble, SPBUBBLEDIAPPEAR);
                    deltaTime3 = 0.0f;
                }
            }
            else if(deltaTime3 >= float.Parse(DataManager.Mission_Parameter[MissionID].EventMax))
            {
                deltaTime3 = 0.0f;
            }

            //战斗事件处理 battle event
            if(deltaTime >= 1.0f)
            {
                //Formula.BattleEventRandom("2");
                //Formula.ResolveBattleUpgrade("1");
                deltaTime = 0.0f;
            }

            if(deltaTime2 >= 2.0f)
            {
                BC.StrategyPoint += 1;
                deltaTime2 = 0.0f;
            }

            //感染度总值达到一定值，就增加策略点 infection reaches a certain value,then increase sp
            BC.TotalInfection = 0.0f;

            foreach (GameObject h in BC.HumanArray)
            {
                BC.TotalInfection += h.GetComponent<Human>().Infection;
            }

            if (InfectionList.Count > 1)
            {
                //从表的上方往下检查
                if (BC.TotalInfection >= float.Parse(InfectionList[1].TotalInfection))
                {
                    BC.SP_Add(int.Parse(InfectionList[1].GainSP),StrategyBtn, LabelStrategy,false);
                    InfectionList.RemoveAt(1);
                }
            }

            //丧尸造成伤害达到一定值，就增加策略点 total dmg by zombies reaches a certain value,then increase sp
            BC.TotalDamage = 0;

            foreach (GameObject h in BC.HumanArray)
            {
                BC.TotalDamage += h.GetComponent<Human>().MaxHP - h.GetComponent<Human>().HP;
            }

            if (DamageList.Count > 1)
            {
                //从表的上方往下检查
                if (BC.TotalDamage >= int.Parse(DamageList[1].TotalDamage))
                {
                    BC.SP_Add(int.Parse(DamageList[1].GainSP), StrategyBtn, LabelStrategy,false);
                    DamageList.RemoveAt(1);
                }
            }


            LabelStrategyPoint.GetComponent<UILabel>().text = string.Format("StrategyPoint:" + BC.StrategyPoint);

            //通用规则模块

            //解药 remedy
            if (BC.Medicine >= BC.MedicineWork)
            {
                //治愈人类 cure the human
                BC.medicineOK = true;
            }

            MedicineBar.GetComponent<UISlider>().value = BC.Medicine / BC.MedicineWork;

            //模式专属模块
            switch (mode)
            {
                case Modes.Campaign:
                    bool anyInfected = true;
                    foreach(GameObject h in BC.HumanArray)
                    {
                        if(h.GetComponent<Human>().Infected)
                        {
                            anyInfected = true;
                            break;
                        }
                        else
                        {
                            anyInfected = false;
                        }
                    }

                    if (BC.ZombieArray.Count > 0 && BC.HumanArray.Count == 0)         //如果所有人类都死亡，且还存有丧尸,玩家胜利
                    {
                        //玩家胜利 player win
                        BC.Result = true;
                        Debug.Log("Win");
                        //标记关卡为通关
                        foreach(U_MissionFlag m in GameManager.user.DB_u_mf)
                        {
                            if(m.VirusID == VirusID && m.MissionID == MissionID)
                            {
                                m.Flag = true;
                                Debug.Log("m.VirusID = " + m.VirusID + ",  m.MissionID = " + m.MissionID);
                                GameManager.SaveData();
                            }
                        }

                        BattleState = BattleState.End;
                    } else if (BC.ZombieArray.Count == 0 && !anyInfected)                                          //如果丧尸全部死亡，且人类都没有被感染，则玩家失败
                    {
                        //玩家失败
                        BC.Result = false;
                        Debug.Log("Lose");
                        BattleState = BattleState.End;
                    } else if (BC.medicineOK)                                                                      //如果研发出了解药，玩家失败
                    {
                        //玩家失败
                        Debug.Log("Lose");
                        BC.Result = false;
                        BattleState = BattleState.End;
                    }
                    else
                    {
                        //BC.Result = false;
                        //BattleState = BattleState.End;                                                           //任何其他情形，玩家失败
                    }

                    break;
                case Modes.Trial:
                    break;
                case Modes.Endless:
                    break;
            }
        }

        if (BattleState == BattleState.End)
        {
            Debug.Log("BattleState.End");
            //先清除数据
            BC.VirusArray.Clear();
            BC.ZombieArray.Clear();
            BC.HumanArray.Clear();
            BC.InfectionList.Clear();
            BC.DamageList.Clear();
            BC.UpgradedGenes_Virus.Clear();
            BC.UpgradedGenes_Human.Clear();
            BC.UpgradedGenes_Zombie.Clear();
            BC.VirusGeneArray.Clear();
            BC.HumanGeneArray.Clear();
            BC.ZombieGeneArray.Clear();

            StrategyBtn.SetActive(false);
            SpeedBtn.SetActive(false);

            //Use object pool to restore objects here, modify later
            //销毁所有人类和丧尸
            Transform[] children = Entity.GetComponentsInChildren<Transform>();

            //若不大于1，说明此时刚刚初始化
            if (children.Length > 1)
            {
                //从1开始，不要删除DNAGrid物体本身
                for (int i = 1; i < children.Length; i++)
                {
                    Destroy(children[i].gameObject);
                }
            }
            EndBattleBtn.SetActive(true);
        }
    }

    public  void SP_Add(int sp_A,GameObject fatherObj,GameObject cordinateObj,bool isDisplayOnly)
    {
        GameObject lsp = NGUITools.AddChild(fatherObj, LabelSP);

        lsp.transform.localPosition = cordinateObj.transform.localPosition + new Vector3(0, 20);
        lsp.GetComponent<UILabel>().color = new Color(252.0f / 255.0f, 255.0f / 255.0f, 34.0f / 255.0f);

        lsp.GetComponent<UILabel>().text = "+ " + sp_A;
        Rigidbody rb = lsp.GetComponent<Rigidbody>();
        rb.velocity = new Vector3(0, 0.1f);
        Destroy(lsp, 1.0f);

        if (!isDisplayOnly)
        {
            //要有逻辑变化时
            StrategyPoint += sp_A;
        }
        else
        {
            //无逻辑变化时
            Destroy(fatherObj,1.5f);
        }
    }

    public  void SP_Decrease(int sp_D, GameObject fatherObj, GameObject cordinateObj)
    {
        StrategyPoint -= sp_D;

        GameObject lsp = NGUITools.AddChild(fatherObj, LabelSP);

        lsp.transform.localPosition = cordinateObj.transform.localPosition + new Vector3(0, 20);
        lsp.GetComponent<UILabel>().color = new Color(1.0f, 0.0f, 0.0f);

        lsp.GetComponent<UILabel>().text = "- " + sp_D;
        Rigidbody rb = lsp.GetComponent<Rigidbody>();
        rb.velocity = new Vector3(0, 0.1f);
        Destroy(lsp, 1.0f);
    }

    void BattleEnd()
    {
        //胜负判断

        //胜负处理
    }

    //暂停面板处理
    public void PauseBtn_Click()
    {

    }

    //调节音量
    public void ChangeBGVolumeTo(float value)
    {

    }

    //开关音效
    public void ChangeMEToggle(bool value)
    {

    }

    //中途退出处理
    public void QuitMission()
    {

    }

    //继续按钮处理
    public void ContinueBtn_Click()
    {

    }

    public void SPBubble_Click(GameObject button)
    {
        SP_Add(SPBubble_SP, button, button.transform.Find("Cordinate").gameObject,true);
        SP_Add(SPBubble_SP, StrategyBtn, LabelStrategy,false);
    }

    public void SpeedBtn_Click(GameObject button)
    {
        Accelarate = !Accelarate;

        if (Accelarate)
        {
            LabelSpeed.text = "X 2";
            Time.timeScale = 2.0f;
        }
        else
        {
            LabelSpeed.text = "X 1";
            Time.timeScale = 1.0f;
        }
    }

    //正常结束，跳转到结算界面
    public void EndBattleBtn_Click(GameObject button)
    {
        Debug.Log("EndBattleBtn_Click");

        switch (Result)
        {
            case true:
                GameManager.ChangePanel(GameManager.UIS[GameManager.BATTLE], GameManager.UIS[GameManager.CAMPAIGNRESULT], 1);
                break;
            case false:
                GameManager.ChangePanel(GameManager.UIS[GameManager.BATTLE], GameManager.UIS[GameManager.CAMPAIGNRESULT], 0);
                break;
        }

        AudioManager.playMusicByName(AudioManager.MainBG);
    }

    //点击策略加点按钮
    public void StrategyBtn_Click(GameObject button)
    {
        Debug.Log("StrategyBtn_Click");
        InGameUpgradePanel.SetActive(true);
        Time.timeScale = 0;
        LoadBattleStrategy("1");
    }

    //点击病毒升级按钮
    public void VirusUpBtn_Click(GameObject button)
    {
        LoadBattleStrategy("1");
    }

    //点击病毒升级按钮
    public void HumanUpBtn_Click(GameObject button)
    {
        LoadBattleStrategy("2");
    }

    //点击病毒升级按钮
    public void ZombieUpBtn_Click(GameObject button)
    {
        LoadBattleStrategy("3");
    }

    //关闭策略面板按钮
    public void StrategyCloseBtn_Click(GameObject button)
    {
        Debug.Log("StrategyCloseBtn_Click");
        InGameUpgradePanel.SetActive(false);
        Time.timeScale = 1;
    }
}