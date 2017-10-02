using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class AudioManager : MonoBehaviour {

    //存储所有声音物体名 save all names of audio objects
    public const string MainBG = "MainBGM";
    public const string BattleBG = "BattleBGM";

    //记录当前播放的声音物体名 object name that currently playing audio
    private static string currrentBG = "";

    //声明音量字段 volume
    static float bgVolume;
    static bool isSoundOn;

    public static float BgVolume{get{return bgVolume;}set{bgVolume = value;}}
    public static bool IsSoundOn{get{return isSoundOn;}set{isSoundOn = value;}}

    //建立声音数据库 audio database
    private static Dictionary<string, AudioSource> AudioSources = new Dictionary<string, AudioSource>();

    void Awake () {
        Debug.Log("AudioManager.start");
        AudioSources.Add(MainBG,GameObject.Find(MainBG).GetComponent<AudioSource>());
        AudioSources.Add(BattleBG, GameObject.Find(BattleBG).GetComponent<AudioSource>());

        //设定初始音量，要做读设置的处理 init volume
        bgVolume = 0.9f;
        isSoundOn = true;

        //playMusicByName(MainBG);
    }

    void Start()
    {
        playMusicByName(MainBG);
    }

    public static void playMusicByName(string musicName)
    {
        foreach (string bgName in AudioSources.Keys)
        {
            if (bgName == currrentBG)
            {
                AudioSources[bgName].Stop();
            }
        }

        AudioSources[musicName].volume = bgVolume;
        AudioSources[musicName].Play();
        currrentBG = musicName;
    }

    public static void ChangeBGVolumeTo(float volume)
    {
        bgVolume = volume;
        foreach (string bgName in AudioSources.Keys)
        {
            AudioSources[bgName].volume = bgVolume;
        }
    }

    public static void ChangeMEToggle(bool soundOn)
    {
        isSoundOn = soundOn;
        if (isSoundOn)
        {
            play();
        }
        else
        {
            Mute();
        }
    }

    public static void Mute()
    {
        AudioListener audioListener = GameObject.Find("MainCamera").GetComponent<AudioListener>();
        audioListener.enabled = false;
    }

    public static void play()
    {
        AudioListener audioListener = GameObject.Find("MainCamera").GetComponent<AudioListener>();
        audioListener.enabled = true;
        
    }

}
