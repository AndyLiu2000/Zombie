using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zombie : MonoBehaviour{

    private float ATTACK_INTERVAL = 1.0f;
    private float HEALTH_INTERVAL = 1.0f;

    //Model：丧尸
    public float ZombieID;
    public int MaxHP;
    public int Atk_P;
    public int Atk_M;
    public int Def_P;
    public int Def_M;
    public int Speed;
    public int HPDecay;
    public int DrainLife;
    public string AbilityID;
    public string Name;
    public string Res;

    //战斗变量
    public int HP;
    public int ClimateBoost = 0;
    public int EnviBoost = 0;
    public Environment Envi;
    public Climate Clim;

    //预制体相关
    public GameObject HumanModel;
    private Zombie self;
    public UISprite Image;
    public UILabel LabelName;
    public GameObject HPBar;
    public UISprite ClimIcon;
    public UISprite EnviIcon;
    public UISprite AbilityIcon;

    //环境变量
    float oneSecondDeltaTime = 0;
    float fiveSecondDeltaTime = 0;

    private void Start()
    {
        self = gameObject.GetComponent<Zombie>();
    }

    private void FixedUpdate()
    {
        if (GameManager.BC.BattleState == BattleState.Start)
        {
            //开始阶段的游戏提示显示
        }

        if (GameManager.BC.BattleState == BattleState.Game)
        {
            oneSecondDeltaTime += Time.fixedDeltaTime;

            //失血
            if (oneSecondDeltaTime >= HEALTH_INTERVAL)
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
            if (oneSecondDeltaTime >= ATTACK_INTERVAL * 2) // 暂时不攻击 don't attack temporarily
            {
                foreach (GameObject h in GameManager.BC.HumanArray)
                {
                    h.GetComponent<Human>().HP -= Atk_P * 100000;
                }
            }

            //按秒执行操作
            if (oneSecondDeltaTime >= ATTACK_INTERVAL)
            {
                oneSecondDeltaTime = 0.0f;
            }

            if (fiveSecondDeltaTime >= 5.0f)
            {
                fiveSecondDeltaTime = 0.0f;
            }
        }

        if (GameManager.BC.BattleState == BattleState.End)
        {

        }

    }

    void ZombieDie()
    {
        GameManager.BC.ZombieArray.Remove(gameObject);
        Destroy(gameObject);
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
        Speed = int.Parse(zombie.Speed);
        HPDecay = int.Parse(zombie.HPDecay);
        DrainLife = int.Parse(zombie.DrainLife);

        //根据随机分配到的气候和环境来决定使用哪个参数
        switch (clim)
        {
            case Climate.Dry:
                ClimateBoost = int.Parse(zombie.ClimateBoost_1);
                break;
            case Climate.Wet:
                ClimateBoost = int.Parse(zombie.ClimateBoost_2);
                break;
            case Climate.Normal:
                ClimateBoost = int.Parse(zombie.ClimateBoost_3);
                break;
        }

        switch (envi)
        {
            case Environment.Hot:
                EnviBoost = int.Parse(zombie.EnviBoost_1);
                break;
            case Environment.Cold:
                EnviBoost = int.Parse(zombie.EnviBoost_2);
                break;
            case Environment.Balance:
                EnviBoost = int.Parse(zombie.EnviBoost_3);
                break;
        }

        //DNA值
        MaxHP = MaxHP * (1000 + Formula.FieldNameToValue("MaxHP",DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2])) / 1000;
        Atk_P = Atk_P * (1000 + Formula.FieldNameToValue("Atk_P", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2])) / 1000;
        Atk_M = Atk_M * (1000 + Formula.FieldNameToValue("Atk_M", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2])) / 1000;
        Def_P = Def_P * (1000 + Formula.FieldNameToValue("Def_P", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2])) / 1000;
        Def_M = Def_M * (1000 + Formula.FieldNameToValue("Def_M", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2])) / 1000;
        Speed = Speed * (1000 + Formula.FieldNameToValue("Speed", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2])) / 1000;
        HPDecay = HPDecay * (1000 + Formula.FieldNameToValue("HPDecay", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2])) / 1000;
        DrainLife = DrainLife * (1000 + Formula.FieldNameToValue("DrainLife", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2])) / 1000;

        //根据随机分配到的气候和环境来决定使用哪个参数
        switch (clim)
        {
            case Climate.Dry:
                ClimateBoost += Formula.FieldNameToValue("ClimateBoost_1", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2]);
                break;
            case Climate.Wet:
                ClimateBoost += Formula.FieldNameToValue("ClimateBoost_2", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2]);
                break;
            case Climate.Normal:
                ClimateBoost += Formula.FieldNameToValue("ClimateBoost_3", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2]);
                break;
        }

        switch (envi)
        {
            case Environment.Hot:
                EnviBoost += Formula.FieldNameToValue("EnviBoost_1", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2]);
                break;
            case Environment.Cold:
                EnviBoost += Formula.FieldNameToValue("EnviBoost_2", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2]);
                break;
            case Environment.Balance:
                EnviBoost += Formula.FieldNameToValue("EnviBoost_3", DataManager.DNAUp_Zombie, GameManager.user.DB_u_dna[2]);
                break;
        }

        MaxHP = MaxHP * 1000 / (1000 + ClimateBoost + EnviBoost);
        Atk_P = Atk_P * 1000 / (1000 + ClimateBoost + EnviBoost);
        Atk_M = Atk_M * 1000 / (1000 + ClimateBoost + EnviBoost);
        Def_P = Def_P * 1000 / (1000 + ClimateBoost + EnviBoost);
        Def_M = Def_M * 1000 / (1000 + ClimateBoost + EnviBoost);
        Speed = Speed * 1000 / (1000 + ClimateBoost + EnviBoost);
        HPDecay = HPDecay * 1000 / (1000 + ClimateBoost + EnviBoost);
        DrainLife = DrainLife * 1000 / (1000 + ClimateBoost + EnviBoost);

        //没有Mission值

        HP = MaxHP;

        //预制体初始化
        Image.spriteName = zombie.Res;
        //Image.spriteName = "Emoticon - Laugh";
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
