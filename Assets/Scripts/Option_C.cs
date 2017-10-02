using UnityEngine;
using System.Collections;

public class Option_C : MonoBehaviour {

    public UILabel LabelOption;

    private UISlider musicBarSlider;
    private UIToggle soundToggle;

    GameObject Option_BackBtn;
    GameObject LanguageRight;
    GameObject LanguageLeft;
    UILabel LabelLanguageName;
    UILabel LabelLanguage;

    void Start() {
        
        musicBarSlider = GameObject.Find("MusicBar").GetComponent<UISlider>();
        soundToggle = GameObject.Find("SoundSwitch").GetComponent<UIToggle>();

        Option_BackBtn = GameObject.Find("Option_BackBtn");
        UIEventListener.Get(Option_BackBtn).onClick = Option_BackBtn_Click;

        LanguageRight = GameObject.Find("LanguageRight");
        UIEventListener.Get(LanguageRight).onClick = LanguageRight_Click;

        LanguageLeft = GameObject.Find("LanguageLeft");
        UIEventListener.Get(LanguageLeft).onClick = LanguageLeft_Click;

        LabelLanguageName = GameObject.Find("LanguagName").GetComponent<UILabel>();

        LabelLanguage = GameObject.Find("Language").GetComponent<UILabel>();

        //musicBarSlider.value = AudioManager.BgVolume;
        //soundToggle.value = AudioManager.IsSoundOn;

        //处理从存档中读取音量的操作，若无存档，则读取默认数值
    }

    public void Enter()
    {
        musicBarSlider.value = AudioManager.BgVolume;
        soundToggle.value = AudioManager.IsSoundOn;

        LabelOption.text = LocalizationEx.LoadLanguageTextName("Option");
        LabelLanguageName.text = LocalizationEx.LoadLanguageTextName("LanguageName");
        LabelLanguage.text = LocalizationEx.LoadLanguageTextName("Language");
    }

    // Update is called once per frame
    void Update() {
        AudioManager.ChangeBGVolumeTo(musicBarSlider.value);
        AudioManager.ChangeMEToggle(soundToggle.value);
    }

    public void Option_BackBtn_Click(GameObject b)
    {
        Debug.Log("BackBtn_Click");

        //音量存档
        AudioManager.BgVolume = musicBarSlider.value;
        AudioManager.IsSoundOn = soundToggle.value;

        PlayerPrefs.SetFloat("MusicVolume", AudioManager.BgVolume);
        PlayerPrefs.SetString("IsSoundOn", AudioManager.IsSoundOn.ToString());

        //处理存储音量

        GameManager.ChangePanel(GameManager.UIS[GameManager.OPTION], GameManager.UIS[GameManager.MAIN], 0);
    }

    public void LanguageRight_Click(GameObject b)
    {
        LocalizationEx.SaveLanguage(LanguageChange.right);
        Enter();
    }

    public void LanguageLeft_Click(GameObject b)
    {
        LocalizationEx.SaveLanguage(LanguageChange.left);
        Enter();
    }


}
