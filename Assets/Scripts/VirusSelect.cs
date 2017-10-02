using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VirusSelect : MonoBehaviour {

    private GameObject uiGrid;
    public GameObject prefabs_Cell;
    GameObject BackBtn;
    public int UnlockedMissionNum;
    UILabel LabelUnlockedMissionNum;

    // Use this for initialization
    void Start () {
        uiGrid = GameObject.Find("VirusSelectGrid");

        BackBtn = GameObject.Find("VirusSelectBackBtn");

        UIEventListener.Get(BackBtn).onClick = VirusSelectBackBtn_Click;

        LabelUnlockedMissionNum = GameObject.Find("UnlockedMissionNum").GetComponent<UILabel>();
    }

    public void Enter()
    {
        LoadVirusSelectData();
    }

    public void LoadVirusSelectData()
    {
        //创建数据
        Debug.Log("Init Virus-Data");

        //读取已解锁关卡数 load unlocked missions
        int completeMissionNum = 0;
        //判断关卡总星数，决定是否解锁新病毒 unlock new virus accoring to star numbers
        foreach (U_MissionFlag mf in GameManager.user.DB_u_mf)
        {
            if (mf.Flag == true)
            {
                completeMissionNum += 1;
            }
        }

        LabelUnlockedMissionNum.text = completeMissionNum.ToString();

        //Use object pool to restore objects here, modify later
        //先清除数据
        Transform[] children = uiGrid.GetComponentsInChildren<Transform>();

        //若不大于1，说明此时刚刚初始化
        if (children.Length > 1)
        {
            //从1开始，不要删除DNAGrid物体本身
            for (int i = 1; i < children.Length; i++)
            {
                Destroy(children[i].gameObject);
            }
        }

        //已解锁的病毒添加数据
        for (int i = 0; i < GameManager.user.DB_u_UnlockedViruses.Count; i++)
        {
            //设定每个cell的相对位置
            Vector3 pos = new Vector3(0, -uiGrid.GetComponent<UIGrid>().cellHeight * i, 0);

            prefabs_Cell.transform.localPosition = pos;

            //添加配置数据，显示配置数据
            foreach (Virus_Sheet vs in DataManager.Model_Virus)
            {
                if (vs.VirusID == GameManager.user.DB_u_UnlockedViruses[i])
                {
                    prefabs_Cell.GetComponent<VirusSelectCell>().LabelVirusName.text = LocalizationEx.LoadLanguageTextName(vs.Name);
                    prefabs_Cell.GetComponent<VirusSelectCell>().LabelVirusDes.text = LocalizationEx.LoadLanguageTextName(vs.Des);

                    //传递Cell数据
                    prefabs_Cell.GetComponent<VirusSelectCell>().CellID = int.Parse(vs.VirusID);

                    prefabs_Cell.GetComponent<VirusSelectCell>().LabelMissionIndex.text = string.Format("{0} {1}", LocalizationEx.LoadLanguageTextName("Mission"), Formula.FarthestMission(prefabs_Cell.GetComponent<VirusSelectCell>().CellID));

                    //解锁的按钮可以点击
                    Formula.ChangeButtonEnable(prefabs_Cell);

                    NGUITools.AddChild(uiGrid, prefabs_Cell);

                }
            }

        }

        //未解锁的病毒显示解锁条件 show unlock requests of locked virus
        for (int i = 1; i < DataManager.Model_Virus.Count; i++)
        {
            //已解锁列表中不包含的即为未解锁
            if (!GameManager.user.DB_u_UnlockedViruses.Contains(DataManager.Model_Virus[i].VirusID))
            {
                Virus_Sheet vs = DataManager.Model_Virus[i];
                //设定每个cell的相对位置
                Vector3 pos = new Vector3(0, -uiGrid.GetComponent<UIGrid>().cellHeight * i, 0);

                prefabs_Cell.transform.localPosition = pos;

                prefabs_Cell.GetComponent<VirusSelectCell>().LabelVirusName.text = LocalizationEx.LoadLanguageTextName(vs.Name);
                prefabs_Cell.GetComponent<VirusSelectCell>().LabelVirusDes.text = LocalizationEx.LoadLanguageTextName(vs.Des);

                //传递Cell数据
                prefabs_Cell.GetComponent<VirusSelectCell>().CellID = int.Parse(vs.VirusID);

                int unlockNum = int.Parse(vs.UnlockNum) - completeMissionNum;

                prefabs_Cell.GetComponent<VirusSelectCell>().LabelMissionIndex.text = string.Format("{0} {1} {2}", LocalizationEx.LoadLanguageTextName("Need"), unlockNum, LocalizationEx.LoadLanguageTextName("Stars _To_Unlock"));

                //未解锁的按钮不可点击
                Formula.ChangeButtonDisable(prefabs_Cell);

                //添加为子物体
                NGUITools.AddChild(uiGrid, prefabs_Cell);

            }

        }

        //预制体会保留为最后一次操作他的状态，所以这里要重置一下预制体的状态，以便下次使用时状态不要太奇怪
        //reset status of prefabs
        Formula.ChangeButtonEnable(prefabs_Cell);

        //重排位置
        uiGrid.GetComponent<UIGrid>().Reposition();
        uiGrid.GetComponent<UIGrid>().repositionNow = true;
        NGUITools.SetDirty(uiGrid);

    }

    public void VirusSelectBackBtn_Click(GameObject button)
    {
        Debug.Log("VirusSelectBackBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.VIRUSSELECT], GameManager.UIS[GameManager.MODES], 0);
    }
}
