#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<U_DNA>[]
struct List_1U5BU5D_t2454051223;
// System.Collections.Generic.List`1<U_MissionFlag>
struct List_1_t4164527967;
// System.Collections.Generic.List`1<System.String>
struct List_1_t393358461;
// System.Collections.Generic.List`1<F_U_DNA>[]
struct List_1U5BU5D_t4105820520;
// System.Collections.Generic.List`1<F_U_MissionFlag>
struct List_1_t2299772322;
// System.Char[]
struct CharU5BU5D_t1705485309;
// System.Void
struct Void_t4233125135;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1822187835;
// System.Collections.Generic.List`1<BattleEvent_Sheet>
struct List_1_t4195956191;
// System.Collections.Generic.List`1<UnlockMission_Sheet>
struct List_1_t3831305819;
// System.Collections.Generic.List`1<Infection_Sheet>
struct List_1_t2318151775;
// System.Collections.Generic.List`1<Damage_Sheet>
struct List_1_t4159906741;
// System.Collections.Generic.List`1<Virus_Sheet>
struct List_1_t321889037;
// System.Collections.Generic.List`1<Human_Sheet>
struct List_1_t3846689979;
// System.Collections.Generic.List`1<Zombie_Sheet>
struct List_1_t2496957332;
// System.Collections.Generic.List`1<BattleStrategy_Sheet>
struct List_1_t839680537;
// System.Collections.Generic.List`1<InGameEvent_Sheet>
struct List_1_t4098374998;
// System.Collections.Generic.List`1<Loot_Sheet>
struct List_1_t3784497398;
// System.Collections.Generic.List`1<IAP_Sheet>
struct List_1_t968420256;
// System.Collections.Generic.List`1<Language_Sheet>
struct List_1_t724391834;
// System.Collections.Generic.List`1<DNAUp_Sheet>
struct List_1_t2797138469;
// System.Collections.Generic.List`1<SpecialAbility_Sheet>
struct List_1_t1017664130;
// System.Collections.Generic.List`1<Mission_Sheet>
struct List_1_t1468252243;
// UnityEngine.GameObject
struct GameObject_t2056972088;
// UISprite
struct UISprite_t3128965256;
// UILabel
struct UILabel_t2887975127;
// Battle_C
struct Battle_C_t1550641137;
// ObjectPool`2<UnityEngine.GameObject,Virus_Sheet>
struct ObjectPool_2_t3013436252;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource>
struct Dictionary_2_t1010914177;
// Gene
struct Gene_t3376799142;
// Virus
struct Virus_t2139413478;
// System.Collections.ArrayList
struct ArrayList_t825968487;
// ObjectPool`2<UnityEngine.GameObject,Mission_Sheet>
struct ObjectPool_2_t4159799458;
// System.String[]
struct StringU5BU5D_t4060475322;
// ObjectPool`2<UnityEngine.GameObject,DNAUp_Sheet>
struct ObjectPool_2_t1193718388;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t3274352129;
// DNA_C
struct DNA_C_t3786028506;
// User
struct User_t1595548040;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t2975915519;
// System.Collections.IEnumerator
struct IEnumerator_t2831473847;
// UISlider
struct UISlider_t4773296;
// UIToggle
struct UIToggle_t1036047822;
// ObjectPool`2<UnityEngine.GameObject,IAP_Sheet>
struct ObjectPool_2_t3659967471;
// UnityEngine.Camera
struct Camera_t2825083326;
// UnityEngine.Transform
struct Transform_t1919398844;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef INGAMEEVENT_SHEET_T505334484_H
#define INGAMEEVENT_SHEET_T505334484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGameEvent_Sheet
struct  InGameEvent_Sheet_t505334484  : public RuntimeObject
{
public:
	// System.String InGameEvent_Sheet::EventID
	String_t* ___EventID_0;
	// System.String InGameEvent_Sheet::Type
	String_t* ___Type_1;
	// System.String InGameEvent_Sheet::TypeParam
	String_t* ___TypeParam_2;
	// System.String InGameEvent_Sheet::FieldName
	String_t* ___FieldName_3;
	// System.String InGameEvent_Sheet::EventType
	String_t* ___EventType_4;
	// System.String InGameEvent_Sheet::Value
	String_t* ___Value_5;
	// System.String InGameEvent_Sheet::SkillIconName
	String_t* ___SkillIconName_6;
	// System.String InGameEvent_Sheet::DesID
	String_t* ___DesID_7;
	// System.String InGameEvent_Sheet::UpgradeEffectID
	String_t* ___UpgradeEffectID_8;

public:
	inline static int32_t get_offset_of_EventID_0() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___EventID_0)); }
	inline String_t* get_EventID_0() const { return ___EventID_0; }
	inline String_t** get_address_of_EventID_0() { return &___EventID_0; }
	inline void set_EventID_0(String_t* value)
	{
		___EventID_0 = value;
		Il2CppCodeGenWriteBarrier((&___EventID_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_TypeParam_2() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___TypeParam_2)); }
	inline String_t* get_TypeParam_2() const { return ___TypeParam_2; }
	inline String_t** get_address_of_TypeParam_2() { return &___TypeParam_2; }
	inline void set_TypeParam_2(String_t* value)
	{
		___TypeParam_2 = value;
		Il2CppCodeGenWriteBarrier((&___TypeParam_2), value);
	}

	inline static int32_t get_offset_of_FieldName_3() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___FieldName_3)); }
	inline String_t* get_FieldName_3() const { return ___FieldName_3; }
	inline String_t** get_address_of_FieldName_3() { return &___FieldName_3; }
	inline void set_FieldName_3(String_t* value)
	{
		___FieldName_3 = value;
		Il2CppCodeGenWriteBarrier((&___FieldName_3), value);
	}

	inline static int32_t get_offset_of_EventType_4() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___EventType_4)); }
	inline String_t* get_EventType_4() const { return ___EventType_4; }
	inline String_t** get_address_of_EventType_4() { return &___EventType_4; }
	inline void set_EventType_4(String_t* value)
	{
		___EventType_4 = value;
		Il2CppCodeGenWriteBarrier((&___EventType_4), value);
	}

	inline static int32_t get_offset_of_Value_5() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___Value_5)); }
	inline String_t* get_Value_5() const { return ___Value_5; }
	inline String_t** get_address_of_Value_5() { return &___Value_5; }
	inline void set_Value_5(String_t* value)
	{
		___Value_5 = value;
		Il2CppCodeGenWriteBarrier((&___Value_5), value);
	}

	inline static int32_t get_offset_of_SkillIconName_6() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___SkillIconName_6)); }
	inline String_t* get_SkillIconName_6() const { return ___SkillIconName_6; }
	inline String_t** get_address_of_SkillIconName_6() { return &___SkillIconName_6; }
	inline void set_SkillIconName_6(String_t* value)
	{
		___SkillIconName_6 = value;
		Il2CppCodeGenWriteBarrier((&___SkillIconName_6), value);
	}

	inline static int32_t get_offset_of_DesID_7() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___DesID_7)); }
	inline String_t* get_DesID_7() const { return ___DesID_7; }
	inline String_t** get_address_of_DesID_7() { return &___DesID_7; }
	inline void set_DesID_7(String_t* value)
	{
		___DesID_7 = value;
		Il2CppCodeGenWriteBarrier((&___DesID_7), value);
	}

	inline static int32_t get_offset_of_UpgradeEffectID_8() { return static_cast<int32_t>(offsetof(InGameEvent_Sheet_t505334484, ___UpgradeEffectID_8)); }
	inline String_t* get_UpgradeEffectID_8() const { return ___UpgradeEffectID_8; }
	inline String_t** get_address_of_UpgradeEffectID_8() { return &___UpgradeEffectID_8; }
	inline void set_UpgradeEffectID_8(String_t* value)
	{
		___UpgradeEffectID_8 = value;
		Il2CppCodeGenWriteBarrier((&___UpgradeEffectID_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INGAMEEVENT_SHEET_T505334484_H
#ifndef F_U_DNA_T3248367843_H
#define F_U_DNA_T3248367843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// F_U_DNA
struct  F_U_DNA_t3248367843  : public RuntimeObject
{
public:
	// System.String F_U_DNA::ID
	String_t* ___ID_0;
	// System.String F_U_DNA::Lv
	String_t* ___Lv_1;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(F_U_DNA_t3248367843, ___ID_0)); }
	inline String_t* get_ID_0() const { return ___ID_0; }
	inline String_t** get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(String_t* value)
	{
		___ID_0 = value;
		Il2CppCodeGenWriteBarrier((&___ID_0), value);
	}

	inline static int32_t get_offset_of_Lv_1() { return static_cast<int32_t>(offsetof(F_U_DNA_t3248367843, ___Lv_1)); }
	inline String_t* get_Lv_1() const { return ___Lv_1; }
	inline String_t** get_address_of_Lv_1() { return &___Lv_1; }
	inline void set_Lv_1(String_t* value)
	{
		___Lv_1 = value;
		Il2CppCodeGenWriteBarrier((&___Lv_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // F_U_DNA_T3248367843_H
#ifndef IOHELPER_T1127406900_H
#define IOHELPER_T1127406900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IOHelper
struct  IOHelper_t1127406900  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOHELPER_T1127406900_H
#ifndef LANGUAGE_SHEET_T1426318616_H
#define LANGUAGE_SHEET_T1426318616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Language_Sheet
struct  Language_Sheet_t1426318616  : public RuntimeObject
{
public:
	// System.String Language_Sheet::TextID
	String_t* ___TextID_0;
	// System.String Language_Sheet::ZH
	String_t* ___ZH_1;
	// System.String Language_Sheet::EN
	String_t* ___EN_2;

public:
	inline static int32_t get_offset_of_TextID_0() { return static_cast<int32_t>(offsetof(Language_Sheet_t1426318616, ___TextID_0)); }
	inline String_t* get_TextID_0() const { return ___TextID_0; }
	inline String_t** get_address_of_TextID_0() { return &___TextID_0; }
	inline void set_TextID_0(String_t* value)
	{
		___TextID_0 = value;
		Il2CppCodeGenWriteBarrier((&___TextID_0), value);
	}

	inline static int32_t get_offset_of_ZH_1() { return static_cast<int32_t>(offsetof(Language_Sheet_t1426318616, ___ZH_1)); }
	inline String_t* get_ZH_1() const { return ___ZH_1; }
	inline String_t** get_address_of_ZH_1() { return &___ZH_1; }
	inline void set_ZH_1(String_t* value)
	{
		___ZH_1 = value;
		Il2CppCodeGenWriteBarrier((&___ZH_1), value);
	}

	inline static int32_t get_offset_of_EN_2() { return static_cast<int32_t>(offsetof(Language_Sheet_t1426318616, ___EN_2)); }
	inline String_t* get_EN_2() const { return ___EN_2; }
	inline String_t** get_address_of_EN_2() { return &___EN_2; }
	inline void set_EN_2(String_t* value)
	{
		___EN_2 = value;
		Il2CppCodeGenWriteBarrier((&___EN_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LANGUAGE_SHEET_T1426318616_H
#ifndef LOCALIZATIONEX_T65050763_H
#define LOCALIZATIONEX_T65050763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LocalizationEx
struct  LocalizationEx_t65050763  : public RuntimeObject
{
public:

public:
};

struct LocalizationEx_t65050763_StaticFields
{
public:
	// System.Int32 LocalizationEx::mLanguage
	int32_t ___mLanguage_0;

public:
	inline static int32_t get_offset_of_mLanguage_0() { return static_cast<int32_t>(offsetof(LocalizationEx_t65050763_StaticFields, ___mLanguage_0)); }
	inline int32_t get_mLanguage_0() const { return ___mLanguage_0; }
	inline int32_t* get_address_of_mLanguage_0() { return &___mLanguage_0; }
	inline void set_mLanguage_0(int32_t value)
	{
		___mLanguage_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALIZATIONEX_T65050763_H
#ifndef ZOMBIE_SHEET_T3198884114_H
#define ZOMBIE_SHEET_T3198884114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Zombie_Sheet
struct  Zombie_Sheet_t3198884114  : public RuntimeObject
{
public:
	// System.String Zombie_Sheet::ZombieID
	String_t* ___ZombieID_0;
	// System.String Zombie_Sheet::MaxHP
	String_t* ___MaxHP_1;
	// System.String Zombie_Sheet::Atk
	String_t* ___Atk_2;
	// System.String Zombie_Sheet::Heal
	String_t* ___Heal_3;
	// System.String Zombie_Sheet::Def
	String_t* ___Def_4;
	// System.String Zombie_Sheet::Infect
	String_t* ___Infect_5;
	// System.String Zombie_Sheet::Speed
	String_t* ___Speed_6;
	// System.String Zombie_Sheet::HPDecay
	String_t* ___HPDecay_7;
	// System.String Zombie_Sheet::DrainLife
	String_t* ___DrainLife_8;
	// System.String Zombie_Sheet::AbilityID
	String_t* ___AbilityID_9;
	// System.String Zombie_Sheet::ClimateBoost_1
	String_t* ___ClimateBoost_1_10;
	// System.String Zombie_Sheet::ClimateBoost_2
	String_t* ___ClimateBoost_2_11;
	// System.String Zombie_Sheet::ClimateBoost_3
	String_t* ___ClimateBoost_3_12;
	// System.String Zombie_Sheet::EnviBoost_1
	String_t* ___EnviBoost_1_13;
	// System.String Zombie_Sheet::EnviBoost_2
	String_t* ___EnviBoost_2_14;
	// System.String Zombie_Sheet::EnviBoost_3
	String_t* ___EnviBoost_3_15;
	// System.String Zombie_Sheet::Weight
	String_t* ___Weight_16;
	// System.String Zombie_Sheet::Name
	String_t* ___Name_17;
	// System.String Zombie_Sheet::Res
	String_t* ___Res_18;
	// System.String Zombie_Sheet::SkillID
	String_t* ___SkillID_19;

public:
	inline static int32_t get_offset_of_ZombieID_0() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___ZombieID_0)); }
	inline String_t* get_ZombieID_0() const { return ___ZombieID_0; }
	inline String_t** get_address_of_ZombieID_0() { return &___ZombieID_0; }
	inline void set_ZombieID_0(String_t* value)
	{
		___ZombieID_0 = value;
		Il2CppCodeGenWriteBarrier((&___ZombieID_0), value);
	}

	inline static int32_t get_offset_of_MaxHP_1() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___MaxHP_1)); }
	inline String_t* get_MaxHP_1() const { return ___MaxHP_1; }
	inline String_t** get_address_of_MaxHP_1() { return &___MaxHP_1; }
	inline void set_MaxHP_1(String_t* value)
	{
		___MaxHP_1 = value;
		Il2CppCodeGenWriteBarrier((&___MaxHP_1), value);
	}

	inline static int32_t get_offset_of_Atk_2() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___Atk_2)); }
	inline String_t* get_Atk_2() const { return ___Atk_2; }
	inline String_t** get_address_of_Atk_2() { return &___Atk_2; }
	inline void set_Atk_2(String_t* value)
	{
		___Atk_2 = value;
		Il2CppCodeGenWriteBarrier((&___Atk_2), value);
	}

	inline static int32_t get_offset_of_Heal_3() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___Heal_3)); }
	inline String_t* get_Heal_3() const { return ___Heal_3; }
	inline String_t** get_address_of_Heal_3() { return &___Heal_3; }
	inline void set_Heal_3(String_t* value)
	{
		___Heal_3 = value;
		Il2CppCodeGenWriteBarrier((&___Heal_3), value);
	}

	inline static int32_t get_offset_of_Def_4() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___Def_4)); }
	inline String_t* get_Def_4() const { return ___Def_4; }
	inline String_t** get_address_of_Def_4() { return &___Def_4; }
	inline void set_Def_4(String_t* value)
	{
		___Def_4 = value;
		Il2CppCodeGenWriteBarrier((&___Def_4), value);
	}

	inline static int32_t get_offset_of_Infect_5() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___Infect_5)); }
	inline String_t* get_Infect_5() const { return ___Infect_5; }
	inline String_t** get_address_of_Infect_5() { return &___Infect_5; }
	inline void set_Infect_5(String_t* value)
	{
		___Infect_5 = value;
		Il2CppCodeGenWriteBarrier((&___Infect_5), value);
	}

	inline static int32_t get_offset_of_Speed_6() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___Speed_6)); }
	inline String_t* get_Speed_6() const { return ___Speed_6; }
	inline String_t** get_address_of_Speed_6() { return &___Speed_6; }
	inline void set_Speed_6(String_t* value)
	{
		___Speed_6 = value;
		Il2CppCodeGenWriteBarrier((&___Speed_6), value);
	}

	inline static int32_t get_offset_of_HPDecay_7() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___HPDecay_7)); }
	inline String_t* get_HPDecay_7() const { return ___HPDecay_7; }
	inline String_t** get_address_of_HPDecay_7() { return &___HPDecay_7; }
	inline void set_HPDecay_7(String_t* value)
	{
		___HPDecay_7 = value;
		Il2CppCodeGenWriteBarrier((&___HPDecay_7), value);
	}

	inline static int32_t get_offset_of_DrainLife_8() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___DrainLife_8)); }
	inline String_t* get_DrainLife_8() const { return ___DrainLife_8; }
	inline String_t** get_address_of_DrainLife_8() { return &___DrainLife_8; }
	inline void set_DrainLife_8(String_t* value)
	{
		___DrainLife_8 = value;
		Il2CppCodeGenWriteBarrier((&___DrainLife_8), value);
	}

	inline static int32_t get_offset_of_AbilityID_9() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___AbilityID_9)); }
	inline String_t* get_AbilityID_9() const { return ___AbilityID_9; }
	inline String_t** get_address_of_AbilityID_9() { return &___AbilityID_9; }
	inline void set_AbilityID_9(String_t* value)
	{
		___AbilityID_9 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_9), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_1_10() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___ClimateBoost_1_10)); }
	inline String_t* get_ClimateBoost_1_10() const { return ___ClimateBoost_1_10; }
	inline String_t** get_address_of_ClimateBoost_1_10() { return &___ClimateBoost_1_10; }
	inline void set_ClimateBoost_1_10(String_t* value)
	{
		___ClimateBoost_1_10 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_1_10), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_2_11() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___ClimateBoost_2_11)); }
	inline String_t* get_ClimateBoost_2_11() const { return ___ClimateBoost_2_11; }
	inline String_t** get_address_of_ClimateBoost_2_11() { return &___ClimateBoost_2_11; }
	inline void set_ClimateBoost_2_11(String_t* value)
	{
		___ClimateBoost_2_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_2_11), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_3_12() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___ClimateBoost_3_12)); }
	inline String_t* get_ClimateBoost_3_12() const { return ___ClimateBoost_3_12; }
	inline String_t** get_address_of_ClimateBoost_3_12() { return &___ClimateBoost_3_12; }
	inline void set_ClimateBoost_3_12(String_t* value)
	{
		___ClimateBoost_3_12 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_3_12), value);
	}

	inline static int32_t get_offset_of_EnviBoost_1_13() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___EnviBoost_1_13)); }
	inline String_t* get_EnviBoost_1_13() const { return ___EnviBoost_1_13; }
	inline String_t** get_address_of_EnviBoost_1_13() { return &___EnviBoost_1_13; }
	inline void set_EnviBoost_1_13(String_t* value)
	{
		___EnviBoost_1_13 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_1_13), value);
	}

	inline static int32_t get_offset_of_EnviBoost_2_14() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___EnviBoost_2_14)); }
	inline String_t* get_EnviBoost_2_14() const { return ___EnviBoost_2_14; }
	inline String_t** get_address_of_EnviBoost_2_14() { return &___EnviBoost_2_14; }
	inline void set_EnviBoost_2_14(String_t* value)
	{
		___EnviBoost_2_14 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_2_14), value);
	}

	inline static int32_t get_offset_of_EnviBoost_3_15() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___EnviBoost_3_15)); }
	inline String_t* get_EnviBoost_3_15() const { return ___EnviBoost_3_15; }
	inline String_t** get_address_of_EnviBoost_3_15() { return &___EnviBoost_3_15; }
	inline void set_EnviBoost_3_15(String_t* value)
	{
		___EnviBoost_3_15 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_3_15), value);
	}

	inline static int32_t get_offset_of_Weight_16() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___Weight_16)); }
	inline String_t* get_Weight_16() const { return ___Weight_16; }
	inline String_t** get_address_of_Weight_16() { return &___Weight_16; }
	inline void set_Weight_16(String_t* value)
	{
		___Weight_16 = value;
		Il2CppCodeGenWriteBarrier((&___Weight_16), value);
	}

	inline static int32_t get_offset_of_Name_17() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___Name_17)); }
	inline String_t* get_Name_17() const { return ___Name_17; }
	inline String_t** get_address_of_Name_17() { return &___Name_17; }
	inline void set_Name_17(String_t* value)
	{
		___Name_17 = value;
		Il2CppCodeGenWriteBarrier((&___Name_17), value);
	}

	inline static int32_t get_offset_of_Res_18() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___Res_18)); }
	inline String_t* get_Res_18() const { return ___Res_18; }
	inline String_t** get_address_of_Res_18() { return &___Res_18; }
	inline void set_Res_18(String_t* value)
	{
		___Res_18 = value;
		Il2CppCodeGenWriteBarrier((&___Res_18), value);
	}

	inline static int32_t get_offset_of_SkillID_19() { return static_cast<int32_t>(offsetof(Zombie_Sheet_t3198884114, ___SkillID_19)); }
	inline String_t* get_SkillID_19() const { return ___SkillID_19; }
	inline String_t** get_address_of_SkillID_19() { return &___SkillID_19; }
	inline void set_SkillID_19(String_t* value)
	{
		___SkillID_19 = value;
		Il2CppCodeGenWriteBarrier((&___SkillID_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIE_SHEET_T3198884114_H
#ifndef LOOT_SHEET_T191456884_H
#define LOOT_SHEET_T191456884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loot_Sheet
struct  Loot_Sheet_t191456884  : public RuntimeObject
{
public:
	// System.String Loot_Sheet::LootPackageID
	String_t* ___LootPackageID_0;
	// System.String Loot_Sheet::PackageName
	String_t* ___PackageName_1;
	// System.String Loot_Sheet::ItemID
	String_t* ___ItemID_2;
	// System.String Loot_Sheet::ItemNum
	String_t* ___ItemNum_3;
	// System.String Loot_Sheet::Weight
	String_t* ___Weight_4;

public:
	inline static int32_t get_offset_of_LootPackageID_0() { return static_cast<int32_t>(offsetof(Loot_Sheet_t191456884, ___LootPackageID_0)); }
	inline String_t* get_LootPackageID_0() const { return ___LootPackageID_0; }
	inline String_t** get_address_of_LootPackageID_0() { return &___LootPackageID_0; }
	inline void set_LootPackageID_0(String_t* value)
	{
		___LootPackageID_0 = value;
		Il2CppCodeGenWriteBarrier((&___LootPackageID_0), value);
	}

	inline static int32_t get_offset_of_PackageName_1() { return static_cast<int32_t>(offsetof(Loot_Sheet_t191456884, ___PackageName_1)); }
	inline String_t* get_PackageName_1() const { return ___PackageName_1; }
	inline String_t** get_address_of_PackageName_1() { return &___PackageName_1; }
	inline void set_PackageName_1(String_t* value)
	{
		___PackageName_1 = value;
		Il2CppCodeGenWriteBarrier((&___PackageName_1), value);
	}

	inline static int32_t get_offset_of_ItemID_2() { return static_cast<int32_t>(offsetof(Loot_Sheet_t191456884, ___ItemID_2)); }
	inline String_t* get_ItemID_2() const { return ___ItemID_2; }
	inline String_t** get_address_of_ItemID_2() { return &___ItemID_2; }
	inline void set_ItemID_2(String_t* value)
	{
		___ItemID_2 = value;
		Il2CppCodeGenWriteBarrier((&___ItemID_2), value);
	}

	inline static int32_t get_offset_of_ItemNum_3() { return static_cast<int32_t>(offsetof(Loot_Sheet_t191456884, ___ItemNum_3)); }
	inline String_t* get_ItemNum_3() const { return ___ItemNum_3; }
	inline String_t** get_address_of_ItemNum_3() { return &___ItemNum_3; }
	inline void set_ItemNum_3(String_t* value)
	{
		___ItemNum_3 = value;
		Il2CppCodeGenWriteBarrier((&___ItemNum_3), value);
	}

	inline static int32_t get_offset_of_Weight_4() { return static_cast<int32_t>(offsetof(Loot_Sheet_t191456884, ___Weight_4)); }
	inline String_t* get_Weight_4() const { return ___Weight_4; }
	inline String_t** get_address_of_Weight_4() { return &___Weight_4; }
	inline void set_Weight_4(String_t* value)
	{
		___Weight_4 = value;
		Il2CppCodeGenWriteBarrier((&___Weight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOT_SHEET_T191456884_H
#ifndef MISSION_SHEET_T2170179025_H
#define MISSION_SHEET_T2170179025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mission_Sheet
struct  Mission_Sheet_t2170179025  : public RuntimeObject
{
public:
	// System.String Mission_Sheet::MissionID
	String_t* ___MissionID_0;
	// System.String Mission_Sheet::MaxHPBoost
	String_t* ___MaxHPBoost_1;
	// System.String Mission_Sheet::InfectionBoost
	String_t* ___InfectionBoost_2;
	// System.String Mission_Sheet::Atk_Boost
	String_t* ___Atk_Boost_3;
	// System.String Mission_Sheet::Heal_Boost
	String_t* ___Heal_Boost_4;
	// System.String Mission_Sheet::Def_Boost
	String_t* ___Def_Boost_5;
	// System.String Mission_Sheet::Cure_Boost
	String_t* ___Cure_Boost_6;
	// System.String Mission_Sheet::Speed_Boost
	String_t* ___Speed_Boost_7;
	// System.String Mission_Sheet::InfectionAntiBoost
	String_t* ___InfectionAntiBoost_8;
	// System.String Mission_Sheet::CommunicationAntiBoost
	String_t* ___CommunicationAntiBoost_9;
	// System.String Mission_Sheet::HPHealingBoost
	String_t* ___HPHealingBoost_10;
	// System.String Mission_Sheet::ClimateBoost
	String_t* ___ClimateBoost_11;
	// System.String Mission_Sheet::EnviBoost
	String_t* ___EnviBoost_12;
	// System.String Mission_Sheet::DistributionParam1
	String_t* ___DistributionParam1_13;
	// System.String Mission_Sheet::DistributionParam2
	String_t* ___DistributionParam2_14;
	// System.String Mission_Sheet::DistributionParam3
	String_t* ___DistributionParam3_15;
	// System.String Mission_Sheet::DistributionParam4
	String_t* ___DistributionParam4_16;
	// System.String Mission_Sheet::AbilityID_1
	String_t* ___AbilityID_1_17;
	// System.String Mission_Sheet::AbilityLv_1
	String_t* ___AbilityLv_1_18;
	// System.String Mission_Sheet::AbilityID_2
	String_t* ___AbilityID_2_19;
	// System.String Mission_Sheet::AbilityLv_2
	String_t* ___AbilityLv_2_20;
	// System.String Mission_Sheet::AbilityID_3
	String_t* ___AbilityID_3_21;
	// System.String Mission_Sheet::AbilityLv_3
	String_t* ___AbilityLv_3_22;
	// System.String Mission_Sheet::ModeType
	String_t* ___ModeType_23;
	// System.String Mission_Sheet::ModeParam1
	String_t* ___ModeParam1_24;
	// System.String Mission_Sheet::ModeParam2
	String_t* ___ModeParam2_25;
	// System.String Mission_Sheet::ModeParam3
	String_t* ___ModeParam3_26;
	// System.String Mission_Sheet::EventMin
	String_t* ___EventMin_27;
	// System.String Mission_Sheet::EventMax
	String_t* ___EventMax_28;
	// System.String Mission_Sheet::EventPackageID
	String_t* ___EventPackageID_29;
	// System.String Mission_Sheet::LootPackageID
	String_t* ___LootPackageID_30;

public:
	inline static int32_t get_offset_of_MissionID_0() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___MissionID_0)); }
	inline String_t* get_MissionID_0() const { return ___MissionID_0; }
	inline String_t** get_address_of_MissionID_0() { return &___MissionID_0; }
	inline void set_MissionID_0(String_t* value)
	{
		___MissionID_0 = value;
		Il2CppCodeGenWriteBarrier((&___MissionID_0), value);
	}

	inline static int32_t get_offset_of_MaxHPBoost_1() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___MaxHPBoost_1)); }
	inline String_t* get_MaxHPBoost_1() const { return ___MaxHPBoost_1; }
	inline String_t** get_address_of_MaxHPBoost_1() { return &___MaxHPBoost_1; }
	inline void set_MaxHPBoost_1(String_t* value)
	{
		___MaxHPBoost_1 = value;
		Il2CppCodeGenWriteBarrier((&___MaxHPBoost_1), value);
	}

	inline static int32_t get_offset_of_InfectionBoost_2() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___InfectionBoost_2)); }
	inline String_t* get_InfectionBoost_2() const { return ___InfectionBoost_2; }
	inline String_t** get_address_of_InfectionBoost_2() { return &___InfectionBoost_2; }
	inline void set_InfectionBoost_2(String_t* value)
	{
		___InfectionBoost_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionBoost_2), value);
	}

	inline static int32_t get_offset_of_Atk_Boost_3() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___Atk_Boost_3)); }
	inline String_t* get_Atk_Boost_3() const { return ___Atk_Boost_3; }
	inline String_t** get_address_of_Atk_Boost_3() { return &___Atk_Boost_3; }
	inline void set_Atk_Boost_3(String_t* value)
	{
		___Atk_Boost_3 = value;
		Il2CppCodeGenWriteBarrier((&___Atk_Boost_3), value);
	}

	inline static int32_t get_offset_of_Heal_Boost_4() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___Heal_Boost_4)); }
	inline String_t* get_Heal_Boost_4() const { return ___Heal_Boost_4; }
	inline String_t** get_address_of_Heal_Boost_4() { return &___Heal_Boost_4; }
	inline void set_Heal_Boost_4(String_t* value)
	{
		___Heal_Boost_4 = value;
		Il2CppCodeGenWriteBarrier((&___Heal_Boost_4), value);
	}

	inline static int32_t get_offset_of_Def_Boost_5() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___Def_Boost_5)); }
	inline String_t* get_Def_Boost_5() const { return ___Def_Boost_5; }
	inline String_t** get_address_of_Def_Boost_5() { return &___Def_Boost_5; }
	inline void set_Def_Boost_5(String_t* value)
	{
		___Def_Boost_5 = value;
		Il2CppCodeGenWriteBarrier((&___Def_Boost_5), value);
	}

	inline static int32_t get_offset_of_Cure_Boost_6() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___Cure_Boost_6)); }
	inline String_t* get_Cure_Boost_6() const { return ___Cure_Boost_6; }
	inline String_t** get_address_of_Cure_Boost_6() { return &___Cure_Boost_6; }
	inline void set_Cure_Boost_6(String_t* value)
	{
		___Cure_Boost_6 = value;
		Il2CppCodeGenWriteBarrier((&___Cure_Boost_6), value);
	}

	inline static int32_t get_offset_of_Speed_Boost_7() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___Speed_Boost_7)); }
	inline String_t* get_Speed_Boost_7() const { return ___Speed_Boost_7; }
	inline String_t** get_address_of_Speed_Boost_7() { return &___Speed_Boost_7; }
	inline void set_Speed_Boost_7(String_t* value)
	{
		___Speed_Boost_7 = value;
		Il2CppCodeGenWriteBarrier((&___Speed_Boost_7), value);
	}

	inline static int32_t get_offset_of_InfectionAntiBoost_8() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___InfectionAntiBoost_8)); }
	inline String_t* get_InfectionAntiBoost_8() const { return ___InfectionAntiBoost_8; }
	inline String_t** get_address_of_InfectionAntiBoost_8() { return &___InfectionAntiBoost_8; }
	inline void set_InfectionAntiBoost_8(String_t* value)
	{
		___InfectionAntiBoost_8 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionAntiBoost_8), value);
	}

	inline static int32_t get_offset_of_CommunicationAntiBoost_9() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___CommunicationAntiBoost_9)); }
	inline String_t* get_CommunicationAntiBoost_9() const { return ___CommunicationAntiBoost_9; }
	inline String_t** get_address_of_CommunicationAntiBoost_9() { return &___CommunicationAntiBoost_9; }
	inline void set_CommunicationAntiBoost_9(String_t* value)
	{
		___CommunicationAntiBoost_9 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicationAntiBoost_9), value);
	}

	inline static int32_t get_offset_of_HPHealingBoost_10() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___HPHealingBoost_10)); }
	inline String_t* get_HPHealingBoost_10() const { return ___HPHealingBoost_10; }
	inline String_t** get_address_of_HPHealingBoost_10() { return &___HPHealingBoost_10; }
	inline void set_HPHealingBoost_10(String_t* value)
	{
		___HPHealingBoost_10 = value;
		Il2CppCodeGenWriteBarrier((&___HPHealingBoost_10), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_11() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___ClimateBoost_11)); }
	inline String_t* get_ClimateBoost_11() const { return ___ClimateBoost_11; }
	inline String_t** get_address_of_ClimateBoost_11() { return &___ClimateBoost_11; }
	inline void set_ClimateBoost_11(String_t* value)
	{
		___ClimateBoost_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_11), value);
	}

	inline static int32_t get_offset_of_EnviBoost_12() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___EnviBoost_12)); }
	inline String_t* get_EnviBoost_12() const { return ___EnviBoost_12; }
	inline String_t** get_address_of_EnviBoost_12() { return &___EnviBoost_12; }
	inline void set_EnviBoost_12(String_t* value)
	{
		___EnviBoost_12 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_12), value);
	}

	inline static int32_t get_offset_of_DistributionParam1_13() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___DistributionParam1_13)); }
	inline String_t* get_DistributionParam1_13() const { return ___DistributionParam1_13; }
	inline String_t** get_address_of_DistributionParam1_13() { return &___DistributionParam1_13; }
	inline void set_DistributionParam1_13(String_t* value)
	{
		___DistributionParam1_13 = value;
		Il2CppCodeGenWriteBarrier((&___DistributionParam1_13), value);
	}

	inline static int32_t get_offset_of_DistributionParam2_14() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___DistributionParam2_14)); }
	inline String_t* get_DistributionParam2_14() const { return ___DistributionParam2_14; }
	inline String_t** get_address_of_DistributionParam2_14() { return &___DistributionParam2_14; }
	inline void set_DistributionParam2_14(String_t* value)
	{
		___DistributionParam2_14 = value;
		Il2CppCodeGenWriteBarrier((&___DistributionParam2_14), value);
	}

	inline static int32_t get_offset_of_DistributionParam3_15() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___DistributionParam3_15)); }
	inline String_t* get_DistributionParam3_15() const { return ___DistributionParam3_15; }
	inline String_t** get_address_of_DistributionParam3_15() { return &___DistributionParam3_15; }
	inline void set_DistributionParam3_15(String_t* value)
	{
		___DistributionParam3_15 = value;
		Il2CppCodeGenWriteBarrier((&___DistributionParam3_15), value);
	}

	inline static int32_t get_offset_of_DistributionParam4_16() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___DistributionParam4_16)); }
	inline String_t* get_DistributionParam4_16() const { return ___DistributionParam4_16; }
	inline String_t** get_address_of_DistributionParam4_16() { return &___DistributionParam4_16; }
	inline void set_DistributionParam4_16(String_t* value)
	{
		___DistributionParam4_16 = value;
		Il2CppCodeGenWriteBarrier((&___DistributionParam4_16), value);
	}

	inline static int32_t get_offset_of_AbilityID_1_17() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___AbilityID_1_17)); }
	inline String_t* get_AbilityID_1_17() const { return ___AbilityID_1_17; }
	inline String_t** get_address_of_AbilityID_1_17() { return &___AbilityID_1_17; }
	inline void set_AbilityID_1_17(String_t* value)
	{
		___AbilityID_1_17 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_1_17), value);
	}

	inline static int32_t get_offset_of_AbilityLv_1_18() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___AbilityLv_1_18)); }
	inline String_t* get_AbilityLv_1_18() const { return ___AbilityLv_1_18; }
	inline String_t** get_address_of_AbilityLv_1_18() { return &___AbilityLv_1_18; }
	inline void set_AbilityLv_1_18(String_t* value)
	{
		___AbilityLv_1_18 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityLv_1_18), value);
	}

	inline static int32_t get_offset_of_AbilityID_2_19() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___AbilityID_2_19)); }
	inline String_t* get_AbilityID_2_19() const { return ___AbilityID_2_19; }
	inline String_t** get_address_of_AbilityID_2_19() { return &___AbilityID_2_19; }
	inline void set_AbilityID_2_19(String_t* value)
	{
		___AbilityID_2_19 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_2_19), value);
	}

	inline static int32_t get_offset_of_AbilityLv_2_20() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___AbilityLv_2_20)); }
	inline String_t* get_AbilityLv_2_20() const { return ___AbilityLv_2_20; }
	inline String_t** get_address_of_AbilityLv_2_20() { return &___AbilityLv_2_20; }
	inline void set_AbilityLv_2_20(String_t* value)
	{
		___AbilityLv_2_20 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityLv_2_20), value);
	}

	inline static int32_t get_offset_of_AbilityID_3_21() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___AbilityID_3_21)); }
	inline String_t* get_AbilityID_3_21() const { return ___AbilityID_3_21; }
	inline String_t** get_address_of_AbilityID_3_21() { return &___AbilityID_3_21; }
	inline void set_AbilityID_3_21(String_t* value)
	{
		___AbilityID_3_21 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_3_21), value);
	}

	inline static int32_t get_offset_of_AbilityLv_3_22() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___AbilityLv_3_22)); }
	inline String_t* get_AbilityLv_3_22() const { return ___AbilityLv_3_22; }
	inline String_t** get_address_of_AbilityLv_3_22() { return &___AbilityLv_3_22; }
	inline void set_AbilityLv_3_22(String_t* value)
	{
		___AbilityLv_3_22 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityLv_3_22), value);
	}

	inline static int32_t get_offset_of_ModeType_23() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___ModeType_23)); }
	inline String_t* get_ModeType_23() const { return ___ModeType_23; }
	inline String_t** get_address_of_ModeType_23() { return &___ModeType_23; }
	inline void set_ModeType_23(String_t* value)
	{
		___ModeType_23 = value;
		Il2CppCodeGenWriteBarrier((&___ModeType_23), value);
	}

	inline static int32_t get_offset_of_ModeParam1_24() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___ModeParam1_24)); }
	inline String_t* get_ModeParam1_24() const { return ___ModeParam1_24; }
	inline String_t** get_address_of_ModeParam1_24() { return &___ModeParam1_24; }
	inline void set_ModeParam1_24(String_t* value)
	{
		___ModeParam1_24 = value;
		Il2CppCodeGenWriteBarrier((&___ModeParam1_24), value);
	}

	inline static int32_t get_offset_of_ModeParam2_25() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___ModeParam2_25)); }
	inline String_t* get_ModeParam2_25() const { return ___ModeParam2_25; }
	inline String_t** get_address_of_ModeParam2_25() { return &___ModeParam2_25; }
	inline void set_ModeParam2_25(String_t* value)
	{
		___ModeParam2_25 = value;
		Il2CppCodeGenWriteBarrier((&___ModeParam2_25), value);
	}

	inline static int32_t get_offset_of_ModeParam3_26() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___ModeParam3_26)); }
	inline String_t* get_ModeParam3_26() const { return ___ModeParam3_26; }
	inline String_t** get_address_of_ModeParam3_26() { return &___ModeParam3_26; }
	inline void set_ModeParam3_26(String_t* value)
	{
		___ModeParam3_26 = value;
		Il2CppCodeGenWriteBarrier((&___ModeParam3_26), value);
	}

	inline static int32_t get_offset_of_EventMin_27() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___EventMin_27)); }
	inline String_t* get_EventMin_27() const { return ___EventMin_27; }
	inline String_t** get_address_of_EventMin_27() { return &___EventMin_27; }
	inline void set_EventMin_27(String_t* value)
	{
		___EventMin_27 = value;
		Il2CppCodeGenWriteBarrier((&___EventMin_27), value);
	}

	inline static int32_t get_offset_of_EventMax_28() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___EventMax_28)); }
	inline String_t* get_EventMax_28() const { return ___EventMax_28; }
	inline String_t** get_address_of_EventMax_28() { return &___EventMax_28; }
	inline void set_EventMax_28(String_t* value)
	{
		___EventMax_28 = value;
		Il2CppCodeGenWriteBarrier((&___EventMax_28), value);
	}

	inline static int32_t get_offset_of_EventPackageID_29() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___EventPackageID_29)); }
	inline String_t* get_EventPackageID_29() const { return ___EventPackageID_29; }
	inline String_t** get_address_of_EventPackageID_29() { return &___EventPackageID_29; }
	inline void set_EventPackageID_29(String_t* value)
	{
		___EventPackageID_29 = value;
		Il2CppCodeGenWriteBarrier((&___EventPackageID_29), value);
	}

	inline static int32_t get_offset_of_LootPackageID_30() { return static_cast<int32_t>(offsetof(Mission_Sheet_t2170179025, ___LootPackageID_30)); }
	inline String_t* get_LootPackageID_30() const { return ___LootPackageID_30; }
	inline String_t** get_address_of_LootPackageID_30() { return &___LootPackageID_30; }
	inline void set_LootPackageID_30(String_t* value)
	{
		___LootPackageID_30 = value;
		Il2CppCodeGenWriteBarrier((&___LootPackageID_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSION_SHEET_T2170179025_H
#ifndef VIRUS_SHEET_T1023815819_H
#define VIRUS_SHEET_T1023815819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Virus_Sheet
struct  Virus_Sheet_t1023815819  : public RuntimeObject
{
public:
	// System.String Virus_Sheet::VirusID
	String_t* ___VirusID_0;
	// System.String Virus_Sheet::InfectSpeed
	String_t* ___InfectSpeed_1;
	// System.String Virus_Sheet::InfectHuman_1
	String_t* ___InfectHuman_1_2;
	// System.String Virus_Sheet::InfectHuman_2
	String_t* ___InfectHuman_2_3;
	// System.String Virus_Sheet::InfectHuman_3
	String_t* ___InfectHuman_3_4;
	// System.String Virus_Sheet::InfectHuman_4
	String_t* ___InfectHuman_4_5;
	// System.String Virus_Sheet::InfectHuman_5
	String_t* ___InfectHuman_5_6;
	// System.String Virus_Sheet::InfectBlock_Climate_1
	String_t* ___InfectBlock_Climate_1_7;
	// System.String Virus_Sheet::InfectBlock_Climate_2
	String_t* ___InfectBlock_Climate_2_8;
	// System.String Virus_Sheet::InfectBlock_Climate_3
	String_t* ___InfectBlock_Climate_3_9;
	// System.String Virus_Sheet::InfectBlock_Envi_1
	String_t* ___InfectBlock_Envi_1_10;
	// System.String Virus_Sheet::InfectBlock_Envi_2
	String_t* ___InfectBlock_Envi_2_11;
	// System.String Virus_Sheet::InfectBlock_Envi_3
	String_t* ___InfectBlock_Envi_3_12;
	// System.String Virus_Sheet::CommunicateRate
	String_t* ___CommunicateRate_13;
	// System.String Virus_Sheet::CommunicateHuman_1
	String_t* ___CommunicateHuman_1_14;
	// System.String Virus_Sheet::CommunicateHuman_2
	String_t* ___CommunicateHuman_2_15;
	// System.String Virus_Sheet::CommunicateHuman_3
	String_t* ___CommunicateHuman_3_16;
	// System.String Virus_Sheet::CommunicateHuman_4
	String_t* ___CommunicateHuman_4_17;
	// System.String Virus_Sheet::CommunicateHuman_5
	String_t* ___CommunicateHuman_5_18;
	// System.String Virus_Sheet::CommunicateBlock_Climate_1
	String_t* ___CommunicateBlock_Climate_1_19;
	// System.String Virus_Sheet::CommunicateBlock_Climate_2
	String_t* ___CommunicateBlock_Climate_2_20;
	// System.String Virus_Sheet::CommunicateBlock_Climate_3
	String_t* ___CommunicateBlock_Climate_3_21;
	// System.String Virus_Sheet::CommunicateBlock_Envi_1
	String_t* ___CommunicateBlock_Envi_1_22;
	// System.String Virus_Sheet::CommunicateBlock_Envi_2
	String_t* ___CommunicateBlock_Envi_2_23;
	// System.String Virus_Sheet::CommunicateBlock_Envi_3
	String_t* ___CommunicateBlock_Envi_3_24;
	// System.String Virus_Sheet::InitialSP
	String_t* ___InitialSP_25;
	// System.String Virus_Sheet::UnlockNum
	String_t* ___UnlockNum_26;
	// System.String Virus_Sheet::Name
	String_t* ___Name_27;
	// System.String Virus_Sheet::Des
	String_t* ___Des_28;
	// System.String Virus_Sheet::Res
	String_t* ___Res_29;
	// System.String Virus_Sheet::StrategyID
	String_t* ___StrategyID_30;
	// System.String Virus_Sheet::Medi_Start
	String_t* ___Medi_Start_31;
	// System.String Virus_Sheet::Medi_Work
	String_t* ___Medi_Work_32;
	// System.String Virus_Sheet::Medi_Spd
	String_t* ___Medi_Spd_33;
	// System.String Virus_Sheet::CommunicationThreshold
	String_t* ___CommunicationThreshold_34;

public:
	inline static int32_t get_offset_of_VirusID_0() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___VirusID_0)); }
	inline String_t* get_VirusID_0() const { return ___VirusID_0; }
	inline String_t** get_address_of_VirusID_0() { return &___VirusID_0; }
	inline void set_VirusID_0(String_t* value)
	{
		___VirusID_0 = value;
		Il2CppCodeGenWriteBarrier((&___VirusID_0), value);
	}

	inline static int32_t get_offset_of_InfectSpeed_1() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectSpeed_1)); }
	inline String_t* get_InfectSpeed_1() const { return ___InfectSpeed_1; }
	inline String_t** get_address_of_InfectSpeed_1() { return &___InfectSpeed_1; }
	inline void set_InfectSpeed_1(String_t* value)
	{
		___InfectSpeed_1 = value;
		Il2CppCodeGenWriteBarrier((&___InfectSpeed_1), value);
	}

	inline static int32_t get_offset_of_InfectHuman_1_2() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectHuman_1_2)); }
	inline String_t* get_InfectHuman_1_2() const { return ___InfectHuman_1_2; }
	inline String_t** get_address_of_InfectHuman_1_2() { return &___InfectHuman_1_2; }
	inline void set_InfectHuman_1_2(String_t* value)
	{
		___InfectHuman_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_1_2), value);
	}

	inline static int32_t get_offset_of_InfectHuman_2_3() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectHuman_2_3)); }
	inline String_t* get_InfectHuman_2_3() const { return ___InfectHuman_2_3; }
	inline String_t** get_address_of_InfectHuman_2_3() { return &___InfectHuman_2_3; }
	inline void set_InfectHuman_2_3(String_t* value)
	{
		___InfectHuman_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_2_3), value);
	}

	inline static int32_t get_offset_of_InfectHuman_3_4() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectHuman_3_4)); }
	inline String_t* get_InfectHuman_3_4() const { return ___InfectHuman_3_4; }
	inline String_t** get_address_of_InfectHuman_3_4() { return &___InfectHuman_3_4; }
	inline void set_InfectHuman_3_4(String_t* value)
	{
		___InfectHuman_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_3_4), value);
	}

	inline static int32_t get_offset_of_InfectHuman_4_5() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectHuman_4_5)); }
	inline String_t* get_InfectHuman_4_5() const { return ___InfectHuman_4_5; }
	inline String_t** get_address_of_InfectHuman_4_5() { return &___InfectHuman_4_5; }
	inline void set_InfectHuman_4_5(String_t* value)
	{
		___InfectHuman_4_5 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_4_5), value);
	}

	inline static int32_t get_offset_of_InfectHuman_5_6() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectHuman_5_6)); }
	inline String_t* get_InfectHuman_5_6() const { return ___InfectHuman_5_6; }
	inline String_t** get_address_of_InfectHuman_5_6() { return &___InfectHuman_5_6; }
	inline void set_InfectHuman_5_6(String_t* value)
	{
		___InfectHuman_5_6 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHuman_5_6), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_1_7() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectBlock_Climate_1_7)); }
	inline String_t* get_InfectBlock_Climate_1_7() const { return ___InfectBlock_Climate_1_7; }
	inline String_t** get_address_of_InfectBlock_Climate_1_7() { return &___InfectBlock_Climate_1_7; }
	inline void set_InfectBlock_Climate_1_7(String_t* value)
	{
		___InfectBlock_Climate_1_7 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Climate_1_7), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_2_8() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectBlock_Climate_2_8)); }
	inline String_t* get_InfectBlock_Climate_2_8() const { return ___InfectBlock_Climate_2_8; }
	inline String_t** get_address_of_InfectBlock_Climate_2_8() { return &___InfectBlock_Climate_2_8; }
	inline void set_InfectBlock_Climate_2_8(String_t* value)
	{
		___InfectBlock_Climate_2_8 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Climate_2_8), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_3_9() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectBlock_Climate_3_9)); }
	inline String_t* get_InfectBlock_Climate_3_9() const { return ___InfectBlock_Climate_3_9; }
	inline String_t** get_address_of_InfectBlock_Climate_3_9() { return &___InfectBlock_Climate_3_9; }
	inline void set_InfectBlock_Climate_3_9(String_t* value)
	{
		___InfectBlock_Climate_3_9 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Climate_3_9), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_1_10() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectBlock_Envi_1_10)); }
	inline String_t* get_InfectBlock_Envi_1_10() const { return ___InfectBlock_Envi_1_10; }
	inline String_t** get_address_of_InfectBlock_Envi_1_10() { return &___InfectBlock_Envi_1_10; }
	inline void set_InfectBlock_Envi_1_10(String_t* value)
	{
		___InfectBlock_Envi_1_10 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Envi_1_10), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_2_11() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectBlock_Envi_2_11)); }
	inline String_t* get_InfectBlock_Envi_2_11() const { return ___InfectBlock_Envi_2_11; }
	inline String_t** get_address_of_InfectBlock_Envi_2_11() { return &___InfectBlock_Envi_2_11; }
	inline void set_InfectBlock_Envi_2_11(String_t* value)
	{
		___InfectBlock_Envi_2_11 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Envi_2_11), value);
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_3_12() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InfectBlock_Envi_3_12)); }
	inline String_t* get_InfectBlock_Envi_3_12() const { return ___InfectBlock_Envi_3_12; }
	inline String_t** get_address_of_InfectBlock_Envi_3_12() { return &___InfectBlock_Envi_3_12; }
	inline void set_InfectBlock_Envi_3_12(String_t* value)
	{
		___InfectBlock_Envi_3_12 = value;
		Il2CppCodeGenWriteBarrier((&___InfectBlock_Envi_3_12), value);
	}

	inline static int32_t get_offset_of_CommunicateRate_13() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateRate_13)); }
	inline String_t* get_CommunicateRate_13() const { return ___CommunicateRate_13; }
	inline String_t** get_address_of_CommunicateRate_13() { return &___CommunicateRate_13; }
	inline void set_CommunicateRate_13(String_t* value)
	{
		___CommunicateRate_13 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateRate_13), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_1_14() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateHuman_1_14)); }
	inline String_t* get_CommunicateHuman_1_14() const { return ___CommunicateHuman_1_14; }
	inline String_t** get_address_of_CommunicateHuman_1_14() { return &___CommunicateHuman_1_14; }
	inline void set_CommunicateHuman_1_14(String_t* value)
	{
		___CommunicateHuman_1_14 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_1_14), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_2_15() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateHuman_2_15)); }
	inline String_t* get_CommunicateHuman_2_15() const { return ___CommunicateHuman_2_15; }
	inline String_t** get_address_of_CommunicateHuman_2_15() { return &___CommunicateHuman_2_15; }
	inline void set_CommunicateHuman_2_15(String_t* value)
	{
		___CommunicateHuman_2_15 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_2_15), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_3_16() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateHuman_3_16)); }
	inline String_t* get_CommunicateHuman_3_16() const { return ___CommunicateHuman_3_16; }
	inline String_t** get_address_of_CommunicateHuman_3_16() { return &___CommunicateHuman_3_16; }
	inline void set_CommunicateHuman_3_16(String_t* value)
	{
		___CommunicateHuman_3_16 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_3_16), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_4_17() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateHuman_4_17)); }
	inline String_t* get_CommunicateHuman_4_17() const { return ___CommunicateHuman_4_17; }
	inline String_t** get_address_of_CommunicateHuman_4_17() { return &___CommunicateHuman_4_17; }
	inline void set_CommunicateHuman_4_17(String_t* value)
	{
		___CommunicateHuman_4_17 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_4_17), value);
	}

	inline static int32_t get_offset_of_CommunicateHuman_5_18() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateHuman_5_18)); }
	inline String_t* get_CommunicateHuman_5_18() const { return ___CommunicateHuman_5_18; }
	inline String_t** get_address_of_CommunicateHuman_5_18() { return &___CommunicateHuman_5_18; }
	inline void set_CommunicateHuman_5_18(String_t* value)
	{
		___CommunicateHuman_5_18 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHuman_5_18), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_1_19() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateBlock_Climate_1_19)); }
	inline String_t* get_CommunicateBlock_Climate_1_19() const { return ___CommunicateBlock_Climate_1_19; }
	inline String_t** get_address_of_CommunicateBlock_Climate_1_19() { return &___CommunicateBlock_Climate_1_19; }
	inline void set_CommunicateBlock_Climate_1_19(String_t* value)
	{
		___CommunicateBlock_Climate_1_19 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Climate_1_19), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_2_20() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateBlock_Climate_2_20)); }
	inline String_t* get_CommunicateBlock_Climate_2_20() const { return ___CommunicateBlock_Climate_2_20; }
	inline String_t** get_address_of_CommunicateBlock_Climate_2_20() { return &___CommunicateBlock_Climate_2_20; }
	inline void set_CommunicateBlock_Climate_2_20(String_t* value)
	{
		___CommunicateBlock_Climate_2_20 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Climate_2_20), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_3_21() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateBlock_Climate_3_21)); }
	inline String_t* get_CommunicateBlock_Climate_3_21() const { return ___CommunicateBlock_Climate_3_21; }
	inline String_t** get_address_of_CommunicateBlock_Climate_3_21() { return &___CommunicateBlock_Climate_3_21; }
	inline void set_CommunicateBlock_Climate_3_21(String_t* value)
	{
		___CommunicateBlock_Climate_3_21 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Climate_3_21), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_1_22() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateBlock_Envi_1_22)); }
	inline String_t* get_CommunicateBlock_Envi_1_22() const { return ___CommunicateBlock_Envi_1_22; }
	inline String_t** get_address_of_CommunicateBlock_Envi_1_22() { return &___CommunicateBlock_Envi_1_22; }
	inline void set_CommunicateBlock_Envi_1_22(String_t* value)
	{
		___CommunicateBlock_Envi_1_22 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Envi_1_22), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_2_23() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateBlock_Envi_2_23)); }
	inline String_t* get_CommunicateBlock_Envi_2_23() const { return ___CommunicateBlock_Envi_2_23; }
	inline String_t** get_address_of_CommunicateBlock_Envi_2_23() { return &___CommunicateBlock_Envi_2_23; }
	inline void set_CommunicateBlock_Envi_2_23(String_t* value)
	{
		___CommunicateBlock_Envi_2_23 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Envi_2_23), value);
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_3_24() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicateBlock_Envi_3_24)); }
	inline String_t* get_CommunicateBlock_Envi_3_24() const { return ___CommunicateBlock_Envi_3_24; }
	inline String_t** get_address_of_CommunicateBlock_Envi_3_24() { return &___CommunicateBlock_Envi_3_24; }
	inline void set_CommunicateBlock_Envi_3_24(String_t* value)
	{
		___CommunicateBlock_Envi_3_24 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateBlock_Envi_3_24), value);
	}

	inline static int32_t get_offset_of_InitialSP_25() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___InitialSP_25)); }
	inline String_t* get_InitialSP_25() const { return ___InitialSP_25; }
	inline String_t** get_address_of_InitialSP_25() { return &___InitialSP_25; }
	inline void set_InitialSP_25(String_t* value)
	{
		___InitialSP_25 = value;
		Il2CppCodeGenWriteBarrier((&___InitialSP_25), value);
	}

	inline static int32_t get_offset_of_UnlockNum_26() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___UnlockNum_26)); }
	inline String_t* get_UnlockNum_26() const { return ___UnlockNum_26; }
	inline String_t** get_address_of_UnlockNum_26() { return &___UnlockNum_26; }
	inline void set_UnlockNum_26(String_t* value)
	{
		___UnlockNum_26 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockNum_26), value);
	}

	inline static int32_t get_offset_of_Name_27() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___Name_27)); }
	inline String_t* get_Name_27() const { return ___Name_27; }
	inline String_t** get_address_of_Name_27() { return &___Name_27; }
	inline void set_Name_27(String_t* value)
	{
		___Name_27 = value;
		Il2CppCodeGenWriteBarrier((&___Name_27), value);
	}

	inline static int32_t get_offset_of_Des_28() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___Des_28)); }
	inline String_t* get_Des_28() const { return ___Des_28; }
	inline String_t** get_address_of_Des_28() { return &___Des_28; }
	inline void set_Des_28(String_t* value)
	{
		___Des_28 = value;
		Il2CppCodeGenWriteBarrier((&___Des_28), value);
	}

	inline static int32_t get_offset_of_Res_29() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___Res_29)); }
	inline String_t* get_Res_29() const { return ___Res_29; }
	inline String_t** get_address_of_Res_29() { return &___Res_29; }
	inline void set_Res_29(String_t* value)
	{
		___Res_29 = value;
		Il2CppCodeGenWriteBarrier((&___Res_29), value);
	}

	inline static int32_t get_offset_of_StrategyID_30() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___StrategyID_30)); }
	inline String_t* get_StrategyID_30() const { return ___StrategyID_30; }
	inline String_t** get_address_of_StrategyID_30() { return &___StrategyID_30; }
	inline void set_StrategyID_30(String_t* value)
	{
		___StrategyID_30 = value;
		Il2CppCodeGenWriteBarrier((&___StrategyID_30), value);
	}

	inline static int32_t get_offset_of_Medi_Start_31() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___Medi_Start_31)); }
	inline String_t* get_Medi_Start_31() const { return ___Medi_Start_31; }
	inline String_t** get_address_of_Medi_Start_31() { return &___Medi_Start_31; }
	inline void set_Medi_Start_31(String_t* value)
	{
		___Medi_Start_31 = value;
		Il2CppCodeGenWriteBarrier((&___Medi_Start_31), value);
	}

	inline static int32_t get_offset_of_Medi_Work_32() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___Medi_Work_32)); }
	inline String_t* get_Medi_Work_32() const { return ___Medi_Work_32; }
	inline String_t** get_address_of_Medi_Work_32() { return &___Medi_Work_32; }
	inline void set_Medi_Work_32(String_t* value)
	{
		___Medi_Work_32 = value;
		Il2CppCodeGenWriteBarrier((&___Medi_Work_32), value);
	}

	inline static int32_t get_offset_of_Medi_Spd_33() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___Medi_Spd_33)); }
	inline String_t* get_Medi_Spd_33() const { return ___Medi_Spd_33; }
	inline String_t** get_address_of_Medi_Spd_33() { return &___Medi_Spd_33; }
	inline void set_Medi_Spd_33(String_t* value)
	{
		___Medi_Spd_33 = value;
		Il2CppCodeGenWriteBarrier((&___Medi_Spd_33), value);
	}

	inline static int32_t get_offset_of_CommunicationThreshold_34() { return static_cast<int32_t>(offsetof(Virus_Sheet_t1023815819, ___CommunicationThreshold_34)); }
	inline String_t* get_CommunicationThreshold_34() const { return ___CommunicationThreshold_34; }
	inline String_t** get_address_of_CommunicationThreshold_34() { return &___CommunicationThreshold_34; }
	inline void set_CommunicationThreshold_34(String_t* value)
	{
		___CommunicationThreshold_34 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicationThreshold_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRUS_SHEET_T1023815819_H
#ifndef SPECIALABILITY_SHEET_T1719590912_H
#define SPECIALABILITY_SHEET_T1719590912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpecialAbility_Sheet
struct  SpecialAbility_Sheet_t1719590912  : public RuntimeObject
{
public:
	// System.String SpecialAbility_Sheet::ID
	String_t* ___ID_0;
	// System.String SpecialAbility_Sheet::ResIcon
	String_t* ___ResIcon_1;
	// System.String SpecialAbility_Sheet::Name
	String_t* ___Name_2;
	// System.String SpecialAbility_Sheet::Value1
	String_t* ___Value1_3;
	// System.String SpecialAbility_Sheet::Value1_Add
	String_t* ___Value1_Add_4;
	// System.String SpecialAbility_Sheet::Value2
	String_t* ___Value2_5;
	// System.String SpecialAbility_Sheet::Value2_Add
	String_t* ___Value2_Add_6;
	// System.String SpecialAbility_Sheet::Value3
	String_t* ___Value3_7;
	// System.String SpecialAbility_Sheet::Value3_Add
	String_t* ___Value3_Add_8;
	// System.String SpecialAbility_Sheet::DesTextID
	String_t* ___DesTextID_9;
	// System.String SpecialAbility_Sheet::SEName
	String_t* ___SEName_10;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___ID_0)); }
	inline String_t* get_ID_0() const { return ___ID_0; }
	inline String_t** get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(String_t* value)
	{
		___ID_0 = value;
		Il2CppCodeGenWriteBarrier((&___ID_0), value);
	}

	inline static int32_t get_offset_of_ResIcon_1() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___ResIcon_1)); }
	inline String_t* get_ResIcon_1() const { return ___ResIcon_1; }
	inline String_t** get_address_of_ResIcon_1() { return &___ResIcon_1; }
	inline void set_ResIcon_1(String_t* value)
	{
		___ResIcon_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResIcon_1), value);
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Value1_3() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___Value1_3)); }
	inline String_t* get_Value1_3() const { return ___Value1_3; }
	inline String_t** get_address_of_Value1_3() { return &___Value1_3; }
	inline void set_Value1_3(String_t* value)
	{
		___Value1_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value1_3), value);
	}

	inline static int32_t get_offset_of_Value1_Add_4() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___Value1_Add_4)); }
	inline String_t* get_Value1_Add_4() const { return ___Value1_Add_4; }
	inline String_t** get_address_of_Value1_Add_4() { return &___Value1_Add_4; }
	inline void set_Value1_Add_4(String_t* value)
	{
		___Value1_Add_4 = value;
		Il2CppCodeGenWriteBarrier((&___Value1_Add_4), value);
	}

	inline static int32_t get_offset_of_Value2_5() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___Value2_5)); }
	inline String_t* get_Value2_5() const { return ___Value2_5; }
	inline String_t** get_address_of_Value2_5() { return &___Value2_5; }
	inline void set_Value2_5(String_t* value)
	{
		___Value2_5 = value;
		Il2CppCodeGenWriteBarrier((&___Value2_5), value);
	}

	inline static int32_t get_offset_of_Value2_Add_6() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___Value2_Add_6)); }
	inline String_t* get_Value2_Add_6() const { return ___Value2_Add_6; }
	inline String_t** get_address_of_Value2_Add_6() { return &___Value2_Add_6; }
	inline void set_Value2_Add_6(String_t* value)
	{
		___Value2_Add_6 = value;
		Il2CppCodeGenWriteBarrier((&___Value2_Add_6), value);
	}

	inline static int32_t get_offset_of_Value3_7() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___Value3_7)); }
	inline String_t* get_Value3_7() const { return ___Value3_7; }
	inline String_t** get_address_of_Value3_7() { return &___Value3_7; }
	inline void set_Value3_7(String_t* value)
	{
		___Value3_7 = value;
		Il2CppCodeGenWriteBarrier((&___Value3_7), value);
	}

	inline static int32_t get_offset_of_Value3_Add_8() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___Value3_Add_8)); }
	inline String_t* get_Value3_Add_8() const { return ___Value3_Add_8; }
	inline String_t** get_address_of_Value3_Add_8() { return &___Value3_Add_8; }
	inline void set_Value3_Add_8(String_t* value)
	{
		___Value3_Add_8 = value;
		Il2CppCodeGenWriteBarrier((&___Value3_Add_8), value);
	}

	inline static int32_t get_offset_of_DesTextID_9() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___DesTextID_9)); }
	inline String_t* get_DesTextID_9() const { return ___DesTextID_9; }
	inline String_t** get_address_of_DesTextID_9() { return &___DesTextID_9; }
	inline void set_DesTextID_9(String_t* value)
	{
		___DesTextID_9 = value;
		Il2CppCodeGenWriteBarrier((&___DesTextID_9), value);
	}

	inline static int32_t get_offset_of_SEName_10() { return static_cast<int32_t>(offsetof(SpecialAbility_Sheet_t1719590912, ___SEName_10)); }
	inline String_t* get_SEName_10() const { return ___SEName_10; }
	inline String_t** get_address_of_SEName_10() { return &___SEName_10; }
	inline void set_SEName_10(String_t* value)
	{
		___SEName_10 = value;
		Il2CppCodeGenWriteBarrier((&___SEName_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPECIALABILITY_SHEET_T1719590912_H
#ifndef INFECTION_SHEET_T3020078557_H
#define INFECTION_SHEET_T3020078557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Infection_Sheet
struct  Infection_Sheet_t3020078557  : public RuntimeObject
{
public:
	// System.String Infection_Sheet::TotalInfection
	String_t* ___TotalInfection_0;
	// System.String Infection_Sheet::GainSP
	String_t* ___GainSP_1;

public:
	inline static int32_t get_offset_of_TotalInfection_0() { return static_cast<int32_t>(offsetof(Infection_Sheet_t3020078557, ___TotalInfection_0)); }
	inline String_t* get_TotalInfection_0() const { return ___TotalInfection_0; }
	inline String_t** get_address_of_TotalInfection_0() { return &___TotalInfection_0; }
	inline void set_TotalInfection_0(String_t* value)
	{
		___TotalInfection_0 = value;
		Il2CppCodeGenWriteBarrier((&___TotalInfection_0), value);
	}

	inline static int32_t get_offset_of_GainSP_1() { return static_cast<int32_t>(offsetof(Infection_Sheet_t3020078557, ___GainSP_1)); }
	inline String_t* get_GainSP_1() const { return ___GainSP_1; }
	inline String_t** get_address_of_GainSP_1() { return &___GainSP_1; }
	inline void set_GainSP_1(String_t* value)
	{
		___GainSP_1 = value;
		Il2CppCodeGenWriteBarrier((&___GainSP_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INFECTION_SHEET_T3020078557_H
#ifndef DAMAGE_SHEET_T566866227_H
#define DAMAGE_SHEET_T566866227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Damage_Sheet
struct  Damage_Sheet_t566866227  : public RuntimeObject
{
public:
	// System.String Damage_Sheet::TotalDamage
	String_t* ___TotalDamage_0;
	// System.String Damage_Sheet::GainSP
	String_t* ___GainSP_1;

public:
	inline static int32_t get_offset_of_TotalDamage_0() { return static_cast<int32_t>(offsetof(Damage_Sheet_t566866227, ___TotalDamage_0)); }
	inline String_t* get_TotalDamage_0() const { return ___TotalDamage_0; }
	inline String_t** get_address_of_TotalDamage_0() { return &___TotalDamage_0; }
	inline void set_TotalDamage_0(String_t* value)
	{
		___TotalDamage_0 = value;
		Il2CppCodeGenWriteBarrier((&___TotalDamage_0), value);
	}

	inline static int32_t get_offset_of_GainSP_1() { return static_cast<int32_t>(offsetof(Damage_Sheet_t566866227, ___GainSP_1)); }
	inline String_t* get_GainSP_1() const { return ___GainSP_1; }
	inline String_t** get_address_of_GainSP_1() { return &___GainSP_1; }
	inline void set_GainSP_1(String_t* value)
	{
		___GainSP_1 = value;
		Il2CppCodeGenWriteBarrier((&___GainSP_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAMAGE_SHEET_T566866227_H
#ifndef UNLOCKMISSION_SHEET_T238265305_H
#define UNLOCKMISSION_SHEET_T238265305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnlockMission_Sheet
struct  UnlockMission_Sheet_t238265305  : public RuntimeObject
{
public:
	// System.String UnlockMission_Sheet::MissionID
	String_t* ___MissionID_0;
	// System.String UnlockMission_Sheet::UnlockType
	String_t* ___UnlockType_1;
	// System.String UnlockMission_Sheet::Param1
	String_t* ___Param1_2;
	// System.String UnlockMission_Sheet::Param2
	String_t* ___Param2_3;
	// System.String UnlockMission_Sheet::Param3
	String_t* ___Param3_4;
	// System.String UnlockMission_Sheet::Param4
	String_t* ___Param4_5;
	// System.String UnlockMission_Sheet::Param5
	String_t* ___Param5_6;
	// System.String UnlockMission_Sheet::UnlockItemID
	String_t* ___UnlockItemID_7;
	// System.String UnlockMission_Sheet::UnlockCost
	String_t* ___UnlockCost_8;

public:
	inline static int32_t get_offset_of_MissionID_0() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___MissionID_0)); }
	inline String_t* get_MissionID_0() const { return ___MissionID_0; }
	inline String_t** get_address_of_MissionID_0() { return &___MissionID_0; }
	inline void set_MissionID_0(String_t* value)
	{
		___MissionID_0 = value;
		Il2CppCodeGenWriteBarrier((&___MissionID_0), value);
	}

	inline static int32_t get_offset_of_UnlockType_1() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___UnlockType_1)); }
	inline String_t* get_UnlockType_1() const { return ___UnlockType_1; }
	inline String_t** get_address_of_UnlockType_1() { return &___UnlockType_1; }
	inline void set_UnlockType_1(String_t* value)
	{
		___UnlockType_1 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockType_1), value);
	}

	inline static int32_t get_offset_of_Param1_2() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___Param1_2)); }
	inline String_t* get_Param1_2() const { return ___Param1_2; }
	inline String_t** get_address_of_Param1_2() { return &___Param1_2; }
	inline void set_Param1_2(String_t* value)
	{
		___Param1_2 = value;
		Il2CppCodeGenWriteBarrier((&___Param1_2), value);
	}

	inline static int32_t get_offset_of_Param2_3() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___Param2_3)); }
	inline String_t* get_Param2_3() const { return ___Param2_3; }
	inline String_t** get_address_of_Param2_3() { return &___Param2_3; }
	inline void set_Param2_3(String_t* value)
	{
		___Param2_3 = value;
		Il2CppCodeGenWriteBarrier((&___Param2_3), value);
	}

	inline static int32_t get_offset_of_Param3_4() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___Param3_4)); }
	inline String_t* get_Param3_4() const { return ___Param3_4; }
	inline String_t** get_address_of_Param3_4() { return &___Param3_4; }
	inline void set_Param3_4(String_t* value)
	{
		___Param3_4 = value;
		Il2CppCodeGenWriteBarrier((&___Param3_4), value);
	}

	inline static int32_t get_offset_of_Param4_5() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___Param4_5)); }
	inline String_t* get_Param4_5() const { return ___Param4_5; }
	inline String_t** get_address_of_Param4_5() { return &___Param4_5; }
	inline void set_Param4_5(String_t* value)
	{
		___Param4_5 = value;
		Il2CppCodeGenWriteBarrier((&___Param4_5), value);
	}

	inline static int32_t get_offset_of_Param5_6() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___Param5_6)); }
	inline String_t* get_Param5_6() const { return ___Param5_6; }
	inline String_t** get_address_of_Param5_6() { return &___Param5_6; }
	inline void set_Param5_6(String_t* value)
	{
		___Param5_6 = value;
		Il2CppCodeGenWriteBarrier((&___Param5_6), value);
	}

	inline static int32_t get_offset_of_UnlockItemID_7() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___UnlockItemID_7)); }
	inline String_t* get_UnlockItemID_7() const { return ___UnlockItemID_7; }
	inline String_t** get_address_of_UnlockItemID_7() { return &___UnlockItemID_7; }
	inline void set_UnlockItemID_7(String_t* value)
	{
		___UnlockItemID_7 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockItemID_7), value);
	}

	inline static int32_t get_offset_of_UnlockCost_8() { return static_cast<int32_t>(offsetof(UnlockMission_Sheet_t238265305, ___UnlockCost_8)); }
	inline String_t* get_UnlockCost_8() const { return ___UnlockCost_8; }
	inline String_t** get_address_of_UnlockCost_8() { return &___UnlockCost_8; }
	inline void set_UnlockCost_8(String_t* value)
	{
		___UnlockCost_8 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockCost_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLOCKMISSION_SHEET_T238265305_H
#ifndef USER_T1595548040_H
#define USER_T1595548040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// User
struct  User_t1595548040  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<U_DNA>[] User::DB_u_dna
	List_1U5BU5D_t2454051223* ___DB_u_dna_2;
	// System.Int64 User::Gold
	int64_t ___Gold_3;
	// System.Int64 User::Gem
	int64_t ___Gem_4;
	// System.Collections.Generic.List`1<U_MissionFlag> User::DB_u_mf
	List_1_t4164527967 * ___DB_u_mf_5;
	// System.Collections.Generic.List`1<System.String> User::DB_u_UnlockedViruses
	List_1_t393358461 * ___DB_u_UnlockedViruses_6;
	// System.Collections.Generic.List`1<System.String> User::DB_u_UnlockedZombies
	List_1_t393358461 * ___DB_u_UnlockedZombies_10;

public:
	inline static int32_t get_offset_of_DB_u_dna_2() { return static_cast<int32_t>(offsetof(User_t1595548040, ___DB_u_dna_2)); }
	inline List_1U5BU5D_t2454051223* get_DB_u_dna_2() const { return ___DB_u_dna_2; }
	inline List_1U5BU5D_t2454051223** get_address_of_DB_u_dna_2() { return &___DB_u_dna_2; }
	inline void set_DB_u_dna_2(List_1U5BU5D_t2454051223* value)
	{
		___DB_u_dna_2 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_dna_2), value);
	}

	inline static int32_t get_offset_of_Gold_3() { return static_cast<int32_t>(offsetof(User_t1595548040, ___Gold_3)); }
	inline int64_t get_Gold_3() const { return ___Gold_3; }
	inline int64_t* get_address_of_Gold_3() { return &___Gold_3; }
	inline void set_Gold_3(int64_t value)
	{
		___Gold_3 = value;
	}

	inline static int32_t get_offset_of_Gem_4() { return static_cast<int32_t>(offsetof(User_t1595548040, ___Gem_4)); }
	inline int64_t get_Gem_4() const { return ___Gem_4; }
	inline int64_t* get_address_of_Gem_4() { return &___Gem_4; }
	inline void set_Gem_4(int64_t value)
	{
		___Gem_4 = value;
	}

	inline static int32_t get_offset_of_DB_u_mf_5() { return static_cast<int32_t>(offsetof(User_t1595548040, ___DB_u_mf_5)); }
	inline List_1_t4164527967 * get_DB_u_mf_5() const { return ___DB_u_mf_5; }
	inline List_1_t4164527967 ** get_address_of_DB_u_mf_5() { return &___DB_u_mf_5; }
	inline void set_DB_u_mf_5(List_1_t4164527967 * value)
	{
		___DB_u_mf_5 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_mf_5), value);
	}

	inline static int32_t get_offset_of_DB_u_UnlockedViruses_6() { return static_cast<int32_t>(offsetof(User_t1595548040, ___DB_u_UnlockedViruses_6)); }
	inline List_1_t393358461 * get_DB_u_UnlockedViruses_6() const { return ___DB_u_UnlockedViruses_6; }
	inline List_1_t393358461 ** get_address_of_DB_u_UnlockedViruses_6() { return &___DB_u_UnlockedViruses_6; }
	inline void set_DB_u_UnlockedViruses_6(List_1_t393358461 * value)
	{
		___DB_u_UnlockedViruses_6 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_UnlockedViruses_6), value);
	}

	inline static int32_t get_offset_of_DB_u_UnlockedZombies_10() { return static_cast<int32_t>(offsetof(User_t1595548040, ___DB_u_UnlockedZombies_10)); }
	inline List_1_t393358461 * get_DB_u_UnlockedZombies_10() const { return ___DB_u_UnlockedZombies_10; }
	inline List_1_t393358461 ** get_address_of_DB_u_UnlockedZombies_10() { return &___DB_u_UnlockedZombies_10; }
	inline void set_DB_u_UnlockedZombies_10(List_1_t393358461 * value)
	{
		___DB_u_UnlockedZombies_10 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_UnlockedZombies_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USER_T1595548040_H
#ifndef U_DNA_T1591303968_H
#define U_DNA_T1591303968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// U_DNA
struct  U_DNA_t1591303968  : public RuntimeObject
{
public:
	// System.Int32 U_DNA::ID
	int32_t ___ID_0;
	// System.Int32 U_DNA::Lv
	int32_t ___Lv_1;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(U_DNA_t1591303968, ___ID_0)); }
	inline int32_t get_ID_0() const { return ___ID_0; }
	inline int32_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int32_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_Lv_1() { return static_cast<int32_t>(offsetof(U_DNA_t1591303968, ___Lv_1)); }
	inline int32_t get_Lv_1() const { return ___Lv_1; }
	inline int32_t* get_address_of_Lv_1() { return &___Lv_1; }
	inline void set_Lv_1(int32_t value)
	{
		___Lv_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U_DNA_T1591303968_H
#ifndef U_MISSIONFLAG_T571487453_H
#define U_MISSIONFLAG_T571487453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// U_MissionFlag
struct  U_MissionFlag_t571487453  : public RuntimeObject
{
public:
	// System.Int32 U_MissionFlag::VirusID
	int32_t ___VirusID_0;
	// System.Int32 U_MissionFlag::MissionID
	int32_t ___MissionID_1;
	// System.Boolean U_MissionFlag::Flag
	bool ___Flag_2;

public:
	inline static int32_t get_offset_of_VirusID_0() { return static_cast<int32_t>(offsetof(U_MissionFlag_t571487453, ___VirusID_0)); }
	inline int32_t get_VirusID_0() const { return ___VirusID_0; }
	inline int32_t* get_address_of_VirusID_0() { return &___VirusID_0; }
	inline void set_VirusID_0(int32_t value)
	{
		___VirusID_0 = value;
	}

	inline static int32_t get_offset_of_MissionID_1() { return static_cast<int32_t>(offsetof(U_MissionFlag_t571487453, ___MissionID_1)); }
	inline int32_t get_MissionID_1() const { return ___MissionID_1; }
	inline int32_t* get_address_of_MissionID_1() { return &___MissionID_1; }
	inline void set_MissionID_1(int32_t value)
	{
		___MissionID_1 = value;
	}

	inline static int32_t get_offset_of_Flag_2() { return static_cast<int32_t>(offsetof(U_MissionFlag_t571487453, ___Flag_2)); }
	inline bool get_Flag_2() const { return ___Flag_2; }
	inline bool* get_address_of_Flag_2() { return &___Flag_2; }
	inline void set_Flag_2(bool value)
	{
		___Flag_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U_MISSIONFLAG_T571487453_H
#ifndef F_USER_T3083609945_H
#define F_USER_T3083609945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// F_User
struct  F_User_t3083609945  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<F_U_DNA>[] F_User::DB_u_dna
	List_1U5BU5D_t4105820520* ___DB_u_dna_0;
	// System.String F_User::Gold
	String_t* ___Gold_1;
	// System.String F_User::Gem
	String_t* ___Gem_2;
	// System.Collections.Generic.List`1<F_U_MissionFlag> F_User::DB_u_mf
	List_1_t2299772322 * ___DB_u_mf_3;
	// System.Collections.Generic.List`1<System.String> F_User::DB_u_UnlockedViruses
	List_1_t393358461 * ___DB_u_UnlockedViruses_4;
	// System.Collections.Generic.List`1<System.String> F_User::DB_u_UnlockedZombies
	List_1_t393358461 * ___DB_u_UnlockedZombies_5;

public:
	inline static int32_t get_offset_of_DB_u_dna_0() { return static_cast<int32_t>(offsetof(F_User_t3083609945, ___DB_u_dna_0)); }
	inline List_1U5BU5D_t4105820520* get_DB_u_dna_0() const { return ___DB_u_dna_0; }
	inline List_1U5BU5D_t4105820520** get_address_of_DB_u_dna_0() { return &___DB_u_dna_0; }
	inline void set_DB_u_dna_0(List_1U5BU5D_t4105820520* value)
	{
		___DB_u_dna_0 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_dna_0), value);
	}

	inline static int32_t get_offset_of_Gold_1() { return static_cast<int32_t>(offsetof(F_User_t3083609945, ___Gold_1)); }
	inline String_t* get_Gold_1() const { return ___Gold_1; }
	inline String_t** get_address_of_Gold_1() { return &___Gold_1; }
	inline void set_Gold_1(String_t* value)
	{
		___Gold_1 = value;
		Il2CppCodeGenWriteBarrier((&___Gold_1), value);
	}

	inline static int32_t get_offset_of_Gem_2() { return static_cast<int32_t>(offsetof(F_User_t3083609945, ___Gem_2)); }
	inline String_t* get_Gem_2() const { return ___Gem_2; }
	inline String_t** get_address_of_Gem_2() { return &___Gem_2; }
	inline void set_Gem_2(String_t* value)
	{
		___Gem_2 = value;
		Il2CppCodeGenWriteBarrier((&___Gem_2), value);
	}

	inline static int32_t get_offset_of_DB_u_mf_3() { return static_cast<int32_t>(offsetof(F_User_t3083609945, ___DB_u_mf_3)); }
	inline List_1_t2299772322 * get_DB_u_mf_3() const { return ___DB_u_mf_3; }
	inline List_1_t2299772322 ** get_address_of_DB_u_mf_3() { return &___DB_u_mf_3; }
	inline void set_DB_u_mf_3(List_1_t2299772322 * value)
	{
		___DB_u_mf_3 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_mf_3), value);
	}

	inline static int32_t get_offset_of_DB_u_UnlockedViruses_4() { return static_cast<int32_t>(offsetof(F_User_t3083609945, ___DB_u_UnlockedViruses_4)); }
	inline List_1_t393358461 * get_DB_u_UnlockedViruses_4() const { return ___DB_u_UnlockedViruses_4; }
	inline List_1_t393358461 ** get_address_of_DB_u_UnlockedViruses_4() { return &___DB_u_UnlockedViruses_4; }
	inline void set_DB_u_UnlockedViruses_4(List_1_t393358461 * value)
	{
		___DB_u_UnlockedViruses_4 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_UnlockedViruses_4), value);
	}

	inline static int32_t get_offset_of_DB_u_UnlockedZombies_5() { return static_cast<int32_t>(offsetof(F_User_t3083609945, ___DB_u_UnlockedZombies_5)); }
	inline List_1_t393358461 * get_DB_u_UnlockedZombies_5() const { return ___DB_u_UnlockedZombies_5; }
	inline List_1_t393358461 ** get_address_of_DB_u_UnlockedZombies_5() { return &___DB_u_UnlockedZombies_5; }
	inline void set_DB_u_UnlockedZombies_5(List_1_t393358461 * value)
	{
		___DB_u_UnlockedZombies_5 = value;
		Il2CppCodeGenWriteBarrier((&___DB_u_UnlockedZombies_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // F_USER_T3083609945_H
#ifndef IAP_SHEET_T1670347038_H
#define IAP_SHEET_T1670347038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAP_Sheet
struct  IAP_Sheet_t1670347038  : public RuntimeObject
{
public:
	// System.String IAP_Sheet::IAPPackageID
	String_t* ___IAPPackageID_0;
	// System.String IAP_Sheet::PackageName
	String_t* ___PackageName_1;
	// System.String IAP_Sheet::LootID
	String_t* ___LootID_2;
	// System.String IAP_Sheet::DollarPrice
	String_t* ___DollarPrice_3;
	// System.String IAP_Sheet::IAPSlot
	String_t* ___IAPSlot_4;

public:
	inline static int32_t get_offset_of_IAPPackageID_0() { return static_cast<int32_t>(offsetof(IAP_Sheet_t1670347038, ___IAPPackageID_0)); }
	inline String_t* get_IAPPackageID_0() const { return ___IAPPackageID_0; }
	inline String_t** get_address_of_IAPPackageID_0() { return &___IAPPackageID_0; }
	inline void set_IAPPackageID_0(String_t* value)
	{
		___IAPPackageID_0 = value;
		Il2CppCodeGenWriteBarrier((&___IAPPackageID_0), value);
	}

	inline static int32_t get_offset_of_PackageName_1() { return static_cast<int32_t>(offsetof(IAP_Sheet_t1670347038, ___PackageName_1)); }
	inline String_t* get_PackageName_1() const { return ___PackageName_1; }
	inline String_t** get_address_of_PackageName_1() { return &___PackageName_1; }
	inline void set_PackageName_1(String_t* value)
	{
		___PackageName_1 = value;
		Il2CppCodeGenWriteBarrier((&___PackageName_1), value);
	}

	inline static int32_t get_offset_of_LootID_2() { return static_cast<int32_t>(offsetof(IAP_Sheet_t1670347038, ___LootID_2)); }
	inline String_t* get_LootID_2() const { return ___LootID_2; }
	inline String_t** get_address_of_LootID_2() { return &___LootID_2; }
	inline void set_LootID_2(String_t* value)
	{
		___LootID_2 = value;
		Il2CppCodeGenWriteBarrier((&___LootID_2), value);
	}

	inline static int32_t get_offset_of_DollarPrice_3() { return static_cast<int32_t>(offsetof(IAP_Sheet_t1670347038, ___DollarPrice_3)); }
	inline String_t* get_DollarPrice_3() const { return ___DollarPrice_3; }
	inline String_t** get_address_of_DollarPrice_3() { return &___DollarPrice_3; }
	inline void set_DollarPrice_3(String_t* value)
	{
		___DollarPrice_3 = value;
		Il2CppCodeGenWriteBarrier((&___DollarPrice_3), value);
	}

	inline static int32_t get_offset_of_IAPSlot_4() { return static_cast<int32_t>(offsetof(IAP_Sheet_t1670347038, ___IAPSlot_4)); }
	inline String_t* get_IAPSlot_4() const { return ___IAPSlot_4; }
	inline String_t** get_address_of_IAPSlot_4() { return &___IAPSlot_4; }
	inline void set_IAPSlot_4(String_t* value)
	{
		___IAPSlot_4 = value;
		Il2CppCodeGenWriteBarrier((&___IAPSlot_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAP_SHEET_T1670347038_H
#ifndef HUMAN_SHEET_T253649465_H
#define HUMAN_SHEET_T253649465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Human_Sheet
struct  Human_Sheet_t253649465  : public RuntimeObject
{
public:
	// System.String Human_Sheet::HumanID
	String_t* ___HumanID_0;
	// System.String Human_Sheet::MaxHP
	String_t* ___MaxHP_1;
	// System.String Human_Sheet::MaxInfection
	String_t* ___MaxInfection_2;
	// System.String Human_Sheet::Atk
	String_t* ___Atk_3;
	// System.String Human_Sheet::Heal
	String_t* ___Heal_4;
	// System.String Human_Sheet::Def
	String_t* ___Def_5;
	// System.String Human_Sheet::Cure
	String_t* ___Cure_6;
	// System.String Human_Sheet::InfectShield
	String_t* ___InfectShield_7;
	// System.String Human_Sheet::InfectionAnti
	String_t* ___InfectionAnti_8;
	// System.String Human_Sheet::CommunicationAnti
	String_t* ___CommunicationAnti_9;
	// System.String Human_Sheet::HPHealing
	String_t* ___HPHealing_10;
	// System.String Human_Sheet::ClimateBoost_1
	String_t* ___ClimateBoost_1_11;
	// System.String Human_Sheet::ClimateBoost_2
	String_t* ___ClimateBoost_2_12;
	// System.String Human_Sheet::ClimateBoost_3
	String_t* ___ClimateBoost_3_13;
	// System.String Human_Sheet::EnviBoost_1
	String_t* ___EnviBoost_1_14;
	// System.String Human_Sheet::EnviBoost_2
	String_t* ___EnviBoost_2_15;
	// System.String Human_Sheet::EnviBoost_3
	String_t* ___EnviBoost_3_16;
	// System.String Human_Sheet::Weight
	String_t* ___Weight_17;
	// System.String Human_Sheet::Name
	String_t* ___Name_18;
	// System.String Human_Sheet::Res
	String_t* ___Res_19;
	// System.String Human_Sheet::SkillID
	String_t* ___SkillID_20;

public:
	inline static int32_t get_offset_of_HumanID_0() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___HumanID_0)); }
	inline String_t* get_HumanID_0() const { return ___HumanID_0; }
	inline String_t** get_address_of_HumanID_0() { return &___HumanID_0; }
	inline void set_HumanID_0(String_t* value)
	{
		___HumanID_0 = value;
		Il2CppCodeGenWriteBarrier((&___HumanID_0), value);
	}

	inline static int32_t get_offset_of_MaxHP_1() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___MaxHP_1)); }
	inline String_t* get_MaxHP_1() const { return ___MaxHP_1; }
	inline String_t** get_address_of_MaxHP_1() { return &___MaxHP_1; }
	inline void set_MaxHP_1(String_t* value)
	{
		___MaxHP_1 = value;
		Il2CppCodeGenWriteBarrier((&___MaxHP_1), value);
	}

	inline static int32_t get_offset_of_MaxInfection_2() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___MaxInfection_2)); }
	inline String_t* get_MaxInfection_2() const { return ___MaxInfection_2; }
	inline String_t** get_address_of_MaxInfection_2() { return &___MaxInfection_2; }
	inline void set_MaxInfection_2(String_t* value)
	{
		___MaxInfection_2 = value;
		Il2CppCodeGenWriteBarrier((&___MaxInfection_2), value);
	}

	inline static int32_t get_offset_of_Atk_3() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___Atk_3)); }
	inline String_t* get_Atk_3() const { return ___Atk_3; }
	inline String_t** get_address_of_Atk_3() { return &___Atk_3; }
	inline void set_Atk_3(String_t* value)
	{
		___Atk_3 = value;
		Il2CppCodeGenWriteBarrier((&___Atk_3), value);
	}

	inline static int32_t get_offset_of_Heal_4() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___Heal_4)); }
	inline String_t* get_Heal_4() const { return ___Heal_4; }
	inline String_t** get_address_of_Heal_4() { return &___Heal_4; }
	inline void set_Heal_4(String_t* value)
	{
		___Heal_4 = value;
		Il2CppCodeGenWriteBarrier((&___Heal_4), value);
	}

	inline static int32_t get_offset_of_Def_5() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___Def_5)); }
	inline String_t* get_Def_5() const { return ___Def_5; }
	inline String_t** get_address_of_Def_5() { return &___Def_5; }
	inline void set_Def_5(String_t* value)
	{
		___Def_5 = value;
		Il2CppCodeGenWriteBarrier((&___Def_5), value);
	}

	inline static int32_t get_offset_of_Cure_6() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___Cure_6)); }
	inline String_t* get_Cure_6() const { return ___Cure_6; }
	inline String_t** get_address_of_Cure_6() { return &___Cure_6; }
	inline void set_Cure_6(String_t* value)
	{
		___Cure_6 = value;
		Il2CppCodeGenWriteBarrier((&___Cure_6), value);
	}

	inline static int32_t get_offset_of_InfectShield_7() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___InfectShield_7)); }
	inline String_t* get_InfectShield_7() const { return ___InfectShield_7; }
	inline String_t** get_address_of_InfectShield_7() { return &___InfectShield_7; }
	inline void set_InfectShield_7(String_t* value)
	{
		___InfectShield_7 = value;
		Il2CppCodeGenWriteBarrier((&___InfectShield_7), value);
	}

	inline static int32_t get_offset_of_InfectionAnti_8() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___InfectionAnti_8)); }
	inline String_t* get_InfectionAnti_8() const { return ___InfectionAnti_8; }
	inline String_t** get_address_of_InfectionAnti_8() { return &___InfectionAnti_8; }
	inline void set_InfectionAnti_8(String_t* value)
	{
		___InfectionAnti_8 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionAnti_8), value);
	}

	inline static int32_t get_offset_of_CommunicationAnti_9() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___CommunicationAnti_9)); }
	inline String_t* get_CommunicationAnti_9() const { return ___CommunicationAnti_9; }
	inline String_t** get_address_of_CommunicationAnti_9() { return &___CommunicationAnti_9; }
	inline void set_CommunicationAnti_9(String_t* value)
	{
		___CommunicationAnti_9 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicationAnti_9), value);
	}

	inline static int32_t get_offset_of_HPHealing_10() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___HPHealing_10)); }
	inline String_t* get_HPHealing_10() const { return ___HPHealing_10; }
	inline String_t** get_address_of_HPHealing_10() { return &___HPHealing_10; }
	inline void set_HPHealing_10(String_t* value)
	{
		___HPHealing_10 = value;
		Il2CppCodeGenWriteBarrier((&___HPHealing_10), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_1_11() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___ClimateBoost_1_11)); }
	inline String_t* get_ClimateBoost_1_11() const { return ___ClimateBoost_1_11; }
	inline String_t** get_address_of_ClimateBoost_1_11() { return &___ClimateBoost_1_11; }
	inline void set_ClimateBoost_1_11(String_t* value)
	{
		___ClimateBoost_1_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_1_11), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_2_12() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___ClimateBoost_2_12)); }
	inline String_t* get_ClimateBoost_2_12() const { return ___ClimateBoost_2_12; }
	inline String_t** get_address_of_ClimateBoost_2_12() { return &___ClimateBoost_2_12; }
	inline void set_ClimateBoost_2_12(String_t* value)
	{
		___ClimateBoost_2_12 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_2_12), value);
	}

	inline static int32_t get_offset_of_ClimateBoost_3_13() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___ClimateBoost_3_13)); }
	inline String_t* get_ClimateBoost_3_13() const { return ___ClimateBoost_3_13; }
	inline String_t** get_address_of_ClimateBoost_3_13() { return &___ClimateBoost_3_13; }
	inline void set_ClimateBoost_3_13(String_t* value)
	{
		___ClimateBoost_3_13 = value;
		Il2CppCodeGenWriteBarrier((&___ClimateBoost_3_13), value);
	}

	inline static int32_t get_offset_of_EnviBoost_1_14() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___EnviBoost_1_14)); }
	inline String_t* get_EnviBoost_1_14() const { return ___EnviBoost_1_14; }
	inline String_t** get_address_of_EnviBoost_1_14() { return &___EnviBoost_1_14; }
	inline void set_EnviBoost_1_14(String_t* value)
	{
		___EnviBoost_1_14 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_1_14), value);
	}

	inline static int32_t get_offset_of_EnviBoost_2_15() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___EnviBoost_2_15)); }
	inline String_t* get_EnviBoost_2_15() const { return ___EnviBoost_2_15; }
	inline String_t** get_address_of_EnviBoost_2_15() { return &___EnviBoost_2_15; }
	inline void set_EnviBoost_2_15(String_t* value)
	{
		___EnviBoost_2_15 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_2_15), value);
	}

	inline static int32_t get_offset_of_EnviBoost_3_16() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___EnviBoost_3_16)); }
	inline String_t* get_EnviBoost_3_16() const { return ___EnviBoost_3_16; }
	inline String_t** get_address_of_EnviBoost_3_16() { return &___EnviBoost_3_16; }
	inline void set_EnviBoost_3_16(String_t* value)
	{
		___EnviBoost_3_16 = value;
		Il2CppCodeGenWriteBarrier((&___EnviBoost_3_16), value);
	}

	inline static int32_t get_offset_of_Weight_17() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___Weight_17)); }
	inline String_t* get_Weight_17() const { return ___Weight_17; }
	inline String_t** get_address_of_Weight_17() { return &___Weight_17; }
	inline void set_Weight_17(String_t* value)
	{
		___Weight_17 = value;
		Il2CppCodeGenWriteBarrier((&___Weight_17), value);
	}

	inline static int32_t get_offset_of_Name_18() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___Name_18)); }
	inline String_t* get_Name_18() const { return ___Name_18; }
	inline String_t** get_address_of_Name_18() { return &___Name_18; }
	inline void set_Name_18(String_t* value)
	{
		___Name_18 = value;
		Il2CppCodeGenWriteBarrier((&___Name_18), value);
	}

	inline static int32_t get_offset_of_Res_19() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___Res_19)); }
	inline String_t* get_Res_19() const { return ___Res_19; }
	inline String_t** get_address_of_Res_19() { return &___Res_19; }
	inline void set_Res_19(String_t* value)
	{
		___Res_19 = value;
		Il2CppCodeGenWriteBarrier((&___Res_19), value);
	}

	inline static int32_t get_offset_of_SkillID_20() { return static_cast<int32_t>(offsetof(Human_Sheet_t253649465, ___SkillID_20)); }
	inline String_t* get_SkillID_20() const { return ___SkillID_20; }
	inline String_t** get_address_of_SkillID_20() { return &___SkillID_20; }
	inline void set_SkillID_20(String_t* value)
	{
		___SkillID_20 = value;
		Il2CppCodeGenWriteBarrier((&___SkillID_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMAN_SHEET_T253649465_H
#ifndef F_U_MISSIONFLAG_T3001699104_H
#define F_U_MISSIONFLAG_T3001699104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// F_U_MissionFlag
struct  F_U_MissionFlag_t3001699104  : public RuntimeObject
{
public:
	// System.String F_U_MissionFlag::VirusID
	String_t* ___VirusID_0;
	// System.String F_U_MissionFlag::MissionID
	String_t* ___MissionID_1;
	// System.String F_U_MissionFlag::Flag
	String_t* ___Flag_2;

public:
	inline static int32_t get_offset_of_VirusID_0() { return static_cast<int32_t>(offsetof(F_U_MissionFlag_t3001699104, ___VirusID_0)); }
	inline String_t* get_VirusID_0() const { return ___VirusID_0; }
	inline String_t** get_address_of_VirusID_0() { return &___VirusID_0; }
	inline void set_VirusID_0(String_t* value)
	{
		___VirusID_0 = value;
		Il2CppCodeGenWriteBarrier((&___VirusID_0), value);
	}

	inline static int32_t get_offset_of_MissionID_1() { return static_cast<int32_t>(offsetof(F_U_MissionFlag_t3001699104, ___MissionID_1)); }
	inline String_t* get_MissionID_1() const { return ___MissionID_1; }
	inline String_t** get_address_of_MissionID_1() { return &___MissionID_1; }
	inline void set_MissionID_1(String_t* value)
	{
		___MissionID_1 = value;
		Il2CppCodeGenWriteBarrier((&___MissionID_1), value);
	}

	inline static int32_t get_offset_of_Flag_2() { return static_cast<int32_t>(offsetof(F_U_MissionFlag_t3001699104, ___Flag_2)); }
	inline String_t* get_Flag_2() const { return ___Flag_2; }
	inline String_t** get_address_of_Flag_2() { return &___Flag_2; }
	inline void set_Flag_2(String_t* value)
	{
		___Flag_2 = value;
		Il2CppCodeGenWriteBarrier((&___Flag_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // F_U_MISSIONFLAG_T3001699104_H
#ifndef BATTLEEVENT_SHEET_T602915677_H
#define BATTLEEVENT_SHEET_T602915677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BattleEvent_Sheet
struct  BattleEvent_Sheet_t602915677  : public RuntimeObject
{
public:
	// System.String BattleEvent_Sheet::EventPackageID
	String_t* ___EventPackageID_0;
	// System.String BattleEvent_Sheet::EventPackageName
	String_t* ___EventPackageName_1;
	// System.String BattleEvent_Sheet::EventID
	String_t* ___EventID_2;
	// System.String BattleEvent_Sheet::EventValue
	String_t* ___EventValue_3;
	// System.String BattleEvent_Sheet::Weight
	String_t* ___Weight_4;

public:
	inline static int32_t get_offset_of_EventPackageID_0() { return static_cast<int32_t>(offsetof(BattleEvent_Sheet_t602915677, ___EventPackageID_0)); }
	inline String_t* get_EventPackageID_0() const { return ___EventPackageID_0; }
	inline String_t** get_address_of_EventPackageID_0() { return &___EventPackageID_0; }
	inline void set_EventPackageID_0(String_t* value)
	{
		___EventPackageID_0 = value;
		Il2CppCodeGenWriteBarrier((&___EventPackageID_0), value);
	}

	inline static int32_t get_offset_of_EventPackageName_1() { return static_cast<int32_t>(offsetof(BattleEvent_Sheet_t602915677, ___EventPackageName_1)); }
	inline String_t* get_EventPackageName_1() const { return ___EventPackageName_1; }
	inline String_t** get_address_of_EventPackageName_1() { return &___EventPackageName_1; }
	inline void set_EventPackageName_1(String_t* value)
	{
		___EventPackageName_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventPackageName_1), value);
	}

	inline static int32_t get_offset_of_EventID_2() { return static_cast<int32_t>(offsetof(BattleEvent_Sheet_t602915677, ___EventID_2)); }
	inline String_t* get_EventID_2() const { return ___EventID_2; }
	inline String_t** get_address_of_EventID_2() { return &___EventID_2; }
	inline void set_EventID_2(String_t* value)
	{
		___EventID_2 = value;
		Il2CppCodeGenWriteBarrier((&___EventID_2), value);
	}

	inline static int32_t get_offset_of_EventValue_3() { return static_cast<int32_t>(offsetof(BattleEvent_Sheet_t602915677, ___EventValue_3)); }
	inline String_t* get_EventValue_3() const { return ___EventValue_3; }
	inline String_t** get_address_of_EventValue_3() { return &___EventValue_3; }
	inline void set_EventValue_3(String_t* value)
	{
		___EventValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___EventValue_3), value);
	}

	inline static int32_t get_offset_of_Weight_4() { return static_cast<int32_t>(offsetof(BattleEvent_Sheet_t602915677, ___Weight_4)); }
	inline String_t* get_Weight_4() const { return ___Weight_4; }
	inline String_t** get_address_of_Weight_4() { return &___Weight_4; }
	inline void set_Weight_4(String_t* value)
	{
		___Weight_4 = value;
		Il2CppCodeGenWriteBarrier((&___Weight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATTLEEVENT_SHEET_T602915677_H
#ifndef BATTLESTRATEGY_SHEET_T1541607319_H
#define BATTLESTRATEGY_SHEET_T1541607319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BattleStrategy_Sheet
struct  BattleStrategy_Sheet_t1541607319  : public RuntimeObject
{
public:
	// System.String BattleStrategy_Sheet::GeneID
	String_t* ___GeneID_0;
	// System.String BattleStrategy_Sheet::StrategyID
	String_t* ___StrategyID_1;
	// System.String BattleStrategy_Sheet::BoardID
	String_t* ___BoardID_2;
	// System.String BattleStrategy_Sheet::EventID
	String_t* ___EventID_3;
	// System.String BattleStrategy_Sheet::Row
	String_t* ___Row_4;
	// System.String BattleStrategy_Sheet::Column
	String_t* ___Column_5;
	// System.String BattleStrategy_Sheet::FP1
	String_t* ___FP1_6;
	// System.String BattleStrategy_Sheet::FP2
	String_t* ___FP2_7;
	// System.String BattleStrategy_Sheet::UnlockCost_A
	String_t* ___UnlockCost_A_8;
	// System.String BattleStrategy_Sheet::UnlockCost_B
	String_t* ___UnlockCost_B_9;

public:
	inline static int32_t get_offset_of_GeneID_0() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___GeneID_0)); }
	inline String_t* get_GeneID_0() const { return ___GeneID_0; }
	inline String_t** get_address_of_GeneID_0() { return &___GeneID_0; }
	inline void set_GeneID_0(String_t* value)
	{
		___GeneID_0 = value;
		Il2CppCodeGenWriteBarrier((&___GeneID_0), value);
	}

	inline static int32_t get_offset_of_StrategyID_1() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___StrategyID_1)); }
	inline String_t* get_StrategyID_1() const { return ___StrategyID_1; }
	inline String_t** get_address_of_StrategyID_1() { return &___StrategyID_1; }
	inline void set_StrategyID_1(String_t* value)
	{
		___StrategyID_1 = value;
		Il2CppCodeGenWriteBarrier((&___StrategyID_1), value);
	}

	inline static int32_t get_offset_of_BoardID_2() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___BoardID_2)); }
	inline String_t* get_BoardID_2() const { return ___BoardID_2; }
	inline String_t** get_address_of_BoardID_2() { return &___BoardID_2; }
	inline void set_BoardID_2(String_t* value)
	{
		___BoardID_2 = value;
		Il2CppCodeGenWriteBarrier((&___BoardID_2), value);
	}

	inline static int32_t get_offset_of_EventID_3() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___EventID_3)); }
	inline String_t* get_EventID_3() const { return ___EventID_3; }
	inline String_t** get_address_of_EventID_3() { return &___EventID_3; }
	inline void set_EventID_3(String_t* value)
	{
		___EventID_3 = value;
		Il2CppCodeGenWriteBarrier((&___EventID_3), value);
	}

	inline static int32_t get_offset_of_Row_4() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___Row_4)); }
	inline String_t* get_Row_4() const { return ___Row_4; }
	inline String_t** get_address_of_Row_4() { return &___Row_4; }
	inline void set_Row_4(String_t* value)
	{
		___Row_4 = value;
		Il2CppCodeGenWriteBarrier((&___Row_4), value);
	}

	inline static int32_t get_offset_of_Column_5() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___Column_5)); }
	inline String_t* get_Column_5() const { return ___Column_5; }
	inline String_t** get_address_of_Column_5() { return &___Column_5; }
	inline void set_Column_5(String_t* value)
	{
		___Column_5 = value;
		Il2CppCodeGenWriteBarrier((&___Column_5), value);
	}

	inline static int32_t get_offset_of_FP1_6() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___FP1_6)); }
	inline String_t* get_FP1_6() const { return ___FP1_6; }
	inline String_t** get_address_of_FP1_6() { return &___FP1_6; }
	inline void set_FP1_6(String_t* value)
	{
		___FP1_6 = value;
		Il2CppCodeGenWriteBarrier((&___FP1_6), value);
	}

	inline static int32_t get_offset_of_FP2_7() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___FP2_7)); }
	inline String_t* get_FP2_7() const { return ___FP2_7; }
	inline String_t** get_address_of_FP2_7() { return &___FP2_7; }
	inline void set_FP2_7(String_t* value)
	{
		___FP2_7 = value;
		Il2CppCodeGenWriteBarrier((&___FP2_7), value);
	}

	inline static int32_t get_offset_of_UnlockCost_A_8() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___UnlockCost_A_8)); }
	inline String_t* get_UnlockCost_A_8() const { return ___UnlockCost_A_8; }
	inline String_t** get_address_of_UnlockCost_A_8() { return &___UnlockCost_A_8; }
	inline void set_UnlockCost_A_8(String_t* value)
	{
		___UnlockCost_A_8 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockCost_A_8), value);
	}

	inline static int32_t get_offset_of_UnlockCost_B_9() { return static_cast<int32_t>(offsetof(BattleStrategy_Sheet_t1541607319, ___UnlockCost_B_9)); }
	inline String_t* get_UnlockCost_B_9() const { return ___UnlockCost_B_9; }
	inline String_t** get_address_of_UnlockCost_B_9() { return &___UnlockCost_B_9; }
	inline void set_UnlockCost_B_9(String_t* value)
	{
		___UnlockCost_B_9 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockCost_B_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATTLESTRATEGY_SHEET_T1541607319_H
#ifndef FORMULA_T1323670472_H
#define FORMULA_T1323670472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Formula
struct  Formula_t1323670472  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMULA_T1323670472_H
#ifndef VALUETYPE_T1706913817_H
#define VALUETYPE_T1706913817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1706913817  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1706913817_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1706913817_marshaled_com
{
};
#endif // VALUETYPE_T1706913817_H
#ifndef DNAUP_SHEET_T3499065251_H
#define DNAUP_SHEET_T3499065251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DNAUp_Sheet
struct  DNAUp_Sheet_t3499065251  : public RuntimeObject
{
public:
	// System.String DNAUp_Sheet::ID
	String_t* ___ID_0;
	// System.String DNAUp_Sheet::Type
	String_t* ___Type_1;
	// System.String DNAUp_Sheet::Name
	String_t* ___Name_2;
	// System.String DNAUp_Sheet::Value1
	String_t* ___Value1_3;
	// System.String DNAUp_Sheet::Value1_Add
	String_t* ___Value1_Add_4;
	// System.String DNAUp_Sheet::Value2
	String_t* ___Value2_5;
	// System.String DNAUp_Sheet::Value2_Add
	String_t* ___Value2_Add_6;
	// System.String DNAUp_Sheet::Value3
	String_t* ___Value3_7;
	// System.String DNAUp_Sheet::Value3_Add
	String_t* ___Value3_Add_8;
	// System.String DNAUp_Sheet::GoldCost
	String_t* ___GoldCost_9;
	// System.String DNAUp_Sheet::GoldParam_1
	String_t* ___GoldParam_1_10;
	// System.String DNAUp_Sheet::GoldParam_2
	String_t* ___GoldParam_2_11;
	// System.String DNAUp_Sheet::GemCost
	String_t* ___GemCost_12;
	// System.String DNAUp_Sheet::GemParam_1
	String_t* ___GemParam_1_13;
	// System.String DNAUp_Sheet::GemParam_2
	String_t* ___GemParam_2_14;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___ID_0)); }
	inline String_t* get_ID_0() const { return ___ID_0; }
	inline String_t** get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(String_t* value)
	{
		___ID_0 = value;
		Il2CppCodeGenWriteBarrier((&___ID_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Value1_3() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___Value1_3)); }
	inline String_t* get_Value1_3() const { return ___Value1_3; }
	inline String_t** get_address_of_Value1_3() { return &___Value1_3; }
	inline void set_Value1_3(String_t* value)
	{
		___Value1_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value1_3), value);
	}

	inline static int32_t get_offset_of_Value1_Add_4() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___Value1_Add_4)); }
	inline String_t* get_Value1_Add_4() const { return ___Value1_Add_4; }
	inline String_t** get_address_of_Value1_Add_4() { return &___Value1_Add_4; }
	inline void set_Value1_Add_4(String_t* value)
	{
		___Value1_Add_4 = value;
		Il2CppCodeGenWriteBarrier((&___Value1_Add_4), value);
	}

	inline static int32_t get_offset_of_Value2_5() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___Value2_5)); }
	inline String_t* get_Value2_5() const { return ___Value2_5; }
	inline String_t** get_address_of_Value2_5() { return &___Value2_5; }
	inline void set_Value2_5(String_t* value)
	{
		___Value2_5 = value;
		Il2CppCodeGenWriteBarrier((&___Value2_5), value);
	}

	inline static int32_t get_offset_of_Value2_Add_6() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___Value2_Add_6)); }
	inline String_t* get_Value2_Add_6() const { return ___Value2_Add_6; }
	inline String_t** get_address_of_Value2_Add_6() { return &___Value2_Add_6; }
	inline void set_Value2_Add_6(String_t* value)
	{
		___Value2_Add_6 = value;
		Il2CppCodeGenWriteBarrier((&___Value2_Add_6), value);
	}

	inline static int32_t get_offset_of_Value3_7() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___Value3_7)); }
	inline String_t* get_Value3_7() const { return ___Value3_7; }
	inline String_t** get_address_of_Value3_7() { return &___Value3_7; }
	inline void set_Value3_7(String_t* value)
	{
		___Value3_7 = value;
		Il2CppCodeGenWriteBarrier((&___Value3_7), value);
	}

	inline static int32_t get_offset_of_Value3_Add_8() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___Value3_Add_8)); }
	inline String_t* get_Value3_Add_8() const { return ___Value3_Add_8; }
	inline String_t** get_address_of_Value3_Add_8() { return &___Value3_Add_8; }
	inline void set_Value3_Add_8(String_t* value)
	{
		___Value3_Add_8 = value;
		Il2CppCodeGenWriteBarrier((&___Value3_Add_8), value);
	}

	inline static int32_t get_offset_of_GoldCost_9() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___GoldCost_9)); }
	inline String_t* get_GoldCost_9() const { return ___GoldCost_9; }
	inline String_t** get_address_of_GoldCost_9() { return &___GoldCost_9; }
	inline void set_GoldCost_9(String_t* value)
	{
		___GoldCost_9 = value;
		Il2CppCodeGenWriteBarrier((&___GoldCost_9), value);
	}

	inline static int32_t get_offset_of_GoldParam_1_10() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___GoldParam_1_10)); }
	inline String_t* get_GoldParam_1_10() const { return ___GoldParam_1_10; }
	inline String_t** get_address_of_GoldParam_1_10() { return &___GoldParam_1_10; }
	inline void set_GoldParam_1_10(String_t* value)
	{
		___GoldParam_1_10 = value;
		Il2CppCodeGenWriteBarrier((&___GoldParam_1_10), value);
	}

	inline static int32_t get_offset_of_GoldParam_2_11() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___GoldParam_2_11)); }
	inline String_t* get_GoldParam_2_11() const { return ___GoldParam_2_11; }
	inline String_t** get_address_of_GoldParam_2_11() { return &___GoldParam_2_11; }
	inline void set_GoldParam_2_11(String_t* value)
	{
		___GoldParam_2_11 = value;
		Il2CppCodeGenWriteBarrier((&___GoldParam_2_11), value);
	}

	inline static int32_t get_offset_of_GemCost_12() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___GemCost_12)); }
	inline String_t* get_GemCost_12() const { return ___GemCost_12; }
	inline String_t** get_address_of_GemCost_12() { return &___GemCost_12; }
	inline void set_GemCost_12(String_t* value)
	{
		___GemCost_12 = value;
		Il2CppCodeGenWriteBarrier((&___GemCost_12), value);
	}

	inline static int32_t get_offset_of_GemParam_1_13() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___GemParam_1_13)); }
	inline String_t* get_GemParam_1_13() const { return ___GemParam_1_13; }
	inline String_t** get_address_of_GemParam_1_13() { return &___GemParam_1_13; }
	inline void set_GemParam_1_13(String_t* value)
	{
		___GemParam_1_13 = value;
		Il2CppCodeGenWriteBarrier((&___GemParam_1_13), value);
	}

	inline static int32_t get_offset_of_GemParam_2_14() { return static_cast<int32_t>(offsetof(DNAUp_Sheet_t3499065251, ___GemParam_2_14)); }
	inline String_t* get_GemParam_2_14() const { return ___GemParam_2_14; }
	inline String_t** get_address_of_GemParam_2_14() { return &___GemParam_2_14; }
	inline void set_GemParam_2_14(String_t* value)
	{
		___GemParam_2_14 = value;
		Il2CppCodeGenWriteBarrier((&___GemParam_2_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNAUP_SHEET_T3499065251_H
#ifndef U24ARRAYTYPEU3D8_T1539176847_H
#define U24ARRAYTYPEU3D8_T1539176847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=8
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D8_t1539176847 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D8_t1539176847__padding[8];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D8_T1539176847_H
#ifndef VECTOR3_T3199571211_H
#define VECTOR3_T3199571211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3199571211 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3199571211, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3199571211, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3199571211, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3199571211_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3199571211  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3199571211  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3199571211  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3199571211  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3199571211  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3199571211  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3199571211  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3199571211  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3199571211  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3199571211  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3199571211  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3199571211 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3199571211  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___oneVector_5)); }
	inline Vector3_t3199571211  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3199571211 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3199571211  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___upVector_6)); }
	inline Vector3_t3199571211  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3199571211 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3199571211  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___downVector_7)); }
	inline Vector3_t3199571211  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3199571211 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3199571211  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___leftVector_8)); }
	inline Vector3_t3199571211  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3199571211 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3199571211  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___rightVector_9)); }
	inline Vector3_t3199571211  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3199571211 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3199571211  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3199571211  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3199571211 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3199571211  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___backVector_11)); }
	inline Vector3_t3199571211  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3199571211 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3199571211  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3199571211  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3199571211 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3199571211  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3199571211_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3199571211  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3199571211 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3199571211  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3199571211_H
#ifndef ENUM_T2026808421_H
#define ENUM_T2026808421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2026808421  : public ValueType_t1706913817
{
public:

public:
};

struct Enum_t2026808421_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1705485309* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2026808421_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1705485309* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1705485309** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1705485309* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2026808421_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2026808421_marshaled_com
{
};
#endif // ENUM_T2026808421_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef U24ARRAYTYPEU3D32_T679519693_H
#define U24ARRAYTYPEU3D32_T679519693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t679519693 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t679519693__padding[32];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D32_T679519693_H
#ifndef U24ARRAYTYPEU3D580_T1496061749_H
#define U24ARRAYTYPEU3D580_T1496061749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=580
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D580_t1496061749 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D580_t1496061749__padding[580];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D580_T1496061749_H
#ifndef ENVIRONMENT_T495674422_H
#define ENVIRONMENT_T495674422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Environment
struct  Environment_t495674422 
{
public:
	// System.Int32 Environment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Environment_t495674422, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T495674422_H
#ifndef MODES_T489810674_H
#define MODES_T489810674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Modes
struct  Modes_t489810674 
{
public:
	// System.Int32 Modes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Modes_t489810674, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODES_T489810674_H
#ifndef OBJECT_T1594141469_H
#define OBJECT_T1594141469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1594141469  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1594141469, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1594141469_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1594141469_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1594141469_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1594141469_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1594141469_H
#ifndef CLIMATE_T2220563603_H
#define CLIMATE_T2220563603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Climate
struct  Climate_t2220563603 
{
public:
	// System.Int32 Climate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Climate_t2220563603, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIMATE_T2220563603_H
#ifndef SETYPE_T1409348089_H
#define SETYPE_T1409348089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SEType
struct  SEType_t1409348089 
{
public:
	// System.Int32 SEType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SEType_t1409348089, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETYPE_T1409348089_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T204795247_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T204795247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t204795247  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t204795247_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-68F00C41318114691E02CD7532ACF69A8DBE23C2
	U24ArrayTypeU3D32_t679519693  ___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0;
	// <PrivateImplementationDetails>/$ArrayType=580 <PrivateImplementationDetails>::$field-7FB9790B49277F6151D3EB5D555CCF105904DB43
	U24ArrayTypeU3D580_t1496061749  ___U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-D26A27B5531D6252D57917C90488F9C3F7AF8F98
	U24ArrayTypeU3D8_t1539176847  ___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2;

public:
	inline static int32_t get_offset_of_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t204795247_StaticFields, ___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0)); }
	inline U24ArrayTypeU3D32_t679519693  get_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0() const { return ___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0; }
	inline U24ArrayTypeU3D32_t679519693 * get_address_of_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0() { return &___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0; }
	inline void set_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0(U24ArrayTypeU3D32_t679519693  value)
	{
		___U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t204795247_StaticFields, ___U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1)); }
	inline U24ArrayTypeU3D580_t1496061749  get_U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1() const { return ___U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1; }
	inline U24ArrayTypeU3D580_t1496061749 * get_address_of_U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1() { return &___U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1; }
	inline void set_U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1(U24ArrayTypeU3D580_t1496061749  value)
	{
		___U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t204795247_StaticFields, ___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2)); }
	inline U24ArrayTypeU3D8_t1539176847  get_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2() const { return ___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2; }
	inline U24ArrayTypeU3D8_t1539176847 * get_address_of_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2() { return &___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2; }
	inline void set_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2(U24ArrayTypeU3D8_t1539176847  value)
	{
		___U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T204795247_H
#ifndef LANGUAGECHANGE_T989850814_H
#define LANGUAGECHANGE_T989850814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LanguageChange
struct  LanguageChange_t989850814 
{
public:
	// System.Int32 LanguageChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LanguageChange_t989850814, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LANGUAGECHANGE_T989850814_H
#ifndef LANGUAGEKIND_T2484234435_H
#define LANGUAGEKIND_T2484234435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LanguageKind
struct  LanguageKind_t2484234435 
{
public:
	// System.Int32 LanguageKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LanguageKind_t2484234435, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LANGUAGEKIND_T2484234435_H
#ifndef DNATYPE_T4248534190_H
#define DNATYPE_T4248534190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DNAType
struct  DNAType_t4248534190 
{
public:
	// System.Int32 DNAType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DNAType_t4248534190, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNATYPE_T4248534190_H
#ifndef BATTLESTATE_T3782973989_H
#define BATTLESTATE_T3782973989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BattleState
struct  BattleState_t3782973989 
{
public:
	// System.Int32 BattleState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BattleState_t3782973989, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATTLESTATE_T3782973989_H
#ifndef SCRIPTABLEOBJECT_T959617098_H
#define SCRIPTABLEOBJECT_T959617098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t959617098  : public Object_t1594141469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t959617098_marshaled_pinvoke : public Object_t1594141469_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t959617098_marshaled_com : public Object_t1594141469_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T959617098_H
#ifndef COMPONENT_T1383517625_H
#define COMPONENT_T1383517625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1383517625  : public Object_t1594141469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1383517625_H
#ifndef VIRUS_T2139413478_H
#define VIRUS_T2139413478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Virus
struct  Virus_t2139413478  : public RuntimeObject
{
public:
	// System.Int32 Virus::VirusID
	int32_t ___VirusID_0;
	// System.Int32 Virus::InfectSpeed
	int32_t ___InfectSpeed_1;
	// System.Int32 Virus::InfectHuman_1
	int32_t ___InfectHuman_1_2;
	// System.Int32 Virus::InfectHuman_2
	int32_t ___InfectHuman_2_3;
	// System.Int32 Virus::InfectHuman_3
	int32_t ___InfectHuman_3_4;
	// System.Int32 Virus::InfectHuman_4
	int32_t ___InfectHuman_4_5;
	// System.Int32 Virus::InfectHuman_5
	int32_t ___InfectHuman_5_6;
	// System.Int32 Virus::InfectBlock_Climate_1
	int32_t ___InfectBlock_Climate_1_7;
	// System.Int32 Virus::InfectBlock_Climate_2
	int32_t ___InfectBlock_Climate_2_8;
	// System.Int32 Virus::InfectBlock_Climate_3
	int32_t ___InfectBlock_Climate_3_9;
	// System.Int32 Virus::InfectBlock_Envi_1
	int32_t ___InfectBlock_Envi_1_10;
	// System.Int32 Virus::InfectBlock_Envi_2
	int32_t ___InfectBlock_Envi_2_11;
	// System.Int32 Virus::InfectBlock_Envi_3
	int32_t ___InfectBlock_Envi_3_12;
	// System.Int32 Virus::CommunicateRate
	int32_t ___CommunicateRate_13;
	// System.Int32 Virus::CommunicateHuman_1
	int32_t ___CommunicateHuman_1_14;
	// System.Int32 Virus::CommunicateHuman_2
	int32_t ___CommunicateHuman_2_15;
	// System.Int32 Virus::CommunicateHuman_3
	int32_t ___CommunicateHuman_3_16;
	// System.Int32 Virus::CommunicateHuman_4
	int32_t ___CommunicateHuman_4_17;
	// System.Int32 Virus::CommunicateHuman_5
	int32_t ___CommunicateHuman_5_18;
	// System.Int32 Virus::CommunicateBlock_Climate_1
	int32_t ___CommunicateBlock_Climate_1_19;
	// System.Int32 Virus::CommunicateBlock_Climate_2
	int32_t ___CommunicateBlock_Climate_2_20;
	// System.Int32 Virus::CommunicateBlock_Climate_3
	int32_t ___CommunicateBlock_Climate_3_21;
	// System.Int32 Virus::CommunicateBlock_Envi_1
	int32_t ___CommunicateBlock_Envi_1_22;
	// System.Int32 Virus::CommunicateBlock_Envi_2
	int32_t ___CommunicateBlock_Envi_2_23;
	// System.Int32 Virus::CommunicateBlock_Envi_3
	int32_t ___CommunicateBlock_Envi_3_24;
	// System.Int32 Virus::InitialSP
	int32_t ___InitialSP_25;
	// System.String Virus::Name
	String_t* ___Name_26;
	// System.String Virus::Res
	String_t* ___Res_27;
	// System.String Virus::StrategyID
	String_t* ___StrategyID_28;
	// System.Int32 Virus::Medi_Start
	int32_t ___Medi_Start_29;
	// System.Int32 Virus::Medi_Work
	int32_t ___Medi_Work_30;
	// System.Int32 Virus::Medi_Spd
	int32_t ___Medi_Spd_31;
	// System.Int32 Virus::CommunicationThreshold
	int32_t ___CommunicationThreshold_32;
	// System.Collections.Generic.List`1<System.Int32> Virus::InfectHumans
	List_1_t1822187835 * ___InfectHumans_33;
	// System.Collections.Generic.List`1<System.Int32> Virus::InfectClims
	List_1_t1822187835 * ___InfectClims_34;
	// System.Collections.Generic.List`1<System.Int32> Virus::InfectEnvis
	List_1_t1822187835 * ___InfectEnvis_35;
	// System.Collections.Generic.List`1<System.Int32> Virus::CommunicateHumans
	List_1_t1822187835 * ___CommunicateHumans_36;
	// System.Collections.Generic.List`1<System.Int32> Virus::CommunicateClimates
	List_1_t1822187835 * ___CommunicateClimates_37;
	// System.Collections.Generic.List`1<System.Int32> Virus::CommunicateEnvis
	List_1_t1822187835 * ___CommunicateEnvis_38;
	// Environment Virus::Envi
	int32_t ___Envi_39;
	// Climate Virus::Clim
	int32_t ___Clim_40;

public:
	inline static int32_t get_offset_of_VirusID_0() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___VirusID_0)); }
	inline int32_t get_VirusID_0() const { return ___VirusID_0; }
	inline int32_t* get_address_of_VirusID_0() { return &___VirusID_0; }
	inline void set_VirusID_0(int32_t value)
	{
		___VirusID_0 = value;
	}

	inline static int32_t get_offset_of_InfectSpeed_1() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectSpeed_1)); }
	inline int32_t get_InfectSpeed_1() const { return ___InfectSpeed_1; }
	inline int32_t* get_address_of_InfectSpeed_1() { return &___InfectSpeed_1; }
	inline void set_InfectSpeed_1(int32_t value)
	{
		___InfectSpeed_1 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_1_2() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectHuman_1_2)); }
	inline int32_t get_InfectHuman_1_2() const { return ___InfectHuman_1_2; }
	inline int32_t* get_address_of_InfectHuman_1_2() { return &___InfectHuman_1_2; }
	inline void set_InfectHuman_1_2(int32_t value)
	{
		___InfectHuman_1_2 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_2_3() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectHuman_2_3)); }
	inline int32_t get_InfectHuman_2_3() const { return ___InfectHuman_2_3; }
	inline int32_t* get_address_of_InfectHuman_2_3() { return &___InfectHuman_2_3; }
	inline void set_InfectHuman_2_3(int32_t value)
	{
		___InfectHuman_2_3 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_3_4() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectHuman_3_4)); }
	inline int32_t get_InfectHuman_3_4() const { return ___InfectHuman_3_4; }
	inline int32_t* get_address_of_InfectHuman_3_4() { return &___InfectHuman_3_4; }
	inline void set_InfectHuman_3_4(int32_t value)
	{
		___InfectHuman_3_4 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_4_5() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectHuman_4_5)); }
	inline int32_t get_InfectHuman_4_5() const { return ___InfectHuman_4_5; }
	inline int32_t* get_address_of_InfectHuman_4_5() { return &___InfectHuman_4_5; }
	inline void set_InfectHuman_4_5(int32_t value)
	{
		___InfectHuman_4_5 = value;
	}

	inline static int32_t get_offset_of_InfectHuman_5_6() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectHuman_5_6)); }
	inline int32_t get_InfectHuman_5_6() const { return ___InfectHuman_5_6; }
	inline int32_t* get_address_of_InfectHuman_5_6() { return &___InfectHuman_5_6; }
	inline void set_InfectHuman_5_6(int32_t value)
	{
		___InfectHuman_5_6 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_1_7() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectBlock_Climate_1_7)); }
	inline int32_t get_InfectBlock_Climate_1_7() const { return ___InfectBlock_Climate_1_7; }
	inline int32_t* get_address_of_InfectBlock_Climate_1_7() { return &___InfectBlock_Climate_1_7; }
	inline void set_InfectBlock_Climate_1_7(int32_t value)
	{
		___InfectBlock_Climate_1_7 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_2_8() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectBlock_Climate_2_8)); }
	inline int32_t get_InfectBlock_Climate_2_8() const { return ___InfectBlock_Climate_2_8; }
	inline int32_t* get_address_of_InfectBlock_Climate_2_8() { return &___InfectBlock_Climate_2_8; }
	inline void set_InfectBlock_Climate_2_8(int32_t value)
	{
		___InfectBlock_Climate_2_8 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Climate_3_9() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectBlock_Climate_3_9)); }
	inline int32_t get_InfectBlock_Climate_3_9() const { return ___InfectBlock_Climate_3_9; }
	inline int32_t* get_address_of_InfectBlock_Climate_3_9() { return &___InfectBlock_Climate_3_9; }
	inline void set_InfectBlock_Climate_3_9(int32_t value)
	{
		___InfectBlock_Climate_3_9 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_1_10() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectBlock_Envi_1_10)); }
	inline int32_t get_InfectBlock_Envi_1_10() const { return ___InfectBlock_Envi_1_10; }
	inline int32_t* get_address_of_InfectBlock_Envi_1_10() { return &___InfectBlock_Envi_1_10; }
	inline void set_InfectBlock_Envi_1_10(int32_t value)
	{
		___InfectBlock_Envi_1_10 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_2_11() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectBlock_Envi_2_11)); }
	inline int32_t get_InfectBlock_Envi_2_11() const { return ___InfectBlock_Envi_2_11; }
	inline int32_t* get_address_of_InfectBlock_Envi_2_11() { return &___InfectBlock_Envi_2_11; }
	inline void set_InfectBlock_Envi_2_11(int32_t value)
	{
		___InfectBlock_Envi_2_11 = value;
	}

	inline static int32_t get_offset_of_InfectBlock_Envi_3_12() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectBlock_Envi_3_12)); }
	inline int32_t get_InfectBlock_Envi_3_12() const { return ___InfectBlock_Envi_3_12; }
	inline int32_t* get_address_of_InfectBlock_Envi_3_12() { return &___InfectBlock_Envi_3_12; }
	inline void set_InfectBlock_Envi_3_12(int32_t value)
	{
		___InfectBlock_Envi_3_12 = value;
	}

	inline static int32_t get_offset_of_CommunicateRate_13() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateRate_13)); }
	inline int32_t get_CommunicateRate_13() const { return ___CommunicateRate_13; }
	inline int32_t* get_address_of_CommunicateRate_13() { return &___CommunicateRate_13; }
	inline void set_CommunicateRate_13(int32_t value)
	{
		___CommunicateRate_13 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_1_14() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateHuman_1_14)); }
	inline int32_t get_CommunicateHuman_1_14() const { return ___CommunicateHuman_1_14; }
	inline int32_t* get_address_of_CommunicateHuman_1_14() { return &___CommunicateHuman_1_14; }
	inline void set_CommunicateHuman_1_14(int32_t value)
	{
		___CommunicateHuman_1_14 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_2_15() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateHuman_2_15)); }
	inline int32_t get_CommunicateHuman_2_15() const { return ___CommunicateHuman_2_15; }
	inline int32_t* get_address_of_CommunicateHuman_2_15() { return &___CommunicateHuman_2_15; }
	inline void set_CommunicateHuman_2_15(int32_t value)
	{
		___CommunicateHuman_2_15 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_3_16() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateHuman_3_16)); }
	inline int32_t get_CommunicateHuman_3_16() const { return ___CommunicateHuman_3_16; }
	inline int32_t* get_address_of_CommunicateHuman_3_16() { return &___CommunicateHuman_3_16; }
	inline void set_CommunicateHuman_3_16(int32_t value)
	{
		___CommunicateHuman_3_16 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_4_17() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateHuman_4_17)); }
	inline int32_t get_CommunicateHuman_4_17() const { return ___CommunicateHuman_4_17; }
	inline int32_t* get_address_of_CommunicateHuman_4_17() { return &___CommunicateHuman_4_17; }
	inline void set_CommunicateHuman_4_17(int32_t value)
	{
		___CommunicateHuman_4_17 = value;
	}

	inline static int32_t get_offset_of_CommunicateHuman_5_18() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateHuman_5_18)); }
	inline int32_t get_CommunicateHuman_5_18() const { return ___CommunicateHuman_5_18; }
	inline int32_t* get_address_of_CommunicateHuman_5_18() { return &___CommunicateHuman_5_18; }
	inline void set_CommunicateHuman_5_18(int32_t value)
	{
		___CommunicateHuman_5_18 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_1_19() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateBlock_Climate_1_19)); }
	inline int32_t get_CommunicateBlock_Climate_1_19() const { return ___CommunicateBlock_Climate_1_19; }
	inline int32_t* get_address_of_CommunicateBlock_Climate_1_19() { return &___CommunicateBlock_Climate_1_19; }
	inline void set_CommunicateBlock_Climate_1_19(int32_t value)
	{
		___CommunicateBlock_Climate_1_19 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_2_20() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateBlock_Climate_2_20)); }
	inline int32_t get_CommunicateBlock_Climate_2_20() const { return ___CommunicateBlock_Climate_2_20; }
	inline int32_t* get_address_of_CommunicateBlock_Climate_2_20() { return &___CommunicateBlock_Climate_2_20; }
	inline void set_CommunicateBlock_Climate_2_20(int32_t value)
	{
		___CommunicateBlock_Climate_2_20 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Climate_3_21() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateBlock_Climate_3_21)); }
	inline int32_t get_CommunicateBlock_Climate_3_21() const { return ___CommunicateBlock_Climate_3_21; }
	inline int32_t* get_address_of_CommunicateBlock_Climate_3_21() { return &___CommunicateBlock_Climate_3_21; }
	inline void set_CommunicateBlock_Climate_3_21(int32_t value)
	{
		___CommunicateBlock_Climate_3_21 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_1_22() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateBlock_Envi_1_22)); }
	inline int32_t get_CommunicateBlock_Envi_1_22() const { return ___CommunicateBlock_Envi_1_22; }
	inline int32_t* get_address_of_CommunicateBlock_Envi_1_22() { return &___CommunicateBlock_Envi_1_22; }
	inline void set_CommunicateBlock_Envi_1_22(int32_t value)
	{
		___CommunicateBlock_Envi_1_22 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_2_23() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateBlock_Envi_2_23)); }
	inline int32_t get_CommunicateBlock_Envi_2_23() const { return ___CommunicateBlock_Envi_2_23; }
	inline int32_t* get_address_of_CommunicateBlock_Envi_2_23() { return &___CommunicateBlock_Envi_2_23; }
	inline void set_CommunicateBlock_Envi_2_23(int32_t value)
	{
		___CommunicateBlock_Envi_2_23 = value;
	}

	inline static int32_t get_offset_of_CommunicateBlock_Envi_3_24() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateBlock_Envi_3_24)); }
	inline int32_t get_CommunicateBlock_Envi_3_24() const { return ___CommunicateBlock_Envi_3_24; }
	inline int32_t* get_address_of_CommunicateBlock_Envi_3_24() { return &___CommunicateBlock_Envi_3_24; }
	inline void set_CommunicateBlock_Envi_3_24(int32_t value)
	{
		___CommunicateBlock_Envi_3_24 = value;
	}

	inline static int32_t get_offset_of_InitialSP_25() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InitialSP_25)); }
	inline int32_t get_InitialSP_25() const { return ___InitialSP_25; }
	inline int32_t* get_address_of_InitialSP_25() { return &___InitialSP_25; }
	inline void set_InitialSP_25(int32_t value)
	{
		___InitialSP_25 = value;
	}

	inline static int32_t get_offset_of_Name_26() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___Name_26)); }
	inline String_t* get_Name_26() const { return ___Name_26; }
	inline String_t** get_address_of_Name_26() { return &___Name_26; }
	inline void set_Name_26(String_t* value)
	{
		___Name_26 = value;
		Il2CppCodeGenWriteBarrier((&___Name_26), value);
	}

	inline static int32_t get_offset_of_Res_27() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___Res_27)); }
	inline String_t* get_Res_27() const { return ___Res_27; }
	inline String_t** get_address_of_Res_27() { return &___Res_27; }
	inline void set_Res_27(String_t* value)
	{
		___Res_27 = value;
		Il2CppCodeGenWriteBarrier((&___Res_27), value);
	}

	inline static int32_t get_offset_of_StrategyID_28() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___StrategyID_28)); }
	inline String_t* get_StrategyID_28() const { return ___StrategyID_28; }
	inline String_t** get_address_of_StrategyID_28() { return &___StrategyID_28; }
	inline void set_StrategyID_28(String_t* value)
	{
		___StrategyID_28 = value;
		Il2CppCodeGenWriteBarrier((&___StrategyID_28), value);
	}

	inline static int32_t get_offset_of_Medi_Start_29() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___Medi_Start_29)); }
	inline int32_t get_Medi_Start_29() const { return ___Medi_Start_29; }
	inline int32_t* get_address_of_Medi_Start_29() { return &___Medi_Start_29; }
	inline void set_Medi_Start_29(int32_t value)
	{
		___Medi_Start_29 = value;
	}

	inline static int32_t get_offset_of_Medi_Work_30() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___Medi_Work_30)); }
	inline int32_t get_Medi_Work_30() const { return ___Medi_Work_30; }
	inline int32_t* get_address_of_Medi_Work_30() { return &___Medi_Work_30; }
	inline void set_Medi_Work_30(int32_t value)
	{
		___Medi_Work_30 = value;
	}

	inline static int32_t get_offset_of_Medi_Spd_31() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___Medi_Spd_31)); }
	inline int32_t get_Medi_Spd_31() const { return ___Medi_Spd_31; }
	inline int32_t* get_address_of_Medi_Spd_31() { return &___Medi_Spd_31; }
	inline void set_Medi_Spd_31(int32_t value)
	{
		___Medi_Spd_31 = value;
	}

	inline static int32_t get_offset_of_CommunicationThreshold_32() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicationThreshold_32)); }
	inline int32_t get_CommunicationThreshold_32() const { return ___CommunicationThreshold_32; }
	inline int32_t* get_address_of_CommunicationThreshold_32() { return &___CommunicationThreshold_32; }
	inline void set_CommunicationThreshold_32(int32_t value)
	{
		___CommunicationThreshold_32 = value;
	}

	inline static int32_t get_offset_of_InfectHumans_33() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectHumans_33)); }
	inline List_1_t1822187835 * get_InfectHumans_33() const { return ___InfectHumans_33; }
	inline List_1_t1822187835 ** get_address_of_InfectHumans_33() { return &___InfectHumans_33; }
	inline void set_InfectHumans_33(List_1_t1822187835 * value)
	{
		___InfectHumans_33 = value;
		Il2CppCodeGenWriteBarrier((&___InfectHumans_33), value);
	}

	inline static int32_t get_offset_of_InfectClims_34() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectClims_34)); }
	inline List_1_t1822187835 * get_InfectClims_34() const { return ___InfectClims_34; }
	inline List_1_t1822187835 ** get_address_of_InfectClims_34() { return &___InfectClims_34; }
	inline void set_InfectClims_34(List_1_t1822187835 * value)
	{
		___InfectClims_34 = value;
		Il2CppCodeGenWriteBarrier((&___InfectClims_34), value);
	}

	inline static int32_t get_offset_of_InfectEnvis_35() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___InfectEnvis_35)); }
	inline List_1_t1822187835 * get_InfectEnvis_35() const { return ___InfectEnvis_35; }
	inline List_1_t1822187835 ** get_address_of_InfectEnvis_35() { return &___InfectEnvis_35; }
	inline void set_InfectEnvis_35(List_1_t1822187835 * value)
	{
		___InfectEnvis_35 = value;
		Il2CppCodeGenWriteBarrier((&___InfectEnvis_35), value);
	}

	inline static int32_t get_offset_of_CommunicateHumans_36() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateHumans_36)); }
	inline List_1_t1822187835 * get_CommunicateHumans_36() const { return ___CommunicateHumans_36; }
	inline List_1_t1822187835 ** get_address_of_CommunicateHumans_36() { return &___CommunicateHumans_36; }
	inline void set_CommunicateHumans_36(List_1_t1822187835 * value)
	{
		___CommunicateHumans_36 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateHumans_36), value);
	}

	inline static int32_t get_offset_of_CommunicateClimates_37() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateClimates_37)); }
	inline List_1_t1822187835 * get_CommunicateClimates_37() const { return ___CommunicateClimates_37; }
	inline List_1_t1822187835 ** get_address_of_CommunicateClimates_37() { return &___CommunicateClimates_37; }
	inline void set_CommunicateClimates_37(List_1_t1822187835 * value)
	{
		___CommunicateClimates_37 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateClimates_37), value);
	}

	inline static int32_t get_offset_of_CommunicateEnvis_38() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___CommunicateEnvis_38)); }
	inline List_1_t1822187835 * get_CommunicateEnvis_38() const { return ___CommunicateEnvis_38; }
	inline List_1_t1822187835 ** get_address_of_CommunicateEnvis_38() { return &___CommunicateEnvis_38; }
	inline void set_CommunicateEnvis_38(List_1_t1822187835 * value)
	{
		___CommunicateEnvis_38 = value;
		Il2CppCodeGenWriteBarrier((&___CommunicateEnvis_38), value);
	}

	inline static int32_t get_offset_of_Envi_39() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___Envi_39)); }
	inline int32_t get_Envi_39() const { return ___Envi_39; }
	inline int32_t* get_address_of_Envi_39() { return &___Envi_39; }
	inline void set_Envi_39(int32_t value)
	{
		___Envi_39 = value;
	}

	inline static int32_t get_offset_of_Clim_40() { return static_cast<int32_t>(offsetof(Virus_t2139413478, ___Clim_40)); }
	inline int32_t get_Clim_40() const { return ___Clim_40; }
	inline int32_t* get_address_of_Clim_40() { return &___Clim_40; }
	inline void set_Clim_40(int32_t value)
	{
		___Clim_40 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRUS_T2139413478_H
#ifndef BATTLEEVENT_T558144860_H
#define BATTLEEVENT_T558144860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BattleEvent
struct  BattleEvent_t558144860  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<BattleEvent_Sheet> BattleEvent::Package
	List_1_t4195956191 * ___Package_2;

public:
	inline static int32_t get_offset_of_Package_2() { return static_cast<int32_t>(offsetof(BattleEvent_t558144860, ___Package_2)); }
	inline List_1_t4195956191 * get_Package_2() const { return ___Package_2; }
	inline List_1_t4195956191 ** get_address_of_Package_2() { return &___Package_2; }
	inline void set_Package_2(List_1_t4195956191 * value)
	{
		___Package_2 = value;
		Il2CppCodeGenWriteBarrier((&___Package_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATTLEEVENT_T558144860_H
#ifndef UNLOCK_T3610850725_H
#define UNLOCK_T3610850725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unlock
struct  Unlock_t3610850725  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<UnlockMission_Sheet> Unlock::UnlockMission
	List_1_t3831305819 * ___UnlockMission_2;

public:
	inline static int32_t get_offset_of_UnlockMission_2() { return static_cast<int32_t>(offsetof(Unlock_t3610850725, ___UnlockMission_2)); }
	inline List_1_t3831305819 * get_UnlockMission_2() const { return ___UnlockMission_2; }
	inline List_1_t3831305819 ** get_address_of_UnlockMission_2() { return &___UnlockMission_2; }
	inline void set_UnlockMission_2(List_1_t3831305819 * value)
	{
		___UnlockMission_2 = value;
		Il2CppCodeGenWriteBarrier((&___UnlockMission_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNLOCK_T3610850725_H
#ifndef SPLIST_T1854852195_H
#define SPLIST_T1854852195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SPList
struct  SPList_t1854852195  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<Infection_Sheet> SPList::InfectionSheet
	List_1_t2318151775 * ___InfectionSheet_2;
	// System.Collections.Generic.List`1<Damage_Sheet> SPList::DamageSheet
	List_1_t4159906741 * ___DamageSheet_3;

public:
	inline static int32_t get_offset_of_InfectionSheet_2() { return static_cast<int32_t>(offsetof(SPList_t1854852195, ___InfectionSheet_2)); }
	inline List_1_t2318151775 * get_InfectionSheet_2() const { return ___InfectionSheet_2; }
	inline List_1_t2318151775 ** get_address_of_InfectionSheet_2() { return &___InfectionSheet_2; }
	inline void set_InfectionSheet_2(List_1_t2318151775 * value)
	{
		___InfectionSheet_2 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionSheet_2), value);
	}

	inline static int32_t get_offset_of_DamageSheet_3() { return static_cast<int32_t>(offsetof(SPList_t1854852195, ___DamageSheet_3)); }
	inline List_1_t4159906741 * get_DamageSheet_3() const { return ___DamageSheet_3; }
	inline List_1_t4159906741 ** get_address_of_DamageSheet_3() { return &___DamageSheet_3; }
	inline void set_DamageSheet_3(List_1_t4159906741 * value)
	{
		___DamageSheet_3 = value;
		Il2CppCodeGenWriteBarrier((&___DamageSheet_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPLIST_T1854852195_H
#ifndef BEHAVIOUR_T3918964278_H
#define BEHAVIOUR_T3918964278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3918964278  : public Component_t1383517625
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3918964278_H
#ifndef MODEL_T2784438281_H
#define MODEL_T2784438281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Model
struct  Model_t2784438281  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<Virus_Sheet> Model::Virus_Sheet
	List_1_t321889037 * ___Virus_Sheet_2;
	// System.Collections.Generic.List`1<Human_Sheet> Model::Human_Sheet
	List_1_t3846689979 * ___Human_Sheet_3;
	// System.Collections.Generic.List`1<Zombie_Sheet> Model::Zombie_Sheet
	List_1_t2496957332 * ___Zombie_Sheet_4;

public:
	inline static int32_t get_offset_of_Virus_Sheet_2() { return static_cast<int32_t>(offsetof(Model_t2784438281, ___Virus_Sheet_2)); }
	inline List_1_t321889037 * get_Virus_Sheet_2() const { return ___Virus_Sheet_2; }
	inline List_1_t321889037 ** get_address_of_Virus_Sheet_2() { return &___Virus_Sheet_2; }
	inline void set_Virus_Sheet_2(List_1_t321889037 * value)
	{
		___Virus_Sheet_2 = value;
		Il2CppCodeGenWriteBarrier((&___Virus_Sheet_2), value);
	}

	inline static int32_t get_offset_of_Human_Sheet_3() { return static_cast<int32_t>(offsetof(Model_t2784438281, ___Human_Sheet_3)); }
	inline List_1_t3846689979 * get_Human_Sheet_3() const { return ___Human_Sheet_3; }
	inline List_1_t3846689979 ** get_address_of_Human_Sheet_3() { return &___Human_Sheet_3; }
	inline void set_Human_Sheet_3(List_1_t3846689979 * value)
	{
		___Human_Sheet_3 = value;
		Il2CppCodeGenWriteBarrier((&___Human_Sheet_3), value);
	}

	inline static int32_t get_offset_of_Zombie_Sheet_4() { return static_cast<int32_t>(offsetof(Model_t2784438281, ___Zombie_Sheet_4)); }
	inline List_1_t2496957332 * get_Zombie_Sheet_4() const { return ___Zombie_Sheet_4; }
	inline List_1_t2496957332 ** get_address_of_Zombie_Sheet_4() { return &___Zombie_Sheet_4; }
	inline void set_Zombie_Sheet_4(List_1_t2496957332 * value)
	{
		___Zombie_Sheet_4 = value;
		Il2CppCodeGenWriteBarrier((&___Zombie_Sheet_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODEL_T2784438281_H
#ifndef BATTLESTRATEGY_T796622191_H
#define BATTLESTRATEGY_T796622191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BattleStrategy
struct  BattleStrategy_t796622191  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<BattleStrategy_Sheet> BattleStrategy::Strategy
	List_1_t839680537 * ___Strategy_2;

public:
	inline static int32_t get_offset_of_Strategy_2() { return static_cast<int32_t>(offsetof(BattleStrategy_t796622191, ___Strategy_2)); }
	inline List_1_t839680537 * get_Strategy_2() const { return ___Strategy_2; }
	inline List_1_t839680537 ** get_address_of_Strategy_2() { return &___Strategy_2; }
	inline void set_Strategy_2(List_1_t839680537 * value)
	{
		___Strategy_2 = value;
		Il2CppCodeGenWriteBarrier((&___Strategy_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATTLESTRATEGY_T796622191_H
#ifndef INGAMEEVENT_T1833029143_H
#define INGAMEEVENT_T1833029143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InGameEvent
struct  InGameEvent_t1833029143  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<InGameEvent_Sheet> InGameEvent::InGameEvents
	List_1_t4098374998 * ___InGameEvents_2;

public:
	inline static int32_t get_offset_of_InGameEvents_2() { return static_cast<int32_t>(offsetof(InGameEvent_t1833029143, ___InGameEvents_2)); }
	inline List_1_t4098374998 * get_InGameEvents_2() const { return ___InGameEvents_2; }
	inline List_1_t4098374998 ** get_address_of_InGameEvents_2() { return &___InGameEvents_2; }
	inline void set_InGameEvents_2(List_1_t4098374998 * value)
	{
		___InGameEvents_2 = value;
		Il2CppCodeGenWriteBarrier((&___InGameEvents_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INGAMEEVENT_T1833029143_H
#ifndef LOOT_T878120273_H
#define LOOT_T878120273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loot
struct  Loot_t878120273  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<Loot_Sheet> Loot::Package
	List_1_t3784497398 * ___Package_2;

public:
	inline static int32_t get_offset_of_Package_2() { return static_cast<int32_t>(offsetof(Loot_t878120273, ___Package_2)); }
	inline List_1_t3784497398 * get_Package_2() const { return ___Package_2; }
	inline List_1_t3784497398 ** get_address_of_Package_2() { return &___Package_2; }
	inline void set_Package_2(List_1_t3784497398 * value)
	{
		___Package_2 = value;
		Il2CppCodeGenWriteBarrier((&___Package_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOT_T878120273_H
#ifndef IAP_T1054572740_H
#define IAP_T1054572740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IAP
struct  IAP_t1054572740  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<IAP_Sheet> IAP::Item
	List_1_t968420256 * ___Item_2;

public:
	inline static int32_t get_offset_of_Item_2() { return static_cast<int32_t>(offsetof(IAP_t1054572740, ___Item_2)); }
	inline List_1_t968420256 * get_Item_2() const { return ___Item_2; }
	inline List_1_t968420256 ** get_address_of_Item_2() { return &___Item_2; }
	inline void set_Item_2(List_1_t968420256 * value)
	{
		___Item_2 = value;
		Il2CppCodeGenWriteBarrier((&___Item_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IAP_T1054572740_H
#ifndef LANGUAGE_T1974027406_H
#define LANGUAGE_T1974027406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Language
struct  Language_t1974027406  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<Language_Sheet> Language::Localization
	List_1_t724391834 * ___Localization_2;

public:
	inline static int32_t get_offset_of_Localization_2() { return static_cast<int32_t>(offsetof(Language_t1974027406, ___Localization_2)); }
	inline List_1_t724391834 * get_Localization_2() const { return ___Localization_2; }
	inline List_1_t724391834 ** get_address_of_Localization_2() { return &___Localization_2; }
	inline void set_Localization_2(List_1_t724391834 * value)
	{
		___Localization_2 = value;
		Il2CppCodeGenWriteBarrier((&___Localization_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LANGUAGE_T1974027406_H
#ifndef DNAUP_T1024682672_H
#define DNAUP_T1024682672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DNAUp
struct  DNAUp_t1024682672  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<DNAUp_Sheet> DNAUp::Virus
	List_1_t2797138469 * ___Virus_2;
	// System.Collections.Generic.List`1<DNAUp_Sheet> DNAUp::Human
	List_1_t2797138469 * ___Human_3;
	// System.Collections.Generic.List`1<DNAUp_Sheet> DNAUp::Zombie
	List_1_t2797138469 * ___Zombie_4;

public:
	inline static int32_t get_offset_of_Virus_2() { return static_cast<int32_t>(offsetof(DNAUp_t1024682672, ___Virus_2)); }
	inline List_1_t2797138469 * get_Virus_2() const { return ___Virus_2; }
	inline List_1_t2797138469 ** get_address_of_Virus_2() { return &___Virus_2; }
	inline void set_Virus_2(List_1_t2797138469 * value)
	{
		___Virus_2 = value;
		Il2CppCodeGenWriteBarrier((&___Virus_2), value);
	}

	inline static int32_t get_offset_of_Human_3() { return static_cast<int32_t>(offsetof(DNAUp_t1024682672, ___Human_3)); }
	inline List_1_t2797138469 * get_Human_3() const { return ___Human_3; }
	inline List_1_t2797138469 ** get_address_of_Human_3() { return &___Human_3; }
	inline void set_Human_3(List_1_t2797138469 * value)
	{
		___Human_3 = value;
		Il2CppCodeGenWriteBarrier((&___Human_3), value);
	}

	inline static int32_t get_offset_of_Zombie_4() { return static_cast<int32_t>(offsetof(DNAUp_t1024682672, ___Zombie_4)); }
	inline List_1_t2797138469 * get_Zombie_4() const { return ___Zombie_4; }
	inline List_1_t2797138469 ** get_address_of_Zombie_4() { return &___Zombie_4; }
	inline void set_Zombie_4(List_1_t2797138469 * value)
	{
		___Zombie_4 = value;
		Il2CppCodeGenWriteBarrier((&___Zombie_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNAUP_T1024682672_H
#ifndef SPECIALABILITY_T3679320842_H
#define SPECIALABILITY_T3679320842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpecialAbility
struct  SpecialAbility_t3679320842  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<SpecialAbility_Sheet> SpecialAbility::Ability
	List_1_t1017664130 * ___Ability_2;

public:
	inline static int32_t get_offset_of_Ability_2() { return static_cast<int32_t>(offsetof(SpecialAbility_t3679320842, ___Ability_2)); }
	inline List_1_t1017664130 * get_Ability_2() const { return ___Ability_2; }
	inline List_1_t1017664130 ** get_address_of_Ability_2() { return &___Ability_2; }
	inline void set_Ability_2(List_1_t1017664130 * value)
	{
		___Ability_2 = value;
		Il2CppCodeGenWriteBarrier((&___Ability_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPECIALABILITY_T3679320842_H
#ifndef MISSION_T2180714168_H
#define MISSION_T2180714168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mission
struct  Mission_t2180714168  : public ScriptableObject_t959617098
{
public:
	// System.Collections.Generic.List`1<Mission_Sheet> Mission::Parameter
	List_1_t1468252243 * ___Parameter_2;

public:
	inline static int32_t get_offset_of_Parameter_2() { return static_cast<int32_t>(offsetof(Mission_t2180714168, ___Parameter_2)); }
	inline List_1_t1468252243 * get_Parameter_2() const { return ___Parameter_2; }
	inline List_1_t1468252243 ** get_address_of_Parameter_2() { return &___Parameter_2; }
	inline void set_Parameter_2(List_1_t1468252243 * value)
	{
		___Parameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___Parameter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSION_T2180714168_H
#ifndef MONOBEHAVIOUR_T3253360915_H
#define MONOBEHAVIOUR_T3253360915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3253360915  : public Behaviour_t3918964278
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3253360915_H
#ifndef ZOMBIE_T4273658849_H
#define ZOMBIE_T4273658849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Zombie
struct  Zombie_t4273658849  : public MonoBehaviour_t3253360915
{
public:
	// System.Single Zombie::ATTACK_INTERVAL
	float ___ATTACK_INTERVAL_2;
	// System.Single Zombie::HEALTH_INTERVAL
	float ___HEALTH_INTERVAL_3;
	// System.Int32 Zombie::updateInterval
	int32_t ___updateInterval_11;
	// System.Single Zombie::ZombieID
	float ___ZombieID_12;
	// System.Int32 Zombie::MaxHP
	int32_t ___MaxHP_13;
	// System.Int32 Zombie::Atk
	int32_t ___Atk_14;
	// System.Int32 Zombie::Heal
	int32_t ___Heal_15;
	// System.Int32 Zombie::Def
	int32_t ___Def_16;
	// System.Int32 Zombie::Infect
	int32_t ___Infect_17;
	// System.Int32 Zombie::Speed
	int32_t ___Speed_18;
	// System.Int32 Zombie::HPDecay
	int32_t ___HPDecay_19;
	// System.Int32 Zombie::DrainLife
	int32_t ___DrainLife_20;
	// System.String Zombie::AbilityID
	String_t* ___AbilityID_21;
	// System.String Zombie::Name
	String_t* ___Name_22;
	// System.String Zombie::Res
	String_t* ___Res_23;
	// System.String Zombie::SkillID
	String_t* ___SkillID_24;
	// System.Int32 Zombie::param
	int32_t ___param_25;
	// System.Int32 Zombie::HP
	int32_t ___HP_26;
	// System.Int32 Zombie::ClimateBoost
	int32_t ___ClimateBoost_27;
	// System.Int32 Zombie::EnviBoost
	int32_t ___EnviBoost_28;
	// Environment Zombie::Envi
	int32_t ___Envi_29;
	// Climate Zombie::Clim
	int32_t ___Clim_30;
	// UnityEngine.GameObject Zombie::HumanModel
	GameObject_t2056972088 * ___HumanModel_31;
	// Zombie Zombie::self
	Zombie_t4273658849 * ___self_32;
	// UISprite Zombie::Image
	UISprite_t3128965256 * ___Image_33;
	// UILabel Zombie::LabelName
	UILabel_t2887975127 * ___LabelName_34;
	// UnityEngine.GameObject Zombie::HPBar
	GameObject_t2056972088 * ___HPBar_35;
	// UISprite Zombie::ClimIcon
	UISprite_t3128965256 * ___ClimIcon_36;
	// UISprite Zombie::EnviIcon
	UISprite_t3128965256 * ___EnviIcon_37;
	// UISprite Zombie::SkillIcon
	UISprite_t3128965256 * ___SkillIcon_38;
	// Battle_C Zombie::Battle
	Battle_C_t1550641137 * ___Battle_39;
	// UnityEngine.GameObject Zombie::skillSEGO
	GameObject_t2056972088 * ___skillSEGO_40;
	// UnityEngine.GameObject Zombie::dieSEGO
	GameObject_t2056972088 * ___dieSEGO_41;
	// System.Single Zombie::healDeltaTime
	float ___healDeltaTime_42;
	// System.Single Zombie::skillDeltaTime
	float ___skillDeltaTime_43;

public:
	inline static int32_t get_offset_of_ATTACK_INTERVAL_2() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___ATTACK_INTERVAL_2)); }
	inline float get_ATTACK_INTERVAL_2() const { return ___ATTACK_INTERVAL_2; }
	inline float* get_address_of_ATTACK_INTERVAL_2() { return &___ATTACK_INTERVAL_2; }
	inline void set_ATTACK_INTERVAL_2(float value)
	{
		___ATTACK_INTERVAL_2 = value;
	}

	inline static int32_t get_offset_of_HEALTH_INTERVAL_3() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___HEALTH_INTERVAL_3)); }
	inline float get_HEALTH_INTERVAL_3() const { return ___HEALTH_INTERVAL_3; }
	inline float* get_address_of_HEALTH_INTERVAL_3() { return &___HEALTH_INTERVAL_3; }
	inline void set_HEALTH_INTERVAL_3(float value)
	{
		___HEALTH_INTERVAL_3 = value;
	}

	inline static int32_t get_offset_of_updateInterval_11() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___updateInterval_11)); }
	inline int32_t get_updateInterval_11() const { return ___updateInterval_11; }
	inline int32_t* get_address_of_updateInterval_11() { return &___updateInterval_11; }
	inline void set_updateInterval_11(int32_t value)
	{
		___updateInterval_11 = value;
	}

	inline static int32_t get_offset_of_ZombieID_12() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___ZombieID_12)); }
	inline float get_ZombieID_12() const { return ___ZombieID_12; }
	inline float* get_address_of_ZombieID_12() { return &___ZombieID_12; }
	inline void set_ZombieID_12(float value)
	{
		___ZombieID_12 = value;
	}

	inline static int32_t get_offset_of_MaxHP_13() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___MaxHP_13)); }
	inline int32_t get_MaxHP_13() const { return ___MaxHP_13; }
	inline int32_t* get_address_of_MaxHP_13() { return &___MaxHP_13; }
	inline void set_MaxHP_13(int32_t value)
	{
		___MaxHP_13 = value;
	}

	inline static int32_t get_offset_of_Atk_14() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Atk_14)); }
	inline int32_t get_Atk_14() const { return ___Atk_14; }
	inline int32_t* get_address_of_Atk_14() { return &___Atk_14; }
	inline void set_Atk_14(int32_t value)
	{
		___Atk_14 = value;
	}

	inline static int32_t get_offset_of_Heal_15() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Heal_15)); }
	inline int32_t get_Heal_15() const { return ___Heal_15; }
	inline int32_t* get_address_of_Heal_15() { return &___Heal_15; }
	inline void set_Heal_15(int32_t value)
	{
		___Heal_15 = value;
	}

	inline static int32_t get_offset_of_Def_16() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Def_16)); }
	inline int32_t get_Def_16() const { return ___Def_16; }
	inline int32_t* get_address_of_Def_16() { return &___Def_16; }
	inline void set_Def_16(int32_t value)
	{
		___Def_16 = value;
	}

	inline static int32_t get_offset_of_Infect_17() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Infect_17)); }
	inline int32_t get_Infect_17() const { return ___Infect_17; }
	inline int32_t* get_address_of_Infect_17() { return &___Infect_17; }
	inline void set_Infect_17(int32_t value)
	{
		___Infect_17 = value;
	}

	inline static int32_t get_offset_of_Speed_18() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Speed_18)); }
	inline int32_t get_Speed_18() const { return ___Speed_18; }
	inline int32_t* get_address_of_Speed_18() { return &___Speed_18; }
	inline void set_Speed_18(int32_t value)
	{
		___Speed_18 = value;
	}

	inline static int32_t get_offset_of_HPDecay_19() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___HPDecay_19)); }
	inline int32_t get_HPDecay_19() const { return ___HPDecay_19; }
	inline int32_t* get_address_of_HPDecay_19() { return &___HPDecay_19; }
	inline void set_HPDecay_19(int32_t value)
	{
		___HPDecay_19 = value;
	}

	inline static int32_t get_offset_of_DrainLife_20() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___DrainLife_20)); }
	inline int32_t get_DrainLife_20() const { return ___DrainLife_20; }
	inline int32_t* get_address_of_DrainLife_20() { return &___DrainLife_20; }
	inline void set_DrainLife_20(int32_t value)
	{
		___DrainLife_20 = value;
	}

	inline static int32_t get_offset_of_AbilityID_21() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___AbilityID_21)); }
	inline String_t* get_AbilityID_21() const { return ___AbilityID_21; }
	inline String_t** get_address_of_AbilityID_21() { return &___AbilityID_21; }
	inline void set_AbilityID_21(String_t* value)
	{
		___AbilityID_21 = value;
		Il2CppCodeGenWriteBarrier((&___AbilityID_21), value);
	}

	inline static int32_t get_offset_of_Name_22() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Name_22)); }
	inline String_t* get_Name_22() const { return ___Name_22; }
	inline String_t** get_address_of_Name_22() { return &___Name_22; }
	inline void set_Name_22(String_t* value)
	{
		___Name_22 = value;
		Il2CppCodeGenWriteBarrier((&___Name_22), value);
	}

	inline static int32_t get_offset_of_Res_23() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Res_23)); }
	inline String_t* get_Res_23() const { return ___Res_23; }
	inline String_t** get_address_of_Res_23() { return &___Res_23; }
	inline void set_Res_23(String_t* value)
	{
		___Res_23 = value;
		Il2CppCodeGenWriteBarrier((&___Res_23), value);
	}

	inline static int32_t get_offset_of_SkillID_24() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___SkillID_24)); }
	inline String_t* get_SkillID_24() const { return ___SkillID_24; }
	inline String_t** get_address_of_SkillID_24() { return &___SkillID_24; }
	inline void set_SkillID_24(String_t* value)
	{
		___SkillID_24 = value;
		Il2CppCodeGenWriteBarrier((&___SkillID_24), value);
	}

	inline static int32_t get_offset_of_param_25() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___param_25)); }
	inline int32_t get_param_25() const { return ___param_25; }
	inline int32_t* get_address_of_param_25() { return &___param_25; }
	inline void set_param_25(int32_t value)
	{
		___param_25 = value;
	}

	inline static int32_t get_offset_of_HP_26() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___HP_26)); }
	inline int32_t get_HP_26() const { return ___HP_26; }
	inline int32_t* get_address_of_HP_26() { return &___HP_26; }
	inline void set_HP_26(int32_t value)
	{
		___HP_26 = value;
	}

	inline static int32_t get_offset_of_ClimateBoost_27() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___ClimateBoost_27)); }
	inline int32_t get_ClimateBoost_27() const { return ___ClimateBoost_27; }
	inline int32_t* get_address_of_ClimateBoost_27() { return &___ClimateBoost_27; }
	inline void set_ClimateBoost_27(int32_t value)
	{
		___ClimateBoost_27 = value;
	}

	inline static int32_t get_offset_of_EnviBoost_28() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___EnviBoost_28)); }
	inline int32_t get_EnviBoost_28() const { return ___EnviBoost_28; }
	inline int32_t* get_address_of_EnviBoost_28() { return &___EnviBoost_28; }
	inline void set_EnviBoost_28(int32_t value)
	{
		___EnviBoost_28 = value;
	}

	inline static int32_t get_offset_of_Envi_29() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Envi_29)); }
	inline int32_t get_Envi_29() const { return ___Envi_29; }
	inline int32_t* get_address_of_Envi_29() { return &___Envi_29; }
	inline void set_Envi_29(int32_t value)
	{
		___Envi_29 = value;
	}

	inline static int32_t get_offset_of_Clim_30() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Clim_30)); }
	inline int32_t get_Clim_30() const { return ___Clim_30; }
	inline int32_t* get_address_of_Clim_30() { return &___Clim_30; }
	inline void set_Clim_30(int32_t value)
	{
		___Clim_30 = value;
	}

	inline static int32_t get_offset_of_HumanModel_31() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___HumanModel_31)); }
	inline GameObject_t2056972088 * get_HumanModel_31() const { return ___HumanModel_31; }
	inline GameObject_t2056972088 ** get_address_of_HumanModel_31() { return &___HumanModel_31; }
	inline void set_HumanModel_31(GameObject_t2056972088 * value)
	{
		___HumanModel_31 = value;
		Il2CppCodeGenWriteBarrier((&___HumanModel_31), value);
	}

	inline static int32_t get_offset_of_self_32() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___self_32)); }
	inline Zombie_t4273658849 * get_self_32() const { return ___self_32; }
	inline Zombie_t4273658849 ** get_address_of_self_32() { return &___self_32; }
	inline void set_self_32(Zombie_t4273658849 * value)
	{
		___self_32 = value;
		Il2CppCodeGenWriteBarrier((&___self_32), value);
	}

	inline static int32_t get_offset_of_Image_33() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Image_33)); }
	inline UISprite_t3128965256 * get_Image_33() const { return ___Image_33; }
	inline UISprite_t3128965256 ** get_address_of_Image_33() { return &___Image_33; }
	inline void set_Image_33(UISprite_t3128965256 * value)
	{
		___Image_33 = value;
		Il2CppCodeGenWriteBarrier((&___Image_33), value);
	}

	inline static int32_t get_offset_of_LabelName_34() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___LabelName_34)); }
	inline UILabel_t2887975127 * get_LabelName_34() const { return ___LabelName_34; }
	inline UILabel_t2887975127 ** get_address_of_LabelName_34() { return &___LabelName_34; }
	inline void set_LabelName_34(UILabel_t2887975127 * value)
	{
		___LabelName_34 = value;
		Il2CppCodeGenWriteBarrier((&___LabelName_34), value);
	}

	inline static int32_t get_offset_of_HPBar_35() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___HPBar_35)); }
	inline GameObject_t2056972088 * get_HPBar_35() const { return ___HPBar_35; }
	inline GameObject_t2056972088 ** get_address_of_HPBar_35() { return &___HPBar_35; }
	inline void set_HPBar_35(GameObject_t2056972088 * value)
	{
		___HPBar_35 = value;
		Il2CppCodeGenWriteBarrier((&___HPBar_35), value);
	}

	inline static int32_t get_offset_of_ClimIcon_36() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___ClimIcon_36)); }
	inline UISprite_t3128965256 * get_ClimIcon_36() const { return ___ClimIcon_36; }
	inline UISprite_t3128965256 ** get_address_of_ClimIcon_36() { return &___ClimIcon_36; }
	inline void set_ClimIcon_36(UISprite_t3128965256 * value)
	{
		___ClimIcon_36 = value;
		Il2CppCodeGenWriteBarrier((&___ClimIcon_36), value);
	}

	inline static int32_t get_offset_of_EnviIcon_37() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___EnviIcon_37)); }
	inline UISprite_t3128965256 * get_EnviIcon_37() const { return ___EnviIcon_37; }
	inline UISprite_t3128965256 ** get_address_of_EnviIcon_37() { return &___EnviIcon_37; }
	inline void set_EnviIcon_37(UISprite_t3128965256 * value)
	{
		___EnviIcon_37 = value;
		Il2CppCodeGenWriteBarrier((&___EnviIcon_37), value);
	}

	inline static int32_t get_offset_of_SkillIcon_38() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___SkillIcon_38)); }
	inline UISprite_t3128965256 * get_SkillIcon_38() const { return ___SkillIcon_38; }
	inline UISprite_t3128965256 ** get_address_of_SkillIcon_38() { return &___SkillIcon_38; }
	inline void set_SkillIcon_38(UISprite_t3128965256 * value)
	{
		___SkillIcon_38 = value;
		Il2CppCodeGenWriteBarrier((&___SkillIcon_38), value);
	}

	inline static int32_t get_offset_of_Battle_39() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___Battle_39)); }
	inline Battle_C_t1550641137 * get_Battle_39() const { return ___Battle_39; }
	inline Battle_C_t1550641137 ** get_address_of_Battle_39() { return &___Battle_39; }
	inline void set_Battle_39(Battle_C_t1550641137 * value)
	{
		___Battle_39 = value;
		Il2CppCodeGenWriteBarrier((&___Battle_39), value);
	}

	inline static int32_t get_offset_of_skillSEGO_40() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___skillSEGO_40)); }
	inline GameObject_t2056972088 * get_skillSEGO_40() const { return ___skillSEGO_40; }
	inline GameObject_t2056972088 ** get_address_of_skillSEGO_40() { return &___skillSEGO_40; }
	inline void set_skillSEGO_40(GameObject_t2056972088 * value)
	{
		___skillSEGO_40 = value;
		Il2CppCodeGenWriteBarrier((&___skillSEGO_40), value);
	}

	inline static int32_t get_offset_of_dieSEGO_41() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___dieSEGO_41)); }
	inline GameObject_t2056972088 * get_dieSEGO_41() const { return ___dieSEGO_41; }
	inline GameObject_t2056972088 ** get_address_of_dieSEGO_41() { return &___dieSEGO_41; }
	inline void set_dieSEGO_41(GameObject_t2056972088 * value)
	{
		___dieSEGO_41 = value;
		Il2CppCodeGenWriteBarrier((&___dieSEGO_41), value);
	}

	inline static int32_t get_offset_of_healDeltaTime_42() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___healDeltaTime_42)); }
	inline float get_healDeltaTime_42() const { return ___healDeltaTime_42; }
	inline float* get_address_of_healDeltaTime_42() { return &___healDeltaTime_42; }
	inline void set_healDeltaTime_42(float value)
	{
		___healDeltaTime_42 = value;
	}

	inline static int32_t get_offset_of_skillDeltaTime_43() { return static_cast<int32_t>(offsetof(Zombie_t4273658849, ___skillDeltaTime_43)); }
	inline float get_skillDeltaTime_43() const { return ___skillDeltaTime_43; }
	inline float* get_address_of_skillDeltaTime_43() { return &___skillDeltaTime_43; }
	inline void set_skillDeltaTime_43(float value)
	{
		___skillDeltaTime_43 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIE_T4273658849_H
#ifndef VIRUSSELECT_T3117736831_H
#define VIRUSSELECT_T3117736831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirusSelect
struct  VirusSelect_t3117736831  : public MonoBehaviour_t3253360915
{
public:
	// UnityEngine.GameObject VirusSelect::prefabs_Cell
	GameObject_t2056972088 * ___prefabs_Cell_2;
	// UnityEngine.GameObject VirusSelect::VirusSelectScroll
	GameObject_t2056972088 * ___VirusSelectScroll_3;
	// UnityEngine.GameObject VirusSelect::VirusSelectGrid
	GameObject_t2056972088 * ___VirusSelectGrid_4;
	// UnityEngine.GameObject VirusSelect::VirusSelectBackBtn
	GameObject_t2056972088 * ___VirusSelectBackBtn_5;
	// System.Int32 VirusSelect::UnlockedMissionNum
	int32_t ___UnlockedMissionNum_6;
	// ObjectPool`2<UnityEngine.GameObject,Virus_Sheet> VirusSelect::OP
	ObjectPool_2_t3013436252 * ___OP_7;
	// UILabel VirusSelect::LabelUnlockedMissionNum
	UILabel_t2887975127 * ___LabelUnlockedMissionNum_8;

public:
	inline static int32_t get_offset_of_prefabs_Cell_2() { return static_cast<int32_t>(offsetof(VirusSelect_t3117736831, ___prefabs_Cell_2)); }
	inline GameObject_t2056972088 * get_prefabs_Cell_2() const { return ___prefabs_Cell_2; }
	inline GameObject_t2056972088 ** get_address_of_prefabs_Cell_2() { return &___prefabs_Cell_2; }
	inline void set_prefabs_Cell_2(GameObject_t2056972088 * value)
	{
		___prefabs_Cell_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefabs_Cell_2), value);
	}

	inline static int32_t get_offset_of_VirusSelectScroll_3() { return static_cast<int32_t>(offsetof(VirusSelect_t3117736831, ___VirusSelectScroll_3)); }
	inline GameObject_t2056972088 * get_VirusSelectScroll_3() const { return ___VirusSelectScroll_3; }
	inline GameObject_t2056972088 ** get_address_of_VirusSelectScroll_3() { return &___VirusSelectScroll_3; }
	inline void set_VirusSelectScroll_3(GameObject_t2056972088 * value)
	{
		___VirusSelectScroll_3 = value;
		Il2CppCodeGenWriteBarrier((&___VirusSelectScroll_3), value);
	}

	inline static int32_t get_offset_of_VirusSelectGrid_4() { return static_cast<int32_t>(offsetof(VirusSelect_t3117736831, ___VirusSelectGrid_4)); }
	inline GameObject_t2056972088 * get_VirusSelectGrid_4() const { return ___VirusSelectGrid_4; }
	inline GameObject_t2056972088 ** get_address_of_VirusSelectGrid_4() { return &___VirusSelectGrid_4; }
	inline void set_VirusSelectGrid_4(GameObject_t2056972088 * value)
	{
		___VirusSelectGrid_4 = value;
		Il2CppCodeGenWriteBarrier((&___VirusSelectGrid_4), value);
	}

	inline static int32_t get_offset_of_VirusSelectBackBtn_5() { return static_cast<int32_t>(offsetof(VirusSelect_t3117736831, ___VirusSelectBackBtn_5)); }
	inline GameObject_t2056972088 * get_VirusSelectBackBtn_5() const { return ___VirusSelectBackBtn_5; }
	inline GameObject_t2056972088 ** get_address_of_VirusSelectBackBtn_5() { return &___VirusSelectBackBtn_5; }
	inline void set_VirusSelectBackBtn_5(GameObject_t2056972088 * value)
	{
		___VirusSelectBackBtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___VirusSelectBackBtn_5), value);
	}

	inline static int32_t get_offset_of_UnlockedMissionNum_6() { return static_cast<int32_t>(offsetof(VirusSelect_t3117736831, ___UnlockedMissionNum_6)); }
	inline int32_t get_UnlockedMissionNum_6() const { return ___UnlockedMissionNum_6; }
	inline int32_t* get_address_of_UnlockedMissionNum_6() { return &___UnlockedMissionNum_6; }
	inline void set_UnlockedMissionNum_6(int32_t value)
	{
		___UnlockedMissionNum_6 = value;
	}

	inline static int32_t get_offset_of_OP_7() { return static_cast<int32_t>(offsetof(VirusSelect_t3117736831, ___OP_7)); }
	inline ObjectPool_2_t3013436252 * get_OP_7() const { return ___OP_7; }
	inline ObjectPool_2_t3013436252 ** get_address_of_OP_7() { return &___OP_7; }
	inline void set_OP_7(ObjectPool_2_t3013436252 * value)
	{
		___OP_7 = value;
		Il2CppCodeGenWriteBarrier((&___OP_7), value);
	}

	inline static int32_t get_offset_of_LabelUnlockedMissionNum_8() { return static_cast<int32_t>(offsetof(VirusSelect_t3117736831, ___LabelUnlockedMissionNum_8)); }
	inline UILabel_t2887975127 * get_LabelUnlockedMissionNum_8() const { return ___LabelUnlockedMissionNum_8; }
	inline UILabel_t2887975127 ** get_address_of_LabelUnlockedMissionNum_8() { return &___LabelUnlockedMissionNum_8; }
	inline void set_LabelUnlockedMissionNum_8(UILabel_t2887975127 * value)
	{
		___LabelUnlockedMissionNum_8 = value;
		Il2CppCodeGenWriteBarrier((&___LabelUnlockedMissionNum_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRUSSELECT_T3117736831_H
#ifndef VIRUSSELECTCELL_T3719212877_H
#define VIRUSSELECTCELL_T3719212877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirusSelectCell
struct  VirusSelectCell_t3719212877  : public MonoBehaviour_t3253360915
{
public:
	// UILabel VirusSelectCell::LabelVirusName
	UILabel_t2887975127 * ___LabelVirusName_2;
	// UILabel VirusSelectCell::LabelVirusDes
	UILabel_t2887975127 * ___LabelVirusDes_3;
	// UILabel VirusSelectCell::LabelMissionIndex
	UILabel_t2887975127 * ___LabelMissionIndex_4;
	// VirusSelectCell VirusSelectCell::cell
	VirusSelectCell_t3719212877 * ___cell_5;
	// System.Int32 VirusSelectCell::CellID
	int32_t ___CellID_6;

public:
	inline static int32_t get_offset_of_LabelVirusName_2() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3719212877, ___LabelVirusName_2)); }
	inline UILabel_t2887975127 * get_LabelVirusName_2() const { return ___LabelVirusName_2; }
	inline UILabel_t2887975127 ** get_address_of_LabelVirusName_2() { return &___LabelVirusName_2; }
	inline void set_LabelVirusName_2(UILabel_t2887975127 * value)
	{
		___LabelVirusName_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelVirusName_2), value);
	}

	inline static int32_t get_offset_of_LabelVirusDes_3() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3719212877, ___LabelVirusDes_3)); }
	inline UILabel_t2887975127 * get_LabelVirusDes_3() const { return ___LabelVirusDes_3; }
	inline UILabel_t2887975127 ** get_address_of_LabelVirusDes_3() { return &___LabelVirusDes_3; }
	inline void set_LabelVirusDes_3(UILabel_t2887975127 * value)
	{
		___LabelVirusDes_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelVirusDes_3), value);
	}

	inline static int32_t get_offset_of_LabelMissionIndex_4() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3719212877, ___LabelMissionIndex_4)); }
	inline UILabel_t2887975127 * get_LabelMissionIndex_4() const { return ___LabelMissionIndex_4; }
	inline UILabel_t2887975127 ** get_address_of_LabelMissionIndex_4() { return &___LabelMissionIndex_4; }
	inline void set_LabelMissionIndex_4(UILabel_t2887975127 * value)
	{
		___LabelMissionIndex_4 = value;
		Il2CppCodeGenWriteBarrier((&___LabelMissionIndex_4), value);
	}

	inline static int32_t get_offset_of_cell_5() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3719212877, ___cell_5)); }
	inline VirusSelectCell_t3719212877 * get_cell_5() const { return ___cell_5; }
	inline VirusSelectCell_t3719212877 ** get_address_of_cell_5() { return &___cell_5; }
	inline void set_cell_5(VirusSelectCell_t3719212877 * value)
	{
		___cell_5 = value;
		Il2CppCodeGenWriteBarrier((&___cell_5), value);
	}

	inline static int32_t get_offset_of_CellID_6() { return static_cast<int32_t>(offsetof(VirusSelectCell_t3719212877, ___CellID_6)); }
	inline int32_t get_CellID_6() const { return ___CellID_6; }
	inline int32_t* get_address_of_CellID_6() { return &___CellID_6; }
	inline void set_CellID_6(int32_t value)
	{
		___CellID_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRUSSELECTCELL_T3719212877_H
#ifndef MAIN_C_T242605567_H
#define MAIN_C_T242605567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Main_C
struct  Main_C_t242605567  : public MonoBehaviour_t3253360915
{
public:
	// UILabel Main_C::LabelGold
	UILabel_t2887975127 * ___LabelGold_2;
	// UILabel Main_C::LabelGem
	UILabel_t2887975127 * ___LabelGem_3;
	// UnityEngine.GameObject Main_C::Gold
	GameObject_t2056972088 * ___Gold_4;
	// UnityEngine.GameObject Main_C::Gem
	GameObject_t2056972088 * ___Gem_5;
	// UnityEngine.GameObject Main_C::Main_StartBtn
	GameObject_t2056972088 * ___Main_StartBtn_6;
	// UnityEngine.GameObject Main_C::Main_DNABtn
	GameObject_t2056972088 * ___Main_DNABtn_7;
	// UnityEngine.GameObject Main_C::Main_OptionBtn
	GameObject_t2056972088 * ___Main_OptionBtn_8;
	// UnityEngine.GameObject Main_C::Main_ShopBtn
	GameObject_t2056972088 * ___Main_ShopBtn_9;

public:
	inline static int32_t get_offset_of_LabelGold_2() { return static_cast<int32_t>(offsetof(Main_C_t242605567, ___LabelGold_2)); }
	inline UILabel_t2887975127 * get_LabelGold_2() const { return ___LabelGold_2; }
	inline UILabel_t2887975127 ** get_address_of_LabelGold_2() { return &___LabelGold_2; }
	inline void set_LabelGold_2(UILabel_t2887975127 * value)
	{
		___LabelGold_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelGold_2), value);
	}

	inline static int32_t get_offset_of_LabelGem_3() { return static_cast<int32_t>(offsetof(Main_C_t242605567, ___LabelGem_3)); }
	inline UILabel_t2887975127 * get_LabelGem_3() const { return ___LabelGem_3; }
	inline UILabel_t2887975127 ** get_address_of_LabelGem_3() { return &___LabelGem_3; }
	inline void set_LabelGem_3(UILabel_t2887975127 * value)
	{
		___LabelGem_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelGem_3), value);
	}

	inline static int32_t get_offset_of_Gold_4() { return static_cast<int32_t>(offsetof(Main_C_t242605567, ___Gold_4)); }
	inline GameObject_t2056972088 * get_Gold_4() const { return ___Gold_4; }
	inline GameObject_t2056972088 ** get_address_of_Gold_4() { return &___Gold_4; }
	inline void set_Gold_4(GameObject_t2056972088 * value)
	{
		___Gold_4 = value;
		Il2CppCodeGenWriteBarrier((&___Gold_4), value);
	}

	inline static int32_t get_offset_of_Gem_5() { return static_cast<int32_t>(offsetof(Main_C_t242605567, ___Gem_5)); }
	inline GameObject_t2056972088 * get_Gem_5() const { return ___Gem_5; }
	inline GameObject_t2056972088 ** get_address_of_Gem_5() { return &___Gem_5; }
	inline void set_Gem_5(GameObject_t2056972088 * value)
	{
		___Gem_5 = value;
		Il2CppCodeGenWriteBarrier((&___Gem_5), value);
	}

	inline static int32_t get_offset_of_Main_StartBtn_6() { return static_cast<int32_t>(offsetof(Main_C_t242605567, ___Main_StartBtn_6)); }
	inline GameObject_t2056972088 * get_Main_StartBtn_6() const { return ___Main_StartBtn_6; }
	inline GameObject_t2056972088 ** get_address_of_Main_StartBtn_6() { return &___Main_StartBtn_6; }
	inline void set_Main_StartBtn_6(GameObject_t2056972088 * value)
	{
		___Main_StartBtn_6 = value;
		Il2CppCodeGenWriteBarrier((&___Main_StartBtn_6), value);
	}

	inline static int32_t get_offset_of_Main_DNABtn_7() { return static_cast<int32_t>(offsetof(Main_C_t242605567, ___Main_DNABtn_7)); }
	inline GameObject_t2056972088 * get_Main_DNABtn_7() const { return ___Main_DNABtn_7; }
	inline GameObject_t2056972088 ** get_address_of_Main_DNABtn_7() { return &___Main_DNABtn_7; }
	inline void set_Main_DNABtn_7(GameObject_t2056972088 * value)
	{
		___Main_DNABtn_7 = value;
		Il2CppCodeGenWriteBarrier((&___Main_DNABtn_7), value);
	}

	inline static int32_t get_offset_of_Main_OptionBtn_8() { return static_cast<int32_t>(offsetof(Main_C_t242605567, ___Main_OptionBtn_8)); }
	inline GameObject_t2056972088 * get_Main_OptionBtn_8() const { return ___Main_OptionBtn_8; }
	inline GameObject_t2056972088 ** get_address_of_Main_OptionBtn_8() { return &___Main_OptionBtn_8; }
	inline void set_Main_OptionBtn_8(GameObject_t2056972088 * value)
	{
		___Main_OptionBtn_8 = value;
		Il2CppCodeGenWriteBarrier((&___Main_OptionBtn_8), value);
	}

	inline static int32_t get_offset_of_Main_ShopBtn_9() { return static_cast<int32_t>(offsetof(Main_C_t242605567, ___Main_ShopBtn_9)); }
	inline GameObject_t2056972088 * get_Main_ShopBtn_9() const { return ___Main_ShopBtn_9; }
	inline GameObject_t2056972088 ** get_address_of_Main_ShopBtn_9() { return &___Main_ShopBtn_9; }
	inline void set_Main_ShopBtn_9(GameObject_t2056972088 * value)
	{
		___Main_ShopBtn_9 = value;
		Il2CppCodeGenWriteBarrier((&___Main_ShopBtn_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAIN_C_T242605567_H
#ifndef SHOPCELL_T2077651743_H
#define SHOPCELL_T2077651743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShopCell
struct  ShopCell_t2077651743  : public MonoBehaviour_t3253360915
{
public:
	// UILabel ShopCell::LabelIAPName
	UILabel_t2887975127 * ___LabelIAPName_2;
	// UILabel ShopCell::LabelIAPPrice
	UILabel_t2887975127 * ___LabelIAPPrice_3;
	// ShopCell ShopCell::cell
	ShopCell_t2077651743 * ___cell_4;
	// System.Int32 ShopCell::CellID
	int32_t ___CellID_5;

public:
	inline static int32_t get_offset_of_LabelIAPName_2() { return static_cast<int32_t>(offsetof(ShopCell_t2077651743, ___LabelIAPName_2)); }
	inline UILabel_t2887975127 * get_LabelIAPName_2() const { return ___LabelIAPName_2; }
	inline UILabel_t2887975127 ** get_address_of_LabelIAPName_2() { return &___LabelIAPName_2; }
	inline void set_LabelIAPName_2(UILabel_t2887975127 * value)
	{
		___LabelIAPName_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelIAPName_2), value);
	}

	inline static int32_t get_offset_of_LabelIAPPrice_3() { return static_cast<int32_t>(offsetof(ShopCell_t2077651743, ___LabelIAPPrice_3)); }
	inline UILabel_t2887975127 * get_LabelIAPPrice_3() const { return ___LabelIAPPrice_3; }
	inline UILabel_t2887975127 ** get_address_of_LabelIAPPrice_3() { return &___LabelIAPPrice_3; }
	inline void set_LabelIAPPrice_3(UILabel_t2887975127 * value)
	{
		___LabelIAPPrice_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelIAPPrice_3), value);
	}

	inline static int32_t get_offset_of_cell_4() { return static_cast<int32_t>(offsetof(ShopCell_t2077651743, ___cell_4)); }
	inline ShopCell_t2077651743 * get_cell_4() const { return ___cell_4; }
	inline ShopCell_t2077651743 ** get_address_of_cell_4() { return &___cell_4; }
	inline void set_cell_4(ShopCell_t2077651743 * value)
	{
		___cell_4 = value;
		Il2CppCodeGenWriteBarrier((&___cell_4), value);
	}

	inline static int32_t get_offset_of_CellID_5() { return static_cast<int32_t>(offsetof(ShopCell_t2077651743, ___CellID_5)); }
	inline int32_t get_CellID_5() const { return ___CellID_5; }
	inline int32_t* get_address_of_CellID_5() { return &___CellID_5; }
	inline void set_CellID_5(int32_t value)
	{
		___CellID_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOPCELL_T2077651743_H
#ifndef AUDIOMANAGER_T2157902905_H
#define AUDIOMANAGER_T2157902905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t2157902905  : public MonoBehaviour_t3253360915
{
public:

public:
};

struct AudioManager_t2157902905_StaticFields
{
public:
	// System.String AudioManager::currrentBG
	String_t* ___currrentBG_4;
	// System.Single AudioManager::bgVolume
	float ___bgVolume_5;
	// System.Boolean AudioManager::isSoundOn
	bool ___isSoundOn_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioSource> AudioManager::AudioSources
	Dictionary_2_t1010914177 * ___AudioSources_7;

public:
	inline static int32_t get_offset_of_currrentBG_4() { return static_cast<int32_t>(offsetof(AudioManager_t2157902905_StaticFields, ___currrentBG_4)); }
	inline String_t* get_currrentBG_4() const { return ___currrentBG_4; }
	inline String_t** get_address_of_currrentBG_4() { return &___currrentBG_4; }
	inline void set_currrentBG_4(String_t* value)
	{
		___currrentBG_4 = value;
		Il2CppCodeGenWriteBarrier((&___currrentBG_4), value);
	}

	inline static int32_t get_offset_of_bgVolume_5() { return static_cast<int32_t>(offsetof(AudioManager_t2157902905_StaticFields, ___bgVolume_5)); }
	inline float get_bgVolume_5() const { return ___bgVolume_5; }
	inline float* get_address_of_bgVolume_5() { return &___bgVolume_5; }
	inline void set_bgVolume_5(float value)
	{
		___bgVolume_5 = value;
	}

	inline static int32_t get_offset_of_isSoundOn_6() { return static_cast<int32_t>(offsetof(AudioManager_t2157902905_StaticFields, ___isSoundOn_6)); }
	inline bool get_isSoundOn_6() const { return ___isSoundOn_6; }
	inline bool* get_address_of_isSoundOn_6() { return &___isSoundOn_6; }
	inline void set_isSoundOn_6(bool value)
	{
		___isSoundOn_6 = value;
	}

	inline static int32_t get_offset_of_AudioSources_7() { return static_cast<int32_t>(offsetof(AudioManager_t2157902905_StaticFields, ___AudioSources_7)); }
	inline Dictionary_2_t1010914177 * get_AudioSources_7() const { return ___AudioSources_7; }
	inline Dictionary_2_t1010914177 ** get_address_of_AudioSources_7() { return &___AudioSources_7; }
	inline void set_AudioSources_7(Dictionary_2_t1010914177 * value)
	{
		___AudioSources_7 = value;
		Il2CppCodeGenWriteBarrier((&___AudioSources_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMANAGER_T2157902905_H
#ifndef BATTLE_C_T1550641137_H
#define BATTLE_C_T1550641137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Battle_C
struct  Battle_C_t1550641137  : public MonoBehaviour_t3253360915
{
public:
	// System.Int32 Battle_C::MEDICINESPD
	int32_t ___MEDICINESPD_6;
	// System.Int32 Battle_C::updateInterval
	int32_t ___updateInterval_14;
	// System.Int32 Battle_C::UpgradeMapWidth
	int32_t ___UpgradeMapWidth_15;
	// System.Int32 Battle_C::UpgradeMapHeigth
	int32_t ___UpgradeMapHeigth_16;
	// System.Int32 Battle_C::HUMANMODEL_WIDTH
	int32_t ___HUMANMODEL_WIDTH_17;
	// System.Int32 Battle_C::HUMANMODEL_HEIGHT
	int32_t ___HUMANMODEL_HEIGHT_18;
	// System.Int32 Battle_C::BUBBLE_WIDTH
	int32_t ___BUBBLE_WIDTH_19;
	// System.Int32 Battle_C::BUBBLE_HEIGHT
	int32_t ___BUBBLE_HEIGHT_20;
	// System.Int32 Battle_C::MissionID
	int32_t ___MissionID_21;
	// System.Int32 Battle_C::VirusID
	int32_t ___VirusID_22;
	// Modes Battle_C::mode
	int32_t ___mode_23;
	// System.Single Battle_C::deltaTime2
	float ___deltaTime2_24;
	// System.Single Battle_C::deltaTime3
	float ___deltaTime3_25;
	// System.Single Battle_C::currentTimeScale
	float ___currentTimeScale_26;
	// System.Int32 Battle_C::VirusNum
	int32_t ___VirusNum_27;
	// System.Single Battle_C::Medicine
	float ___Medicine_28;
	// System.Single Battle_C::MedicineWork
	float ___MedicineWork_29;
	// System.Boolean Battle_C::medicineOK
	bool ___medicineOK_30;
	// BattleState Battle_C::BattleState
	int32_t ___BattleState_31;
	// System.Boolean Battle_C::Result
	bool ___Result_32;
	// System.Int32 Battle_C::StrategyPoint
	int32_t ___StrategyPoint_33;
	// System.Single Battle_C::TotalInfection
	float ___TotalInfection_34;
	// System.Int32 Battle_C::TotalDamage
	int32_t ___TotalDamage_35;
	// System.Boolean Battle_C::Accelarate
	bool ___Accelarate_36;
	// Battle_C Battle_C::BC
	Battle_C_t1550641137 * ___BC_37;
	// System.Single Battle_C::TimeSecond
	float ___TimeSecond_38;
	// System.Int32 Battle_C::InfectNum
	int32_t ___InfectNum_39;
	// System.Int32 Battle_C::InfectKillNum
	int32_t ___InfectKillNum_40;
	// System.Int32 Battle_C::ZombieKillNum
	int32_t ___ZombieKillNum_41;
	// System.Single Battle_C::ModelAspect
	float ___ModelAspect_42;
	// UnityEngine.GameObject Battle_C::StrategyBtn
	GameObject_t2056972088 * ___StrategyBtn_43;
	// UnityEngine.GameObject Battle_C::LabelStrategy
	GameObject_t2056972088 * ___LabelStrategy_44;
	// UnityEngine.GameObject Battle_C::Battle
	GameObject_t2056972088 * ___Battle_45;
	// UnityEngine.GameObject Battle_C::Entity
	GameObject_t2056972088 * ___Entity_46;
	// UnityEngine.GameObject Battle_C::EndBattleBtn
	GameObject_t2056972088 * ___EndBattleBtn_47;
	// UnityEngine.GameObject Battle_C::InGameUpgradePanel
	GameObject_t2056972088 * ___InGameUpgradePanel_48;
	// UnityEngine.GameObject Battle_C::UpgradeMap
	GameObject_t2056972088 * ___UpgradeMap_49;
	// UnityEngine.GameObject Battle_C::VirusUpBtn
	GameObject_t2056972088 * ___VirusUpBtn_50;
	// UnityEngine.GameObject Battle_C::HumanUpBtn
	GameObject_t2056972088 * ___HumanUpBtn_51;
	// UnityEngine.GameObject Battle_C::ZombieUpBtn
	GameObject_t2056972088 * ___ZombieUpBtn_52;
	// UnityEngine.GameObject Battle_C::EvolutionBtn
	GameObject_t2056972088 * ___EvolutionBtn_53;
	// UnityEngine.GameObject Battle_C::SpeedBtn
	GameObject_t2056972088 * ___SpeedBtn_54;
	// UnityEngine.GameObject Battle_C::strategyCloseBtn
	GameObject_t2056972088 * ___strategyCloseBtn_55;
	// UnityEngine.GameObject Battle_C::MedicineBar
	GameObject_t2056972088 * ___MedicineBar_56;
	// UnityEngine.GameObject Battle_C::VirusProBar
	GameObject_t2056972088 * ___VirusProBar_57;
	// UnityEngine.GameObject Battle_C::HumanProBar
	GameObject_t2056972088 * ___HumanProBar_58;
	// UnityEngine.GameObject Battle_C::ZombieProBar
	GameObject_t2056972088 * ___ZombieProBar_59;
	// UILabel Battle_C::Timer
	UILabel_t2887975127 * ___Timer_60;
	// UILabel Battle_C::Label_EvolutionDes
	UILabel_t2887975127 * ___Label_EvolutionDes_61;
	// UILabel Battle_C::LabelEvolutionCost
	UILabel_t2887975127 * ___LabelEvolutionCost_62;
	// UILabel Battle_C::LabelSpeed
	UILabel_t2887975127 * ___LabelSpeed_63;
	// UILabel Battle_C::MediName
	UILabel_t2887975127 * ___MediName_64;
	// UILabel Battle_C::MediPercent
	UILabel_t2887975127 * ___MediPercent_65;
	// UnityEngine.GameObject Battle_C::HumanModel
	GameObject_t2056972088 * ___HumanModel_66;
	// UnityEngine.GameObject Battle_C::ZombieModel
	GameObject_t2056972088 * ___ZombieModel_67;
	// UnityEngine.GameObject Battle_C::LabelStrategyPoint
	GameObject_t2056972088 * ___LabelStrategyPoint_68;
	// UnityEngine.GameObject Battle_C::GeneModel
	GameObject_t2056972088 * ___GeneModel_69;
	// Gene Battle_C::GeneSelected
	Gene_t3376799142 * ___GeneSelected_70;
	// UnityEngine.GameObject Battle_C::LabelSP
	GameObject_t2056972088 * ___LabelSP_71;
	// UnityEngine.GameObject Battle_C::SP_Bubble
	GameObject_t2056972088 * ___SP_Bubble_72;
	// Virus Battle_C::CurVirus
	Virus_t2139413478 * ___CurVirus_73;
	// System.Collections.ArrayList Battle_C::UpgradedGenes_Virus
	ArrayList_t825968487 * ___UpgradedGenes_Virus_74;
	// System.Collections.ArrayList Battle_C::UpgradedGenes_Human
	ArrayList_t825968487 * ___UpgradedGenes_Human_75;
	// System.Collections.ArrayList Battle_C::UpgradedGenes_Zombie
	ArrayList_t825968487 * ___UpgradedGenes_Zombie_76;
	// System.Collections.ArrayList Battle_C::VirusArray
	ArrayList_t825968487 * ___VirusArray_77;
	// System.Collections.ArrayList Battle_C::HumanArray
	ArrayList_t825968487 * ___HumanArray_78;
	// System.Collections.ArrayList Battle_C::ZombieArray
	ArrayList_t825968487 * ___ZombieArray_79;
	// System.Collections.ArrayList Battle_C::VirusGeneArray
	ArrayList_t825968487 * ___VirusGeneArray_80;
	// System.Collections.ArrayList Battle_C::HumanGeneArray
	ArrayList_t825968487 * ___HumanGeneArray_81;
	// System.Collections.ArrayList Battle_C::ZombieGeneArray
	ArrayList_t825968487 * ___ZombieGeneArray_82;
	// System.Collections.ArrayList Battle_C::InfectedHumans
	ArrayList_t825968487 * ___InfectedHumans_83;
	// System.Collections.ArrayList Battle_C::UnInfectedHumans
	ArrayList_t825968487 * ___UnInfectedHumans_84;
	// System.Collections.Generic.List`1<Infection_Sheet> Battle_C::InfectionList
	List_1_t2318151775 * ___InfectionList_85;
	// System.Collections.Generic.List`1<Damage_Sheet> Battle_C::DamageList
	List_1_t4159906741 * ___DamageList_86;

public:
	inline static int32_t get_offset_of_MEDICINESPD_6() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___MEDICINESPD_6)); }
	inline int32_t get_MEDICINESPD_6() const { return ___MEDICINESPD_6; }
	inline int32_t* get_address_of_MEDICINESPD_6() { return &___MEDICINESPD_6; }
	inline void set_MEDICINESPD_6(int32_t value)
	{
		___MEDICINESPD_6 = value;
	}

	inline static int32_t get_offset_of_updateInterval_14() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___updateInterval_14)); }
	inline int32_t get_updateInterval_14() const { return ___updateInterval_14; }
	inline int32_t* get_address_of_updateInterval_14() { return &___updateInterval_14; }
	inline void set_updateInterval_14(int32_t value)
	{
		___updateInterval_14 = value;
	}

	inline static int32_t get_offset_of_UpgradeMapWidth_15() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___UpgradeMapWidth_15)); }
	inline int32_t get_UpgradeMapWidth_15() const { return ___UpgradeMapWidth_15; }
	inline int32_t* get_address_of_UpgradeMapWidth_15() { return &___UpgradeMapWidth_15; }
	inline void set_UpgradeMapWidth_15(int32_t value)
	{
		___UpgradeMapWidth_15 = value;
	}

	inline static int32_t get_offset_of_UpgradeMapHeigth_16() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___UpgradeMapHeigth_16)); }
	inline int32_t get_UpgradeMapHeigth_16() const { return ___UpgradeMapHeigth_16; }
	inline int32_t* get_address_of_UpgradeMapHeigth_16() { return &___UpgradeMapHeigth_16; }
	inline void set_UpgradeMapHeigth_16(int32_t value)
	{
		___UpgradeMapHeigth_16 = value;
	}

	inline static int32_t get_offset_of_HUMANMODEL_WIDTH_17() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___HUMANMODEL_WIDTH_17)); }
	inline int32_t get_HUMANMODEL_WIDTH_17() const { return ___HUMANMODEL_WIDTH_17; }
	inline int32_t* get_address_of_HUMANMODEL_WIDTH_17() { return &___HUMANMODEL_WIDTH_17; }
	inline void set_HUMANMODEL_WIDTH_17(int32_t value)
	{
		___HUMANMODEL_WIDTH_17 = value;
	}

	inline static int32_t get_offset_of_HUMANMODEL_HEIGHT_18() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___HUMANMODEL_HEIGHT_18)); }
	inline int32_t get_HUMANMODEL_HEIGHT_18() const { return ___HUMANMODEL_HEIGHT_18; }
	inline int32_t* get_address_of_HUMANMODEL_HEIGHT_18() { return &___HUMANMODEL_HEIGHT_18; }
	inline void set_HUMANMODEL_HEIGHT_18(int32_t value)
	{
		___HUMANMODEL_HEIGHT_18 = value;
	}

	inline static int32_t get_offset_of_BUBBLE_WIDTH_19() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___BUBBLE_WIDTH_19)); }
	inline int32_t get_BUBBLE_WIDTH_19() const { return ___BUBBLE_WIDTH_19; }
	inline int32_t* get_address_of_BUBBLE_WIDTH_19() { return &___BUBBLE_WIDTH_19; }
	inline void set_BUBBLE_WIDTH_19(int32_t value)
	{
		___BUBBLE_WIDTH_19 = value;
	}

	inline static int32_t get_offset_of_BUBBLE_HEIGHT_20() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___BUBBLE_HEIGHT_20)); }
	inline int32_t get_BUBBLE_HEIGHT_20() const { return ___BUBBLE_HEIGHT_20; }
	inline int32_t* get_address_of_BUBBLE_HEIGHT_20() { return &___BUBBLE_HEIGHT_20; }
	inline void set_BUBBLE_HEIGHT_20(int32_t value)
	{
		___BUBBLE_HEIGHT_20 = value;
	}

	inline static int32_t get_offset_of_MissionID_21() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___MissionID_21)); }
	inline int32_t get_MissionID_21() const { return ___MissionID_21; }
	inline int32_t* get_address_of_MissionID_21() { return &___MissionID_21; }
	inline void set_MissionID_21(int32_t value)
	{
		___MissionID_21 = value;
	}

	inline static int32_t get_offset_of_VirusID_22() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___VirusID_22)); }
	inline int32_t get_VirusID_22() const { return ___VirusID_22; }
	inline int32_t* get_address_of_VirusID_22() { return &___VirusID_22; }
	inline void set_VirusID_22(int32_t value)
	{
		___VirusID_22 = value;
	}

	inline static int32_t get_offset_of_mode_23() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___mode_23)); }
	inline int32_t get_mode_23() const { return ___mode_23; }
	inline int32_t* get_address_of_mode_23() { return &___mode_23; }
	inline void set_mode_23(int32_t value)
	{
		___mode_23 = value;
	}

	inline static int32_t get_offset_of_deltaTime2_24() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___deltaTime2_24)); }
	inline float get_deltaTime2_24() const { return ___deltaTime2_24; }
	inline float* get_address_of_deltaTime2_24() { return &___deltaTime2_24; }
	inline void set_deltaTime2_24(float value)
	{
		___deltaTime2_24 = value;
	}

	inline static int32_t get_offset_of_deltaTime3_25() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___deltaTime3_25)); }
	inline float get_deltaTime3_25() const { return ___deltaTime3_25; }
	inline float* get_address_of_deltaTime3_25() { return &___deltaTime3_25; }
	inline void set_deltaTime3_25(float value)
	{
		___deltaTime3_25 = value;
	}

	inline static int32_t get_offset_of_currentTimeScale_26() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___currentTimeScale_26)); }
	inline float get_currentTimeScale_26() const { return ___currentTimeScale_26; }
	inline float* get_address_of_currentTimeScale_26() { return &___currentTimeScale_26; }
	inline void set_currentTimeScale_26(float value)
	{
		___currentTimeScale_26 = value;
	}

	inline static int32_t get_offset_of_VirusNum_27() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___VirusNum_27)); }
	inline int32_t get_VirusNum_27() const { return ___VirusNum_27; }
	inline int32_t* get_address_of_VirusNum_27() { return &___VirusNum_27; }
	inline void set_VirusNum_27(int32_t value)
	{
		___VirusNum_27 = value;
	}

	inline static int32_t get_offset_of_Medicine_28() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___Medicine_28)); }
	inline float get_Medicine_28() const { return ___Medicine_28; }
	inline float* get_address_of_Medicine_28() { return &___Medicine_28; }
	inline void set_Medicine_28(float value)
	{
		___Medicine_28 = value;
	}

	inline static int32_t get_offset_of_MedicineWork_29() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___MedicineWork_29)); }
	inline float get_MedicineWork_29() const { return ___MedicineWork_29; }
	inline float* get_address_of_MedicineWork_29() { return &___MedicineWork_29; }
	inline void set_MedicineWork_29(float value)
	{
		___MedicineWork_29 = value;
	}

	inline static int32_t get_offset_of_medicineOK_30() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___medicineOK_30)); }
	inline bool get_medicineOK_30() const { return ___medicineOK_30; }
	inline bool* get_address_of_medicineOK_30() { return &___medicineOK_30; }
	inline void set_medicineOK_30(bool value)
	{
		___medicineOK_30 = value;
	}

	inline static int32_t get_offset_of_BattleState_31() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___BattleState_31)); }
	inline int32_t get_BattleState_31() const { return ___BattleState_31; }
	inline int32_t* get_address_of_BattleState_31() { return &___BattleState_31; }
	inline void set_BattleState_31(int32_t value)
	{
		___BattleState_31 = value;
	}

	inline static int32_t get_offset_of_Result_32() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___Result_32)); }
	inline bool get_Result_32() const { return ___Result_32; }
	inline bool* get_address_of_Result_32() { return &___Result_32; }
	inline void set_Result_32(bool value)
	{
		___Result_32 = value;
	}

	inline static int32_t get_offset_of_StrategyPoint_33() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___StrategyPoint_33)); }
	inline int32_t get_StrategyPoint_33() const { return ___StrategyPoint_33; }
	inline int32_t* get_address_of_StrategyPoint_33() { return &___StrategyPoint_33; }
	inline void set_StrategyPoint_33(int32_t value)
	{
		___StrategyPoint_33 = value;
	}

	inline static int32_t get_offset_of_TotalInfection_34() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___TotalInfection_34)); }
	inline float get_TotalInfection_34() const { return ___TotalInfection_34; }
	inline float* get_address_of_TotalInfection_34() { return &___TotalInfection_34; }
	inline void set_TotalInfection_34(float value)
	{
		___TotalInfection_34 = value;
	}

	inline static int32_t get_offset_of_TotalDamage_35() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___TotalDamage_35)); }
	inline int32_t get_TotalDamage_35() const { return ___TotalDamage_35; }
	inline int32_t* get_address_of_TotalDamage_35() { return &___TotalDamage_35; }
	inline void set_TotalDamage_35(int32_t value)
	{
		___TotalDamage_35 = value;
	}

	inline static int32_t get_offset_of_Accelarate_36() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___Accelarate_36)); }
	inline bool get_Accelarate_36() const { return ___Accelarate_36; }
	inline bool* get_address_of_Accelarate_36() { return &___Accelarate_36; }
	inline void set_Accelarate_36(bool value)
	{
		___Accelarate_36 = value;
	}

	inline static int32_t get_offset_of_BC_37() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___BC_37)); }
	inline Battle_C_t1550641137 * get_BC_37() const { return ___BC_37; }
	inline Battle_C_t1550641137 ** get_address_of_BC_37() { return &___BC_37; }
	inline void set_BC_37(Battle_C_t1550641137 * value)
	{
		___BC_37 = value;
		Il2CppCodeGenWriteBarrier((&___BC_37), value);
	}

	inline static int32_t get_offset_of_TimeSecond_38() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___TimeSecond_38)); }
	inline float get_TimeSecond_38() const { return ___TimeSecond_38; }
	inline float* get_address_of_TimeSecond_38() { return &___TimeSecond_38; }
	inline void set_TimeSecond_38(float value)
	{
		___TimeSecond_38 = value;
	}

	inline static int32_t get_offset_of_InfectNum_39() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___InfectNum_39)); }
	inline int32_t get_InfectNum_39() const { return ___InfectNum_39; }
	inline int32_t* get_address_of_InfectNum_39() { return &___InfectNum_39; }
	inline void set_InfectNum_39(int32_t value)
	{
		___InfectNum_39 = value;
	}

	inline static int32_t get_offset_of_InfectKillNum_40() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___InfectKillNum_40)); }
	inline int32_t get_InfectKillNum_40() const { return ___InfectKillNum_40; }
	inline int32_t* get_address_of_InfectKillNum_40() { return &___InfectKillNum_40; }
	inline void set_InfectKillNum_40(int32_t value)
	{
		___InfectKillNum_40 = value;
	}

	inline static int32_t get_offset_of_ZombieKillNum_41() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___ZombieKillNum_41)); }
	inline int32_t get_ZombieKillNum_41() const { return ___ZombieKillNum_41; }
	inline int32_t* get_address_of_ZombieKillNum_41() { return &___ZombieKillNum_41; }
	inline void set_ZombieKillNum_41(int32_t value)
	{
		___ZombieKillNum_41 = value;
	}

	inline static int32_t get_offset_of_ModelAspect_42() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___ModelAspect_42)); }
	inline float get_ModelAspect_42() const { return ___ModelAspect_42; }
	inline float* get_address_of_ModelAspect_42() { return &___ModelAspect_42; }
	inline void set_ModelAspect_42(float value)
	{
		___ModelAspect_42 = value;
	}

	inline static int32_t get_offset_of_StrategyBtn_43() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___StrategyBtn_43)); }
	inline GameObject_t2056972088 * get_StrategyBtn_43() const { return ___StrategyBtn_43; }
	inline GameObject_t2056972088 ** get_address_of_StrategyBtn_43() { return &___StrategyBtn_43; }
	inline void set_StrategyBtn_43(GameObject_t2056972088 * value)
	{
		___StrategyBtn_43 = value;
		Il2CppCodeGenWriteBarrier((&___StrategyBtn_43), value);
	}

	inline static int32_t get_offset_of_LabelStrategy_44() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___LabelStrategy_44)); }
	inline GameObject_t2056972088 * get_LabelStrategy_44() const { return ___LabelStrategy_44; }
	inline GameObject_t2056972088 ** get_address_of_LabelStrategy_44() { return &___LabelStrategy_44; }
	inline void set_LabelStrategy_44(GameObject_t2056972088 * value)
	{
		___LabelStrategy_44 = value;
		Il2CppCodeGenWriteBarrier((&___LabelStrategy_44), value);
	}

	inline static int32_t get_offset_of_Battle_45() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___Battle_45)); }
	inline GameObject_t2056972088 * get_Battle_45() const { return ___Battle_45; }
	inline GameObject_t2056972088 ** get_address_of_Battle_45() { return &___Battle_45; }
	inline void set_Battle_45(GameObject_t2056972088 * value)
	{
		___Battle_45 = value;
		Il2CppCodeGenWriteBarrier((&___Battle_45), value);
	}

	inline static int32_t get_offset_of_Entity_46() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___Entity_46)); }
	inline GameObject_t2056972088 * get_Entity_46() const { return ___Entity_46; }
	inline GameObject_t2056972088 ** get_address_of_Entity_46() { return &___Entity_46; }
	inline void set_Entity_46(GameObject_t2056972088 * value)
	{
		___Entity_46 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_46), value);
	}

	inline static int32_t get_offset_of_EndBattleBtn_47() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___EndBattleBtn_47)); }
	inline GameObject_t2056972088 * get_EndBattleBtn_47() const { return ___EndBattleBtn_47; }
	inline GameObject_t2056972088 ** get_address_of_EndBattleBtn_47() { return &___EndBattleBtn_47; }
	inline void set_EndBattleBtn_47(GameObject_t2056972088 * value)
	{
		___EndBattleBtn_47 = value;
		Il2CppCodeGenWriteBarrier((&___EndBattleBtn_47), value);
	}

	inline static int32_t get_offset_of_InGameUpgradePanel_48() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___InGameUpgradePanel_48)); }
	inline GameObject_t2056972088 * get_InGameUpgradePanel_48() const { return ___InGameUpgradePanel_48; }
	inline GameObject_t2056972088 ** get_address_of_InGameUpgradePanel_48() { return &___InGameUpgradePanel_48; }
	inline void set_InGameUpgradePanel_48(GameObject_t2056972088 * value)
	{
		___InGameUpgradePanel_48 = value;
		Il2CppCodeGenWriteBarrier((&___InGameUpgradePanel_48), value);
	}

	inline static int32_t get_offset_of_UpgradeMap_49() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___UpgradeMap_49)); }
	inline GameObject_t2056972088 * get_UpgradeMap_49() const { return ___UpgradeMap_49; }
	inline GameObject_t2056972088 ** get_address_of_UpgradeMap_49() { return &___UpgradeMap_49; }
	inline void set_UpgradeMap_49(GameObject_t2056972088 * value)
	{
		___UpgradeMap_49 = value;
		Il2CppCodeGenWriteBarrier((&___UpgradeMap_49), value);
	}

	inline static int32_t get_offset_of_VirusUpBtn_50() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___VirusUpBtn_50)); }
	inline GameObject_t2056972088 * get_VirusUpBtn_50() const { return ___VirusUpBtn_50; }
	inline GameObject_t2056972088 ** get_address_of_VirusUpBtn_50() { return &___VirusUpBtn_50; }
	inline void set_VirusUpBtn_50(GameObject_t2056972088 * value)
	{
		___VirusUpBtn_50 = value;
		Il2CppCodeGenWriteBarrier((&___VirusUpBtn_50), value);
	}

	inline static int32_t get_offset_of_HumanUpBtn_51() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___HumanUpBtn_51)); }
	inline GameObject_t2056972088 * get_HumanUpBtn_51() const { return ___HumanUpBtn_51; }
	inline GameObject_t2056972088 ** get_address_of_HumanUpBtn_51() { return &___HumanUpBtn_51; }
	inline void set_HumanUpBtn_51(GameObject_t2056972088 * value)
	{
		___HumanUpBtn_51 = value;
		Il2CppCodeGenWriteBarrier((&___HumanUpBtn_51), value);
	}

	inline static int32_t get_offset_of_ZombieUpBtn_52() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___ZombieUpBtn_52)); }
	inline GameObject_t2056972088 * get_ZombieUpBtn_52() const { return ___ZombieUpBtn_52; }
	inline GameObject_t2056972088 ** get_address_of_ZombieUpBtn_52() { return &___ZombieUpBtn_52; }
	inline void set_ZombieUpBtn_52(GameObject_t2056972088 * value)
	{
		___ZombieUpBtn_52 = value;
		Il2CppCodeGenWriteBarrier((&___ZombieUpBtn_52), value);
	}

	inline static int32_t get_offset_of_EvolutionBtn_53() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___EvolutionBtn_53)); }
	inline GameObject_t2056972088 * get_EvolutionBtn_53() const { return ___EvolutionBtn_53; }
	inline GameObject_t2056972088 ** get_address_of_EvolutionBtn_53() { return &___EvolutionBtn_53; }
	inline void set_EvolutionBtn_53(GameObject_t2056972088 * value)
	{
		___EvolutionBtn_53 = value;
		Il2CppCodeGenWriteBarrier((&___EvolutionBtn_53), value);
	}

	inline static int32_t get_offset_of_SpeedBtn_54() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___SpeedBtn_54)); }
	inline GameObject_t2056972088 * get_SpeedBtn_54() const { return ___SpeedBtn_54; }
	inline GameObject_t2056972088 ** get_address_of_SpeedBtn_54() { return &___SpeedBtn_54; }
	inline void set_SpeedBtn_54(GameObject_t2056972088 * value)
	{
		___SpeedBtn_54 = value;
		Il2CppCodeGenWriteBarrier((&___SpeedBtn_54), value);
	}

	inline static int32_t get_offset_of_strategyCloseBtn_55() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___strategyCloseBtn_55)); }
	inline GameObject_t2056972088 * get_strategyCloseBtn_55() const { return ___strategyCloseBtn_55; }
	inline GameObject_t2056972088 ** get_address_of_strategyCloseBtn_55() { return &___strategyCloseBtn_55; }
	inline void set_strategyCloseBtn_55(GameObject_t2056972088 * value)
	{
		___strategyCloseBtn_55 = value;
		Il2CppCodeGenWriteBarrier((&___strategyCloseBtn_55), value);
	}

	inline static int32_t get_offset_of_MedicineBar_56() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___MedicineBar_56)); }
	inline GameObject_t2056972088 * get_MedicineBar_56() const { return ___MedicineBar_56; }
	inline GameObject_t2056972088 ** get_address_of_MedicineBar_56() { return &___MedicineBar_56; }
	inline void set_MedicineBar_56(GameObject_t2056972088 * value)
	{
		___MedicineBar_56 = value;
		Il2CppCodeGenWriteBarrier((&___MedicineBar_56), value);
	}

	inline static int32_t get_offset_of_VirusProBar_57() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___VirusProBar_57)); }
	inline GameObject_t2056972088 * get_VirusProBar_57() const { return ___VirusProBar_57; }
	inline GameObject_t2056972088 ** get_address_of_VirusProBar_57() { return &___VirusProBar_57; }
	inline void set_VirusProBar_57(GameObject_t2056972088 * value)
	{
		___VirusProBar_57 = value;
		Il2CppCodeGenWriteBarrier((&___VirusProBar_57), value);
	}

	inline static int32_t get_offset_of_HumanProBar_58() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___HumanProBar_58)); }
	inline GameObject_t2056972088 * get_HumanProBar_58() const { return ___HumanProBar_58; }
	inline GameObject_t2056972088 ** get_address_of_HumanProBar_58() { return &___HumanProBar_58; }
	inline void set_HumanProBar_58(GameObject_t2056972088 * value)
	{
		___HumanProBar_58 = value;
		Il2CppCodeGenWriteBarrier((&___HumanProBar_58), value);
	}

	inline static int32_t get_offset_of_ZombieProBar_59() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___ZombieProBar_59)); }
	inline GameObject_t2056972088 * get_ZombieProBar_59() const { return ___ZombieProBar_59; }
	inline GameObject_t2056972088 ** get_address_of_ZombieProBar_59() { return &___ZombieProBar_59; }
	inline void set_ZombieProBar_59(GameObject_t2056972088 * value)
	{
		___ZombieProBar_59 = value;
		Il2CppCodeGenWriteBarrier((&___ZombieProBar_59), value);
	}

	inline static int32_t get_offset_of_Timer_60() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___Timer_60)); }
	inline UILabel_t2887975127 * get_Timer_60() const { return ___Timer_60; }
	inline UILabel_t2887975127 ** get_address_of_Timer_60() { return &___Timer_60; }
	inline void set_Timer_60(UILabel_t2887975127 * value)
	{
		___Timer_60 = value;
		Il2CppCodeGenWriteBarrier((&___Timer_60), value);
	}

	inline static int32_t get_offset_of_Label_EvolutionDes_61() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___Label_EvolutionDes_61)); }
	inline UILabel_t2887975127 * get_Label_EvolutionDes_61() const { return ___Label_EvolutionDes_61; }
	inline UILabel_t2887975127 ** get_address_of_Label_EvolutionDes_61() { return &___Label_EvolutionDes_61; }
	inline void set_Label_EvolutionDes_61(UILabel_t2887975127 * value)
	{
		___Label_EvolutionDes_61 = value;
		Il2CppCodeGenWriteBarrier((&___Label_EvolutionDes_61), value);
	}

	inline static int32_t get_offset_of_LabelEvolutionCost_62() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___LabelEvolutionCost_62)); }
	inline UILabel_t2887975127 * get_LabelEvolutionCost_62() const { return ___LabelEvolutionCost_62; }
	inline UILabel_t2887975127 ** get_address_of_LabelEvolutionCost_62() { return &___LabelEvolutionCost_62; }
	inline void set_LabelEvolutionCost_62(UILabel_t2887975127 * value)
	{
		___LabelEvolutionCost_62 = value;
		Il2CppCodeGenWriteBarrier((&___LabelEvolutionCost_62), value);
	}

	inline static int32_t get_offset_of_LabelSpeed_63() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___LabelSpeed_63)); }
	inline UILabel_t2887975127 * get_LabelSpeed_63() const { return ___LabelSpeed_63; }
	inline UILabel_t2887975127 ** get_address_of_LabelSpeed_63() { return &___LabelSpeed_63; }
	inline void set_LabelSpeed_63(UILabel_t2887975127 * value)
	{
		___LabelSpeed_63 = value;
		Il2CppCodeGenWriteBarrier((&___LabelSpeed_63), value);
	}

	inline static int32_t get_offset_of_MediName_64() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___MediName_64)); }
	inline UILabel_t2887975127 * get_MediName_64() const { return ___MediName_64; }
	inline UILabel_t2887975127 ** get_address_of_MediName_64() { return &___MediName_64; }
	inline void set_MediName_64(UILabel_t2887975127 * value)
	{
		___MediName_64 = value;
		Il2CppCodeGenWriteBarrier((&___MediName_64), value);
	}

	inline static int32_t get_offset_of_MediPercent_65() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___MediPercent_65)); }
	inline UILabel_t2887975127 * get_MediPercent_65() const { return ___MediPercent_65; }
	inline UILabel_t2887975127 ** get_address_of_MediPercent_65() { return &___MediPercent_65; }
	inline void set_MediPercent_65(UILabel_t2887975127 * value)
	{
		___MediPercent_65 = value;
		Il2CppCodeGenWriteBarrier((&___MediPercent_65), value);
	}

	inline static int32_t get_offset_of_HumanModel_66() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___HumanModel_66)); }
	inline GameObject_t2056972088 * get_HumanModel_66() const { return ___HumanModel_66; }
	inline GameObject_t2056972088 ** get_address_of_HumanModel_66() { return &___HumanModel_66; }
	inline void set_HumanModel_66(GameObject_t2056972088 * value)
	{
		___HumanModel_66 = value;
		Il2CppCodeGenWriteBarrier((&___HumanModel_66), value);
	}

	inline static int32_t get_offset_of_ZombieModel_67() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___ZombieModel_67)); }
	inline GameObject_t2056972088 * get_ZombieModel_67() const { return ___ZombieModel_67; }
	inline GameObject_t2056972088 ** get_address_of_ZombieModel_67() { return &___ZombieModel_67; }
	inline void set_ZombieModel_67(GameObject_t2056972088 * value)
	{
		___ZombieModel_67 = value;
		Il2CppCodeGenWriteBarrier((&___ZombieModel_67), value);
	}

	inline static int32_t get_offset_of_LabelStrategyPoint_68() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___LabelStrategyPoint_68)); }
	inline GameObject_t2056972088 * get_LabelStrategyPoint_68() const { return ___LabelStrategyPoint_68; }
	inline GameObject_t2056972088 ** get_address_of_LabelStrategyPoint_68() { return &___LabelStrategyPoint_68; }
	inline void set_LabelStrategyPoint_68(GameObject_t2056972088 * value)
	{
		___LabelStrategyPoint_68 = value;
		Il2CppCodeGenWriteBarrier((&___LabelStrategyPoint_68), value);
	}

	inline static int32_t get_offset_of_GeneModel_69() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___GeneModel_69)); }
	inline GameObject_t2056972088 * get_GeneModel_69() const { return ___GeneModel_69; }
	inline GameObject_t2056972088 ** get_address_of_GeneModel_69() { return &___GeneModel_69; }
	inline void set_GeneModel_69(GameObject_t2056972088 * value)
	{
		___GeneModel_69 = value;
		Il2CppCodeGenWriteBarrier((&___GeneModel_69), value);
	}

	inline static int32_t get_offset_of_GeneSelected_70() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___GeneSelected_70)); }
	inline Gene_t3376799142 * get_GeneSelected_70() const { return ___GeneSelected_70; }
	inline Gene_t3376799142 ** get_address_of_GeneSelected_70() { return &___GeneSelected_70; }
	inline void set_GeneSelected_70(Gene_t3376799142 * value)
	{
		___GeneSelected_70 = value;
		Il2CppCodeGenWriteBarrier((&___GeneSelected_70), value);
	}

	inline static int32_t get_offset_of_LabelSP_71() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___LabelSP_71)); }
	inline GameObject_t2056972088 * get_LabelSP_71() const { return ___LabelSP_71; }
	inline GameObject_t2056972088 ** get_address_of_LabelSP_71() { return &___LabelSP_71; }
	inline void set_LabelSP_71(GameObject_t2056972088 * value)
	{
		___LabelSP_71 = value;
		Il2CppCodeGenWriteBarrier((&___LabelSP_71), value);
	}

	inline static int32_t get_offset_of_SP_Bubble_72() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___SP_Bubble_72)); }
	inline GameObject_t2056972088 * get_SP_Bubble_72() const { return ___SP_Bubble_72; }
	inline GameObject_t2056972088 ** get_address_of_SP_Bubble_72() { return &___SP_Bubble_72; }
	inline void set_SP_Bubble_72(GameObject_t2056972088 * value)
	{
		___SP_Bubble_72 = value;
		Il2CppCodeGenWriteBarrier((&___SP_Bubble_72), value);
	}

	inline static int32_t get_offset_of_CurVirus_73() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___CurVirus_73)); }
	inline Virus_t2139413478 * get_CurVirus_73() const { return ___CurVirus_73; }
	inline Virus_t2139413478 ** get_address_of_CurVirus_73() { return &___CurVirus_73; }
	inline void set_CurVirus_73(Virus_t2139413478 * value)
	{
		___CurVirus_73 = value;
		Il2CppCodeGenWriteBarrier((&___CurVirus_73), value);
	}

	inline static int32_t get_offset_of_UpgradedGenes_Virus_74() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___UpgradedGenes_Virus_74)); }
	inline ArrayList_t825968487 * get_UpgradedGenes_Virus_74() const { return ___UpgradedGenes_Virus_74; }
	inline ArrayList_t825968487 ** get_address_of_UpgradedGenes_Virus_74() { return &___UpgradedGenes_Virus_74; }
	inline void set_UpgradedGenes_Virus_74(ArrayList_t825968487 * value)
	{
		___UpgradedGenes_Virus_74 = value;
		Il2CppCodeGenWriteBarrier((&___UpgradedGenes_Virus_74), value);
	}

	inline static int32_t get_offset_of_UpgradedGenes_Human_75() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___UpgradedGenes_Human_75)); }
	inline ArrayList_t825968487 * get_UpgradedGenes_Human_75() const { return ___UpgradedGenes_Human_75; }
	inline ArrayList_t825968487 ** get_address_of_UpgradedGenes_Human_75() { return &___UpgradedGenes_Human_75; }
	inline void set_UpgradedGenes_Human_75(ArrayList_t825968487 * value)
	{
		___UpgradedGenes_Human_75 = value;
		Il2CppCodeGenWriteBarrier((&___UpgradedGenes_Human_75), value);
	}

	inline static int32_t get_offset_of_UpgradedGenes_Zombie_76() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___UpgradedGenes_Zombie_76)); }
	inline ArrayList_t825968487 * get_UpgradedGenes_Zombie_76() const { return ___UpgradedGenes_Zombie_76; }
	inline ArrayList_t825968487 ** get_address_of_UpgradedGenes_Zombie_76() { return &___UpgradedGenes_Zombie_76; }
	inline void set_UpgradedGenes_Zombie_76(ArrayList_t825968487 * value)
	{
		___UpgradedGenes_Zombie_76 = value;
		Il2CppCodeGenWriteBarrier((&___UpgradedGenes_Zombie_76), value);
	}

	inline static int32_t get_offset_of_VirusArray_77() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___VirusArray_77)); }
	inline ArrayList_t825968487 * get_VirusArray_77() const { return ___VirusArray_77; }
	inline ArrayList_t825968487 ** get_address_of_VirusArray_77() { return &___VirusArray_77; }
	inline void set_VirusArray_77(ArrayList_t825968487 * value)
	{
		___VirusArray_77 = value;
		Il2CppCodeGenWriteBarrier((&___VirusArray_77), value);
	}

	inline static int32_t get_offset_of_HumanArray_78() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___HumanArray_78)); }
	inline ArrayList_t825968487 * get_HumanArray_78() const { return ___HumanArray_78; }
	inline ArrayList_t825968487 ** get_address_of_HumanArray_78() { return &___HumanArray_78; }
	inline void set_HumanArray_78(ArrayList_t825968487 * value)
	{
		___HumanArray_78 = value;
		Il2CppCodeGenWriteBarrier((&___HumanArray_78), value);
	}

	inline static int32_t get_offset_of_ZombieArray_79() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___ZombieArray_79)); }
	inline ArrayList_t825968487 * get_ZombieArray_79() const { return ___ZombieArray_79; }
	inline ArrayList_t825968487 ** get_address_of_ZombieArray_79() { return &___ZombieArray_79; }
	inline void set_ZombieArray_79(ArrayList_t825968487 * value)
	{
		___ZombieArray_79 = value;
		Il2CppCodeGenWriteBarrier((&___ZombieArray_79), value);
	}

	inline static int32_t get_offset_of_VirusGeneArray_80() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___VirusGeneArray_80)); }
	inline ArrayList_t825968487 * get_VirusGeneArray_80() const { return ___VirusGeneArray_80; }
	inline ArrayList_t825968487 ** get_address_of_VirusGeneArray_80() { return &___VirusGeneArray_80; }
	inline void set_VirusGeneArray_80(ArrayList_t825968487 * value)
	{
		___VirusGeneArray_80 = value;
		Il2CppCodeGenWriteBarrier((&___VirusGeneArray_80), value);
	}

	inline static int32_t get_offset_of_HumanGeneArray_81() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___HumanGeneArray_81)); }
	inline ArrayList_t825968487 * get_HumanGeneArray_81() const { return ___HumanGeneArray_81; }
	inline ArrayList_t825968487 ** get_address_of_HumanGeneArray_81() { return &___HumanGeneArray_81; }
	inline void set_HumanGeneArray_81(ArrayList_t825968487 * value)
	{
		___HumanGeneArray_81 = value;
		Il2CppCodeGenWriteBarrier((&___HumanGeneArray_81), value);
	}

	inline static int32_t get_offset_of_ZombieGeneArray_82() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___ZombieGeneArray_82)); }
	inline ArrayList_t825968487 * get_ZombieGeneArray_82() const { return ___ZombieGeneArray_82; }
	inline ArrayList_t825968487 ** get_address_of_ZombieGeneArray_82() { return &___ZombieGeneArray_82; }
	inline void set_ZombieGeneArray_82(ArrayList_t825968487 * value)
	{
		___ZombieGeneArray_82 = value;
		Il2CppCodeGenWriteBarrier((&___ZombieGeneArray_82), value);
	}

	inline static int32_t get_offset_of_InfectedHumans_83() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___InfectedHumans_83)); }
	inline ArrayList_t825968487 * get_InfectedHumans_83() const { return ___InfectedHumans_83; }
	inline ArrayList_t825968487 ** get_address_of_InfectedHumans_83() { return &___InfectedHumans_83; }
	inline void set_InfectedHumans_83(ArrayList_t825968487 * value)
	{
		___InfectedHumans_83 = value;
		Il2CppCodeGenWriteBarrier((&___InfectedHumans_83), value);
	}

	inline static int32_t get_offset_of_UnInfectedHumans_84() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___UnInfectedHumans_84)); }
	inline ArrayList_t825968487 * get_UnInfectedHumans_84() const { return ___UnInfectedHumans_84; }
	inline ArrayList_t825968487 ** get_address_of_UnInfectedHumans_84() { return &___UnInfectedHumans_84; }
	inline void set_UnInfectedHumans_84(ArrayList_t825968487 * value)
	{
		___UnInfectedHumans_84 = value;
		Il2CppCodeGenWriteBarrier((&___UnInfectedHumans_84), value);
	}

	inline static int32_t get_offset_of_InfectionList_85() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___InfectionList_85)); }
	inline List_1_t2318151775 * get_InfectionList_85() const { return ___InfectionList_85; }
	inline List_1_t2318151775 ** get_address_of_InfectionList_85() { return &___InfectionList_85; }
	inline void set_InfectionList_85(List_1_t2318151775 * value)
	{
		___InfectionList_85 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionList_85), value);
	}

	inline static int32_t get_offset_of_DamageList_86() { return static_cast<int32_t>(offsetof(Battle_C_t1550641137, ___DamageList_86)); }
	inline List_1_t4159906741 * get_DamageList_86() const { return ___DamageList_86; }
	inline List_1_t4159906741 ** get_address_of_DamageList_86() { return &___DamageList_86; }
	inline void set_DamageList_86(List_1_t4159906741 * value)
	{
		___DamageList_86 = value;
		Il2CppCodeGenWriteBarrier((&___DamageList_86), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BATTLE_C_T1550641137_H
#ifndef CAMPAIGN_C_T169215256_H
#define CAMPAIGN_C_T169215256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Campaign_C
struct  Campaign_C_t169215256  : public MonoBehaviour_t3253360915
{
public:
	// UnityEngine.GameObject Campaign_C::CampainScroll
	GameObject_t2056972088 * ___CampainScroll_2;
	// UnityEngine.GameObject Campaign_C::prefabs_Cell
	GameObject_t2056972088 * ___prefabs_Cell_3;
	// UnityEngine.GameObject Campaign_C::Campaign_BackBtn
	GameObject_t2056972088 * ___Campaign_BackBtn_4;
	// UnityEngine.GameObject Campaign_C::CampainGrid
	GameObject_t2056972088 * ___CampainGrid_5;
	// System.Int32 Campaign_C::VirusID
	int32_t ___VirusID_6;
	// ObjectPool`2<UnityEngine.GameObject,Mission_Sheet> Campaign_C::OP
	ObjectPool_2_t4159799458 * ___OP_7;
	// System.Int32 Campaign_C::prefabscellChildrenNum
	int32_t ___prefabscellChildrenNum_8;

public:
	inline static int32_t get_offset_of_CampainScroll_2() { return static_cast<int32_t>(offsetof(Campaign_C_t169215256, ___CampainScroll_2)); }
	inline GameObject_t2056972088 * get_CampainScroll_2() const { return ___CampainScroll_2; }
	inline GameObject_t2056972088 ** get_address_of_CampainScroll_2() { return &___CampainScroll_2; }
	inline void set_CampainScroll_2(GameObject_t2056972088 * value)
	{
		___CampainScroll_2 = value;
		Il2CppCodeGenWriteBarrier((&___CampainScroll_2), value);
	}

	inline static int32_t get_offset_of_prefabs_Cell_3() { return static_cast<int32_t>(offsetof(Campaign_C_t169215256, ___prefabs_Cell_3)); }
	inline GameObject_t2056972088 * get_prefabs_Cell_3() const { return ___prefabs_Cell_3; }
	inline GameObject_t2056972088 ** get_address_of_prefabs_Cell_3() { return &___prefabs_Cell_3; }
	inline void set_prefabs_Cell_3(GameObject_t2056972088 * value)
	{
		___prefabs_Cell_3 = value;
		Il2CppCodeGenWriteBarrier((&___prefabs_Cell_3), value);
	}

	inline static int32_t get_offset_of_Campaign_BackBtn_4() { return static_cast<int32_t>(offsetof(Campaign_C_t169215256, ___Campaign_BackBtn_4)); }
	inline GameObject_t2056972088 * get_Campaign_BackBtn_4() const { return ___Campaign_BackBtn_4; }
	inline GameObject_t2056972088 ** get_address_of_Campaign_BackBtn_4() { return &___Campaign_BackBtn_4; }
	inline void set_Campaign_BackBtn_4(GameObject_t2056972088 * value)
	{
		___Campaign_BackBtn_4 = value;
		Il2CppCodeGenWriteBarrier((&___Campaign_BackBtn_4), value);
	}

	inline static int32_t get_offset_of_CampainGrid_5() { return static_cast<int32_t>(offsetof(Campaign_C_t169215256, ___CampainGrid_5)); }
	inline GameObject_t2056972088 * get_CampainGrid_5() const { return ___CampainGrid_5; }
	inline GameObject_t2056972088 ** get_address_of_CampainGrid_5() { return &___CampainGrid_5; }
	inline void set_CampainGrid_5(GameObject_t2056972088 * value)
	{
		___CampainGrid_5 = value;
		Il2CppCodeGenWriteBarrier((&___CampainGrid_5), value);
	}

	inline static int32_t get_offset_of_VirusID_6() { return static_cast<int32_t>(offsetof(Campaign_C_t169215256, ___VirusID_6)); }
	inline int32_t get_VirusID_6() const { return ___VirusID_6; }
	inline int32_t* get_address_of_VirusID_6() { return &___VirusID_6; }
	inline void set_VirusID_6(int32_t value)
	{
		___VirusID_6 = value;
	}

	inline static int32_t get_offset_of_OP_7() { return static_cast<int32_t>(offsetof(Campaign_C_t169215256, ___OP_7)); }
	inline ObjectPool_2_t4159799458 * get_OP_7() const { return ___OP_7; }
	inline ObjectPool_2_t4159799458 ** get_address_of_OP_7() { return &___OP_7; }
	inline void set_OP_7(ObjectPool_2_t4159799458 * value)
	{
		___OP_7 = value;
		Il2CppCodeGenWriteBarrier((&___OP_7), value);
	}

	inline static int32_t get_offset_of_prefabscellChildrenNum_8() { return static_cast<int32_t>(offsetof(Campaign_C_t169215256, ___prefabscellChildrenNum_8)); }
	inline int32_t get_prefabscellChildrenNum_8() const { return ___prefabscellChildrenNum_8; }
	inline int32_t* get_address_of_prefabscellChildrenNum_8() { return &___prefabscellChildrenNum_8; }
	inline void set_prefabscellChildrenNum_8(int32_t value)
	{
		___prefabscellChildrenNum_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMPAIGN_C_T169215256_H
#ifndef CAMPAIGNCELL_T45365558_H
#define CAMPAIGNCELL_T45365558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CampaignCell
struct  CampaignCell_t45365558  : public MonoBehaviour_t3253360915
{
public:
	// UILabel CampaignCell::LabelMissionName
	UILabel_t2887975127 * ___LabelMissionName_2;
	// UILabel CampaignCell::LabelMissionFlag
	UILabel_t2887975127 * ___LabelMissionFlag_3;
	// CampaignCell CampaignCell::cell
	CampaignCell_t45365558 * ___cell_4;
	// System.Int32 CampaignCell::CellID
	int32_t ___CellID_5;

public:
	inline static int32_t get_offset_of_LabelMissionName_2() { return static_cast<int32_t>(offsetof(CampaignCell_t45365558, ___LabelMissionName_2)); }
	inline UILabel_t2887975127 * get_LabelMissionName_2() const { return ___LabelMissionName_2; }
	inline UILabel_t2887975127 ** get_address_of_LabelMissionName_2() { return &___LabelMissionName_2; }
	inline void set_LabelMissionName_2(UILabel_t2887975127 * value)
	{
		___LabelMissionName_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelMissionName_2), value);
	}

	inline static int32_t get_offset_of_LabelMissionFlag_3() { return static_cast<int32_t>(offsetof(CampaignCell_t45365558, ___LabelMissionFlag_3)); }
	inline UILabel_t2887975127 * get_LabelMissionFlag_3() const { return ___LabelMissionFlag_3; }
	inline UILabel_t2887975127 ** get_address_of_LabelMissionFlag_3() { return &___LabelMissionFlag_3; }
	inline void set_LabelMissionFlag_3(UILabel_t2887975127 * value)
	{
		___LabelMissionFlag_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelMissionFlag_3), value);
	}

	inline static int32_t get_offset_of_cell_4() { return static_cast<int32_t>(offsetof(CampaignCell_t45365558, ___cell_4)); }
	inline CampaignCell_t45365558 * get_cell_4() const { return ___cell_4; }
	inline CampaignCell_t45365558 ** get_address_of_cell_4() { return &___cell_4; }
	inline void set_cell_4(CampaignCell_t45365558 * value)
	{
		___cell_4 = value;
		Il2CppCodeGenWriteBarrier((&___cell_4), value);
	}

	inline static int32_t get_offset_of_CellID_5() { return static_cast<int32_t>(offsetof(CampaignCell_t45365558, ___CellID_5)); }
	inline int32_t get_CellID_5() const { return ___CellID_5; }
	inline int32_t* get_address_of_CellID_5() { return &___CellID_5; }
	inline void set_CellID_5(int32_t value)
	{
		___CellID_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMPAIGNCELL_T45365558_H
#ifndef CAMPAIGNRESULT_C_T36214144_H
#define CAMPAIGNRESULT_C_T36214144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CampaignResult_C
struct  CampaignResult_C_t36214144  : public MonoBehaviour_t3253360915
{
public:
	// UILabel CampaignResult_C::LabelFlag
	UILabel_t2887975127 * ___LabelFlag_2;
	// UILabel CampaignResult_C::LabelTime
	UILabel_t2887975127 * ___LabelTime_3;
	// UILabel CampaignResult_C::LabelInfect
	UILabel_t2887975127 * ___LabelInfect_4;
	// UILabel CampaignResult_C::LabelInfectKill
	UILabel_t2887975127 * ___LabelInfectKill_5;
	// UILabel CampaignResult_C::LabelZombieKill
	UILabel_t2887975127 * ___LabelZombieKill_6;
	// UILabel CampaignResult_C::LabelFlagResult
	UILabel_t2887975127 * ___LabelFlagResult_7;
	// UILabel CampaignResult_C::LabelTimeSecond
	UILabel_t2887975127 * ___LabelTimeSecond_8;
	// UILabel CampaignResult_C::LabelInfectNum
	UILabel_t2887975127 * ___LabelInfectNum_9;
	// UILabel CampaignResult_C::LabelInfectKillNum
	UILabel_t2887975127 * ___LabelInfectKillNum_10;
	// UILabel CampaignResult_C::LabelZombieKillNum
	UILabel_t2887975127 * ___LabelZombieKillNum_11;
	// UILabel CampaignResult_C::LabelGold
	UILabel_t2887975127 * ___LabelGold_12;
	// UILabel CampaignResult_C::LabelGem
	UILabel_t2887975127 * ___LabelGem_13;
	// System.Boolean CampaignResult_C::ResultFlag
	bool ___ResultFlag_14;
	// System.Int32 CampaignResult_C::TimeSecond
	int32_t ___TimeSecond_15;
	// System.Int32 CampaignResult_C::InfectNum
	int32_t ___InfectNum_16;
	// System.Int32 CampaignResult_C::InfectKillNum
	int32_t ___InfectKillNum_17;
	// System.Int32 CampaignResult_C::ZombieKillNum
	int32_t ___ZombieKillNum_18;
	// UnityEngine.GameObject CampaignResult_C::CampaignResult_BackBtn
	GameObject_t2056972088 * ___CampaignResult_BackBtn_19;
	// System.Collections.Generic.List`1<Loot_Sheet> CampaignResult_C::loot
	List_1_t3784497398 * ___loot_20;

public:
	inline static int32_t get_offset_of_LabelFlag_2() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelFlag_2)); }
	inline UILabel_t2887975127 * get_LabelFlag_2() const { return ___LabelFlag_2; }
	inline UILabel_t2887975127 ** get_address_of_LabelFlag_2() { return &___LabelFlag_2; }
	inline void set_LabelFlag_2(UILabel_t2887975127 * value)
	{
		___LabelFlag_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelFlag_2), value);
	}

	inline static int32_t get_offset_of_LabelTime_3() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelTime_3)); }
	inline UILabel_t2887975127 * get_LabelTime_3() const { return ___LabelTime_3; }
	inline UILabel_t2887975127 ** get_address_of_LabelTime_3() { return &___LabelTime_3; }
	inline void set_LabelTime_3(UILabel_t2887975127 * value)
	{
		___LabelTime_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelTime_3), value);
	}

	inline static int32_t get_offset_of_LabelInfect_4() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelInfect_4)); }
	inline UILabel_t2887975127 * get_LabelInfect_4() const { return ___LabelInfect_4; }
	inline UILabel_t2887975127 ** get_address_of_LabelInfect_4() { return &___LabelInfect_4; }
	inline void set_LabelInfect_4(UILabel_t2887975127 * value)
	{
		___LabelInfect_4 = value;
		Il2CppCodeGenWriteBarrier((&___LabelInfect_4), value);
	}

	inline static int32_t get_offset_of_LabelInfectKill_5() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelInfectKill_5)); }
	inline UILabel_t2887975127 * get_LabelInfectKill_5() const { return ___LabelInfectKill_5; }
	inline UILabel_t2887975127 ** get_address_of_LabelInfectKill_5() { return &___LabelInfectKill_5; }
	inline void set_LabelInfectKill_5(UILabel_t2887975127 * value)
	{
		___LabelInfectKill_5 = value;
		Il2CppCodeGenWriteBarrier((&___LabelInfectKill_5), value);
	}

	inline static int32_t get_offset_of_LabelZombieKill_6() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelZombieKill_6)); }
	inline UILabel_t2887975127 * get_LabelZombieKill_6() const { return ___LabelZombieKill_6; }
	inline UILabel_t2887975127 ** get_address_of_LabelZombieKill_6() { return &___LabelZombieKill_6; }
	inline void set_LabelZombieKill_6(UILabel_t2887975127 * value)
	{
		___LabelZombieKill_6 = value;
		Il2CppCodeGenWriteBarrier((&___LabelZombieKill_6), value);
	}

	inline static int32_t get_offset_of_LabelFlagResult_7() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelFlagResult_7)); }
	inline UILabel_t2887975127 * get_LabelFlagResult_7() const { return ___LabelFlagResult_7; }
	inline UILabel_t2887975127 ** get_address_of_LabelFlagResult_7() { return &___LabelFlagResult_7; }
	inline void set_LabelFlagResult_7(UILabel_t2887975127 * value)
	{
		___LabelFlagResult_7 = value;
		Il2CppCodeGenWriteBarrier((&___LabelFlagResult_7), value);
	}

	inline static int32_t get_offset_of_LabelTimeSecond_8() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelTimeSecond_8)); }
	inline UILabel_t2887975127 * get_LabelTimeSecond_8() const { return ___LabelTimeSecond_8; }
	inline UILabel_t2887975127 ** get_address_of_LabelTimeSecond_8() { return &___LabelTimeSecond_8; }
	inline void set_LabelTimeSecond_8(UILabel_t2887975127 * value)
	{
		___LabelTimeSecond_8 = value;
		Il2CppCodeGenWriteBarrier((&___LabelTimeSecond_8), value);
	}

	inline static int32_t get_offset_of_LabelInfectNum_9() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelInfectNum_9)); }
	inline UILabel_t2887975127 * get_LabelInfectNum_9() const { return ___LabelInfectNum_9; }
	inline UILabel_t2887975127 ** get_address_of_LabelInfectNum_9() { return &___LabelInfectNum_9; }
	inline void set_LabelInfectNum_9(UILabel_t2887975127 * value)
	{
		___LabelInfectNum_9 = value;
		Il2CppCodeGenWriteBarrier((&___LabelInfectNum_9), value);
	}

	inline static int32_t get_offset_of_LabelInfectKillNum_10() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelInfectKillNum_10)); }
	inline UILabel_t2887975127 * get_LabelInfectKillNum_10() const { return ___LabelInfectKillNum_10; }
	inline UILabel_t2887975127 ** get_address_of_LabelInfectKillNum_10() { return &___LabelInfectKillNum_10; }
	inline void set_LabelInfectKillNum_10(UILabel_t2887975127 * value)
	{
		___LabelInfectKillNum_10 = value;
		Il2CppCodeGenWriteBarrier((&___LabelInfectKillNum_10), value);
	}

	inline static int32_t get_offset_of_LabelZombieKillNum_11() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelZombieKillNum_11)); }
	inline UILabel_t2887975127 * get_LabelZombieKillNum_11() const { return ___LabelZombieKillNum_11; }
	inline UILabel_t2887975127 ** get_address_of_LabelZombieKillNum_11() { return &___LabelZombieKillNum_11; }
	inline void set_LabelZombieKillNum_11(UILabel_t2887975127 * value)
	{
		___LabelZombieKillNum_11 = value;
		Il2CppCodeGenWriteBarrier((&___LabelZombieKillNum_11), value);
	}

	inline static int32_t get_offset_of_LabelGold_12() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelGold_12)); }
	inline UILabel_t2887975127 * get_LabelGold_12() const { return ___LabelGold_12; }
	inline UILabel_t2887975127 ** get_address_of_LabelGold_12() { return &___LabelGold_12; }
	inline void set_LabelGold_12(UILabel_t2887975127 * value)
	{
		___LabelGold_12 = value;
		Il2CppCodeGenWriteBarrier((&___LabelGold_12), value);
	}

	inline static int32_t get_offset_of_LabelGem_13() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___LabelGem_13)); }
	inline UILabel_t2887975127 * get_LabelGem_13() const { return ___LabelGem_13; }
	inline UILabel_t2887975127 ** get_address_of_LabelGem_13() { return &___LabelGem_13; }
	inline void set_LabelGem_13(UILabel_t2887975127 * value)
	{
		___LabelGem_13 = value;
		Il2CppCodeGenWriteBarrier((&___LabelGem_13), value);
	}

	inline static int32_t get_offset_of_ResultFlag_14() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___ResultFlag_14)); }
	inline bool get_ResultFlag_14() const { return ___ResultFlag_14; }
	inline bool* get_address_of_ResultFlag_14() { return &___ResultFlag_14; }
	inline void set_ResultFlag_14(bool value)
	{
		___ResultFlag_14 = value;
	}

	inline static int32_t get_offset_of_TimeSecond_15() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___TimeSecond_15)); }
	inline int32_t get_TimeSecond_15() const { return ___TimeSecond_15; }
	inline int32_t* get_address_of_TimeSecond_15() { return &___TimeSecond_15; }
	inline void set_TimeSecond_15(int32_t value)
	{
		___TimeSecond_15 = value;
	}

	inline static int32_t get_offset_of_InfectNum_16() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___InfectNum_16)); }
	inline int32_t get_InfectNum_16() const { return ___InfectNum_16; }
	inline int32_t* get_address_of_InfectNum_16() { return &___InfectNum_16; }
	inline void set_InfectNum_16(int32_t value)
	{
		___InfectNum_16 = value;
	}

	inline static int32_t get_offset_of_InfectKillNum_17() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___InfectKillNum_17)); }
	inline int32_t get_InfectKillNum_17() const { return ___InfectKillNum_17; }
	inline int32_t* get_address_of_InfectKillNum_17() { return &___InfectKillNum_17; }
	inline void set_InfectKillNum_17(int32_t value)
	{
		___InfectKillNum_17 = value;
	}

	inline static int32_t get_offset_of_ZombieKillNum_18() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___ZombieKillNum_18)); }
	inline int32_t get_ZombieKillNum_18() const { return ___ZombieKillNum_18; }
	inline int32_t* get_address_of_ZombieKillNum_18() { return &___ZombieKillNum_18; }
	inline void set_ZombieKillNum_18(int32_t value)
	{
		___ZombieKillNum_18 = value;
	}

	inline static int32_t get_offset_of_CampaignResult_BackBtn_19() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___CampaignResult_BackBtn_19)); }
	inline GameObject_t2056972088 * get_CampaignResult_BackBtn_19() const { return ___CampaignResult_BackBtn_19; }
	inline GameObject_t2056972088 ** get_address_of_CampaignResult_BackBtn_19() { return &___CampaignResult_BackBtn_19; }
	inline void set_CampaignResult_BackBtn_19(GameObject_t2056972088 * value)
	{
		___CampaignResult_BackBtn_19 = value;
		Il2CppCodeGenWriteBarrier((&___CampaignResult_BackBtn_19), value);
	}

	inline static int32_t get_offset_of_loot_20() { return static_cast<int32_t>(offsetof(CampaignResult_C_t36214144, ___loot_20)); }
	inline List_1_t3784497398 * get_loot_20() const { return ___loot_20; }
	inline List_1_t3784497398 ** get_address_of_loot_20() { return &___loot_20; }
	inline void set_loot_20(List_1_t3784497398 * value)
	{
		___loot_20 = value;
		Il2CppCodeGenWriteBarrier((&___loot_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMPAIGNRESULT_C_T36214144_H
#ifndef DATAMANAGER_T4280950329_H
#define DATAMANAGER_T4280950329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DataManager
struct  DataManager_t4280950329  : public MonoBehaviour_t3253360915
{
public:

public:
};

struct DataManager_t4280950329_StaticFields
{
public:
	// System.Collections.Generic.List`1<BattleEvent_Sheet> DataManager::BattleEvent_Package
	List_1_t4195956191 * ___BattleEvent_Package_2;
	// System.Collections.Generic.List`1<BattleStrategy_Sheet> DataManager::BattleStrategy_Strategy
	List_1_t839680537 * ___BattleStrategy_Strategy_3;
	// System.Collections.Generic.List`1<DNAUp_Sheet> DataManager::DNAUp_Virus
	List_1_t2797138469 * ___DNAUp_Virus_4;
	// System.Collections.Generic.List`1<DNAUp_Sheet> DataManager::DNAUp_Human
	List_1_t2797138469 * ___DNAUp_Human_5;
	// System.Collections.Generic.List`1<DNAUp_Sheet> DataManager::DNAUp_Zombie
	List_1_t2797138469 * ___DNAUp_Zombie_6;
	// System.Collections.Generic.List`1<IAP_Sheet> DataManager::IAP_Item
	List_1_t968420256 * ___IAP_Item_7;
	// System.Collections.Generic.List`1<InGameEvent_Sheet> DataManager::InGameEvent_InGameEvents
	List_1_t4098374998 * ___InGameEvent_InGameEvents_8;
	// System.Collections.Generic.List`1<Language_Sheet> DataManager::Language_Localization
	List_1_t724391834 * ___Language_Localization_9;
	// System.Collections.Generic.List`1<Loot_Sheet> DataManager::Loot_Package
	List_1_t3784497398 * ___Loot_Package_10;
	// System.Collections.Generic.List`1<Mission_Sheet> DataManager::Mission_Parameter
	List_1_t1468252243 * ___Mission_Parameter_11;
	// System.Collections.Generic.List`1<Virus_Sheet> DataManager::Model_Virus
	List_1_t321889037 * ___Model_Virus_12;
	// System.Collections.Generic.List`1<Human_Sheet> DataManager::Model_Human
	List_1_t3846689979 * ___Model_Human_13;
	// System.Collections.Generic.List`1<Zombie_Sheet> DataManager::Model_Zombie
	List_1_t2496957332 * ___Model_Zombie_14;
	// System.Collections.Generic.List`1<SpecialAbility_Sheet> DataManager::SpecialAbility_Ability
	List_1_t1017664130 * ___SpecialAbility_Ability_15;
	// System.Collections.Generic.List`1<UnlockMission_Sheet> DataManager::Unlock_UnlockMission
	List_1_t3831305819 * ___Unlock_UnlockMission_16;
	// System.Collections.Generic.List`1<Infection_Sheet> DataManager::InfectionSheet
	List_1_t2318151775 * ___InfectionSheet_17;
	// System.Collections.Generic.List`1<Damage_Sheet> DataManager::DamageSheet
	List_1_t4159906741 * ___DamageSheet_18;
	// System.String[] DataManager::assetNames
	StringU5BU5D_t4060475322* ___assetNames_19;

public:
	inline static int32_t get_offset_of_BattleEvent_Package_2() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___BattleEvent_Package_2)); }
	inline List_1_t4195956191 * get_BattleEvent_Package_2() const { return ___BattleEvent_Package_2; }
	inline List_1_t4195956191 ** get_address_of_BattleEvent_Package_2() { return &___BattleEvent_Package_2; }
	inline void set_BattleEvent_Package_2(List_1_t4195956191 * value)
	{
		___BattleEvent_Package_2 = value;
		Il2CppCodeGenWriteBarrier((&___BattleEvent_Package_2), value);
	}

	inline static int32_t get_offset_of_BattleStrategy_Strategy_3() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___BattleStrategy_Strategy_3)); }
	inline List_1_t839680537 * get_BattleStrategy_Strategy_3() const { return ___BattleStrategy_Strategy_3; }
	inline List_1_t839680537 ** get_address_of_BattleStrategy_Strategy_3() { return &___BattleStrategy_Strategy_3; }
	inline void set_BattleStrategy_Strategy_3(List_1_t839680537 * value)
	{
		___BattleStrategy_Strategy_3 = value;
		Il2CppCodeGenWriteBarrier((&___BattleStrategy_Strategy_3), value);
	}

	inline static int32_t get_offset_of_DNAUp_Virus_4() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___DNAUp_Virus_4)); }
	inline List_1_t2797138469 * get_DNAUp_Virus_4() const { return ___DNAUp_Virus_4; }
	inline List_1_t2797138469 ** get_address_of_DNAUp_Virus_4() { return &___DNAUp_Virus_4; }
	inline void set_DNAUp_Virus_4(List_1_t2797138469 * value)
	{
		___DNAUp_Virus_4 = value;
		Il2CppCodeGenWriteBarrier((&___DNAUp_Virus_4), value);
	}

	inline static int32_t get_offset_of_DNAUp_Human_5() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___DNAUp_Human_5)); }
	inline List_1_t2797138469 * get_DNAUp_Human_5() const { return ___DNAUp_Human_5; }
	inline List_1_t2797138469 ** get_address_of_DNAUp_Human_5() { return &___DNAUp_Human_5; }
	inline void set_DNAUp_Human_5(List_1_t2797138469 * value)
	{
		___DNAUp_Human_5 = value;
		Il2CppCodeGenWriteBarrier((&___DNAUp_Human_5), value);
	}

	inline static int32_t get_offset_of_DNAUp_Zombie_6() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___DNAUp_Zombie_6)); }
	inline List_1_t2797138469 * get_DNAUp_Zombie_6() const { return ___DNAUp_Zombie_6; }
	inline List_1_t2797138469 ** get_address_of_DNAUp_Zombie_6() { return &___DNAUp_Zombie_6; }
	inline void set_DNAUp_Zombie_6(List_1_t2797138469 * value)
	{
		___DNAUp_Zombie_6 = value;
		Il2CppCodeGenWriteBarrier((&___DNAUp_Zombie_6), value);
	}

	inline static int32_t get_offset_of_IAP_Item_7() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___IAP_Item_7)); }
	inline List_1_t968420256 * get_IAP_Item_7() const { return ___IAP_Item_7; }
	inline List_1_t968420256 ** get_address_of_IAP_Item_7() { return &___IAP_Item_7; }
	inline void set_IAP_Item_7(List_1_t968420256 * value)
	{
		___IAP_Item_7 = value;
		Il2CppCodeGenWriteBarrier((&___IAP_Item_7), value);
	}

	inline static int32_t get_offset_of_InGameEvent_InGameEvents_8() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___InGameEvent_InGameEvents_8)); }
	inline List_1_t4098374998 * get_InGameEvent_InGameEvents_8() const { return ___InGameEvent_InGameEvents_8; }
	inline List_1_t4098374998 ** get_address_of_InGameEvent_InGameEvents_8() { return &___InGameEvent_InGameEvents_8; }
	inline void set_InGameEvent_InGameEvents_8(List_1_t4098374998 * value)
	{
		___InGameEvent_InGameEvents_8 = value;
		Il2CppCodeGenWriteBarrier((&___InGameEvent_InGameEvents_8), value);
	}

	inline static int32_t get_offset_of_Language_Localization_9() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___Language_Localization_9)); }
	inline List_1_t724391834 * get_Language_Localization_9() const { return ___Language_Localization_9; }
	inline List_1_t724391834 ** get_address_of_Language_Localization_9() { return &___Language_Localization_9; }
	inline void set_Language_Localization_9(List_1_t724391834 * value)
	{
		___Language_Localization_9 = value;
		Il2CppCodeGenWriteBarrier((&___Language_Localization_9), value);
	}

	inline static int32_t get_offset_of_Loot_Package_10() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___Loot_Package_10)); }
	inline List_1_t3784497398 * get_Loot_Package_10() const { return ___Loot_Package_10; }
	inline List_1_t3784497398 ** get_address_of_Loot_Package_10() { return &___Loot_Package_10; }
	inline void set_Loot_Package_10(List_1_t3784497398 * value)
	{
		___Loot_Package_10 = value;
		Il2CppCodeGenWriteBarrier((&___Loot_Package_10), value);
	}

	inline static int32_t get_offset_of_Mission_Parameter_11() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___Mission_Parameter_11)); }
	inline List_1_t1468252243 * get_Mission_Parameter_11() const { return ___Mission_Parameter_11; }
	inline List_1_t1468252243 ** get_address_of_Mission_Parameter_11() { return &___Mission_Parameter_11; }
	inline void set_Mission_Parameter_11(List_1_t1468252243 * value)
	{
		___Mission_Parameter_11 = value;
		Il2CppCodeGenWriteBarrier((&___Mission_Parameter_11), value);
	}

	inline static int32_t get_offset_of_Model_Virus_12() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___Model_Virus_12)); }
	inline List_1_t321889037 * get_Model_Virus_12() const { return ___Model_Virus_12; }
	inline List_1_t321889037 ** get_address_of_Model_Virus_12() { return &___Model_Virus_12; }
	inline void set_Model_Virus_12(List_1_t321889037 * value)
	{
		___Model_Virus_12 = value;
		Il2CppCodeGenWriteBarrier((&___Model_Virus_12), value);
	}

	inline static int32_t get_offset_of_Model_Human_13() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___Model_Human_13)); }
	inline List_1_t3846689979 * get_Model_Human_13() const { return ___Model_Human_13; }
	inline List_1_t3846689979 ** get_address_of_Model_Human_13() { return &___Model_Human_13; }
	inline void set_Model_Human_13(List_1_t3846689979 * value)
	{
		___Model_Human_13 = value;
		Il2CppCodeGenWriteBarrier((&___Model_Human_13), value);
	}

	inline static int32_t get_offset_of_Model_Zombie_14() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___Model_Zombie_14)); }
	inline List_1_t2496957332 * get_Model_Zombie_14() const { return ___Model_Zombie_14; }
	inline List_1_t2496957332 ** get_address_of_Model_Zombie_14() { return &___Model_Zombie_14; }
	inline void set_Model_Zombie_14(List_1_t2496957332 * value)
	{
		___Model_Zombie_14 = value;
		Il2CppCodeGenWriteBarrier((&___Model_Zombie_14), value);
	}

	inline static int32_t get_offset_of_SpecialAbility_Ability_15() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___SpecialAbility_Ability_15)); }
	inline List_1_t1017664130 * get_SpecialAbility_Ability_15() const { return ___SpecialAbility_Ability_15; }
	inline List_1_t1017664130 ** get_address_of_SpecialAbility_Ability_15() { return &___SpecialAbility_Ability_15; }
	inline void set_SpecialAbility_Ability_15(List_1_t1017664130 * value)
	{
		___SpecialAbility_Ability_15 = value;
		Il2CppCodeGenWriteBarrier((&___SpecialAbility_Ability_15), value);
	}

	inline static int32_t get_offset_of_Unlock_UnlockMission_16() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___Unlock_UnlockMission_16)); }
	inline List_1_t3831305819 * get_Unlock_UnlockMission_16() const { return ___Unlock_UnlockMission_16; }
	inline List_1_t3831305819 ** get_address_of_Unlock_UnlockMission_16() { return &___Unlock_UnlockMission_16; }
	inline void set_Unlock_UnlockMission_16(List_1_t3831305819 * value)
	{
		___Unlock_UnlockMission_16 = value;
		Il2CppCodeGenWriteBarrier((&___Unlock_UnlockMission_16), value);
	}

	inline static int32_t get_offset_of_InfectionSheet_17() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___InfectionSheet_17)); }
	inline List_1_t2318151775 * get_InfectionSheet_17() const { return ___InfectionSheet_17; }
	inline List_1_t2318151775 ** get_address_of_InfectionSheet_17() { return &___InfectionSheet_17; }
	inline void set_InfectionSheet_17(List_1_t2318151775 * value)
	{
		___InfectionSheet_17 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionSheet_17), value);
	}

	inline static int32_t get_offset_of_DamageSheet_18() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___DamageSheet_18)); }
	inline List_1_t4159906741 * get_DamageSheet_18() const { return ___DamageSheet_18; }
	inline List_1_t4159906741 ** get_address_of_DamageSheet_18() { return &___DamageSheet_18; }
	inline void set_DamageSheet_18(List_1_t4159906741 * value)
	{
		___DamageSheet_18 = value;
		Il2CppCodeGenWriteBarrier((&___DamageSheet_18), value);
	}

	inline static int32_t get_offset_of_assetNames_19() { return static_cast<int32_t>(offsetof(DataManager_t4280950329_StaticFields, ___assetNames_19)); }
	inline StringU5BU5D_t4060475322* get_assetNames_19() const { return ___assetNames_19; }
	inline StringU5BU5D_t4060475322** get_address_of_assetNames_19() { return &___assetNames_19; }
	inline void set_assetNames_19(StringU5BU5D_t4060475322* value)
	{
		___assetNames_19 = value;
		Il2CppCodeGenWriteBarrier((&___assetNames_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAMANAGER_T4280950329_H
#ifndef DNA_C_T3786028506_H
#define DNA_C_T3786028506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DNA_C
struct  DNA_C_t3786028506  : public MonoBehaviour_t3253360915
{
public:
	// UnityEngine.GameObject DNA_C::prefabs_Cell
	GameObject_t2056972088 * ___prefabs_Cell_2;
	// UILabel DNA_C::LabelGold
	UILabel_t2887975127 * ___LabelGold_3;
	// UILabel DNA_C::LabelGem
	UILabel_t2887975127 * ___LabelGem_4;
	// UnityEngine.GameObject DNA_C::DNAScroll
	GameObject_t2056972088 * ___DNAScroll_5;
	// UnityEngine.GameObject DNA_C::DNAGrid
	GameObject_t2056972088 * ___DNAGrid_6;
	// UnityEngine.GameObject DNA_C::DNA_BackBtn
	GameObject_t2056972088 * ___DNA_BackBtn_7;
	// UnityEngine.GameObject DNA_C::DNA_VirusBtn
	GameObject_t2056972088 * ___DNA_VirusBtn_8;
	// UnityEngine.GameObject DNA_C::DNA_HumanBtn
	GameObject_t2056972088 * ___DNA_HumanBtn_9;
	// UnityEngine.GameObject DNA_C::DNA_ZombieBtn
	GameObject_t2056972088 * ___DNA_ZombieBtn_10;
	// ObjectPool`2<UnityEngine.GameObject,DNAUp_Sheet> DNA_C::OP
	ObjectPool_2_t1193718388 * ___OP_11;
	// System.Int32 DNA_C::prefabscellChildrenNum
	int32_t ___prefabscellChildrenNum_12;

public:
	inline static int32_t get_offset_of_prefabs_Cell_2() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___prefabs_Cell_2)); }
	inline GameObject_t2056972088 * get_prefabs_Cell_2() const { return ___prefabs_Cell_2; }
	inline GameObject_t2056972088 ** get_address_of_prefabs_Cell_2() { return &___prefabs_Cell_2; }
	inline void set_prefabs_Cell_2(GameObject_t2056972088 * value)
	{
		___prefabs_Cell_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefabs_Cell_2), value);
	}

	inline static int32_t get_offset_of_LabelGold_3() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___LabelGold_3)); }
	inline UILabel_t2887975127 * get_LabelGold_3() const { return ___LabelGold_3; }
	inline UILabel_t2887975127 ** get_address_of_LabelGold_3() { return &___LabelGold_3; }
	inline void set_LabelGold_3(UILabel_t2887975127 * value)
	{
		___LabelGold_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelGold_3), value);
	}

	inline static int32_t get_offset_of_LabelGem_4() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___LabelGem_4)); }
	inline UILabel_t2887975127 * get_LabelGem_4() const { return ___LabelGem_4; }
	inline UILabel_t2887975127 ** get_address_of_LabelGem_4() { return &___LabelGem_4; }
	inline void set_LabelGem_4(UILabel_t2887975127 * value)
	{
		___LabelGem_4 = value;
		Il2CppCodeGenWriteBarrier((&___LabelGem_4), value);
	}

	inline static int32_t get_offset_of_DNAScroll_5() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___DNAScroll_5)); }
	inline GameObject_t2056972088 * get_DNAScroll_5() const { return ___DNAScroll_5; }
	inline GameObject_t2056972088 ** get_address_of_DNAScroll_5() { return &___DNAScroll_5; }
	inline void set_DNAScroll_5(GameObject_t2056972088 * value)
	{
		___DNAScroll_5 = value;
		Il2CppCodeGenWriteBarrier((&___DNAScroll_5), value);
	}

	inline static int32_t get_offset_of_DNAGrid_6() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___DNAGrid_6)); }
	inline GameObject_t2056972088 * get_DNAGrid_6() const { return ___DNAGrid_6; }
	inline GameObject_t2056972088 ** get_address_of_DNAGrid_6() { return &___DNAGrid_6; }
	inline void set_DNAGrid_6(GameObject_t2056972088 * value)
	{
		___DNAGrid_6 = value;
		Il2CppCodeGenWriteBarrier((&___DNAGrid_6), value);
	}

	inline static int32_t get_offset_of_DNA_BackBtn_7() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___DNA_BackBtn_7)); }
	inline GameObject_t2056972088 * get_DNA_BackBtn_7() const { return ___DNA_BackBtn_7; }
	inline GameObject_t2056972088 ** get_address_of_DNA_BackBtn_7() { return &___DNA_BackBtn_7; }
	inline void set_DNA_BackBtn_7(GameObject_t2056972088 * value)
	{
		___DNA_BackBtn_7 = value;
		Il2CppCodeGenWriteBarrier((&___DNA_BackBtn_7), value);
	}

	inline static int32_t get_offset_of_DNA_VirusBtn_8() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___DNA_VirusBtn_8)); }
	inline GameObject_t2056972088 * get_DNA_VirusBtn_8() const { return ___DNA_VirusBtn_8; }
	inline GameObject_t2056972088 ** get_address_of_DNA_VirusBtn_8() { return &___DNA_VirusBtn_8; }
	inline void set_DNA_VirusBtn_8(GameObject_t2056972088 * value)
	{
		___DNA_VirusBtn_8 = value;
		Il2CppCodeGenWriteBarrier((&___DNA_VirusBtn_8), value);
	}

	inline static int32_t get_offset_of_DNA_HumanBtn_9() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___DNA_HumanBtn_9)); }
	inline GameObject_t2056972088 * get_DNA_HumanBtn_9() const { return ___DNA_HumanBtn_9; }
	inline GameObject_t2056972088 ** get_address_of_DNA_HumanBtn_9() { return &___DNA_HumanBtn_9; }
	inline void set_DNA_HumanBtn_9(GameObject_t2056972088 * value)
	{
		___DNA_HumanBtn_9 = value;
		Il2CppCodeGenWriteBarrier((&___DNA_HumanBtn_9), value);
	}

	inline static int32_t get_offset_of_DNA_ZombieBtn_10() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___DNA_ZombieBtn_10)); }
	inline GameObject_t2056972088 * get_DNA_ZombieBtn_10() const { return ___DNA_ZombieBtn_10; }
	inline GameObject_t2056972088 ** get_address_of_DNA_ZombieBtn_10() { return &___DNA_ZombieBtn_10; }
	inline void set_DNA_ZombieBtn_10(GameObject_t2056972088 * value)
	{
		___DNA_ZombieBtn_10 = value;
		Il2CppCodeGenWriteBarrier((&___DNA_ZombieBtn_10), value);
	}

	inline static int32_t get_offset_of_OP_11() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___OP_11)); }
	inline ObjectPool_2_t1193718388 * get_OP_11() const { return ___OP_11; }
	inline ObjectPool_2_t1193718388 ** get_address_of_OP_11() { return &___OP_11; }
	inline void set_OP_11(ObjectPool_2_t1193718388 * value)
	{
		___OP_11 = value;
		Il2CppCodeGenWriteBarrier((&___OP_11), value);
	}

	inline static int32_t get_offset_of_prefabscellChildrenNum_12() { return static_cast<int32_t>(offsetof(DNA_C_t3786028506, ___prefabscellChildrenNum_12)); }
	inline int32_t get_prefabscellChildrenNum_12() const { return ___prefabscellChildrenNum_12; }
	inline int32_t* get_address_of_prefabscellChildrenNum_12() { return &___prefabscellChildrenNum_12; }
	inline void set_prefabscellChildrenNum_12(int32_t value)
	{
		___prefabscellChildrenNum_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNA_C_T3786028506_H
#ifndef SINGLETON_T2273088361_H
#define SINGLETON_T2273088361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton
struct  Singleton_t2273088361  : public MonoBehaviour_t3253360915
{
public:

public:
};

struct Singleton_t2273088361_StaticFields
{
public:
	// UnityEngine.GameObject Singleton::m_Container
	GameObject_t2056972088 * ___m_Container_2;
	// System.String Singleton::m_Name
	String_t* ___m_Name_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Singleton::m_SingletonMap
	Dictionary_2_t3274352129 * ___m_SingletonMap_4;
	// System.Boolean Singleton::m_IsDestroying
	bool ___m_IsDestroying_5;

public:
	inline static int32_t get_offset_of_m_Container_2() { return static_cast<int32_t>(offsetof(Singleton_t2273088361_StaticFields, ___m_Container_2)); }
	inline GameObject_t2056972088 * get_m_Container_2() const { return ___m_Container_2; }
	inline GameObject_t2056972088 ** get_address_of_m_Container_2() { return &___m_Container_2; }
	inline void set_m_Container_2(GameObject_t2056972088 * value)
	{
		___m_Container_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Container_2), value);
	}

	inline static int32_t get_offset_of_m_Name_3() { return static_cast<int32_t>(offsetof(Singleton_t2273088361_StaticFields, ___m_Name_3)); }
	inline String_t* get_m_Name_3() const { return ___m_Name_3; }
	inline String_t** get_address_of_m_Name_3() { return &___m_Name_3; }
	inline void set_m_Name_3(String_t* value)
	{
		___m_Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_3), value);
	}

	inline static int32_t get_offset_of_m_SingletonMap_4() { return static_cast<int32_t>(offsetof(Singleton_t2273088361_StaticFields, ___m_SingletonMap_4)); }
	inline Dictionary_2_t3274352129 * get_m_SingletonMap_4() const { return ___m_SingletonMap_4; }
	inline Dictionary_2_t3274352129 ** get_address_of_m_SingletonMap_4() { return &___m_SingletonMap_4; }
	inline void set_m_SingletonMap_4(Dictionary_2_t3274352129 * value)
	{
		___m_SingletonMap_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SingletonMap_4), value);
	}

	inline static int32_t get_offset_of_m_IsDestroying_5() { return static_cast<int32_t>(offsetof(Singleton_t2273088361_StaticFields, ___m_IsDestroying_5)); }
	inline bool get_m_IsDestroying_5() const { return ___m_IsDestroying_5; }
	inline bool* get_address_of_m_IsDestroying_5() { return &___m_IsDestroying_5; }
	inline void set_m_IsDestroying_5(bool value)
	{
		___m_IsDestroying_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_T2273088361_H
#ifndef DNACELL_T1104279301_H
#define DNACELL_T1104279301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DNACell
struct  DNACell_t1104279301  : public MonoBehaviour_t3253360915
{
public:
	// UILabel DNACell::Name
	UILabel_t2887975127 * ___Name_2;
	// UILabel DNACell::Lv
	UILabel_t2887975127 * ___Lv_3;
	// UILabel DNACell::Des
	UILabel_t2887975127 * ___Des_4;
	// UILabel DNACell::GLabel
	UILabel_t2887975127 * ___GLabel_5;
	// UILabel DNACell::CLabel
	UILabel_t2887975127 * ___CLabel_6;
	// UnityEngine.GameObject DNACell::GoldUpgradeBtn
	GameObject_t2056972088 * ___GoldUpgradeBtn_7;
	// UnityEngine.GameObject DNACell::GemUpgradeBtn
	GameObject_t2056972088 * ___GemUpgradeBtn_8;
	// DNA_C DNACell::DNA_C
	DNA_C_t3786028506 * ___DNA_C_9;
	// System.Int32 DNACell::CellID
	int32_t ___CellID_10;
	// DNAType DNACell::CellType
	int32_t ___CellType_11;

public:
	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___Name_2)); }
	inline UILabel_t2887975127 * get_Name_2() const { return ___Name_2; }
	inline UILabel_t2887975127 ** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(UILabel_t2887975127 * value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Lv_3() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___Lv_3)); }
	inline UILabel_t2887975127 * get_Lv_3() const { return ___Lv_3; }
	inline UILabel_t2887975127 ** get_address_of_Lv_3() { return &___Lv_3; }
	inline void set_Lv_3(UILabel_t2887975127 * value)
	{
		___Lv_3 = value;
		Il2CppCodeGenWriteBarrier((&___Lv_3), value);
	}

	inline static int32_t get_offset_of_Des_4() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___Des_4)); }
	inline UILabel_t2887975127 * get_Des_4() const { return ___Des_4; }
	inline UILabel_t2887975127 ** get_address_of_Des_4() { return &___Des_4; }
	inline void set_Des_4(UILabel_t2887975127 * value)
	{
		___Des_4 = value;
		Il2CppCodeGenWriteBarrier((&___Des_4), value);
	}

	inline static int32_t get_offset_of_GLabel_5() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___GLabel_5)); }
	inline UILabel_t2887975127 * get_GLabel_5() const { return ___GLabel_5; }
	inline UILabel_t2887975127 ** get_address_of_GLabel_5() { return &___GLabel_5; }
	inline void set_GLabel_5(UILabel_t2887975127 * value)
	{
		___GLabel_5 = value;
		Il2CppCodeGenWriteBarrier((&___GLabel_5), value);
	}

	inline static int32_t get_offset_of_CLabel_6() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___CLabel_6)); }
	inline UILabel_t2887975127 * get_CLabel_6() const { return ___CLabel_6; }
	inline UILabel_t2887975127 ** get_address_of_CLabel_6() { return &___CLabel_6; }
	inline void set_CLabel_6(UILabel_t2887975127 * value)
	{
		___CLabel_6 = value;
		Il2CppCodeGenWriteBarrier((&___CLabel_6), value);
	}

	inline static int32_t get_offset_of_GoldUpgradeBtn_7() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___GoldUpgradeBtn_7)); }
	inline GameObject_t2056972088 * get_GoldUpgradeBtn_7() const { return ___GoldUpgradeBtn_7; }
	inline GameObject_t2056972088 ** get_address_of_GoldUpgradeBtn_7() { return &___GoldUpgradeBtn_7; }
	inline void set_GoldUpgradeBtn_7(GameObject_t2056972088 * value)
	{
		___GoldUpgradeBtn_7 = value;
		Il2CppCodeGenWriteBarrier((&___GoldUpgradeBtn_7), value);
	}

	inline static int32_t get_offset_of_GemUpgradeBtn_8() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___GemUpgradeBtn_8)); }
	inline GameObject_t2056972088 * get_GemUpgradeBtn_8() const { return ___GemUpgradeBtn_8; }
	inline GameObject_t2056972088 ** get_address_of_GemUpgradeBtn_8() { return &___GemUpgradeBtn_8; }
	inline void set_GemUpgradeBtn_8(GameObject_t2056972088 * value)
	{
		___GemUpgradeBtn_8 = value;
		Il2CppCodeGenWriteBarrier((&___GemUpgradeBtn_8), value);
	}

	inline static int32_t get_offset_of_DNA_C_9() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___DNA_C_9)); }
	inline DNA_C_t3786028506 * get_DNA_C_9() const { return ___DNA_C_9; }
	inline DNA_C_t3786028506 ** get_address_of_DNA_C_9() { return &___DNA_C_9; }
	inline void set_DNA_C_9(DNA_C_t3786028506 * value)
	{
		___DNA_C_9 = value;
		Il2CppCodeGenWriteBarrier((&___DNA_C_9), value);
	}

	inline static int32_t get_offset_of_CellID_10() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___CellID_10)); }
	inline int32_t get_CellID_10() const { return ___CellID_10; }
	inline int32_t* get_address_of_CellID_10() { return &___CellID_10; }
	inline void set_CellID_10(int32_t value)
	{
		___CellID_10 = value;
	}

	inline static int32_t get_offset_of_CellType_11() { return static_cast<int32_t>(offsetof(DNACell_t1104279301, ___CellType_11)); }
	inline int32_t get_CellType_11() const { return ___CellType_11; }
	inline int32_t* get_address_of_CellType_11() { return &___CellType_11; }
	inline void set_CellType_11(int32_t value)
	{
		___CellType_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNACELL_T1104279301_H
#ifndef GAMEMANAGER_T3065462933_H
#define GAMEMANAGER_T3065462933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t3065462933  : public MonoBehaviour_t3253360915
{
public:

public:
};

struct GameManager_t3065462933_StaticFields
{
public:
	// User GameManager::user
	User_t1595548040 * ___user_11;
	// System.String GameManager::FilePathName
	String_t* ___FilePathName_12;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> GameManager::UIS
	Dictionary_2_t2975915519 * ___UIS_13;
	// UnityEngine.GameObject GameManager::Battle
	GameObject_t2056972088 * ___Battle_14;
	// Battle_C GameManager::BC
	Battle_C_t1550641137 * ___BC_15;
	// System.Int32 GameManager::StandardWidth
	int32_t ___StandardWidth_16;
	// System.Int32 GameManager::StandardHeight
	int32_t ___StandardHeight_17;

public:
	inline static int32_t get_offset_of_user_11() { return static_cast<int32_t>(offsetof(GameManager_t3065462933_StaticFields, ___user_11)); }
	inline User_t1595548040 * get_user_11() const { return ___user_11; }
	inline User_t1595548040 ** get_address_of_user_11() { return &___user_11; }
	inline void set_user_11(User_t1595548040 * value)
	{
		___user_11 = value;
		Il2CppCodeGenWriteBarrier((&___user_11), value);
	}

	inline static int32_t get_offset_of_FilePathName_12() { return static_cast<int32_t>(offsetof(GameManager_t3065462933_StaticFields, ___FilePathName_12)); }
	inline String_t* get_FilePathName_12() const { return ___FilePathName_12; }
	inline String_t** get_address_of_FilePathName_12() { return &___FilePathName_12; }
	inline void set_FilePathName_12(String_t* value)
	{
		___FilePathName_12 = value;
		Il2CppCodeGenWriteBarrier((&___FilePathName_12), value);
	}

	inline static int32_t get_offset_of_UIS_13() { return static_cast<int32_t>(offsetof(GameManager_t3065462933_StaticFields, ___UIS_13)); }
	inline Dictionary_2_t2975915519 * get_UIS_13() const { return ___UIS_13; }
	inline Dictionary_2_t2975915519 ** get_address_of_UIS_13() { return &___UIS_13; }
	inline void set_UIS_13(Dictionary_2_t2975915519 * value)
	{
		___UIS_13 = value;
		Il2CppCodeGenWriteBarrier((&___UIS_13), value);
	}

	inline static int32_t get_offset_of_Battle_14() { return static_cast<int32_t>(offsetof(GameManager_t3065462933_StaticFields, ___Battle_14)); }
	inline GameObject_t2056972088 * get_Battle_14() const { return ___Battle_14; }
	inline GameObject_t2056972088 ** get_address_of_Battle_14() { return &___Battle_14; }
	inline void set_Battle_14(GameObject_t2056972088 * value)
	{
		___Battle_14 = value;
		Il2CppCodeGenWriteBarrier((&___Battle_14), value);
	}

	inline static int32_t get_offset_of_BC_15() { return static_cast<int32_t>(offsetof(GameManager_t3065462933_StaticFields, ___BC_15)); }
	inline Battle_C_t1550641137 * get_BC_15() const { return ___BC_15; }
	inline Battle_C_t1550641137 ** get_address_of_BC_15() { return &___BC_15; }
	inline void set_BC_15(Battle_C_t1550641137 * value)
	{
		___BC_15 = value;
		Il2CppCodeGenWriteBarrier((&___BC_15), value);
	}

	inline static int32_t get_offset_of_StandardWidth_16() { return static_cast<int32_t>(offsetof(GameManager_t3065462933_StaticFields, ___StandardWidth_16)); }
	inline int32_t get_StandardWidth_16() const { return ___StandardWidth_16; }
	inline int32_t* get_address_of_StandardWidth_16() { return &___StandardWidth_16; }
	inline void set_StandardWidth_16(int32_t value)
	{
		___StandardWidth_16 = value;
	}

	inline static int32_t get_offset_of_StandardHeight_17() { return static_cast<int32_t>(offsetof(GameManager_t3065462933_StaticFields, ___StandardHeight_17)); }
	inline int32_t get_StandardHeight_17() const { return ___StandardHeight_17; }
	inline int32_t* get_address_of_StandardHeight_17() { return &___StandardHeight_17; }
	inline void set_StandardHeight_17(int32_t value)
	{
		___StandardHeight_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T3065462933_H
#ifndef GENE_T3376799142_H
#define GENE_T3376799142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gene
struct  Gene_t3376799142  : public MonoBehaviour_t3253360915
{
public:
	// System.String Gene::GeneID
	String_t* ___GeneID_6;
	// System.String Gene::StrategyID
	String_t* ___StrategyID_7;
	// System.String Gene::BoardID
	String_t* ___BoardID_8;
	// System.String Gene::EventID
	String_t* ___EventID_9;
	// System.Int32 Gene::Row
	int32_t ___Row_10;
	// System.Int32 Gene::Column
	int32_t ___Column_11;
	// System.String Gene::FP1
	String_t* ___FP1_12;
	// System.String Gene::FP2
	String_t* ___FP2_13;
	// System.Int32 Gene::UnlockCost_A
	int32_t ___UnlockCost_A_14;
	// System.Int32 Gene::UnlockCost_B
	int32_t ___UnlockCost_B_15;
	// UnityEngine.Vector3 Gene::Pos
	Vector3_t3199571211  ___Pos_16;
	// System.Boolean Gene::IsVisible
	bool ___IsVisible_17;
	// System.Boolean Gene::IsFatherUnlocked
	bool ___IsFatherUnlocked_18;
	// System.Boolean Gene::IsUpgradable
	bool ___IsUpgradable_19;
	// System.Boolean Gene::IsUpgraded
	bool ___IsUpgraded_20;
	// UnityEngine.GameObject Gene::EvolutionBtn
	GameObject_t2056972088 * ___EvolutionBtn_21;
	// Gene Gene::self
	Gene_t3376799142 * ___self_22;
	// UILabel Gene::LabelEvolutionCost
	UILabel_t2887975127 * ___LabelEvolutionCost_23;
	// UILabel Gene::Label_EvolutionDes
	UILabel_t2887975127 * ___Label_EvolutionDes_24;
	// Battle_C Gene::Battle
	Battle_C_t1550641137 * ___Battle_25;
	// System.Single Gene::oneSecondDeltaTime
	float ___oneSecondDeltaTime_26;
	// System.Single Gene::fiveSecondDeltaTime
	float ___fiveSecondDeltaTime_27;

public:
	inline static int32_t get_offset_of_GeneID_6() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___GeneID_6)); }
	inline String_t* get_GeneID_6() const { return ___GeneID_6; }
	inline String_t** get_address_of_GeneID_6() { return &___GeneID_6; }
	inline void set_GeneID_6(String_t* value)
	{
		___GeneID_6 = value;
		Il2CppCodeGenWriteBarrier((&___GeneID_6), value);
	}

	inline static int32_t get_offset_of_StrategyID_7() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___StrategyID_7)); }
	inline String_t* get_StrategyID_7() const { return ___StrategyID_7; }
	inline String_t** get_address_of_StrategyID_7() { return &___StrategyID_7; }
	inline void set_StrategyID_7(String_t* value)
	{
		___StrategyID_7 = value;
		Il2CppCodeGenWriteBarrier((&___StrategyID_7), value);
	}

	inline static int32_t get_offset_of_BoardID_8() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___BoardID_8)); }
	inline String_t* get_BoardID_8() const { return ___BoardID_8; }
	inline String_t** get_address_of_BoardID_8() { return &___BoardID_8; }
	inline void set_BoardID_8(String_t* value)
	{
		___BoardID_8 = value;
		Il2CppCodeGenWriteBarrier((&___BoardID_8), value);
	}

	inline static int32_t get_offset_of_EventID_9() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___EventID_9)); }
	inline String_t* get_EventID_9() const { return ___EventID_9; }
	inline String_t** get_address_of_EventID_9() { return &___EventID_9; }
	inline void set_EventID_9(String_t* value)
	{
		___EventID_9 = value;
		Il2CppCodeGenWriteBarrier((&___EventID_9), value);
	}

	inline static int32_t get_offset_of_Row_10() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___Row_10)); }
	inline int32_t get_Row_10() const { return ___Row_10; }
	inline int32_t* get_address_of_Row_10() { return &___Row_10; }
	inline void set_Row_10(int32_t value)
	{
		___Row_10 = value;
	}

	inline static int32_t get_offset_of_Column_11() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___Column_11)); }
	inline int32_t get_Column_11() const { return ___Column_11; }
	inline int32_t* get_address_of_Column_11() { return &___Column_11; }
	inline void set_Column_11(int32_t value)
	{
		___Column_11 = value;
	}

	inline static int32_t get_offset_of_FP1_12() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___FP1_12)); }
	inline String_t* get_FP1_12() const { return ___FP1_12; }
	inline String_t** get_address_of_FP1_12() { return &___FP1_12; }
	inline void set_FP1_12(String_t* value)
	{
		___FP1_12 = value;
		Il2CppCodeGenWriteBarrier((&___FP1_12), value);
	}

	inline static int32_t get_offset_of_FP2_13() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___FP2_13)); }
	inline String_t* get_FP2_13() const { return ___FP2_13; }
	inline String_t** get_address_of_FP2_13() { return &___FP2_13; }
	inline void set_FP2_13(String_t* value)
	{
		___FP2_13 = value;
		Il2CppCodeGenWriteBarrier((&___FP2_13), value);
	}

	inline static int32_t get_offset_of_UnlockCost_A_14() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___UnlockCost_A_14)); }
	inline int32_t get_UnlockCost_A_14() const { return ___UnlockCost_A_14; }
	inline int32_t* get_address_of_UnlockCost_A_14() { return &___UnlockCost_A_14; }
	inline void set_UnlockCost_A_14(int32_t value)
	{
		___UnlockCost_A_14 = value;
	}

	inline static int32_t get_offset_of_UnlockCost_B_15() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___UnlockCost_B_15)); }
	inline int32_t get_UnlockCost_B_15() const { return ___UnlockCost_B_15; }
	inline int32_t* get_address_of_UnlockCost_B_15() { return &___UnlockCost_B_15; }
	inline void set_UnlockCost_B_15(int32_t value)
	{
		___UnlockCost_B_15 = value;
	}

	inline static int32_t get_offset_of_Pos_16() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___Pos_16)); }
	inline Vector3_t3199571211  get_Pos_16() const { return ___Pos_16; }
	inline Vector3_t3199571211 * get_address_of_Pos_16() { return &___Pos_16; }
	inline void set_Pos_16(Vector3_t3199571211  value)
	{
		___Pos_16 = value;
	}

	inline static int32_t get_offset_of_IsVisible_17() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___IsVisible_17)); }
	inline bool get_IsVisible_17() const { return ___IsVisible_17; }
	inline bool* get_address_of_IsVisible_17() { return &___IsVisible_17; }
	inline void set_IsVisible_17(bool value)
	{
		___IsVisible_17 = value;
	}

	inline static int32_t get_offset_of_IsFatherUnlocked_18() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___IsFatherUnlocked_18)); }
	inline bool get_IsFatherUnlocked_18() const { return ___IsFatherUnlocked_18; }
	inline bool* get_address_of_IsFatherUnlocked_18() { return &___IsFatherUnlocked_18; }
	inline void set_IsFatherUnlocked_18(bool value)
	{
		___IsFatherUnlocked_18 = value;
	}

	inline static int32_t get_offset_of_IsUpgradable_19() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___IsUpgradable_19)); }
	inline bool get_IsUpgradable_19() const { return ___IsUpgradable_19; }
	inline bool* get_address_of_IsUpgradable_19() { return &___IsUpgradable_19; }
	inline void set_IsUpgradable_19(bool value)
	{
		___IsUpgradable_19 = value;
	}

	inline static int32_t get_offset_of_IsUpgraded_20() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___IsUpgraded_20)); }
	inline bool get_IsUpgraded_20() const { return ___IsUpgraded_20; }
	inline bool* get_address_of_IsUpgraded_20() { return &___IsUpgraded_20; }
	inline void set_IsUpgraded_20(bool value)
	{
		___IsUpgraded_20 = value;
	}

	inline static int32_t get_offset_of_EvolutionBtn_21() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___EvolutionBtn_21)); }
	inline GameObject_t2056972088 * get_EvolutionBtn_21() const { return ___EvolutionBtn_21; }
	inline GameObject_t2056972088 ** get_address_of_EvolutionBtn_21() { return &___EvolutionBtn_21; }
	inline void set_EvolutionBtn_21(GameObject_t2056972088 * value)
	{
		___EvolutionBtn_21 = value;
		Il2CppCodeGenWriteBarrier((&___EvolutionBtn_21), value);
	}

	inline static int32_t get_offset_of_self_22() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___self_22)); }
	inline Gene_t3376799142 * get_self_22() const { return ___self_22; }
	inline Gene_t3376799142 ** get_address_of_self_22() { return &___self_22; }
	inline void set_self_22(Gene_t3376799142 * value)
	{
		___self_22 = value;
		Il2CppCodeGenWriteBarrier((&___self_22), value);
	}

	inline static int32_t get_offset_of_LabelEvolutionCost_23() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___LabelEvolutionCost_23)); }
	inline UILabel_t2887975127 * get_LabelEvolutionCost_23() const { return ___LabelEvolutionCost_23; }
	inline UILabel_t2887975127 ** get_address_of_LabelEvolutionCost_23() { return &___LabelEvolutionCost_23; }
	inline void set_LabelEvolutionCost_23(UILabel_t2887975127 * value)
	{
		___LabelEvolutionCost_23 = value;
		Il2CppCodeGenWriteBarrier((&___LabelEvolutionCost_23), value);
	}

	inline static int32_t get_offset_of_Label_EvolutionDes_24() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___Label_EvolutionDes_24)); }
	inline UILabel_t2887975127 * get_Label_EvolutionDes_24() const { return ___Label_EvolutionDes_24; }
	inline UILabel_t2887975127 ** get_address_of_Label_EvolutionDes_24() { return &___Label_EvolutionDes_24; }
	inline void set_Label_EvolutionDes_24(UILabel_t2887975127 * value)
	{
		___Label_EvolutionDes_24 = value;
		Il2CppCodeGenWriteBarrier((&___Label_EvolutionDes_24), value);
	}

	inline static int32_t get_offset_of_Battle_25() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___Battle_25)); }
	inline Battle_C_t1550641137 * get_Battle_25() const { return ___Battle_25; }
	inline Battle_C_t1550641137 ** get_address_of_Battle_25() { return &___Battle_25; }
	inline void set_Battle_25(Battle_C_t1550641137 * value)
	{
		___Battle_25 = value;
		Il2CppCodeGenWriteBarrier((&___Battle_25), value);
	}

	inline static int32_t get_offset_of_oneSecondDeltaTime_26() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___oneSecondDeltaTime_26)); }
	inline float get_oneSecondDeltaTime_26() const { return ___oneSecondDeltaTime_26; }
	inline float* get_address_of_oneSecondDeltaTime_26() { return &___oneSecondDeltaTime_26; }
	inline void set_oneSecondDeltaTime_26(float value)
	{
		___oneSecondDeltaTime_26 = value;
	}

	inline static int32_t get_offset_of_fiveSecondDeltaTime_27() { return static_cast<int32_t>(offsetof(Gene_t3376799142, ___fiveSecondDeltaTime_27)); }
	inline float get_fiveSecondDeltaTime_27() const { return ___fiveSecondDeltaTime_27; }
	inline float* get_address_of_fiveSecondDeltaTime_27() { return &___fiveSecondDeltaTime_27; }
	inline void set_fiveSecondDeltaTime_27(float value)
	{
		___fiveSecondDeltaTime_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENE_T3376799142_H
#ifndef HUMAN_T1678386461_H
#define HUMAN_T1678386461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Human
struct  Human_t1678386461  : public MonoBehaviour_t3253360915
{
public:
	// System.Int32 Human::updateInterval
	int32_t ___updateInterval_16;
	// System.Int32 Human::HumanID
	int32_t ___HumanID_17;
	// System.Int32 Human::MaxHP
	int32_t ___MaxHP_18;
	// System.Int32 Human::MaxInfection
	int32_t ___MaxInfection_19;
	// System.Int32 Human::Atk
	int32_t ___Atk_20;
	// System.Int32 Human::Heal
	int32_t ___Heal_21;
	// System.Int32 Human::Def
	int32_t ___Def_22;
	// System.Int32 Human::Cure
	int32_t ___Cure_23;
	// System.Int32 Human::InfectShield
	int32_t ___InfectShield_24;
	// System.Int32 Human::InfectionAnti
	int32_t ___InfectionAnti_25;
	// System.Int32 Human::CommunicationAnti
	int32_t ___CommunicationAnti_26;
	// System.Int32 Human::HPHealing
	int32_t ___HPHealing_27;
	// System.String Human::Name
	String_t* ___Name_28;
	// System.String Human::Res
	String_t* ___Res_29;
	// System.String Human::SkillID
	String_t* ___SkillID_30;
	// System.Int32 Human::param
	int32_t ___param_31;
	// System.Int32 Human::HP
	int32_t ___HP_32;
	// System.Int32 Human::Infection
	int32_t ___Infection_33;
	// System.Int32 Human::ClimateBoost
	int32_t ___ClimateBoost_34;
	// System.Int32 Human::EnviBoost
	int32_t ___EnviBoost_35;
	// Environment Human::Envi
	int32_t ___Envi_36;
	// Climate Human::Clim
	int32_t ___Clim_37;
	// System.Boolean Human::Infected
	bool ___Infected_38;
	// UnityEngine.GameObject Human::ZombieModel
	GameObject_t2056972088 * ___ZombieModel_39;
	// UnityEngine.GameObject Human::Entity
	GameObject_t2056972088 * ___Entity_40;
	// UISprite Human::Image
	UISprite_t3128965256 * ___Image_41;
	// UILabel Human::LabelName
	UILabel_t2887975127 * ___LabelName_42;
	// UnityEngine.GameObject Human::HPBar
	GameObject_t2056972088 * ___HPBar_43;
	// UnityEngine.GameObject Human::InfectionBar
	GameObject_t2056972088 * ___InfectionBar_44;
	// UISprite Human::ClimIcon
	UISprite_t3128965256 * ___ClimIcon_45;
	// UISprite Human::EnviIcon
	UISprite_t3128965256 * ___EnviIcon_46;
	// UISprite Human::SkillIcon
	UISprite_t3128965256 * ___SkillIcon_47;
	// UnityEngine.GameObject Human::StartBubble
	GameObject_t2056972088 * ___StartBubble_48;
	// System.Collections.IEnumerator Human::DestroySEParam
	RuntimeObject* ___DestroySEParam_49;
	// UnityEngine.GameObject Human::skillSEGO
	GameObject_t2056972088 * ___skillSEGO_50;
	// UnityEngine.GameObject Human::dieSEGO
	GameObject_t2056972088 * ___dieSEGO_51;
	// Battle_C Human::Battle
	Battle_C_t1550641137 * ___Battle_52;
	// System.Single Human::healDeltaTime
	float ___healDeltaTime_53;
	// System.Single Human::skillDeltaTime
	float ___skillDeltaTime_54;
	// System.Single Human::infectDeltaTime
	float ___infectDeltaTime_55;
	// System.Single Human::communicateDeltaTime
	float ___communicateDeltaTime_56;
	// Human Human::self
	Human_t1678386461 * ___self_57;

public:
	inline static int32_t get_offset_of_updateInterval_16() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___updateInterval_16)); }
	inline int32_t get_updateInterval_16() const { return ___updateInterval_16; }
	inline int32_t* get_address_of_updateInterval_16() { return &___updateInterval_16; }
	inline void set_updateInterval_16(int32_t value)
	{
		___updateInterval_16 = value;
	}

	inline static int32_t get_offset_of_HumanID_17() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___HumanID_17)); }
	inline int32_t get_HumanID_17() const { return ___HumanID_17; }
	inline int32_t* get_address_of_HumanID_17() { return &___HumanID_17; }
	inline void set_HumanID_17(int32_t value)
	{
		___HumanID_17 = value;
	}

	inline static int32_t get_offset_of_MaxHP_18() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___MaxHP_18)); }
	inline int32_t get_MaxHP_18() const { return ___MaxHP_18; }
	inline int32_t* get_address_of_MaxHP_18() { return &___MaxHP_18; }
	inline void set_MaxHP_18(int32_t value)
	{
		___MaxHP_18 = value;
	}

	inline static int32_t get_offset_of_MaxInfection_19() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___MaxInfection_19)); }
	inline int32_t get_MaxInfection_19() const { return ___MaxInfection_19; }
	inline int32_t* get_address_of_MaxInfection_19() { return &___MaxInfection_19; }
	inline void set_MaxInfection_19(int32_t value)
	{
		___MaxInfection_19 = value;
	}

	inline static int32_t get_offset_of_Atk_20() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Atk_20)); }
	inline int32_t get_Atk_20() const { return ___Atk_20; }
	inline int32_t* get_address_of_Atk_20() { return &___Atk_20; }
	inline void set_Atk_20(int32_t value)
	{
		___Atk_20 = value;
	}

	inline static int32_t get_offset_of_Heal_21() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Heal_21)); }
	inline int32_t get_Heal_21() const { return ___Heal_21; }
	inline int32_t* get_address_of_Heal_21() { return &___Heal_21; }
	inline void set_Heal_21(int32_t value)
	{
		___Heal_21 = value;
	}

	inline static int32_t get_offset_of_Def_22() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Def_22)); }
	inline int32_t get_Def_22() const { return ___Def_22; }
	inline int32_t* get_address_of_Def_22() { return &___Def_22; }
	inline void set_Def_22(int32_t value)
	{
		___Def_22 = value;
	}

	inline static int32_t get_offset_of_Cure_23() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Cure_23)); }
	inline int32_t get_Cure_23() const { return ___Cure_23; }
	inline int32_t* get_address_of_Cure_23() { return &___Cure_23; }
	inline void set_Cure_23(int32_t value)
	{
		___Cure_23 = value;
	}

	inline static int32_t get_offset_of_InfectShield_24() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___InfectShield_24)); }
	inline int32_t get_InfectShield_24() const { return ___InfectShield_24; }
	inline int32_t* get_address_of_InfectShield_24() { return &___InfectShield_24; }
	inline void set_InfectShield_24(int32_t value)
	{
		___InfectShield_24 = value;
	}

	inline static int32_t get_offset_of_InfectionAnti_25() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___InfectionAnti_25)); }
	inline int32_t get_InfectionAnti_25() const { return ___InfectionAnti_25; }
	inline int32_t* get_address_of_InfectionAnti_25() { return &___InfectionAnti_25; }
	inline void set_InfectionAnti_25(int32_t value)
	{
		___InfectionAnti_25 = value;
	}

	inline static int32_t get_offset_of_CommunicationAnti_26() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___CommunicationAnti_26)); }
	inline int32_t get_CommunicationAnti_26() const { return ___CommunicationAnti_26; }
	inline int32_t* get_address_of_CommunicationAnti_26() { return &___CommunicationAnti_26; }
	inline void set_CommunicationAnti_26(int32_t value)
	{
		___CommunicationAnti_26 = value;
	}

	inline static int32_t get_offset_of_HPHealing_27() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___HPHealing_27)); }
	inline int32_t get_HPHealing_27() const { return ___HPHealing_27; }
	inline int32_t* get_address_of_HPHealing_27() { return &___HPHealing_27; }
	inline void set_HPHealing_27(int32_t value)
	{
		___HPHealing_27 = value;
	}

	inline static int32_t get_offset_of_Name_28() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Name_28)); }
	inline String_t* get_Name_28() const { return ___Name_28; }
	inline String_t** get_address_of_Name_28() { return &___Name_28; }
	inline void set_Name_28(String_t* value)
	{
		___Name_28 = value;
		Il2CppCodeGenWriteBarrier((&___Name_28), value);
	}

	inline static int32_t get_offset_of_Res_29() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Res_29)); }
	inline String_t* get_Res_29() const { return ___Res_29; }
	inline String_t** get_address_of_Res_29() { return &___Res_29; }
	inline void set_Res_29(String_t* value)
	{
		___Res_29 = value;
		Il2CppCodeGenWriteBarrier((&___Res_29), value);
	}

	inline static int32_t get_offset_of_SkillID_30() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___SkillID_30)); }
	inline String_t* get_SkillID_30() const { return ___SkillID_30; }
	inline String_t** get_address_of_SkillID_30() { return &___SkillID_30; }
	inline void set_SkillID_30(String_t* value)
	{
		___SkillID_30 = value;
		Il2CppCodeGenWriteBarrier((&___SkillID_30), value);
	}

	inline static int32_t get_offset_of_param_31() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___param_31)); }
	inline int32_t get_param_31() const { return ___param_31; }
	inline int32_t* get_address_of_param_31() { return &___param_31; }
	inline void set_param_31(int32_t value)
	{
		___param_31 = value;
	}

	inline static int32_t get_offset_of_HP_32() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___HP_32)); }
	inline int32_t get_HP_32() const { return ___HP_32; }
	inline int32_t* get_address_of_HP_32() { return &___HP_32; }
	inline void set_HP_32(int32_t value)
	{
		___HP_32 = value;
	}

	inline static int32_t get_offset_of_Infection_33() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Infection_33)); }
	inline int32_t get_Infection_33() const { return ___Infection_33; }
	inline int32_t* get_address_of_Infection_33() { return &___Infection_33; }
	inline void set_Infection_33(int32_t value)
	{
		___Infection_33 = value;
	}

	inline static int32_t get_offset_of_ClimateBoost_34() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___ClimateBoost_34)); }
	inline int32_t get_ClimateBoost_34() const { return ___ClimateBoost_34; }
	inline int32_t* get_address_of_ClimateBoost_34() { return &___ClimateBoost_34; }
	inline void set_ClimateBoost_34(int32_t value)
	{
		___ClimateBoost_34 = value;
	}

	inline static int32_t get_offset_of_EnviBoost_35() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___EnviBoost_35)); }
	inline int32_t get_EnviBoost_35() const { return ___EnviBoost_35; }
	inline int32_t* get_address_of_EnviBoost_35() { return &___EnviBoost_35; }
	inline void set_EnviBoost_35(int32_t value)
	{
		___EnviBoost_35 = value;
	}

	inline static int32_t get_offset_of_Envi_36() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Envi_36)); }
	inline int32_t get_Envi_36() const { return ___Envi_36; }
	inline int32_t* get_address_of_Envi_36() { return &___Envi_36; }
	inline void set_Envi_36(int32_t value)
	{
		___Envi_36 = value;
	}

	inline static int32_t get_offset_of_Clim_37() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Clim_37)); }
	inline int32_t get_Clim_37() const { return ___Clim_37; }
	inline int32_t* get_address_of_Clim_37() { return &___Clim_37; }
	inline void set_Clim_37(int32_t value)
	{
		___Clim_37 = value;
	}

	inline static int32_t get_offset_of_Infected_38() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Infected_38)); }
	inline bool get_Infected_38() const { return ___Infected_38; }
	inline bool* get_address_of_Infected_38() { return &___Infected_38; }
	inline void set_Infected_38(bool value)
	{
		___Infected_38 = value;
	}

	inline static int32_t get_offset_of_ZombieModel_39() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___ZombieModel_39)); }
	inline GameObject_t2056972088 * get_ZombieModel_39() const { return ___ZombieModel_39; }
	inline GameObject_t2056972088 ** get_address_of_ZombieModel_39() { return &___ZombieModel_39; }
	inline void set_ZombieModel_39(GameObject_t2056972088 * value)
	{
		___ZombieModel_39 = value;
		Il2CppCodeGenWriteBarrier((&___ZombieModel_39), value);
	}

	inline static int32_t get_offset_of_Entity_40() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Entity_40)); }
	inline GameObject_t2056972088 * get_Entity_40() const { return ___Entity_40; }
	inline GameObject_t2056972088 ** get_address_of_Entity_40() { return &___Entity_40; }
	inline void set_Entity_40(GameObject_t2056972088 * value)
	{
		___Entity_40 = value;
		Il2CppCodeGenWriteBarrier((&___Entity_40), value);
	}

	inline static int32_t get_offset_of_Image_41() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Image_41)); }
	inline UISprite_t3128965256 * get_Image_41() const { return ___Image_41; }
	inline UISprite_t3128965256 ** get_address_of_Image_41() { return &___Image_41; }
	inline void set_Image_41(UISprite_t3128965256 * value)
	{
		___Image_41 = value;
		Il2CppCodeGenWriteBarrier((&___Image_41), value);
	}

	inline static int32_t get_offset_of_LabelName_42() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___LabelName_42)); }
	inline UILabel_t2887975127 * get_LabelName_42() const { return ___LabelName_42; }
	inline UILabel_t2887975127 ** get_address_of_LabelName_42() { return &___LabelName_42; }
	inline void set_LabelName_42(UILabel_t2887975127 * value)
	{
		___LabelName_42 = value;
		Il2CppCodeGenWriteBarrier((&___LabelName_42), value);
	}

	inline static int32_t get_offset_of_HPBar_43() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___HPBar_43)); }
	inline GameObject_t2056972088 * get_HPBar_43() const { return ___HPBar_43; }
	inline GameObject_t2056972088 ** get_address_of_HPBar_43() { return &___HPBar_43; }
	inline void set_HPBar_43(GameObject_t2056972088 * value)
	{
		___HPBar_43 = value;
		Il2CppCodeGenWriteBarrier((&___HPBar_43), value);
	}

	inline static int32_t get_offset_of_InfectionBar_44() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___InfectionBar_44)); }
	inline GameObject_t2056972088 * get_InfectionBar_44() const { return ___InfectionBar_44; }
	inline GameObject_t2056972088 ** get_address_of_InfectionBar_44() { return &___InfectionBar_44; }
	inline void set_InfectionBar_44(GameObject_t2056972088 * value)
	{
		___InfectionBar_44 = value;
		Il2CppCodeGenWriteBarrier((&___InfectionBar_44), value);
	}

	inline static int32_t get_offset_of_ClimIcon_45() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___ClimIcon_45)); }
	inline UISprite_t3128965256 * get_ClimIcon_45() const { return ___ClimIcon_45; }
	inline UISprite_t3128965256 ** get_address_of_ClimIcon_45() { return &___ClimIcon_45; }
	inline void set_ClimIcon_45(UISprite_t3128965256 * value)
	{
		___ClimIcon_45 = value;
		Il2CppCodeGenWriteBarrier((&___ClimIcon_45), value);
	}

	inline static int32_t get_offset_of_EnviIcon_46() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___EnviIcon_46)); }
	inline UISprite_t3128965256 * get_EnviIcon_46() const { return ___EnviIcon_46; }
	inline UISprite_t3128965256 ** get_address_of_EnviIcon_46() { return &___EnviIcon_46; }
	inline void set_EnviIcon_46(UISprite_t3128965256 * value)
	{
		___EnviIcon_46 = value;
		Il2CppCodeGenWriteBarrier((&___EnviIcon_46), value);
	}

	inline static int32_t get_offset_of_SkillIcon_47() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___SkillIcon_47)); }
	inline UISprite_t3128965256 * get_SkillIcon_47() const { return ___SkillIcon_47; }
	inline UISprite_t3128965256 ** get_address_of_SkillIcon_47() { return &___SkillIcon_47; }
	inline void set_SkillIcon_47(UISprite_t3128965256 * value)
	{
		___SkillIcon_47 = value;
		Il2CppCodeGenWriteBarrier((&___SkillIcon_47), value);
	}

	inline static int32_t get_offset_of_StartBubble_48() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___StartBubble_48)); }
	inline GameObject_t2056972088 * get_StartBubble_48() const { return ___StartBubble_48; }
	inline GameObject_t2056972088 ** get_address_of_StartBubble_48() { return &___StartBubble_48; }
	inline void set_StartBubble_48(GameObject_t2056972088 * value)
	{
		___StartBubble_48 = value;
		Il2CppCodeGenWriteBarrier((&___StartBubble_48), value);
	}

	inline static int32_t get_offset_of_DestroySEParam_49() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___DestroySEParam_49)); }
	inline RuntimeObject* get_DestroySEParam_49() const { return ___DestroySEParam_49; }
	inline RuntimeObject** get_address_of_DestroySEParam_49() { return &___DestroySEParam_49; }
	inline void set_DestroySEParam_49(RuntimeObject* value)
	{
		___DestroySEParam_49 = value;
		Il2CppCodeGenWriteBarrier((&___DestroySEParam_49), value);
	}

	inline static int32_t get_offset_of_skillSEGO_50() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___skillSEGO_50)); }
	inline GameObject_t2056972088 * get_skillSEGO_50() const { return ___skillSEGO_50; }
	inline GameObject_t2056972088 ** get_address_of_skillSEGO_50() { return &___skillSEGO_50; }
	inline void set_skillSEGO_50(GameObject_t2056972088 * value)
	{
		___skillSEGO_50 = value;
		Il2CppCodeGenWriteBarrier((&___skillSEGO_50), value);
	}

	inline static int32_t get_offset_of_dieSEGO_51() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___dieSEGO_51)); }
	inline GameObject_t2056972088 * get_dieSEGO_51() const { return ___dieSEGO_51; }
	inline GameObject_t2056972088 ** get_address_of_dieSEGO_51() { return &___dieSEGO_51; }
	inline void set_dieSEGO_51(GameObject_t2056972088 * value)
	{
		___dieSEGO_51 = value;
		Il2CppCodeGenWriteBarrier((&___dieSEGO_51), value);
	}

	inline static int32_t get_offset_of_Battle_52() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___Battle_52)); }
	inline Battle_C_t1550641137 * get_Battle_52() const { return ___Battle_52; }
	inline Battle_C_t1550641137 ** get_address_of_Battle_52() { return &___Battle_52; }
	inline void set_Battle_52(Battle_C_t1550641137 * value)
	{
		___Battle_52 = value;
		Il2CppCodeGenWriteBarrier((&___Battle_52), value);
	}

	inline static int32_t get_offset_of_healDeltaTime_53() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___healDeltaTime_53)); }
	inline float get_healDeltaTime_53() const { return ___healDeltaTime_53; }
	inline float* get_address_of_healDeltaTime_53() { return &___healDeltaTime_53; }
	inline void set_healDeltaTime_53(float value)
	{
		___healDeltaTime_53 = value;
	}

	inline static int32_t get_offset_of_skillDeltaTime_54() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___skillDeltaTime_54)); }
	inline float get_skillDeltaTime_54() const { return ___skillDeltaTime_54; }
	inline float* get_address_of_skillDeltaTime_54() { return &___skillDeltaTime_54; }
	inline void set_skillDeltaTime_54(float value)
	{
		___skillDeltaTime_54 = value;
	}

	inline static int32_t get_offset_of_infectDeltaTime_55() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___infectDeltaTime_55)); }
	inline float get_infectDeltaTime_55() const { return ___infectDeltaTime_55; }
	inline float* get_address_of_infectDeltaTime_55() { return &___infectDeltaTime_55; }
	inline void set_infectDeltaTime_55(float value)
	{
		___infectDeltaTime_55 = value;
	}

	inline static int32_t get_offset_of_communicateDeltaTime_56() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___communicateDeltaTime_56)); }
	inline float get_communicateDeltaTime_56() const { return ___communicateDeltaTime_56; }
	inline float* get_address_of_communicateDeltaTime_56() { return &___communicateDeltaTime_56; }
	inline void set_communicateDeltaTime_56(float value)
	{
		___communicateDeltaTime_56 = value;
	}

	inline static int32_t get_offset_of_self_57() { return static_cast<int32_t>(offsetof(Human_t1678386461, ___self_57)); }
	inline Human_t1678386461 * get_self_57() const { return ___self_57; }
	inline Human_t1678386461 ** get_address_of_self_57() { return &___self_57; }
	inline void set_self_57(Human_t1678386461 * value)
	{
		___self_57 = value;
		Il2CppCodeGenWriteBarrier((&___self_57), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMAN_T1678386461_H
#ifndef LOGIN_C_T45956855_H
#define LOGIN_C_T45956855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Login_C
struct  Login_C_t45956855  : public MonoBehaviour_t3253360915
{
public:
	// UnityEngine.GameObject Login_C::Login_StartBtn
	GameObject_t2056972088 * ___Login_StartBtn_2;

public:
	inline static int32_t get_offset_of_Login_StartBtn_2() { return static_cast<int32_t>(offsetof(Login_C_t45956855, ___Login_StartBtn_2)); }
	inline GameObject_t2056972088 * get_Login_StartBtn_2() const { return ___Login_StartBtn_2; }
	inline GameObject_t2056972088 ** get_address_of_Login_StartBtn_2() { return &___Login_StartBtn_2; }
	inline void set_Login_StartBtn_2(GameObject_t2056972088 * value)
	{
		___Login_StartBtn_2 = value;
		Il2CppCodeGenWriteBarrier((&___Login_StartBtn_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGIN_C_T45956855_H
#ifndef OPTION_C_T3380442996_H
#define OPTION_C_T3380442996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Option_C
struct  Option_C_t3380442996  : public MonoBehaviour_t3253360915
{
public:
	// UILabel Option_C::LabelOption
	UILabel_t2887975127 * ___LabelOption_2;
	// UILabel Option_C::LabelLanguageName
	UILabel_t2887975127 * ___LabelLanguageName_3;
	// UILabel Option_C::LabelLanguage
	UILabel_t2887975127 * ___LabelLanguage_4;
	// UnityEngine.GameObject Option_C::MusicBar
	GameObject_t2056972088 * ___MusicBar_5;
	// UnityEngine.GameObject Option_C::SoundSwitch
	GameObject_t2056972088 * ___SoundSwitch_6;
	// UnityEngine.GameObject Option_C::Option_BackBtn
	GameObject_t2056972088 * ___Option_BackBtn_7;
	// UnityEngine.GameObject Option_C::LanguageRight
	GameObject_t2056972088 * ___LanguageRight_8;
	// UnityEngine.GameObject Option_C::LanguageLeft
	GameObject_t2056972088 * ___LanguageLeft_9;
	// UISlider Option_C::musicBarSlider
	UISlider_t4773296 * ___musicBarSlider_10;
	// UIToggle Option_C::soundToggle
	UIToggle_t1036047822 * ___soundToggle_11;

public:
	inline static int32_t get_offset_of_LabelOption_2() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___LabelOption_2)); }
	inline UILabel_t2887975127 * get_LabelOption_2() const { return ___LabelOption_2; }
	inline UILabel_t2887975127 ** get_address_of_LabelOption_2() { return &___LabelOption_2; }
	inline void set_LabelOption_2(UILabel_t2887975127 * value)
	{
		___LabelOption_2 = value;
		Il2CppCodeGenWriteBarrier((&___LabelOption_2), value);
	}

	inline static int32_t get_offset_of_LabelLanguageName_3() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___LabelLanguageName_3)); }
	inline UILabel_t2887975127 * get_LabelLanguageName_3() const { return ___LabelLanguageName_3; }
	inline UILabel_t2887975127 ** get_address_of_LabelLanguageName_3() { return &___LabelLanguageName_3; }
	inline void set_LabelLanguageName_3(UILabel_t2887975127 * value)
	{
		___LabelLanguageName_3 = value;
		Il2CppCodeGenWriteBarrier((&___LabelLanguageName_3), value);
	}

	inline static int32_t get_offset_of_LabelLanguage_4() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___LabelLanguage_4)); }
	inline UILabel_t2887975127 * get_LabelLanguage_4() const { return ___LabelLanguage_4; }
	inline UILabel_t2887975127 ** get_address_of_LabelLanguage_4() { return &___LabelLanguage_4; }
	inline void set_LabelLanguage_4(UILabel_t2887975127 * value)
	{
		___LabelLanguage_4 = value;
		Il2CppCodeGenWriteBarrier((&___LabelLanguage_4), value);
	}

	inline static int32_t get_offset_of_MusicBar_5() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___MusicBar_5)); }
	inline GameObject_t2056972088 * get_MusicBar_5() const { return ___MusicBar_5; }
	inline GameObject_t2056972088 ** get_address_of_MusicBar_5() { return &___MusicBar_5; }
	inline void set_MusicBar_5(GameObject_t2056972088 * value)
	{
		___MusicBar_5 = value;
		Il2CppCodeGenWriteBarrier((&___MusicBar_5), value);
	}

	inline static int32_t get_offset_of_SoundSwitch_6() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___SoundSwitch_6)); }
	inline GameObject_t2056972088 * get_SoundSwitch_6() const { return ___SoundSwitch_6; }
	inline GameObject_t2056972088 ** get_address_of_SoundSwitch_6() { return &___SoundSwitch_6; }
	inline void set_SoundSwitch_6(GameObject_t2056972088 * value)
	{
		___SoundSwitch_6 = value;
		Il2CppCodeGenWriteBarrier((&___SoundSwitch_6), value);
	}

	inline static int32_t get_offset_of_Option_BackBtn_7() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___Option_BackBtn_7)); }
	inline GameObject_t2056972088 * get_Option_BackBtn_7() const { return ___Option_BackBtn_7; }
	inline GameObject_t2056972088 ** get_address_of_Option_BackBtn_7() { return &___Option_BackBtn_7; }
	inline void set_Option_BackBtn_7(GameObject_t2056972088 * value)
	{
		___Option_BackBtn_7 = value;
		Il2CppCodeGenWriteBarrier((&___Option_BackBtn_7), value);
	}

	inline static int32_t get_offset_of_LanguageRight_8() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___LanguageRight_8)); }
	inline GameObject_t2056972088 * get_LanguageRight_8() const { return ___LanguageRight_8; }
	inline GameObject_t2056972088 ** get_address_of_LanguageRight_8() { return &___LanguageRight_8; }
	inline void set_LanguageRight_8(GameObject_t2056972088 * value)
	{
		___LanguageRight_8 = value;
		Il2CppCodeGenWriteBarrier((&___LanguageRight_8), value);
	}

	inline static int32_t get_offset_of_LanguageLeft_9() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___LanguageLeft_9)); }
	inline GameObject_t2056972088 * get_LanguageLeft_9() const { return ___LanguageLeft_9; }
	inline GameObject_t2056972088 ** get_address_of_LanguageLeft_9() { return &___LanguageLeft_9; }
	inline void set_LanguageLeft_9(GameObject_t2056972088 * value)
	{
		___LanguageLeft_9 = value;
		Il2CppCodeGenWriteBarrier((&___LanguageLeft_9), value);
	}

	inline static int32_t get_offset_of_musicBarSlider_10() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___musicBarSlider_10)); }
	inline UISlider_t4773296 * get_musicBarSlider_10() const { return ___musicBarSlider_10; }
	inline UISlider_t4773296 ** get_address_of_musicBarSlider_10() { return &___musicBarSlider_10; }
	inline void set_musicBarSlider_10(UISlider_t4773296 * value)
	{
		___musicBarSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___musicBarSlider_10), value);
	}

	inline static int32_t get_offset_of_soundToggle_11() { return static_cast<int32_t>(offsetof(Option_C_t3380442996, ___soundToggle_11)); }
	inline UIToggle_t1036047822 * get_soundToggle_11() const { return ___soundToggle_11; }
	inline UIToggle_t1036047822 ** get_address_of_soundToggle_11() { return &___soundToggle_11; }
	inline void set_soundToggle_11(UIToggle_t1036047822 * value)
	{
		___soundToggle_11 = value;
		Il2CppCodeGenWriteBarrier((&___soundToggle_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTION_C_T3380442996_H
#ifndef PERFORMANCE_T3424269116_H
#define PERFORMANCE_T3424269116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Performance
struct  Performance_t3424269116  : public MonoBehaviour_t3253360915
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCE_T3424269116_H
#ifndef SHOP_C_T3579407312_H
#define SHOP_C_T3579407312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shop_C
struct  Shop_C_t3579407312  : public MonoBehaviour_t3253360915
{
public:
	// UnityEngine.GameObject Shop_C::ShopScroll
	GameObject_t2056972088 * ___ShopScroll_2;
	// UnityEngine.GameObject Shop_C::ShopGrid
	GameObject_t2056972088 * ___ShopGrid_3;
	// UnityEngine.GameObject Shop_C::prefabs_Cell
	GameObject_t2056972088 * ___prefabs_Cell_4;
	// UnityEngine.GameObject Shop_C::Shop_BackBtn
	GameObject_t2056972088 * ___Shop_BackBtn_5;
	// ObjectPool`2<UnityEngine.GameObject,IAP_Sheet> Shop_C::OP
	ObjectPool_2_t3659967471 * ___OP_6;

public:
	inline static int32_t get_offset_of_ShopScroll_2() { return static_cast<int32_t>(offsetof(Shop_C_t3579407312, ___ShopScroll_2)); }
	inline GameObject_t2056972088 * get_ShopScroll_2() const { return ___ShopScroll_2; }
	inline GameObject_t2056972088 ** get_address_of_ShopScroll_2() { return &___ShopScroll_2; }
	inline void set_ShopScroll_2(GameObject_t2056972088 * value)
	{
		___ShopScroll_2 = value;
		Il2CppCodeGenWriteBarrier((&___ShopScroll_2), value);
	}

	inline static int32_t get_offset_of_ShopGrid_3() { return static_cast<int32_t>(offsetof(Shop_C_t3579407312, ___ShopGrid_3)); }
	inline GameObject_t2056972088 * get_ShopGrid_3() const { return ___ShopGrid_3; }
	inline GameObject_t2056972088 ** get_address_of_ShopGrid_3() { return &___ShopGrid_3; }
	inline void set_ShopGrid_3(GameObject_t2056972088 * value)
	{
		___ShopGrid_3 = value;
		Il2CppCodeGenWriteBarrier((&___ShopGrid_3), value);
	}

	inline static int32_t get_offset_of_prefabs_Cell_4() { return static_cast<int32_t>(offsetof(Shop_C_t3579407312, ___prefabs_Cell_4)); }
	inline GameObject_t2056972088 * get_prefabs_Cell_4() const { return ___prefabs_Cell_4; }
	inline GameObject_t2056972088 ** get_address_of_prefabs_Cell_4() { return &___prefabs_Cell_4; }
	inline void set_prefabs_Cell_4(GameObject_t2056972088 * value)
	{
		___prefabs_Cell_4 = value;
		Il2CppCodeGenWriteBarrier((&___prefabs_Cell_4), value);
	}

	inline static int32_t get_offset_of_Shop_BackBtn_5() { return static_cast<int32_t>(offsetof(Shop_C_t3579407312, ___Shop_BackBtn_5)); }
	inline GameObject_t2056972088 * get_Shop_BackBtn_5() const { return ___Shop_BackBtn_5; }
	inline GameObject_t2056972088 ** get_address_of_Shop_BackBtn_5() { return &___Shop_BackBtn_5; }
	inline void set_Shop_BackBtn_5(GameObject_t2056972088 * value)
	{
		___Shop_BackBtn_5 = value;
		Il2CppCodeGenWriteBarrier((&___Shop_BackBtn_5), value);
	}

	inline static int32_t get_offset_of_OP_6() { return static_cast<int32_t>(offsetof(Shop_C_t3579407312, ___OP_6)); }
	inline ObjectPool_2_t3659967471 * get_OP_6() const { return ___OP_6; }
	inline ObjectPool_2_t3659967471 ** get_address_of_OP_6() { return &___OP_6; }
	inline void set_OP_6(ObjectPool_2_t3659967471 * value)
	{
		___OP_6 = value;
		Il2CppCodeGenWriteBarrier((&___OP_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOP_C_T3579407312_H
#ifndef GAMEENTRANCE_T2598447322_H
#define GAMEENTRANCE_T2598447322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameEntrance
struct  GameEntrance_t2598447322  : public MonoBehaviour_t3253360915
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEENTRANCE_T2598447322_H
#ifndef UIVIEWPORT_T3525348821_H
#define UIVIEWPORT_T3525348821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIViewport
struct  UIViewport_t3525348821  : public MonoBehaviour_t3253360915
{
public:
	// UnityEngine.Camera UIViewport::sourceCamera
	Camera_t2825083326 * ___sourceCamera_2;
	// UnityEngine.Transform UIViewport::topLeft
	Transform_t1919398844 * ___topLeft_3;
	// UnityEngine.Transform UIViewport::bottomRight
	Transform_t1919398844 * ___bottomRight_4;
	// System.Single UIViewport::fullSize
	float ___fullSize_5;
	// UnityEngine.Camera UIViewport::mCam
	Camera_t2825083326 * ___mCam_6;

public:
	inline static int32_t get_offset_of_sourceCamera_2() { return static_cast<int32_t>(offsetof(UIViewport_t3525348821, ___sourceCamera_2)); }
	inline Camera_t2825083326 * get_sourceCamera_2() const { return ___sourceCamera_2; }
	inline Camera_t2825083326 ** get_address_of_sourceCamera_2() { return &___sourceCamera_2; }
	inline void set_sourceCamera_2(Camera_t2825083326 * value)
	{
		___sourceCamera_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceCamera_2), value);
	}

	inline static int32_t get_offset_of_topLeft_3() { return static_cast<int32_t>(offsetof(UIViewport_t3525348821, ___topLeft_3)); }
	inline Transform_t1919398844 * get_topLeft_3() const { return ___topLeft_3; }
	inline Transform_t1919398844 ** get_address_of_topLeft_3() { return &___topLeft_3; }
	inline void set_topLeft_3(Transform_t1919398844 * value)
	{
		___topLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___topLeft_3), value);
	}

	inline static int32_t get_offset_of_bottomRight_4() { return static_cast<int32_t>(offsetof(UIViewport_t3525348821, ___bottomRight_4)); }
	inline Transform_t1919398844 * get_bottomRight_4() const { return ___bottomRight_4; }
	inline Transform_t1919398844 ** get_address_of_bottomRight_4() { return &___bottomRight_4; }
	inline void set_bottomRight_4(Transform_t1919398844 * value)
	{
		___bottomRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___bottomRight_4), value);
	}

	inline static int32_t get_offset_of_fullSize_5() { return static_cast<int32_t>(offsetof(UIViewport_t3525348821, ___fullSize_5)); }
	inline float get_fullSize_5() const { return ___fullSize_5; }
	inline float* get_address_of_fullSize_5() { return &___fullSize_5; }
	inline void set_fullSize_5(float value)
	{
		___fullSize_5 = value;
	}

	inline static int32_t get_offset_of_mCam_6() { return static_cast<int32_t>(offsetof(UIViewport_t3525348821, ___mCam_6)); }
	inline Camera_t2825083326 * get_mCam_6() const { return ___mCam_6; }
	inline Camera_t2825083326 ** get_address_of_mCam_6() { return &___mCam_6; }
	inline void set_mCam_6(Camera_t2825083326 * value)
	{
		___mCam_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCam_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVIEWPORT_T3525348821_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4200 = { sizeof (UIViewport_t3525348821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4200[5] = 
{
	UIViewport_t3525348821::get_offset_of_sourceCamera_2(),
	UIViewport_t3525348821::get_offset_of_topLeft_3(),
	UIViewport_t3525348821::get_offset_of_bottomRight_4(),
	UIViewport_t3525348821::get_offset_of_fullSize_5(),
	UIViewport_t3525348821::get_offset_of_mCam_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4201 = { sizeof (AudioManager_t2157902905), -1, sizeof(AudioManager_t2157902905_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4201[6] = 
{
	0,
	0,
	AudioManager_t2157902905_StaticFields::get_offset_of_currrentBG_4(),
	AudioManager_t2157902905_StaticFields::get_offset_of_bgVolume_5(),
	AudioManager_t2157902905_StaticFields::get_offset_of_isSoundOn_6(),
	AudioManager_t2157902905_StaticFields::get_offset_of_AudioSources_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4202 = { sizeof (Modes_t489810674)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4202[5] = 
{
	Modes_t489810674::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4203 = { sizeof (Environment_t495674422)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4203[4] = 
{
	Environment_t495674422::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4204 = { sizeof (Climate_t2220563603)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4204[4] = 
{
	Climate_t2220563603::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4205 = { sizeof (BattleState_t3782973989)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4205[4] = 
{
	BattleState_t3782973989::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4206 = { sizeof (Battle_C_t1550641137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4206[85] = 
{
	0,
	0,
	0,
	0,
	Battle_C_t1550641137::get_offset_of_MEDICINESPD_6(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Battle_C_t1550641137::get_offset_of_updateInterval_14(),
	Battle_C_t1550641137::get_offset_of_UpgradeMapWidth_15(),
	Battle_C_t1550641137::get_offset_of_UpgradeMapHeigth_16(),
	Battle_C_t1550641137::get_offset_of_HUMANMODEL_WIDTH_17(),
	Battle_C_t1550641137::get_offset_of_HUMANMODEL_HEIGHT_18(),
	Battle_C_t1550641137::get_offset_of_BUBBLE_WIDTH_19(),
	Battle_C_t1550641137::get_offset_of_BUBBLE_HEIGHT_20(),
	Battle_C_t1550641137::get_offset_of_MissionID_21(),
	Battle_C_t1550641137::get_offset_of_VirusID_22(),
	Battle_C_t1550641137::get_offset_of_mode_23(),
	Battle_C_t1550641137::get_offset_of_deltaTime2_24(),
	Battle_C_t1550641137::get_offset_of_deltaTime3_25(),
	Battle_C_t1550641137::get_offset_of_currentTimeScale_26(),
	Battle_C_t1550641137::get_offset_of_VirusNum_27(),
	Battle_C_t1550641137::get_offset_of_Medicine_28(),
	Battle_C_t1550641137::get_offset_of_MedicineWork_29(),
	Battle_C_t1550641137::get_offset_of_medicineOK_30(),
	Battle_C_t1550641137::get_offset_of_BattleState_31(),
	Battle_C_t1550641137::get_offset_of_Result_32(),
	Battle_C_t1550641137::get_offset_of_StrategyPoint_33(),
	Battle_C_t1550641137::get_offset_of_TotalInfection_34(),
	Battle_C_t1550641137::get_offset_of_TotalDamage_35(),
	Battle_C_t1550641137::get_offset_of_Accelarate_36(),
	Battle_C_t1550641137::get_offset_of_BC_37(),
	Battle_C_t1550641137::get_offset_of_TimeSecond_38(),
	Battle_C_t1550641137::get_offset_of_InfectNum_39(),
	Battle_C_t1550641137::get_offset_of_InfectKillNum_40(),
	Battle_C_t1550641137::get_offset_of_ZombieKillNum_41(),
	Battle_C_t1550641137::get_offset_of_ModelAspect_42(),
	Battle_C_t1550641137::get_offset_of_StrategyBtn_43(),
	Battle_C_t1550641137::get_offset_of_LabelStrategy_44(),
	Battle_C_t1550641137::get_offset_of_Battle_45(),
	Battle_C_t1550641137::get_offset_of_Entity_46(),
	Battle_C_t1550641137::get_offset_of_EndBattleBtn_47(),
	Battle_C_t1550641137::get_offset_of_InGameUpgradePanel_48(),
	Battle_C_t1550641137::get_offset_of_UpgradeMap_49(),
	Battle_C_t1550641137::get_offset_of_VirusUpBtn_50(),
	Battle_C_t1550641137::get_offset_of_HumanUpBtn_51(),
	Battle_C_t1550641137::get_offset_of_ZombieUpBtn_52(),
	Battle_C_t1550641137::get_offset_of_EvolutionBtn_53(),
	Battle_C_t1550641137::get_offset_of_SpeedBtn_54(),
	Battle_C_t1550641137::get_offset_of_strategyCloseBtn_55(),
	Battle_C_t1550641137::get_offset_of_MedicineBar_56(),
	Battle_C_t1550641137::get_offset_of_VirusProBar_57(),
	Battle_C_t1550641137::get_offset_of_HumanProBar_58(),
	Battle_C_t1550641137::get_offset_of_ZombieProBar_59(),
	Battle_C_t1550641137::get_offset_of_Timer_60(),
	Battle_C_t1550641137::get_offset_of_Label_EvolutionDes_61(),
	Battle_C_t1550641137::get_offset_of_LabelEvolutionCost_62(),
	Battle_C_t1550641137::get_offset_of_LabelSpeed_63(),
	Battle_C_t1550641137::get_offset_of_MediName_64(),
	Battle_C_t1550641137::get_offset_of_MediPercent_65(),
	Battle_C_t1550641137::get_offset_of_HumanModel_66(),
	Battle_C_t1550641137::get_offset_of_ZombieModel_67(),
	Battle_C_t1550641137::get_offset_of_LabelStrategyPoint_68(),
	Battle_C_t1550641137::get_offset_of_GeneModel_69(),
	Battle_C_t1550641137::get_offset_of_GeneSelected_70(),
	Battle_C_t1550641137::get_offset_of_LabelSP_71(),
	Battle_C_t1550641137::get_offset_of_SP_Bubble_72(),
	Battle_C_t1550641137::get_offset_of_CurVirus_73(),
	Battle_C_t1550641137::get_offset_of_UpgradedGenes_Virus_74(),
	Battle_C_t1550641137::get_offset_of_UpgradedGenes_Human_75(),
	Battle_C_t1550641137::get_offset_of_UpgradedGenes_Zombie_76(),
	Battle_C_t1550641137::get_offset_of_VirusArray_77(),
	Battle_C_t1550641137::get_offset_of_HumanArray_78(),
	Battle_C_t1550641137::get_offset_of_ZombieArray_79(),
	Battle_C_t1550641137::get_offset_of_VirusGeneArray_80(),
	Battle_C_t1550641137::get_offset_of_HumanGeneArray_81(),
	Battle_C_t1550641137::get_offset_of_ZombieGeneArray_82(),
	Battle_C_t1550641137::get_offset_of_InfectedHumans_83(),
	Battle_C_t1550641137::get_offset_of_UnInfectedHumans_84(),
	Battle_C_t1550641137::get_offset_of_InfectionList_85(),
	Battle_C_t1550641137::get_offset_of_DamageList_86(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4207 = { sizeof (BattleEvent_t558144860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4207[1] = 
{
	BattleEvent_t558144860::get_offset_of_Package_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4208 = { sizeof (BattleEvent_Sheet_t602915677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4208[5] = 
{
	BattleEvent_Sheet_t602915677::get_offset_of_EventPackageID_0(),
	BattleEvent_Sheet_t602915677::get_offset_of_EventPackageName_1(),
	BattleEvent_Sheet_t602915677::get_offset_of_EventID_2(),
	BattleEvent_Sheet_t602915677::get_offset_of_EventValue_3(),
	BattleEvent_Sheet_t602915677::get_offset_of_Weight_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4209 = { sizeof (BattleStrategy_t796622191), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4209[1] = 
{
	BattleStrategy_t796622191::get_offset_of_Strategy_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4210 = { sizeof (BattleStrategy_Sheet_t1541607319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4210[10] = 
{
	BattleStrategy_Sheet_t1541607319::get_offset_of_GeneID_0(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_StrategyID_1(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_BoardID_2(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_EventID_3(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_Row_4(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_Column_5(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_FP1_6(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_FP2_7(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_UnlockCost_A_8(),
	BattleStrategy_Sheet_t1541607319::get_offset_of_UnlockCost_B_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4211 = { sizeof (Campaign_C_t169215256), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4211[7] = 
{
	Campaign_C_t169215256::get_offset_of_CampainScroll_2(),
	Campaign_C_t169215256::get_offset_of_prefabs_Cell_3(),
	Campaign_C_t169215256::get_offset_of_Campaign_BackBtn_4(),
	Campaign_C_t169215256::get_offset_of_CampainGrid_5(),
	Campaign_C_t169215256::get_offset_of_VirusID_6(),
	Campaign_C_t169215256::get_offset_of_OP_7(),
	Campaign_C_t169215256::get_offset_of_prefabscellChildrenNum_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4212 = { sizeof (CampaignCell_t45365558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4212[4] = 
{
	CampaignCell_t45365558::get_offset_of_LabelMissionName_2(),
	CampaignCell_t45365558::get_offset_of_LabelMissionFlag_3(),
	CampaignCell_t45365558::get_offset_of_cell_4(),
	CampaignCell_t45365558::get_offset_of_CellID_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4213 = { sizeof (CampaignResult_C_t36214144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4213[19] = 
{
	CampaignResult_C_t36214144::get_offset_of_LabelFlag_2(),
	CampaignResult_C_t36214144::get_offset_of_LabelTime_3(),
	CampaignResult_C_t36214144::get_offset_of_LabelInfect_4(),
	CampaignResult_C_t36214144::get_offset_of_LabelInfectKill_5(),
	CampaignResult_C_t36214144::get_offset_of_LabelZombieKill_6(),
	CampaignResult_C_t36214144::get_offset_of_LabelFlagResult_7(),
	CampaignResult_C_t36214144::get_offset_of_LabelTimeSecond_8(),
	CampaignResult_C_t36214144::get_offset_of_LabelInfectNum_9(),
	CampaignResult_C_t36214144::get_offset_of_LabelInfectKillNum_10(),
	CampaignResult_C_t36214144::get_offset_of_LabelZombieKillNum_11(),
	CampaignResult_C_t36214144::get_offset_of_LabelGold_12(),
	CampaignResult_C_t36214144::get_offset_of_LabelGem_13(),
	CampaignResult_C_t36214144::get_offset_of_ResultFlag_14(),
	CampaignResult_C_t36214144::get_offset_of_TimeSecond_15(),
	CampaignResult_C_t36214144::get_offset_of_InfectNum_16(),
	CampaignResult_C_t36214144::get_offset_of_InfectKillNum_17(),
	CampaignResult_C_t36214144::get_offset_of_ZombieKillNum_18(),
	CampaignResult_C_t36214144::get_offset_of_CampaignResult_BackBtn_19(),
	CampaignResult_C_t36214144::get_offset_of_loot_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4214 = { sizeof (DataManager_t4280950329), -1, sizeof(DataManager_t4280950329_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4214[18] = 
{
	DataManager_t4280950329_StaticFields::get_offset_of_BattleEvent_Package_2(),
	DataManager_t4280950329_StaticFields::get_offset_of_BattleStrategy_Strategy_3(),
	DataManager_t4280950329_StaticFields::get_offset_of_DNAUp_Virus_4(),
	DataManager_t4280950329_StaticFields::get_offset_of_DNAUp_Human_5(),
	DataManager_t4280950329_StaticFields::get_offset_of_DNAUp_Zombie_6(),
	DataManager_t4280950329_StaticFields::get_offset_of_IAP_Item_7(),
	DataManager_t4280950329_StaticFields::get_offset_of_InGameEvent_InGameEvents_8(),
	DataManager_t4280950329_StaticFields::get_offset_of_Language_Localization_9(),
	DataManager_t4280950329_StaticFields::get_offset_of_Loot_Package_10(),
	DataManager_t4280950329_StaticFields::get_offset_of_Mission_Parameter_11(),
	DataManager_t4280950329_StaticFields::get_offset_of_Model_Virus_12(),
	DataManager_t4280950329_StaticFields::get_offset_of_Model_Human_13(),
	DataManager_t4280950329_StaticFields::get_offset_of_Model_Zombie_14(),
	DataManager_t4280950329_StaticFields::get_offset_of_SpecialAbility_Ability_15(),
	DataManager_t4280950329_StaticFields::get_offset_of_Unlock_UnlockMission_16(),
	DataManager_t4280950329_StaticFields::get_offset_of_InfectionSheet_17(),
	DataManager_t4280950329_StaticFields::get_offset_of_DamageSheet_18(),
	DataManager_t4280950329_StaticFields::get_offset_of_assetNames_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4215 = { sizeof (DNAType_t4248534190)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4215[4] = 
{
	DNAType_t4248534190::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4216 = { sizeof (DNA_C_t3786028506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4216[11] = 
{
	DNA_C_t3786028506::get_offset_of_prefabs_Cell_2(),
	DNA_C_t3786028506::get_offset_of_LabelGold_3(),
	DNA_C_t3786028506::get_offset_of_LabelGem_4(),
	DNA_C_t3786028506::get_offset_of_DNAScroll_5(),
	DNA_C_t3786028506::get_offset_of_DNAGrid_6(),
	DNA_C_t3786028506::get_offset_of_DNA_BackBtn_7(),
	DNA_C_t3786028506::get_offset_of_DNA_VirusBtn_8(),
	DNA_C_t3786028506::get_offset_of_DNA_HumanBtn_9(),
	DNA_C_t3786028506::get_offset_of_DNA_ZombieBtn_10(),
	DNA_C_t3786028506::get_offset_of_OP_11(),
	DNA_C_t3786028506::get_offset_of_prefabscellChildrenNum_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4217 = { sizeof (DNACell_t1104279301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4217[10] = 
{
	DNACell_t1104279301::get_offset_of_Name_2(),
	DNACell_t1104279301::get_offset_of_Lv_3(),
	DNACell_t1104279301::get_offset_of_Des_4(),
	DNACell_t1104279301::get_offset_of_GLabel_5(),
	DNACell_t1104279301::get_offset_of_CLabel_6(),
	DNACell_t1104279301::get_offset_of_GoldUpgradeBtn_7(),
	DNACell_t1104279301::get_offset_of_GemUpgradeBtn_8(),
	DNACell_t1104279301::get_offset_of_DNA_C_9(),
	DNACell_t1104279301::get_offset_of_CellID_10(),
	DNACell_t1104279301::get_offset_of_CellType_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4218 = { sizeof (DNAUp_t1024682672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4218[3] = 
{
	DNAUp_t1024682672::get_offset_of_Virus_2(),
	DNAUp_t1024682672::get_offset_of_Human_3(),
	DNAUp_t1024682672::get_offset_of_Zombie_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4219 = { sizeof (DNAUp_Sheet_t3499065251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4219[15] = 
{
	DNAUp_Sheet_t3499065251::get_offset_of_ID_0(),
	DNAUp_Sheet_t3499065251::get_offset_of_Type_1(),
	DNAUp_Sheet_t3499065251::get_offset_of_Name_2(),
	DNAUp_Sheet_t3499065251::get_offset_of_Value1_3(),
	DNAUp_Sheet_t3499065251::get_offset_of_Value1_Add_4(),
	DNAUp_Sheet_t3499065251::get_offset_of_Value2_5(),
	DNAUp_Sheet_t3499065251::get_offset_of_Value2_Add_6(),
	DNAUp_Sheet_t3499065251::get_offset_of_Value3_7(),
	DNAUp_Sheet_t3499065251::get_offset_of_Value3_Add_8(),
	DNAUp_Sheet_t3499065251::get_offset_of_GoldCost_9(),
	DNAUp_Sheet_t3499065251::get_offset_of_GoldParam_1_10(),
	DNAUp_Sheet_t3499065251::get_offset_of_GoldParam_2_11(),
	DNAUp_Sheet_t3499065251::get_offset_of_GemCost_12(),
	DNAUp_Sheet_t3499065251::get_offset_of_GemParam_1_13(),
	DNAUp_Sheet_t3499065251::get_offset_of_GemParam_2_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4220 = { sizeof (Formula_t1323670472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4221 = { sizeof (GameEntrance_t2598447322), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4222 = { sizeof (GameManager_t3065462933), -1, sizeof(GameManager_t3065462933_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4222[16] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GameManager_t3065462933_StaticFields::get_offset_of_user_11(),
	GameManager_t3065462933_StaticFields::get_offset_of_FilePathName_12(),
	GameManager_t3065462933_StaticFields::get_offset_of_UIS_13(),
	GameManager_t3065462933_StaticFields::get_offset_of_Battle_14(),
	GameManager_t3065462933_StaticFields::get_offset_of_BC_15(),
	GameManager_t3065462933_StaticFields::get_offset_of_StandardWidth_16(),
	GameManager_t3065462933_StaticFields::get_offset_of_StandardHeight_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4223 = { sizeof (Gene_t3376799142), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4223[26] = 
{
	0,
	0,
	0,
	0,
	Gene_t3376799142::get_offset_of_GeneID_6(),
	Gene_t3376799142::get_offset_of_StrategyID_7(),
	Gene_t3376799142::get_offset_of_BoardID_8(),
	Gene_t3376799142::get_offset_of_EventID_9(),
	Gene_t3376799142::get_offset_of_Row_10(),
	Gene_t3376799142::get_offset_of_Column_11(),
	Gene_t3376799142::get_offset_of_FP1_12(),
	Gene_t3376799142::get_offset_of_FP2_13(),
	Gene_t3376799142::get_offset_of_UnlockCost_A_14(),
	Gene_t3376799142::get_offset_of_UnlockCost_B_15(),
	Gene_t3376799142::get_offset_of_Pos_16(),
	Gene_t3376799142::get_offset_of_IsVisible_17(),
	Gene_t3376799142::get_offset_of_IsFatherUnlocked_18(),
	Gene_t3376799142::get_offset_of_IsUpgradable_19(),
	Gene_t3376799142::get_offset_of_IsUpgraded_20(),
	Gene_t3376799142::get_offset_of_EvolutionBtn_21(),
	Gene_t3376799142::get_offset_of_self_22(),
	Gene_t3376799142::get_offset_of_LabelEvolutionCost_23(),
	Gene_t3376799142::get_offset_of_Label_EvolutionDes_24(),
	Gene_t3376799142::get_offset_of_Battle_25(),
	Gene_t3376799142::get_offset_of_oneSecondDeltaTime_26(),
	Gene_t3376799142::get_offset_of_fiveSecondDeltaTime_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4224 = { sizeof (SEType_t1409348089)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4224[3] = 
{
	SEType_t1409348089::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4225 = { sizeof (Human_t1678386461), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4225[56] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Human_t1678386461::get_offset_of_updateInterval_16(),
	Human_t1678386461::get_offset_of_HumanID_17(),
	Human_t1678386461::get_offset_of_MaxHP_18(),
	Human_t1678386461::get_offset_of_MaxInfection_19(),
	Human_t1678386461::get_offset_of_Atk_20(),
	Human_t1678386461::get_offset_of_Heal_21(),
	Human_t1678386461::get_offset_of_Def_22(),
	Human_t1678386461::get_offset_of_Cure_23(),
	Human_t1678386461::get_offset_of_InfectShield_24(),
	Human_t1678386461::get_offset_of_InfectionAnti_25(),
	Human_t1678386461::get_offset_of_CommunicationAnti_26(),
	Human_t1678386461::get_offset_of_HPHealing_27(),
	Human_t1678386461::get_offset_of_Name_28(),
	Human_t1678386461::get_offset_of_Res_29(),
	Human_t1678386461::get_offset_of_SkillID_30(),
	Human_t1678386461::get_offset_of_param_31(),
	Human_t1678386461::get_offset_of_HP_32(),
	Human_t1678386461::get_offset_of_Infection_33(),
	Human_t1678386461::get_offset_of_ClimateBoost_34(),
	Human_t1678386461::get_offset_of_EnviBoost_35(),
	Human_t1678386461::get_offset_of_Envi_36(),
	Human_t1678386461::get_offset_of_Clim_37(),
	Human_t1678386461::get_offset_of_Infected_38(),
	Human_t1678386461::get_offset_of_ZombieModel_39(),
	Human_t1678386461::get_offset_of_Entity_40(),
	Human_t1678386461::get_offset_of_Image_41(),
	Human_t1678386461::get_offset_of_LabelName_42(),
	Human_t1678386461::get_offset_of_HPBar_43(),
	Human_t1678386461::get_offset_of_InfectionBar_44(),
	Human_t1678386461::get_offset_of_ClimIcon_45(),
	Human_t1678386461::get_offset_of_EnviIcon_46(),
	Human_t1678386461::get_offset_of_SkillIcon_47(),
	Human_t1678386461::get_offset_of_StartBubble_48(),
	Human_t1678386461::get_offset_of_DestroySEParam_49(),
	Human_t1678386461::get_offset_of_skillSEGO_50(),
	Human_t1678386461::get_offset_of_dieSEGO_51(),
	Human_t1678386461::get_offset_of_Battle_52(),
	Human_t1678386461::get_offset_of_healDeltaTime_53(),
	Human_t1678386461::get_offset_of_skillDeltaTime_54(),
	Human_t1678386461::get_offset_of_infectDeltaTime_55(),
	Human_t1678386461::get_offset_of_communicateDeltaTime_56(),
	Human_t1678386461::get_offset_of_self_57(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4226 = { sizeof (Human_Sheet_t253649465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4226[21] = 
{
	Human_Sheet_t253649465::get_offset_of_HumanID_0(),
	Human_Sheet_t253649465::get_offset_of_MaxHP_1(),
	Human_Sheet_t253649465::get_offset_of_MaxInfection_2(),
	Human_Sheet_t253649465::get_offset_of_Atk_3(),
	Human_Sheet_t253649465::get_offset_of_Heal_4(),
	Human_Sheet_t253649465::get_offset_of_Def_5(),
	Human_Sheet_t253649465::get_offset_of_Cure_6(),
	Human_Sheet_t253649465::get_offset_of_InfectShield_7(),
	Human_Sheet_t253649465::get_offset_of_InfectionAnti_8(),
	Human_Sheet_t253649465::get_offset_of_CommunicationAnti_9(),
	Human_Sheet_t253649465::get_offset_of_HPHealing_10(),
	Human_Sheet_t253649465::get_offset_of_ClimateBoost_1_11(),
	Human_Sheet_t253649465::get_offset_of_ClimateBoost_2_12(),
	Human_Sheet_t253649465::get_offset_of_ClimateBoost_3_13(),
	Human_Sheet_t253649465::get_offset_of_EnviBoost_1_14(),
	Human_Sheet_t253649465::get_offset_of_EnviBoost_2_15(),
	Human_Sheet_t253649465::get_offset_of_EnviBoost_3_16(),
	Human_Sheet_t253649465::get_offset_of_Weight_17(),
	Human_Sheet_t253649465::get_offset_of_Name_18(),
	Human_Sheet_t253649465::get_offset_of_Res_19(),
	Human_Sheet_t253649465::get_offset_of_SkillID_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4227 = { sizeof (IAP_t1054572740), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4227[1] = 
{
	IAP_t1054572740::get_offset_of_Item_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4228 = { sizeof (IAP_Sheet_t1670347038), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4228[5] = 
{
	IAP_Sheet_t1670347038::get_offset_of_IAPPackageID_0(),
	IAP_Sheet_t1670347038::get_offset_of_PackageName_1(),
	IAP_Sheet_t1670347038::get_offset_of_LootID_2(),
	IAP_Sheet_t1670347038::get_offset_of_DollarPrice_3(),
	IAP_Sheet_t1670347038::get_offset_of_IAPSlot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4229 = { sizeof (InGameEvent_t1833029143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4229[1] = 
{
	InGameEvent_t1833029143::get_offset_of_InGameEvents_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4230 = { sizeof (InGameEvent_Sheet_t505334484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4230[9] = 
{
	InGameEvent_Sheet_t505334484::get_offset_of_EventID_0(),
	InGameEvent_Sheet_t505334484::get_offset_of_Type_1(),
	InGameEvent_Sheet_t505334484::get_offset_of_TypeParam_2(),
	InGameEvent_Sheet_t505334484::get_offset_of_FieldName_3(),
	InGameEvent_Sheet_t505334484::get_offset_of_EventType_4(),
	InGameEvent_Sheet_t505334484::get_offset_of_Value_5(),
	InGameEvent_Sheet_t505334484::get_offset_of_SkillIconName_6(),
	InGameEvent_Sheet_t505334484::get_offset_of_DesID_7(),
	InGameEvent_Sheet_t505334484::get_offset_of_UpgradeEffectID_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4231 = { sizeof (IOHelper_t1127406900), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4232 = { sizeof (Language_t1974027406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4232[1] = 
{
	Language_t1974027406::get_offset_of_Localization_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4233 = { sizeof (Language_Sheet_t1426318616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4233[3] = 
{
	Language_Sheet_t1426318616::get_offset_of_TextID_0(),
	Language_Sheet_t1426318616::get_offset_of_ZH_1(),
	Language_Sheet_t1426318616::get_offset_of_EN_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4234 = { sizeof (LanguageKind_t2484234435)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4234[3] = 
{
	LanguageKind_t2484234435::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4235 = { sizeof (LanguageChange_t989850814)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4235[4] = 
{
	LanguageChange_t989850814::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4236 = { sizeof (LocalizationEx_t65050763), -1, sizeof(LocalizationEx_t65050763_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4236[1] = 
{
	LocalizationEx_t65050763_StaticFields::get_offset_of_mLanguage_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4237 = { sizeof (Login_C_t45956855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4237[1] = 
{
	Login_C_t45956855::get_offset_of_Login_StartBtn_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4238 = { sizeof (Loot_t878120273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4238[1] = 
{
	Loot_t878120273::get_offset_of_Package_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4239 = { sizeof (Loot_Sheet_t191456884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4239[5] = 
{
	Loot_Sheet_t191456884::get_offset_of_LootPackageID_0(),
	Loot_Sheet_t191456884::get_offset_of_PackageName_1(),
	Loot_Sheet_t191456884::get_offset_of_ItemID_2(),
	Loot_Sheet_t191456884::get_offset_of_ItemNum_3(),
	Loot_Sheet_t191456884::get_offset_of_Weight_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4240 = { sizeof (Main_C_t242605567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4240[8] = 
{
	Main_C_t242605567::get_offset_of_LabelGold_2(),
	Main_C_t242605567::get_offset_of_LabelGem_3(),
	Main_C_t242605567::get_offset_of_Gold_4(),
	Main_C_t242605567::get_offset_of_Gem_5(),
	Main_C_t242605567::get_offset_of_Main_StartBtn_6(),
	Main_C_t242605567::get_offset_of_Main_DNABtn_7(),
	Main_C_t242605567::get_offset_of_Main_OptionBtn_8(),
	Main_C_t242605567::get_offset_of_Main_ShopBtn_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4241 = { sizeof (Mission_t2180714168), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4241[1] = 
{
	Mission_t2180714168::get_offset_of_Parameter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4242 = { sizeof (Mission_Sheet_t2170179025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4242[31] = 
{
	Mission_Sheet_t2170179025::get_offset_of_MissionID_0(),
	Mission_Sheet_t2170179025::get_offset_of_MaxHPBoost_1(),
	Mission_Sheet_t2170179025::get_offset_of_InfectionBoost_2(),
	Mission_Sheet_t2170179025::get_offset_of_Atk_Boost_3(),
	Mission_Sheet_t2170179025::get_offset_of_Heal_Boost_4(),
	Mission_Sheet_t2170179025::get_offset_of_Def_Boost_5(),
	Mission_Sheet_t2170179025::get_offset_of_Cure_Boost_6(),
	Mission_Sheet_t2170179025::get_offset_of_Speed_Boost_7(),
	Mission_Sheet_t2170179025::get_offset_of_InfectionAntiBoost_8(),
	Mission_Sheet_t2170179025::get_offset_of_CommunicationAntiBoost_9(),
	Mission_Sheet_t2170179025::get_offset_of_HPHealingBoost_10(),
	Mission_Sheet_t2170179025::get_offset_of_ClimateBoost_11(),
	Mission_Sheet_t2170179025::get_offset_of_EnviBoost_12(),
	Mission_Sheet_t2170179025::get_offset_of_DistributionParam1_13(),
	Mission_Sheet_t2170179025::get_offset_of_DistributionParam2_14(),
	Mission_Sheet_t2170179025::get_offset_of_DistributionParam3_15(),
	Mission_Sheet_t2170179025::get_offset_of_DistributionParam4_16(),
	Mission_Sheet_t2170179025::get_offset_of_AbilityID_1_17(),
	Mission_Sheet_t2170179025::get_offset_of_AbilityLv_1_18(),
	Mission_Sheet_t2170179025::get_offset_of_AbilityID_2_19(),
	Mission_Sheet_t2170179025::get_offset_of_AbilityLv_2_20(),
	Mission_Sheet_t2170179025::get_offset_of_AbilityID_3_21(),
	Mission_Sheet_t2170179025::get_offset_of_AbilityLv_3_22(),
	Mission_Sheet_t2170179025::get_offset_of_ModeType_23(),
	Mission_Sheet_t2170179025::get_offset_of_ModeParam1_24(),
	Mission_Sheet_t2170179025::get_offset_of_ModeParam2_25(),
	Mission_Sheet_t2170179025::get_offset_of_ModeParam3_26(),
	Mission_Sheet_t2170179025::get_offset_of_EventMin_27(),
	Mission_Sheet_t2170179025::get_offset_of_EventMax_28(),
	Mission_Sheet_t2170179025::get_offset_of_EventPackageID_29(),
	Mission_Sheet_t2170179025::get_offset_of_LootPackageID_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4243 = { sizeof (Model_t2784438281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4243[3] = 
{
	Model_t2784438281::get_offset_of_Virus_Sheet_2(),
	Model_t2784438281::get_offset_of_Human_Sheet_3(),
	Model_t2784438281::get_offset_of_Zombie_Sheet_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4244 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4244[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4245 = { sizeof (Option_C_t3380442996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4245[10] = 
{
	Option_C_t3380442996::get_offset_of_LabelOption_2(),
	Option_C_t3380442996::get_offset_of_LabelLanguageName_3(),
	Option_C_t3380442996::get_offset_of_LabelLanguage_4(),
	Option_C_t3380442996::get_offset_of_MusicBar_5(),
	Option_C_t3380442996::get_offset_of_SoundSwitch_6(),
	Option_C_t3380442996::get_offset_of_Option_BackBtn_7(),
	Option_C_t3380442996::get_offset_of_LanguageRight_8(),
	Option_C_t3380442996::get_offset_of_LanguageLeft_9(),
	Option_C_t3380442996::get_offset_of_musicBarSlider_10(),
	Option_C_t3380442996::get_offset_of_soundToggle_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4246 = { sizeof (Performance_t3424269116), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4247 = { sizeof (Shop_C_t3579407312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4247[5] = 
{
	Shop_C_t3579407312::get_offset_of_ShopScroll_2(),
	Shop_C_t3579407312::get_offset_of_ShopGrid_3(),
	Shop_C_t3579407312::get_offset_of_prefabs_Cell_4(),
	Shop_C_t3579407312::get_offset_of_Shop_BackBtn_5(),
	Shop_C_t3579407312::get_offset_of_OP_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4248 = { sizeof (ShopCell_t2077651743), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4248[4] = 
{
	ShopCell_t2077651743::get_offset_of_LabelIAPName_2(),
	ShopCell_t2077651743::get_offset_of_LabelIAPPrice_3(),
	ShopCell_t2077651743::get_offset_of_cell_4(),
	ShopCell_t2077651743::get_offset_of_CellID_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4249 = { sizeof (Singleton_t2273088361), -1, sizeof(Singleton_t2273088361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4249[4] = 
{
	Singleton_t2273088361_StaticFields::get_offset_of_m_Container_2(),
	Singleton_t2273088361_StaticFields::get_offset_of_m_Name_3(),
	Singleton_t2273088361_StaticFields::get_offset_of_m_SingletonMap_4(),
	Singleton_t2273088361_StaticFields::get_offset_of_m_IsDestroying_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4250 = { sizeof (SpecialAbility_t3679320842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4250[1] = 
{
	SpecialAbility_t3679320842::get_offset_of_Ability_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4251 = { sizeof (SpecialAbility_Sheet_t1719590912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4251[11] = 
{
	SpecialAbility_Sheet_t1719590912::get_offset_of_ID_0(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_ResIcon_1(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_Name_2(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_Value1_3(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_Value1_Add_4(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_Value2_5(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_Value2_Add_6(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_Value3_7(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_Value3_Add_8(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_DesTextID_9(),
	SpecialAbility_Sheet_t1719590912::get_offset_of_SEName_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4252 = { sizeof (SPList_t1854852195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4252[2] = 
{
	SPList_t1854852195::get_offset_of_InfectionSheet_2(),
	SPList_t1854852195::get_offset_of_DamageSheet_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4253 = { sizeof (Infection_Sheet_t3020078557), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4253[2] = 
{
	Infection_Sheet_t3020078557::get_offset_of_TotalInfection_0(),
	Infection_Sheet_t3020078557::get_offset_of_GainSP_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4254 = { sizeof (Damage_Sheet_t566866227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4254[2] = 
{
	Damage_Sheet_t566866227::get_offset_of_TotalDamage_0(),
	Damage_Sheet_t566866227::get_offset_of_GainSP_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4255 = { sizeof (Unlock_t3610850725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4255[1] = 
{
	Unlock_t3610850725::get_offset_of_UnlockMission_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4256 = { sizeof (UnlockMission_Sheet_t238265305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4256[9] = 
{
	UnlockMission_Sheet_t238265305::get_offset_of_MissionID_0(),
	UnlockMission_Sheet_t238265305::get_offset_of_UnlockType_1(),
	UnlockMission_Sheet_t238265305::get_offset_of_Param1_2(),
	UnlockMission_Sheet_t238265305::get_offset_of_Param2_3(),
	UnlockMission_Sheet_t238265305::get_offset_of_Param3_4(),
	UnlockMission_Sheet_t238265305::get_offset_of_Param4_5(),
	UnlockMission_Sheet_t238265305::get_offset_of_Param5_6(),
	UnlockMission_Sheet_t238265305::get_offset_of_UnlockItemID_7(),
	UnlockMission_Sheet_t238265305::get_offset_of_UnlockCost_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4257 = { sizeof (User_t1595548040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4257[14] = 
{
	0,
	0,
	User_t1595548040::get_offset_of_DB_u_dna_2(),
	User_t1595548040::get_offset_of_Gold_3(),
	User_t1595548040::get_offset_of_Gem_4(),
	User_t1595548040::get_offset_of_DB_u_mf_5(),
	User_t1595548040::get_offset_of_DB_u_UnlockedViruses_6(),
	0,
	0,
	0,
	User_t1595548040::get_offset_of_DB_u_UnlockedZombies_10(),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4258 = { sizeof (U_DNA_t1591303968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4258[2] = 
{
	U_DNA_t1591303968::get_offset_of_ID_0(),
	U_DNA_t1591303968::get_offset_of_Lv_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4259 = { sizeof (U_MissionFlag_t571487453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4259[3] = 
{
	U_MissionFlag_t571487453::get_offset_of_VirusID_0(),
	U_MissionFlag_t571487453::get_offset_of_MissionID_1(),
	U_MissionFlag_t571487453::get_offset_of_Flag_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4260 = { sizeof (F_User_t3083609945), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4260[6] = 
{
	F_User_t3083609945::get_offset_of_DB_u_dna_0(),
	F_User_t3083609945::get_offset_of_Gold_1(),
	F_User_t3083609945::get_offset_of_Gem_2(),
	F_User_t3083609945::get_offset_of_DB_u_mf_3(),
	F_User_t3083609945::get_offset_of_DB_u_UnlockedViruses_4(),
	F_User_t3083609945::get_offset_of_DB_u_UnlockedZombies_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4261 = { sizeof (F_U_DNA_t3248367843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4261[2] = 
{
	F_U_DNA_t3248367843::get_offset_of_ID_0(),
	F_U_DNA_t3248367843::get_offset_of_Lv_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4262 = { sizeof (F_U_MissionFlag_t3001699104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4262[3] = 
{
	F_U_MissionFlag_t3001699104::get_offset_of_VirusID_0(),
	F_U_MissionFlag_t3001699104::get_offset_of_MissionID_1(),
	F_U_MissionFlag_t3001699104::get_offset_of_Flag_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4263 = { sizeof (Virus_t2139413478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4263[41] = 
{
	Virus_t2139413478::get_offset_of_VirusID_0(),
	Virus_t2139413478::get_offset_of_InfectSpeed_1(),
	Virus_t2139413478::get_offset_of_InfectHuman_1_2(),
	Virus_t2139413478::get_offset_of_InfectHuman_2_3(),
	Virus_t2139413478::get_offset_of_InfectHuman_3_4(),
	Virus_t2139413478::get_offset_of_InfectHuman_4_5(),
	Virus_t2139413478::get_offset_of_InfectHuman_5_6(),
	Virus_t2139413478::get_offset_of_InfectBlock_Climate_1_7(),
	Virus_t2139413478::get_offset_of_InfectBlock_Climate_2_8(),
	Virus_t2139413478::get_offset_of_InfectBlock_Climate_3_9(),
	Virus_t2139413478::get_offset_of_InfectBlock_Envi_1_10(),
	Virus_t2139413478::get_offset_of_InfectBlock_Envi_2_11(),
	Virus_t2139413478::get_offset_of_InfectBlock_Envi_3_12(),
	Virus_t2139413478::get_offset_of_CommunicateRate_13(),
	Virus_t2139413478::get_offset_of_CommunicateHuman_1_14(),
	Virus_t2139413478::get_offset_of_CommunicateHuman_2_15(),
	Virus_t2139413478::get_offset_of_CommunicateHuman_3_16(),
	Virus_t2139413478::get_offset_of_CommunicateHuman_4_17(),
	Virus_t2139413478::get_offset_of_CommunicateHuman_5_18(),
	Virus_t2139413478::get_offset_of_CommunicateBlock_Climate_1_19(),
	Virus_t2139413478::get_offset_of_CommunicateBlock_Climate_2_20(),
	Virus_t2139413478::get_offset_of_CommunicateBlock_Climate_3_21(),
	Virus_t2139413478::get_offset_of_CommunicateBlock_Envi_1_22(),
	Virus_t2139413478::get_offset_of_CommunicateBlock_Envi_2_23(),
	Virus_t2139413478::get_offset_of_CommunicateBlock_Envi_3_24(),
	Virus_t2139413478::get_offset_of_InitialSP_25(),
	Virus_t2139413478::get_offset_of_Name_26(),
	Virus_t2139413478::get_offset_of_Res_27(),
	Virus_t2139413478::get_offset_of_StrategyID_28(),
	Virus_t2139413478::get_offset_of_Medi_Start_29(),
	Virus_t2139413478::get_offset_of_Medi_Work_30(),
	Virus_t2139413478::get_offset_of_Medi_Spd_31(),
	Virus_t2139413478::get_offset_of_CommunicationThreshold_32(),
	Virus_t2139413478::get_offset_of_InfectHumans_33(),
	Virus_t2139413478::get_offset_of_InfectClims_34(),
	Virus_t2139413478::get_offset_of_InfectEnvis_35(),
	Virus_t2139413478::get_offset_of_CommunicateHumans_36(),
	Virus_t2139413478::get_offset_of_CommunicateClimates_37(),
	Virus_t2139413478::get_offset_of_CommunicateEnvis_38(),
	Virus_t2139413478::get_offset_of_Envi_39(),
	Virus_t2139413478::get_offset_of_Clim_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4264 = { sizeof (Virus_Sheet_t1023815819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4264[35] = 
{
	Virus_Sheet_t1023815819::get_offset_of_VirusID_0(),
	Virus_Sheet_t1023815819::get_offset_of_InfectSpeed_1(),
	Virus_Sheet_t1023815819::get_offset_of_InfectHuman_1_2(),
	Virus_Sheet_t1023815819::get_offset_of_InfectHuman_2_3(),
	Virus_Sheet_t1023815819::get_offset_of_InfectHuman_3_4(),
	Virus_Sheet_t1023815819::get_offset_of_InfectHuman_4_5(),
	Virus_Sheet_t1023815819::get_offset_of_InfectHuman_5_6(),
	Virus_Sheet_t1023815819::get_offset_of_InfectBlock_Climate_1_7(),
	Virus_Sheet_t1023815819::get_offset_of_InfectBlock_Climate_2_8(),
	Virus_Sheet_t1023815819::get_offset_of_InfectBlock_Climate_3_9(),
	Virus_Sheet_t1023815819::get_offset_of_InfectBlock_Envi_1_10(),
	Virus_Sheet_t1023815819::get_offset_of_InfectBlock_Envi_2_11(),
	Virus_Sheet_t1023815819::get_offset_of_InfectBlock_Envi_3_12(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateRate_13(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateHuman_1_14(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateHuman_2_15(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateHuman_3_16(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateHuman_4_17(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateHuman_5_18(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateBlock_Climate_1_19(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateBlock_Climate_2_20(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateBlock_Climate_3_21(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateBlock_Envi_1_22(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateBlock_Envi_2_23(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicateBlock_Envi_3_24(),
	Virus_Sheet_t1023815819::get_offset_of_InitialSP_25(),
	Virus_Sheet_t1023815819::get_offset_of_UnlockNum_26(),
	Virus_Sheet_t1023815819::get_offset_of_Name_27(),
	Virus_Sheet_t1023815819::get_offset_of_Des_28(),
	Virus_Sheet_t1023815819::get_offset_of_Res_29(),
	Virus_Sheet_t1023815819::get_offset_of_StrategyID_30(),
	Virus_Sheet_t1023815819::get_offset_of_Medi_Start_31(),
	Virus_Sheet_t1023815819::get_offset_of_Medi_Work_32(),
	Virus_Sheet_t1023815819::get_offset_of_Medi_Spd_33(),
	Virus_Sheet_t1023815819::get_offset_of_CommunicationThreshold_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4265 = { sizeof (VirusSelect_t3117736831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4265[7] = 
{
	VirusSelect_t3117736831::get_offset_of_prefabs_Cell_2(),
	VirusSelect_t3117736831::get_offset_of_VirusSelectScroll_3(),
	VirusSelect_t3117736831::get_offset_of_VirusSelectGrid_4(),
	VirusSelect_t3117736831::get_offset_of_VirusSelectBackBtn_5(),
	VirusSelect_t3117736831::get_offset_of_UnlockedMissionNum_6(),
	VirusSelect_t3117736831::get_offset_of_OP_7(),
	VirusSelect_t3117736831::get_offset_of_LabelUnlockedMissionNum_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4266 = { sizeof (VirusSelectCell_t3719212877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4266[5] = 
{
	VirusSelectCell_t3719212877::get_offset_of_LabelVirusName_2(),
	VirusSelectCell_t3719212877::get_offset_of_LabelVirusDes_3(),
	VirusSelectCell_t3719212877::get_offset_of_LabelMissionIndex_4(),
	VirusSelectCell_t3719212877::get_offset_of_cell_5(),
	VirusSelectCell_t3719212877::get_offset_of_CellID_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4267 = { sizeof (Zombie_t4273658849), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4267[42] = 
{
	Zombie_t4273658849::get_offset_of_ATTACK_INTERVAL_2(),
	Zombie_t4273658849::get_offset_of_HEALTH_INTERVAL_3(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Zombie_t4273658849::get_offset_of_updateInterval_11(),
	Zombie_t4273658849::get_offset_of_ZombieID_12(),
	Zombie_t4273658849::get_offset_of_MaxHP_13(),
	Zombie_t4273658849::get_offset_of_Atk_14(),
	Zombie_t4273658849::get_offset_of_Heal_15(),
	Zombie_t4273658849::get_offset_of_Def_16(),
	Zombie_t4273658849::get_offset_of_Infect_17(),
	Zombie_t4273658849::get_offset_of_Speed_18(),
	Zombie_t4273658849::get_offset_of_HPDecay_19(),
	Zombie_t4273658849::get_offset_of_DrainLife_20(),
	Zombie_t4273658849::get_offset_of_AbilityID_21(),
	Zombie_t4273658849::get_offset_of_Name_22(),
	Zombie_t4273658849::get_offset_of_Res_23(),
	Zombie_t4273658849::get_offset_of_SkillID_24(),
	Zombie_t4273658849::get_offset_of_param_25(),
	Zombie_t4273658849::get_offset_of_HP_26(),
	Zombie_t4273658849::get_offset_of_ClimateBoost_27(),
	Zombie_t4273658849::get_offset_of_EnviBoost_28(),
	Zombie_t4273658849::get_offset_of_Envi_29(),
	Zombie_t4273658849::get_offset_of_Clim_30(),
	Zombie_t4273658849::get_offset_of_HumanModel_31(),
	Zombie_t4273658849::get_offset_of_self_32(),
	Zombie_t4273658849::get_offset_of_Image_33(),
	Zombie_t4273658849::get_offset_of_LabelName_34(),
	Zombie_t4273658849::get_offset_of_HPBar_35(),
	Zombie_t4273658849::get_offset_of_ClimIcon_36(),
	Zombie_t4273658849::get_offset_of_EnviIcon_37(),
	Zombie_t4273658849::get_offset_of_SkillIcon_38(),
	Zombie_t4273658849::get_offset_of_Battle_39(),
	Zombie_t4273658849::get_offset_of_skillSEGO_40(),
	Zombie_t4273658849::get_offset_of_dieSEGO_41(),
	Zombie_t4273658849::get_offset_of_healDeltaTime_42(),
	Zombie_t4273658849::get_offset_of_skillDeltaTime_43(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4268 = { sizeof (Zombie_Sheet_t3198884114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4268[20] = 
{
	Zombie_Sheet_t3198884114::get_offset_of_ZombieID_0(),
	Zombie_Sheet_t3198884114::get_offset_of_MaxHP_1(),
	Zombie_Sheet_t3198884114::get_offset_of_Atk_2(),
	Zombie_Sheet_t3198884114::get_offset_of_Heal_3(),
	Zombie_Sheet_t3198884114::get_offset_of_Def_4(),
	Zombie_Sheet_t3198884114::get_offset_of_Infect_5(),
	Zombie_Sheet_t3198884114::get_offset_of_Speed_6(),
	Zombie_Sheet_t3198884114::get_offset_of_HPDecay_7(),
	Zombie_Sheet_t3198884114::get_offset_of_DrainLife_8(),
	Zombie_Sheet_t3198884114::get_offset_of_AbilityID_9(),
	Zombie_Sheet_t3198884114::get_offset_of_ClimateBoost_1_10(),
	Zombie_Sheet_t3198884114::get_offset_of_ClimateBoost_2_11(),
	Zombie_Sheet_t3198884114::get_offset_of_ClimateBoost_3_12(),
	Zombie_Sheet_t3198884114::get_offset_of_EnviBoost_1_13(),
	Zombie_Sheet_t3198884114::get_offset_of_EnviBoost_2_14(),
	Zombie_Sheet_t3198884114::get_offset_of_EnviBoost_3_15(),
	Zombie_Sheet_t3198884114::get_offset_of_Weight_16(),
	Zombie_Sheet_t3198884114::get_offset_of_Name_17(),
	Zombie_Sheet_t3198884114::get_offset_of_Res_18(),
	Zombie_Sheet_t3198884114::get_offset_of_SkillID_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4269 = { sizeof (U3CPrivateImplementationDetailsU3E_t204795247), -1, sizeof(U3CPrivateImplementationDetailsU3E_t204795247_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4269[3] = 
{
	U3CPrivateImplementationDetailsU3E_t204795247_StaticFields::get_offset_of_U24fieldU2D68F00C41318114691E02CD7532ACF69A8DBE23C2_0(),
	U3CPrivateImplementationDetailsU3E_t204795247_StaticFields::get_offset_of_U24fieldU2D7FB9790B49277F6151D3EB5D555CCF105904DB43_1(),
	U3CPrivateImplementationDetailsU3E_t204795247_StaticFields::get_offset_of_U24fieldU2DD26A27B5531D6252D57917C90488F9C3F7AF8F98_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4270 = { sizeof (U24ArrayTypeU3D32_t679519693)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D32_t679519693 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4271 = { sizeof (U24ArrayTypeU3D580_t1496061749)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D580_t1496061749 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4272 = { sizeof (U24ArrayTypeU3D8_t1539176847)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D8_t1539176847 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
