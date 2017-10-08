using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class Main_C : MonoBehaviour {

    public UILabel LabelGold;
    public UILabel LabelGem;

    public GameObject Main_StartBtn;
    public GameObject Main_DNABtn;
    public GameObject Main_OptionBtn;
    public GameObject Main_ShopBtn;

    private void Start()
    {
        UIEventListener.Get(Main_StartBtn).onClick = Main_StartBtn_Click;
        UIEventListener.Get(Main_DNABtn).onClick = Main_DNABtn_Click;
        UIEventListener.Get(Main_OptionBtn).onClick = Main_OptionBtn_Click;
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
