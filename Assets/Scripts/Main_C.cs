using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class Main_C : MonoBehaviour {

    public UILabel LabelGold;
    public UILabel LabelGem;

    GameObject Main_StartBtn;
    GameObject Main_DNABtn;
    GameObject Main_GuideBtn;
    GameObject Main_OptionBtn;
    GameObject Main_ShopBtn;

    private void Start()
    {
        Main_StartBtn = GameObject.Find("Main_StartBtn");
        UIEventListener.Get(Main_StartBtn).onClick = Main_StartBtn_Click;

        Main_DNABtn = GameObject.Find("Main_DNABtn");
        UIEventListener.Get(Main_DNABtn).onClick = Main_DNABtn_Click;

        Main_GuideBtn = GameObject.Find("Main_GuideBtn");
        UIEventListener.Get(Main_GuideBtn).onClick = Main_GuideBtn_Click;

        Main_OptionBtn = GameObject.Find("Main_OptionBtn");
        UIEventListener.Get(Main_OptionBtn).onClick = Main_OptionBtn_Click;

        Main_ShopBtn = GameObject.Find("Main_ShopBtn");
        UIEventListener.Get(Main_ShopBtn).onClick = Main_ShopBtn_Click;
    }

    public void Enter()
    {
        LabelGold.text = GameManager.user.Gold.ToString();
        LabelGem.text = GameManager.user.Gem.ToString();
    }

    public void Main_StartBtn_Click(GameObject button)
    {
        Debug.Log("StartBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MAIN], GameManager.UIS[GameManager.MODES],0);
    }

    public void Main_DNABtn_Click(GameObject b)
    {
        Debug.Log("DNABtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MAIN], GameManager.UIS[GameManager.DNA],0);
    }

    public void Main_GuideBtn_Click(GameObject b)
    {
        Debug.Log("GuideBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MAIN], GameManager.UIS[GameManager.OPTION],0);
        //GameManager.UIS[GameManager.OPTION].GetComponent<Option_C>().enter();
    }

    public void Main_OptionBtn_Click(GameObject b)
    {
        Debug.Log("OptionBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MAIN], GameManager.UIS[GameManager.OPTION],0);
    }

    public void Main_ShopBtn_Click(GameObject b)
    {
        Debug.Log("ShopBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.MAIN], GameManager.UIS[GameManager.SHOP],0);
    }
}
