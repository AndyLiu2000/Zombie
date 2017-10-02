using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zombie : MonoBehaviour{
    //Model：丧尸
    public float ZombieID;
    public int MaxHP;
    public int Atk_P;
    public int Atk_M;
    public int Def_P;
    public int Def_M;
    public float Speed;
    public float HPDecay;
    public float DrainLife;
    public float AbilityID;
    public string Name;
    public string Res;

    //战斗变量
    public int HP;
    public float ClimateBoost = 0;
    public float EnviBoost = 0;
    public Environment Envi;
    public Climate Clim;

    //预制体相关
    public GameObject SelfModel;
    public GameObject HumanModel;
    private Zombie self;
    public UISprite Image;
    public UILabel LabelName;
    public GameObject HPBar;
    public UISprite ClimIcon;
    public UISprite EnviIcon;
    public UISprite AbilityIcon;

    //环境变量
    Battle_C Battle;
    float oneSecondDeltaTime = 0;
    float fiveSecondDeltaTime = 0;

    private void Start()
    {
        self = SelfModel.GetComponent<Zombie>();

        Battle = GameObject.Find(GameManager.BATTLE).GetComponent<Battle_C>();
    }

    private void FixedUpdate()
    {
        if (Battle.BattleState == BattleState.Start)
        {
            //开始阶段的游戏提示显示
        }

        if (Battle.BattleState == BattleState.Game)
        {
            oneSecondDeltaTime += Time.fixedDeltaTime;

            //失血
            if (oneSecondDeltaTime >= 1.0f)
            {
                self.HP -= (int)Mathf.Round(HPDecay);
                HPBar.GetComponent<UISlider>().value = (float)(HP * 1.0f / MaxHP);
            }

            //丧尸死亡
            if (self.HP <= 0)
            {
                ZombieDie();
            }

            //每1秒攻击一次
            if (oneSecondDeltaTime >= 1.0f)
            {
                foreach (GameObject h in Battle.HumanArray)
                {
                    h.GetComponent<Human>().HP -= Atk_P * 100000;
                }
            }

            //按秒执行操作
            if (oneSecondDeltaTime >= 1.0f)
            {
                oneSecondDeltaTime = 0.0f;
            }

            if (fiveSecondDeltaTime >= 5.0f)
            {
                fiveSecondDeltaTime = 0.0f;
            }
        }

        if (Battle.BattleState == BattleState.End)
        {

        }

    }

    void ZombieDie()
    {
        Battle.ZombieArray.Remove(SelfModel);
        Destroy(SelfModel);
    }

    public void CreateZombie(int zombieID, int curMissionID, Climate clim, Environment envi)
    {
        //Model - DNAUp + Mission
        ZombieID = zombieID;
        Zombie_Sheet zombie = new Zombie_Sheet();
        foreach (Zombie_Sheet z in DataManager.Model_Zombie)
        {
            if (z.ZombieID == ZombieID.ToString())
            {
                zombie = z;
                break;
            }
        }

        //Model值
        MaxHP = int.Parse(zombie.MaxHP);
        Atk_P = int.Parse(zombie.Atk_P);
        Atk_M = int.Parse(zombie.Atk_M);
        Def_P = int.Parse(zombie.Def_P);
        Def_M = int.Parse(zombie.Def_M);
        Speed = float.Parse(zombie.Speed);
        HPDecay = float.Parse(zombie.HPDecay);
        DrainLife = float.Parse(zombie.DrainLife);

        //根据随机分配到的气候和环境来决定使用哪个参数
        switch (clim)
        {
            case Climate.Dry:
                ClimateBoost += float.Parse(zombie.ClimateBoost_1);
                break;
            case Climate.Wet:
                ClimateBoost += float.Parse(zombie.ClimateBoost_2);
                break;
            case Climate.Normal:
                ClimateBoost += float.Parse(zombie.ClimateBoost_3);
                break;
        }

        switch (envi)
        {
            case Environment.Hot:
                EnviBoost += float.Parse(zombie.EnviBoost_1);
                break;
            case Environment.Cold:
                EnviBoost += float.Parse(zombie.EnviBoost_2);
                break;
            case Environment.Balance:
                EnviBoost += float.Parse(zombie.EnviBoost_3);
                break;
        }

        //DNA值
        MaxHP = (int)(MaxHP * (1.0f + Formula.FieldNameToValue_Zombie("MaxHP")));
        Atk_P = (int)(Atk_P * (1.0f + Formula.FieldNameToValue_Zombie("Atk_P")));
        Atk_M = (int)(Atk_M * (1.0f + Formula.FieldNameToValue_Zombie("Atk_M")));
        Def_P = (int)(Def_P * (1.0f + Formula.FieldNameToValue_Zombie("Def_P")));
        Def_M = (int)(Def_M * (1.0f + Formula.FieldNameToValue_Zombie("Def_M")));
        Speed = (int)(Speed * (1.0f + Formula.FieldNameToValue_Zombie("Speed")));
        HPDecay = (int)(HPDecay * (1.0f + Formula.FieldNameToValue_Zombie("HPDecay")));
        DrainLife = (int)(DrainLife * (1.0f + Formula.FieldNameToValue_Zombie("DrainLife")));

        //根据随机分配到的气候和环境来决定使用哪个参数
        switch (clim)
        {
            case Climate.Dry:
                ClimateBoost += Formula.FieldNameToValue_Zombie("ClimateBoost_1");
                break;
            case Climate.Wet:
                ClimateBoost += Formula.FieldNameToValue_Zombie("ClimateBoost_2");
                break;
            case Climate.Normal:
                ClimateBoost += Formula.FieldNameToValue_Zombie("ClimateBoost_3");
                break;
        }

        switch (envi)
        {
            case Environment.Hot:
                EnviBoost += Formula.FieldNameToValue_Zombie("EnviBoost_1");
                break;
            case Environment.Cold:
                EnviBoost += Formula.FieldNameToValue_Zombie("EnviBoost_2");
                break;
            case Environment.Balance:
                EnviBoost += Formula.FieldNameToValue_Zombie("EnviBoost_3");
                break;
        }

        MaxHP = (int)(MaxHP / (1.0f + ClimateBoost + EnviBoost));
        Atk_P = (int)(Atk_P / (1.0f + ClimateBoost + EnviBoost));
        Atk_M = (int)(Atk_M / (1.0f + ClimateBoost + EnviBoost));
        Def_P = (int)(Def_P / (1.0f + ClimateBoost + EnviBoost));
        Def_M = (int)(Def_M / (1.0f + ClimateBoost + EnviBoost));
        Speed = (int)(Speed / (1.0f + ClimateBoost + EnviBoost));
        HPDecay = (int)(HPDecay / (1.0f + ClimateBoost + EnviBoost));
        DrainLife = (int)(DrainLife / (1.0f + ClimateBoost + EnviBoost));

        //没有Mission值

        HP = MaxHP;

        //预制体初始化
        //Image.spriteName = zombie.Res;
        Image.spriteName = "Emoticon - Laugh";
        LabelName.text = LocalizationEx.LoadLanguageTextName(zombie.Name);
        HPBar.GetComponent<UISlider>().value = (float)(HP * 1.0f / MaxHP);
        ClimIcon.spriteName = Formula.ClimateIcon(ref ClimIcon, Clim);
        EnviIcon.spriteName = Formula.EnviIcon(ref ClimIcon, envi);
        AbilityIcon.spriteName = "Button Y";
    }

    public Zombie ZombieBattleEvent()
    {
        //Human基础值 + 事件影响值
        return this;
    }

}
