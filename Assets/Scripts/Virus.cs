using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Virus {

    //Model：Virus
    public int VirusID;
    public float InfectSpeed;
    public float InfectHuman_1;
    public float InfectHuman_2;
    public float InfectHuman_3;
    public float InfectHuman_4;
    public float InfectHuman_5;
    public float InfectBlock_Climate_1;
    public float InfectBlock_Climate_2;
    public float InfectBlock_Climate_3;
    public float InfectBlock_Envi_1;
    public float InfectBlock_Envi_2;
    public float InfectBlock_Envi_3;
    public float CommunicateRate;
    public float CommunicateHuman_1;
    public float CommunicateHuman_2;
    public float CommunicateHuman_3;
    public float CommunicateHuman_4;
    public float CommunicateHuman_5;
    public float CommunicateBlock_Climate_1;
    public float CommunicateBlock_Climate_2;
    public float CommunicateBlock_Climate_3;
    public float CommunicateBlock_Envi_1;
    public float CommunicateBlock_Envi_2;
    public float CommunicateBlock_Envi_3;
    public int InitialSP;
    public string Name;
    public string Res;
    public string StrategyID;

    //战斗变量
    public Environment Envi;
    public Climate Clim;

    public Virus(int virusID, int curMissionID)
    {
        //Model - DNAUp + Mission
        VirusID = virusID;
        Virus_Sheet virus = new Virus_Sheet();
        foreach (Virus_Sheet v in DataManager.Model_Virus)
        {
            if (v.VirusID == VirusID.ToString())
            {
                virus = v;
                break;
            }
        }

        //Model值
        InfectSpeed = float.Parse(virus.InfectSpeed);
        InfectHuman_1 = float.Parse(virus.InfectHuman_1);
        InfectHuman_2 = float.Parse(virus.InfectHuman_2);
        InfectHuman_3 = float.Parse(virus.InfectHuman_3);
        InfectHuman_4 = float.Parse(virus.InfectHuman_4);
        InfectHuman_5 = float.Parse(virus.InfectHuman_5);
        InfectBlock_Climate_1 = float.Parse(virus.InfectBlock_Climate_1);
        InfectBlock_Climate_2 = float.Parse(virus.InfectBlock_Climate_2);
        InfectBlock_Climate_3 = float.Parse(virus.InfectBlock_Climate_3);
        InfectBlock_Envi_1 = float.Parse(virus.InfectBlock_Envi_1);
        InfectBlock_Envi_2 = float.Parse(virus.InfectBlock_Envi_2);
        InfectBlock_Envi_3 = float.Parse(virus.InfectBlock_Envi_3);
        CommunicateRate = float.Parse(virus.CommunicateRate);
        CommunicateHuman_1 = float.Parse(virus.CommunicateHuman_1);
        CommunicateHuman_2 = float.Parse(virus.CommunicateHuman_2);
        CommunicateHuman_3 = float.Parse(virus.CommunicateHuman_3);
        CommunicateHuman_4 = float.Parse(virus.CommunicateHuman_4);
        CommunicateHuman_5 = float.Parse(virus.CommunicateHuman_5);
        CommunicateBlock_Climate_1 = float.Parse(virus.CommunicateBlock_Climate_1);
        CommunicateBlock_Climate_2 = float.Parse(virus.CommunicateBlock_Climate_2);
        CommunicateBlock_Climate_3 = float.Parse(virus.CommunicateBlock_Climate_3);
        CommunicateBlock_Envi_1 = float.Parse(virus.CommunicateBlock_Envi_1);
        CommunicateBlock_Envi_2 = float.Parse(virus.CommunicateBlock_Envi_2);
        CommunicateBlock_Envi_3 = float.Parse(virus.CommunicateBlock_Envi_3);
        InitialSP = int.Parse(virus.InitialSP);
        StrategyID = virus.StrategyID;

        //DNA值
        InfectSpeed = (float)(InfectSpeed * Formula.FieldNameToValue_Virus("InfectSpeed"));
        InfectHuman_1 = (float)(InfectHuman_1 * Formula.FieldNameToValue_Virus("InfectHuman_1"));
        InfectHuman_2 = (float)(InfectHuman_2 * Formula.FieldNameToValue_Virus("InfectHuman_2"));
        InfectHuman_3 = (float)(InfectHuman_3 * Formula.FieldNameToValue_Virus("InfectHuman_3"));
        InfectHuman_4 = (float)(InfectHuman_4 * Formula.FieldNameToValue_Virus("InfectHuman_4"));
        InfectHuman_5 = (float)(InfectHuman_5 * Formula.FieldNameToValue_Virus("InfectHuman_5"));
        InfectBlock_Climate_1 = (float)(InfectBlock_Climate_1 * Formula.FieldNameToValue_Virus("InfectBlock_Climate_1"));
        InfectBlock_Climate_2 = (float)(InfectBlock_Climate_2 * Formula.FieldNameToValue_Virus("InfectBlock_Climate_2"));
        InfectBlock_Climate_3 = (float)(InfectBlock_Climate_3 * Formula.FieldNameToValue_Virus("InfectBlock_Climate_3"));
        InfectBlock_Envi_1 = (float)(InfectBlock_Envi_1 * Formula.FieldNameToValue_Virus("InfectBlock_Envi_1"));
        InfectBlock_Envi_2 = (float)(InfectBlock_Envi_2 * Formula.FieldNameToValue_Virus("InfectBlock_Envi_2"));
        InfectBlock_Envi_3 = (float)(InfectBlock_Envi_3 * Formula.FieldNameToValue_Virus("InfectBlock_Envi_3"));
        CommunicateRate = (float)(CommunicateRate * Formula.FieldNameToValue_Virus("CommunicateRate"));
        CommunicateHuman_1 = (float)(CommunicateHuman_1 * Formula.FieldNameToValue_Virus("CommunicateHuman_1"));
        CommunicateHuman_2 = (float)(CommunicateHuman_2 * Formula.FieldNameToValue_Virus("CommunicateHuman_2"));
        CommunicateHuman_3 = (float)(CommunicateHuman_3 * Formula.FieldNameToValue_Virus("CommunicateHuman_3"));
        CommunicateHuman_4 = (float)(CommunicateHuman_4 * Formula.FieldNameToValue_Virus("CommunicateHuman_4"));
        CommunicateHuman_5 = (float)(CommunicateHuman_5 * Formula.FieldNameToValue_Virus("CommunicateHuman_5"));
        CommunicateBlock_Climate_1 = (float)(CommunicateBlock_Climate_1 * Formula.FieldNameToValue_Virus("CommunicateBlock_Climate_1"));
        CommunicateBlock_Climate_2 = (float)(CommunicateBlock_Climate_2 * Formula.FieldNameToValue_Virus("CommunicateBlock_Climate_2"));
        CommunicateBlock_Climate_3 = (float)(CommunicateBlock_Climate_3 * Formula.FieldNameToValue_Virus("CommunicateBlock_Climate_3"));
        CommunicateBlock_Envi_1 = (float)(CommunicateBlock_Envi_1 * Formula.FieldNameToValue_Virus("CommunicateBlock_Envi_1"));
        CommunicateBlock_Envi_2 = (float)(CommunicateBlock_Envi_2 * Formula.FieldNameToValue_Virus("CommunicateBlock_Envi_2"));
        CommunicateBlock_Envi_3 = (float)(CommunicateBlock_Envi_3 * Formula.FieldNameToValue_Virus("CommunicateBlock_Envi_3"));

        //return this;

        //没有Mission值
    }

    public Virus VirusBattleEvent()
    {
        //Virus基础值 + 事件影响值
        return this;
    }
}
