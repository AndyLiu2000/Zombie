using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CampaignCell : MonoBehaviour {

    public UILabel LabelMissionName;
    public UILabel LabelMissionFlag;

    public GameObject self_Cell;
    private CampaignCell cell;
    Battle_C BC;

    private void Start()
    {
        BC = GameObject.Find(GameManager.BATTLE).GetComponent<Battle_C>();
    }

    //数据相关
    public int CellID;

    public void Cell_Click()
    {
        cell = self_Cell.GetComponent<CampaignCell>();

        GameManager.ChangePanel(GameManager.UIS[GameManager.CAMPAIGN], GameManager.UIS[GameManager.BATTLE],0);

        //传递关卡参数
        BC.Enter(GameManager.UIS[GameManager.CAMPAIGN].GetComponent<Campaign_C>().VirusID, cell.CellID,Modes.Campaign);

        AudioManager.playMusicByName(AudioManager.BattleBG);
    }
}
