using UnityEngine;
using System.Collections;

public class Shop_C : MonoBehaviour {

    private GameObject uiGrid;
    public GameObject prefabs_Cell;

    GameObject Shop_BackBtn;

    // Use this for initialization
    void Start () {
        uiGrid = GameObject.Find("ShopGrid");

        Shop_BackBtn = GameObject.Find("Shop_BackBtn");
        UIEventListener.Get(Shop_BackBtn).onClick = Shop_BackBtn_Click;
    }

    public void Enter()
    {
        LoadShopData();
    }

    public void LoadShopData()
    {
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

        //添加数据
        for (int i = 1; i < DataManager.IAP_Item.Count; i++)
        {
            //设定每个cell的相对位置
            Vector3 pos = new Vector3(0, -uiGrid.GetComponent<UIGrid>().cellHeight * i, 0);
            prefabs_Cell.transform.localPosition = pos;

            //添加配置数据，显示配置数据
            //价格的读取方法
            prefabs_Cell.GetComponent<ShopCell>().LabelIAPName.text = LocalizationEx.LoadLanguageTextName(DataManager.IAP_Item[i].PackageName);
            prefabs_Cell.GetComponent<ShopCell>().LabelIAPPrice.text = LocalizationEx.LoadLanguageTextName(DataManager.IAP_Item[i].DollarPrice);

            //传递Cell数据
            prefabs_Cell.GetComponent<ShopCell>().CellID = int.Parse(DataManager.IAP_Item[i].IAPPackageID);

            //添加为子物体
            NGUITools.AddChild(uiGrid, prefabs_Cell);

            //重排位置
            uiGrid.GetComponent<UIGrid>().Reposition();
            uiGrid.GetComponent<UIGrid>().repositionNow = true;
            NGUITools.SetDirty(uiGrid);
        }
    }

    public void Shop_BackBtn_Click(GameObject b)
    {
        Debug.Log("BackBtn_Click");
        GameManager.ChangePanel(GameManager.UIS[GameManager.SHOP], GameManager.UIS[GameManager.MAIN], 0);
    }
}
