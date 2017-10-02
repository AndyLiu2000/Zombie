using UnityEngine;
using System.Collections;

public class Modes_C : MonoBehaviour {

    GameObject Modes_BackBtn;
    GameObject Modes_CampaignBtn;
    GameObject Modes_ContinueBtn;
    GameObject Modes_TrialBtn;
    GameObject Modes_RandomBtn;

    private void Start()
    {
        Modes_BackBtn = GameObject.Find("Modes_BackBtn");
        UIEventListener.Get(Modes_BackBtn).onClick = Modes_BackBtn_Click;

        Modes_CampaignBtn = GameObject.Find("Modes_CampaignBtn");
        UIEventListener.Get(Modes_CampaignBtn).onClick = Modes_CampaignBtn_Click;

        Modes_ContinueBtn = GameObject.Find("Modes_ContinueBtn");
        UIEventListener.Get(Modes_ContinueBtn).onClick = Modes_ContinueBtn_Click;

        Modes_TrialBtn = GameObject.Find("Modes_TrialBtn");
        UIEventListener.Get(Modes_TrialBtn).onClick = Modes_TrialBtn_Click;

        Modes_RandomBtn = GameObject.Find("Modes_RandomBtn");
        UIEventListener.Get(Modes_RandomBtn).onClick = Modes_RandomBtn_Click;

    }

    public void ButtonClick()
    {
        Debug.Log("MainButton pressed");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MODES], GameManager.UIS[GameManager.VIRUSSELECT], 0);
        //GameObject.Find(GameManager.CAMPAIGN).GetComponent<Campaign_C>().LoadCampaignData();
    }

    public void Modes_BackBtn_Click(GameObject b)
    {
        Debug.Log("BackBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MODES], GameManager.UIS[GameManager.MAIN], 0);
    }

    public void Modes_CampaignBtn_Click(GameObject b)
    {
        Debug.Log("CampaignBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MODES], GameManager.UIS[GameManager.VIRUSSELECT], 0);
    }

    public void Modes_ContinueBtn_Click(GameObject b)
    {
        Debug.Log("ContinueBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MODES], GameManager.UIS[GameManager.VIRUSSELECT], 0);
    }

    public void Modes_TrialBtn_Click(GameObject b)
    {
        Debug.Log("TrialBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MODES], GameManager.UIS[GameManager.VIRUSSELECT], 0);
    }

    public void Modes_RandomBtn_Click(GameObject b)
    {
        Debug.Log("RandomBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MODES], GameManager.UIS[GameManager.VIRUSSELECT], 0);
    }
}
