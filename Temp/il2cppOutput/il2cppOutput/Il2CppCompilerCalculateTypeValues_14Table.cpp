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

// System.Text.EncoderFallback
struct EncoderFallback_t4084546684;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t1932256414;
// System.Globalization.CultureInfo
struct CultureInfo_t197737613;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t889823082;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t526335175;
// System.Globalization.TextInfo
struct TextInfo_t3464677949;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4160542075;
// System.Globalization.CompareInfo
struct CompareInfo_t3802660337;
// System.Globalization.Calendar
struct Calendar_t571621478;
// System.Byte[]
struct ByteU5BU5D_t3632859112;
// System.Globalization.CultureData
struct CultureData_t1976740787;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t582309288;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3466828286;
// System.Void
struct Void_t634856565;
// System.Globalization.Punycode
struct Punycode_t524748583;
// System.Int32[]
struct Int32U5BU5D_t1276023077;
// System.Globalization.CalendarData[]
struct CalendarDataU5BU5D_t650549025;
// System.Char[]
struct CharU5BU5D_t1313538844;
// System.Globalization.InternalEncodingDataItem[]
struct InternalEncodingDataItemU5BU5D_t2499650858;
// System.Globalization.InternalCodePageDataItem[]
struct InternalCodePageDataItemU5BU5D_t1497064205;
// System.Collections.Hashtable
struct Hashtable_t3971943106;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t2047667167;
// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator>
struct Dictionary_2_t1021790544;
// System.Globalization.SortVersion
struct SortVersion_t1822720062;
// System.UInt16
struct UInt16_t2757840308;
// System.Byte
struct Byte_t1087778533;
// System.Globalization.CharUnicodeInfo/DigitValues
struct DigitValues_t3238575465;
// System.Globalization.HebrewNumber/HebrewValue[]
struct HebrewValueU5BU5D_t254494047;
// System.Globalization.HebrewNumber/HS[][]
struct HSU5BU5DU5BU5D_t512339775;
// System.Text.DecoderFallback
struct DecoderFallback_t546595686;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1754900095;
// System.Char
struct Char_t689009857;
// System.Text.StringBuilder
struct StringBuilder_t1017942816;
// System.Collections.IDictionary
struct IDictionary_t2209762685;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3559648024;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t3791304912;
// System.IntPtr[]
struct IntPtrU5BU5D_t3595384210;
// System.Text.Encoding
struct Encoding_t1804781422;
// System.Text.DecoderNLS
struct DecoderNLS_t3552643798;
// System.Text.EncoderNLS
struct EncoderNLS_t1717298589;
// System.Text.EncodingProvider[]
struct EncodingProviderU5BU5D_t4129658180;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t4157734213;
// Mono.RuntimeStructs/GenericParamInfo
struct GenericParamInfo_t3154325765;
// Mono.RuntimeStructs/RemoteClass
struct RemoteClass_t1062292167;
// Mono.RuntimeStructs/MonoClass
struct MonoClass_t2768458919;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1843741840;
// System.SByte[]
struct SByteU5BU5D_t3813736024;
// System.Boolean[]
struct BooleanU5BU5D_t3168228753;
// System.Globalization.EraInfo[]
struct EraInfoU5BU5D_t4130280761;
// System.Globalization.GregorianCalendarHelper
struct GregorianCalendarHelper_t404050585;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t2081773973;
// System.Globalization.TimeSpanParse/TimeSpanToken[]
struct TimeSpanTokenU5BU5D_t480110851;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1208702770;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3913670143;

struct CultureInfo_t197737613_marshaled_pinvoke;
struct CultureData_t1976740787_marshaled_pinvoke;
struct CultureInfo_t197737613_marshaled_com;
struct CultureData_t1976740787_marshaled_com;
struct Exception_t4083038797_marshaled_pinvoke;
struct Exception_t4083038797_marshaled_com;
struct TimeSpanToken_t2653461926_marshaled_pinvoke;
struct TimeSpanToken_t2653461926_marshaled_com;



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
#ifndef ENCODER_T2344908708_H
#define ENCODER_T2344908708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoder
struct  Encoder_t2344908708  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t4084546684 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t1932256414 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t2344908708, ___m_fallback_0)); }
	inline EncoderFallback_t4084546684 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t4084546684 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t4084546684 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallback_0), value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t2344908708, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t1932256414 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t1932256414 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t1932256414 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallbackBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T2344908708_H
#ifndef CULTUREINFO_T197737613_H
#define CULTUREINFO_T197737613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t197737613  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t889823082 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t526335175 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3464677949 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t4160542075* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t3802660337 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t571621478 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t197737613 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t3632859112* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1976740787 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___numInfo_10)); }
	inline NumberFormatInfo_t889823082 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t889823082 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t889823082 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t526335175 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t526335175 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t526335175 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___textInfo_12)); }
	inline TextInfo_t3464677949 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3464677949 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3464677949 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___native_calendar_names_20)); }
	inline StringU5BU5D_t4160542075* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t4160542075** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t4160542075* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___compareInfo_21)); }
	inline CompareInfo_t3802660337 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t3802660337 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t3802660337 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___calendar_24)); }
	inline Calendar_t571621478 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t571621478 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t571621478 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___parent_culture_25)); }
	inline CultureInfo_t197737613 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t197737613 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t197737613 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t3632859112* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t3632859112** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t3632859112* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___m_cultureData_28)); }
	inline CultureData_t1976740787 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1976740787 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1976740787 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t197737613_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t197737613 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t197737613 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t197737613 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t197737613 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t582309288 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3466828286 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t197737613 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t197737613 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t197737613 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t197737613 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t197737613 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t197737613 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t197737613 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t197737613 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t197737613 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t197737613 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t197737613 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t197737613 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t582309288 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t582309288 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t582309288 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3466828286 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3466828286 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3466828286 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t197737613_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t197737613_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t889823082 * ___numInfo_10;
	DateTimeFormatInfo_t526335175 * ___dateTimeInfo_11;
	TextInfo_t3464677949 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t3802660337 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t571621478 * ___calendar_24;
	CultureInfo_t197737613_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1976740787_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t197737613_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t889823082 * ___numInfo_10;
	DateTimeFormatInfo_t526335175 * ___dateTimeInfo_11;
	TextInfo_t3464677949 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t3802660337 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t571621478 * ___calendar_24;
	CultureInfo_t197737613_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1976740787_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T197737613_H
#ifndef IDNMAPPING_T743262040_H
#define IDNMAPPING_T743262040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.IdnMapping
struct  IdnMapping_t743262040  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.IdnMapping::allow_unassigned
	bool ___allow_unassigned_0;
	// System.Boolean System.Globalization.IdnMapping::use_std3
	bool ___use_std3_1;
	// System.Globalization.Punycode System.Globalization.IdnMapping::puny
	Punycode_t524748583 * ___puny_2;

public:
	inline static int32_t get_offset_of_allow_unassigned_0() { return static_cast<int32_t>(offsetof(IdnMapping_t743262040, ___allow_unassigned_0)); }
	inline bool get_allow_unassigned_0() const { return ___allow_unassigned_0; }
	inline bool* get_address_of_allow_unassigned_0() { return &___allow_unassigned_0; }
	inline void set_allow_unassigned_0(bool value)
	{
		___allow_unassigned_0 = value;
	}

	inline static int32_t get_offset_of_use_std3_1() { return static_cast<int32_t>(offsetof(IdnMapping_t743262040, ___use_std3_1)); }
	inline bool get_use_std3_1() const { return ___use_std3_1; }
	inline bool* get_address_of_use_std3_1() { return &___use_std3_1; }
	inline void set_use_std3_1(bool value)
	{
		___use_std3_1 = value;
	}

	inline static int32_t get_offset_of_puny_2() { return static_cast<int32_t>(offsetof(IdnMapping_t743262040, ___puny_2)); }
	inline Punycode_t524748583 * get_puny_2() const { return ___puny_2; }
	inline Punycode_t524748583 ** get_address_of_puny_2() { return &___puny_2; }
	inline void set_puny_2(Punycode_t524748583 * value)
	{
		___puny_2 = value;
		Il2CppCodeGenWriteBarrier((&___puny_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDNMAPPING_T743262040_H
#ifndef BOOTSTRING_T2556271891_H
#define BOOTSTRING_T2556271891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Bootstring
struct  Bootstring_t2556271891  : public RuntimeObject
{
public:
	// System.Char System.Globalization.Bootstring::delimiter
	Il2CppChar ___delimiter_0;
	// System.Int32 System.Globalization.Bootstring::base_num
	int32_t ___base_num_1;
	// System.Int32 System.Globalization.Bootstring::tmin
	int32_t ___tmin_2;
	// System.Int32 System.Globalization.Bootstring::tmax
	int32_t ___tmax_3;
	// System.Int32 System.Globalization.Bootstring::skew
	int32_t ___skew_4;
	// System.Int32 System.Globalization.Bootstring::damp
	int32_t ___damp_5;
	// System.Int32 System.Globalization.Bootstring::initial_bias
	int32_t ___initial_bias_6;
	// System.Int32 System.Globalization.Bootstring::initial_n
	int32_t ___initial_n_7;

public:
	inline static int32_t get_offset_of_delimiter_0() { return static_cast<int32_t>(offsetof(Bootstring_t2556271891, ___delimiter_0)); }
	inline Il2CppChar get_delimiter_0() const { return ___delimiter_0; }
	inline Il2CppChar* get_address_of_delimiter_0() { return &___delimiter_0; }
	inline void set_delimiter_0(Il2CppChar value)
	{
		___delimiter_0 = value;
	}

	inline static int32_t get_offset_of_base_num_1() { return static_cast<int32_t>(offsetof(Bootstring_t2556271891, ___base_num_1)); }
	inline int32_t get_base_num_1() const { return ___base_num_1; }
	inline int32_t* get_address_of_base_num_1() { return &___base_num_1; }
	inline void set_base_num_1(int32_t value)
	{
		___base_num_1 = value;
	}

	inline static int32_t get_offset_of_tmin_2() { return static_cast<int32_t>(offsetof(Bootstring_t2556271891, ___tmin_2)); }
	inline int32_t get_tmin_2() const { return ___tmin_2; }
	inline int32_t* get_address_of_tmin_2() { return &___tmin_2; }
	inline void set_tmin_2(int32_t value)
	{
		___tmin_2 = value;
	}

	inline static int32_t get_offset_of_tmax_3() { return static_cast<int32_t>(offsetof(Bootstring_t2556271891, ___tmax_3)); }
	inline int32_t get_tmax_3() const { return ___tmax_3; }
	inline int32_t* get_address_of_tmax_3() { return &___tmax_3; }
	inline void set_tmax_3(int32_t value)
	{
		___tmax_3 = value;
	}

	inline static int32_t get_offset_of_skew_4() { return static_cast<int32_t>(offsetof(Bootstring_t2556271891, ___skew_4)); }
	inline int32_t get_skew_4() const { return ___skew_4; }
	inline int32_t* get_address_of_skew_4() { return &___skew_4; }
	inline void set_skew_4(int32_t value)
	{
		___skew_4 = value;
	}

	inline static int32_t get_offset_of_damp_5() { return static_cast<int32_t>(offsetof(Bootstring_t2556271891, ___damp_5)); }
	inline int32_t get_damp_5() const { return ___damp_5; }
	inline int32_t* get_address_of_damp_5() { return &___damp_5; }
	inline void set_damp_5(int32_t value)
	{
		___damp_5 = value;
	}

	inline static int32_t get_offset_of_initial_bias_6() { return static_cast<int32_t>(offsetof(Bootstring_t2556271891, ___initial_bias_6)); }
	inline int32_t get_initial_bias_6() const { return ___initial_bias_6; }
	inline int32_t* get_address_of_initial_bias_6() { return &___initial_bias_6; }
	inline void set_initial_bias_6(int32_t value)
	{
		___initial_bias_6 = value;
	}

	inline static int32_t get_offset_of_initial_n_7() { return static_cast<int32_t>(offsetof(Bootstring_t2556271891, ___initial_n_7)); }
	inline int32_t get_initial_n_7() const { return ___initial_n_7; }
	inline int32_t* get_address_of_initial_n_7() { return &___initial_n_7; }
	inline void set_initial_n_7(int32_t value)
	{
		___initial_n_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOTSTRING_T2556271891_H
#ifndef REGIONINFO_T3518366721_H
#define REGIONINFO_T3518366721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.RegionInfo
struct  RegionInfo_t3518366721  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.RegionInfo::regionId
	int32_t ___regionId_1;
	// System.String System.Globalization.RegionInfo::iso2Name
	String_t* ___iso2Name_2;
	// System.String System.Globalization.RegionInfo::iso3Name
	String_t* ___iso3Name_3;
	// System.String System.Globalization.RegionInfo::win3Name
	String_t* ___win3Name_4;
	// System.String System.Globalization.RegionInfo::englishName
	String_t* ___englishName_5;
	// System.String System.Globalization.RegionInfo::nativeName
	String_t* ___nativeName_6;
	// System.String System.Globalization.RegionInfo::currencySymbol
	String_t* ___currencySymbol_7;
	// System.String System.Globalization.RegionInfo::isoCurrencySymbol
	String_t* ___isoCurrencySymbol_8;
	// System.String System.Globalization.RegionInfo::currencyEnglishName
	String_t* ___currencyEnglishName_9;
	// System.String System.Globalization.RegionInfo::currencyNativeName
	String_t* ___currencyNativeName_10;

public:
	inline static int32_t get_offset_of_regionId_1() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___regionId_1)); }
	inline int32_t get_regionId_1() const { return ___regionId_1; }
	inline int32_t* get_address_of_regionId_1() { return &___regionId_1; }
	inline void set_regionId_1(int32_t value)
	{
		___regionId_1 = value;
	}

	inline static int32_t get_offset_of_iso2Name_2() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___iso2Name_2)); }
	inline String_t* get_iso2Name_2() const { return ___iso2Name_2; }
	inline String_t** get_address_of_iso2Name_2() { return &___iso2Name_2; }
	inline void set_iso2Name_2(String_t* value)
	{
		___iso2Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___iso2Name_2), value);
	}

	inline static int32_t get_offset_of_iso3Name_3() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___iso3Name_3)); }
	inline String_t* get_iso3Name_3() const { return ___iso3Name_3; }
	inline String_t** get_address_of_iso3Name_3() { return &___iso3Name_3; }
	inline void set_iso3Name_3(String_t* value)
	{
		___iso3Name_3 = value;
		Il2CppCodeGenWriteBarrier((&___iso3Name_3), value);
	}

	inline static int32_t get_offset_of_win3Name_4() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___win3Name_4)); }
	inline String_t* get_win3Name_4() const { return ___win3Name_4; }
	inline String_t** get_address_of_win3Name_4() { return &___win3Name_4; }
	inline void set_win3Name_4(String_t* value)
	{
		___win3Name_4 = value;
		Il2CppCodeGenWriteBarrier((&___win3Name_4), value);
	}

	inline static int32_t get_offset_of_englishName_5() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___englishName_5)); }
	inline String_t* get_englishName_5() const { return ___englishName_5; }
	inline String_t** get_address_of_englishName_5() { return &___englishName_5; }
	inline void set_englishName_5(String_t* value)
	{
		___englishName_5 = value;
		Il2CppCodeGenWriteBarrier((&___englishName_5), value);
	}

	inline static int32_t get_offset_of_nativeName_6() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___nativeName_6)); }
	inline String_t* get_nativeName_6() const { return ___nativeName_6; }
	inline String_t** get_address_of_nativeName_6() { return &___nativeName_6; }
	inline void set_nativeName_6(String_t* value)
	{
		___nativeName_6 = value;
		Il2CppCodeGenWriteBarrier((&___nativeName_6), value);
	}

	inline static int32_t get_offset_of_currencySymbol_7() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___currencySymbol_7)); }
	inline String_t* get_currencySymbol_7() const { return ___currencySymbol_7; }
	inline String_t** get_address_of_currencySymbol_7() { return &___currencySymbol_7; }
	inline void set_currencySymbol_7(String_t* value)
	{
		___currencySymbol_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_7), value);
	}

	inline static int32_t get_offset_of_isoCurrencySymbol_8() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___isoCurrencySymbol_8)); }
	inline String_t* get_isoCurrencySymbol_8() const { return ___isoCurrencySymbol_8; }
	inline String_t** get_address_of_isoCurrencySymbol_8() { return &___isoCurrencySymbol_8; }
	inline void set_isoCurrencySymbol_8(String_t* value)
	{
		___isoCurrencySymbol_8 = value;
		Il2CppCodeGenWriteBarrier((&___isoCurrencySymbol_8), value);
	}

	inline static int32_t get_offset_of_currencyEnglishName_9() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___currencyEnglishName_9)); }
	inline String_t* get_currencyEnglishName_9() const { return ___currencyEnglishName_9; }
	inline String_t** get_address_of_currencyEnglishName_9() { return &___currencyEnglishName_9; }
	inline void set_currencyEnglishName_9(String_t* value)
	{
		___currencyEnglishName_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyEnglishName_9), value);
	}

	inline static int32_t get_offset_of_currencyNativeName_10() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721, ___currencyNativeName_10)); }
	inline String_t* get_currencyNativeName_10() const { return ___currencyNativeName_10; }
	inline String_t** get_address_of_currencyNativeName_10() { return &___currencyNativeName_10; }
	inline void set_currencyNativeName_10(String_t* value)
	{
		___currencyNativeName_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencyNativeName_10), value);
	}
};

struct RegionInfo_t3518366721_StaticFields
{
public:
	// System.Globalization.RegionInfo System.Globalization.RegionInfo::currentRegion
	RegionInfo_t3518366721 * ___currentRegion_0;

public:
	inline static int32_t get_offset_of_currentRegion_0() { return static_cast<int32_t>(offsetof(RegionInfo_t3518366721_StaticFields, ___currentRegion_0)); }
	inline RegionInfo_t3518366721 * get_currentRegion_0() const { return ___currentRegion_0; }
	inline RegionInfo_t3518366721 ** get_address_of_currentRegion_0() { return &___currentRegion_0; }
	inline void set_currentRegion_0(RegionInfo_t3518366721 * value)
	{
		___currentRegion_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentRegion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.RegionInfo
struct RegionInfo_t3518366721_marshaled_pinvoke
{
	int32_t ___regionId_1;
	char* ___iso2Name_2;
	char* ___iso3Name_3;
	char* ___win3Name_4;
	char* ___englishName_5;
	char* ___nativeName_6;
	char* ___currencySymbol_7;
	char* ___isoCurrencySymbol_8;
	char* ___currencyEnglishName_9;
	char* ___currencyNativeName_10;
};
// Native definition for COM marshalling of System.Globalization.RegionInfo
struct RegionInfo_t3518366721_marshaled_com
{
	int32_t ___regionId_1;
	Il2CppChar* ___iso2Name_2;
	Il2CppChar* ___iso3Name_3;
	Il2CppChar* ___win3Name_4;
	Il2CppChar* ___englishName_5;
	Il2CppChar* ___nativeName_6;
	Il2CppChar* ___currencySymbol_7;
	Il2CppChar* ___isoCurrencySymbol_8;
	Il2CppChar* ___currencyEnglishName_9;
	Il2CppChar* ___currencyNativeName_10;
};
#endif // REGIONINFO_T3518366721_H
#ifndef CALENDARDATA_T2609061728_H
#define CALENDARDATA_T2609061728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CalendarData
struct  CalendarData_t2609061728  : public RuntimeObject
{
public:
	// System.String System.Globalization.CalendarData::sNativeName
	String_t* ___sNativeName_1;
	// System.String[] System.Globalization.CalendarData::saShortDates
	StringU5BU5D_t4160542075* ___saShortDates_2;
	// System.String[] System.Globalization.CalendarData::saYearMonths
	StringU5BU5D_t4160542075* ___saYearMonths_3;
	// System.String[] System.Globalization.CalendarData::saLongDates
	StringU5BU5D_t4160542075* ___saLongDates_4;
	// System.String System.Globalization.CalendarData::sMonthDay
	String_t* ___sMonthDay_5;
	// System.String[] System.Globalization.CalendarData::saEraNames
	StringU5BU5D_t4160542075* ___saEraNames_6;
	// System.String[] System.Globalization.CalendarData::saAbbrevEraNames
	StringU5BU5D_t4160542075* ___saAbbrevEraNames_7;
	// System.String[] System.Globalization.CalendarData::saAbbrevEnglishEraNames
	StringU5BU5D_t4160542075* ___saAbbrevEnglishEraNames_8;
	// System.String[] System.Globalization.CalendarData::saDayNames
	StringU5BU5D_t4160542075* ___saDayNames_9;
	// System.String[] System.Globalization.CalendarData::saAbbrevDayNames
	StringU5BU5D_t4160542075* ___saAbbrevDayNames_10;
	// System.String[] System.Globalization.CalendarData::saSuperShortDayNames
	StringU5BU5D_t4160542075* ___saSuperShortDayNames_11;
	// System.String[] System.Globalization.CalendarData::saMonthNames
	StringU5BU5D_t4160542075* ___saMonthNames_12;
	// System.String[] System.Globalization.CalendarData::saAbbrevMonthNames
	StringU5BU5D_t4160542075* ___saAbbrevMonthNames_13;
	// System.String[] System.Globalization.CalendarData::saMonthGenitiveNames
	StringU5BU5D_t4160542075* ___saMonthGenitiveNames_14;
	// System.String[] System.Globalization.CalendarData::saAbbrevMonthGenitiveNames
	StringU5BU5D_t4160542075* ___saAbbrevMonthGenitiveNames_15;
	// System.String[] System.Globalization.CalendarData::saLeapYearMonthNames
	StringU5BU5D_t4160542075* ___saLeapYearMonthNames_16;
	// System.Int32 System.Globalization.CalendarData::iTwoDigitYearMax
	int32_t ___iTwoDigitYearMax_17;
	// System.Int32 System.Globalization.CalendarData::iCurrentEra
	int32_t ___iCurrentEra_18;
	// System.Boolean System.Globalization.CalendarData::bUseUserOverrides
	bool ___bUseUserOverrides_19;

public:
	inline static int32_t get_offset_of_sNativeName_1() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___sNativeName_1)); }
	inline String_t* get_sNativeName_1() const { return ___sNativeName_1; }
	inline String_t** get_address_of_sNativeName_1() { return &___sNativeName_1; }
	inline void set_sNativeName_1(String_t* value)
	{
		___sNativeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___sNativeName_1), value);
	}

	inline static int32_t get_offset_of_saShortDates_2() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saShortDates_2)); }
	inline StringU5BU5D_t4160542075* get_saShortDates_2() const { return ___saShortDates_2; }
	inline StringU5BU5D_t4160542075** get_address_of_saShortDates_2() { return &___saShortDates_2; }
	inline void set_saShortDates_2(StringU5BU5D_t4160542075* value)
	{
		___saShortDates_2 = value;
		Il2CppCodeGenWriteBarrier((&___saShortDates_2), value);
	}

	inline static int32_t get_offset_of_saYearMonths_3() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saYearMonths_3)); }
	inline StringU5BU5D_t4160542075* get_saYearMonths_3() const { return ___saYearMonths_3; }
	inline StringU5BU5D_t4160542075** get_address_of_saYearMonths_3() { return &___saYearMonths_3; }
	inline void set_saYearMonths_3(StringU5BU5D_t4160542075* value)
	{
		___saYearMonths_3 = value;
		Il2CppCodeGenWriteBarrier((&___saYearMonths_3), value);
	}

	inline static int32_t get_offset_of_saLongDates_4() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saLongDates_4)); }
	inline StringU5BU5D_t4160542075* get_saLongDates_4() const { return ___saLongDates_4; }
	inline StringU5BU5D_t4160542075** get_address_of_saLongDates_4() { return &___saLongDates_4; }
	inline void set_saLongDates_4(StringU5BU5D_t4160542075* value)
	{
		___saLongDates_4 = value;
		Il2CppCodeGenWriteBarrier((&___saLongDates_4), value);
	}

	inline static int32_t get_offset_of_sMonthDay_5() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___sMonthDay_5)); }
	inline String_t* get_sMonthDay_5() const { return ___sMonthDay_5; }
	inline String_t** get_address_of_sMonthDay_5() { return &___sMonthDay_5; }
	inline void set_sMonthDay_5(String_t* value)
	{
		___sMonthDay_5 = value;
		Il2CppCodeGenWriteBarrier((&___sMonthDay_5), value);
	}

	inline static int32_t get_offset_of_saEraNames_6() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saEraNames_6)); }
	inline StringU5BU5D_t4160542075* get_saEraNames_6() const { return ___saEraNames_6; }
	inline StringU5BU5D_t4160542075** get_address_of_saEraNames_6() { return &___saEraNames_6; }
	inline void set_saEraNames_6(StringU5BU5D_t4160542075* value)
	{
		___saEraNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___saEraNames_6), value);
	}

	inline static int32_t get_offset_of_saAbbrevEraNames_7() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saAbbrevEraNames_7)); }
	inline StringU5BU5D_t4160542075* get_saAbbrevEraNames_7() const { return ___saAbbrevEraNames_7; }
	inline StringU5BU5D_t4160542075** get_address_of_saAbbrevEraNames_7() { return &___saAbbrevEraNames_7; }
	inline void set_saAbbrevEraNames_7(StringU5BU5D_t4160542075* value)
	{
		___saAbbrevEraNames_7 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevEraNames_7), value);
	}

	inline static int32_t get_offset_of_saAbbrevEnglishEraNames_8() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saAbbrevEnglishEraNames_8)); }
	inline StringU5BU5D_t4160542075* get_saAbbrevEnglishEraNames_8() const { return ___saAbbrevEnglishEraNames_8; }
	inline StringU5BU5D_t4160542075** get_address_of_saAbbrevEnglishEraNames_8() { return &___saAbbrevEnglishEraNames_8; }
	inline void set_saAbbrevEnglishEraNames_8(StringU5BU5D_t4160542075* value)
	{
		___saAbbrevEnglishEraNames_8 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevEnglishEraNames_8), value);
	}

	inline static int32_t get_offset_of_saDayNames_9() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saDayNames_9)); }
	inline StringU5BU5D_t4160542075* get_saDayNames_9() const { return ___saDayNames_9; }
	inline StringU5BU5D_t4160542075** get_address_of_saDayNames_9() { return &___saDayNames_9; }
	inline void set_saDayNames_9(StringU5BU5D_t4160542075* value)
	{
		___saDayNames_9 = value;
		Il2CppCodeGenWriteBarrier((&___saDayNames_9), value);
	}

	inline static int32_t get_offset_of_saAbbrevDayNames_10() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saAbbrevDayNames_10)); }
	inline StringU5BU5D_t4160542075* get_saAbbrevDayNames_10() const { return ___saAbbrevDayNames_10; }
	inline StringU5BU5D_t4160542075** get_address_of_saAbbrevDayNames_10() { return &___saAbbrevDayNames_10; }
	inline void set_saAbbrevDayNames_10(StringU5BU5D_t4160542075* value)
	{
		___saAbbrevDayNames_10 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevDayNames_10), value);
	}

	inline static int32_t get_offset_of_saSuperShortDayNames_11() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saSuperShortDayNames_11)); }
	inline StringU5BU5D_t4160542075* get_saSuperShortDayNames_11() const { return ___saSuperShortDayNames_11; }
	inline StringU5BU5D_t4160542075** get_address_of_saSuperShortDayNames_11() { return &___saSuperShortDayNames_11; }
	inline void set_saSuperShortDayNames_11(StringU5BU5D_t4160542075* value)
	{
		___saSuperShortDayNames_11 = value;
		Il2CppCodeGenWriteBarrier((&___saSuperShortDayNames_11), value);
	}

	inline static int32_t get_offset_of_saMonthNames_12() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saMonthNames_12)); }
	inline StringU5BU5D_t4160542075* get_saMonthNames_12() const { return ___saMonthNames_12; }
	inline StringU5BU5D_t4160542075** get_address_of_saMonthNames_12() { return &___saMonthNames_12; }
	inline void set_saMonthNames_12(StringU5BU5D_t4160542075* value)
	{
		___saMonthNames_12 = value;
		Il2CppCodeGenWriteBarrier((&___saMonthNames_12), value);
	}

	inline static int32_t get_offset_of_saAbbrevMonthNames_13() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saAbbrevMonthNames_13)); }
	inline StringU5BU5D_t4160542075* get_saAbbrevMonthNames_13() const { return ___saAbbrevMonthNames_13; }
	inline StringU5BU5D_t4160542075** get_address_of_saAbbrevMonthNames_13() { return &___saAbbrevMonthNames_13; }
	inline void set_saAbbrevMonthNames_13(StringU5BU5D_t4160542075* value)
	{
		___saAbbrevMonthNames_13 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevMonthNames_13), value);
	}

	inline static int32_t get_offset_of_saMonthGenitiveNames_14() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saMonthGenitiveNames_14)); }
	inline StringU5BU5D_t4160542075* get_saMonthGenitiveNames_14() const { return ___saMonthGenitiveNames_14; }
	inline StringU5BU5D_t4160542075** get_address_of_saMonthGenitiveNames_14() { return &___saMonthGenitiveNames_14; }
	inline void set_saMonthGenitiveNames_14(StringU5BU5D_t4160542075* value)
	{
		___saMonthGenitiveNames_14 = value;
		Il2CppCodeGenWriteBarrier((&___saMonthGenitiveNames_14), value);
	}

	inline static int32_t get_offset_of_saAbbrevMonthGenitiveNames_15() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saAbbrevMonthGenitiveNames_15)); }
	inline StringU5BU5D_t4160542075* get_saAbbrevMonthGenitiveNames_15() const { return ___saAbbrevMonthGenitiveNames_15; }
	inline StringU5BU5D_t4160542075** get_address_of_saAbbrevMonthGenitiveNames_15() { return &___saAbbrevMonthGenitiveNames_15; }
	inline void set_saAbbrevMonthGenitiveNames_15(StringU5BU5D_t4160542075* value)
	{
		___saAbbrevMonthGenitiveNames_15 = value;
		Il2CppCodeGenWriteBarrier((&___saAbbrevMonthGenitiveNames_15), value);
	}

	inline static int32_t get_offset_of_saLeapYearMonthNames_16() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___saLeapYearMonthNames_16)); }
	inline StringU5BU5D_t4160542075* get_saLeapYearMonthNames_16() const { return ___saLeapYearMonthNames_16; }
	inline StringU5BU5D_t4160542075** get_address_of_saLeapYearMonthNames_16() { return &___saLeapYearMonthNames_16; }
	inline void set_saLeapYearMonthNames_16(StringU5BU5D_t4160542075* value)
	{
		___saLeapYearMonthNames_16 = value;
		Il2CppCodeGenWriteBarrier((&___saLeapYearMonthNames_16), value);
	}

	inline static int32_t get_offset_of_iTwoDigitYearMax_17() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___iTwoDigitYearMax_17)); }
	inline int32_t get_iTwoDigitYearMax_17() const { return ___iTwoDigitYearMax_17; }
	inline int32_t* get_address_of_iTwoDigitYearMax_17() { return &___iTwoDigitYearMax_17; }
	inline void set_iTwoDigitYearMax_17(int32_t value)
	{
		___iTwoDigitYearMax_17 = value;
	}

	inline static int32_t get_offset_of_iCurrentEra_18() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___iCurrentEra_18)); }
	inline int32_t get_iCurrentEra_18() const { return ___iCurrentEra_18; }
	inline int32_t* get_address_of_iCurrentEra_18() { return &___iCurrentEra_18; }
	inline void set_iCurrentEra_18(int32_t value)
	{
		___iCurrentEra_18 = value;
	}

	inline static int32_t get_offset_of_bUseUserOverrides_19() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728, ___bUseUserOverrides_19)); }
	inline bool get_bUseUserOverrides_19() const { return ___bUseUserOverrides_19; }
	inline bool* get_address_of_bUseUserOverrides_19() { return &___bUseUserOverrides_19; }
	inline void set_bUseUserOverrides_19(bool value)
	{
		___bUseUserOverrides_19 = value;
	}
};

struct CalendarData_t2609061728_StaticFields
{
public:
	// System.Globalization.CalendarData System.Globalization.CalendarData::Invariant
	CalendarData_t2609061728 * ___Invariant_20;

public:
	inline static int32_t get_offset_of_Invariant_20() { return static_cast<int32_t>(offsetof(CalendarData_t2609061728_StaticFields, ___Invariant_20)); }
	inline CalendarData_t2609061728 * get_Invariant_20() const { return ___Invariant_20; }
	inline CalendarData_t2609061728 ** get_address_of_Invariant_20() { return &___Invariant_20; }
	inline void set_Invariant_20(CalendarData_t2609061728 * value)
	{
		___Invariant_20 = value;
		Il2CppCodeGenWriteBarrier((&___Invariant_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CalendarData
struct CalendarData_t2609061728_marshaled_pinvoke
{
	char* ___sNativeName_1;
	char** ___saShortDates_2;
	char** ___saYearMonths_3;
	char** ___saLongDates_4;
	char* ___sMonthDay_5;
	char** ___saEraNames_6;
	char** ___saAbbrevEraNames_7;
	char** ___saAbbrevEnglishEraNames_8;
	char** ___saDayNames_9;
	char** ___saAbbrevDayNames_10;
	char** ___saSuperShortDayNames_11;
	char** ___saMonthNames_12;
	char** ___saAbbrevMonthNames_13;
	char** ___saMonthGenitiveNames_14;
	char** ___saAbbrevMonthGenitiveNames_15;
	char** ___saLeapYearMonthNames_16;
	int32_t ___iTwoDigitYearMax_17;
	int32_t ___iCurrentEra_18;
	int32_t ___bUseUserOverrides_19;
};
// Native definition for COM marshalling of System.Globalization.CalendarData
struct CalendarData_t2609061728_marshaled_com
{
	Il2CppChar* ___sNativeName_1;
	Il2CppChar** ___saShortDates_2;
	Il2CppChar** ___saYearMonths_3;
	Il2CppChar** ___saLongDates_4;
	Il2CppChar* ___sMonthDay_5;
	Il2CppChar** ___saEraNames_6;
	Il2CppChar** ___saAbbrevEraNames_7;
	Il2CppChar** ___saAbbrevEnglishEraNames_8;
	Il2CppChar** ___saDayNames_9;
	Il2CppChar** ___saAbbrevDayNames_10;
	Il2CppChar** ___saSuperShortDayNames_11;
	Il2CppChar** ___saMonthNames_12;
	Il2CppChar** ___saAbbrevMonthNames_13;
	Il2CppChar** ___saMonthGenitiveNames_14;
	Il2CppChar** ___saAbbrevMonthGenitiveNames_15;
	Il2CppChar** ___saLeapYearMonthNames_16;
	int32_t ___iTwoDigitYearMax_17;
	int32_t ___iCurrentEra_18;
	int32_t ___bUseUserOverrides_19;
};
#endif // CALENDARDATA_T2609061728_H
#ifndef CULTUREDATA_T1976740787_H
#define CULTUREDATA_T1976740787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureData
struct  CultureData_t1976740787  : public RuntimeObject
{
public:
	// System.String System.Globalization.CultureData::sAM1159
	String_t* ___sAM1159_0;
	// System.String System.Globalization.CultureData::sPM2359
	String_t* ___sPM2359_1;
	// System.String System.Globalization.CultureData::sTimeSeparator
	String_t* ___sTimeSeparator_2;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureData::saLongTimes
	StringU5BU5D_t4160542075* ___saLongTimes_3;
	// System.String[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureData::saShortTimes
	StringU5BU5D_t4160542075* ___saShortTimes_4;
	// System.Int32 System.Globalization.CultureData::iFirstDayOfWeek
	int32_t ___iFirstDayOfWeek_5;
	// System.Int32 System.Globalization.CultureData::iFirstWeekOfYear
	int32_t ___iFirstWeekOfYear_6;
	// System.Int32[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureData::waCalendars
	Int32U5BU5D_t1276023077* ___waCalendars_7;
	// System.Globalization.CalendarData[] System.Globalization.CultureData::calendars
	CalendarDataU5BU5D_t650549025* ___calendars_8;
	// System.String System.Globalization.CultureData::sISO639Language
	String_t* ___sISO639Language_9;
	// System.String System.Globalization.CultureData::sRealName
	String_t* ___sRealName_10;
	// System.Boolean System.Globalization.CultureData::bUseOverrides
	bool ___bUseOverrides_11;
	// System.Int32 System.Globalization.CultureData::calendarId
	int32_t ___calendarId_12;
	// System.Int32 System.Globalization.CultureData::numberIndex
	int32_t ___numberIndex_13;
	// System.Int32 System.Globalization.CultureData::iDefaultAnsiCodePage
	int32_t ___iDefaultAnsiCodePage_14;
	// System.Int32 System.Globalization.CultureData::iDefaultOemCodePage
	int32_t ___iDefaultOemCodePage_15;
	// System.Int32 System.Globalization.CultureData::iDefaultMacCodePage
	int32_t ___iDefaultMacCodePage_16;
	// System.Int32 System.Globalization.CultureData::iDefaultEbcdicCodePage
	int32_t ___iDefaultEbcdicCodePage_17;
	// System.Boolean System.Globalization.CultureData::isRightToLeft
	bool ___isRightToLeft_18;
	// System.String System.Globalization.CultureData::sListSeparator
	String_t* ___sListSeparator_19;

public:
	inline static int32_t get_offset_of_sAM1159_0() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___sAM1159_0)); }
	inline String_t* get_sAM1159_0() const { return ___sAM1159_0; }
	inline String_t** get_address_of_sAM1159_0() { return &___sAM1159_0; }
	inline void set_sAM1159_0(String_t* value)
	{
		___sAM1159_0 = value;
		Il2CppCodeGenWriteBarrier((&___sAM1159_0), value);
	}

	inline static int32_t get_offset_of_sPM2359_1() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___sPM2359_1)); }
	inline String_t* get_sPM2359_1() const { return ___sPM2359_1; }
	inline String_t** get_address_of_sPM2359_1() { return &___sPM2359_1; }
	inline void set_sPM2359_1(String_t* value)
	{
		___sPM2359_1 = value;
		Il2CppCodeGenWriteBarrier((&___sPM2359_1), value);
	}

	inline static int32_t get_offset_of_sTimeSeparator_2() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___sTimeSeparator_2)); }
	inline String_t* get_sTimeSeparator_2() const { return ___sTimeSeparator_2; }
	inline String_t** get_address_of_sTimeSeparator_2() { return &___sTimeSeparator_2; }
	inline void set_sTimeSeparator_2(String_t* value)
	{
		___sTimeSeparator_2 = value;
		Il2CppCodeGenWriteBarrier((&___sTimeSeparator_2), value);
	}

	inline static int32_t get_offset_of_saLongTimes_3() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___saLongTimes_3)); }
	inline StringU5BU5D_t4160542075* get_saLongTimes_3() const { return ___saLongTimes_3; }
	inline StringU5BU5D_t4160542075** get_address_of_saLongTimes_3() { return &___saLongTimes_3; }
	inline void set_saLongTimes_3(StringU5BU5D_t4160542075* value)
	{
		___saLongTimes_3 = value;
		Il2CppCodeGenWriteBarrier((&___saLongTimes_3), value);
	}

	inline static int32_t get_offset_of_saShortTimes_4() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___saShortTimes_4)); }
	inline StringU5BU5D_t4160542075* get_saShortTimes_4() const { return ___saShortTimes_4; }
	inline StringU5BU5D_t4160542075** get_address_of_saShortTimes_4() { return &___saShortTimes_4; }
	inline void set_saShortTimes_4(StringU5BU5D_t4160542075* value)
	{
		___saShortTimes_4 = value;
		Il2CppCodeGenWriteBarrier((&___saShortTimes_4), value);
	}

	inline static int32_t get_offset_of_iFirstDayOfWeek_5() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___iFirstDayOfWeek_5)); }
	inline int32_t get_iFirstDayOfWeek_5() const { return ___iFirstDayOfWeek_5; }
	inline int32_t* get_address_of_iFirstDayOfWeek_5() { return &___iFirstDayOfWeek_5; }
	inline void set_iFirstDayOfWeek_5(int32_t value)
	{
		___iFirstDayOfWeek_5 = value;
	}

	inline static int32_t get_offset_of_iFirstWeekOfYear_6() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___iFirstWeekOfYear_6)); }
	inline int32_t get_iFirstWeekOfYear_6() const { return ___iFirstWeekOfYear_6; }
	inline int32_t* get_address_of_iFirstWeekOfYear_6() { return &___iFirstWeekOfYear_6; }
	inline void set_iFirstWeekOfYear_6(int32_t value)
	{
		___iFirstWeekOfYear_6 = value;
	}

	inline static int32_t get_offset_of_waCalendars_7() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___waCalendars_7)); }
	inline Int32U5BU5D_t1276023077* get_waCalendars_7() const { return ___waCalendars_7; }
	inline Int32U5BU5D_t1276023077** get_address_of_waCalendars_7() { return &___waCalendars_7; }
	inline void set_waCalendars_7(Int32U5BU5D_t1276023077* value)
	{
		___waCalendars_7 = value;
		Il2CppCodeGenWriteBarrier((&___waCalendars_7), value);
	}

	inline static int32_t get_offset_of_calendars_8() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___calendars_8)); }
	inline CalendarDataU5BU5D_t650549025* get_calendars_8() const { return ___calendars_8; }
	inline CalendarDataU5BU5D_t650549025** get_address_of_calendars_8() { return &___calendars_8; }
	inline void set_calendars_8(CalendarDataU5BU5D_t650549025* value)
	{
		___calendars_8 = value;
		Il2CppCodeGenWriteBarrier((&___calendars_8), value);
	}

	inline static int32_t get_offset_of_sISO639Language_9() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___sISO639Language_9)); }
	inline String_t* get_sISO639Language_9() const { return ___sISO639Language_9; }
	inline String_t** get_address_of_sISO639Language_9() { return &___sISO639Language_9; }
	inline void set_sISO639Language_9(String_t* value)
	{
		___sISO639Language_9 = value;
		Il2CppCodeGenWriteBarrier((&___sISO639Language_9), value);
	}

	inline static int32_t get_offset_of_sRealName_10() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___sRealName_10)); }
	inline String_t* get_sRealName_10() const { return ___sRealName_10; }
	inline String_t** get_address_of_sRealName_10() { return &___sRealName_10; }
	inline void set_sRealName_10(String_t* value)
	{
		___sRealName_10 = value;
		Il2CppCodeGenWriteBarrier((&___sRealName_10), value);
	}

	inline static int32_t get_offset_of_bUseOverrides_11() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___bUseOverrides_11)); }
	inline bool get_bUseOverrides_11() const { return ___bUseOverrides_11; }
	inline bool* get_address_of_bUseOverrides_11() { return &___bUseOverrides_11; }
	inline void set_bUseOverrides_11(bool value)
	{
		___bUseOverrides_11 = value;
	}

	inline static int32_t get_offset_of_calendarId_12() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___calendarId_12)); }
	inline int32_t get_calendarId_12() const { return ___calendarId_12; }
	inline int32_t* get_address_of_calendarId_12() { return &___calendarId_12; }
	inline void set_calendarId_12(int32_t value)
	{
		___calendarId_12 = value;
	}

	inline static int32_t get_offset_of_numberIndex_13() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___numberIndex_13)); }
	inline int32_t get_numberIndex_13() const { return ___numberIndex_13; }
	inline int32_t* get_address_of_numberIndex_13() { return &___numberIndex_13; }
	inline void set_numberIndex_13(int32_t value)
	{
		___numberIndex_13 = value;
	}

	inline static int32_t get_offset_of_iDefaultAnsiCodePage_14() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___iDefaultAnsiCodePage_14)); }
	inline int32_t get_iDefaultAnsiCodePage_14() const { return ___iDefaultAnsiCodePage_14; }
	inline int32_t* get_address_of_iDefaultAnsiCodePage_14() { return &___iDefaultAnsiCodePage_14; }
	inline void set_iDefaultAnsiCodePage_14(int32_t value)
	{
		___iDefaultAnsiCodePage_14 = value;
	}

	inline static int32_t get_offset_of_iDefaultOemCodePage_15() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___iDefaultOemCodePage_15)); }
	inline int32_t get_iDefaultOemCodePage_15() const { return ___iDefaultOemCodePage_15; }
	inline int32_t* get_address_of_iDefaultOemCodePage_15() { return &___iDefaultOemCodePage_15; }
	inline void set_iDefaultOemCodePage_15(int32_t value)
	{
		___iDefaultOemCodePage_15 = value;
	}

	inline static int32_t get_offset_of_iDefaultMacCodePage_16() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___iDefaultMacCodePage_16)); }
	inline int32_t get_iDefaultMacCodePage_16() const { return ___iDefaultMacCodePage_16; }
	inline int32_t* get_address_of_iDefaultMacCodePage_16() { return &___iDefaultMacCodePage_16; }
	inline void set_iDefaultMacCodePage_16(int32_t value)
	{
		___iDefaultMacCodePage_16 = value;
	}

	inline static int32_t get_offset_of_iDefaultEbcdicCodePage_17() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___iDefaultEbcdicCodePage_17)); }
	inline int32_t get_iDefaultEbcdicCodePage_17() const { return ___iDefaultEbcdicCodePage_17; }
	inline int32_t* get_address_of_iDefaultEbcdicCodePage_17() { return &___iDefaultEbcdicCodePage_17; }
	inline void set_iDefaultEbcdicCodePage_17(int32_t value)
	{
		___iDefaultEbcdicCodePage_17 = value;
	}

	inline static int32_t get_offset_of_isRightToLeft_18() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___isRightToLeft_18)); }
	inline bool get_isRightToLeft_18() const { return ___isRightToLeft_18; }
	inline bool* get_address_of_isRightToLeft_18() { return &___isRightToLeft_18; }
	inline void set_isRightToLeft_18(bool value)
	{
		___isRightToLeft_18 = value;
	}

	inline static int32_t get_offset_of_sListSeparator_19() { return static_cast<int32_t>(offsetof(CultureData_t1976740787, ___sListSeparator_19)); }
	inline String_t* get_sListSeparator_19() const { return ___sListSeparator_19; }
	inline String_t** get_address_of_sListSeparator_19() { return &___sListSeparator_19; }
	inline void set_sListSeparator_19(String_t* value)
	{
		___sListSeparator_19 = value;
		Il2CppCodeGenWriteBarrier((&___sListSeparator_19), value);
	}
};

struct CultureData_t1976740787_StaticFields
{
public:
	// System.Globalization.CultureData System.Globalization.CultureData::s_Invariant
	CultureData_t1976740787 * ___s_Invariant_20;

public:
	inline static int32_t get_offset_of_s_Invariant_20() { return static_cast<int32_t>(offsetof(CultureData_t1976740787_StaticFields, ___s_Invariant_20)); }
	inline CultureData_t1976740787 * get_s_Invariant_20() const { return ___s_Invariant_20; }
	inline CultureData_t1976740787 ** get_address_of_s_Invariant_20() { return &___s_Invariant_20; }
	inline void set_s_Invariant_20(CultureData_t1976740787 * value)
	{
		___s_Invariant_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_Invariant_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureData
struct CultureData_t1976740787_marshaled_pinvoke
{
	char* ___sAM1159_0;
	char* ___sPM2359_1;
	char* ___sTimeSeparator_2;
	StringU5BU5D_t4160542075* ___saLongTimes_3;
	StringU5BU5D_t4160542075* ___saShortTimes_4;
	int32_t ___iFirstDayOfWeek_5;
	int32_t ___iFirstWeekOfYear_6;
	Int32U5BU5D_t1276023077* ___waCalendars_7;
	CalendarDataU5BU5D_t650549025* ___calendars_8;
	char* ___sISO639Language_9;
	char* ___sRealName_10;
	int32_t ___bUseOverrides_11;
	int32_t ___calendarId_12;
	int32_t ___numberIndex_13;
	int32_t ___iDefaultAnsiCodePage_14;
	int32_t ___iDefaultOemCodePage_15;
	int32_t ___iDefaultMacCodePage_16;
	int32_t ___iDefaultEbcdicCodePage_17;
	int32_t ___isRightToLeft_18;
	char* ___sListSeparator_19;
};
// Native definition for COM marshalling of System.Globalization.CultureData
struct CultureData_t1976740787_marshaled_com
{
	Il2CppChar* ___sAM1159_0;
	Il2CppChar* ___sPM2359_1;
	Il2CppChar* ___sTimeSeparator_2;
	StringU5BU5D_t4160542075* ___saLongTimes_3;
	StringU5BU5D_t4160542075* ___saShortTimes_4;
	int32_t ___iFirstDayOfWeek_5;
	int32_t ___iFirstWeekOfYear_6;
	Int32U5BU5D_t1276023077* ___waCalendars_7;
	CalendarDataU5BU5D_t650549025* ___calendars_8;
	Il2CppChar* ___sISO639Language_9;
	Il2CppChar* ___sRealName_10;
	int32_t ___bUseOverrides_11;
	int32_t ___calendarId_12;
	int32_t ___numberIndex_13;
	int32_t ___iDefaultAnsiCodePage_14;
	int32_t ___iDefaultOemCodePage_15;
	int32_t ___iDefaultMacCodePage_16;
	int32_t ___iDefaultEbcdicCodePage_17;
	int32_t ___isRightToLeft_18;
	Il2CppChar* ___sListSeparator_19;
};
#endif // CULTUREDATA_T1976740787_H
#ifndef CODEPAGEDATAITEM_T4157734213_H
#define CODEPAGEDATAITEM_T4157734213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CodePageDataItem
struct  CodePageDataItem_t4157734213  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.CodePageDataItem::m_dataIndex
	int32_t ___m_dataIndex_0;
	// System.Int32 System.Globalization.CodePageDataItem::m_uiFamilyCodePage
	int32_t ___m_uiFamilyCodePage_1;
	// System.String System.Globalization.CodePageDataItem::m_webName
	String_t* ___m_webName_2;
	// System.String System.Globalization.CodePageDataItem::m_headerName
	String_t* ___m_headerName_3;
	// System.UInt32 System.Globalization.CodePageDataItem::m_flags
	uint32_t ___m_flags_4;

public:
	inline static int32_t get_offset_of_m_dataIndex_0() { return static_cast<int32_t>(offsetof(CodePageDataItem_t4157734213, ___m_dataIndex_0)); }
	inline int32_t get_m_dataIndex_0() const { return ___m_dataIndex_0; }
	inline int32_t* get_address_of_m_dataIndex_0() { return &___m_dataIndex_0; }
	inline void set_m_dataIndex_0(int32_t value)
	{
		___m_dataIndex_0 = value;
	}

	inline static int32_t get_offset_of_m_uiFamilyCodePage_1() { return static_cast<int32_t>(offsetof(CodePageDataItem_t4157734213, ___m_uiFamilyCodePage_1)); }
	inline int32_t get_m_uiFamilyCodePage_1() const { return ___m_uiFamilyCodePage_1; }
	inline int32_t* get_address_of_m_uiFamilyCodePage_1() { return &___m_uiFamilyCodePage_1; }
	inline void set_m_uiFamilyCodePage_1(int32_t value)
	{
		___m_uiFamilyCodePage_1 = value;
	}

	inline static int32_t get_offset_of_m_webName_2() { return static_cast<int32_t>(offsetof(CodePageDataItem_t4157734213, ___m_webName_2)); }
	inline String_t* get_m_webName_2() const { return ___m_webName_2; }
	inline String_t** get_address_of_m_webName_2() { return &___m_webName_2; }
	inline void set_m_webName_2(String_t* value)
	{
		___m_webName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_webName_2), value);
	}

	inline static int32_t get_offset_of_m_headerName_3() { return static_cast<int32_t>(offsetof(CodePageDataItem_t4157734213, ___m_headerName_3)); }
	inline String_t* get_m_headerName_3() const { return ___m_headerName_3; }
	inline String_t** get_address_of_m_headerName_3() { return &___m_headerName_3; }
	inline void set_m_headerName_3(String_t* value)
	{
		___m_headerName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_headerName_3), value);
	}

	inline static int32_t get_offset_of_m_flags_4() { return static_cast<int32_t>(offsetof(CodePageDataItem_t4157734213, ___m_flags_4)); }
	inline uint32_t get_m_flags_4() const { return ___m_flags_4; }
	inline uint32_t* get_address_of_m_flags_4() { return &___m_flags_4; }
	inline void set_m_flags_4(uint32_t value)
	{
		___m_flags_4 = value;
	}
};

struct CodePageDataItem_t4157734213_StaticFields
{
public:
	// System.Char[] System.Globalization.CodePageDataItem::sep
	CharU5BU5D_t1313538844* ___sep_5;

public:
	inline static int32_t get_offset_of_sep_5() { return static_cast<int32_t>(offsetof(CodePageDataItem_t4157734213_StaticFields, ___sep_5)); }
	inline CharU5BU5D_t1313538844* get_sep_5() const { return ___sep_5; }
	inline CharU5BU5D_t1313538844** get_address_of_sep_5() { return &___sep_5; }
	inline void set_sep_5(CharU5BU5D_t1313538844* value)
	{
		___sep_5 = value;
		Il2CppCodeGenWriteBarrier((&___sep_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPAGEDATAITEM_T4157734213_H
#ifndef ENCODINGTABLE_T2344930229_H
#define ENCODINGTABLE_T2344930229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.EncodingTable
struct  EncodingTable_t2344930229  : public RuntimeObject
{
public:

public:
};

struct EncodingTable_t2344930229_StaticFields
{
public:
	// System.Globalization.InternalEncodingDataItem[] System.Globalization.EncodingTable::encodingDataPtr
	InternalEncodingDataItemU5BU5D_t2499650858* ___encodingDataPtr_0;
	// System.Globalization.InternalCodePageDataItem[] System.Globalization.EncodingTable::codePageDataPtr
	InternalCodePageDataItemU5BU5D_t1497064205* ___codePageDataPtr_1;
	// System.Int32 System.Globalization.EncodingTable::lastEncodingItem
	int32_t ___lastEncodingItem_2;
	// System.Collections.Hashtable System.Globalization.EncodingTable::hashByName
	Hashtable_t3971943106 * ___hashByName_3;
	// System.Collections.Hashtable System.Globalization.EncodingTable::hashByCodePage
	Hashtable_t3971943106 * ___hashByCodePage_4;

public:
	inline static int32_t get_offset_of_encodingDataPtr_0() { return static_cast<int32_t>(offsetof(EncodingTable_t2344930229_StaticFields, ___encodingDataPtr_0)); }
	inline InternalEncodingDataItemU5BU5D_t2499650858* get_encodingDataPtr_0() const { return ___encodingDataPtr_0; }
	inline InternalEncodingDataItemU5BU5D_t2499650858** get_address_of_encodingDataPtr_0() { return &___encodingDataPtr_0; }
	inline void set_encodingDataPtr_0(InternalEncodingDataItemU5BU5D_t2499650858* value)
	{
		___encodingDataPtr_0 = value;
		Il2CppCodeGenWriteBarrier((&___encodingDataPtr_0), value);
	}

	inline static int32_t get_offset_of_codePageDataPtr_1() { return static_cast<int32_t>(offsetof(EncodingTable_t2344930229_StaticFields, ___codePageDataPtr_1)); }
	inline InternalCodePageDataItemU5BU5D_t1497064205* get_codePageDataPtr_1() const { return ___codePageDataPtr_1; }
	inline InternalCodePageDataItemU5BU5D_t1497064205** get_address_of_codePageDataPtr_1() { return &___codePageDataPtr_1; }
	inline void set_codePageDataPtr_1(InternalCodePageDataItemU5BU5D_t1497064205* value)
	{
		___codePageDataPtr_1 = value;
		Il2CppCodeGenWriteBarrier((&___codePageDataPtr_1), value);
	}

	inline static int32_t get_offset_of_lastEncodingItem_2() { return static_cast<int32_t>(offsetof(EncodingTable_t2344930229_StaticFields, ___lastEncodingItem_2)); }
	inline int32_t get_lastEncodingItem_2() const { return ___lastEncodingItem_2; }
	inline int32_t* get_address_of_lastEncodingItem_2() { return &___lastEncodingItem_2; }
	inline void set_lastEncodingItem_2(int32_t value)
	{
		___lastEncodingItem_2 = value;
	}

	inline static int32_t get_offset_of_hashByName_3() { return static_cast<int32_t>(offsetof(EncodingTable_t2344930229_StaticFields, ___hashByName_3)); }
	inline Hashtable_t3971943106 * get_hashByName_3() const { return ___hashByName_3; }
	inline Hashtable_t3971943106 ** get_address_of_hashByName_3() { return &___hashByName_3; }
	inline void set_hashByName_3(Hashtable_t3971943106 * value)
	{
		___hashByName_3 = value;
		Il2CppCodeGenWriteBarrier((&___hashByName_3), value);
	}

	inline static int32_t get_offset_of_hashByCodePage_4() { return static_cast<int32_t>(offsetof(EncodingTable_t2344930229_StaticFields, ___hashByCodePage_4)); }
	inline Hashtable_t3971943106 * get_hashByCodePage_4() const { return ___hashByCodePage_4; }
	inline Hashtable_t3971943106 ** get_address_of_hashByCodePage_4() { return &___hashByCodePage_4; }
	inline void set_hashByCodePage_4(Hashtable_t3971943106 * value)
	{
		___hashByCodePage_4 = value;
		Il2CppCodeGenWriteBarrier((&___hashByCodePage_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGTABLE_T2344930229_H
#ifndef COMPAREINFO_T3802660337_H
#define COMPAREINFO_T3802660337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t3802660337  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t2047667167 * ___collator_0;
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_4;
	// System.String System.Globalization.CompareInfo::m_sortName
	String_t* ___m_sortName_5;
	// System.Int32 System.Globalization.CompareInfo::win32LCID
	int32_t ___win32LCID_6;
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_7;
	// System.Globalization.SortVersion System.Globalization.CompareInfo::m_SortVersion
	SortVersion_t1822720062 * ___m_SortVersion_8;

public:
	inline static int32_t get_offset_of_collator_0() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337, ___collator_0)); }
	inline SimpleCollator_t2047667167 * get_collator_0() const { return ___collator_0; }
	inline SimpleCollator_t2047667167 ** get_address_of_collator_0() { return &___collator_0; }
	inline void set_collator_0(SimpleCollator_t2047667167 * value)
	{
		___collator_0 = value;
		Il2CppCodeGenWriteBarrier((&___collator_0), value);
	}

	inline static int32_t get_offset_of_m_name_4() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337, ___m_name_4)); }
	inline String_t* get_m_name_4() const { return ___m_name_4; }
	inline String_t** get_address_of_m_name_4() { return &___m_name_4; }
	inline void set_m_name_4(String_t* value)
	{
		___m_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_4), value);
	}

	inline static int32_t get_offset_of_m_sortName_5() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337, ___m_sortName_5)); }
	inline String_t* get_m_sortName_5() const { return ___m_sortName_5; }
	inline String_t** get_address_of_m_sortName_5() { return &___m_sortName_5; }
	inline void set_m_sortName_5(String_t* value)
	{
		___m_sortName_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_sortName_5), value);
	}

	inline static int32_t get_offset_of_win32LCID_6() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337, ___win32LCID_6)); }
	inline int32_t get_win32LCID_6() const { return ___win32LCID_6; }
	inline int32_t* get_address_of_win32LCID_6() { return &___win32LCID_6; }
	inline void set_win32LCID_6(int32_t value)
	{
		___win32LCID_6 = value;
	}

	inline static int32_t get_offset_of_culture_7() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337, ___culture_7)); }
	inline int32_t get_culture_7() const { return ___culture_7; }
	inline int32_t* get_address_of_culture_7() { return &___culture_7; }
	inline void set_culture_7(int32_t value)
	{
		___culture_7 = value;
	}

	inline static int32_t get_offset_of_m_SortVersion_8() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337, ___m_SortVersion_8)); }
	inline SortVersion_t1822720062 * get_m_SortVersion_8() const { return ___m_SortVersion_8; }
	inline SortVersion_t1822720062 ** get_address_of_m_SortVersion_8() { return &___m_SortVersion_8; }
	inline void set_m_SortVersion_8(SortVersion_t1822720062 * value)
	{
		___m_SortVersion_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_SortVersion_8), value);
	}
};

struct CompareInfo_t3802660337_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> System.Globalization.CompareInfo::collators
	Dictionary_2_t1021790544 * ___collators_1;
	// System.Boolean System.Globalization.CompareInfo::managedCollation
	bool ___managedCollation_2;
	// System.Boolean System.Globalization.CompareInfo::managedCollationChecked
	bool ___managedCollationChecked_3;

public:
	inline static int32_t get_offset_of_collators_1() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337_StaticFields, ___collators_1)); }
	inline Dictionary_2_t1021790544 * get_collators_1() const { return ___collators_1; }
	inline Dictionary_2_t1021790544 ** get_address_of_collators_1() { return &___collators_1; }
	inline void set_collators_1(Dictionary_2_t1021790544 * value)
	{
		___collators_1 = value;
		Il2CppCodeGenWriteBarrier((&___collators_1), value);
	}

	inline static int32_t get_offset_of_managedCollation_2() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337_StaticFields, ___managedCollation_2)); }
	inline bool get_managedCollation_2() const { return ___managedCollation_2; }
	inline bool* get_address_of_managedCollation_2() { return &___managedCollation_2; }
	inline void set_managedCollation_2(bool value)
	{
		___managedCollation_2 = value;
	}

	inline static int32_t get_offset_of_managedCollationChecked_3() { return static_cast<int32_t>(offsetof(CompareInfo_t3802660337_StaticFields, ___managedCollationChecked_3)); }
	inline bool get_managedCollationChecked_3() const { return ___managedCollationChecked_3; }
	inline bool* get_address_of_managedCollationChecked_3() { return &___managedCollationChecked_3; }
	inline void set_managedCollationChecked_3(bool value)
	{
		___managedCollationChecked_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREINFO_T3802660337_H
#ifndef TEXTINFOTOUPPERDATA_T1215564406_H
#define TEXTINFOTOUPPERDATA_T1215564406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TextInfoToUpperData
struct  TextInfoToUpperData_t1215564406  : public RuntimeObject
{
public:

public:
};

struct TextInfoToUpperData_t1215564406_StaticFields
{
public:
	// System.Char[] System.Globalization.TextInfoToUpperData::range_00e0_0586
	CharU5BU5D_t1313538844* ___range_00e0_0586_0;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_1e01_1ff3
	CharU5BU5D_t1313538844* ___range_1e01_1ff3_1;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_2170_2184
	CharU5BU5D_t1313538844* ___range_2170_2184_2;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_24d0_24e9
	CharU5BU5D_t1313538844* ___range_24d0_24e9_3;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_2c30_2ce3
	CharU5BU5D_t1313538844* ___range_2c30_2ce3_4;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_2d00_2d25
	CharU5BU5D_t1313538844* ___range_2d00_2d25_5;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_a641_a697
	CharU5BU5D_t1313538844* ___range_a641_a697_6;
	// System.Char[] System.Globalization.TextInfoToUpperData::range_a723_a78c
	CharU5BU5D_t1313538844* ___range_a723_a78c_7;

public:
	inline static int32_t get_offset_of_range_00e0_0586_0() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t1215564406_StaticFields, ___range_00e0_0586_0)); }
	inline CharU5BU5D_t1313538844* get_range_00e0_0586_0() const { return ___range_00e0_0586_0; }
	inline CharU5BU5D_t1313538844** get_address_of_range_00e0_0586_0() { return &___range_00e0_0586_0; }
	inline void set_range_00e0_0586_0(CharU5BU5D_t1313538844* value)
	{
		___range_00e0_0586_0 = value;
		Il2CppCodeGenWriteBarrier((&___range_00e0_0586_0), value);
	}

	inline static int32_t get_offset_of_range_1e01_1ff3_1() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t1215564406_StaticFields, ___range_1e01_1ff3_1)); }
	inline CharU5BU5D_t1313538844* get_range_1e01_1ff3_1() const { return ___range_1e01_1ff3_1; }
	inline CharU5BU5D_t1313538844** get_address_of_range_1e01_1ff3_1() { return &___range_1e01_1ff3_1; }
	inline void set_range_1e01_1ff3_1(CharU5BU5D_t1313538844* value)
	{
		___range_1e01_1ff3_1 = value;
		Il2CppCodeGenWriteBarrier((&___range_1e01_1ff3_1), value);
	}

	inline static int32_t get_offset_of_range_2170_2184_2() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t1215564406_StaticFields, ___range_2170_2184_2)); }
	inline CharU5BU5D_t1313538844* get_range_2170_2184_2() const { return ___range_2170_2184_2; }
	inline CharU5BU5D_t1313538844** get_address_of_range_2170_2184_2() { return &___range_2170_2184_2; }
	inline void set_range_2170_2184_2(CharU5BU5D_t1313538844* value)
	{
		___range_2170_2184_2 = value;
		Il2CppCodeGenWriteBarrier((&___range_2170_2184_2), value);
	}

	inline static int32_t get_offset_of_range_24d0_24e9_3() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t1215564406_StaticFields, ___range_24d0_24e9_3)); }
	inline CharU5BU5D_t1313538844* get_range_24d0_24e9_3() const { return ___range_24d0_24e9_3; }
	inline CharU5BU5D_t1313538844** get_address_of_range_24d0_24e9_3() { return &___range_24d0_24e9_3; }
	inline void set_range_24d0_24e9_3(CharU5BU5D_t1313538844* value)
	{
		___range_24d0_24e9_3 = value;
		Il2CppCodeGenWriteBarrier((&___range_24d0_24e9_3), value);
	}

	inline static int32_t get_offset_of_range_2c30_2ce3_4() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t1215564406_StaticFields, ___range_2c30_2ce3_4)); }
	inline CharU5BU5D_t1313538844* get_range_2c30_2ce3_4() const { return ___range_2c30_2ce3_4; }
	inline CharU5BU5D_t1313538844** get_address_of_range_2c30_2ce3_4() { return &___range_2c30_2ce3_4; }
	inline void set_range_2c30_2ce3_4(CharU5BU5D_t1313538844* value)
	{
		___range_2c30_2ce3_4 = value;
		Il2CppCodeGenWriteBarrier((&___range_2c30_2ce3_4), value);
	}

	inline static int32_t get_offset_of_range_2d00_2d25_5() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t1215564406_StaticFields, ___range_2d00_2d25_5)); }
	inline CharU5BU5D_t1313538844* get_range_2d00_2d25_5() const { return ___range_2d00_2d25_5; }
	inline CharU5BU5D_t1313538844** get_address_of_range_2d00_2d25_5() { return &___range_2d00_2d25_5; }
	inline void set_range_2d00_2d25_5(CharU5BU5D_t1313538844* value)
	{
		___range_2d00_2d25_5 = value;
		Il2CppCodeGenWriteBarrier((&___range_2d00_2d25_5), value);
	}

	inline static int32_t get_offset_of_range_a641_a697_6() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t1215564406_StaticFields, ___range_a641_a697_6)); }
	inline CharU5BU5D_t1313538844* get_range_a641_a697_6() const { return ___range_a641_a697_6; }
	inline CharU5BU5D_t1313538844** get_address_of_range_a641_a697_6() { return &___range_a641_a697_6; }
	inline void set_range_a641_a697_6(CharU5BU5D_t1313538844* value)
	{
		___range_a641_a697_6 = value;
		Il2CppCodeGenWriteBarrier((&___range_a641_a697_6), value);
	}

	inline static int32_t get_offset_of_range_a723_a78c_7() { return static_cast<int32_t>(offsetof(TextInfoToUpperData_t1215564406_StaticFields, ___range_a723_a78c_7)); }
	inline CharU5BU5D_t1313538844* get_range_a723_a78c_7() const { return ___range_a723_a78c_7; }
	inline CharU5BU5D_t1313538844** get_address_of_range_a723_a78c_7() { return &___range_a723_a78c_7; }
	inline void set_range_a723_a78c_7(CharU5BU5D_t1313538844* value)
	{
		___range_a723_a78c_7 = value;
		Il2CppCodeGenWriteBarrier((&___range_a723_a78c_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTINFOTOUPPERDATA_T1215564406_H
#ifndef TEXTINFOTOLOWERDATA_T4285823890_H
#define TEXTINFOTOLOWERDATA_T4285823890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TextInfoToLowerData
struct  TextInfoToLowerData_t4285823890  : public RuntimeObject
{
public:

public:
};

struct TextInfoToLowerData_t4285823890_StaticFields
{
public:
	// System.Char[] System.Globalization.TextInfoToLowerData::range_00c0_0556
	CharU5BU5D_t1313538844* ___range_00c0_0556_0;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_10a0_10c5
	CharU5BU5D_t1313538844* ___range_10a0_10c5_1;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_1e00_1ffc
	CharU5BU5D_t1313538844* ___range_1e00_1ffc_2;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_2160_216f
	CharU5BU5D_t1313538844* ___range_2160_216f_3;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_24b6_24cf
	CharU5BU5D_t1313538844* ___range_24b6_24cf_4;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_2c00_2c2e
	CharU5BU5D_t1313538844* ___range_2c00_2c2e_5;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_2c60_2ce2
	CharU5BU5D_t1313538844* ___range_2c60_2ce2_6;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_a640_a696
	CharU5BU5D_t1313538844* ___range_a640_a696_7;
	// System.Char[] System.Globalization.TextInfoToLowerData::range_a722_a78b
	CharU5BU5D_t1313538844* ___range_a722_a78b_8;

public:
	inline static int32_t get_offset_of_range_00c0_0556_0() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_00c0_0556_0)); }
	inline CharU5BU5D_t1313538844* get_range_00c0_0556_0() const { return ___range_00c0_0556_0; }
	inline CharU5BU5D_t1313538844** get_address_of_range_00c0_0556_0() { return &___range_00c0_0556_0; }
	inline void set_range_00c0_0556_0(CharU5BU5D_t1313538844* value)
	{
		___range_00c0_0556_0 = value;
		Il2CppCodeGenWriteBarrier((&___range_00c0_0556_0), value);
	}

	inline static int32_t get_offset_of_range_10a0_10c5_1() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_10a0_10c5_1)); }
	inline CharU5BU5D_t1313538844* get_range_10a0_10c5_1() const { return ___range_10a0_10c5_1; }
	inline CharU5BU5D_t1313538844** get_address_of_range_10a0_10c5_1() { return &___range_10a0_10c5_1; }
	inline void set_range_10a0_10c5_1(CharU5BU5D_t1313538844* value)
	{
		___range_10a0_10c5_1 = value;
		Il2CppCodeGenWriteBarrier((&___range_10a0_10c5_1), value);
	}

	inline static int32_t get_offset_of_range_1e00_1ffc_2() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_1e00_1ffc_2)); }
	inline CharU5BU5D_t1313538844* get_range_1e00_1ffc_2() const { return ___range_1e00_1ffc_2; }
	inline CharU5BU5D_t1313538844** get_address_of_range_1e00_1ffc_2() { return &___range_1e00_1ffc_2; }
	inline void set_range_1e00_1ffc_2(CharU5BU5D_t1313538844* value)
	{
		___range_1e00_1ffc_2 = value;
		Il2CppCodeGenWriteBarrier((&___range_1e00_1ffc_2), value);
	}

	inline static int32_t get_offset_of_range_2160_216f_3() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_2160_216f_3)); }
	inline CharU5BU5D_t1313538844* get_range_2160_216f_3() const { return ___range_2160_216f_3; }
	inline CharU5BU5D_t1313538844** get_address_of_range_2160_216f_3() { return &___range_2160_216f_3; }
	inline void set_range_2160_216f_3(CharU5BU5D_t1313538844* value)
	{
		___range_2160_216f_3 = value;
		Il2CppCodeGenWriteBarrier((&___range_2160_216f_3), value);
	}

	inline static int32_t get_offset_of_range_24b6_24cf_4() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_24b6_24cf_4)); }
	inline CharU5BU5D_t1313538844* get_range_24b6_24cf_4() const { return ___range_24b6_24cf_4; }
	inline CharU5BU5D_t1313538844** get_address_of_range_24b6_24cf_4() { return &___range_24b6_24cf_4; }
	inline void set_range_24b6_24cf_4(CharU5BU5D_t1313538844* value)
	{
		___range_24b6_24cf_4 = value;
		Il2CppCodeGenWriteBarrier((&___range_24b6_24cf_4), value);
	}

	inline static int32_t get_offset_of_range_2c00_2c2e_5() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_2c00_2c2e_5)); }
	inline CharU5BU5D_t1313538844* get_range_2c00_2c2e_5() const { return ___range_2c00_2c2e_5; }
	inline CharU5BU5D_t1313538844** get_address_of_range_2c00_2c2e_5() { return &___range_2c00_2c2e_5; }
	inline void set_range_2c00_2c2e_5(CharU5BU5D_t1313538844* value)
	{
		___range_2c00_2c2e_5 = value;
		Il2CppCodeGenWriteBarrier((&___range_2c00_2c2e_5), value);
	}

	inline static int32_t get_offset_of_range_2c60_2ce2_6() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_2c60_2ce2_6)); }
	inline CharU5BU5D_t1313538844* get_range_2c60_2ce2_6() const { return ___range_2c60_2ce2_6; }
	inline CharU5BU5D_t1313538844** get_address_of_range_2c60_2ce2_6() { return &___range_2c60_2ce2_6; }
	inline void set_range_2c60_2ce2_6(CharU5BU5D_t1313538844* value)
	{
		___range_2c60_2ce2_6 = value;
		Il2CppCodeGenWriteBarrier((&___range_2c60_2ce2_6), value);
	}

	inline static int32_t get_offset_of_range_a640_a696_7() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_a640_a696_7)); }
	inline CharU5BU5D_t1313538844* get_range_a640_a696_7() const { return ___range_a640_a696_7; }
	inline CharU5BU5D_t1313538844** get_address_of_range_a640_a696_7() { return &___range_a640_a696_7; }
	inline void set_range_a640_a696_7(CharU5BU5D_t1313538844* value)
	{
		___range_a640_a696_7 = value;
		Il2CppCodeGenWriteBarrier((&___range_a640_a696_7), value);
	}

	inline static int32_t get_offset_of_range_a722_a78b_8() { return static_cast<int32_t>(offsetof(TextInfoToLowerData_t4285823890_StaticFields, ___range_a722_a78b_8)); }
	inline CharU5BU5D_t1313538844* get_range_a722_a78b_8() const { return ___range_a722_a78b_8; }
	inline CharU5BU5D_t1313538844** get_address_of_range_a722_a78b_8() { return &___range_a722_a78b_8; }
	inline void set_range_a722_a78b_8(CharU5BU5D_t1313538844* value)
	{
		___range_a722_a78b_8 = value;
		Il2CppCodeGenWriteBarrier((&___range_a722_a78b_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTINFOTOLOWERDATA_T4285823890_H
#ifndef CALENDAR_T571621478_H
#define CALENDAR_T571621478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Calendar
struct  Calendar_t571621478  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.Calendar::m_currentEraValue
	int32_t ___m_currentEraValue_0;
	// System.Boolean System.Globalization.Calendar::m_isReadOnly
	bool ___m_isReadOnly_1;
	// System.Int32 System.Globalization.Calendar::twoDigitYearMax
	int32_t ___twoDigitYearMax_2;

public:
	inline static int32_t get_offset_of_m_currentEraValue_0() { return static_cast<int32_t>(offsetof(Calendar_t571621478, ___m_currentEraValue_0)); }
	inline int32_t get_m_currentEraValue_0() const { return ___m_currentEraValue_0; }
	inline int32_t* get_address_of_m_currentEraValue_0() { return &___m_currentEraValue_0; }
	inline void set_m_currentEraValue_0(int32_t value)
	{
		___m_currentEraValue_0 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_1() { return static_cast<int32_t>(offsetof(Calendar_t571621478, ___m_isReadOnly_1)); }
	inline bool get_m_isReadOnly_1() const { return ___m_isReadOnly_1; }
	inline bool* get_address_of_m_isReadOnly_1() { return &___m_isReadOnly_1; }
	inline void set_m_isReadOnly_1(bool value)
	{
		___m_isReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_twoDigitYearMax_2() { return static_cast<int32_t>(offsetof(Calendar_t571621478, ___twoDigitYearMax_2)); }
	inline int32_t get_twoDigitYearMax_2() const { return ___twoDigitYearMax_2; }
	inline int32_t* get_address_of_twoDigitYearMax_2() { return &___twoDigitYearMax_2; }
	inline void set_twoDigitYearMax_2(int32_t value)
	{
		___twoDigitYearMax_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDAR_T571621478_H
#ifndef CHARUNICODEINFO_T4226520770_H
#define CHARUNICODEINFO_T4226520770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CharUnicodeInfo
struct  CharUnicodeInfo_t4226520770  : public RuntimeObject
{
public:

public:
};

struct CharUnicodeInfo_t4226520770_StaticFields
{
public:
	// System.Boolean System.Globalization.CharUnicodeInfo::s_initialized
	bool ___s_initialized_0;
	// System.UInt16* System.Globalization.CharUnicodeInfo::s_pCategoryLevel1Index
	uint16_t* ___s_pCategoryLevel1Index_1;
	// System.Byte* System.Globalization.CharUnicodeInfo::s_pCategoriesValue
	uint8_t* ___s_pCategoriesValue_2;
	// System.UInt16* System.Globalization.CharUnicodeInfo::s_pNumericLevel1Index
	uint16_t* ___s_pNumericLevel1Index_3;
	// System.Byte* System.Globalization.CharUnicodeInfo::s_pNumericValues
	uint8_t* ___s_pNumericValues_4;
	// System.Globalization.CharUnicodeInfo/DigitValues* System.Globalization.CharUnicodeInfo::s_pDigitValues
	DigitValues_t3238575465 * ___s_pDigitValues_5;

public:
	inline static int32_t get_offset_of_s_initialized_0() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4226520770_StaticFields, ___s_initialized_0)); }
	inline bool get_s_initialized_0() const { return ___s_initialized_0; }
	inline bool* get_address_of_s_initialized_0() { return &___s_initialized_0; }
	inline void set_s_initialized_0(bool value)
	{
		___s_initialized_0 = value;
	}

	inline static int32_t get_offset_of_s_pCategoryLevel1Index_1() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4226520770_StaticFields, ___s_pCategoryLevel1Index_1)); }
	inline uint16_t* get_s_pCategoryLevel1Index_1() const { return ___s_pCategoryLevel1Index_1; }
	inline uint16_t** get_address_of_s_pCategoryLevel1Index_1() { return &___s_pCategoryLevel1Index_1; }
	inline void set_s_pCategoryLevel1Index_1(uint16_t* value)
	{
		___s_pCategoryLevel1Index_1 = value;
	}

	inline static int32_t get_offset_of_s_pCategoriesValue_2() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4226520770_StaticFields, ___s_pCategoriesValue_2)); }
	inline uint8_t* get_s_pCategoriesValue_2() const { return ___s_pCategoriesValue_2; }
	inline uint8_t** get_address_of_s_pCategoriesValue_2() { return &___s_pCategoriesValue_2; }
	inline void set_s_pCategoriesValue_2(uint8_t* value)
	{
		___s_pCategoriesValue_2 = value;
	}

	inline static int32_t get_offset_of_s_pNumericLevel1Index_3() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4226520770_StaticFields, ___s_pNumericLevel1Index_3)); }
	inline uint16_t* get_s_pNumericLevel1Index_3() const { return ___s_pNumericLevel1Index_3; }
	inline uint16_t** get_address_of_s_pNumericLevel1Index_3() { return &___s_pNumericLevel1Index_3; }
	inline void set_s_pNumericLevel1Index_3(uint16_t* value)
	{
		___s_pNumericLevel1Index_3 = value;
	}

	inline static int32_t get_offset_of_s_pNumericValues_4() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4226520770_StaticFields, ___s_pNumericValues_4)); }
	inline uint8_t* get_s_pNumericValues_4() const { return ___s_pNumericValues_4; }
	inline uint8_t** get_address_of_s_pNumericValues_4() { return &___s_pNumericValues_4; }
	inline void set_s_pNumericValues_4(uint8_t* value)
	{
		___s_pNumericValues_4 = value;
	}

	inline static int32_t get_offset_of_s_pDigitValues_5() { return static_cast<int32_t>(offsetof(CharUnicodeInfo_t4226520770_StaticFields, ___s_pDigitValues_5)); }
	inline DigitValues_t3238575465 * get_s_pDigitValues_5() const { return ___s_pDigitValues_5; }
	inline DigitValues_t3238575465 ** get_address_of_s_pDigitValues_5() { return &___s_pDigitValues_5; }
	inline void set_s_pDigitValues_5(DigitValues_t3238575465 * value)
	{
		___s_pDigitValues_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARUNICODEINFO_T4226520770_H
#ifndef GLOBALIZATIONASSEMBLY_T1287709845_H
#define GLOBALIZATIONASSEMBLY_T1287709845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GlobalizationAssembly
struct  GlobalizationAssembly_t1287709845  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALIZATIONASSEMBLY_T1287709845_H
#ifndef ERAINFO_T688838952_H
#define ERAINFO_T688838952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.EraInfo
struct  EraInfo_t688838952  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.EraInfo::era
	int32_t ___era_0;
	// System.Int64 System.Globalization.EraInfo::ticks
	int64_t ___ticks_1;
	// System.Int32 System.Globalization.EraInfo::yearOffset
	int32_t ___yearOffset_2;
	// System.Int32 System.Globalization.EraInfo::minEraYear
	int32_t ___minEraYear_3;
	// System.Int32 System.Globalization.EraInfo::maxEraYear
	int32_t ___maxEraYear_4;
	// System.String System.Globalization.EraInfo::eraName
	String_t* ___eraName_5;
	// System.String System.Globalization.EraInfo::abbrevEraName
	String_t* ___abbrevEraName_6;
	// System.String System.Globalization.EraInfo::englishEraName
	String_t* ___englishEraName_7;

public:
	inline static int32_t get_offset_of_era_0() { return static_cast<int32_t>(offsetof(EraInfo_t688838952, ___era_0)); }
	inline int32_t get_era_0() const { return ___era_0; }
	inline int32_t* get_address_of_era_0() { return &___era_0; }
	inline void set_era_0(int32_t value)
	{
		___era_0 = value;
	}

	inline static int32_t get_offset_of_ticks_1() { return static_cast<int32_t>(offsetof(EraInfo_t688838952, ___ticks_1)); }
	inline int64_t get_ticks_1() const { return ___ticks_1; }
	inline int64_t* get_address_of_ticks_1() { return &___ticks_1; }
	inline void set_ticks_1(int64_t value)
	{
		___ticks_1 = value;
	}

	inline static int32_t get_offset_of_yearOffset_2() { return static_cast<int32_t>(offsetof(EraInfo_t688838952, ___yearOffset_2)); }
	inline int32_t get_yearOffset_2() const { return ___yearOffset_2; }
	inline int32_t* get_address_of_yearOffset_2() { return &___yearOffset_2; }
	inline void set_yearOffset_2(int32_t value)
	{
		___yearOffset_2 = value;
	}

	inline static int32_t get_offset_of_minEraYear_3() { return static_cast<int32_t>(offsetof(EraInfo_t688838952, ___minEraYear_3)); }
	inline int32_t get_minEraYear_3() const { return ___minEraYear_3; }
	inline int32_t* get_address_of_minEraYear_3() { return &___minEraYear_3; }
	inline void set_minEraYear_3(int32_t value)
	{
		___minEraYear_3 = value;
	}

	inline static int32_t get_offset_of_maxEraYear_4() { return static_cast<int32_t>(offsetof(EraInfo_t688838952, ___maxEraYear_4)); }
	inline int32_t get_maxEraYear_4() const { return ___maxEraYear_4; }
	inline int32_t* get_address_of_maxEraYear_4() { return &___maxEraYear_4; }
	inline void set_maxEraYear_4(int32_t value)
	{
		___maxEraYear_4 = value;
	}

	inline static int32_t get_offset_of_eraName_5() { return static_cast<int32_t>(offsetof(EraInfo_t688838952, ___eraName_5)); }
	inline String_t* get_eraName_5() const { return ___eraName_5; }
	inline String_t** get_address_of_eraName_5() { return &___eraName_5; }
	inline void set_eraName_5(String_t* value)
	{
		___eraName_5 = value;
		Il2CppCodeGenWriteBarrier((&___eraName_5), value);
	}

	inline static int32_t get_offset_of_abbrevEraName_6() { return static_cast<int32_t>(offsetof(EraInfo_t688838952, ___abbrevEraName_6)); }
	inline String_t* get_abbrevEraName_6() const { return ___abbrevEraName_6; }
	inline String_t** get_address_of_abbrevEraName_6() { return &___abbrevEraName_6; }
	inline void set_abbrevEraName_6(String_t* value)
	{
		___abbrevEraName_6 = value;
		Il2CppCodeGenWriteBarrier((&___abbrevEraName_6), value);
	}

	inline static int32_t get_offset_of_englishEraName_7() { return static_cast<int32_t>(offsetof(EraInfo_t688838952, ___englishEraName_7)); }
	inline String_t* get_englishEraName_7() const { return ___englishEraName_7; }
	inline String_t** get_address_of_englishEraName_7() { return &___englishEraName_7; }
	inline void set_englishEraName_7(String_t* value)
	{
		___englishEraName_7 = value;
		Il2CppCodeGenWriteBarrier((&___englishEraName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERAINFO_T688838952_H
#ifndef HEBREWNUMBER_T2412778222_H
#define HEBREWNUMBER_T2412778222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewNumber
struct  HebrewNumber_t2412778222  : public RuntimeObject
{
public:

public:
};

struct HebrewNumber_t2412778222_StaticFields
{
public:
	// System.Globalization.HebrewNumber/HebrewValue[] System.Globalization.HebrewNumber::HebrewValues
	HebrewValueU5BU5D_t254494047* ___HebrewValues_0;
	// System.Char System.Globalization.HebrewNumber::maxHebrewNumberCh
	Il2CppChar ___maxHebrewNumberCh_1;
	// System.Globalization.HebrewNumber/HS[][] System.Globalization.HebrewNumber::NumberPasingState
	HSU5BU5DU5BU5D_t512339775* ___NumberPasingState_2;

public:
	inline static int32_t get_offset_of_HebrewValues_0() { return static_cast<int32_t>(offsetof(HebrewNumber_t2412778222_StaticFields, ___HebrewValues_0)); }
	inline HebrewValueU5BU5D_t254494047* get_HebrewValues_0() const { return ___HebrewValues_0; }
	inline HebrewValueU5BU5D_t254494047** get_address_of_HebrewValues_0() { return &___HebrewValues_0; }
	inline void set_HebrewValues_0(HebrewValueU5BU5D_t254494047* value)
	{
		___HebrewValues_0 = value;
		Il2CppCodeGenWriteBarrier((&___HebrewValues_0), value);
	}

	inline static int32_t get_offset_of_maxHebrewNumberCh_1() { return static_cast<int32_t>(offsetof(HebrewNumber_t2412778222_StaticFields, ___maxHebrewNumberCh_1)); }
	inline Il2CppChar get_maxHebrewNumberCh_1() const { return ___maxHebrewNumberCh_1; }
	inline Il2CppChar* get_address_of_maxHebrewNumberCh_1() { return &___maxHebrewNumberCh_1; }
	inline void set_maxHebrewNumberCh_1(Il2CppChar value)
	{
		___maxHebrewNumberCh_1 = value;
	}

	inline static int32_t get_offset_of_NumberPasingState_2() { return static_cast<int32_t>(offsetof(HebrewNumber_t2412778222_StaticFields, ___NumberPasingState_2)); }
	inline HSU5BU5DU5BU5D_t512339775* get_NumberPasingState_2() const { return ___NumberPasingState_2; }
	inline HSU5BU5DU5BU5D_t512339775** get_address_of_NumberPasingState_2() { return &___NumberPasingState_2; }
	inline void set_NumberPasingState_2(HSU5BU5DU5BU5D_t512339775* value)
	{
		___NumberPasingState_2 = value;
		Il2CppCodeGenWriteBarrier((&___NumberPasingState_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEBREWNUMBER_T2412778222_H
#ifndef RUNTIME_T3431859186_H
#define RUNTIME_T3431859186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Runtime
struct  Runtime_t3431859186  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIME_T3431859186_H
#ifndef DECODER_T1705875994_H
#define DECODER_T1705875994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t1705875994  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_t546595686 * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t1754900095 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t1705875994, ___m_fallback_0)); }
	inline DecoderFallback_t546595686 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_t546595686 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_t546595686 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallback_0), value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t1705875994, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t1754900095 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t1754900095 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t1754900095 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_fallbackBuffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T1705875994_H
#ifndef DECODERFALLBACK_T546595686_H
#define DECODERFALLBACK_T546595686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t546595686  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t546595686, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_t546595686_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_t546595686 * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_t546595686 * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t546595686_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_t546595686 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_t546595686 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_t546595686 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacementFallback_1), value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t546595686_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_t546595686 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_t546595686 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_t546595686 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___exceptionFallback_2), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_t546595686_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T546595686_H
#ifndef DECODERFALLBACKBUFFER_T1754900095_H
#define DECODERFALLBACKBUFFER_T1754900095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t1754900095  : public RuntimeObject
{
public:
	// System.Byte* System.Text.DecoderFallbackBuffer::byteStart
	uint8_t* ___byteStart_0;
	// System.Char* System.Text.DecoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;

public:
	inline static int32_t get_offset_of_byteStart_0() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t1754900095, ___byteStart_0)); }
	inline uint8_t* get_byteStart_0() const { return ___byteStart_0; }
	inline uint8_t** get_address_of_byteStart_0() { return &___byteStart_0; }
	inline void set_byteStart_0(uint8_t* value)
	{
		___byteStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t1754900095, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T1754900095_H
#ifndef VALUETYPE_T2353512482_H
#define VALUETYPE_T2353512482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2353512482  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2353512482_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2353512482_marshaled_com
{
};
#endif // VALUETYPE_T2353512482_H
#ifndef STRINGBUILDERCACHE_T271021619_H
#define STRINGBUILDERCACHE_T271021619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilderCache
struct  StringBuilderCache_t271021619  : public RuntimeObject
{
public:

public:
};

struct StringBuilderCache_t271021619_ThreadStaticFields
{
public:
	// System.Text.StringBuilder System.Text.StringBuilderCache::CachedInstance
	StringBuilder_t1017942816 * ___CachedInstance_0;

public:
	inline static int32_t get_offset_of_CachedInstance_0() { return static_cast<int32_t>(offsetof(StringBuilderCache_t271021619_ThreadStaticFields, ___CachedInstance_0)); }
	inline StringBuilder_t1017942816 * get_CachedInstance_0() const { return ___CachedInstance_0; }
	inline StringBuilder_t1017942816 ** get_address_of_CachedInstance_0() { return &___CachedInstance_0; }
	inline void set_CachedInstance_0(StringBuilder_t1017942816 * value)
	{
		___CachedInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___CachedInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDERCACHE_T271021619_H
#ifndef STRINGBUILDER_T1017942816_H
#define STRINGBUILDER_T1017942816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t1017942816  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t1313538844* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t1017942816 * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t1017942816, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t1313538844* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t1313538844** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t1313538844* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t1017942816, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t1017942816 * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t1017942816 ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t1017942816 * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t1017942816, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t1017942816, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t1017942816, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T1017942816_H
#ifndef EXCEPTION_T4083038797_H
#define EXCEPTION_T4083038797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t4083038797  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t4083038797 * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t3559648024 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t3791304912* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t3595384210* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____innerException_4)); }
	inline Exception_t4083038797 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t4083038797 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t4083038797 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t3559648024 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t3559648024 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t3559648024 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t3791304912* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t3791304912** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t3791304912* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t4083038797, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t3595384210* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t3595384210** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t3595384210* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t4083038797_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t4083038797_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t4083038797_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t4083038797_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t3559648024 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t3791304912* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t4083038797_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t4083038797_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t3559648024 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t3791304912* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T4083038797_H
#ifndef ENCODINGCHARBUFFER_T2779206987_H
#define ENCODINGCHARBUFFER_T2779206987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/EncodingCharBuffer
struct  EncodingCharBuffer_t2779206987  : public RuntimeObject
{
public:
	// System.Char* System.Text.Encoding/EncodingCharBuffer::chars
	Il2CppChar* ___chars_0;
	// System.Char* System.Text.Encoding/EncodingCharBuffer::charStart
	Il2CppChar* ___charStart_1;
	// System.Char* System.Text.Encoding/EncodingCharBuffer::charEnd
	Il2CppChar* ___charEnd_2;
	// System.Int32 System.Text.Encoding/EncodingCharBuffer::charCountResult
	int32_t ___charCountResult_3;
	// System.Text.Encoding System.Text.Encoding/EncodingCharBuffer::enc
	Encoding_t1804781422 * ___enc_4;
	// System.Text.DecoderNLS System.Text.Encoding/EncodingCharBuffer::decoder
	DecoderNLS_t3552643798 * ___decoder_5;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::byteStart
	uint8_t* ___byteStart_6;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::byteEnd
	uint8_t* ___byteEnd_7;
	// System.Byte* System.Text.Encoding/EncodingCharBuffer::bytes
	uint8_t* ___bytes_8;
	// System.Text.DecoderFallbackBuffer System.Text.Encoding/EncodingCharBuffer::fallbackBuffer
	DecoderFallbackBuffer_t1754900095 * ___fallbackBuffer_9;

public:
	inline static int32_t get_offset_of_chars_0() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___chars_0)); }
	inline Il2CppChar* get_chars_0() const { return ___chars_0; }
	inline Il2CppChar** get_address_of_chars_0() { return &___chars_0; }
	inline void set_chars_0(Il2CppChar* value)
	{
		___chars_0 = value;
	}

	inline static int32_t get_offset_of_charStart_1() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___charStart_1)); }
	inline Il2CppChar* get_charStart_1() const { return ___charStart_1; }
	inline Il2CppChar** get_address_of_charStart_1() { return &___charStart_1; }
	inline void set_charStart_1(Il2CppChar* value)
	{
		___charStart_1 = value;
	}

	inline static int32_t get_offset_of_charEnd_2() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___charEnd_2)); }
	inline Il2CppChar* get_charEnd_2() const { return ___charEnd_2; }
	inline Il2CppChar** get_address_of_charEnd_2() { return &___charEnd_2; }
	inline void set_charEnd_2(Il2CppChar* value)
	{
		___charEnd_2 = value;
	}

	inline static int32_t get_offset_of_charCountResult_3() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___charCountResult_3)); }
	inline int32_t get_charCountResult_3() const { return ___charCountResult_3; }
	inline int32_t* get_address_of_charCountResult_3() { return &___charCountResult_3; }
	inline void set_charCountResult_3(int32_t value)
	{
		___charCountResult_3 = value;
	}

	inline static int32_t get_offset_of_enc_4() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___enc_4)); }
	inline Encoding_t1804781422 * get_enc_4() const { return ___enc_4; }
	inline Encoding_t1804781422 ** get_address_of_enc_4() { return &___enc_4; }
	inline void set_enc_4(Encoding_t1804781422 * value)
	{
		___enc_4 = value;
		Il2CppCodeGenWriteBarrier((&___enc_4), value);
	}

	inline static int32_t get_offset_of_decoder_5() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___decoder_5)); }
	inline DecoderNLS_t3552643798 * get_decoder_5() const { return ___decoder_5; }
	inline DecoderNLS_t3552643798 ** get_address_of_decoder_5() { return &___decoder_5; }
	inline void set_decoder_5(DecoderNLS_t3552643798 * value)
	{
		___decoder_5 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_5), value);
	}

	inline static int32_t get_offset_of_byteStart_6() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___byteStart_6)); }
	inline uint8_t* get_byteStart_6() const { return ___byteStart_6; }
	inline uint8_t** get_address_of_byteStart_6() { return &___byteStart_6; }
	inline void set_byteStart_6(uint8_t* value)
	{
		___byteStart_6 = value;
	}

	inline static int32_t get_offset_of_byteEnd_7() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___byteEnd_7)); }
	inline uint8_t* get_byteEnd_7() const { return ___byteEnd_7; }
	inline uint8_t** get_address_of_byteEnd_7() { return &___byteEnd_7; }
	inline void set_byteEnd_7(uint8_t* value)
	{
		___byteEnd_7 = value;
	}

	inline static int32_t get_offset_of_bytes_8() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___bytes_8)); }
	inline uint8_t* get_bytes_8() const { return ___bytes_8; }
	inline uint8_t** get_address_of_bytes_8() { return &___bytes_8; }
	inline void set_bytes_8(uint8_t* value)
	{
		___bytes_8 = value;
	}

	inline static int32_t get_offset_of_fallbackBuffer_9() { return static_cast<int32_t>(offsetof(EncodingCharBuffer_t2779206987, ___fallbackBuffer_9)); }
	inline DecoderFallbackBuffer_t1754900095 * get_fallbackBuffer_9() const { return ___fallbackBuffer_9; }
	inline DecoderFallbackBuffer_t1754900095 ** get_address_of_fallbackBuffer_9() { return &___fallbackBuffer_9; }
	inline void set_fallbackBuffer_9(DecoderFallbackBuffer_t1754900095 * value)
	{
		___fallbackBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackBuffer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGCHARBUFFER_T2779206987_H
#ifndef ENCODERFALLBACKBUFFER_T1932256414_H
#define ENCODERFALLBACKBUFFER_T1932256414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t1932256414  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_t1717298589 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t1932256414, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t1932256414, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t1932256414, ___encoder_2)); }
	inline EncoderNLS_t1717298589 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_t1717298589 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_t1717298589 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_2), value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t1932256414, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t1932256414, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t1932256414, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t1932256414, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T1932256414_H
#ifndef ENCODINGBYTEBUFFER_T3052388219_H
#define ENCODINGBYTEBUFFER_T3052388219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/EncodingByteBuffer
struct  EncodingByteBuffer_t3052388219  : public RuntimeObject
{
public:
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::bytes
	uint8_t* ___bytes_0;
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::byteStart
	uint8_t* ___byteStart_1;
	// System.Byte* System.Text.Encoding/EncodingByteBuffer::byteEnd
	uint8_t* ___byteEnd_2;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::chars
	Il2CppChar* ___chars_3;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::charStart
	Il2CppChar* ___charStart_4;
	// System.Char* System.Text.Encoding/EncodingByteBuffer::charEnd
	Il2CppChar* ___charEnd_5;
	// System.Int32 System.Text.Encoding/EncodingByteBuffer::byteCountResult
	int32_t ___byteCountResult_6;
	// System.Text.Encoding System.Text.Encoding/EncodingByteBuffer::enc
	Encoding_t1804781422 * ___enc_7;
	// System.Text.EncoderNLS System.Text.Encoding/EncodingByteBuffer::encoder
	EncoderNLS_t1717298589 * ___encoder_8;
	// System.Text.EncoderFallbackBuffer System.Text.Encoding/EncodingByteBuffer::fallbackBuffer
	EncoderFallbackBuffer_t1932256414 * ___fallbackBuffer_9;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___bytes_0)); }
	inline uint8_t* get_bytes_0() const { return ___bytes_0; }
	inline uint8_t** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(uint8_t* value)
	{
		___bytes_0 = value;
	}

	inline static int32_t get_offset_of_byteStart_1() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___byteStart_1)); }
	inline uint8_t* get_byteStart_1() const { return ___byteStart_1; }
	inline uint8_t** get_address_of_byteStart_1() { return &___byteStart_1; }
	inline void set_byteStart_1(uint8_t* value)
	{
		___byteStart_1 = value;
	}

	inline static int32_t get_offset_of_byteEnd_2() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___byteEnd_2)); }
	inline uint8_t* get_byteEnd_2() const { return ___byteEnd_2; }
	inline uint8_t** get_address_of_byteEnd_2() { return &___byteEnd_2; }
	inline void set_byteEnd_2(uint8_t* value)
	{
		___byteEnd_2 = value;
	}

	inline static int32_t get_offset_of_chars_3() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___chars_3)); }
	inline Il2CppChar* get_chars_3() const { return ___chars_3; }
	inline Il2CppChar** get_address_of_chars_3() { return &___chars_3; }
	inline void set_chars_3(Il2CppChar* value)
	{
		___chars_3 = value;
	}

	inline static int32_t get_offset_of_charStart_4() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___charStart_4)); }
	inline Il2CppChar* get_charStart_4() const { return ___charStart_4; }
	inline Il2CppChar** get_address_of_charStart_4() { return &___charStart_4; }
	inline void set_charStart_4(Il2CppChar* value)
	{
		___charStart_4 = value;
	}

	inline static int32_t get_offset_of_charEnd_5() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___charEnd_5)); }
	inline Il2CppChar* get_charEnd_5() const { return ___charEnd_5; }
	inline Il2CppChar** get_address_of_charEnd_5() { return &___charEnd_5; }
	inline void set_charEnd_5(Il2CppChar* value)
	{
		___charEnd_5 = value;
	}

	inline static int32_t get_offset_of_byteCountResult_6() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___byteCountResult_6)); }
	inline int32_t get_byteCountResult_6() const { return ___byteCountResult_6; }
	inline int32_t* get_address_of_byteCountResult_6() { return &___byteCountResult_6; }
	inline void set_byteCountResult_6(int32_t value)
	{
		___byteCountResult_6 = value;
	}

	inline static int32_t get_offset_of_enc_7() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___enc_7)); }
	inline Encoding_t1804781422 * get_enc_7() const { return ___enc_7; }
	inline Encoding_t1804781422 ** get_address_of_enc_7() { return &___enc_7; }
	inline void set_enc_7(Encoding_t1804781422 * value)
	{
		___enc_7 = value;
		Il2CppCodeGenWriteBarrier((&___enc_7), value);
	}

	inline static int32_t get_offset_of_encoder_8() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___encoder_8)); }
	inline EncoderNLS_t1717298589 * get_encoder_8() const { return ___encoder_8; }
	inline EncoderNLS_t1717298589 ** get_address_of_encoder_8() { return &___encoder_8; }
	inline void set_encoder_8(EncoderNLS_t1717298589 * value)
	{
		___encoder_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_8), value);
	}

	inline static int32_t get_offset_of_fallbackBuffer_9() { return static_cast<int32_t>(offsetof(EncodingByteBuffer_t3052388219, ___fallbackBuffer_9)); }
	inline EncoderFallbackBuffer_t1932256414 * get_fallbackBuffer_9() const { return ___fallbackBuffer_9; }
	inline EncoderFallbackBuffer_t1932256414 ** get_address_of_fallbackBuffer_9() { return &___fallbackBuffer_9; }
	inline void set_fallbackBuffer_9(EncoderFallbackBuffer_t1932256414 * value)
	{
		___fallbackBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___fallbackBuffer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGBYTEBUFFER_T3052388219_H
#ifndef ENCODINGPROVIDER_T2994094009_H
#define ENCODINGPROVIDER_T2994094009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingProvider
struct  EncodingProvider_t2994094009  : public RuntimeObject
{
public:

public:
};

struct EncodingProvider_t2994094009_StaticFields
{
public:
	// System.Object System.Text.EncodingProvider::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Text.EncodingProvider[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncodingProvider::s_providers
	EncodingProviderU5BU5D_t4129658180* ___s_providers_1;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(EncodingProvider_t2994094009_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_providers_1() { return static_cast<int32_t>(offsetof(EncodingProvider_t2994094009_StaticFields, ___s_providers_1)); }
	inline EncodingProviderU5BU5D_t4129658180* get_s_providers_1() const { return ___s_providers_1; }
	inline EncodingProviderU5BU5D_t4129658180** get_address_of_s_providers_1() { return &___s_providers_1; }
	inline void set_s_providers_1(EncodingProviderU5BU5D_t4129658180* value)
	{
		___s_providers_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_providers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGPROVIDER_T2994094009_H
#ifndef ENCODING_T1804781422_H
#define ENCODING_T1804781422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1804781422  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t4157734213 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t4084546684 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t546595686 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t1804781422, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t1804781422, ___dataItem_10)); }
	inline CodePageDataItem_t4157734213 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t4157734213 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t4157734213 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t1804781422, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t1804781422, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t1804781422, ___encoderFallback_13)); }
	inline EncoderFallback_t4084546684 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t4084546684 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t4084546684 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t1804781422, ___decoderFallback_14)); }
	inline DecoderFallback_t546595686 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t546595686 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t546595686 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t1804781422_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1804781422 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1804781422 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1804781422 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1804781422 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1804781422 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1804781422 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1804781422 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1804781422 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t3971943106 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1804781422 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1804781422 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1804781422 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1804781422 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1804781422 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1804781422 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1804781422 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1804781422 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1804781422 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1804781422 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1804781422 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1804781422 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1804781422 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1804781422 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1804781422 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1804781422 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1804781422 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1804781422 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1804781422 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1804781422 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1804781422 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1804781422 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1804781422 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1804781422 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___encodings_8)); }
	inline Hashtable_t3971943106 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t3971943106 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t3971943106 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t1804781422_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1804781422_H
#ifndef ENCODERFALLBACK_T4084546684_H
#define ENCODERFALLBACK_T4084546684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t4084546684  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t4084546684, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t4084546684_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t4084546684 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t4084546684 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t4084546684_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t4084546684 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t4084546684 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t4084546684 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacementFallback_1), value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t4084546684_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t4084546684 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t4084546684 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t4084546684 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___exceptionFallback_2), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t4084546684_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T4084546684_H
#ifndef NULLABLE_1_T626644817_H
#define NULLABLE_1_T626644817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t626644817 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t626644817, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t626644817, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T626644817_H
#ifndef NULLABLE_1_T718036045_H
#define NULLABLE_1_T718036045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t718036045 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t718036045, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t718036045, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T718036045_H
#ifndef ENUM_T2692583479_H
#define ENUM_T2692583479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2692583479  : public ValueType_t2353512482
{
public:

public:
};

struct Enum_t2692583479_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1313538844* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2692583479_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1313538844* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1313538844** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1313538844* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2692583479_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2692583479_marshaled_com
{
};
#endif // ENUM_T2692583479_H
#ifndef FORMATLITERALS_T2212238260_H
#define FORMATLITERALS_T2212238260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanFormat/FormatLiterals
struct  FormatLiterals_t2212238260 
{
public:
	// System.String System.Globalization.TimeSpanFormat/FormatLiterals::AppCompatLiteral
	String_t* ___AppCompatLiteral_0;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::dd
	int32_t ___dd_1;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::hh
	int32_t ___hh_2;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::mm
	int32_t ___mm_3;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::ss
	int32_t ___ss_4;
	// System.Int32 System.Globalization.TimeSpanFormat/FormatLiterals::ff
	int32_t ___ff_5;
	// System.String[] System.Globalization.TimeSpanFormat/FormatLiterals::literals
	StringU5BU5D_t4160542075* ___literals_6;

public:
	inline static int32_t get_offset_of_AppCompatLiteral_0() { return static_cast<int32_t>(offsetof(FormatLiterals_t2212238260, ___AppCompatLiteral_0)); }
	inline String_t* get_AppCompatLiteral_0() const { return ___AppCompatLiteral_0; }
	inline String_t** get_address_of_AppCompatLiteral_0() { return &___AppCompatLiteral_0; }
	inline void set_AppCompatLiteral_0(String_t* value)
	{
		___AppCompatLiteral_0 = value;
		Il2CppCodeGenWriteBarrier((&___AppCompatLiteral_0), value);
	}

	inline static int32_t get_offset_of_dd_1() { return static_cast<int32_t>(offsetof(FormatLiterals_t2212238260, ___dd_1)); }
	inline int32_t get_dd_1() const { return ___dd_1; }
	inline int32_t* get_address_of_dd_1() { return &___dd_1; }
	inline void set_dd_1(int32_t value)
	{
		___dd_1 = value;
	}

	inline static int32_t get_offset_of_hh_2() { return static_cast<int32_t>(offsetof(FormatLiterals_t2212238260, ___hh_2)); }
	inline int32_t get_hh_2() const { return ___hh_2; }
	inline int32_t* get_address_of_hh_2() { return &___hh_2; }
	inline void set_hh_2(int32_t value)
	{
		___hh_2 = value;
	}

	inline static int32_t get_offset_of_mm_3() { return static_cast<int32_t>(offsetof(FormatLiterals_t2212238260, ___mm_3)); }
	inline int32_t get_mm_3() const { return ___mm_3; }
	inline int32_t* get_address_of_mm_3() { return &___mm_3; }
	inline void set_mm_3(int32_t value)
	{
		___mm_3 = value;
	}

	inline static int32_t get_offset_of_ss_4() { return static_cast<int32_t>(offsetof(FormatLiterals_t2212238260, ___ss_4)); }
	inline int32_t get_ss_4() const { return ___ss_4; }
	inline int32_t* get_address_of_ss_4() { return &___ss_4; }
	inline void set_ss_4(int32_t value)
	{
		___ss_4 = value;
	}

	inline static int32_t get_offset_of_ff_5() { return static_cast<int32_t>(offsetof(FormatLiterals_t2212238260, ___ff_5)); }
	inline int32_t get_ff_5() const { return ___ff_5; }
	inline int32_t* get_address_of_ff_5() { return &___ff_5; }
	inline void set_ff_5(int32_t value)
	{
		___ff_5 = value;
	}

	inline static int32_t get_offset_of_literals_6() { return static_cast<int32_t>(offsetof(FormatLiterals_t2212238260, ___literals_6)); }
	inline StringU5BU5D_t4160542075* get_literals_6() const { return ___literals_6; }
	inline StringU5BU5D_t4160542075** get_address_of_literals_6() { return &___literals_6; }
	inline void set_literals_6(StringU5BU5D_t4160542075* value)
	{
		___literals_6 = value;
		Il2CppCodeGenWriteBarrier((&___literals_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanFormat/FormatLiterals
struct FormatLiterals_t2212238260_marshaled_pinvoke
{
	char* ___AppCompatLiteral_0;
	int32_t ___dd_1;
	int32_t ___hh_2;
	int32_t ___mm_3;
	int32_t ___ss_4;
	int32_t ___ff_5;
	char** ___literals_6;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanFormat/FormatLiterals
struct FormatLiterals_t2212238260_marshaled_com
{
	Il2CppChar* ___AppCompatLiteral_0;
	int32_t ___dd_1;
	int32_t ___hh_2;
	int32_t ___mm_3;
	int32_t ___ss_4;
	int32_t ___ff_5;
	Il2CppChar** ___literals_6;
};
#endif // FORMATLITERALS_T2212238260_H
#ifndef ENCODERNLS_T1717298589_H
#define ENCODERNLS_T1717298589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderNLS
struct  EncoderNLS_t1717298589  : public Encoder_t2344908708
{
public:
	// System.Char System.Text.EncoderNLS::charLeftOver
	Il2CppChar ___charLeftOver_2;
	// System.Text.Encoding System.Text.EncoderNLS::m_encoding
	Encoding_t1804781422 * ___m_encoding_3;
	// System.Boolean System.Text.EncoderNLS::m_mustFlush
	bool ___m_mustFlush_4;
	// System.Boolean System.Text.EncoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_5;
	// System.Int32 System.Text.EncoderNLS::m_charsUsed
	int32_t ___m_charsUsed_6;

public:
	inline static int32_t get_offset_of_charLeftOver_2() { return static_cast<int32_t>(offsetof(EncoderNLS_t1717298589, ___charLeftOver_2)); }
	inline Il2CppChar get_charLeftOver_2() const { return ___charLeftOver_2; }
	inline Il2CppChar* get_address_of_charLeftOver_2() { return &___charLeftOver_2; }
	inline void set_charLeftOver_2(Il2CppChar value)
	{
		___charLeftOver_2 = value;
	}

	inline static int32_t get_offset_of_m_encoding_3() { return static_cast<int32_t>(offsetof(EncoderNLS_t1717298589, ___m_encoding_3)); }
	inline Encoding_t1804781422 * get_m_encoding_3() const { return ___m_encoding_3; }
	inline Encoding_t1804781422 ** get_address_of_m_encoding_3() { return &___m_encoding_3; }
	inline void set_m_encoding_3(Encoding_t1804781422 * value)
	{
		___m_encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_3), value);
	}

	inline static int32_t get_offset_of_m_mustFlush_4() { return static_cast<int32_t>(offsetof(EncoderNLS_t1717298589, ___m_mustFlush_4)); }
	inline bool get_m_mustFlush_4() const { return ___m_mustFlush_4; }
	inline bool* get_address_of_m_mustFlush_4() { return &___m_mustFlush_4; }
	inline void set_m_mustFlush_4(bool value)
	{
		___m_mustFlush_4 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_5() { return static_cast<int32_t>(offsetof(EncoderNLS_t1717298589, ___m_throwOnOverflow_5)); }
	inline bool get_m_throwOnOverflow_5() const { return ___m_throwOnOverflow_5; }
	inline bool* get_address_of_m_throwOnOverflow_5() { return &___m_throwOnOverflow_5; }
	inline void set_m_throwOnOverflow_5(bool value)
	{
		___m_throwOnOverflow_5 = value;
	}

	inline static int32_t get_offset_of_m_charsUsed_6() { return static_cast<int32_t>(offsetof(EncoderNLS_t1717298589, ___m_charsUsed_6)); }
	inline int32_t get_m_charsUsed_6() const { return ___m_charsUsed_6; }
	inline int32_t* get_address_of_m_charsUsed_6() { return &___m_charsUsed_6; }
	inline void set_m_charsUsed_6(int32_t value)
	{
		___m_charsUsed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERNLS_T1717298589_H
#ifndef ENCODEREXCEPTIONFALLBACK_T739748989_H
#define ENCODEREXCEPTIONFALLBACK_T739748989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t739748989  : public EncoderFallback_t4084546684
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T739748989_H
#ifndef DECODERNLS_T3552643798_H
#define DECODERNLS_T3552643798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderNLS
struct  DecoderNLS_t3552643798  : public Decoder_t1705875994
{
public:
	// System.Text.Encoding System.Text.DecoderNLS::m_encoding
	Encoding_t1804781422 * ___m_encoding_2;
	// System.Boolean System.Text.DecoderNLS::m_mustFlush
	bool ___m_mustFlush_3;
	// System.Boolean System.Text.DecoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_4;
	// System.Int32 System.Text.DecoderNLS::m_bytesUsed
	int32_t ___m_bytesUsed_5;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DecoderNLS_t3552643798, ___m_encoding_2)); }
	inline Encoding_t1804781422 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1804781422 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1804781422 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_mustFlush_3() { return static_cast<int32_t>(offsetof(DecoderNLS_t3552643798, ___m_mustFlush_3)); }
	inline bool get_m_mustFlush_3() const { return ___m_mustFlush_3; }
	inline bool* get_address_of_m_mustFlush_3() { return &___m_mustFlush_3; }
	inline void set_m_mustFlush_3(bool value)
	{
		___m_mustFlush_3 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_4() { return static_cast<int32_t>(offsetof(DecoderNLS_t3552643798, ___m_throwOnOverflow_4)); }
	inline bool get_m_throwOnOverflow_4() const { return ___m_throwOnOverflow_4; }
	inline bool* get_address_of_m_throwOnOverflow_4() { return &___m_throwOnOverflow_4; }
	inline void set_m_throwOnOverflow_4(bool value)
	{
		___m_throwOnOverflow_4 = value;
	}

	inline static int32_t get_offset_of_m_bytesUsed_5() { return static_cast<int32_t>(offsetof(DecoderNLS_t3552643798, ___m_bytesUsed_5)); }
	inline int32_t get_m_bytesUsed_5() const { return ___m_bytesUsed_5; }
	inline int32_t* get_address_of_m_bytesUsed_5() { return &___m_bytesUsed_5; }
	inline void set_m_bytesUsed_5(int32_t value)
	{
		___m_bytesUsed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERNLS_T3552643798_H
#ifndef DIGITVALUES_T3238575465_H
#define DIGITVALUES_T3238575465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CharUnicodeInfo/DigitValues
#pragma pack(push, tp, 2)
struct  DigitValues_t3238575465 
{
public:
	// System.SByte System.Globalization.CharUnicodeInfo/DigitValues::decimalDigit
	int8_t ___decimalDigit_0;
	// System.SByte System.Globalization.CharUnicodeInfo/DigitValues::digit
	int8_t ___digit_1;

public:
	inline static int32_t get_offset_of_decimalDigit_0() { return static_cast<int32_t>(offsetof(DigitValues_t3238575465, ___decimalDigit_0)); }
	inline int8_t get_decimalDigit_0() const { return ___decimalDigit_0; }
	inline int8_t* get_address_of_decimalDigit_0() { return &___decimalDigit_0; }
	inline void set_decimalDigit_0(int8_t value)
	{
		___decimalDigit_0 = value;
	}

	inline static int32_t get_offset_of_digit_1() { return static_cast<int32_t>(offsetof(DigitValues_t3238575465, ___digit_1)); }
	inline int8_t get_digit_1() const { return ___digit_1; }
	inline int8_t* get_address_of_digit_1() { return &___digit_1; }
	inline void set_digit_1(int8_t value)
	{
		___digit_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITVALUES_T3238575465_H
#ifndef BOOLEAN_T733662640_H
#define BOOLEAN_T733662640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t733662640 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t733662640, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t733662640_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t733662640_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t733662640_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T733662640_H
#ifndef RUNTIMEGENERICPARAMINFOHANDLE_T2943842873_H
#define RUNTIMEGENERICPARAMINFOHANDLE_T2943842873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeGenericParamInfoHandle
struct  RuntimeGenericParamInfoHandle_t2943842873 
{
public:
	// Mono.RuntimeStructs/GenericParamInfo* Mono.RuntimeGenericParamInfoHandle::value
	GenericParamInfo_t3154325765 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeGenericParamInfoHandle_t2943842873, ___value_0)); }
	inline GenericParamInfo_t3154325765 * get_value_0() const { return ___value_0; }
	inline GenericParamInfo_t3154325765 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(GenericParamInfo_t3154325765 * value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.RuntimeGenericParamInfoHandle
struct RuntimeGenericParamInfoHandle_t2943842873_marshaled_pinvoke
{
	GenericParamInfo_t3154325765 * ___value_0;
};
// Native definition for COM marshalling of Mono.RuntimeGenericParamInfoHandle
struct RuntimeGenericParamInfoHandle_t2943842873_marshaled_com
{
	GenericParamInfo_t3154325765 * ___value_0;
};
#endif // RUNTIMEGENERICPARAMINFOHANDLE_T2943842873_H
#ifndef RUNTIMEREMOTECLASSHANDLE_T4140785739_H
#define RUNTIMEREMOTECLASSHANDLE_T4140785739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeRemoteClassHandle
struct  RuntimeRemoteClassHandle_t4140785739 
{
public:
	// Mono.RuntimeStructs/RemoteClass* Mono.RuntimeRemoteClassHandle::value
	RemoteClass_t1062292167 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeRemoteClassHandle_t4140785739, ___value_0)); }
	inline RemoteClass_t1062292167 * get_value_0() const { return ___value_0; }
	inline RemoteClass_t1062292167 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RemoteClass_t1062292167 * value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.RuntimeRemoteClassHandle
struct RuntimeRemoteClassHandle_t4140785739_marshaled_pinvoke
{
	RemoteClass_t1062292167 * ___value_0;
};
// Native definition for COM marshalling of Mono.RuntimeRemoteClassHandle
struct RuntimeRemoteClassHandle_t4140785739_marshaled_com
{
	RemoteClass_t1062292167 * ___value_0;
};
#endif // RUNTIMEREMOTECLASSHANDLE_T4140785739_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T3952933775_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T3952933775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t3952933775  : public EncoderFallbackBuffer_t1932256414
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::strDefault
	String_t* ___strDefault_7;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::fallbackCount
	int32_t ___fallbackCount_8;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::fallbackIndex
	int32_t ___fallbackIndex_9;

public:
	inline static int32_t get_offset_of_strDefault_7() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3952933775, ___strDefault_7)); }
	inline String_t* get_strDefault_7() const { return ___strDefault_7; }
	inline String_t** get_address_of_strDefault_7() { return &___strDefault_7; }
	inline void set_strDefault_7(String_t* value)
	{
		___strDefault_7 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_7), value);
	}

	inline static int32_t get_offset_of_fallbackCount_8() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3952933775, ___fallbackCount_8)); }
	inline int32_t get_fallbackCount_8() const { return ___fallbackCount_8; }
	inline int32_t* get_address_of_fallbackCount_8() { return &___fallbackCount_8; }
	inline void set_fallbackCount_8(int32_t value)
	{
		___fallbackCount_8 = value;
	}

	inline static int32_t get_offset_of_fallbackIndex_9() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3952933775, ___fallbackIndex_9)); }
	inline int32_t get_fallbackIndex_9() const { return ___fallbackIndex_9; }
	inline int32_t* get_address_of_fallbackIndex_9() { return &___fallbackIndex_9; }
	inline void set_fallbackIndex_9(int32_t value)
	{
		___fallbackIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T3952933775_H
#ifndef RUNTIMECLASSHANDLE_T311823422_H
#define RUNTIMECLASSHANDLE_T311823422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeClassHandle
struct  RuntimeClassHandle_t311823422 
{
public:
	// Mono.RuntimeStructs/MonoClass* Mono.RuntimeClassHandle::value
	MonoClass_t2768458919 * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeClassHandle_t311823422, ___value_0)); }
	inline MonoClass_t2768458919 * get_value_0() const { return ___value_0; }
	inline MonoClass_t2768458919 ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(MonoClass_t2768458919 * value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.RuntimeClassHandle
struct RuntimeClassHandle_t311823422_marshaled_pinvoke
{
	MonoClass_t2768458919 * ___value_0;
};
// Native definition for COM marshalling of Mono.RuntimeClassHandle
struct RuntimeClassHandle_t311823422_marshaled_com
{
	MonoClass_t2768458919 * ___value_0;
};
#endif // RUNTIMECLASSHANDLE_T311823422_H
#ifndef TIMESPANTOKENIZER_T637726690_H
#define TIMESPANTOKENIZER_T637726690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanTokenizer
struct  TimeSpanTokenizer_t637726690 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanTokenizer::m_pos
	int32_t ___m_pos_0;
	// System.String System.Globalization.TimeSpanParse/TimeSpanTokenizer::m_value
	String_t* ___m_value_1;

public:
	inline static int32_t get_offset_of_m_pos_0() { return static_cast<int32_t>(offsetof(TimeSpanTokenizer_t637726690, ___m_pos_0)); }
	inline int32_t get_m_pos_0() const { return ___m_pos_0; }
	inline int32_t* get_address_of_m_pos_0() { return &___m_pos_0; }
	inline void set_m_pos_0(int32_t value)
	{
		___m_pos_0 = value;
	}

	inline static int32_t get_offset_of_m_value_1() { return static_cast<int32_t>(offsetof(TimeSpanTokenizer_t637726690, ___m_value_1)); }
	inline String_t* get_m_value_1() const { return ___m_value_1; }
	inline String_t** get_address_of_m_value_1() { return &___m_value_1; }
	inline void set_m_value_1(String_t* value)
	{
		___m_value_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/TimeSpanTokenizer
struct TimeSpanTokenizer_t637726690_marshaled_pinvoke
{
	int32_t ___m_pos_0;
	char* ___m_value_1;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/TimeSpanTokenizer
struct TimeSpanTokenizer_t637726690_marshaled_com
{
	int32_t ___m_pos_0;
	Il2CppChar* ___m_value_1;
};
#endif // TIMESPANTOKENIZER_T637726690_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T2255508326_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T2255508326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t2255508326  : public EncoderFallbackBuffer_t1932256414
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T2255508326_H
#ifndef STRINGPARSER_T3546687313_H
#define STRINGPARSER_T3546687313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/StringParser
struct  StringParser_t3546687313 
{
public:
	// System.String System.Globalization.TimeSpanParse/StringParser::str
	String_t* ___str_0;
	// System.Char System.Globalization.TimeSpanParse/StringParser::ch
	Il2CppChar ___ch_1;
	// System.Int32 System.Globalization.TimeSpanParse/StringParser::pos
	int32_t ___pos_2;
	// System.Int32 System.Globalization.TimeSpanParse/StringParser::len
	int32_t ___len_3;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(StringParser_t3546687313, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_ch_1() { return static_cast<int32_t>(offsetof(StringParser_t3546687313, ___ch_1)); }
	inline Il2CppChar get_ch_1() const { return ___ch_1; }
	inline Il2CppChar* get_address_of_ch_1() { return &___ch_1; }
	inline void set_ch_1(Il2CppChar value)
	{
		___ch_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(StringParser_t3546687313, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_len_3() { return static_cast<int32_t>(offsetof(StringParser_t3546687313, ___len_3)); }
	inline int32_t get_len_3() const { return ___len_3; }
	inline int32_t* get_address_of_len_3() { return &___len_3; }
	inline void set_len_3(int32_t value)
	{
		___len_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/StringParser
struct StringParser_t3546687313_marshaled_pinvoke
{
	char* ___str_0;
	uint8_t ___ch_1;
	int32_t ___pos_2;
	int32_t ___len_3;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/StringParser
struct StringParser_t3546687313_marshaled_com
{
	Il2CppChar* ___str_0;
	uint8_t ___ch_1;
	int32_t ___pos_2;
	int32_t ___len_3;
};
#endif // STRINGPARSER_T3546687313_H
#ifndef UNICODEDATAHEADER_T3128314719_H
#define UNICODEDATAHEADER_T3128314719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CharUnicodeInfo/UnicodeDataHeader
struct  UnicodeDataHeader_t3128314719 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char System.Globalization.CharUnicodeInfo/UnicodeDataHeader::TableName
			Il2CppChar ___TableName_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___TableName_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[32];
			// System.UInt16 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::version
			uint16_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[32];
			uint16_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding[40];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToCategoriesIndex
			uint32_t ___OffsetToCategoriesIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding_forAlignmentOnly[40];
			uint32_t ___OffsetToCategoriesIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding[44];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToCategoriesValue
			uint32_t ___OffsetToCategoriesValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding_forAlignmentOnly[44];
			uint32_t ___OffsetToCategoriesValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding[48];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToNumbericIndex
			uint32_t ___OffsetToNumbericIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding_forAlignmentOnly[48];
			uint32_t ___OffsetToNumbericIndex_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding[52];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToDigitValue
			uint32_t ___OffsetToDigitValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding_forAlignmentOnly[52];
			uint32_t ___OffsetToDigitValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding[56];
			// System.UInt32 System.Globalization.CharUnicodeInfo/UnicodeDataHeader::OffsetToNumbericValue
			uint32_t ___OffsetToNumbericValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding_forAlignmentOnly[56];
			uint32_t ___OffsetToNumbericValue_6_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_TableName_0() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t3128314719, ___TableName_0)); }
	inline Il2CppChar get_TableName_0() const { return ___TableName_0; }
	inline Il2CppChar* get_address_of_TableName_0() { return &___TableName_0; }
	inline void set_TableName_0(Il2CppChar value)
	{
		___TableName_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t3128314719, ___version_1)); }
	inline uint16_t get_version_1() const { return ___version_1; }
	inline uint16_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint16_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_OffsetToCategoriesIndex_2() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t3128314719, ___OffsetToCategoriesIndex_2)); }
	inline uint32_t get_OffsetToCategoriesIndex_2() const { return ___OffsetToCategoriesIndex_2; }
	inline uint32_t* get_address_of_OffsetToCategoriesIndex_2() { return &___OffsetToCategoriesIndex_2; }
	inline void set_OffsetToCategoriesIndex_2(uint32_t value)
	{
		___OffsetToCategoriesIndex_2 = value;
	}

	inline static int32_t get_offset_of_OffsetToCategoriesValue_3() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t3128314719, ___OffsetToCategoriesValue_3)); }
	inline uint32_t get_OffsetToCategoriesValue_3() const { return ___OffsetToCategoriesValue_3; }
	inline uint32_t* get_address_of_OffsetToCategoriesValue_3() { return &___OffsetToCategoriesValue_3; }
	inline void set_OffsetToCategoriesValue_3(uint32_t value)
	{
		___OffsetToCategoriesValue_3 = value;
	}

	inline static int32_t get_offset_of_OffsetToNumbericIndex_4() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t3128314719, ___OffsetToNumbericIndex_4)); }
	inline uint32_t get_OffsetToNumbericIndex_4() const { return ___OffsetToNumbericIndex_4; }
	inline uint32_t* get_address_of_OffsetToNumbericIndex_4() { return &___OffsetToNumbericIndex_4; }
	inline void set_OffsetToNumbericIndex_4(uint32_t value)
	{
		___OffsetToNumbericIndex_4 = value;
	}

	inline static int32_t get_offset_of_OffsetToDigitValue_5() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t3128314719, ___OffsetToDigitValue_5)); }
	inline uint32_t get_OffsetToDigitValue_5() const { return ___OffsetToDigitValue_5; }
	inline uint32_t* get_address_of_OffsetToDigitValue_5() { return &___OffsetToDigitValue_5; }
	inline void set_OffsetToDigitValue_5(uint32_t value)
	{
		___OffsetToDigitValue_5 = value;
	}

	inline static int32_t get_offset_of_OffsetToNumbericValue_6() { return static_cast<int32_t>(offsetof(UnicodeDataHeader_t3128314719, ___OffsetToNumbericValue_6)); }
	inline uint32_t get_OffsetToNumbericValue_6() const { return ___OffsetToNumbericValue_6; }
	inline uint32_t* get_address_of_OffsetToNumbericValue_6() { return &___OffsetToNumbericValue_6; }
	inline void set_OffsetToNumbericValue_6(uint32_t value)
	{
		___OffsetToNumbericValue_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CharUnicodeInfo/UnicodeDataHeader
struct UnicodeDataHeader_t3128314719_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___TableName_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___TableName_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[32];
			uint16_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[32];
			uint16_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding[40];
			uint32_t ___OffsetToCategoriesIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding_forAlignmentOnly[40];
			uint32_t ___OffsetToCategoriesIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding[44];
			uint32_t ___OffsetToCategoriesValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding_forAlignmentOnly[44];
			uint32_t ___OffsetToCategoriesValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding[48];
			uint32_t ___OffsetToNumbericIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding_forAlignmentOnly[48];
			uint32_t ___OffsetToNumbericIndex_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding[52];
			uint32_t ___OffsetToDigitValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding_forAlignmentOnly[52];
			uint32_t ___OffsetToDigitValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding[56];
			uint32_t ___OffsetToNumbericValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding_forAlignmentOnly[56];
			uint32_t ___OffsetToNumbericValue_6_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of System.Globalization.CharUnicodeInfo/UnicodeDataHeader
struct UnicodeDataHeader_t3128314719_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___TableName_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___TableName_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_1_OffsetPadding[32];
			uint16_t ___version_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_1_OffsetPadding_forAlignmentOnly[32];
			uint16_t ___version_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding[40];
			uint32_t ___OffsetToCategoriesIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesIndex_2_OffsetPadding_forAlignmentOnly[40];
			uint32_t ___OffsetToCategoriesIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding[44];
			uint32_t ___OffsetToCategoriesValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToCategoriesValue_3_OffsetPadding_forAlignmentOnly[44];
			uint32_t ___OffsetToCategoriesValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding[48];
			uint32_t ___OffsetToNumbericIndex_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericIndex_4_OffsetPadding_forAlignmentOnly[48];
			uint32_t ___OffsetToNumbericIndex_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding[52];
			uint32_t ___OffsetToDigitValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToDigitValue_5_OffsetPadding_forAlignmentOnly[52];
			uint32_t ___OffsetToDigitValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding[56];
			uint32_t ___OffsetToNumbericValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___OffsetToNumbericValue_6_OffsetPadding_forAlignmentOnly[56];
			uint32_t ___OffsetToNumbericValue_6_forAlignmentOnly;
		};
	};
};
#endif // UNICODEDATAHEADER_T3128314719_H
#ifndef DEFAULTDECODER_T3591605022_H
#define DEFAULTDECODER_T3591605022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/DefaultDecoder
struct  DefaultDecoder_t3591605022  : public Decoder_t1705875994
{
public:
	// System.Text.Encoding System.Text.Encoding/DefaultDecoder::m_encoding
	Encoding_t1804781422 * ___m_encoding_2;
	// System.Boolean System.Text.Encoding/DefaultDecoder::m_hasInitializedEncoding
	bool ___m_hasInitializedEncoding_3;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DefaultDecoder_t3591605022, ___m_encoding_2)); }
	inline Encoding_t1804781422 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1804781422 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1804781422 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_hasInitializedEncoding_3() { return static_cast<int32_t>(offsetof(DefaultDecoder_t3591605022, ___m_hasInitializedEncoding_3)); }
	inline bool get_m_hasInitializedEncoding_3() const { return ___m_hasInitializedEncoding_3; }
	inline bool* get_address_of_m_hasInitializedEncoding_3() { return &___m_hasInitializedEncoding_3; }
	inline void set_m_hasInitializedEncoding_3(bool value)
	{
		___m_hasInitializedEncoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDECODER_T3591605022_H
#ifndef UTF8ENCODING_T523309809_H
#define UTF8ENCODING_T523309809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t523309809  : public Encoding_t1804781422
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t523309809, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t523309809, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T523309809_H
#ifndef DECODERUTF7FALLBACKBUFFER_T3543311229_H
#define DECODERUTF7FALLBACKBUFFER_T3543311229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct  DecoderUTF7FallbackBuffer_t3543311229  : public DecoderFallbackBuffer_t1754900095
{
public:
	// System.Char System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::cFallback
	Il2CppChar ___cFallback_2;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iCount
	int32_t ___iCount_3;
	// System.Int32 System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::iSize
	int32_t ___iSize_4;

public:
	inline static int32_t get_offset_of_cFallback_2() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t3543311229, ___cFallback_2)); }
	inline Il2CppChar get_cFallback_2() const { return ___cFallback_2; }
	inline Il2CppChar* get_address_of_cFallback_2() { return &___cFallback_2; }
	inline void set_cFallback_2(Il2CppChar value)
	{
		___cFallback_2 = value;
	}

	inline static int32_t get_offset_of_iCount_3() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t3543311229, ___iCount_3)); }
	inline int32_t get_iCount_3() const { return ___iCount_3; }
	inline int32_t* get_address_of_iCount_3() { return &___iCount_3; }
	inline void set_iCount_3(int32_t value)
	{
		___iCount_3 = value;
	}

	inline static int32_t get_offset_of_iSize_4() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_t3543311229, ___iSize_4)); }
	inline int32_t get_iSize_4() const { return ___iSize_4; }
	inline int32_t* get_address_of_iSize_4() { return &___iSize_4; }
	inline void set_iSize_4(int32_t value)
	{
		___iSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERUTF7FALLBACKBUFFER_T3543311229_H
#ifndef SYSTEMEXCEPTION_T1971328175_H
#define SYSTEMEXCEPTION_T1971328175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1971328175  : public Exception_t4083038797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1971328175_H
#ifndef DECODERUTF7FALLBACK_T1675283575_H
#define DECODERUTF7FALLBACK_T1675283575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct  DecoderUTF7Fallback_t1675283575  : public DecoderFallback_t546595686
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERUTF7FALLBACK_T1675283575_H
#ifndef DATA_T3670784056_H
#define DATA_T3670784056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo/Data
struct  Data_t3670784056 
{
public:
	// System.Int32 System.Globalization.CultureInfo/Data::ansi
	int32_t ___ansi_0;
	// System.Int32 System.Globalization.CultureInfo/Data::ebcdic
	int32_t ___ebcdic_1;
	// System.Int32 System.Globalization.CultureInfo/Data::mac
	int32_t ___mac_2;
	// System.Int32 System.Globalization.CultureInfo/Data::oem
	int32_t ___oem_3;
	// System.Boolean System.Globalization.CultureInfo/Data::right_to_left
	bool ___right_to_left_4;
	// System.Byte System.Globalization.CultureInfo/Data::list_sep
	uint8_t ___list_sep_5;

public:
	inline static int32_t get_offset_of_ansi_0() { return static_cast<int32_t>(offsetof(Data_t3670784056, ___ansi_0)); }
	inline int32_t get_ansi_0() const { return ___ansi_0; }
	inline int32_t* get_address_of_ansi_0() { return &___ansi_0; }
	inline void set_ansi_0(int32_t value)
	{
		___ansi_0 = value;
	}

	inline static int32_t get_offset_of_ebcdic_1() { return static_cast<int32_t>(offsetof(Data_t3670784056, ___ebcdic_1)); }
	inline int32_t get_ebcdic_1() const { return ___ebcdic_1; }
	inline int32_t* get_address_of_ebcdic_1() { return &___ebcdic_1; }
	inline void set_ebcdic_1(int32_t value)
	{
		___ebcdic_1 = value;
	}

	inline static int32_t get_offset_of_mac_2() { return static_cast<int32_t>(offsetof(Data_t3670784056, ___mac_2)); }
	inline int32_t get_mac_2() const { return ___mac_2; }
	inline int32_t* get_address_of_mac_2() { return &___mac_2; }
	inline void set_mac_2(int32_t value)
	{
		___mac_2 = value;
	}

	inline static int32_t get_offset_of_oem_3() { return static_cast<int32_t>(offsetof(Data_t3670784056, ___oem_3)); }
	inline int32_t get_oem_3() const { return ___oem_3; }
	inline int32_t* get_address_of_oem_3() { return &___oem_3; }
	inline void set_oem_3(int32_t value)
	{
		___oem_3 = value;
	}

	inline static int32_t get_offset_of_right_to_left_4() { return static_cast<int32_t>(offsetof(Data_t3670784056, ___right_to_left_4)); }
	inline bool get_right_to_left_4() const { return ___right_to_left_4; }
	inline bool* get_address_of_right_to_left_4() { return &___right_to_left_4; }
	inline void set_right_to_left_4(bool value)
	{
		___right_to_left_4 = value;
	}

	inline static int32_t get_offset_of_list_sep_5() { return static_cast<int32_t>(offsetof(Data_t3670784056, ___list_sep_5)); }
	inline uint8_t get_list_sep_5() const { return ___list_sep_5; }
	inline uint8_t* get_address_of_list_sep_5() { return &___list_sep_5; }
	inline void set_list_sep_5(uint8_t value)
	{
		___list_sep_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo/Data
struct Data_t3670784056_marshaled_pinvoke
{
	int32_t ___ansi_0;
	int32_t ___ebcdic_1;
	int32_t ___mac_2;
	int32_t ___oem_3;
	int32_t ___right_to_left_4;
	uint8_t ___list_sep_5;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo/Data
struct Data_t3670784056_marshaled_com
{
	int32_t ___ansi_0;
	int32_t ___ebcdic_1;
	int32_t ___mac_2;
	int32_t ___oem_3;
	int32_t ___right_to_left_4;
	uint8_t ___list_sep_5;
};
#endif // DATA_T3670784056_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t1843741840 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t1843741840 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t1843741840 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t1843741840 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t1843741840 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t1843741840 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t1843741840 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t1843741840 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DEFAULTENCODER_T4231679030_H
#define DEFAULTENCODER_T4231679030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/DefaultEncoder
struct  DefaultEncoder_t4231679030  : public Encoder_t2344908708
{
public:
	// System.Text.Encoding System.Text.Encoding/DefaultEncoder::m_encoding
	Encoding_t1804781422 * ___m_encoding_2;
	// System.Boolean System.Text.Encoding/DefaultEncoder::m_hasInitializedEncoding
	bool ___m_hasInitializedEncoding_3;
	// System.Char System.Text.Encoding/DefaultEncoder::charLeftOver
	Il2CppChar ___charLeftOver_4;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DefaultEncoder_t4231679030, ___m_encoding_2)); }
	inline Encoding_t1804781422 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1804781422 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1804781422 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_m_hasInitializedEncoding_3() { return static_cast<int32_t>(offsetof(DefaultEncoder_t4231679030, ___m_hasInitializedEncoding_3)); }
	inline bool get_m_hasInitializedEncoding_3() const { return ___m_hasInitializedEncoding_3; }
	inline bool* get_address_of_m_hasInitializedEncoding_3() { return &___m_hasInitializedEncoding_3; }
	inline void set_m_hasInitializedEncoding_3(bool value)
	{
		___m_hasInitializedEncoding_3 = value;
	}

	inline static int32_t get_offset_of_charLeftOver_4() { return static_cast<int32_t>(offsetof(DefaultEncoder_t4231679030, ___charLeftOver_4)); }
	inline Il2CppChar get_charLeftOver_4() const { return ___charLeftOver_4; }
	inline Il2CppChar* get_address_of_charLeftOver_4() { return &___charLeftOver_4; }
	inline void set_charLeftOver_4(Il2CppChar value)
	{
		___charLeftOver_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTENCODER_T4231679030_H
#ifndef PUNYCODE_T524748583_H
#define PUNYCODE_T524748583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.Punycode
struct  Punycode_t524748583  : public Bootstring_t2556271891
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUNYCODE_T524748583_H
#ifndef UTF32ENCODING_T3676304855_H
#define UTF32ENCODING_T3676304855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t3676304855  : public Encoding_t1804781422
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_16;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_17;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_18;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_16() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3676304855, ___emitUTF32ByteOrderMark_16)); }
	inline bool get_emitUTF32ByteOrderMark_16() const { return ___emitUTF32ByteOrderMark_16; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_16() { return &___emitUTF32ByteOrderMark_16; }
	inline void set_emitUTF32ByteOrderMark_16(bool value)
	{
		___emitUTF32ByteOrderMark_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3676304855, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}

	inline static int32_t get_offset_of_bigEndian_18() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3676304855, ___bigEndian_18)); }
	inline bool get_bigEndian_18() const { return ___bigEndian_18; }
	inline bool* get_address_of_bigEndian_18() { return &___bigEndian_18; }
	inline void set_bigEndian_18(bool value)
	{
		___bigEndian_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T3676304855_H
#ifndef UNICODEENCODING_T3794953769_H
#define UNICODEENCODING_T3794953769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t3794953769  : public Encoding_t1804781422
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_16;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_17;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_18;

public:
	inline static int32_t get_offset_of_isThrowException_16() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t3794953769, ___isThrowException_16)); }
	inline bool get_isThrowException_16() const { return ___isThrowException_16; }
	inline bool* get_address_of_isThrowException_16() { return &___isThrowException_16; }
	inline void set_isThrowException_16(bool value)
	{
		___isThrowException_16 = value;
	}

	inline static int32_t get_offset_of_bigEndian_17() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t3794953769, ___bigEndian_17)); }
	inline bool get_bigEndian_17() const { return ___bigEndian_17; }
	inline bool* get_address_of_bigEndian_17() { return &___bigEndian_17; }
	inline void set_bigEndian_17(bool value)
	{
		___bigEndian_17 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_18() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t3794953769, ___byteOrderMark_18)); }
	inline bool get_byteOrderMark_18() const { return ___byteOrderMark_18; }
	inline bool* get_address_of_byteOrderMark_18() { return &___byteOrderMark_18; }
	inline void set_byteOrderMark_18(bool value)
	{
		___byteOrderMark_18 = value;
	}
};

struct UnicodeEncoding_t3794953769_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_19;

public:
	inline static int32_t get_offset_of_highLowPatternMask_19() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t3794953769_StaticFields, ___highLowPatternMask_19)); }
	inline uint64_t get_highLowPatternMask_19() const { return ___highLowPatternMask_19; }
	inline uint64_t* get_address_of_highLowPatternMask_19() { return &___highLowPatternMask_19; }
	inline void set_highLowPatternMask_19(uint64_t value)
	{
		___highLowPatternMask_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T3794953769_H
#ifndef INTERNALENCODINGDATAITEM_T3901848907_H
#define INTERNALENCODINGDATAITEM_T3901848907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.InternalEncodingDataItem
struct  InternalEncodingDataItem_t3901848907 
{
public:
	// System.String System.Globalization.InternalEncodingDataItem::webName
	String_t* ___webName_0;
	// System.UInt16 System.Globalization.InternalEncodingDataItem::codePage
	uint16_t ___codePage_1;

public:
	inline static int32_t get_offset_of_webName_0() { return static_cast<int32_t>(offsetof(InternalEncodingDataItem_t3901848907, ___webName_0)); }
	inline String_t* get_webName_0() const { return ___webName_0; }
	inline String_t** get_address_of_webName_0() { return &___webName_0; }
	inline void set_webName_0(String_t* value)
	{
		___webName_0 = value;
		Il2CppCodeGenWriteBarrier((&___webName_0), value);
	}

	inline static int32_t get_offset_of_codePage_1() { return static_cast<int32_t>(offsetof(InternalEncodingDataItem_t3901848907, ___codePage_1)); }
	inline uint16_t get_codePage_1() const { return ___codePage_1; }
	inline uint16_t* get_address_of_codePage_1() { return &___codePage_1; }
	inline void set_codePage_1(uint16_t value)
	{
		___codePage_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.InternalEncodingDataItem
struct InternalEncodingDataItem_t3901848907_marshaled_pinvoke
{
	char* ___webName_0;
	uint16_t ___codePage_1;
};
// Native definition for COM marshalling of System.Globalization.InternalEncodingDataItem
struct InternalEncodingDataItem_t3901848907_marshaled_com
{
	Il2CppChar* ___webName_0;
	uint16_t ___codePage_1;
};
#endif // INTERNALENCODINGDATAITEM_T3901848907_H
#ifndef INTERNALCODEPAGEDATAITEM_T2950334692_H
#define INTERNALCODEPAGEDATAITEM_T2950334692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.InternalCodePageDataItem
struct  InternalCodePageDataItem_t2950334692 
{
public:
	// System.UInt16 System.Globalization.InternalCodePageDataItem::codePage
	uint16_t ___codePage_0;
	// System.UInt16 System.Globalization.InternalCodePageDataItem::uiFamilyCodePage
	uint16_t ___uiFamilyCodePage_1;
	// System.UInt32 System.Globalization.InternalCodePageDataItem::flags
	uint32_t ___flags_2;
	// System.String System.Globalization.InternalCodePageDataItem::Names
	String_t* ___Names_3;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(InternalCodePageDataItem_t2950334692, ___codePage_0)); }
	inline uint16_t get_codePage_0() const { return ___codePage_0; }
	inline uint16_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(uint16_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_uiFamilyCodePage_1() { return static_cast<int32_t>(offsetof(InternalCodePageDataItem_t2950334692, ___uiFamilyCodePage_1)); }
	inline uint16_t get_uiFamilyCodePage_1() const { return ___uiFamilyCodePage_1; }
	inline uint16_t* get_address_of_uiFamilyCodePage_1() { return &___uiFamilyCodePage_1; }
	inline void set_uiFamilyCodePage_1(uint16_t value)
	{
		___uiFamilyCodePage_1 = value;
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(InternalCodePageDataItem_t2950334692, ___flags_2)); }
	inline uint32_t get_flags_2() const { return ___flags_2; }
	inline uint32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(uint32_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_Names_3() { return static_cast<int32_t>(offsetof(InternalCodePageDataItem_t2950334692, ___Names_3)); }
	inline String_t* get_Names_3() const { return ___Names_3; }
	inline String_t** get_address_of_Names_3() { return &___Names_3; }
	inline void set_Names_3(String_t* value)
	{
		___Names_3 = value;
		Il2CppCodeGenWriteBarrier((&___Names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.InternalCodePageDataItem
struct InternalCodePageDataItem_t2950334692_marshaled_pinvoke
{
	uint16_t ___codePage_0;
	uint16_t ___uiFamilyCodePage_1;
	uint32_t ___flags_2;
	char* ___Names_3;
};
// Native definition for COM marshalling of System.Globalization.InternalCodePageDataItem
struct InternalCodePageDataItem_t2950334692_marshaled_com
{
	uint16_t ___codePage_0;
	uint16_t ___uiFamilyCodePage_1;
	uint32_t ___flags_2;
	Il2CppChar* ___Names_3;
};
#endif // INTERNALCODEPAGEDATAITEM_T2950334692_H
#ifndef DATETIME_T1480186961_H
#define DATETIME_T1480186961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t1480186961 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t1480186961, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t1480186961_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t1276023077* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t1276023077* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t1480186961  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t1480186961  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t1480186961_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t1276023077* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t1276023077** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t1276023077* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t1480186961_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t1276023077* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t1276023077** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t1276023077* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t1480186961_StaticFields, ___MinValue_2)); }
	inline DateTime_t1480186961  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t1480186961 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t1480186961  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t1480186961_StaticFields, ___MaxValue_3)); }
	inline DateTime_t1480186961  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t1480186961 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t1480186961  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1480186961_H
#ifndef UTF7ENCODING_T3994199422_H
#define UTF7ENCODING_T3994199422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t3994199422  : public Encoding_t1804781422
{
public:
	// System.Byte[] System.Text.UTF7Encoding::base64Bytes
	ByteU5BU5D_t3632859112* ___base64Bytes_16;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t3813736024* ___base64Values_17;
	// System.Boolean[] System.Text.UTF7Encoding::directEncode
	BooleanU5BU5D_t3168228753* ___directEncode_18;
	// System.Boolean System.Text.UTF7Encoding::m_allowOptionals
	bool ___m_allowOptionals_19;

public:
	inline static int32_t get_offset_of_base64Bytes_16() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3994199422, ___base64Bytes_16)); }
	inline ByteU5BU5D_t3632859112* get_base64Bytes_16() const { return ___base64Bytes_16; }
	inline ByteU5BU5D_t3632859112** get_address_of_base64Bytes_16() { return &___base64Bytes_16; }
	inline void set_base64Bytes_16(ByteU5BU5D_t3632859112* value)
	{
		___base64Bytes_16 = value;
		Il2CppCodeGenWriteBarrier((&___base64Bytes_16), value);
	}

	inline static int32_t get_offset_of_base64Values_17() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3994199422, ___base64Values_17)); }
	inline SByteU5BU5D_t3813736024* get_base64Values_17() const { return ___base64Values_17; }
	inline SByteU5BU5D_t3813736024** get_address_of_base64Values_17() { return &___base64Values_17; }
	inline void set_base64Values_17(SByteU5BU5D_t3813736024* value)
	{
		___base64Values_17 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_17), value);
	}

	inline static int32_t get_offset_of_directEncode_18() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3994199422, ___directEncode_18)); }
	inline BooleanU5BU5D_t3168228753* get_directEncode_18() const { return ___directEncode_18; }
	inline BooleanU5BU5D_t3168228753** get_address_of_directEncode_18() { return &___directEncode_18; }
	inline void set_directEncode_18(BooleanU5BU5D_t3168228753* value)
	{
		___directEncode_18 = value;
		Il2CppCodeGenWriteBarrier((&___directEncode_18), value);
	}

	inline static int32_t get_offset_of_m_allowOptionals_19() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3994199422, ___m_allowOptionals_19)); }
	inline bool get_m_allowOptionals_19() const { return ___m_allowOptionals_19; }
	inline bool* get_address_of_m_allowOptionals_19() { return &___m_allowOptionals_19; }
	inline void set_m_allowOptionals_19(bool value)
	{
		___m_allowOptionals_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T3994199422_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1057184676_H
#define ENCODERREPLACEMENTFALLBACK_T1057184676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1057184676  : public EncoderFallback_t4084546684
{
public:
	// System.String System.Text.EncoderReplacementFallback::strDefault
	String_t* ___strDefault_4;

public:
	inline static int32_t get_offset_of_strDefault_4() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1057184676, ___strDefault_4)); }
	inline String_t* get_strDefault_4() const { return ___strDefault_4; }
	inline String_t** get_address_of_strDefault_4() { return &___strDefault_4; }
	inline void set_strDefault_4(String_t* value)
	{
		___strDefault_4 = value;
		Il2CppCodeGenWriteBarrier((&___strDefault_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1057184676_H
#ifndef PARSEFAILUREKIND_T2562700250_H
#define PARSEFAILUREKIND_T2562700250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/ParseFailureKind
struct  ParseFailureKind_t2562700250 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t2562700250, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T2562700250_H
#ifndef TIMESPANSTANDARDSTYLES_T2119657244_H
#define TIMESPANSTANDARDSTYLES_T2119657244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanStandardStyles
struct  TimeSpanStandardStyles_t2119657244 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanStandardStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeSpanStandardStyles_t2119657244, ___value___2)); }
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
#endif // TIMESPANSTANDARDSTYLES_T2119657244_H
#ifndef TTT_T3880172783_H
#define TTT_T3880172783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TTT
struct  TTT_t3880172783 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/TTT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TTT_t3880172783, ___value___2)); }
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
#endif // TTT_T3880172783_H
#ifndef TIMESPANSTYLES_T3457622238_H
#define TIMESPANSTYLES_T3457622238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanStyles
struct  TimeSpanStyles_t3457622238 
{
public:
	// System.Int32 System.Globalization.TimeSpanStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeSpanStyles_t3457622238, ___value___2)); }
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
#endif // TIMESPANSTYLES_T3457622238_H
#ifndef TIMESPANTHROWSTYLE_T1208515922_H
#define TIMESPANTHROWSTYLE_T1208515922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanThrowStyle
struct  TimeSpanThrowStyle_t1208515922 
{
public:
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanThrowStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeSpanThrowStyle_t1208515922, ___value___2)); }
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
#endif // TIMESPANTHROWSTYLE_T1208515922_H
#ifndef UTF8DECODER_T1866090888_H
#define UTF8DECODER_T1866090888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t1866090888  : public DecoderNLS_t3552643798
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::bits
	int32_t ___bits_6;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(UTF8Decoder_t1866090888, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T1866090888_H
#ifndef RUNTIMEEVENTHANDLE_T484387494_H
#define RUNTIMEEVENTHANDLE_T484387494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimeEventHandle
struct  RuntimeEventHandle_t484387494 
{
public:
	// System.IntPtr Mono.RuntimeEventHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeEventHandle_t484387494, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEEVENTHANDLE_T484387494_H
#ifndef RUNTIMEPROPERTYHANDLE_T3881052731_H
#define RUNTIMEPROPERTYHANDLE_T3881052731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.RuntimePropertyHandle
struct  RuntimePropertyHandle_t3881052731 
{
public:
	// System.IntPtr Mono.RuntimePropertyHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimePropertyHandle_t3881052731, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPROPERTYHANDLE_T3881052731_H
#ifndef ARGUMENTEXCEPTION_T1221407260_H
#define ARGUMENTEXCEPTION_T1221407260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t1221407260  : public SystemException_t1971328175
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_16;

public:
	inline static int32_t get_offset_of_m_paramName_16() { return static_cast<int32_t>(offsetof(ArgumentException_t1221407260, ___m_paramName_16)); }
	inline String_t* get_m_paramName_16() const { return ___m_paramName_16; }
	inline String_t** get_address_of_m_paramName_16() { return &___m_paramName_16; }
	inline void set_m_paramName_16(String_t* value)
	{
		___m_paramName_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T1221407260_H
#ifndef TIMESPAN_T2034903957_H
#define TIMESPAN_T2034903957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2034903957 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t2034903957_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2034903957  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2034903957  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2034903957  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ___Zero_0)); }
	inline TimeSpan_t2034903957  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t2034903957 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t2034903957  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t2034903957  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t2034903957 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t2034903957  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t2034903957  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t2034903957 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t2034903957  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2034903957_H
#ifndef TOKENTYPE_T1049956842_H
#define TOKENTYPE_T1049956842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t1049956842 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t1049956842, ___value___2)); }
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
#endif // TOKENTYPE_T1049956842_H
#ifndef UNICODECATEGORY_T2267085102_H
#define UNICODECATEGORY_T2267085102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.UnicodeCategory
struct  UnicodeCategory_t2267085102 
{
public:
	// System.Int32 System.Globalization.UnicodeCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnicodeCategory_t2267085102, ___value___2)); }
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
#endif // UNICODECATEGORY_T2267085102_H
#ifndef PATTERN_T2329715606_H
#define PATTERN_T2329715606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanFormat/Pattern
struct  Pattern_t2329715606 
{
public:
	// System.Int32 System.Globalization.TimeSpanFormat/Pattern::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pattern_t2329715606, ___value___2)); }
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
#endif // PATTERN_T2329715606_H
#ifndef HEBREWTOKEN_T1098630438_H
#define HEBREWTOKEN_T1098630438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewNumber/HebrewToken
struct  HebrewToken_t1098630438 
{
public:
	// System.Int32 System.Globalization.HebrewNumber/HebrewToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HebrewToken_t1098630438, ___value___2)); }
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
#endif // HEBREWTOKEN_T1098630438_H
#ifndef TAIWANCALENDAR_T862252470_H
#define TAIWANCALENDAR_T862252470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TaiwanCalendar
struct  TaiwanCalendar_t862252470  : public Calendar_t571621478
{
public:
	// System.Globalization.GregorianCalendarHelper System.Globalization.TaiwanCalendar::helper
	GregorianCalendarHelper_t404050585 * ___helper_5;

public:
	inline static int32_t get_offset_of_helper_5() { return static_cast<int32_t>(offsetof(TaiwanCalendar_t862252470, ___helper_5)); }
	inline GregorianCalendarHelper_t404050585 * get_helper_5() const { return ___helper_5; }
	inline GregorianCalendarHelper_t404050585 ** get_address_of_helper_5() { return &___helper_5; }
	inline void set_helper_5(GregorianCalendarHelper_t404050585 * value)
	{
		___helper_5 = value;
		Il2CppCodeGenWriteBarrier((&___helper_5), value);
	}
};

struct TaiwanCalendar_t862252470_StaticFields
{
public:
	// System.Globalization.EraInfo[] System.Globalization.TaiwanCalendar::taiwanEraInfo
	EraInfoU5BU5D_t4130280761* ___taiwanEraInfo_3;
	// System.Globalization.Calendar modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.TaiwanCalendar::s_defaultInstance
	Calendar_t571621478 * ___s_defaultInstance_4;
	// System.DateTime System.Globalization.TaiwanCalendar::calendarMinValue
	DateTime_t1480186961  ___calendarMinValue_6;

public:
	inline static int32_t get_offset_of_taiwanEraInfo_3() { return static_cast<int32_t>(offsetof(TaiwanCalendar_t862252470_StaticFields, ___taiwanEraInfo_3)); }
	inline EraInfoU5BU5D_t4130280761* get_taiwanEraInfo_3() const { return ___taiwanEraInfo_3; }
	inline EraInfoU5BU5D_t4130280761** get_address_of_taiwanEraInfo_3() { return &___taiwanEraInfo_3; }
	inline void set_taiwanEraInfo_3(EraInfoU5BU5D_t4130280761* value)
	{
		___taiwanEraInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___taiwanEraInfo_3), value);
	}

	inline static int32_t get_offset_of_s_defaultInstance_4() { return static_cast<int32_t>(offsetof(TaiwanCalendar_t862252470_StaticFields, ___s_defaultInstance_4)); }
	inline Calendar_t571621478 * get_s_defaultInstance_4() const { return ___s_defaultInstance_4; }
	inline Calendar_t571621478 ** get_address_of_s_defaultInstance_4() { return &___s_defaultInstance_4; }
	inline void set_s_defaultInstance_4(Calendar_t571621478 * value)
	{
		___s_defaultInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultInstance_4), value);
	}

	inline static int32_t get_offset_of_calendarMinValue_6() { return static_cast<int32_t>(offsetof(TaiwanCalendar_t862252470_StaticFields, ___calendarMinValue_6)); }
	inline DateTime_t1480186961  get_calendarMinValue_6() const { return ___calendarMinValue_6; }
	inline DateTime_t1480186961 * get_address_of_calendarMinValue_6() { return &___calendarMinValue_6; }
	inline void set_calendarMinValue_6(DateTime_t1480186961  value)
	{
		___calendarMinValue_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAIWANCALENDAR_T862252470_H
#ifndef ENCODER_T1313455321_H
#define ENCODER_T1313455321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/Encoder
struct  Encoder_t1313455321  : public EncoderNLS_t1717298589
{
public:
	// System.Int32 System.Text.UTF7Encoding/Encoder::bits
	int32_t ___bits_7;
	// System.Int32 System.Text.UTF7Encoding/Encoder::bitCount
	int32_t ___bitCount_8;

public:
	inline static int32_t get_offset_of_bits_7() { return static_cast<int32_t>(offsetof(Encoder_t1313455321, ___bits_7)); }
	inline int32_t get_bits_7() const { return ___bits_7; }
	inline int32_t* get_address_of_bits_7() { return &___bits_7; }
	inline void set_bits_7(int32_t value)
	{
		___bits_7 = value;
	}

	inline static int32_t get_offset_of_bitCount_8() { return static_cast<int32_t>(offsetof(Encoder_t1313455321, ___bitCount_8)); }
	inline int32_t get_bitCount_8() const { return ___bitCount_8; }
	inline int32_t* get_address_of_bitCount_8() { return &___bitCount_8; }
	inline void set_bitCount_8(int32_t value)
	{
		___bitCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODER_T1313455321_H
#ifndef DECODER_T3172977863_H
#define DECODER_T3172977863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/Decoder
struct  Decoder_t3172977863  : public DecoderNLS_t3552643798
{
public:
	// System.Int32 System.Text.UTF7Encoding/Decoder::bits
	int32_t ___bits_6;
	// System.Int32 System.Text.UTF7Encoding/Decoder::bitCount
	int32_t ___bitCount_7;
	// System.Boolean System.Text.UTF7Encoding/Decoder::firstByte
	bool ___firstByte_8;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(Decoder_t3172977863, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}

	inline static int32_t get_offset_of_bitCount_7() { return static_cast<int32_t>(offsetof(Decoder_t3172977863, ___bitCount_7)); }
	inline int32_t get_bitCount_7() const { return ___bitCount_7; }
	inline int32_t* get_address_of_bitCount_7() { return &___bitCount_7; }
	inline void set_bitCount_7(int32_t value)
	{
		___bitCount_7 = value;
	}

	inline static int32_t get_offset_of_firstByte_8() { return static_cast<int32_t>(offsetof(Decoder_t3172977863, ___firstByte_8)); }
	inline bool get_firstByte_8() const { return ___firstByte_8; }
	inline bool* get_address_of_firstByte_8() { return &___firstByte_8; }
	inline void set_firstByte_8(bool value)
	{
		___firstByte_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T3172977863_H
#ifndef UTF32DECODER_T2605957717_H
#define UTF32DECODER_T2605957717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t2605957717  : public DecoderNLS_t3552643798
{
public:
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::iChar
	int32_t ___iChar_6;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::readByteCount
	int32_t ___readByteCount_7;

public:
	inline static int32_t get_offset_of_iChar_6() { return static_cast<int32_t>(offsetof(UTF32Decoder_t2605957717, ___iChar_6)); }
	inline int32_t get_iChar_6() const { return ___iChar_6; }
	inline int32_t* get_address_of_iChar_6() { return &___iChar_6; }
	inline void set_iChar_6(int32_t value)
	{
		___iChar_6 = value;
	}

	inline static int32_t get_offset_of_readByteCount_7() { return static_cast<int32_t>(offsetof(UTF32Decoder_t2605957717, ___readByteCount_7)); }
	inline int32_t get_readByteCount_7() const { return ___readByteCount_7; }
	inline int32_t* get_address_of_readByteCount_7() { return &___readByteCount_7; }
	inline void set_readByteCount_7(int32_t value)
	{
		___readByteCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T2605957717_H
#ifndef DECODER_T2858854297_H
#define DECODER_T2858854297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/Decoder
struct  Decoder_t2858854297  : public DecoderNLS_t3552643798
{
public:
	// System.Int32 System.Text.UnicodeEncoding/Decoder::lastByte
	int32_t ___lastByte_6;
	// System.Char System.Text.UnicodeEncoding/Decoder::lastChar
	Il2CppChar ___lastChar_7;

public:
	inline static int32_t get_offset_of_lastByte_6() { return static_cast<int32_t>(offsetof(Decoder_t2858854297, ___lastByte_6)); }
	inline int32_t get_lastByte_6() const { return ___lastByte_6; }
	inline int32_t* get_address_of_lastByte_6() { return &___lastByte_6; }
	inline void set_lastByte_6(int32_t value)
	{
		___lastByte_6 = value;
	}

	inline static int32_t get_offset_of_lastChar_7() { return static_cast<int32_t>(offsetof(Decoder_t2858854297, ___lastChar_7)); }
	inline Il2CppChar get_lastChar_7() const { return ___lastChar_7; }
	inline Il2CppChar* get_address_of_lastChar_7() { return &___lastChar_7; }
	inline void set_lastChar_7(Il2CppChar value)
	{
		___lastChar_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2858854297_H
#ifndef TEXTINFO_T3464677949_H
#define TEXTINFO_T3464677949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TextInfo
struct  TextInfo_t3464677949  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.TextInfo::m_isReadOnly
	bool ___m_isReadOnly_0;
	// System.String System.Globalization.TextInfo::m_cultureName
	String_t* ___m_cultureName_1;
	// System.Globalization.CultureData System.Globalization.TextInfo::m_cultureData
	CultureData_t1976740787 * ___m_cultureData_2;
	// System.String System.Globalization.TextInfo::m_textInfoName
	String_t* ___m_textInfoName_3;
	// System.Nullable`1<System.Boolean> System.Globalization.TextInfo::m_IsAsciiCasingSameAsInvariant
	Nullable_1_t626644817  ___m_IsAsciiCasingSameAsInvariant_4;
	// System.String System.Globalization.TextInfo::customCultureName
	String_t* ___customCultureName_6;
	// System.Boolean System.Globalization.TextInfo::m_useUserOverride
	bool ___m_useUserOverride_7;
	// System.Int32 System.Globalization.TextInfo::m_win32LangID
	int32_t ___m_win32LangID_8;

public:
	inline static int32_t get_offset_of_m_isReadOnly_0() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949, ___m_isReadOnly_0)); }
	inline bool get_m_isReadOnly_0() const { return ___m_isReadOnly_0; }
	inline bool* get_address_of_m_isReadOnly_0() { return &___m_isReadOnly_0; }
	inline void set_m_isReadOnly_0(bool value)
	{
		___m_isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_m_cultureName_1() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949, ___m_cultureName_1)); }
	inline String_t* get_m_cultureName_1() const { return ___m_cultureName_1; }
	inline String_t** get_address_of_m_cultureName_1() { return &___m_cultureName_1; }
	inline void set_m_cultureName_1(String_t* value)
	{
		___m_cultureName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureName_1), value);
	}

	inline static int32_t get_offset_of_m_cultureData_2() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949, ___m_cultureData_2)); }
	inline CultureData_t1976740787 * get_m_cultureData_2() const { return ___m_cultureData_2; }
	inline CultureData_t1976740787 ** get_address_of_m_cultureData_2() { return &___m_cultureData_2; }
	inline void set_m_cultureData_2(CultureData_t1976740787 * value)
	{
		___m_cultureData_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_2), value);
	}

	inline static int32_t get_offset_of_m_textInfoName_3() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949, ___m_textInfoName_3)); }
	inline String_t* get_m_textInfoName_3() const { return ___m_textInfoName_3; }
	inline String_t** get_address_of_m_textInfoName_3() { return &___m_textInfoName_3; }
	inline void set_m_textInfoName_3(String_t* value)
	{
		___m_textInfoName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_textInfoName_3), value);
	}

	inline static int32_t get_offset_of_m_IsAsciiCasingSameAsInvariant_4() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949, ___m_IsAsciiCasingSameAsInvariant_4)); }
	inline Nullable_1_t626644817  get_m_IsAsciiCasingSameAsInvariant_4() const { return ___m_IsAsciiCasingSameAsInvariant_4; }
	inline Nullable_1_t626644817 * get_address_of_m_IsAsciiCasingSameAsInvariant_4() { return &___m_IsAsciiCasingSameAsInvariant_4; }
	inline void set_m_IsAsciiCasingSameAsInvariant_4(Nullable_1_t626644817  value)
	{
		___m_IsAsciiCasingSameAsInvariant_4 = value;
	}

	inline static int32_t get_offset_of_customCultureName_6() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949, ___customCultureName_6)); }
	inline String_t* get_customCultureName_6() const { return ___customCultureName_6; }
	inline String_t** get_address_of_customCultureName_6() { return &___customCultureName_6; }
	inline void set_customCultureName_6(String_t* value)
	{
		___customCultureName_6 = value;
		Il2CppCodeGenWriteBarrier((&___customCultureName_6), value);
	}

	inline static int32_t get_offset_of_m_useUserOverride_7() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949, ___m_useUserOverride_7)); }
	inline bool get_m_useUserOverride_7() const { return ___m_useUserOverride_7; }
	inline bool* get_address_of_m_useUserOverride_7() { return &___m_useUserOverride_7; }
	inline void set_m_useUserOverride_7(bool value)
	{
		___m_useUserOverride_7 = value;
	}

	inline static int32_t get_offset_of_m_win32LangID_8() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949, ___m_win32LangID_8)); }
	inline int32_t get_m_win32LangID_8() const { return ___m_win32LangID_8; }
	inline int32_t* get_address_of_m_win32LangID_8() { return &___m_win32LangID_8; }
	inline void set_m_win32LangID_8(int32_t value)
	{
		___m_win32LangID_8 = value;
	}
};

struct TextInfo_t3464677949_StaticFields
{
public:
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.TextInfo::s_Invariant
	TextInfo_t3464677949 * ___s_Invariant_5;

public:
	inline static int32_t get_offset_of_s_Invariant_5() { return static_cast<int32_t>(offsetof(TextInfo_t3464677949_StaticFields, ___s_Invariant_5)); }
	inline TextInfo_t3464677949 * get_s_Invariant_5() const { return ___s_Invariant_5; }
	inline TextInfo_t3464677949 ** get_address_of_s_Invariant_5() { return &___s_Invariant_5; }
	inline void set_s_Invariant_5(TextInfo_t3464677949 * value)
	{
		___s_Invariant_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_Invariant_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTINFO_T3464677949_H
#ifndef COMPAREOPTIONS_T1990368500_H
#define COMPAREOPTIONS_T1990368500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t1990368500 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t1990368500, ___value___2)); }
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
#endif // COMPAREOPTIONS_T1990368500_H
#ifndef CULTURETYPES_T694650315_H
#define CULTURETYPES_T694650315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureTypes
struct  CultureTypes_t694650315 
{
public:
	// System.Int32 System.Globalization.CultureTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CultureTypes_t694650315, ___value___2)); }
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
#endif // CULTURETYPES_T694650315_H
#ifndef MONTHNAMESTYLES_T176593768_H
#define MONTHNAMESTYLES_T176593768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.MonthNameStyles
struct  MonthNameStyles_t176593768 
{
public:
	// System.Int32 System.Globalization.MonthNameStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonthNameStyles_t176593768, ___value___2)); }
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
#endif // MONTHNAMESTYLES_T176593768_H
#ifndef DATETIMEFORMATFLAGS_T3111868630_H
#define DATETIMEFORMATFLAGS_T3111868630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_t3111868630 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_t3111868630, ___value___2)); }
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
#endif // DATETIMEFORMATFLAGS_T3111868630_H
#ifndef CALENDARID_T2754519501_H
#define CALENDARID_T2754519501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CalendarId
struct  CalendarId_t2754519501 
{
public:
	// System.UInt16 System.Globalization.CalendarId::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CalendarId_t2754519501, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALENDARID_T2754519501_H
#ifndef TIMESPANFORMAT_T2703781844_H
#define TIMESPANFORMAT_T2703781844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanFormat
struct  TimeSpanFormat_t2703781844  : public RuntimeObject
{
public:

public:
};

struct TimeSpanFormat_t2703781844_StaticFields
{
public:
	// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanFormat::PositiveInvariantFormatLiterals
	FormatLiterals_t2212238260  ___PositiveInvariantFormatLiterals_0;
	// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanFormat::NegativeInvariantFormatLiterals
	FormatLiterals_t2212238260  ___NegativeInvariantFormatLiterals_1;

public:
	inline static int32_t get_offset_of_PositiveInvariantFormatLiterals_0() { return static_cast<int32_t>(offsetof(TimeSpanFormat_t2703781844_StaticFields, ___PositiveInvariantFormatLiterals_0)); }
	inline FormatLiterals_t2212238260  get_PositiveInvariantFormatLiterals_0() const { return ___PositiveInvariantFormatLiterals_0; }
	inline FormatLiterals_t2212238260 * get_address_of_PositiveInvariantFormatLiterals_0() { return &___PositiveInvariantFormatLiterals_0; }
	inline void set_PositiveInvariantFormatLiterals_0(FormatLiterals_t2212238260  value)
	{
		___PositiveInvariantFormatLiterals_0 = value;
	}

	inline static int32_t get_offset_of_NegativeInvariantFormatLiterals_1() { return static_cast<int32_t>(offsetof(TimeSpanFormat_t2703781844_StaticFields, ___NegativeInvariantFormatLiterals_1)); }
	inline FormatLiterals_t2212238260  get_NegativeInvariantFormatLiterals_1() const { return ___NegativeInvariantFormatLiterals_1; }
	inline FormatLiterals_t2212238260 * get_address_of_NegativeInvariantFormatLiterals_1() { return &___NegativeInvariantFormatLiterals_1; }
	inline void set_NegativeInvariantFormatLiterals_1(FormatLiterals_t2212238260  value)
	{
		___NegativeInvariantFormatLiterals_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANFORMAT_T2703781844_H
#ifndef DATETIMESTYLES_T1517799372_H
#define DATETIMESTYLES_T1517799372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t1517799372 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t1517799372, ___value___2)); }
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
#endif // DATETIMESTYLES_T1517799372_H
#ifndef GREGORIANCALENDARHELPER_T404050585_H
#define GREGORIANCALENDARHELPER_T404050585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendarHelper
struct  GregorianCalendarHelper_t404050585  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.GregorianCalendarHelper::m_maxYear
	int32_t ___m_maxYear_2;
	// System.Int32 System.Globalization.GregorianCalendarHelper::m_minYear
	int32_t ___m_minYear_3;
	// System.Globalization.Calendar System.Globalization.GregorianCalendarHelper::m_Cal
	Calendar_t571621478 * ___m_Cal_4;
	// System.Globalization.EraInfo[] System.Globalization.GregorianCalendarHelper::m_EraInfo
	EraInfoU5BU5D_t4130280761* ___m_EraInfo_5;
	// System.Int32[] System.Globalization.GregorianCalendarHelper::m_eras
	Int32U5BU5D_t1276023077* ___m_eras_6;
	// System.DateTime System.Globalization.GregorianCalendarHelper::m_minDate
	DateTime_t1480186961  ___m_minDate_7;

public:
	inline static int32_t get_offset_of_m_maxYear_2() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t404050585, ___m_maxYear_2)); }
	inline int32_t get_m_maxYear_2() const { return ___m_maxYear_2; }
	inline int32_t* get_address_of_m_maxYear_2() { return &___m_maxYear_2; }
	inline void set_m_maxYear_2(int32_t value)
	{
		___m_maxYear_2 = value;
	}

	inline static int32_t get_offset_of_m_minYear_3() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t404050585, ___m_minYear_3)); }
	inline int32_t get_m_minYear_3() const { return ___m_minYear_3; }
	inline int32_t* get_address_of_m_minYear_3() { return &___m_minYear_3; }
	inline void set_m_minYear_3(int32_t value)
	{
		___m_minYear_3 = value;
	}

	inline static int32_t get_offset_of_m_Cal_4() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t404050585, ___m_Cal_4)); }
	inline Calendar_t571621478 * get_m_Cal_4() const { return ___m_Cal_4; }
	inline Calendar_t571621478 ** get_address_of_m_Cal_4() { return &___m_Cal_4; }
	inline void set_m_Cal_4(Calendar_t571621478 * value)
	{
		___m_Cal_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cal_4), value);
	}

	inline static int32_t get_offset_of_m_EraInfo_5() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t404050585, ___m_EraInfo_5)); }
	inline EraInfoU5BU5D_t4130280761* get_m_EraInfo_5() const { return ___m_EraInfo_5; }
	inline EraInfoU5BU5D_t4130280761** get_address_of_m_EraInfo_5() { return &___m_EraInfo_5; }
	inline void set_m_EraInfo_5(EraInfoU5BU5D_t4130280761* value)
	{
		___m_EraInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_EraInfo_5), value);
	}

	inline static int32_t get_offset_of_m_eras_6() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t404050585, ___m_eras_6)); }
	inline Int32U5BU5D_t1276023077* get_m_eras_6() const { return ___m_eras_6; }
	inline Int32U5BU5D_t1276023077** get_address_of_m_eras_6() { return &___m_eras_6; }
	inline void set_m_eras_6(Int32U5BU5D_t1276023077* value)
	{
		___m_eras_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_eras_6), value);
	}

	inline static int32_t get_offset_of_m_minDate_7() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t404050585, ___m_minDate_7)); }
	inline DateTime_t1480186961  get_m_minDate_7() const { return ___m_minDate_7; }
	inline DateTime_t1480186961 * get_address_of_m_minDate_7() { return &___m_minDate_7; }
	inline void set_m_minDate_7(DateTime_t1480186961  value)
	{
		___m_minDate_7 = value;
	}
};

struct GregorianCalendarHelper_t404050585_StaticFields
{
public:
	// System.Int32[] System.Globalization.GregorianCalendarHelper::DaysToMonth365
	Int32U5BU5D_t1276023077* ___DaysToMonth365_0;
	// System.Int32[] System.Globalization.GregorianCalendarHelper::DaysToMonth366
	Int32U5BU5D_t1276023077* ___DaysToMonth366_1;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t404050585_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t1276023077* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t1276023077** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t1276023077* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(GregorianCalendarHelper_t404050585_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t1276023077* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t1276023077** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t1276023077* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGORIANCALENDARHELPER_T404050585_H
#ifndef FOUNDDATEPATTERN_T1618654662_H
#define FOUNDDATEPATTERN_T1618654662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern
struct  FoundDatePattern_t1618654662 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FoundDatePattern_t1618654662, ___value___2)); }
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
#endif // FOUNDDATEPATTERN_T1618654662_H
#ifndef FORMATFLAGS_T376761767_H
#define FORMATFLAGS_T376761767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.FORMATFLAGS
struct  FORMATFLAGS_t376761767 
{
public:
	// System.Int32 System.Globalization.FORMATFLAGS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FORMATFLAGS_t376761767, ___value___2)); }
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
#endif // FORMATFLAGS_T376761767_H
#ifndef HEBREWNUMBERPARSINGSTATE_T1115971885_H
#define HEBREWNUMBERPARSINGSTATE_T1115971885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewNumberParsingState
struct  HebrewNumberParsingState_t1115971885 
{
public:
	// System.Int32 System.Globalization.HebrewNumberParsingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HebrewNumberParsingState_t1115971885, ___value___2)); }
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
#endif // HEBREWNUMBERPARSINGSTATE_T1115971885_H
#ifndef SORTVERSION_T1822720062_H
#define SORTVERSION_T1822720062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.SortVersion
struct  SortVersion_t1822720062  : public RuntimeObject
{
public:
	// System.Int32 System.Globalization.SortVersion::m_NlsVersion
	int32_t ___m_NlsVersion_0;
	// System.Guid System.Globalization.SortVersion::m_SortId
	Guid_t  ___m_SortId_1;

public:
	inline static int32_t get_offset_of_m_NlsVersion_0() { return static_cast<int32_t>(offsetof(SortVersion_t1822720062, ___m_NlsVersion_0)); }
	inline int32_t get_m_NlsVersion_0() const { return ___m_NlsVersion_0; }
	inline int32_t* get_address_of_m_NlsVersion_0() { return &___m_NlsVersion_0; }
	inline void set_m_NlsVersion_0(int32_t value)
	{
		___m_NlsVersion_0 = value;
	}

	inline static int32_t get_offset_of_m_SortId_1() { return static_cast<int32_t>(offsetof(SortVersion_t1822720062, ___m_SortId_1)); }
	inline Guid_t  get_m_SortId_1() const { return ___m_SortId_1; }
	inline Guid_t * get_address_of_m_SortId_1() { return &___m_SortId_1; }
	inline void set_m_SortId_1(Guid_t  value)
	{
		___m_SortId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTVERSION_T1822720062_H
#ifndef NUMBERSTYLES_T2722279267_H
#define NUMBERSTYLES_T2722279267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t2722279267 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t2722279267, ___value___2)); }
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
#endif // NUMBERSTYLES_T2722279267_H
#ifndef JAPANESECALENDAR_T2913764187_H
#define JAPANESECALENDAR_T2913764187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.JapaneseCalendar
struct  JapaneseCalendar_t2913764187  : public Calendar_t571621478
{
public:
	// System.Globalization.GregorianCalendarHelper System.Globalization.JapaneseCalendar::helper
	GregorianCalendarHelper_t404050585 * ___helper_6;

public:
	inline static int32_t get_offset_of_helper_6() { return static_cast<int32_t>(offsetof(JapaneseCalendar_t2913764187, ___helper_6)); }
	inline GregorianCalendarHelper_t404050585 * get_helper_6() const { return ___helper_6; }
	inline GregorianCalendarHelper_t404050585 ** get_address_of_helper_6() { return &___helper_6; }
	inline void set_helper_6(GregorianCalendarHelper_t404050585 * value)
	{
		___helper_6 = value;
		Il2CppCodeGenWriteBarrier((&___helper_6), value);
	}
};

struct JapaneseCalendar_t2913764187_StaticFields
{
public:
	// System.DateTime System.Globalization.JapaneseCalendar::calendarMinValue
	DateTime_t1480186961  ___calendarMinValue_3;
	// System.Globalization.EraInfo[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.JapaneseCalendar::japaneseEraInfo
	EraInfoU5BU5D_t4130280761* ___japaneseEraInfo_4;
	// System.Globalization.Calendar modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.JapaneseCalendar::s_defaultInstance
	Calendar_t571621478 * ___s_defaultInstance_5;

public:
	inline static int32_t get_offset_of_calendarMinValue_3() { return static_cast<int32_t>(offsetof(JapaneseCalendar_t2913764187_StaticFields, ___calendarMinValue_3)); }
	inline DateTime_t1480186961  get_calendarMinValue_3() const { return ___calendarMinValue_3; }
	inline DateTime_t1480186961 * get_address_of_calendarMinValue_3() { return &___calendarMinValue_3; }
	inline void set_calendarMinValue_3(DateTime_t1480186961  value)
	{
		___calendarMinValue_3 = value;
	}

	inline static int32_t get_offset_of_japaneseEraInfo_4() { return static_cast<int32_t>(offsetof(JapaneseCalendar_t2913764187_StaticFields, ___japaneseEraInfo_4)); }
	inline EraInfoU5BU5D_t4130280761* get_japaneseEraInfo_4() const { return ___japaneseEraInfo_4; }
	inline EraInfoU5BU5D_t4130280761** get_address_of_japaneseEraInfo_4() { return &___japaneseEraInfo_4; }
	inline void set_japaneseEraInfo_4(EraInfoU5BU5D_t4130280761* value)
	{
		___japaneseEraInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___japaneseEraInfo_4), value);
	}

	inline static int32_t get_offset_of_s_defaultInstance_5() { return static_cast<int32_t>(offsetof(JapaneseCalendar_t2913764187_StaticFields, ___s_defaultInstance_5)); }
	inline Calendar_t571621478 * get_s_defaultInstance_5() const { return ___s_defaultInstance_5; }
	inline Calendar_t571621478 ** get_address_of_s_defaultInstance_5() { return &___s_defaultInstance_5; }
	inline void set_s_defaultInstance_5(Calendar_t571621478 * value)
	{
		___s_defaultInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultInstance_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JAPANESECALENDAR_T2913764187_H
#ifndef HS_T1557009947_H
#define HS_T1557009947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewNumber/HS
struct  HS_t1557009947 
{
public:
	// System.Int32 System.Globalization.HebrewNumber/HS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HS_t1557009947, ___value___2)); }
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
#endif // HS_T1557009947_H
#ifndef UTF8ENCODER_T2451303091_H
#define UTF8ENCODER_T2451303091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Encoder
struct  UTF8Encoder_t2451303091  : public EncoderNLS_t1717298589
{
public:
	// System.Int32 System.Text.UTF8Encoding/UTF8Encoder::surrogateChar
	int32_t ___surrogateChar_7;

public:
	inline static int32_t get_offset_of_surrogateChar_7() { return static_cast<int32_t>(offsetof(UTF8Encoder_t2451303091, ___surrogateChar_7)); }
	inline int32_t get_surrogateChar_7() const { return ___surrogateChar_7; }
	inline int32_t* get_address_of_surrogateChar_7() { return &___surrogateChar_7; }
	inline void set_surrogateChar_7(int32_t value)
	{
		___surrogateChar_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODER_T2451303091_H
#ifndef GREGORIANCALENDARTYPES_T3335359086_H
#define GREGORIANCALENDARTYPES_T3335359086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendarTypes
struct  GregorianCalendarTypes_t3335359086 
{
public:
	// System.Int32 System.Globalization.GregorianCalendarTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GregorianCalendarTypes_t3335359086, ___value___2)); }
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
#endif // GREGORIANCALENDARTYPES_T3335359086_H
#ifndef SORTKEY_T66199533_H
#define SORTKEY_T66199533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.SortKey
struct  SortKey_t66199533  : public RuntimeObject
{
public:
	// System.String System.Globalization.SortKey::source
	String_t* ___source_0;
	// System.Byte[] System.Globalization.SortKey::key
	ByteU5BU5D_t3632859112* ___key_1;
	// System.Globalization.CompareOptions System.Globalization.SortKey::options
	int32_t ___options_2;
	// System.Int32 System.Globalization.SortKey::lcid
	int32_t ___lcid_3;

public:
	inline static int32_t get_offset_of_source_0() { return static_cast<int32_t>(offsetof(SortKey_t66199533, ___source_0)); }
	inline String_t* get_source_0() const { return ___source_0; }
	inline String_t** get_address_of_source_0() { return &___source_0; }
	inline void set_source_0(String_t* value)
	{
		___source_0 = value;
		Il2CppCodeGenWriteBarrier((&___source_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(SortKey_t66199533, ___key_1)); }
	inline ByteU5BU5D_t3632859112* get_key_1() const { return ___key_1; }
	inline ByteU5BU5D_t3632859112** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(ByteU5BU5D_t3632859112* value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(SortKey_t66199533, ___options_2)); }
	inline int32_t get_options_2() const { return ___options_2; }
	inline int32_t* get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(int32_t value)
	{
		___options_2 = value;
	}

	inline static int32_t get_offset_of_lcid_3() { return static_cast<int32_t>(offsetof(SortKey_t66199533, ___lcid_3)); }
	inline int32_t get_lcid_3() const { return ___lcid_3; }
	inline int32_t* get_address_of_lcid_3() { return &___lcid_3; }
	inline void set_lcid_3(int32_t value)
	{
		___lcid_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.SortKey
struct SortKey_t66199533_marshaled_pinvoke
{
	char* ___source_0;
	uint8_t* ___key_1;
	int32_t ___options_2;
	int32_t ___lcid_3;
};
// Native definition for COM marshalling of System.Globalization.SortKey
struct SortKey_t66199533_marshaled_com
{
	Il2CppChar* ___source_0;
	uint8_t* ___key_1;
	int32_t ___options_2;
	int32_t ___lcid_3;
};
#endif // SORTKEY_T66199533_H
#ifndef NUMBERFORMATINFO_T889823082_H
#define NUMBERFORMATINFO_T889823082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t889823082  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t1276023077* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t1276023077* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t1276023077* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t4160542075* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t1276023077* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t1276023077** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t1276023077* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_1), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t1276023077* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t1276023077** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t1276023077* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_2), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t1276023077* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t1276023077** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t1276023077* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_3), value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_4), value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_5), value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_6), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_9), value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_10), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_11), value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_12), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_15), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_16), value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_17), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_18), value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___nativeDigits_19)); }
	inline StringU5BU5D_t4160542075* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t4160542075** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t4160542075* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_19), value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t889823082_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t889823082 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t889823082_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t889823082 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t889823082 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t889823082 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T889823082_H
#ifndef CULTURENOTFOUNDEXCEPTION_T2783347772_H
#define CULTURENOTFOUNDEXCEPTION_T2783347772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureNotFoundException
struct  CultureNotFoundException_t2783347772  : public ArgumentException_t1221407260
{
public:
	// System.String System.Globalization.CultureNotFoundException::m_invalidCultureName
	String_t* ___m_invalidCultureName_17;
	// System.Nullable`1<System.Int32> System.Globalization.CultureNotFoundException::m_invalidCultureId
	Nullable_1_t718036045  ___m_invalidCultureId_18;

public:
	inline static int32_t get_offset_of_m_invalidCultureName_17() { return static_cast<int32_t>(offsetof(CultureNotFoundException_t2783347772, ___m_invalidCultureName_17)); }
	inline String_t* get_m_invalidCultureName_17() const { return ___m_invalidCultureName_17; }
	inline String_t** get_address_of_m_invalidCultureName_17() { return &___m_invalidCultureName_17; }
	inline void set_m_invalidCultureName_17(String_t* value)
	{
		___m_invalidCultureName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_invalidCultureName_17), value);
	}

	inline static int32_t get_offset_of_m_invalidCultureId_18() { return static_cast<int32_t>(offsetof(CultureNotFoundException_t2783347772, ___m_invalidCultureId_18)); }
	inline Nullable_1_t718036045  get_m_invalidCultureId_18() const { return ___m_invalidCultureId_18; }
	inline Nullable_1_t718036045 * get_address_of_m_invalidCultureId_18() { return &___m_invalidCultureId_18; }
	inline void set_m_invalidCultureId_18(Nullable_1_t718036045  value)
	{
		___m_invalidCultureId_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURENOTFOUNDEXCEPTION_T2783347772_H
#ifndef HEBREWVALUE_T4137864058_H
#define HEBREWVALUE_T4137864058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewNumber/HebrewValue
struct  HebrewValue_t4137864058  : public RuntimeObject
{
public:
	// System.Globalization.HebrewNumber/HebrewToken System.Globalization.HebrewNumber/HebrewValue::token
	int32_t ___token_0;
	// System.Int32 System.Globalization.HebrewNumber/HebrewValue::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_token_0() { return static_cast<int32_t>(offsetof(HebrewValue_t4137864058, ___token_0)); }
	inline int32_t get_token_0() const { return ___token_0; }
	inline int32_t* get_address_of_token_0() { return &___token_0; }
	inline void set_token_0(int32_t value)
	{
		___token_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(HebrewValue_t4137864058, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEBREWVALUE_T4137864058_H
#ifndef DAYLIGHTTIME_T1812568432_H
#define DAYLIGHTTIME_T1812568432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DaylightTime
struct  DaylightTime_t1812568432  : public RuntimeObject
{
public:
	// System.DateTime System.Globalization.DaylightTime::m_start
	DateTime_t1480186961  ___m_start_0;
	// System.DateTime System.Globalization.DaylightTime::m_end
	DateTime_t1480186961  ___m_end_1;
	// System.TimeSpan System.Globalization.DaylightTime::m_delta
	TimeSpan_t2034903957  ___m_delta_2;

public:
	inline static int32_t get_offset_of_m_start_0() { return static_cast<int32_t>(offsetof(DaylightTime_t1812568432, ___m_start_0)); }
	inline DateTime_t1480186961  get_m_start_0() const { return ___m_start_0; }
	inline DateTime_t1480186961 * get_address_of_m_start_0() { return &___m_start_0; }
	inline void set_m_start_0(DateTime_t1480186961  value)
	{
		___m_start_0 = value;
	}

	inline static int32_t get_offset_of_m_end_1() { return static_cast<int32_t>(offsetof(DaylightTime_t1812568432, ___m_end_1)); }
	inline DateTime_t1480186961  get_m_end_1() const { return ___m_end_1; }
	inline DateTime_t1480186961 * get_address_of_m_end_1() { return &___m_end_1; }
	inline void set_m_end_1(DateTime_t1480186961  value)
	{
		___m_end_1 = value;
	}

	inline static int32_t get_offset_of_m_delta_2() { return static_cast<int32_t>(offsetof(DaylightTime_t1812568432, ___m_delta_2)); }
	inline TimeSpan_t2034903957  get_m_delta_2() const { return ___m_delta_2; }
	inline TimeSpan_t2034903957 * get_address_of_m_delta_2() { return &___m_delta_2; }
	inline void set_m_delta_2(TimeSpan_t2034903957  value)
	{
		___m_delta_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYLIGHTTIME_T1812568432_H
#ifndef DATETIMEFORMATINFO_T526335175_H
#define DATETIMEFORMATINFO_T526335175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t526335175  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t1976740787 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t3802660337 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t197737613 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t571621478 * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t4160542075* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t4160542075* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t4160542075* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t4160542075* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t4160542075* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t4160542075* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t4160542075* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t4160542075* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t4160542075* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t4160542075* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t4160542075* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t4160542075* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t4160542075* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t4160542075* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t4160542075* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t4160542075* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t1276023077* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t4160542075* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t2081773973* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_cultureData_1)); }
	inline CultureData_t1976740787 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t1976740787 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t1976740787 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_1), value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_2), value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_langName_3), value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_compareInfo_4)); }
	inline CompareInfo_t3802660337 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t3802660337 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t3802660337 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_4), value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_cultureInfo_5)); }
	inline CultureInfo_t197737613 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t197737613 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t197737613 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureInfo_5), value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((&___amDesignator_6), value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((&___pmDesignator_7), value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___dateSeparator_8), value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((&___generalShortTimePattern_9), value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((&___generalLongTimePattern_10), value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((&___timeSeparator_11), value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((&___monthDayPattern_12), value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeOffsetPattern_13), value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___calendar_17)); }
	inline Calendar_t571621478 * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t571621478 ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t571621478 * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_17), value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((&___fullDateTimePattern_20), value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_t4160542075* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_t4160542075** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_t4160542075* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedDayNames_21), value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_t4160542075* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_t4160542075** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_t4160542075* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_superShortDayNames_22), value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___dayNames_23)); }
	inline StringU5BU5D_t4160542075* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_t4160542075** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_t4160542075* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((&___dayNames_23), value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_t4160542075* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_t4160542075** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_t4160542075* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((&___abbreviatedMonthNames_24), value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___monthNames_25)); }
	inline StringU5BU5D_t4160542075* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_t4160542075** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_t4160542075* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((&___monthNames_25), value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_t4160542075* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_t4160542075** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_t4160542075* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((&___genitiveMonthNames_26), value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_t4160542075* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_t4160542075** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_t4160542075* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_genitiveAbbreviatedMonthNames_27), value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_t4160542075* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_t4160542075** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_t4160542075* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((&___leapYearMonthNames_28), value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((&___longDatePattern_29), value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((&___shortDatePattern_30), value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthPattern_31), value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((&___longTimePattern_32), value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((&___shortTimePattern_33), value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_t4160542075* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_t4160542075** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_t4160542075* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((&___allYearMonthPatterns_34), value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_t4160542075* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_t4160542075** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_t4160542075* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((&___allShortDatePatterns_35), value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_t4160542075* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_t4160542075** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_t4160542075* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((&___allLongDatePatterns_36), value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_t4160542075* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_t4160542075** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_t4160542075* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((&___allShortTimePatterns_37), value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_t4160542075* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_t4160542075** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_t4160542075* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((&___allLongTimePatterns_38), value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_eraNames_39)); }
	inline StringU5BU5D_t4160542075* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_t4160542075** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_t4160542075* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_eraNames_39), value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_t4160542075* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_t4160542075** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_t4160542075* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEraNames_40), value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_t4160542075* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_t4160542075** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_t4160542075* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_abbrevEnglishEraNames_41), value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t1276023077* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t1276023077** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t1276023077* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((&___optionalCalendars_42), value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_dateWords_53)); }
	inline StringU5BU5D_t4160542075* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_t4160542075** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_t4160542075* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_53), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanPositivePattern_54), value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTimeSpanNegativePattern_55), value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t2081773973* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t2081773973** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t2081773973* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_dtfiTokenHash_57), value);
	}
};

struct DateTimeFormatInfo_t526335175_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t526335175 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t3971943106 * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t526335175 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t526335175 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t526335175 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t526335175 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t526335175 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantInfo_0), value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t3971943106 * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t3971943106 ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t3971943106 * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((&___s_calendarNativeNames_52), value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t526335175 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t526335175 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t526335175 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((&___s_jajpDTFI_82), value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t526335175_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t526335175 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t526335175 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t526335175 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((&___s_zhtwDTFI_83), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFO_T526335175_H
#ifndef ENCODERFALLBACKEXCEPTION_T3428771437_H
#define ENCODERFALLBACKEXCEPTION_T3428771437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t3428771437  : public ArgumentException_t1221407260
{
public:
	// System.Char System.Text.EncoderFallbackException::charUnknown
	Il2CppChar ___charUnknown_17;
	// System.Char System.Text.EncoderFallbackException::charUnknownHigh
	Il2CppChar ___charUnknownHigh_18;
	// System.Char System.Text.EncoderFallbackException::charUnknownLow
	Il2CppChar ___charUnknownLow_19;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_20;

public:
	inline static int32_t get_offset_of_charUnknown_17() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3428771437, ___charUnknown_17)); }
	inline Il2CppChar get_charUnknown_17() const { return ___charUnknown_17; }
	inline Il2CppChar* get_address_of_charUnknown_17() { return &___charUnknown_17; }
	inline void set_charUnknown_17(Il2CppChar value)
	{
		___charUnknown_17 = value;
	}

	inline static int32_t get_offset_of_charUnknownHigh_18() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3428771437, ___charUnknownHigh_18)); }
	inline Il2CppChar get_charUnknownHigh_18() const { return ___charUnknownHigh_18; }
	inline Il2CppChar* get_address_of_charUnknownHigh_18() { return &___charUnknownHigh_18; }
	inline void set_charUnknownHigh_18(Il2CppChar value)
	{
		___charUnknownHigh_18 = value;
	}

	inline static int32_t get_offset_of_charUnknownLow_19() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3428771437, ___charUnknownLow_19)); }
	inline Il2CppChar get_charUnknownLow_19() const { return ___charUnknownLow_19; }
	inline Il2CppChar* get_address_of_charUnknownLow_19() { return &___charUnknownLow_19; }
	inline void set_charUnknownLow_19(Il2CppChar value)
	{
		___charUnknownLow_19 = value;
	}

	inline static int32_t get_offset_of_index_20() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3428771437, ___index_20)); }
	inline int32_t get_index_20() const { return ___index_20; }
	inline int32_t* get_address_of_index_20() { return &___index_20; }
	inline void set_index_20(int32_t value)
	{
		___index_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T3428771437_H
#ifndef TOKENHASHVALUE_T2877570812_H
#define TOKENHASHVALUE_T2877570812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TokenHashValue
struct  TokenHashValue_t2877570812  : public RuntimeObject
{
public:
	// System.String System.Globalization.TokenHashValue::tokenString
	String_t* ___tokenString_0;
	// System.TokenType System.Globalization.TokenHashValue::tokenType
	int32_t ___tokenType_1;
	// System.Int32 System.Globalization.TokenHashValue::tokenValue
	int32_t ___tokenValue_2;

public:
	inline static int32_t get_offset_of_tokenString_0() { return static_cast<int32_t>(offsetof(TokenHashValue_t2877570812, ___tokenString_0)); }
	inline String_t* get_tokenString_0() const { return ___tokenString_0; }
	inline String_t** get_address_of_tokenString_0() { return &___tokenString_0; }
	inline void set_tokenString_0(String_t* value)
	{
		___tokenString_0 = value;
		Il2CppCodeGenWriteBarrier((&___tokenString_0), value);
	}

	inline static int32_t get_offset_of_tokenType_1() { return static_cast<int32_t>(offsetof(TokenHashValue_t2877570812, ___tokenType_1)); }
	inline int32_t get_tokenType_1() const { return ___tokenType_1; }
	inline int32_t* get_address_of_tokenType_1() { return &___tokenType_1; }
	inline void set_tokenType_1(int32_t value)
	{
		___tokenType_1 = value;
	}

	inline static int32_t get_offset_of_tokenValue_2() { return static_cast<int32_t>(offsetof(TokenHashValue_t2877570812, ___tokenValue_2)); }
	inline int32_t get_tokenValue_2() const { return ___tokenValue_2; }
	inline int32_t* get_address_of_tokenValue_2() { return &___tokenValue_2; }
	inline void set_tokenValue_2(int32_t value)
	{
		___tokenValue_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENHASHVALUE_T2877570812_H
#ifndef TIMESPANRAWINFO_T2027492179_H
#define TIMESPANRAWINFO_T2027492179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanRawInfo
struct  TimeSpanRawInfo_t2027492179 
{
public:
	// System.Globalization.TimeSpanParse/TTT System.Globalization.TimeSpanParse/TimeSpanRawInfo::lastSeenTTT
	int32_t ___lastSeenTTT_0;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanRawInfo::tokenCount
	int32_t ___tokenCount_1;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanRawInfo::SepCount
	int32_t ___SepCount_2;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanRawInfo::NumCount
	int32_t ___NumCount_3;
	// System.String[] System.Globalization.TimeSpanParse/TimeSpanRawInfo::literals
	StringU5BU5D_t4160542075* ___literals_4;
	// System.Globalization.TimeSpanParse/TimeSpanToken[] System.Globalization.TimeSpanParse/TimeSpanRawInfo::numbers
	TimeSpanTokenU5BU5D_t480110851* ___numbers_5;
	// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_posLoc
	FormatLiterals_t2212238260  ___m_posLoc_6;
	// System.Globalization.TimeSpanFormat/FormatLiterals System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_negLoc
	FormatLiterals_t2212238260  ___m_negLoc_7;
	// System.Boolean System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_posLocInit
	bool ___m_posLocInit_8;
	// System.Boolean System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_negLocInit
	bool ___m_negLocInit_9;
	// System.String System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_fullPosPattern
	String_t* ___m_fullPosPattern_10;
	// System.String System.Globalization.TimeSpanParse/TimeSpanRawInfo::m_fullNegPattern
	String_t* ___m_fullNegPattern_11;

public:
	inline static int32_t get_offset_of_lastSeenTTT_0() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___lastSeenTTT_0)); }
	inline int32_t get_lastSeenTTT_0() const { return ___lastSeenTTT_0; }
	inline int32_t* get_address_of_lastSeenTTT_0() { return &___lastSeenTTT_0; }
	inline void set_lastSeenTTT_0(int32_t value)
	{
		___lastSeenTTT_0 = value;
	}

	inline static int32_t get_offset_of_tokenCount_1() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___tokenCount_1)); }
	inline int32_t get_tokenCount_1() const { return ___tokenCount_1; }
	inline int32_t* get_address_of_tokenCount_1() { return &___tokenCount_1; }
	inline void set_tokenCount_1(int32_t value)
	{
		___tokenCount_1 = value;
	}

	inline static int32_t get_offset_of_SepCount_2() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___SepCount_2)); }
	inline int32_t get_SepCount_2() const { return ___SepCount_2; }
	inline int32_t* get_address_of_SepCount_2() { return &___SepCount_2; }
	inline void set_SepCount_2(int32_t value)
	{
		___SepCount_2 = value;
	}

	inline static int32_t get_offset_of_NumCount_3() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___NumCount_3)); }
	inline int32_t get_NumCount_3() const { return ___NumCount_3; }
	inline int32_t* get_address_of_NumCount_3() { return &___NumCount_3; }
	inline void set_NumCount_3(int32_t value)
	{
		___NumCount_3 = value;
	}

	inline static int32_t get_offset_of_literals_4() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___literals_4)); }
	inline StringU5BU5D_t4160542075* get_literals_4() const { return ___literals_4; }
	inline StringU5BU5D_t4160542075** get_address_of_literals_4() { return &___literals_4; }
	inline void set_literals_4(StringU5BU5D_t4160542075* value)
	{
		___literals_4 = value;
		Il2CppCodeGenWriteBarrier((&___literals_4), value);
	}

	inline static int32_t get_offset_of_numbers_5() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___numbers_5)); }
	inline TimeSpanTokenU5BU5D_t480110851* get_numbers_5() const { return ___numbers_5; }
	inline TimeSpanTokenU5BU5D_t480110851** get_address_of_numbers_5() { return &___numbers_5; }
	inline void set_numbers_5(TimeSpanTokenU5BU5D_t480110851* value)
	{
		___numbers_5 = value;
		Il2CppCodeGenWriteBarrier((&___numbers_5), value);
	}

	inline static int32_t get_offset_of_m_posLoc_6() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___m_posLoc_6)); }
	inline FormatLiterals_t2212238260  get_m_posLoc_6() const { return ___m_posLoc_6; }
	inline FormatLiterals_t2212238260 * get_address_of_m_posLoc_6() { return &___m_posLoc_6; }
	inline void set_m_posLoc_6(FormatLiterals_t2212238260  value)
	{
		___m_posLoc_6 = value;
	}

	inline static int32_t get_offset_of_m_negLoc_7() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___m_negLoc_7)); }
	inline FormatLiterals_t2212238260  get_m_negLoc_7() const { return ___m_negLoc_7; }
	inline FormatLiterals_t2212238260 * get_address_of_m_negLoc_7() { return &___m_negLoc_7; }
	inline void set_m_negLoc_7(FormatLiterals_t2212238260  value)
	{
		___m_negLoc_7 = value;
	}

	inline static int32_t get_offset_of_m_posLocInit_8() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___m_posLocInit_8)); }
	inline bool get_m_posLocInit_8() const { return ___m_posLocInit_8; }
	inline bool* get_address_of_m_posLocInit_8() { return &___m_posLocInit_8; }
	inline void set_m_posLocInit_8(bool value)
	{
		___m_posLocInit_8 = value;
	}

	inline static int32_t get_offset_of_m_negLocInit_9() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___m_negLocInit_9)); }
	inline bool get_m_negLocInit_9() const { return ___m_negLocInit_9; }
	inline bool* get_address_of_m_negLocInit_9() { return &___m_negLocInit_9; }
	inline void set_m_negLocInit_9(bool value)
	{
		___m_negLocInit_9 = value;
	}

	inline static int32_t get_offset_of_m_fullPosPattern_10() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___m_fullPosPattern_10)); }
	inline String_t* get_m_fullPosPattern_10() const { return ___m_fullPosPattern_10; }
	inline String_t** get_address_of_m_fullPosPattern_10() { return &___m_fullPosPattern_10; }
	inline void set_m_fullPosPattern_10(String_t* value)
	{
		___m_fullPosPattern_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullPosPattern_10), value);
	}

	inline static int32_t get_offset_of_m_fullNegPattern_11() { return static_cast<int32_t>(offsetof(TimeSpanRawInfo_t2027492179, ___m_fullNegPattern_11)); }
	inline String_t* get_m_fullNegPattern_11() const { return ___m_fullNegPattern_11; }
	inline String_t** get_address_of_m_fullNegPattern_11() { return &___m_fullNegPattern_11; }
	inline void set_m_fullNegPattern_11(String_t* value)
	{
		___m_fullNegPattern_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullNegPattern_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/TimeSpanRawInfo
struct TimeSpanRawInfo_t2027492179_marshaled_pinvoke
{
	int32_t ___lastSeenTTT_0;
	int32_t ___tokenCount_1;
	int32_t ___SepCount_2;
	int32_t ___NumCount_3;
	char** ___literals_4;
	TimeSpanToken_t2653461926_marshaled_pinvoke* ___numbers_5;
	FormatLiterals_t2212238260_marshaled_pinvoke ___m_posLoc_6;
	FormatLiterals_t2212238260_marshaled_pinvoke ___m_negLoc_7;
	int32_t ___m_posLocInit_8;
	int32_t ___m_negLocInit_9;
	char* ___m_fullPosPattern_10;
	char* ___m_fullNegPattern_11;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/TimeSpanRawInfo
struct TimeSpanRawInfo_t2027492179_marshaled_com
{
	int32_t ___lastSeenTTT_0;
	int32_t ___tokenCount_1;
	int32_t ___SepCount_2;
	int32_t ___NumCount_3;
	Il2CppChar** ___literals_4;
	TimeSpanToken_t2653461926_marshaled_com* ___numbers_5;
	FormatLiterals_t2212238260_marshaled_com ___m_posLoc_6;
	FormatLiterals_t2212238260_marshaled_com ___m_negLoc_7;
	int32_t ___m_posLocInit_8;
	int32_t ___m_negLocInit_9;
	Il2CppChar* ___m_fullPosPattern_10;
	Il2CppChar* ___m_fullNegPattern_11;
};
#endif // TIMESPANRAWINFO_T2027492179_H
#ifndef DATETIMEFORMATINFOSCANNER_T1977904927_H
#define DATETIMEFORMATINFOSCANNER_T1977904927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeFormatInfoScanner
struct  DateTimeFormatInfoScanner_t1977904927  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> System.Globalization.DateTimeFormatInfoScanner::m_dateWords
	List_1_t1208702770 * ___m_dateWords_0;
	// System.Globalization.DateTimeFormatInfoScanner/FoundDatePattern System.Globalization.DateTimeFormatInfoScanner::m_ymdFlags
	int32_t ___m_ymdFlags_2;

public:
	inline static int32_t get_offset_of_m_dateWords_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfoScanner_t1977904927, ___m_dateWords_0)); }
	inline List_1_t1208702770 * get_m_dateWords_0() const { return ___m_dateWords_0; }
	inline List_1_t1208702770 ** get_address_of_m_dateWords_0() { return &___m_dateWords_0; }
	inline void set_m_dateWords_0(List_1_t1208702770 * value)
	{
		___m_dateWords_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dateWords_0), value);
	}

	inline static int32_t get_offset_of_m_ymdFlags_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfoScanner_t1977904927, ___m_ymdFlags_2)); }
	inline int32_t get_m_ymdFlags_2() const { return ___m_ymdFlags_2; }
	inline int32_t* get_address_of_m_ymdFlags_2() { return &___m_ymdFlags_2; }
	inline void set_m_ymdFlags_2(int32_t value)
	{
		___m_ymdFlags_2 = value;
	}
};

struct DateTimeFormatInfoScanner_t1977904927_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfoScanner::s_knownWords
	Dictionary_2_t3913670143 * ___s_knownWords_1;

public:
	inline static int32_t get_offset_of_s_knownWords_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfoScanner_t1977904927_StaticFields, ___s_knownWords_1)); }
	inline Dictionary_2_t3913670143 * get_s_knownWords_1() const { return ___s_knownWords_1; }
	inline Dictionary_2_t3913670143 ** get_address_of_s_knownWords_1() { return &___s_knownWords_1; }
	inline void set_s_knownWords_1(Dictionary_2_t3913670143 * value)
	{
		___s_knownWords_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_knownWords_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMATINFOSCANNER_T1977904927_H
#ifndef TIMESPANRESULT_T3248201774_H
#define TIMESPANRESULT_T3248201774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanResult
struct  TimeSpanResult_t3248201774 
{
public:
	// System.TimeSpan System.Globalization.TimeSpanParse/TimeSpanResult::parsedTimeSpan
	TimeSpan_t2034903957  ___parsedTimeSpan_0;
	// System.Globalization.TimeSpanParse/TimeSpanThrowStyle System.Globalization.TimeSpanParse/TimeSpanResult::throwStyle
	int32_t ___throwStyle_1;
	// System.Globalization.TimeSpanParse/ParseFailureKind System.Globalization.TimeSpanParse/TimeSpanResult::m_failure
	int32_t ___m_failure_2;
	// System.String System.Globalization.TimeSpanParse/TimeSpanResult::m_failureMessageID
	String_t* ___m_failureMessageID_3;
	// System.Object System.Globalization.TimeSpanParse/TimeSpanResult::m_failureMessageFormatArgument
	RuntimeObject * ___m_failureMessageFormatArgument_4;
	// System.String System.Globalization.TimeSpanParse/TimeSpanResult::m_failureArgumentName
	String_t* ___m_failureArgumentName_5;

public:
	inline static int32_t get_offset_of_parsedTimeSpan_0() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3248201774, ___parsedTimeSpan_0)); }
	inline TimeSpan_t2034903957  get_parsedTimeSpan_0() const { return ___parsedTimeSpan_0; }
	inline TimeSpan_t2034903957 * get_address_of_parsedTimeSpan_0() { return &___parsedTimeSpan_0; }
	inline void set_parsedTimeSpan_0(TimeSpan_t2034903957  value)
	{
		___parsedTimeSpan_0 = value;
	}

	inline static int32_t get_offset_of_throwStyle_1() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3248201774, ___throwStyle_1)); }
	inline int32_t get_throwStyle_1() const { return ___throwStyle_1; }
	inline int32_t* get_address_of_throwStyle_1() { return &___throwStyle_1; }
	inline void set_throwStyle_1(int32_t value)
	{
		___throwStyle_1 = value;
	}

	inline static int32_t get_offset_of_m_failure_2() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3248201774, ___m_failure_2)); }
	inline int32_t get_m_failure_2() const { return ___m_failure_2; }
	inline int32_t* get_address_of_m_failure_2() { return &___m_failure_2; }
	inline void set_m_failure_2(int32_t value)
	{
		___m_failure_2 = value;
	}

	inline static int32_t get_offset_of_m_failureMessageID_3() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3248201774, ___m_failureMessageID_3)); }
	inline String_t* get_m_failureMessageID_3() const { return ___m_failureMessageID_3; }
	inline String_t** get_address_of_m_failureMessageID_3() { return &___m_failureMessageID_3; }
	inline void set_m_failureMessageID_3(String_t* value)
	{
		___m_failureMessageID_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureMessageID_3), value);
	}

	inline static int32_t get_offset_of_m_failureMessageFormatArgument_4() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3248201774, ___m_failureMessageFormatArgument_4)); }
	inline RuntimeObject * get_m_failureMessageFormatArgument_4() const { return ___m_failureMessageFormatArgument_4; }
	inline RuntimeObject ** get_address_of_m_failureMessageFormatArgument_4() { return &___m_failureMessageFormatArgument_4; }
	inline void set_m_failureMessageFormatArgument_4(RuntimeObject * value)
	{
		___m_failureMessageFormatArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureMessageFormatArgument_4), value);
	}

	inline static int32_t get_offset_of_m_failureArgumentName_5() { return static_cast<int32_t>(offsetof(TimeSpanResult_t3248201774, ___m_failureArgumentName_5)); }
	inline String_t* get_m_failureArgumentName_5() const { return ___m_failureArgumentName_5; }
	inline String_t** get_address_of_m_failureArgumentName_5() { return &___m_failureArgumentName_5; }
	inline void set_m_failureArgumentName_5(String_t* value)
	{
		___m_failureArgumentName_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureArgumentName_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/TimeSpanResult
struct TimeSpanResult_t3248201774_marshaled_pinvoke
{
	TimeSpan_t2034903957  ___parsedTimeSpan_0;
	int32_t ___throwStyle_1;
	int32_t ___m_failure_2;
	char* ___m_failureMessageID_3;
	Il2CppIUnknown* ___m_failureMessageFormatArgument_4;
	char* ___m_failureArgumentName_5;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/TimeSpanResult
struct TimeSpanResult_t3248201774_marshaled_com
{
	TimeSpan_t2034903957  ___parsedTimeSpan_0;
	int32_t ___throwStyle_1;
	int32_t ___m_failure_2;
	Il2CppChar* ___m_failureMessageID_3;
	Il2CppIUnknown* ___m_failureMessageFormatArgument_4;
	Il2CppChar* ___m_failureArgumentName_5;
};
#endif // TIMESPANRESULT_T3248201774_H
#ifndef GREGORIANCALENDAR_T1120199104_H
#define GREGORIANCALENDAR_T1120199104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.GregorianCalendar
struct  GregorianCalendar_t1120199104  : public Calendar_t571621478
{
public:
	// System.Globalization.GregorianCalendarTypes System.Globalization.GregorianCalendar::m_type
	int32_t ___m_type_3;

public:
	inline static int32_t get_offset_of_m_type_3() { return static_cast<int32_t>(offsetof(GregorianCalendar_t1120199104, ___m_type_3)); }
	inline int32_t get_m_type_3() const { return ___m_type_3; }
	inline int32_t* get_address_of_m_type_3() { return &___m_type_3; }
	inline void set_m_type_3(int32_t value)
	{
		___m_type_3 = value;
	}
};

struct GregorianCalendar_t1120199104_StaticFields
{
public:
	// System.Int32[] System.Globalization.GregorianCalendar::DaysToMonth365
	Int32U5BU5D_t1276023077* ___DaysToMonth365_4;
	// System.Int32[] System.Globalization.GregorianCalendar::DaysToMonth366
	Int32U5BU5D_t1276023077* ___DaysToMonth366_5;
	// System.Globalization.Calendar modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.GregorianCalendar::s_defaultInstance
	Calendar_t571621478 * ___s_defaultInstance_6;

public:
	inline static int32_t get_offset_of_DaysToMonth365_4() { return static_cast<int32_t>(offsetof(GregorianCalendar_t1120199104_StaticFields, ___DaysToMonth365_4)); }
	inline Int32U5BU5D_t1276023077* get_DaysToMonth365_4() const { return ___DaysToMonth365_4; }
	inline Int32U5BU5D_t1276023077** get_address_of_DaysToMonth365_4() { return &___DaysToMonth365_4; }
	inline void set_DaysToMonth365_4(Int32U5BU5D_t1276023077* value)
	{
		___DaysToMonth365_4 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_4), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_5() { return static_cast<int32_t>(offsetof(GregorianCalendar_t1120199104_StaticFields, ___DaysToMonth366_5)); }
	inline Int32U5BU5D_t1276023077* get_DaysToMonth366_5() const { return ___DaysToMonth366_5; }
	inline Int32U5BU5D_t1276023077** get_address_of_DaysToMonth366_5() { return &___DaysToMonth366_5; }
	inline void set_DaysToMonth366_5(Int32U5BU5D_t1276023077* value)
	{
		___DaysToMonth366_5 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_5), value);
	}

	inline static int32_t get_offset_of_s_defaultInstance_6() { return static_cast<int32_t>(offsetof(GregorianCalendar_t1120199104_StaticFields, ___s_defaultInstance_6)); }
	inline Calendar_t571621478 * get_s_defaultInstance_6() const { return ___s_defaultInstance_6; }
	inline Calendar_t571621478 ** get_address_of_s_defaultInstance_6() { return &___s_defaultInstance_6; }
	inline void set_s_defaultInstance_6(Calendar_t571621478 * value)
	{
		___s_defaultInstance_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultInstance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GREGORIANCALENDAR_T1120199104_H
#ifndef TIMESPANTOKEN_T2653461926_H
#define TIMESPANTOKEN_T2653461926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse/TimeSpanToken
struct  TimeSpanToken_t2653461926 
{
public:
	// System.Globalization.TimeSpanParse/TTT System.Globalization.TimeSpanParse/TimeSpanToken::ttt
	int32_t ___ttt_0;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanToken::num
	int32_t ___num_1;
	// System.Int32 System.Globalization.TimeSpanParse/TimeSpanToken::zeroes
	int32_t ___zeroes_2;
	// System.String System.Globalization.TimeSpanParse/TimeSpanToken::sep
	String_t* ___sep_3;

public:
	inline static int32_t get_offset_of_ttt_0() { return static_cast<int32_t>(offsetof(TimeSpanToken_t2653461926, ___ttt_0)); }
	inline int32_t get_ttt_0() const { return ___ttt_0; }
	inline int32_t* get_address_of_ttt_0() { return &___ttt_0; }
	inline void set_ttt_0(int32_t value)
	{
		___ttt_0 = value;
	}

	inline static int32_t get_offset_of_num_1() { return static_cast<int32_t>(offsetof(TimeSpanToken_t2653461926, ___num_1)); }
	inline int32_t get_num_1() const { return ___num_1; }
	inline int32_t* get_address_of_num_1() { return &___num_1; }
	inline void set_num_1(int32_t value)
	{
		___num_1 = value;
	}

	inline static int32_t get_offset_of_zeroes_2() { return static_cast<int32_t>(offsetof(TimeSpanToken_t2653461926, ___zeroes_2)); }
	inline int32_t get_zeroes_2() const { return ___zeroes_2; }
	inline int32_t* get_address_of_zeroes_2() { return &___zeroes_2; }
	inline void set_zeroes_2(int32_t value)
	{
		___zeroes_2 = value;
	}

	inline static int32_t get_offset_of_sep_3() { return static_cast<int32_t>(offsetof(TimeSpanToken_t2653461926, ___sep_3)); }
	inline String_t* get_sep_3() const { return ___sep_3; }
	inline String_t** get_address_of_sep_3() { return &___sep_3; }
	inline void set_sep_3(String_t* value)
	{
		___sep_3 = value;
		Il2CppCodeGenWriteBarrier((&___sep_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.TimeSpanParse/TimeSpanToken
struct TimeSpanToken_t2653461926_marshaled_pinvoke
{
	int32_t ___ttt_0;
	int32_t ___num_1;
	int32_t ___zeroes_2;
	char* ___sep_3;
};
// Native definition for COM marshalling of System.Globalization.TimeSpanParse/TimeSpanToken
struct TimeSpanToken_t2653461926_marshaled_com
{
	int32_t ___ttt_0;
	int32_t ___num_1;
	int32_t ___zeroes_2;
	Il2CppChar* ___sep_3;
};
#endif // TIMESPANTOKEN_T2653461926_H
#ifndef HEBREWNUMBERPARSINGCONTEXT_T4206052985_H
#define HEBREWNUMBERPARSINGCONTEXT_T4206052985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.HebrewNumberParsingContext
struct  HebrewNumberParsingContext_t4206052985 
{
public:
	// System.Globalization.HebrewNumber/HS System.Globalization.HebrewNumberParsingContext::state
	int32_t ___state_0;
	// System.Int32 System.Globalization.HebrewNumberParsingContext::result
	int32_t ___result_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(HebrewNumberParsingContext_t4206052985, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(HebrewNumberParsingContext_t4206052985, ___result_1)); }
	inline int32_t get_result_1() const { return ___result_1; }
	inline int32_t* get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(int32_t value)
	{
		___result_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEBREWNUMBERPARSINGCONTEXT_T4206052985_H
#ifndef TIMESPANPARSE_T445041914_H
#define TIMESPANPARSE_T445041914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.TimeSpanParse
struct  TimeSpanParse_t445041914  : public RuntimeObject
{
public:

public:
};

struct TimeSpanParse_t445041914_StaticFields
{
public:
	// System.Globalization.TimeSpanParse/TimeSpanToken System.Globalization.TimeSpanParse::zero
	TimeSpanToken_t2653461926  ___zero_0;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(TimeSpanParse_t445041914_StaticFields, ___zero_0)); }
	inline TimeSpanToken_t2653461926  get_zero_0() const { return ___zero_0; }
	inline TimeSpanToken_t2653461926 * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(TimeSpanToken_t2653461926  value)
	{
		___zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANPARSE_T445041914_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (Encoder_t2344908708), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[2] = 
{
	Encoder_t2344908708::get_offset_of_m_fallback_0(),
	Encoder_t2344908708::get_offset_of_m_fallbackBuffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (EncoderNLS_t1717298589), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1401[5] = 
{
	EncoderNLS_t1717298589::get_offset_of_charLeftOver_2(),
	EncoderNLS_t1717298589::get_offset_of_m_encoding_3(),
	EncoderNLS_t1717298589::get_offset_of_m_mustFlush_4(),
	EncoderNLS_t1717298589::get_offset_of_m_throwOnOverflow_5(),
	EncoderNLS_t1717298589::get_offset_of_m_charsUsed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (EncoderExceptionFallback_t739748989), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (EncoderExceptionFallbackBuffer_t2255508326), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (EncoderFallbackException_t3428771437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[4] = 
{
	EncoderFallbackException_t3428771437::get_offset_of_charUnknown_17(),
	EncoderFallbackException_t3428771437::get_offset_of_charUnknownHigh_18(),
	EncoderFallbackException_t3428771437::get_offset_of_charUnknownLow_19(),
	EncoderFallbackException_t3428771437::get_offset_of_index_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (EncoderFallback_t4084546684), -1, sizeof(EncoderFallback_t4084546684_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1405[4] = 
{
	EncoderFallback_t4084546684::get_offset_of_bIsMicrosoftBestFitFallback_0(),
	EncoderFallback_t4084546684_StaticFields::get_offset_of_replacementFallback_1(),
	EncoderFallback_t4084546684_StaticFields::get_offset_of_exceptionFallback_2(),
	EncoderFallback_t4084546684_StaticFields::get_offset_of_s_InternalSyncObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (EncoderFallbackBuffer_t1932256414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1406[7] = 
{
	EncoderFallbackBuffer_t1932256414::get_offset_of_charStart_0(),
	EncoderFallbackBuffer_t1932256414::get_offset_of_charEnd_1(),
	EncoderFallbackBuffer_t1932256414::get_offset_of_encoder_2(),
	EncoderFallbackBuffer_t1932256414::get_offset_of_setEncoder_3(),
	EncoderFallbackBuffer_t1932256414::get_offset_of_bUsedEncoder_4(),
	EncoderFallbackBuffer_t1932256414::get_offset_of_bFallingBack_5(),
	EncoderFallbackBuffer_t1932256414::get_offset_of_iRecursionCount_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (EncoderReplacementFallback_t1057184676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1407[1] = 
{
	EncoderReplacementFallback_t1057184676::get_offset_of_strDefault_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (EncoderReplacementFallbackBuffer_t3952933775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1408[3] = 
{
	EncoderReplacementFallbackBuffer_t3952933775::get_offset_of_strDefault_7(),
	EncoderReplacementFallbackBuffer_t3952933775::get_offset_of_fallbackCount_8(),
	EncoderReplacementFallbackBuffer_t3952933775::get_offset_of_fallbackIndex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (Encoding_t1804781422), -1, sizeof(Encoding_t1804781422_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1409[16] = 
{
	Encoding_t1804781422_StaticFields::get_offset_of_defaultEncoding_0(),
	Encoding_t1804781422_StaticFields::get_offset_of_unicodeEncoding_1(),
	Encoding_t1804781422_StaticFields::get_offset_of_bigEndianUnicode_2(),
	Encoding_t1804781422_StaticFields::get_offset_of_utf7Encoding_3(),
	Encoding_t1804781422_StaticFields::get_offset_of_utf8Encoding_4(),
	Encoding_t1804781422_StaticFields::get_offset_of_utf32Encoding_5(),
	Encoding_t1804781422_StaticFields::get_offset_of_asciiEncoding_6(),
	Encoding_t1804781422_StaticFields::get_offset_of_latin1Encoding_7(),
	Encoding_t1804781422_StaticFields::get_offset_of_encodings_8(),
	Encoding_t1804781422::get_offset_of_m_codePage_9(),
	Encoding_t1804781422::get_offset_of_dataItem_10(),
	Encoding_t1804781422::get_offset_of_m_deserializedFromEverett_11(),
	Encoding_t1804781422::get_offset_of_m_isReadOnly_12(),
	Encoding_t1804781422::get_offset_of_encoderFallback_13(),
	Encoding_t1804781422::get_offset_of_decoderFallback_14(),
	Encoding_t1804781422_StaticFields::get_offset_of_s_InternalSyncObject_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (DefaultEncoder_t4231679030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1410[3] = 
{
	DefaultEncoder_t4231679030::get_offset_of_m_encoding_2(),
	DefaultEncoder_t4231679030::get_offset_of_m_hasInitializedEncoding_3(),
	DefaultEncoder_t4231679030::get_offset_of_charLeftOver_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (DefaultDecoder_t3591605022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1411[2] = 
{
	DefaultDecoder_t3591605022::get_offset_of_m_encoding_2(),
	DefaultDecoder_t3591605022::get_offset_of_m_hasInitializedEncoding_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (EncodingCharBuffer_t2779206987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1412[10] = 
{
	EncodingCharBuffer_t2779206987::get_offset_of_chars_0(),
	EncodingCharBuffer_t2779206987::get_offset_of_charStart_1(),
	EncodingCharBuffer_t2779206987::get_offset_of_charEnd_2(),
	EncodingCharBuffer_t2779206987::get_offset_of_charCountResult_3(),
	EncodingCharBuffer_t2779206987::get_offset_of_enc_4(),
	EncodingCharBuffer_t2779206987::get_offset_of_decoder_5(),
	EncodingCharBuffer_t2779206987::get_offset_of_byteStart_6(),
	EncodingCharBuffer_t2779206987::get_offset_of_byteEnd_7(),
	EncodingCharBuffer_t2779206987::get_offset_of_bytes_8(),
	EncodingCharBuffer_t2779206987::get_offset_of_fallbackBuffer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (EncodingByteBuffer_t3052388219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1413[10] = 
{
	EncodingByteBuffer_t3052388219::get_offset_of_bytes_0(),
	EncodingByteBuffer_t3052388219::get_offset_of_byteStart_1(),
	EncodingByteBuffer_t3052388219::get_offset_of_byteEnd_2(),
	EncodingByteBuffer_t3052388219::get_offset_of_chars_3(),
	EncodingByteBuffer_t3052388219::get_offset_of_charStart_4(),
	EncodingByteBuffer_t3052388219::get_offset_of_charEnd_5(),
	EncodingByteBuffer_t3052388219::get_offset_of_byteCountResult_6(),
	EncodingByteBuffer_t3052388219::get_offset_of_enc_7(),
	EncodingByteBuffer_t3052388219::get_offset_of_encoder_8(),
	EncodingByteBuffer_t3052388219::get_offset_of_fallbackBuffer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (EncodingProvider_t2994094009), -1, sizeof(EncodingProvider_t2994094009_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1414[2] = 
{
	EncodingProvider_t2994094009_StaticFields::get_offset_of_s_InternalSyncObject_0(),
	EncodingProvider_t2994094009_StaticFields::get_offset_of_s_providers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (UnicodeEncoding_t3794953769), -1, sizeof(UnicodeEncoding_t3794953769_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1415[4] = 
{
	UnicodeEncoding_t3794953769::get_offset_of_isThrowException_16(),
	UnicodeEncoding_t3794953769::get_offset_of_bigEndian_17(),
	UnicodeEncoding_t3794953769::get_offset_of_byteOrderMark_18(),
	UnicodeEncoding_t3794953769_StaticFields::get_offset_of_highLowPatternMask_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (Decoder_t2858854297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1416[2] = 
{
	Decoder_t2858854297::get_offset_of_lastByte_6(),
	Decoder_t2858854297::get_offset_of_lastChar_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (UTF32Encoding_t3676304855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1417[3] = 
{
	UTF32Encoding_t3676304855::get_offset_of_emitUTF32ByteOrderMark_16(),
	UTF32Encoding_t3676304855::get_offset_of_isThrowException_17(),
	UTF32Encoding_t3676304855::get_offset_of_bigEndian_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (UTF32Decoder_t2605957717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1418[2] = 
{
	UTF32Decoder_t2605957717::get_offset_of_iChar_6(),
	UTF32Decoder_t2605957717::get_offset_of_readByteCount_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (UTF7Encoding_t3994199422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1419[4] = 
{
	UTF7Encoding_t3994199422::get_offset_of_base64Bytes_16(),
	UTF7Encoding_t3994199422::get_offset_of_base64Values_17(),
	UTF7Encoding_t3994199422::get_offset_of_directEncode_18(),
	UTF7Encoding_t3994199422::get_offset_of_m_allowOptionals_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (Decoder_t3172977863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1420[3] = 
{
	Decoder_t3172977863::get_offset_of_bits_6(),
	Decoder_t3172977863::get_offset_of_bitCount_7(),
	Decoder_t3172977863::get_offset_of_firstByte_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (Encoder_t1313455321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1421[2] = 
{
	Encoder_t1313455321::get_offset_of_bits_7(),
	Encoder_t1313455321::get_offset_of_bitCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (DecoderUTF7Fallback_t1675283575), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (DecoderUTF7FallbackBuffer_t3543311229), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[3] = 
{
	DecoderUTF7FallbackBuffer_t3543311229::get_offset_of_cFallback_2(),
	DecoderUTF7FallbackBuffer_t3543311229::get_offset_of_iCount_3(),
	DecoderUTF7FallbackBuffer_t3543311229::get_offset_of_iSize_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (UTF8Encoding_t523309809), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[2] = 
{
	UTF8Encoding_t523309809::get_offset_of_emitUTF8Identifier_16(),
	UTF8Encoding_t523309809::get_offset_of_isThrowException_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (UTF8Encoder_t2451303091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1425[1] = 
{
	UTF8Encoder_t2451303091::get_offset_of_surrogateChar_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (UTF8Decoder_t1866090888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1426[1] = 
{
	UTF8Decoder_t1866090888::get_offset_of_bits_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (StringBuilder_t1017942816), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable1427[11] = 
{
	StringBuilder_t1017942816::get_offset_of_m_ChunkChars_0(),
	StringBuilder_t1017942816::get_offset_of_m_ChunkPrevious_1(),
	StringBuilder_t1017942816::get_offset_of_m_ChunkLength_2(),
	StringBuilder_t1017942816::get_offset_of_m_ChunkOffset_3(),
	StringBuilder_t1017942816::get_offset_of_m_MaxCapacity_4(),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (StringBuilderCache_t271021619), -1, 0, sizeof(StringBuilderCache_t271021619_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable1428[1] = 
{
	THREAD_STATIC_FIELD_OFFSET,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (SortKey_t66199533), sizeof(SortKey_t66199533_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1429[4] = 
{
	SortKey_t66199533::get_offset_of_source_0(),
	SortKey_t66199533::get_offset_of_key_1(),
	SortKey_t66199533::get_offset_of_options_2(),
	SortKey_t66199533::get_offset_of_lcid_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (CultureInfo_t197737613), -1, sizeof(CultureInfo_t197737613_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1430[38] = 
{
	CultureInfo_t197737613_StaticFields::get_offset_of_invariant_culture_info_0(),
	CultureInfo_t197737613_StaticFields::get_offset_of_shared_table_lock_1(),
	CultureInfo_t197737613_StaticFields::get_offset_of_default_current_culture_2(),
	CultureInfo_t197737613::get_offset_of_m_isReadOnly_3(),
	CultureInfo_t197737613::get_offset_of_cultureID_4(),
	CultureInfo_t197737613::get_offset_of_parent_lcid_5(),
	CultureInfo_t197737613::get_offset_of_datetime_index_6(),
	CultureInfo_t197737613::get_offset_of_number_index_7(),
	CultureInfo_t197737613::get_offset_of_default_calendar_type_8(),
	CultureInfo_t197737613::get_offset_of_m_useUserOverride_9(),
	CultureInfo_t197737613::get_offset_of_numInfo_10(),
	CultureInfo_t197737613::get_offset_of_dateTimeInfo_11(),
	CultureInfo_t197737613::get_offset_of_textInfo_12(),
	CultureInfo_t197737613::get_offset_of_m_name_13(),
	CultureInfo_t197737613::get_offset_of_englishname_14(),
	CultureInfo_t197737613::get_offset_of_nativename_15(),
	CultureInfo_t197737613::get_offset_of_iso3lang_16(),
	CultureInfo_t197737613::get_offset_of_iso2lang_17(),
	CultureInfo_t197737613::get_offset_of_win3lang_18(),
	CultureInfo_t197737613::get_offset_of_territory_19(),
	CultureInfo_t197737613::get_offset_of_native_calendar_names_20(),
	CultureInfo_t197737613::get_offset_of_compareInfo_21(),
	CultureInfo_t197737613::get_offset_of_textinfo_data_22(),
	CultureInfo_t197737613::get_offset_of_m_dataItem_23(),
	CultureInfo_t197737613::get_offset_of_calendar_24(),
	CultureInfo_t197737613::get_offset_of_parent_culture_25(),
	CultureInfo_t197737613::get_offset_of_constructed_26(),
	CultureInfo_t197737613::get_offset_of_cached_serialized_form_27(),
	CultureInfo_t197737613::get_offset_of_m_cultureData_28(),
	CultureInfo_t197737613::get_offset_of_m_isInherited_29(),
	0,
	0,
	0,
	CultureInfo_t197737613_StaticFields::get_offset_of_s_DefaultThreadCurrentUICulture_33(),
	CultureInfo_t197737613_StaticFields::get_offset_of_s_DefaultThreadCurrentCulture_34(),
	CultureInfo_t197737613_StaticFields::get_offset_of_shared_by_number_35(),
	CultureInfo_t197737613_StaticFields::get_offset_of_shared_by_name_36(),
	CultureInfo_t197737613_StaticFields::get_offset_of_IsTaiwanSku_37(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (Data_t3670784056)+ sizeof (RuntimeObject), sizeof(Data_t3670784056_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1431[6] = 
{
	Data_t3670784056::get_offset_of_ansi_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3670784056::get_offset_of_ebcdic_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3670784056::get_offset_of_mac_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3670784056::get_offset_of_oem_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3670784056::get_offset_of_right_to_left_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Data_t3670784056::get_offset_of_list_sep_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (IdnMapping_t743262040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1432[3] = 
{
	IdnMapping_t743262040::get_offset_of_allow_unassigned_0(),
	IdnMapping_t743262040::get_offset_of_use_std3_1(),
	IdnMapping_t743262040::get_offset_of_puny_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (Bootstring_t2556271891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1433[8] = 
{
	Bootstring_t2556271891::get_offset_of_delimiter_0(),
	Bootstring_t2556271891::get_offset_of_base_num_1(),
	Bootstring_t2556271891::get_offset_of_tmin_2(),
	Bootstring_t2556271891::get_offset_of_tmax_3(),
	Bootstring_t2556271891::get_offset_of_skew_4(),
	Bootstring_t2556271891::get_offset_of_damp_5(),
	Bootstring_t2556271891::get_offset_of_initial_bias_6(),
	Bootstring_t2556271891::get_offset_of_initial_n_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (Punycode_t524748583), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (RegionInfo_t3518366721), sizeof(RegionInfo_t3518366721_marshaled_pinvoke), sizeof(RegionInfo_t3518366721_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1435[11] = 
{
	RegionInfo_t3518366721_StaticFields::get_offset_of_currentRegion_0(),
	RegionInfo_t3518366721::get_offset_of_regionId_1(),
	RegionInfo_t3518366721::get_offset_of_iso2Name_2(),
	RegionInfo_t3518366721::get_offset_of_iso3Name_3(),
	RegionInfo_t3518366721::get_offset_of_win3Name_4(),
	RegionInfo_t3518366721::get_offset_of_englishName_5(),
	RegionInfo_t3518366721::get_offset_of_nativeName_6(),
	RegionInfo_t3518366721::get_offset_of_currencySymbol_7(),
	RegionInfo_t3518366721::get_offset_of_isoCurrencySymbol_8(),
	RegionInfo_t3518366721::get_offset_of_currencyEnglishName_9(),
	RegionInfo_t3518366721::get_offset_of_currencyNativeName_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (CalendarData_t2609061728), -1, sizeof(CalendarData_t2609061728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1436[21] = 
{
	0,
	CalendarData_t2609061728::get_offset_of_sNativeName_1(),
	CalendarData_t2609061728::get_offset_of_saShortDates_2(),
	CalendarData_t2609061728::get_offset_of_saYearMonths_3(),
	CalendarData_t2609061728::get_offset_of_saLongDates_4(),
	CalendarData_t2609061728::get_offset_of_sMonthDay_5(),
	CalendarData_t2609061728::get_offset_of_saEraNames_6(),
	CalendarData_t2609061728::get_offset_of_saAbbrevEraNames_7(),
	CalendarData_t2609061728::get_offset_of_saAbbrevEnglishEraNames_8(),
	CalendarData_t2609061728::get_offset_of_saDayNames_9(),
	CalendarData_t2609061728::get_offset_of_saAbbrevDayNames_10(),
	CalendarData_t2609061728::get_offset_of_saSuperShortDayNames_11(),
	CalendarData_t2609061728::get_offset_of_saMonthNames_12(),
	CalendarData_t2609061728::get_offset_of_saAbbrevMonthNames_13(),
	CalendarData_t2609061728::get_offset_of_saMonthGenitiveNames_14(),
	CalendarData_t2609061728::get_offset_of_saAbbrevMonthGenitiveNames_15(),
	CalendarData_t2609061728::get_offset_of_saLeapYearMonthNames_16(),
	CalendarData_t2609061728::get_offset_of_iTwoDigitYearMax_17(),
	CalendarData_t2609061728::get_offset_of_iCurrentEra_18(),
	CalendarData_t2609061728::get_offset_of_bUseUserOverrides_19(),
	CalendarData_t2609061728_StaticFields::get_offset_of_Invariant_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (CultureData_t1976740787), -1, sizeof(CultureData_t1976740787_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1437[21] = 
{
	CultureData_t1976740787::get_offset_of_sAM1159_0(),
	CultureData_t1976740787::get_offset_of_sPM2359_1(),
	CultureData_t1976740787::get_offset_of_sTimeSeparator_2(),
	CultureData_t1976740787::get_offset_of_saLongTimes_3(),
	CultureData_t1976740787::get_offset_of_saShortTimes_4(),
	CultureData_t1976740787::get_offset_of_iFirstDayOfWeek_5(),
	CultureData_t1976740787::get_offset_of_iFirstWeekOfYear_6(),
	CultureData_t1976740787::get_offset_of_waCalendars_7(),
	CultureData_t1976740787::get_offset_of_calendars_8(),
	CultureData_t1976740787::get_offset_of_sISO639Language_9(),
	CultureData_t1976740787::get_offset_of_sRealName_10(),
	CultureData_t1976740787::get_offset_of_bUseOverrides_11(),
	CultureData_t1976740787::get_offset_of_calendarId_12(),
	CultureData_t1976740787::get_offset_of_numberIndex_13(),
	CultureData_t1976740787::get_offset_of_iDefaultAnsiCodePage_14(),
	CultureData_t1976740787::get_offset_of_iDefaultOemCodePage_15(),
	CultureData_t1976740787::get_offset_of_iDefaultMacCodePage_16(),
	CultureData_t1976740787::get_offset_of_iDefaultEbcdicCodePage_17(),
	CultureData_t1976740787::get_offset_of_isRightToLeft_18(),
	CultureData_t1976740787::get_offset_of_sListSeparator_19(),
	CultureData_t1976740787_StaticFields::get_offset_of_s_Invariant_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (CodePageDataItem_t4157734213), -1, sizeof(CodePageDataItem_t4157734213_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1438[6] = 
{
	CodePageDataItem_t4157734213::get_offset_of_m_dataIndex_0(),
	CodePageDataItem_t4157734213::get_offset_of_m_uiFamilyCodePage_1(),
	CodePageDataItem_t4157734213::get_offset_of_m_webName_2(),
	CodePageDataItem_t4157734213::get_offset_of_m_headerName_3(),
	CodePageDataItem_t4157734213::get_offset_of_m_flags_4(),
	CodePageDataItem_t4157734213_StaticFields::get_offset_of_sep_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (EncodingTable_t2344930229), -1, sizeof(EncodingTable_t2344930229_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1439[5] = 
{
	EncodingTable_t2344930229_StaticFields::get_offset_of_encodingDataPtr_0(),
	EncodingTable_t2344930229_StaticFields::get_offset_of_codePageDataPtr_1(),
	EncodingTable_t2344930229_StaticFields::get_offset_of_lastEncodingItem_2(),
	EncodingTable_t2344930229_StaticFields::get_offset_of_hashByName_3(),
	EncodingTable_t2344930229_StaticFields::get_offset_of_hashByCodePage_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (InternalEncodingDataItem_t3901848907)+ sizeof (RuntimeObject), sizeof(InternalEncodingDataItem_t3901848907_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1440[2] = 
{
	InternalEncodingDataItem_t3901848907::get_offset_of_webName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InternalEncodingDataItem_t3901848907::get_offset_of_codePage_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (InternalCodePageDataItem_t2950334692)+ sizeof (RuntimeObject), sizeof(InternalCodePageDataItem_t2950334692_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1441[4] = 
{
	InternalCodePageDataItem_t2950334692::get_offset_of_codePage_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InternalCodePageDataItem_t2950334692::get_offset_of_uiFamilyCodePage_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InternalCodePageDataItem_t2950334692::get_offset_of_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InternalCodePageDataItem_t2950334692::get_offset_of_Names_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (CompareInfo_t3802660337), -1, sizeof(CompareInfo_t3802660337_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1442[9] = 
{
	CompareInfo_t3802660337::get_offset_of_collator_0(),
	CompareInfo_t3802660337_StaticFields::get_offset_of_collators_1(),
	CompareInfo_t3802660337_StaticFields::get_offset_of_managedCollation_2(),
	CompareInfo_t3802660337_StaticFields::get_offset_of_managedCollationChecked_3(),
	CompareInfo_t3802660337::get_offset_of_m_name_4(),
	CompareInfo_t3802660337::get_offset_of_m_sortName_5(),
	CompareInfo_t3802660337::get_offset_of_win32LCID_6(),
	CompareInfo_t3802660337::get_offset_of_culture_7(),
	CompareInfo_t3802660337::get_offset_of_m_SortVersion_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (TextInfo_t3464677949), -1, sizeof(TextInfo_t3464677949_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1443[9] = 
{
	TextInfo_t3464677949::get_offset_of_m_isReadOnly_0(),
	TextInfo_t3464677949::get_offset_of_m_cultureName_1(),
	TextInfo_t3464677949::get_offset_of_m_cultureData_2(),
	TextInfo_t3464677949::get_offset_of_m_textInfoName_3(),
	TextInfo_t3464677949::get_offset_of_m_IsAsciiCasingSameAsInvariant_4(),
	TextInfo_t3464677949_StaticFields::get_offset_of_s_Invariant_5(),
	TextInfo_t3464677949::get_offset_of_customCultureName_6(),
	TextInfo_t3464677949::get_offset_of_m_useUserOverride_7(),
	TextInfo_t3464677949::get_offset_of_m_win32LangID_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (TextInfoToUpperData_t1215564406), -1, sizeof(TextInfoToUpperData_t1215564406_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1444[8] = 
{
	TextInfoToUpperData_t1215564406_StaticFields::get_offset_of_range_00e0_0586_0(),
	TextInfoToUpperData_t1215564406_StaticFields::get_offset_of_range_1e01_1ff3_1(),
	TextInfoToUpperData_t1215564406_StaticFields::get_offset_of_range_2170_2184_2(),
	TextInfoToUpperData_t1215564406_StaticFields::get_offset_of_range_24d0_24e9_3(),
	TextInfoToUpperData_t1215564406_StaticFields::get_offset_of_range_2c30_2ce3_4(),
	TextInfoToUpperData_t1215564406_StaticFields::get_offset_of_range_2d00_2d25_5(),
	TextInfoToUpperData_t1215564406_StaticFields::get_offset_of_range_a641_a697_6(),
	TextInfoToUpperData_t1215564406_StaticFields::get_offset_of_range_a723_a78c_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (TextInfoToLowerData_t4285823890), -1, sizeof(TextInfoToLowerData_t4285823890_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1445[9] = 
{
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_00c0_0556_0(),
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_10a0_10c5_1(),
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_1e00_1ffc_2(),
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_2160_216f_3(),
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_24b6_24cf_4(),
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_2c00_2c2e_5(),
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_2c60_2ce2_6(),
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_a640_a696_7(),
	TextInfoToLowerData_t4285823890_StaticFields::get_offset_of_range_a722_a78b_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (Calendar_t571621478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1446[3] = 
{
	Calendar_t571621478::get_offset_of_m_currentEraValue_0(),
	Calendar_t571621478::get_offset_of_m_isReadOnly_1(),
	Calendar_t571621478::get_offset_of_twoDigitYearMax_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (CharUnicodeInfo_t4226520770), -1, sizeof(CharUnicodeInfo_t4226520770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1447[6] = 
{
	CharUnicodeInfo_t4226520770_StaticFields::get_offset_of_s_initialized_0(),
	CharUnicodeInfo_t4226520770_StaticFields::get_offset_of_s_pCategoryLevel1Index_1(),
	CharUnicodeInfo_t4226520770_StaticFields::get_offset_of_s_pCategoriesValue_2(),
	CharUnicodeInfo_t4226520770_StaticFields::get_offset_of_s_pNumericLevel1Index_3(),
	CharUnicodeInfo_t4226520770_StaticFields::get_offset_of_s_pNumericValues_4(),
	CharUnicodeInfo_t4226520770_StaticFields::get_offset_of_s_pDigitValues_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (UnicodeDataHeader_t3128314719)+ sizeof (RuntimeObject), sizeof(UnicodeDataHeader_t3128314719_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1448[7] = 
{
	UnicodeDataHeader_t3128314719::get_offset_of_TableName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t3128314719::get_offset_of_version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t3128314719::get_offset_of_OffsetToCategoriesIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t3128314719::get_offset_of_OffsetToCategoriesValue_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t3128314719::get_offset_of_OffsetToNumbericIndex_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t3128314719::get_offset_of_OffsetToDigitValue_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnicodeDataHeader_t3128314719::get_offset_of_OffsetToNumbericValue_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (DigitValues_t3238575465)+ sizeof (RuntimeObject), sizeof(DigitValues_t3238575465 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1449[2] = 
{
	DigitValues_t3238575465::get_offset_of_decimalDigit_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DigitValues_t3238575465::get_offset_of_digit_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (CompareOptions_t1990368500)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1450[10] = 
{
	CompareOptions_t1990368500::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (CultureNotFoundException_t2783347772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1451[2] = 
{
	CultureNotFoundException_t2783347772::get_offset_of_m_invalidCultureName_17(),
	CultureNotFoundException_t2783347772::get_offset_of_m_invalidCultureId_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (CultureTypes_t694650315)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1452[9] = 
{
	CultureTypes_t694650315::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (DaylightTime_t1812568432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[3] = 
{
	DaylightTime_t1812568432::get_offset_of_m_start_0(),
	DaylightTime_t1812568432::get_offset_of_m_end_1(),
	DaylightTime_t1812568432::get_offset_of_m_delta_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (MonthNameStyles_t176593768)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1454[4] = 
{
	MonthNameStyles_t176593768::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (DateTimeFormatFlags_t3111868630)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1455[9] = 
{
	DateTimeFormatFlags_t3111868630::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (DateTimeFormatInfo_t526335175), -1, sizeof(DateTimeFormatInfo_t526335175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1456[84] = 
{
	DateTimeFormatInfo_t526335175_StaticFields::get_offset_of_invariantInfo_0(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_cultureData_1(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_name_2(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_langName_3(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_compareInfo_4(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_cultureInfo_5(),
	DateTimeFormatInfo_t526335175::get_offset_of_amDesignator_6(),
	DateTimeFormatInfo_t526335175::get_offset_of_pmDesignator_7(),
	DateTimeFormatInfo_t526335175::get_offset_of_dateSeparator_8(),
	DateTimeFormatInfo_t526335175::get_offset_of_generalShortTimePattern_9(),
	DateTimeFormatInfo_t526335175::get_offset_of_generalLongTimePattern_10(),
	DateTimeFormatInfo_t526335175::get_offset_of_timeSeparator_11(),
	DateTimeFormatInfo_t526335175::get_offset_of_monthDayPattern_12(),
	DateTimeFormatInfo_t526335175::get_offset_of_dateTimeOffsetPattern_13(),
	0,
	0,
	0,
	DateTimeFormatInfo_t526335175::get_offset_of_calendar_17(),
	DateTimeFormatInfo_t526335175::get_offset_of_firstDayOfWeek_18(),
	DateTimeFormatInfo_t526335175::get_offset_of_calendarWeekRule_19(),
	DateTimeFormatInfo_t526335175::get_offset_of_fullDateTimePattern_20(),
	DateTimeFormatInfo_t526335175::get_offset_of_abbreviatedDayNames_21(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_superShortDayNames_22(),
	DateTimeFormatInfo_t526335175::get_offset_of_dayNames_23(),
	DateTimeFormatInfo_t526335175::get_offset_of_abbreviatedMonthNames_24(),
	DateTimeFormatInfo_t526335175::get_offset_of_monthNames_25(),
	DateTimeFormatInfo_t526335175::get_offset_of_genitiveMonthNames_26(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_genitiveAbbreviatedMonthNames_27(),
	DateTimeFormatInfo_t526335175::get_offset_of_leapYearMonthNames_28(),
	DateTimeFormatInfo_t526335175::get_offset_of_longDatePattern_29(),
	DateTimeFormatInfo_t526335175::get_offset_of_shortDatePattern_30(),
	DateTimeFormatInfo_t526335175::get_offset_of_yearMonthPattern_31(),
	DateTimeFormatInfo_t526335175::get_offset_of_longTimePattern_32(),
	DateTimeFormatInfo_t526335175::get_offset_of_shortTimePattern_33(),
	DateTimeFormatInfo_t526335175::get_offset_of_allYearMonthPatterns_34(),
	DateTimeFormatInfo_t526335175::get_offset_of_allShortDatePatterns_35(),
	DateTimeFormatInfo_t526335175::get_offset_of_allLongDatePatterns_36(),
	DateTimeFormatInfo_t526335175::get_offset_of_allShortTimePatterns_37(),
	DateTimeFormatInfo_t526335175::get_offset_of_allLongTimePatterns_38(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_eraNames_39(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_abbrevEraNames_40(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_abbrevEnglishEraNames_41(),
	DateTimeFormatInfo_t526335175::get_offset_of_optionalCalendars_42(),
	0,
	DateTimeFormatInfo_t526335175::get_offset_of_m_isReadOnly_44(),
	DateTimeFormatInfo_t526335175::get_offset_of_formatFlags_45(),
	DateTimeFormatInfo_t526335175_StaticFields::get_offset_of_preferExistingTokens_46(),
	DateTimeFormatInfo_t526335175::get_offset_of_CultureID_47(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_useUserOverride_48(),
	DateTimeFormatInfo_t526335175::get_offset_of_bUseCalendarInfo_49(),
	DateTimeFormatInfo_t526335175::get_offset_of_nDataItem_50(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_isDefaultCalendar_51(),
	DateTimeFormatInfo_t526335175_StaticFields::get_offset_of_s_calendarNativeNames_52(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_dateWords_53(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_fullTimeSpanPositivePattern_54(),
	DateTimeFormatInfo_t526335175::get_offset_of_m_fullTimeSpanNegativePattern_55(),
	0,
	DateTimeFormatInfo_t526335175::get_offset_of_m_dtfiTokenHash_57(),
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
	DateTimeFormatInfo_t526335175_StaticFields::get_offset_of_s_jajpDTFI_82(),
	DateTimeFormatInfo_t526335175_StaticFields::get_offset_of_s_zhtwDTFI_83(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (TokenHashValue_t2877570812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1457[3] = 
{
	TokenHashValue_t2877570812::get_offset_of_tokenString_0(),
	TokenHashValue_t2877570812::get_offset_of_tokenType_1(),
	TokenHashValue_t2877570812::get_offset_of_tokenValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (FORMATFLAGS_t376761767)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1458[8] = 
{
	FORMATFLAGS_t376761767::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (CalendarId_t2754519501)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1459[25] = 
{
	CalendarId_t2754519501::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (DateTimeFormatInfoScanner_t1977904927), -1, sizeof(DateTimeFormatInfoScanner_t1977904927_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1460[3] = 
{
	DateTimeFormatInfoScanner_t1977904927::get_offset_of_m_dateWords_0(),
	DateTimeFormatInfoScanner_t1977904927_StaticFields::get_offset_of_s_knownWords_1(),
	DateTimeFormatInfoScanner_t1977904927::get_offset_of_m_ymdFlags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (FoundDatePattern_t1618654662)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1461[6] = 
{
	FoundDatePattern_t1618654662::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (DateTimeStyles_t1517799372)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1462[11] = 
{
	DateTimeStyles_t1517799372::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (GlobalizationAssembly_t1287709845), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (GregorianCalendar_t1120199104), -1, sizeof(GregorianCalendar_t1120199104_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1464[4] = 
{
	GregorianCalendar_t1120199104::get_offset_of_m_type_3(),
	GregorianCalendar_t1120199104_StaticFields::get_offset_of_DaysToMonth365_4(),
	GregorianCalendar_t1120199104_StaticFields::get_offset_of_DaysToMonth366_5(),
	GregorianCalendar_t1120199104_StaticFields::get_offset_of_s_defaultInstance_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (EraInfo_t688838952), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[8] = 
{
	EraInfo_t688838952::get_offset_of_era_0(),
	EraInfo_t688838952::get_offset_of_ticks_1(),
	EraInfo_t688838952::get_offset_of_yearOffset_2(),
	EraInfo_t688838952::get_offset_of_minEraYear_3(),
	EraInfo_t688838952::get_offset_of_maxEraYear_4(),
	EraInfo_t688838952::get_offset_of_eraName_5(),
	EraInfo_t688838952::get_offset_of_abbrevEraName_6(),
	EraInfo_t688838952::get_offset_of_englishEraName_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (GregorianCalendarHelper_t404050585), -1, sizeof(GregorianCalendarHelper_t404050585_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1466[8] = 
{
	GregorianCalendarHelper_t404050585_StaticFields::get_offset_of_DaysToMonth365_0(),
	GregorianCalendarHelper_t404050585_StaticFields::get_offset_of_DaysToMonth366_1(),
	GregorianCalendarHelper_t404050585::get_offset_of_m_maxYear_2(),
	GregorianCalendarHelper_t404050585::get_offset_of_m_minYear_3(),
	GregorianCalendarHelper_t404050585::get_offset_of_m_Cal_4(),
	GregorianCalendarHelper_t404050585::get_offset_of_m_EraInfo_5(),
	GregorianCalendarHelper_t404050585::get_offset_of_m_eras_6(),
	GregorianCalendarHelper_t404050585::get_offset_of_m_minDate_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (GregorianCalendarTypes_t3335359086)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1467[7] = 
{
	GregorianCalendarTypes_t3335359086::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (HebrewNumberParsingContext_t4206052985)+ sizeof (RuntimeObject), sizeof(HebrewNumberParsingContext_t4206052985 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1468[2] = 
{
	HebrewNumberParsingContext_t4206052985::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HebrewNumberParsingContext_t4206052985::get_offset_of_result_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (HebrewNumberParsingState_t1115971885)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1469[5] = 
{
	HebrewNumberParsingState_t1115971885::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (HebrewNumber_t2412778222), -1, sizeof(HebrewNumber_t2412778222_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1470[3] = 
{
	HebrewNumber_t2412778222_StaticFields::get_offset_of_HebrewValues_0(),
	HebrewNumber_t2412778222_StaticFields::get_offset_of_maxHebrewNumberCh_1(),
	HebrewNumber_t2412778222_StaticFields::get_offset_of_NumberPasingState_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (HebrewToken_t1098630438)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1471[12] = 
{
	HebrewToken_t1098630438::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (HebrewValue_t4137864058), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1472[2] = 
{
	HebrewValue_t4137864058::get_offset_of_token_0(),
	HebrewValue_t4137864058::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (HS_t1557009947)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1473[20] = 
{
	HS_t1557009947::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (JapaneseCalendar_t2913764187), -1, sizeof(JapaneseCalendar_t2913764187_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1474[4] = 
{
	JapaneseCalendar_t2913764187_StaticFields::get_offset_of_calendarMinValue_3(),
	JapaneseCalendar_t2913764187_StaticFields::get_offset_of_japaneseEraInfo_4(),
	JapaneseCalendar_t2913764187_StaticFields::get_offset_of_s_defaultInstance_5(),
	JapaneseCalendar_t2913764187::get_offset_of_helper_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (NumberStyles_t2722279267)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1475[18] = 
{
	NumberStyles_t2722279267::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (NumberFormatInfo_t889823082), -1, sizeof(NumberFormatInfo_t889823082_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1476[36] = 
{
	NumberFormatInfo_t889823082_StaticFields::get_offset_of_invariantInfo_0(),
	NumberFormatInfo_t889823082::get_offset_of_numberGroupSizes_1(),
	NumberFormatInfo_t889823082::get_offset_of_currencyGroupSizes_2(),
	NumberFormatInfo_t889823082::get_offset_of_percentGroupSizes_3(),
	NumberFormatInfo_t889823082::get_offset_of_positiveSign_4(),
	NumberFormatInfo_t889823082::get_offset_of_negativeSign_5(),
	NumberFormatInfo_t889823082::get_offset_of_numberDecimalSeparator_6(),
	NumberFormatInfo_t889823082::get_offset_of_numberGroupSeparator_7(),
	NumberFormatInfo_t889823082::get_offset_of_currencyGroupSeparator_8(),
	NumberFormatInfo_t889823082::get_offset_of_currencyDecimalSeparator_9(),
	NumberFormatInfo_t889823082::get_offset_of_currencySymbol_10(),
	NumberFormatInfo_t889823082::get_offset_of_ansiCurrencySymbol_11(),
	NumberFormatInfo_t889823082::get_offset_of_nanSymbol_12(),
	NumberFormatInfo_t889823082::get_offset_of_positiveInfinitySymbol_13(),
	NumberFormatInfo_t889823082::get_offset_of_negativeInfinitySymbol_14(),
	NumberFormatInfo_t889823082::get_offset_of_percentDecimalSeparator_15(),
	NumberFormatInfo_t889823082::get_offset_of_percentGroupSeparator_16(),
	NumberFormatInfo_t889823082::get_offset_of_percentSymbol_17(),
	NumberFormatInfo_t889823082::get_offset_of_perMilleSymbol_18(),
	NumberFormatInfo_t889823082::get_offset_of_nativeDigits_19(),
	NumberFormatInfo_t889823082::get_offset_of_m_dataItem_20(),
	NumberFormatInfo_t889823082::get_offset_of_numberDecimalDigits_21(),
	NumberFormatInfo_t889823082::get_offset_of_currencyDecimalDigits_22(),
	NumberFormatInfo_t889823082::get_offset_of_currencyPositivePattern_23(),
	NumberFormatInfo_t889823082::get_offset_of_currencyNegativePattern_24(),
	NumberFormatInfo_t889823082::get_offset_of_numberNegativePattern_25(),
	NumberFormatInfo_t889823082::get_offset_of_percentPositivePattern_26(),
	NumberFormatInfo_t889823082::get_offset_of_percentNegativePattern_27(),
	NumberFormatInfo_t889823082::get_offset_of_percentDecimalDigits_28(),
	NumberFormatInfo_t889823082::get_offset_of_digitSubstitution_29(),
	NumberFormatInfo_t889823082::get_offset_of_isReadOnly_30(),
	NumberFormatInfo_t889823082::get_offset_of_m_useUserOverride_31(),
	NumberFormatInfo_t889823082::get_offset_of_m_isInvariant_32(),
	NumberFormatInfo_t889823082::get_offset_of_validForParseAsNumber_33(),
	NumberFormatInfo_t889823082::get_offset_of_validForParseAsCurrency_34(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (SortVersion_t1822720062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1477[2] = 
{
	SortVersion_t1822720062::get_offset_of_m_NlsVersion_0(),
	SortVersion_t1822720062::get_offset_of_m_SortId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (TaiwanCalendar_t862252470), -1, sizeof(TaiwanCalendar_t862252470_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1478[4] = 
{
	TaiwanCalendar_t862252470_StaticFields::get_offset_of_taiwanEraInfo_3(),
	TaiwanCalendar_t862252470_StaticFields::get_offset_of_s_defaultInstance_4(),
	TaiwanCalendar_t862252470::get_offset_of_helper_5(),
	TaiwanCalendar_t862252470_StaticFields::get_offset_of_calendarMinValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (TimeSpanFormat_t2703781844), -1, sizeof(TimeSpanFormat_t2703781844_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1479[2] = 
{
	TimeSpanFormat_t2703781844_StaticFields::get_offset_of_PositiveInvariantFormatLiterals_0(),
	TimeSpanFormat_t2703781844_StaticFields::get_offset_of_NegativeInvariantFormatLiterals_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (Pattern_t2329715606)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1480[4] = 
{
	Pattern_t2329715606::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (FormatLiterals_t2212238260)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1481[7] = 
{
	FormatLiterals_t2212238260::get_offset_of_AppCompatLiteral_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t2212238260::get_offset_of_dd_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t2212238260::get_offset_of_hh_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t2212238260::get_offset_of_mm_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t2212238260::get_offset_of_ss_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t2212238260::get_offset_of_ff_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FormatLiterals_t2212238260::get_offset_of_literals_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (TimeSpanStyles_t3457622238)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1482[3] = 
{
	TimeSpanStyles_t3457622238::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (TimeSpanParse_t445041914), -1, sizeof(TimeSpanParse_t445041914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1483[1] = 
{
	TimeSpanParse_t445041914_StaticFields::get_offset_of_zero_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (TimeSpanThrowStyle_t1208515922)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1484[3] = 
{
	TimeSpanThrowStyle_t1208515922::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (ParseFailureKind_t2562700250)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1485[6] = 
{
	ParseFailureKind_t2562700250::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (TimeSpanStandardStyles_t2119657244)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1486[6] = 
{
	TimeSpanStandardStyles_t2119657244::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (TTT_t3880172783)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1487[6] = 
{
	TTT_t3880172783::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (TimeSpanToken_t2653461926)+ sizeof (RuntimeObject), sizeof(TimeSpanToken_t2653461926_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1488[4] = 
{
	TimeSpanToken_t2653461926::get_offset_of_ttt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanToken_t2653461926::get_offset_of_num_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanToken_t2653461926::get_offset_of_zeroes_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanToken_t2653461926::get_offset_of_sep_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (TimeSpanTokenizer_t637726690)+ sizeof (RuntimeObject), sizeof(TimeSpanTokenizer_t637726690_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1489[2] = 
{
	TimeSpanTokenizer_t637726690::get_offset_of_m_pos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanTokenizer_t637726690::get_offset_of_m_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (TimeSpanRawInfo_t2027492179)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1490[12] = 
{
	TimeSpanRawInfo_t2027492179::get_offset_of_lastSeenTTT_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_tokenCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_SepCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_NumCount_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_literals_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_numbers_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_m_posLoc_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_m_negLoc_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_m_posLocInit_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_m_negLocInit_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_m_fullPosPattern_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanRawInfo_t2027492179::get_offset_of_m_fullNegPattern_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { sizeof (TimeSpanResult_t3248201774)+ sizeof (RuntimeObject), sizeof(TimeSpanResult_t3248201774_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1491[6] = 
{
	TimeSpanResult_t3248201774::get_offset_of_parsedTimeSpan_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3248201774::get_offset_of_throwStyle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3248201774::get_offset_of_m_failure_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3248201774::get_offset_of_m_failureMessageID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3248201774::get_offset_of_m_failureMessageFormatArgument_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpanResult_t3248201774::get_offset_of_m_failureArgumentName_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { sizeof (StringParser_t3546687313)+ sizeof (RuntimeObject), sizeof(StringParser_t3546687313_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1492[4] = 
{
	StringParser_t3546687313::get_offset_of_str_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StringParser_t3546687313::get_offset_of_ch_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StringParser_t3546687313::get_offset_of_pos_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StringParser_t3546687313::get_offset_of_len_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { sizeof (UnicodeCategory_t2267085102)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1493[31] = 
{
	UnicodeCategory_t2267085102::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (Runtime_t3431859186), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { sizeof (RuntimeClassHandle_t311823422)+ sizeof (RuntimeObject), sizeof(RuntimeClassHandle_t311823422_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1495[1] = 
{
	RuntimeClassHandle_t311823422::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (RuntimeRemoteClassHandle_t4140785739)+ sizeof (RuntimeObject), sizeof(RuntimeRemoteClassHandle_t4140785739_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1496[1] = 
{
	RuntimeRemoteClassHandle_t4140785739::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (RuntimeGenericParamInfoHandle_t2943842873)+ sizeof (RuntimeObject), sizeof(RuntimeGenericParamInfoHandle_t2943842873_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1497[1] = 
{
	RuntimeGenericParamInfoHandle_t2943842873::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (RuntimeEventHandle_t484387494)+ sizeof (RuntimeObject), sizeof(RuntimeEventHandle_t484387494 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1498[1] = 
{
	RuntimeEventHandle_t484387494::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (RuntimePropertyHandle_t3881052731)+ sizeof (RuntimeObject), sizeof(RuntimePropertyHandle_t3881052731 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1499[1] = 
{
	RuntimePropertyHandle_t3881052731::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
