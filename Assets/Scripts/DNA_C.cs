using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public enum DNAType
{
    Virus,
    Human,
    Zombie
}

public class DNA_C : MonoBehaviour {

    public GameObject prefabs_Cell;
    public UILabel LabelGold;
    public UILabel LabelGem;

    GameObject uiGrid;
    GameObject DNA_BackBtn;
    GameObject DNA_VirusBtn;
    GameObject DNA_HumanBtn;
    GameObject DNA_ZombieBtn;

    // Use this for initialization
    void Start () {
        uiGrid = GameObject.Find("DNAGrid");

        DNA_BackBtn = GameObject.Find("DNA_BackBtn");
        UIEventListener.Get(DNA_BackBtn).onClick = DNA_BackBtn_Click;

        DNA_VirusBtn = GameObject.Find("DNA_VirusBtn");
        UIEventListener.Get(DNA_VirusBtn).onClick = DNA_VirusBtn_Click;

        DNA_HumanBtn = GameObject.Find("DNA_HumanBtn");
        UIEventListener.Get(DNA_HumanBtn).onClick = DNA_HumanBtn_Click;

        DNA_ZombieBtn = GameObject.Find("DNA_ZombieBtn");
        UIEventListener.Get(DNA_ZombieBtn).onClick = DNA_ZombieBtn_Click;
    }

    public void Enter()
    {
        //LabelGold.text = GameManager.user.Gold.ToString();
        //LabelGem.text = GameManager.user.Gem.ToString();

        LoadDNAData(DataManager.DNAUp_Virus);
    }

    public void LoadDNAData(List<DNAUp_Sheet> sheet)
    {
        LabelGold.text = GameManager.user.Gold.ToString();
        LabelGem.text = GameManager.user.Gem.ToString();

        //Use object pool to restore objects here, modify later
        //先清除数据
        Transform[] children = uiGrid.GetComponentsInChildren<Transform>();

        //若不大于1，说明此时刚刚初始化
        if(children.Length > 1)
        {
            //从1开始，不要删除DNAGrid物体本身
            for (int i = 1; i < children.Length; i++)
            {
                Destroy(children[i].gameObject);
            }
        }

        //添加数据
        for (int i = 1; i < sheet.Count; i++)
        {
            //设定每个cell的相对位置
            Vector3 pos = new Vector3(0, -uiGrid.GetComponent<UIGrid>().cellHeight * i, 0);
            prefabs_Cell.transform.localPosition = pos;

            //添加配置数据，显示配置数据
            ///////////////////////////////////////////////////////////
            ///////////////////////////////////////////////////////////
            /////////////////对金币、水晶数小于持有数的升级项，将按钮变为不可用，降低其他界面的复杂性
            ////////////////////////////////////////////////////////////
            ////////////////////////////////////////////////////////////
            ///////////////////////////////////////////////////////
            prefabs_Cell.GetComponent<DNACell>().Name.text = LocalizationEx.LoadLanguageTextName(sheet[i].Name);
            prefabs_Cell.GetComponent<DNACell>().Des.text = LocalizationEx.LoadLanguageTextName(sheet[i].Name);

            //传递Cell数据
            prefabs_Cell.GetComponent<DNACell>().CellID = int.Parse(sheet[i].ID);

            //添加用户数据，显示用户数据
            if (sheet == DataManager.DNAUp_Virus)
            {
                //传递Cell数据
                prefabs_Cell.GetComponent<DNACell>().CellType = DNAType.Virus;
                foreach (U_DNA_Virus virusData in GameManager.user.DB_u_dv)
                {
                    if (virusData.ID.ToString() == sheet[i].ID)
                    {
                        prefabs_Cell.GetComponent<DNACell>().Lv.text = string.Format("Lv:" + virusData.Lv);
                    }
                }
            }

            if (sheet == DataManager.DNAUp_Human)
            {
                prefabs_Cell.GetComponent<DNACell>().CellType = DNAType.Human;
                foreach (U_DNA_Human humanData in GameManager.user.DB_u_dh)
                {
                    if (humanData.ID.ToString() == sheet[i].ID)
                    {
                        prefabs_Cell.GetComponent<DNACell>().Lv.text = string.Format("Lv:" + humanData.Lv);
                    }
                }
            }

            if (sheet == DataManager.DNAUp_Zombie)
            {
                prefabs_Cell.GetComponent<DNACell>().CellType = DNAType.Zombie;
                foreach (U_DNA_Zombie zombieData in GameManager.user.DB_u_dz)
                {
                    if (zombieData.ID.ToString() == sheet[i].ID)
                    {
                        prefabs_Cell.GetComponent<DNACell>().Lv.text = string.Format("Lv:" + zombieData.Lv);
                    }
                }
            }
            //添加用户数据结束

            //添加为子物体
            NGUITools.AddChild(uiGrid, prefabs_Cell);
            
            //重排位置
            uiGrid.GetComponent<UIGrid>().Reposition();
            uiGrid.GetComponent<UIGrid>().repositionNow = true;
            NGUITools.SetDirty(uiGrid);
        }
    }

    public void DNA_BackBtn_Click(GameObject button)
    {
        Debug.Log("BackBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.DNA], GameManager.UIS[GameManager.MAIN],0);
    }

    //点击按钮切换到这种研究项目，移除原来的加载cell
    public void DNA_VirusBtn_Click(GameObject button)
    {
        Debug.Log("VirusBtn_Click");

        LoadDNAData(DataManager.DNAUp_Virus);
    }

    //点击按钮切换到这种研究项目，移除原来的加载cell
    public void DNA_HumanBtn_Click(GameObject button)
    {
        Debug.Log("HumanBtn_Click");

        LoadDNAData(DataManager.DNAUp_Human);
    }

    //点击按钮切换到这种研究项目，移除原来的加载cell
    public void DNA_ZombieBtn_Click(GameObject button)
    {
        Debug.Log("ZombieBtn_Click");

        LoadDNAData(DataManager.DNAUp_Zombie);
    }
}
