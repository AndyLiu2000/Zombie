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

// UnityEngine.Purchasing.Default.IWindowsIAP
struct IWindowsIAP_t3139416794;
// System.NotImplementedException
struct NotImplementedException_t2744842537;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_t768169554;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2209762685;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3559648024;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t3791304912;
// System.IntPtr[]
struct IntPtrU5BU5D_t3595384210;
// System.UInt32[]
struct UInt32U5BU5D_t1965307802;

extern RuntimeClass* NotImplementedException_t2744842537_il2cpp_TypeInfo_var;
extern const uint32_t Factory_Create_m398916348_MetadataUsageId;
struct Exception_t4083038797_marshaled_pinvoke;
struct Exception_t4083038797_marshaled_com;



#ifndef U3CMODULEU3E_T2540223398_H
#define U3CMODULEU3E_T2540223398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2540223398 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2540223398_H
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
#ifndef FACTORY_T1205217627_H
#define FACTORY_T1205217627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Default.Factory
struct  Factory_t1205217627  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORY_T1205217627_H
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
#ifndef DECIMAL_T2198627819_H
#define DECIMAL_T2198627819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2198627819 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2198627819, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2198627819, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2198627819, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2198627819, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2198627819_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t1965307802* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2198627819  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2198627819  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2198627819  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2198627819  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2198627819  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2198627819  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2198627819  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2198627819_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t1965307802* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t1965307802** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t1965307802* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2198627819_StaticFields, ___Zero_7)); }
	inline Decimal_t2198627819  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2198627819 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2198627819  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2198627819_StaticFields, ___One_8)); }
	inline Decimal_t2198627819  get_One_8() const { return ___One_8; }
	inline Decimal_t2198627819 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2198627819  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2198627819_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2198627819  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2198627819 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2198627819  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2198627819_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2198627819  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2198627819 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2198627819  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2198627819_StaticFields, ___MinValue_11)); }
	inline Decimal_t2198627819  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2198627819 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2198627819  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2198627819_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2198627819  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2198627819 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2198627819  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2198627819_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2198627819  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2198627819 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2198627819  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2198627819_H
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
#ifndef NOTIMPLEMENTEDEXCEPTION_T2744842537_H
#define NOTIMPLEMENTEDEXCEPTION_T2744842537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t2744842537  : public SystemException_t1971328175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T2744842537_H
#ifndef WINPRODUCTDESCRIPTION_T768169554_H
#define WINPRODUCTDESCRIPTION_T768169554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Default.WinProductDescription
struct  WinProductDescription_t768169554  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_t2198627819  ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CplatformSpecificIDU3Ek__BackingField_0)); }
	inline String_t* get_U3CplatformSpecificIDU3Ek__BackingField_0() const { return ___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CplatformSpecificIDU3Ek__BackingField_0() { return &___U3CplatformSpecificIDU3Ek__BackingField_0; }
	inline void set_U3CplatformSpecificIDU3Ek__BackingField_0(String_t* value)
	{
		___U3CplatformSpecificIDU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CplatformSpecificIDU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CpriceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CpriceU3Ek__BackingField_1)); }
	inline String_t* get_U3CpriceU3Ek__BackingField_1() const { return ___U3CpriceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpriceU3Ek__BackingField_1() { return &___U3CpriceU3Ek__BackingField_1; }
	inline void set_U3CpriceU3Ek__BackingField_1(String_t* value)
	{
		___U3CpriceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpriceU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CtitleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CtitleU3Ek__BackingField_2)); }
	inline String_t* get_U3CtitleU3Ek__BackingField_2() const { return ___U3CtitleU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CtitleU3Ek__BackingField_2() { return &___U3CtitleU3Ek__BackingField_2; }
	inline void set_U3CtitleU3Ek__BackingField_2(String_t* value)
	{
		___U3CtitleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtitleU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CdescriptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CdescriptionU3Ek__BackingField_3)); }
	inline String_t* get_U3CdescriptionU3Ek__BackingField_3() const { return ___U3CdescriptionU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CdescriptionU3Ek__BackingField_3() { return &___U3CdescriptionU3Ek__BackingField_3; }
	inline void set_U3CdescriptionU3Ek__BackingField_3(String_t* value)
	{
		___U3CdescriptionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdescriptionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CISOCurrencyCodeU3Ek__BackingField_4)); }
	inline String_t* get_U3CISOCurrencyCodeU3Ek__BackingField_4() const { return ___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CISOCurrencyCodeU3Ek__BackingField_4() { return &___U3CISOCurrencyCodeU3Ek__BackingField_4; }
	inline void set_U3CISOCurrencyCodeU3Ek__BackingField_4(String_t* value)
	{
		___U3CISOCurrencyCodeU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CISOCurrencyCodeU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CpriceDecimalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CpriceDecimalU3Ek__BackingField_5)); }
	inline Decimal_t2198627819  get_U3CpriceDecimalU3Ek__BackingField_5() const { return ___U3CpriceDecimalU3Ek__BackingField_5; }
	inline Decimal_t2198627819 * get_address_of_U3CpriceDecimalU3Ek__BackingField_5() { return &___U3CpriceDecimalU3Ek__BackingField_5; }
	inline void set_U3CpriceDecimalU3Ek__BackingField_5(Decimal_t2198627819  value)
	{
		___U3CpriceDecimalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CreceiptU3Ek__BackingField_6)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_6() const { return ___U3CreceiptU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_6() { return &___U3CreceiptU3Ek__BackingField_6; }
	inline void set_U3CreceiptU3Ek__BackingField_6(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreceiptU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CtransactionIDU3Ek__BackingField_7)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_7() const { return ___U3CtransactionIDU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_7() { return &___U3CtransactionIDU3Ek__BackingField_7; }
	inline void set_U3CtransactionIDU3Ek__BackingField_7(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransactionIDU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CconsumableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WinProductDescription_t768169554, ___U3CconsumableU3Ek__BackingField_8)); }
	inline bool get_U3CconsumableU3Ek__BackingField_8() const { return ___U3CconsumableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CconsumableU3Ek__BackingField_8() { return &___U3CconsumableU3Ek__BackingField_8; }
	inline void set_U3CconsumableU3Ek__BackingField_8(bool value)
	{
		___U3CconsumableU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINPRODUCTDESCRIPTION_T768169554_H



// System.Void System.NotImplementedException::.ctor()
extern "C"  void NotImplementedException__ctor_m1117708356 (NotImplementedException_t2744842537 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m1187941580 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
extern "C"  void WinProductDescription_set_platformSpecificID_m169383528 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
extern "C"  void WinProductDescription_set_price_m4022414277 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
extern "C"  void WinProductDescription_set_title_m1300140447 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
extern "C"  void WinProductDescription_set_description_m2894071641 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
extern "C"  void WinProductDescription_set_ISOCurrencyCode_m4291433258 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
extern "C"  void WinProductDescription_set_priceDecimal_m769556608 (WinProductDescription_t768169554 * __this, Decimal_t2198627819  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
extern "C"  void WinProductDescription_set_receipt_m3045054739 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
extern "C"  void WinProductDescription_set_transactionID_m89784865 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
extern "C"  void WinProductDescription_set_consumable_m2720621830 (WinProductDescription_t768169554 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Purchasing.Default.IWindowsIAP UnityEngine.Purchasing.Default.Factory::Create(System.Boolean)
extern "C"  RuntimeObject* Factory_Create_m398916348 (RuntimeObject * __this /* static, unused */, bool ___mocked0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Factory_Create_m398916348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t2744842537 * L_0 = (NotImplementedException_t2744842537 *)il2cpp_codegen_object_new(NotImplementedException_t2744842537_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m1117708356(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
extern "C"  void WinProductDescription_set_platformSpecificID_m169383528 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CplatformSpecificIDU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
extern "C"  void WinProductDescription_set_price_m4022414277 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpriceU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
extern "C"  void WinProductDescription_set_title_m1300140447 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtitleU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
extern "C"  void WinProductDescription_set_description_m2894071641 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CdescriptionU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
extern "C"  void WinProductDescription_set_ISOCurrencyCode_m4291433258 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CISOCurrencyCodeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
extern "C"  void WinProductDescription_set_priceDecimal_m769556608 (WinProductDescription_t768169554 * __this, Decimal_t2198627819  ___value0, const RuntimeMethod* method)
{
	{
		Decimal_t2198627819  L_0 = ___value0;
		__this->set_U3CpriceDecimalU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
extern "C"  void WinProductDescription_set_receipt_m3045054739 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CreceiptU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
extern "C"  void WinProductDescription_set_transactionID_m89784865 (WinProductDescription_t768169554 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CtransactionIDU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
extern "C"  void WinProductDescription_set_consumable_m2720621830 (WinProductDescription_t768169554 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CconsumableU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
extern "C"  void WinProductDescription__ctor_m3169656172 (WinProductDescription_t768169554 * __this, String_t* ___id0, String_t* ___price1, String_t* ___title2, String_t* ___description3, String_t* ___isoCode4, Decimal_t2198627819  ___priceD5, String_t* ___receipt6, String_t* ___transactionId7, bool ___consumable8, const RuntimeMethod* method)
{
	{
		Object__ctor_m1187941580(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		WinProductDescription_set_platformSpecificID_m169383528(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___price1;
		WinProductDescription_set_price_m4022414277(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___title2;
		WinProductDescription_set_title_m1300140447(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___description3;
		WinProductDescription_set_description_m2894071641(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___isoCode4;
		WinProductDescription_set_ISOCurrencyCode_m4291433258(__this, L_4, /*hidden argument*/NULL);
		Decimal_t2198627819  L_5 = ___priceD5;
		WinProductDescription_set_priceDecimal_m769556608(__this, L_5, /*hidden argument*/NULL);
		String_t* L_6 = ___receipt6;
		WinProductDescription_set_receipt_m3045054739(__this, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___transactionId7;
		WinProductDescription_set_transactionID_m89784865(__this, L_7, /*hidden argument*/NULL);
		bool L_8 = ___consumable8;
		WinProductDescription_set_consumable_m2720621830(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
