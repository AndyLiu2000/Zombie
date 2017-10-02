using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VirusSelectCell : MonoBehaviour {

    public UILabel LabelVirusName;
    public UILabel LabelVirusDes;
    public UILabel LabelMissionIndex;

    public GameObject self_Cell;
    private VirusSelectCell cell;

    //数据相关
    public int CellID;

    public void Cell_Click()
    {
        cell = self_Cell.GetComponent<VirusSelectCell>();

        GameManager.ChangePanel(GameManager.UIS[GameManager.VIRUSSELECT], GameManager.UIS[GameManager.CAMPAIGN], cell.CellID);

        //传递关卡参数
        //GameObject.Find(GameManager.CAMPAIGN).GetComponent<Campaign_C>().Enter(cell.CellID);
    }
}
