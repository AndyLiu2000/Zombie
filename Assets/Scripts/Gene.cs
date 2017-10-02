using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gene : MonoBehaviour {

    //基因本身的所有相关量
    public string GeneID;
    public string StrategyID;
    public string BoardID;
    public string EventID;
    public int Row;
    public int Column;
    public string FP1;
    public string FP2;
    public int UnlockCost_A;
    public int UnlockCost_B;

    //局内变量
    public Vector3 Pos;
    public bool IsVisible = false;
    public bool IsFatherUnlocked = false;
    public bool IsUpgradable = false;
    public bool IsUpgraded = false;

    //预制体相关
    public GameObject SelfPrefabs;
    GameObject EvolutionBtn;
    Gene self;
    UILabel LabelEvolutionCost;

    //环境变量
    UILabel Label_EvolutionDes;
    Battle_C Battle;
    float oneSecondDeltaTime = 0;
    float fiveSecondDeltaTime = 0;

    private void Awake()
    {
        Battle = GameObject.Find(GameManager.BATTLE).GetComponent<Battle_C>();
    }

    // Use this for initialization
    void Start () {
        self = SelfPrefabs.GetComponent<Gene>();

        UIEventListener.Get(SelfPrefabs).onClick = SelfBtn_Click;

        Battle = GameObject.Find(GameManager.BATTLE).GetComponent<Battle_C>();

        Label_EvolutionDes = GameObject.Find("Label_EvolutionDes").GetComponent<UILabel>();

        LabelEvolutionCost = GameObject.Find("LabelEvolutionCost").GetComponent<UILabel>();

        EvolutionBtn = GameObject.Find("EvolutionBtn");
    }
	
	public void CreateGene(string geneID)
    {
        //Battle = GameObject.Find(GameManager.BATTLE).GetComponent<Battle_C>();

        GeneID = geneID;
        BattleStrategy_Sheet bs = new BattleStrategy_Sheet();
        //根据GeneID遍历查找基因
        foreach (BattleStrategy_Sheet bss in DataManager.BattleStrategy_Strategy)
        {
            if (bss.GeneID == GeneID)
            {
                bs = bss;
                break;
            }
        }

        //基因值
        StrategyID = bs.StrategyID;
        BoardID = bs.BoardID;
        EventID = bs.EventID;
        Row = int.Parse(bs.Row);
        Column = int.Parse(bs.Column);
        FP1 = bs.FP1;
        FP2 = bs.FP2;
        UnlockCost_A = int.Parse(bs.UnlockCost_A);
        UnlockCost_B = int.Parse(bs.UnlockCost_B);

        IsVisible = false;
        IsUpgraded = false;
        IsUpgradable = false;
        IsFatherUnlocked = false;
        //State = GeneState.UnVisible;

        //设定位置
        Pos = new Vector3(Column * 10.0f, Row * 10.0f,1.0f);

        //如果两个父节点都为0，则为初始可见的 if both father nodes are 0, it's visible
        if(FP1 == "0" && FP2 == "0")
        {
            IsFatherUnlocked = true;
            IsVisible = true;
        }
    }

    public void UpdateData(string boardID)
    {
        if(boardID == BoardID)
        {
            //如果两个父节点都解锁了，那么自己为等待解锁状态 if both father nodes are unlocked, it's waiting for unlock
            bool isFatherUnlocked_1 = false;
            bool isFatherUnlocked_2 = false;
            ArrayList battleArray = new ArrayList();

            switch (BoardID)
            {
                case "1":
                    battleArray = Battle.VirusGeneArray;
                    break;
                case "2":
                    battleArray = Battle.HumanGeneArray;
                    break;
                case "3":
                    battleArray = Battle.ZombieGeneArray;
                    break;
                default:
                    break;
            }

            if (FP1 == "0")
            {
                isFatherUnlocked_1 = true;
            }
            else
            {
                foreach (GameObject ga in battleArray)
                {
                    if (FP1 == ga.GetComponent<Gene>().GeneID && ga.GetComponent<Gene>().IsUpgraded)
                    {
                        Debug.Log("ga geneid 1=" + ga.GetComponent<Gene>().GeneID);
                        isFatherUnlocked_1 = true;
                        break;
                    }
                }
            }

            if (FP2 == "0")
            {
                isFatherUnlocked_2 = true;
            }
            else
            {
                foreach (GameObject ga in battleArray)
                {
                    if (FP2 == ga.GetComponent<Gene>().GeneID && ga.GetComponent<Gene>().IsUpgraded)
                    {
                        Debug.Log("ga geneid 2=" + ga.GetComponent<Gene>().GeneID);
                        isFatherUnlocked_2 = true;
                        break;
                    }
                }
            }

            if (isFatherUnlocked_1 && isFatherUnlocked_2)
            {
                IsFatherUnlocked = true;
                IsVisible = true;
            }

            //如果策略点足够，那么为可升级状态 if sp is enough to upgrade,it's upgradable
            if (Battle.StrategyPoint >= Formula.StrategyPointCal(this) && IsVisible && IsFatherUnlocked)
            {
                IsUpgradable = true;
            }

            //如果已升级，那么为已升级状态
            if (IsUpgraded)
            {
                IsUpgradable = false;
            }

            SelfPrefabs.SetActive(IsVisible);
        }
        else
        {
            SelfPrefabs.SetActive(false);
        }
    }

    void SelfBtn_Click(GameObject button)
    {
        Debug.Log("SelfBtn_Click");
        UpdateData(BoardID);
        foreach(InGameEvent_Sheet ige in DataManager.InGameEvent_InGameEvents)
        {
            if (ige.EventID == EventID)
            {
                Label_EvolutionDes.text = LocalizationEx.LoadLanguageTextName(ige.UpgradeEffectID);
            }
        }
        //未进化过显示进化消耗
        if (!IsUpgraded)
        {
            foreach (BattleStrategy_Sheet bs in DataManager.BattleStrategy_Strategy)
            {
                if (bs.GeneID == GeneID)
                {
                    LabelEvolutionCost.text = Formula.StrategyPointCal(this).ToString();
                }
            }

            Formula.ChangeButtonEnable(EvolutionBtn);
        }
        //已进化过不显示数值 upgraded gene doesn't show cost value
        else
        {
            LabelEvolutionCost.text = "";
            //这里改变进化按钮的外观为不可用状态
            Formula.ChangeButtonDisable(EvolutionBtn);
        }

        Battle.GeneSelected = this;
    }
}
