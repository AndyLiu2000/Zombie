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
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t1174343702;
// System.Delegate
struct Delegate_t1297946403;
// System.IAsyncResult
struct IAsyncResult_t1336778382;
// System.AsyncCallback
struct AsyncCallback_t1548115960;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t1872309114;
// System.Void
struct Void_t634856565;
// System.Char[]
struct CharU5BU5D_t1313538844;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2989019778;
// System.Delegate[]
struct DelegateU5BU5D_t2205479154;

extern RuntimeClass* AnalyticsSessionInfo_t2531312542_il2cpp_TypeInfo_var;
extern const uint32_t AnalyticsSessionInfo_CallSessionStateChanged_m3964117631_MetadataUsageId;
extern RuntimeClass* AnalyticsSessionState_t2896007416_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t2481500672_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t733662640_il2cpp_TypeInfo_var;
extern const uint32_t SessionStateChanged_BeginInvoke_m4178930501_MetadataUsageId;
extern RuntimeClass* RemoteSettings_t3859832872_il2cpp_TypeInfo_var;
extern const uint32_t RemoteSettings_CallOnUpdate_m549372482_MetadataUsageId;

struct DelegateU5BU5D_t2205479154;


#ifndef U3CMODULEU3E_T2540223382_H
#define U3CMODULEU3E_T2540223382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2540223382 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2540223382_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef UNITYADSSETTINGS_T2034118282_H
#define UNITYADSSETTINGS_T2034118282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Advertisements.UnityAdsSettings
struct  UnityAdsSettings_t2034118282  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYADSSETTINGS_T2034118282_H
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
#ifndef REMOTESETTINGS_T3859832872_H
#define REMOTESETTINGS_T3859832872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t3859832872  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t3859832872_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t1872309114 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t3859832872_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t1872309114 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t1872309114 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t1872309114 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T3859832872_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ANALYTICSSESSIONINFO_T2531312542_H
#define ANALYTICSSESSIONINFO_T2531312542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionInfo
struct  AnalyticsSessionInfo_t2531312542  : public RuntimeObject
{
public:

public:
};

struct AnalyticsSessionInfo_t2531312542_StaticFields
{
public:
	// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_t1174343702 * ___sessionStateChanged_0;

public:
	inline static int32_t get_offset_of_sessionStateChanged_0() { return static_cast<int32_t>(offsetof(AnalyticsSessionInfo_t2531312542_StaticFields, ___sessionStateChanged_0)); }
	inline SessionStateChanged_t1174343702 * get_sessionStateChanged_0() const { return ___sessionStateChanged_0; }
	inline SessionStateChanged_t1174343702 ** get_address_of_sessionStateChanged_0() { return &___sessionStateChanged_0; }
	inline void set_sessionStateChanged_0(SessionStateChanged_t1174343702 * value)
	{
		___sessionStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___sessionStateChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANALYTICSSESSIONINFO_T2531312542_H
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
#ifndef INT64_T2481500672_H
#define INT64_T2481500672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t2481500672 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t2481500672, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T2481500672_H
#ifndef VOID_T634856565_H
#define VOID_T634856565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t634856565 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t634856565__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T634856565_H
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
#ifndef ANALYTICSSESSIONSTATE_T2896007416_H
#define ANALYTICSSESSIONSTATE_T2896007416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionState
struct  AnalyticsSessionState_t2896007416 
{
public:
	// System.Int32 UnityEngine.Analytics.AnalyticsSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnalyticsSessionState_t2896007416, ___value___2)); }
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
#endif // ANALYTICSSESSIONSTATE_T2896007416_H
#ifndef DELEGATE_T1297946403_H
#define DELEGATE_T1297946403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1297946403  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t2989019778 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___data_9)); }
	inline DelegateData_t2989019778 * get_data_9() const { return ___data_9; }
	inline DelegateData_t2989019778 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t2989019778 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1297946403, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1297946403_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t2989019778 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1297946403_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t2989019778 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1297946403_H
#ifndef RUNTIMEPLATFORM_T3952258013_H
#define RUNTIMEPLATFORM_T3952258013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t3952258013 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_t3952258013, ___value___2)); }
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
#endif // RUNTIMEPLATFORM_T3952258013_H
#ifndef MULTICASTDELEGATE_T2311580730_H
#define MULTICASTDELEGATE_T2311580730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2311580730  : public Delegate_t1297946403
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t2205479154* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2311580730, ___delegates_11)); }
	inline DelegateU5BU5D_t2205479154* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t2205479154** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t2205479154* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t2311580730_marshaled_pinvoke : public Delegate_t1297946403_marshaled_pinvoke
{
	DelegateU5BU5D_t2205479154* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t2311580730_marshaled_com : public Delegate_t1297946403_marshaled_com
{
	DelegateU5BU5D_t2205479154* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T2311580730_H
#ifndef SESSIONSTATECHANGED_T1174343702_H
#define SESSIONSTATECHANGED_T1174343702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct  SessionStateChanged_t1174343702  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONSTATECHANGED_T1174343702_H
#ifndef ASYNCCALLBACK_T1548115960_H
#define ASYNCCALLBACK_T1548115960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t1548115960  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T1548115960_H
#ifndef UPDATEDEVENTHANDLER_T1872309114_H
#define UPDATEDEVENTHANDLER_T1872309114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t1872309114  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T1872309114_H
// System.Delegate[]
struct DelegateU5BU5D_t2205479154  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1297946403 * m_Items[1];

public:
	inline Delegate_t1297946403 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1297946403 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1297946403 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1297946403 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1297946403 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1297946403 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C"  void SessionStateChanged_Invoke_m3959524707 (SessionStateChanged_t1174343702 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
extern "C"  void UpdatedEventHandler_Invoke_m3447530983 (UpdatedEventHandler_t1872309114 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_enabled()
extern "C"  bool UnityAdsSettings_get_enabled_m2369579470 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*UnityAdsSettings_get_enabled_m2369579470_ftn) ();
	static UnityAdsSettings_get_enabled_m2369579470_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsSettings_get_enabled_m2369579470_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsSettings::get_enabled()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_initializeOnStartup()
extern "C"  bool UnityAdsSettings_get_initializeOnStartup_m2736315905 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*UnityAdsSettings_get_initializeOnStartup_m2736315905_ftn) ();
	static UnityAdsSettings_get_initializeOnStartup_m2736315905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsSettings_get_initializeOnStartup_m2736315905_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsSettings::get_initializeOnStartup()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_testMode()
extern "C"  bool UnityAdsSettings_get_testMode_m2478746836 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*UnityAdsSettings_get_testMode_m2478746836_ftn) ();
	static UnityAdsSettings_get_testMode_m2478746836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsSettings_get_testMode_m2478746836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsSettings::get_testMode()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.String UnityEngine.Advertisements.UnityAdsSettings::GetGameId(UnityEngine.RuntimePlatform)
extern "C"  String_t* UnityAdsSettings_GetGameId_m2506899904 (RuntimeObject * __this /* static, unused */, int32_t ___platform0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityAdsSettings_GetGameId_m2506899904_ftn) (int32_t);
	static UnityAdsSettings_GetGameId_m2506899904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityAdsSettings_GetGameId_m2506899904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Advertisements.UnityAdsSettings::GetGameId(UnityEngine.RuntimePlatform)");
	String_t* retVal = _il2cpp_icall_func(___platform0);
	return retVal;
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C"  void AnalyticsSessionInfo_CallSessionStateChanged_m3964117631 (RuntimeObject * __this /* static, unused */, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnalyticsSessionInfo_CallSessionStateChanged_m3964117631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SessionStateChanged_t1174343702 * V_0 = NULL;
	{
		SessionStateChanged_t1174343702 * L_0 = ((AnalyticsSessionInfo_t2531312542_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_t2531312542_il2cpp_TypeInfo_var))->get_sessionStateChanged_0();
		V_0 = L_0;
		SessionStateChanged_t1174343702 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		SessionStateChanged_t1174343702 * L_2 = V_0;
		int32_t L_3 = ___sessionState0;
		int64_t L_4 = ___sessionId1;
		int64_t L_5 = ___sessionElapsedTime2;
		bool L_6 = ___sessionChanged3;
		NullCheck(L_2);
		SessionStateChanged_Invoke_m3959524707(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
extern "C"  void DelegatePInvokeWrapper_SessionStateChanged_t1174343702 (SessionStateChanged_t1174343702 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___sessionState0, ___sessionId1, ___sessionElapsedTime2, static_cast<int32_t>(___sessionChanged3));

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr)
extern "C"  void SessionStateChanged__ctor_m1730416986 (SessionStateChanged_t1174343702 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
extern "C"  void SessionStateChanged_Invoke_m3959524707 (SessionStateChanged_t1174343702 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t2205479154* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1297946403* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if (currentDelegate->get_m_target_2() != NULL && ___methodIsStatic)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef void (*FunctionPointerType) (void* __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef void (*FunctionPointerType) (void* __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___sessionState0, ___sessionId1, ___sessionElapsedTime2, ___sessionChanged3,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* SessionStateChanged_BeginInvoke_m4178930501 (SessionStateChanged_t1174343702 * __this, int32_t ___sessionState0, int64_t ___sessionId1, int64_t ___sessionElapsedTime2, bool ___sessionChanged3, AsyncCallback_t1548115960 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionStateChanged_BeginInvoke_m4178930501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(AnalyticsSessionState_t2896007416_il2cpp_TypeInfo_var, &___sessionState0);
	__d_args[1] = Box(Int64_t2481500672_il2cpp_TypeInfo_var, &___sessionId1);
	__d_args[2] = Box(Int64_t2481500672_il2cpp_TypeInfo_var, &___sessionElapsedTime2);
	__d_args[3] = Box(Boolean_t733662640_il2cpp_TypeInfo_var, &___sessionChanged3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::EndInvoke(System.IAsyncResult)
extern "C"  void SessionStateChanged_EndInvoke_m1407842555 (SessionStateChanged_t1174343702 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.RemoteSettings::CallOnUpdate()
extern "C"  void RemoteSettings_CallOnUpdate_m549372482 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RemoteSettings_CallOnUpdate_m549372482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_t1872309114 * V_0 = NULL;
	{
		UpdatedEventHandler_t1872309114 * L_0 = ((RemoteSettings_t3859832872_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t3859832872_il2cpp_TypeInfo_var))->get_Updated_0();
		V_0 = L_0;
		UpdatedEventHandler_t1872309114 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		UpdatedEventHandler_t1872309114 * L_2 = V_0;
		NullCheck(L_2);
		UpdatedEventHandler_Invoke_m3447530983(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		return;
	}
}
extern "C"  void DelegatePInvokeWrapper_UpdatedEventHandler_t1872309114 (UpdatedEventHandler_t1872309114 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UpdatedEventHandler__ctor_m2195736969 (UpdatedEventHandler_t1872309114 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
extern "C"  void UpdatedEventHandler_Invoke_m3447530983 (UpdatedEventHandler_t1872309114 * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t2205479154* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1297946403* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if ((currentDelegate->get_m_target_2() != NULL || MethodHasParameters((RuntimeMethod*)(currentDelegate->get_method_3()))) && ___methodIsStatic)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef void (*FunctionPointerType) (void* __this, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if ((__this->get_m_target_2() != NULL || MethodHasParameters((RuntimeMethod*)(__this->get_method_3()))) && ___methodIsStatic)
		{
			typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef void (*FunctionPointerType) (void* __this, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult UnityEngine.RemoteSettings/UpdatedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UpdatedEventHandler_BeginInvoke_m1977458196 (UpdatedEventHandler_t1872309114 * __this, AsyncCallback_t1548115960 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UpdatedEventHandler_EndInvoke_m3009333867 (UpdatedEventHandler_t1872309114 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
