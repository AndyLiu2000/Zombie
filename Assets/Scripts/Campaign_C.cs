using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class Campaign_C : MonoBehaviour {

    private GameObject uiGrid;
    public GameObject prefabs_Cell;
    public int VirusID;
    GameObject Campaign_BackBtn;

    // Use this for initialization
    void Start () {
        uiGrid = GameObject.Find("CampaignGrid");

        Campaign_BackBtn = GameObject.Find("Campaign_BackBtn");
        UIEventListener.Get(Campaign_BackBtn).onClick = Campaign_BackBtn_Click;
    }

    public void Enter(int curVirusID)
    {
        VirusID = curVirusID;
        LoadCampaignData();
    }

    public void LoadCampaignData()
    {
        //创建数据 init mission data
        Debug.Log("Init Mission-data");
        //Use object pool to restore objects here, modify later
        //先清除数据 clear data first
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

        //添加数据 set data
        for (int i = DataManager.Mission_Parameter.Count - 1; i > 0; i--)
        {
            foreach (U_MissionFlag missionData in GameManager.user.DB_u_mf)
            {
                if (missionData.MissionID.ToString() == DataManager.Mission_Parameter[i].MissionID && missionData.VirusID == VirusID)
                {
                    //已通关的关卡显示出来 show completed missioins
                    if (missionData.Flag)
                    {
                        //设定每个cell的相对位置 set position of every cell
                        Vector3 pos = new Vector3(0, -uiGrid.GetComponent<UIGrid>().cellHeight * i, 0);
                        prefabs_Cell.transform.localPosition = pos;

                        //添加配置数据，显示配置数据 show data
                        prefabs_Cell.GetComponent<CampaignCell>().LabelMissionName.text = LocalizationEx.LoadLanguageTextName(DataManager.Mission_Parameter[i].MissionID);

                        //传递Cell数据 transfer cell data
                        prefabs_Cell.GetComponent<CampaignCell>().CellID = int.Parse(DataManager.Mission_Parameter[i].MissionID);

                        //添加用户数据，显示用户数据 set and show user data
                        foreach (U_MissionFlag md in GameManager.user.DB_u_mf)
                        {
                            if (md.MissionID.ToString() == DataManager.Mission_Parameter[i].MissionID)
                            {
                                prefabs_Cell.GetComponent<CampaignCell>().LabelMissionFlag.text = "Complete!";
                            }
                        }

                        //添加为子物体
                        NGUITools.AddChild(uiGrid, prefabs_Cell);

                        //重排位置
                        uiGrid.GetComponent<UIGrid>().Reposition();
                        uiGrid.GetComponent<UIGrid>().repositionNow = true;
                        NGUITools.SetDirty(uiGrid);
                    }
                    else
                    {
                        //刚开启的关卡显示出来
                        if (Formula.FarthestMission(missionData.VirusID) == i)
                        {
                            //设定每个cell的相对位置
                            Vector3 pos = new Vector3(0, -uiGrid.GetComponent<UIGrid>().cellHeight * i, 0);
                            prefabs_Cell.transform.localPosition = pos;

                            //添加配置数据，显示配置数据
                            prefabs_Cell.GetComponent<CampaignCell>().LabelMissionName.text = LocalizationEx.LoadLanguageTextName(DataManager.Mission_Parameter[i].MissionID);

                            //传递Cell数据
                            prefabs_Cell.GetComponent<CampaignCell>().CellID = int.Parse(DataManager.Mission_Parameter[i].MissionID);

                            //添加用户数据，显示用户数据
                            foreach (U_MissionFlag md in GameManager.user.DB_u_mf)
                            {
                                if (md.MissionID.ToString() == DataManager.Mission_Parameter[i].MissionID)
                                {
                                    prefabs_Cell.GetComponent<CampaignCell>().LabelMissionFlag.text = "New!";
                                }
                            }

                            //添加为子物体
                            NGUITools.AddChild(uiGrid, prefabs_Cell);

                            //重排位置
                            uiGrid.GetComponent<UIGrid>().Reposition();
                            uiGrid.GetComponent<UIGrid>().repositionNow = true;
                            NGUITools.SetDirty(uiGrid);
                        }
                    }  
                }
            }
        }
    }

    public void Campaign_BackBtn_Click(GameObject b)
    {
        Debug.Log("BackBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.CAMPAIGN], GameManager.UIS[GameManager.VIRUSSELECT],0);
    }
}
