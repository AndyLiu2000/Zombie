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

// UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t1567265183;
// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback
struct NativeDeviceDiscoveredCallback_t1713483826;
// System.Delegate
struct Delegate_t1297946403;
// System.IAsyncResult
struct IAsyncResult_t1336778382;
// System.AsyncCallback
struct AsyncCallback_t1548115960;
// UnityEngineInternal.Input.NativeEventCallback
struct NativeEventCallback_t798791795;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_t1178173735;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1313538844;
// System.Void
struct Void_t634856565;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2989019778;
// System.Delegate[]
struct DelegateU5BU5D_t2205479154;

struct NativeInputDeviceInfo_t1567265183_marshaled_pinvoke;
struct NativeInputDeviceInfo_t1567265183;;
struct NativeInputDeviceInfo_t1567265183_marshaled_pinvoke;;
extern RuntimeClass* NativeInputDeviceInfo_t1567265183_il2cpp_TypeInfo_var;
extern const uint32_t NativeDeviceDiscoveredCallback_BeginInvoke_m2824634398_MetadataUsageId;
extern RuntimeClass* Int32_t825053868_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t NativeEventCallback_BeginInvoke_m213184328_MetadataUsageId;
extern RuntimeClass* NativeInputSystem_t245360496_il2cpp_TypeInfo_var;
extern const uint32_t NativeInputSystem_NotifyUpdate_m3677602781_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyEvents_m663091231_MetadataUsageId;
extern const uint32_t NativeInputSystem_HasDeviceDiscoveredHandler_m1367285783_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyDeviceDiscovered_m2717597304_MetadataUsageId;
extern RuntimeClass* NativeInputUpdateType_t1522259318_il2cpp_TypeInfo_var;
extern const uint32_t NativeUpdateCallback_BeginInvoke_m3822415293_MetadataUsageId;

struct DelegateU5BU5D_t2205479154;


#ifndef U3CMODULEU3E_T2540223376_H
#define U3CMODULEU3E_T2540223376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2540223376 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2540223376_H
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
#ifndef NATIVEINPUTSYSTEM_T245360496_H
#define NATIVEINPUTSYSTEM_T245360496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputSystem
struct  NativeInputSystem_t245360496  : public RuntimeObject
{
public:

public:
};

struct NativeInputSystem_t245360496_StaticFields
{
public:
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_t1178173735 * ___onUpdate_0;
	// UnityEngineInternal.Input.NativeEventCallback UnityEngineInternal.Input.NativeInputSystem::onEvents
	NativeEventCallback_t798791795 * ___onEvents_1;
	// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback UnityEngineInternal.Input.NativeInputSystem::onDeviceDiscovered
	NativeDeviceDiscoveredCallback_t1713483826 * ___onDeviceDiscovered_2;

public:
	inline static int32_t get_offset_of_onUpdate_0() { return static_cast<int32_t>(offsetof(NativeInputSystem_t245360496_StaticFields, ___onUpdate_0)); }
	inline NativeUpdateCallback_t1178173735 * get_onUpdate_0() const { return ___onUpdate_0; }
	inline NativeUpdateCallback_t1178173735 ** get_address_of_onUpdate_0() { return &___onUpdate_0; }
	inline void set_onUpdate_0(NativeUpdateCallback_t1178173735 * value)
	{
		___onUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdate_0), value);
	}

	inline static int32_t get_offset_of_onEvents_1() { return static_cast<int32_t>(offsetof(NativeInputSystem_t245360496_StaticFields, ___onEvents_1)); }
	inline NativeEventCallback_t798791795 * get_onEvents_1() const { return ___onEvents_1; }
	inline NativeEventCallback_t798791795 ** get_address_of_onEvents_1() { return &___onEvents_1; }
	inline void set_onEvents_1(NativeEventCallback_t798791795 * value)
	{
		___onEvents_1 = value;
		Il2CppCodeGenWriteBarrier((&___onEvents_1), value);
	}

	inline static int32_t get_offset_of_onDeviceDiscovered_2() { return static_cast<int32_t>(offsetof(NativeInputSystem_t245360496_StaticFields, ___onDeviceDiscovered_2)); }
	inline NativeDeviceDiscoveredCallback_t1713483826 * get_onDeviceDiscovered_2() const { return ___onDeviceDiscovered_2; }
	inline NativeDeviceDiscoveredCallback_t1713483826 ** get_address_of_onDeviceDiscovered_2() { return &___onDeviceDiscovered_2; }
	inline void set_onDeviceDiscovered_2(NativeDeviceDiscoveredCallback_t1713483826 * value)
	{
		___onDeviceDiscovered_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeviceDiscovered_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINPUTSYSTEM_T245360496_H
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
#ifndef INT32_T825053868_H
#define INT32_T825053868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t825053868 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t825053868, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T825053868_H
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
#ifndef NATIVEINPUTDEVICEINFO_T1567265183_H
#define NATIVEINPUTDEVICEINFO_T1567265183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputDeviceInfo
struct  NativeInputDeviceInfo_t1567265183 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputDeviceInfo::deviceId
	int32_t ___deviceId_0;
	// System.String UnityEngineInternal.Input.NativeInputDeviceInfo::deviceDescriptor
	String_t* ___deviceDescriptor_1;

public:
	inline static int32_t get_offset_of_deviceId_0() { return static_cast<int32_t>(offsetof(NativeInputDeviceInfo_t1567265183, ___deviceId_0)); }
	inline int32_t get_deviceId_0() const { return ___deviceId_0; }
	inline int32_t* get_address_of_deviceId_0() { return &___deviceId_0; }
	inline void set_deviceId_0(int32_t value)
	{
		___deviceId_0 = value;
	}

	inline static int32_t get_offset_of_deviceDescriptor_1() { return static_cast<int32_t>(offsetof(NativeInputDeviceInfo_t1567265183, ___deviceDescriptor_1)); }
	inline String_t* get_deviceDescriptor_1() const { return ___deviceDescriptor_1; }
	inline String_t** get_address_of_deviceDescriptor_1() { return &___deviceDescriptor_1; }
	inline void set_deviceDescriptor_1(String_t* value)
	{
		___deviceDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___deviceDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t1567265183_marshaled_pinvoke
{
	int32_t ___deviceId_0;
	char* ___deviceDescriptor_1;
};
// Native definition for COM marshalling of UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t1567265183_marshaled_com
{
	int32_t ___deviceId_0;
	Il2CppChar* ___deviceDescriptor_1;
};
#endif // NATIVEINPUTDEVICEINFO_T1567265183_H
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
#ifndef NATIVEINPUTUPDATETYPE_T1522259318_H
#define NATIVEINPUTUPDATETYPE_T1522259318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputUpdateType
struct  NativeInputUpdateType_t1522259318 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeInputUpdateType_t1522259318, ___value___2)); }
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
#endif // NATIVEINPUTUPDATETYPE_T1522259318_H
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
#ifndef NATIVEUPDATECALLBACK_T1178173735_H
#define NATIVEUPDATECALLBACK_T1178173735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeUpdateCallback
struct  NativeUpdateCallback_t1178173735  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEUPDATECALLBACK_T1178173735_H
#ifndef NATIVEDEVICEDISCOVEREDCALLBACK_T1713483826_H
#define NATIVEDEVICEDISCOVEREDCALLBACK_T1713483826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback
struct  NativeDeviceDiscoveredCallback_t1713483826  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDEVICEDISCOVEREDCALLBACK_T1713483826_H
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
#ifndef NATIVEEVENTCALLBACK_T798791795_H
#define NATIVEEVENTCALLBACK_T798791795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeEventCallback
struct  NativeEventCallback_t798791795  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEVENTCALLBACK_T798791795_H
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

extern "C" void NativeInputDeviceInfo_t1567265183_marshal_pinvoke(const NativeInputDeviceInfo_t1567265183& unmarshaled, NativeInputDeviceInfo_t1567265183_marshaled_pinvoke& marshaled);
extern "C" void NativeInputDeviceInfo_t1567265183_marshal_pinvoke_back(const NativeInputDeviceInfo_t1567265183_marshaled_pinvoke& marshaled, NativeInputDeviceInfo_t1567265183& unmarshaled);
extern "C" void NativeInputDeviceInfo_t1567265183_marshal_pinvoke_cleanup(NativeInputDeviceInfo_t1567265183_marshaled_pinvoke& marshaled);


// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C"  void NativeUpdateCallback_Invoke_m2314333480 (NativeUpdateCallback_t1178173735 * __this, int32_t ___updateType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngineInternal.Input.NativeEventCallback::Invoke(System.Int32,System.IntPtr)
extern "C"  void NativeEventCallback_Invoke_m591414903 (NativeEventCallback_t798791795 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::Invoke(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C"  void NativeDeviceDiscoveredCallback_Invoke_m3563158703 (NativeDeviceDiscoveredCallback_t1713483826 * __this, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NativeDeviceDiscoveredCallback_t1713483826 (NativeDeviceDiscoveredCallback_t1713483826 * __this, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, const RuntimeMethod* method)
{


	typedef void (STDCALL *PInvokeFunc)(NativeInputDeviceInfo_t1567265183_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___deviceInfo0' to native representation
	NativeInputDeviceInfo_t1567265183_marshaled_pinvoke ____deviceInfo0_marshaled = {};
	NativeInputDeviceInfo_t1567265183_marshal_pinvoke(___deviceInfo0, ____deviceInfo0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____deviceInfo0_marshaled);

	// Marshaling cleanup of parameter '___deviceInfo0' native representation
	NativeInputDeviceInfo_t1567265183_marshal_pinvoke_cleanup(____deviceInfo0_marshaled);

}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void NativeDeviceDiscoveredCallback__ctor_m4034515291 (NativeDeviceDiscoveredCallback_t1713483826 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::Invoke(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C"  void NativeDeviceDiscoveredCallback_Invoke_m3563158703 (NativeDeviceDiscoveredCallback_t1713483826 * __this, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___deviceInfo0,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef void (*FunctionPointerType) (void* __this, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___deviceInfo0,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___deviceInfo0,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef void (*FunctionPointerType) (void* __this, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___deviceInfo0,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputDeviceInfo,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* NativeDeviceDiscoveredCallback_BeginInvoke_m2824634398 (NativeDeviceDiscoveredCallback_t1713483826 * __this, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, AsyncCallback_t1548115960 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeDeviceDiscoveredCallback_BeginInvoke_m2824634398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(NativeInputDeviceInfo_t1567265183_il2cpp_TypeInfo_var, &___deviceInfo0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::EndInvoke(System.IAsyncResult)
extern "C"  void NativeDeviceDiscoveredCallback_EndInvoke_m3307998730 (NativeDeviceDiscoveredCallback_t1713483826 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
extern "C"  void DelegatePInvokeWrapper_NativeEventCallback_t798791795 (NativeEventCallback_t798791795 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___eventCount0, ___eventData1);

}
// System.Void UnityEngineInternal.Input.NativeEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void NativeEventCallback__ctor_m2046822326 (NativeEventCallback_t798791795 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeEventCallback::Invoke(System.Int32,System.IntPtr)
extern "C"  void NativeEventCallback_Invoke_m591414903 (NativeEventCallback_t798791795 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___eventCount0, ___eventData1,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef void (*FunctionPointerType) (void* __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___eventCount0, ___eventData1,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___eventCount0, ___eventData1,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef void (*FunctionPointerType) (void* __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___eventCount0, ___eventData1,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeEventCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* NativeEventCallback_BeginInvoke_m213184328 (NativeEventCallback_t798791795 * __this, int32_t ___eventCount0, intptr_t ___eventData1, AsyncCallback_t1548115960 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeEventCallback_BeginInvoke_m213184328_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t825053868_il2cpp_TypeInfo_var, &___eventCount0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___eventData1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngineInternal.Input.NativeEventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void NativeEventCallback_EndInvoke_m4208654261 (NativeEventCallback_t798791795 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// Conversion methods for marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t1567265183_marshal_pinvoke(const NativeInputDeviceInfo_t1567265183& unmarshaled, NativeInputDeviceInfo_t1567265183_marshaled_pinvoke& marshaled)
{
	marshaled.___deviceId_0 = unmarshaled.get_deviceId_0();
	marshaled.___deviceDescriptor_1 = il2cpp_codegen_marshal_string(unmarshaled.get_deviceDescriptor_1());
}
extern "C" void NativeInputDeviceInfo_t1567265183_marshal_pinvoke_back(const NativeInputDeviceInfo_t1567265183_marshaled_pinvoke& marshaled, NativeInputDeviceInfo_t1567265183& unmarshaled)
{
	int32_t unmarshaled_deviceId_temp_0 = 0;
	unmarshaled_deviceId_temp_0 = marshaled.___deviceId_0;
	unmarshaled.set_deviceId_0(unmarshaled_deviceId_temp_0);
	unmarshaled.set_deviceDescriptor_1(il2cpp_codegen_marshal_string_result(marshaled.___deviceDescriptor_1));
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t1567265183_marshal_pinvoke_cleanup(NativeInputDeviceInfo_t1567265183_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___deviceDescriptor_1);
	marshaled.___deviceDescriptor_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t1567265183_marshal_com(const NativeInputDeviceInfo_t1567265183& unmarshaled, NativeInputDeviceInfo_t1567265183_marshaled_com& marshaled)
{
	marshaled.___deviceId_0 = unmarshaled.get_deviceId_0();
	marshaled.___deviceDescriptor_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_deviceDescriptor_1());
}
extern "C" void NativeInputDeviceInfo_t1567265183_marshal_com_back(const NativeInputDeviceInfo_t1567265183_marshaled_com& marshaled, NativeInputDeviceInfo_t1567265183& unmarshaled)
{
	int32_t unmarshaled_deviceId_temp_0 = 0;
	unmarshaled_deviceId_temp_0 = marshaled.___deviceId_0;
	unmarshaled.set_deviceId_0(unmarshaled_deviceId_temp_0);
	unmarshaled.set_deviceDescriptor_1(il2cpp_codegen_marshal_bstring_result(marshaled.___deviceDescriptor_1));
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t1567265183_marshal_com_cleanup(NativeInputDeviceInfo_t1567265183_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceDescriptor_1);
	marshaled.___deviceDescriptor_1 = NULL;
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C"  void NativeInputSystem_NotifyUpdate_m3677602781 (RuntimeObject * __this /* static, unused */, int32_t ___updateType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyUpdate_m3677602781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeUpdateCallback_t1178173735 * V_0 = NULL;
	{
		NativeUpdateCallback_t1178173735 * L_0 = ((NativeInputSystem_t245360496_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t245360496_il2cpp_TypeInfo_var))->get_onUpdate_0();
		V_0 = L_0;
		NativeUpdateCallback_t1178173735 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NativeUpdateCallback_t1178173735 * L_2 = V_0;
		int32_t L_3 = ___updateType0;
		NullCheck(L_2);
		NativeUpdateCallback_Invoke_m2314333480(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyEvents(System.Int32,System.IntPtr)
extern "C"  void NativeInputSystem_NotifyEvents_m663091231 (RuntimeObject * __this /* static, unused */, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyEvents_m663091231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeEventCallback_t798791795 * V_0 = NULL;
	{
		NativeEventCallback_t798791795 * L_0 = ((NativeInputSystem_t245360496_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t245360496_il2cpp_TypeInfo_var))->get_onEvents_1();
		V_0 = L_0;
		NativeEventCallback_t798791795 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		NativeEventCallback_t798791795 * L_2 = V_0;
		int32_t L_3 = ___eventCount0;
		intptr_t L_4 = ___eventData1;
		NullCheck(L_2);
		NativeEventCallback_Invoke_m591414903(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngineInternal.Input.NativeInputSystem::HasDeviceDiscoveredHandler()
extern "C"  bool NativeInputSystem_HasDeviceDiscoveredHandler_m1367285783 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_HasDeviceDiscoveredHandler_m1367285783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NativeDeviceDiscoveredCallback_t1713483826 * L_0 = ((NativeInputSystem_t245360496_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t245360496_il2cpp_TypeInfo_var))->get_onDeviceDiscovered_2();
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(NativeDeviceDiscoveredCallback_t1713483826 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C"  void NativeInputSystem_NotifyDeviceDiscovered_m2717597304 (RuntimeObject * __this /* static, unused */, NativeInputDeviceInfo_t1567265183  ___deviceInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyDeviceDiscovered_m2717597304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeDeviceDiscoveredCallback_t1713483826 * V_0 = NULL;
	{
		NativeDeviceDiscoveredCallback_t1713483826 * L_0 = ((NativeInputSystem_t245360496_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t245360496_il2cpp_TypeInfo_var))->get_onDeviceDiscovered_2();
		V_0 = L_0;
		NativeDeviceDiscoveredCallback_t1713483826 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NativeDeviceDiscoveredCallback_t1713483826 * L_2 = V_0;
		NativeInputDeviceInfo_t1567265183  L_3 = ___deviceInfo0;
		NullCheck(L_2);
		NativeDeviceDiscoveredCallback_Invoke_m3563158703(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
extern "C"  void DelegatePInvokeWrapper_NativeUpdateCallback_t1178173735 (NativeUpdateCallback_t1178173735 * __this, int32_t ___updateType0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___updateType0);

}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void NativeUpdateCallback__ctor_m4030223616 (NativeUpdateCallback_t1178173735 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C"  void NativeUpdateCallback_Invoke_m2314333480 (NativeUpdateCallback_t1178173735 * __this, int32_t ___updateType0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___updateType0, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),___updateType0,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef void (*FunctionPointerType) (void* __this, int32_t ___updateType0, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),___updateType0,(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if (__this->get_m_target_2() != NULL && ___methodIsStatic)
		{
			typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___updateType0, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___updateType0,(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef void (*FunctionPointerType) (void* __this, int32_t ___updateType0, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___updateType0,(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* NativeUpdateCallback_BeginInvoke_m3822415293 (NativeUpdateCallback_t1178173735 * __this, int32_t ___updateType0, AsyncCallback_t1548115960 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeUpdateCallback_BeginInvoke_m3822415293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(NativeInputUpdateType_t1522259318_il2cpp_TypeInfo_var, &___updateType0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult)
extern "C"  void NativeUpdateCallback_EndInvoke_m537267136 (NativeUpdateCallback_t1178173735 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
