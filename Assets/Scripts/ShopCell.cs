using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopCell : MonoBehaviour {

    public UILabel LabelIAPName;
    public UILabel LabelIAPPrice;

    public GameObject self_Cell;
    private ShopCell cell;

    //数据相关
    public int CellID;

    public void Cell_Click()
    {
        cell = self_Cell.GetComponent<ShopCell>();
        Debug.Log("CellID = " + cell.CellID);

        //扣款检查

        //扣款成功后的掉落操作
        foreach(IAP_Sheet iap in DataManager.IAP_Item)
        {
            if(iap.LootID == cell.CellID.ToString())
            {
                Formula.Loot(iap.LootID);
            }
        }
        
    }
}
