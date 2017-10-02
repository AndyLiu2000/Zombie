using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DNACell : MonoBehaviour {

    //界面相关
    public UILabel Name;
    public UILabel Lv;
    public UILabel Des;
    public GameObject self_Cell;
    DNA_C DNA_C;

    private DNACell cell;

    //数据相关
    public int CellID;
    public DNAType CellType;

    private void Start()
    {
        DNA_C = GameObject.Find(GameManager.DNA).GetComponent<DNA_C>();
    }

    public void GoldUpgrade_Click()
    {
        cell = self_Cell.GetComponent<DNACell>();
        long gold_cost = 0;

        //消耗金币，这里进行金币消耗数的计算 consume gold
        switch (cell.CellType)
        {
            case DNAType.Virus:
                Debug.Log("Virus LevelUp");
                gold_cost = long.Parse(DataManager.DNAUp_Virus[cell.CellID].GoldCost) * GameManager.user.DB_u_dv[cell.CellID - 1].Lv;
                Debug.Log("gold_cost = " + gold_cost);

                //升级判断与处理 check upgrading
                if (GameManager.user.Gold >= gold_cost)
                {
                    //可以升级
                    GameManager.user.Gold -= gold_cost;
                    GameManager.user.DB_u_dv[cell.CellID - 1].Lv += 1;

                    //存档
                    GameManager.SaveData();

                    //刷新Cell数据 update cell data
                    DNA_C.LoadDNAData(DataManager.DNAUp_Virus);
                }
                else
                {
                    //暂时不做任何操作，以后可以加缺少道具的提示
                }

                break;
            case DNAType.Human:
                Debug.Log("Human LevelUp");
                gold_cost = long.Parse(DataManager.DNAUp_Virus[cell.CellID].GoldCost) * GameManager.user.DB_u_dh[cell.CellID - 1].Lv;
                Debug.Log("gold_cost = " + gold_cost);

                //升级判断与处理
                if (GameManager.user.Gold >= gold_cost)
                {
                    //可以升级
                    GameManager.user.Gold -= gold_cost;
                    GameManager.user.DB_u_dh[cell.CellID - 1].Lv += 1;

                    //存档
                    GameManager.SaveData();

                    //刷新Cell数据
                    DNA_C.LoadDNAData(DataManager.DNAUp_Human);
                }
                else
                {
                    //暂时不做任何操作，以后可以加缺少道具的提示
                }

                break;
            case DNAType.Zombie:
                Debug.Log("Zombie LevelUp");
                gold_cost = long.Parse(DataManager.DNAUp_Virus[cell.CellID].GoldCost) * GameManager.user.DB_u_dz[cell.CellID - 1].Lv;
                Debug.Log("gold_cost = " + gold_cost);

                //升级判断与处理
                if (GameManager.user.Gold >= gold_cost)
                {
                    //可以升级
                    GameManager.user.Gold -= gold_cost;
                    GameManager.user.DB_u_dz[cell.CellID - 1].Lv += 1;

                    //存档
                    GameManager.SaveData();

                    //刷新Cell数据
                    DNA_C.LoadDNAData(DataManager.DNAUp_Zombie);
                }
                else
                {
                    //暂时不做任何操作，以后可以加缺少道具的提示
                }

                break;
        }

    }

    public void GemUpgrade_Click()
    {
        cell = self_Cell.GetComponent<DNACell>();
        long gem_cost = 0;

        //消耗金币，这里进行金币消耗数的计算
        switch (cell.CellType)
        {
            case DNAType.Virus:
                Debug.Log("Virus LevelUp");
                gem_cost = long.Parse(DataManager.DNAUp_Virus[cell.CellID].GemCost) * GameManager.user.DB_u_dv[cell.CellID - 1].Lv;
                Debug.Log("gem_cost = " + gem_cost);

                //升级判断与处理
                if (GameManager.user.Gem >= gem_cost)
                {
                    //可以升级
                    GameManager.user.Gem -= gem_cost;
                    GameManager.user.DB_u_dv[cell.CellID - 1].Lv += 1;

                    //存档
                    GameManager.SaveData();

                    //刷新Cell数据
                    DNA_C.LoadDNAData(DataManager.DNAUp_Virus);
                }
                else
                {
                    //暂时不做任何操作，以后可以加缺少道具的提示
                }

                break;
            case DNAType.Human:
                Debug.Log("Human LevelUp");
                gem_cost = long.Parse(DataManager.DNAUp_Human[cell.CellID].GemCost) * GameManager.user.DB_u_dh[cell.CellID - 1].Lv;
                Debug.Log("gem_cost = " + gem_cost);

                //升级判断与处理
                if (GameManager.user.Gem >= gem_cost)
                {
                    //可以升级
                    GameManager.user.Gem -= gem_cost;
                    GameManager.user.DB_u_dh[cell.CellID - 1].Lv += 1;

                    //存档
                    GameManager.SaveData();

                    //刷新Cell数据
                    DNA_C.LoadDNAData(DataManager.DNAUp_Human);
                }
                else
                {
                    //暂时不做任何操作，以后可以加缺少道具的提示
                }

                break;
            case DNAType.Zombie:
                Debug.Log("Zombie LevelUp");
                gem_cost = long.Parse(DataManager.DNAUp_Zombie[cell.CellID].GemCost) * GameManager.user.DB_u_dz[cell.CellID - 1].Lv;
                Debug.Log("gem_cost = " + gem_cost);

                //升级判断与处理
                if (GameManager.user.Gem >= gem_cost)
                {
                    //可以升级
                    GameManager.user.Gem -= gem_cost;
                    GameManager.user.DB_u_dz[cell.CellID - 1].Lv += 1;

                    //存档
                    GameManager.SaveData();

                    //刷新Cell数据
                    DNA_C.LoadDNAData(DataManager.DNAUp_Zombie);
                }
                else
                {
                    //暂时不做任何操作，以后可以加缺少道具的提示
                }

                break;
        }
    }
}
