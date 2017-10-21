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
// System.Collections.IDictionary
struct IDictionary_t3780516851;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3445273258;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4209346658;
// System.IntPtr[]
struct IntPtrU5BU5D_t1109855381;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t4002990535;
// System.Threading.Tasks.Task`1<System.Int32>[]
struct Task_1U5BU5D_t1114609123;
// System.Threading.ExecutionContext
struct ExecutionContext_t2609790885;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t2385726729;
// System.Threading.ContextCallback
struct ContextCallback_t1616362368;
// System.Action
struct Action_t3138395238;
// System.Threading.Tasks.Task
struct Task_t3918363517;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t668140974;
// System.Threading.WaitCallback
struct WaitCallback_t1198973129;
// System.Exception
struct Exception_t2541973588;
// System.UInt32[]
struct UInt32U5BU5D_t1508412189;
// System.Int32[]
struct Int32U5BU5D_t890136779;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1266854030;
// System.Void
struct Void_t996922892;
// System.Type
struct Type_t;
// System.Char[]
struct CharU5BU5D_t1307605391;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t2032105089;

struct Guid_t ;
struct Exception_t2541973588_marshaled_pinvoke;
struct Exception_t2541973588_marshaled_com;



// System.Runtime.InteropServices.WindowsRuntime.IRestrictedErrorInfo
struct NOVTABLE IRestrictedErrorInfo_t1597032266 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_U24__Stripped0_GetErrorDetails_m3363385839() = 0;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_U24__Stripped1_GetReference_m3537221449() = 0;
};
// System.Runtime.InteropServices.IErrorInfo
struct NOVTABLE IErrorInfo_t3543970310 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetGUID_m1888307833(Guid_t * ___pGuid0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetSource_m371997538(Il2CppChar** ___pBstrSource0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetDescription_m3691091906(Il2CppChar** ___pbstrDescription0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpFile_m1574470492(Il2CppChar** ___pBstrHelpFile0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpContext_m1491395482(uint32_t* ___pdwHelpContext0, int32_t* comReturnValue) = 0;
};
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
#ifndef EXCEPTION_T2541973588_H
#define EXCEPTION_T2541973588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2541973588  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t2541973588 * ____innerException_4;
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
	SafeSerializationManager_t3445273258 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4209346658* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t1109855381* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____innerException_4)); }
	inline Exception_t2541973588 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t2541973588 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t2541973588 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t3445273258 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t3445273258 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t3445273258 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4209346658* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4209346658** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4209346658* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t2541973588, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t1109855381* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t1109855381** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t1109855381* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t2541973588_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t2541973588_StaticFields, ___s_EDILock_0)); }
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
struct Exception_t2541973588_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t2541973588_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t3445273258 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4209346658* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t2541973588_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t2541973588_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t3445273258 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4209346658* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T2541973588_H
#ifndef UNSAFENATIVEMETHODS_T1052966748_H
#define UNSAFENATIVEMETHODS_T1052966748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.UnsafeNativeMethods
struct  UnsafeNativeMethods_t1052966748  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFENATIVEMETHODS_T1052966748_H
#ifndef RUNTIMEENVIRONMENT_T900854643_H
#define RUNTIMEENVIRONMENT_T900854643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.RuntimeEnvironment
struct  RuntimeEnvironment_t900854643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEENVIRONMENT_T900854643_H
#ifndef ASYNCTASKCACHE_T2656926898_H
#define ASYNCTASKCACHE_T2656926898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskCache
struct  AsyncTaskCache_t2656926898  : public RuntimeObject
{
public:

public:
};

struct AsyncTaskCache_t2656926898_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::TrueTask
	Task_1_t4002990535 * ___TrueTask_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::FalseTask
	Task_1_t4002990535 * ___FalseTask_1;
	// System.Threading.Tasks.Task`1<System.Int32>[] System.Runtime.CompilerServices.AsyncTaskCache::Int32Tasks
	Task_1U5BU5D_t1114609123* ___Int32Tasks_2;

public:
	inline static int32_t get_offset_of_TrueTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t2656926898_StaticFields, ___TrueTask_0)); }
	inline Task_1_t4002990535 * get_TrueTask_0() const { return ___TrueTask_0; }
	inline Task_1_t4002990535 ** get_address_of_TrueTask_0() { return &___TrueTask_0; }
	inline void set_TrueTask_0(Task_1_t4002990535 * value)
	{
		___TrueTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___TrueTask_0), value);
	}

	inline static int32_t get_offset_of_FalseTask_1() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t2656926898_StaticFields, ___FalseTask_1)); }
	inline Task_1_t4002990535 * get_FalseTask_1() const { return ___FalseTask_1; }
	inline Task_1_t4002990535 ** get_address_of_FalseTask_1() { return &___FalseTask_1; }
	inline void set_FalseTask_1(Task_1_t4002990535 * value)
	{
		___FalseTask_1 = value;
		Il2CppCodeGenWriteBarrier((&___FalseTask_1), value);
	}

	inline static int32_t get_offset_of_Int32Tasks_2() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t2656926898_StaticFields, ___Int32Tasks_2)); }
	inline Task_1U5BU5D_t1114609123* get_Int32Tasks_2() const { return ___Int32Tasks_2; }
	inline Task_1U5BU5D_t1114609123** get_address_of_Int32Tasks_2() { return &___Int32Tasks_2; }
	inline void set_Int32Tasks_2(Task_1U5BU5D_t1114609123* value)
	{
		___Int32Tasks_2 = value;
		Il2CppCodeGenWriteBarrier((&___Int32Tasks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKCACHE_T2656926898_H
#ifndef MOVENEXTRUNNER_T1335159762_H
#define MOVENEXTRUNNER_T1335159762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct  MoveNextRunner_t1335159762  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_context
	ExecutionContext_t2609790885 * ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;

public:
	inline static int32_t get_offset_of_m_context_0() { return static_cast<int32_t>(offsetof(MoveNextRunner_t1335159762, ___m_context_0)); }
	inline ExecutionContext_t2609790885 * get_m_context_0() const { return ___m_context_0; }
	inline ExecutionContext_t2609790885 ** get_address_of_m_context_0() { return &___m_context_0; }
	inline void set_m_context_0(ExecutionContext_t2609790885 * value)
	{
		___m_context_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_context_0), value);
	}

	inline static int32_t get_offset_of_m_stateMachine_1() { return static_cast<int32_t>(offsetof(MoveNextRunner_t1335159762, ___m_stateMachine_1)); }
	inline RuntimeObject* get_m_stateMachine_1() const { return ___m_stateMachine_1; }
	inline RuntimeObject** get_address_of_m_stateMachine_1() { return &___m_stateMachine_1; }
	inline void set_m_stateMachine_1(RuntimeObject* value)
	{
		___m_stateMachine_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_1), value);
	}
};

struct MoveNextRunner_t1335159762_StaticFields
{
public:
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::s_invokeMoveNext
	ContextCallback_t1616362368 * ___s_invokeMoveNext_2;

public:
	inline static int32_t get_offset_of_s_invokeMoveNext_2() { return static_cast<int32_t>(offsetof(MoveNextRunner_t1335159762_StaticFields, ___s_invokeMoveNext_2)); }
	inline ContextCallback_t1616362368 * get_s_invokeMoveNext_2() const { return ___s_invokeMoveNext_2; }
	inline ContextCallback_t1616362368 ** get_address_of_s_invokeMoveNext_2() { return &___s_invokeMoveNext_2; }
	inline void set_s_invokeMoveNext_2(ContextCallback_t1616362368 * value)
	{
		___s_invokeMoveNext_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_invokeMoveNext_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVENEXTRUNNER_T1335159762_H
#ifndef ERRORWRAPPER_T622423444_H
#define ERRORWRAPPER_T622423444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t622423444  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::m_ErrorCode
	int32_t ___m_ErrorCode_0;

public:
	inline static int32_t get_offset_of_m_ErrorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t622423444, ___m_ErrorCode_0)); }
	inline int32_t get_m_ErrorCode_0() const { return ___m_ErrorCode_0; }
	inline int32_t* get_address_of_m_ErrorCode_0() { return &___m_ErrorCode_0; }
	inline void set_m_ErrorCode_0(int32_t value)
	{
		___m_ErrorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T622423444_H
#ifndef CONTINUATIONWRAPPER_T2020231078_H
#define CONTINUATIONWRAPPER_T2020231078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper
struct  ContinuationWrapper_t2020231078  : public RuntimeObject
{
public:
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_continuation
	Action_t3138395238 * ___m_continuation_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_invokeAction
	Action_t3138395238 * ___m_invokeAction_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_innerTask
	Task_t3918363517 * ___m_innerTask_2;

public:
	inline static int32_t get_offset_of_m_continuation_0() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t2020231078, ___m_continuation_0)); }
	inline Action_t3138395238 * get_m_continuation_0() const { return ___m_continuation_0; }
	inline Action_t3138395238 ** get_address_of_m_continuation_0() { return &___m_continuation_0; }
	inline void set_m_continuation_0(Action_t3138395238 * value)
	{
		___m_continuation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuation_0), value);
	}

	inline static int32_t get_offset_of_m_invokeAction_1() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t2020231078, ___m_invokeAction_1)); }
	inline Action_t3138395238 * get_m_invokeAction_1() const { return ___m_invokeAction_1; }
	inline Action_t3138395238 ** get_address_of_m_invokeAction_1() { return &___m_invokeAction_1; }
	inline void set_m_invokeAction_1(Action_t3138395238 * value)
	{
		___m_invokeAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_invokeAction_1), value);
	}

	inline static int32_t get_offset_of_m_innerTask_2() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t2020231078, ___m_innerTask_2)); }
	inline Task_t3918363517 * get_m_innerTask_2() const { return ___m_innerTask_2; }
	inline Task_t3918363517 ** get_address_of_m_innerTask_2() { return &___m_innerTask_2; }
	inline void set_m_innerTask_2(Task_t3918363517 * value)
	{
		___m_innerTask_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerTask_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINUATIONWRAPPER_T2020231078_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_T1804221689_H
#define U3CU3EC__DISPLAYCLASS4_0_T1804221689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t1804221689  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::innerTask
	Task_t3918363517 * ___innerTask_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::continuation
	Action_t3138395238 * ___continuation_1;

public:
	inline static int32_t get_offset_of_innerTask_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t1804221689, ___innerTask_0)); }
	inline Task_t3918363517 * get_innerTask_0() const { return ___innerTask_0; }
	inline Task_t3918363517 ** get_address_of_innerTask_0() { return &___innerTask_0; }
	inline void set_innerTask_0(Task_t3918363517 * value)
	{
		___innerTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___innerTask_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t1804221689, ___continuation_1)); }
	inline Action_t3138395238 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t3138395238 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t3138395238 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_T1804221689_H
#ifndef U3CU3EC_T3956526107_H
#define U3CU3EC_T3956526107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c
struct  U3CU3Ec_t3956526107  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3956526107_StaticFields
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9
	U3CU3Ec_t3956526107 * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_0
	SendOrPostCallback_t668140974 * ___U3CU3E9__6_0_1;
	// System.Threading.WaitCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_1
	WaitCallback_t1198973129 * ___U3CU3E9__6_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3956526107_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3956526107 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3956526107 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3956526107 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3956526107_StaticFields, ___U3CU3E9__6_0_1)); }
	inline SendOrPostCallback_t668140974 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline SendOrPostCallback_t668140974 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(SendOrPostCallback_t668140974 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3956526107_StaticFields, ___U3CU3E9__6_1_2)); }
	inline WaitCallback_t1198973129 * get_U3CU3E9__6_1_2() const { return ___U3CU3E9__6_1_2; }
	inline WaitCallback_t1198973129 ** get_address_of_U3CU3E9__6_1_2() { return &___U3CU3E9__6_1_2; }
	inline void set_U3CU3E9__6_1_2(WaitCallback_t1198973129 * value)
	{
		___U3CU3E9__6_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3956526107_H
#ifndef JITHELPERS_T227929246_H
#define JITHELPERS_T227929246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t227929246  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JITHELPERS_T227929246_H
#ifndef ISVOLATILE_T3153218105_H
#define ISVOLATILE_T3153218105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t3153218105  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T3153218105_H
#ifndef RUNTIMEHELPERS_T3605637268_H
#define RUNTIMEHELPERS_T3605637268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t3605637268  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T3605637268_H
#ifndef MANAGEDERRORINFO_T1144983465_H
#define MANAGEDERRORINFO_T1144983465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ManagedErrorInfo
struct  ManagedErrorInfo_t1144983465  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.InteropServices.ManagedErrorInfo::m_Exception
	Exception_t2541973588 * ___m_Exception_0;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ManagedErrorInfo_t1144983465, ___m_Exception_0)); }
	inline Exception_t2541973588 * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t2541973588 ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t2541973588 * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exception_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDERRORINFO_T1144983465_H
#ifndef MARSHAL_T3962730765_H
#define MARSHAL_T3962730765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t3962730765  : public RuntimeObject
{
public:

public:
};

struct Marshal_t3962730765_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;
	// System.Boolean System.Runtime.InteropServices.Marshal::SetErrorInfoNotAvailable
	bool ___SetErrorInfoNotAvailable_2;
	// System.Boolean System.Runtime.InteropServices.Marshal::GetErrorInfoNotAvailable
	bool ___GetErrorInfoNotAvailable_3;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t3962730765_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t3962730765_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}

	inline static int32_t get_offset_of_SetErrorInfoNotAvailable_2() { return static_cast<int32_t>(offsetof(Marshal_t3962730765_StaticFields, ___SetErrorInfoNotAvailable_2)); }
	inline bool get_SetErrorInfoNotAvailable_2() const { return ___SetErrorInfoNotAvailable_2; }
	inline bool* get_address_of_SetErrorInfoNotAvailable_2() { return &___SetErrorInfoNotAvailable_2; }
	inline void set_SetErrorInfoNotAvailable_2(bool value)
	{
		___SetErrorInfoNotAvailable_2 = value;
	}

	inline static int32_t get_offset_of_GetErrorInfoNotAvailable_3() { return static_cast<int32_t>(offsetof(Marshal_t3962730765_StaticFields, ___GetErrorInfoNotAvailable_3)); }
	inline bool get_GetErrorInfoNotAvailable_3() const { return ___GetErrorInfoNotAvailable_3; }
	inline bool* get_address_of_GetErrorInfoNotAvailable_3() { return &___GetErrorInfoNotAvailable_3; }
	inline void set_GetErrorInfoNotAvailable_3(bool value)
	{
		___GetErrorInfoNotAvailable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T3962730765_H
#ifndef EVIDENCEBASE_T3777793981_H
#define EVIDENCEBASE_T3777793981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.EvidenceBase
struct  EvidenceBase_t3777793981  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEBASE_T3777793981_H
#ifndef CRITICALFINALIZEROBJECT_T1106268787_H
#define CRITICALFINALIZEROBJECT_T1106268787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t1106268787  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T1106268787_H
#ifndef ATTRIBUTE_T3968905660_H
#define ATTRIBUTE_T3968905660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3968905660  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3968905660_H
#ifndef VALUETYPE_T405826838_H
#define VALUETYPE_T405826838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t405826838  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t405826838_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t405826838_marshaled_com
{
};
#endif // VALUETYPE_T405826838_H
#ifndef STRINGFREEZINGATTRIBUTE_T527581688_H
#define STRINGFREEZINGATTRIBUTE_T527581688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t527581688  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T527581688_H
#ifndef DECIMAL_T1421015549_H
#define DECIMAL_T1421015549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t1421015549 
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
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t1421015549, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t1421015549, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t1421015549, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t1421015549, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t1421015549_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t1508412189* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t1421015549  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t1421015549  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t1421015549  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t1421015549  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t1421015549  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t1421015549  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t1421015549  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t1421015549_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t1508412189* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t1508412189** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t1508412189* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t1421015549_StaticFields, ___Zero_7)); }
	inline Decimal_t1421015549  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t1421015549 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t1421015549  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t1421015549_StaticFields, ___One_8)); }
	inline Decimal_t1421015549  get_One_8() const { return ___One_8; }
	inline Decimal_t1421015549 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t1421015549  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t1421015549_StaticFields, ___MinusOne_9)); }
	inline Decimal_t1421015549  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t1421015549 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t1421015549  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t1421015549_StaticFields, ___MaxValue_10)); }
	inline Decimal_t1421015549  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t1421015549 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t1421015549  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t1421015549_StaticFields, ___MinValue_11)); }
	inline Decimal_t1421015549  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t1421015549 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t1421015549  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t1421015549_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t1421015549  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t1421015549 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t1421015549  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t1421015549_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t1421015549  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t1421015549 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t1421015549  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T1421015549_H
#ifndef DATETIME_T2717371579_H
#define DATETIME_T2717371579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2717371579 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t2717371579, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t2717371579_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t890136779* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t890136779* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2717371579  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2717371579  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t2717371579_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t890136779* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t890136779** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t890136779* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t2717371579_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t890136779* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t890136779** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t890136779* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2717371579_StaticFields, ___MinValue_2)); }
	inline DateTime_t2717371579  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t2717371579 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t2717371579  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2717371579_StaticFields, ___MaxValue_3)); }
	inline DateTime_t2717371579  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t2717371579 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t2717371579  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T2717371579_H
#ifndef ASYNCMETHODBUILDERCORE_T3255430051_H
#define ASYNCMETHODBUILDERCORE_T3255430051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t3255430051 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t3138395238 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t3255430051, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t3255430051, ___m_defaultContextAction_1)); }
	inline Action_t3138395238 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t3138395238 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t3138395238 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t3255430051_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t3255430051_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T3255430051_H
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
	RandomNumberGenerator_t1266854030 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t1266854030 * ____fastRng_2;
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
	inline RandomNumberGenerator_t1266854030 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t1266854030 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t1266854030 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t1266854030 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t1266854030 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t1266854030 * value)
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
#ifndef SYSTEMEXCEPTION_T2275904162_H
#define SYSTEMEXCEPTION_T2275904162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2275904162  : public Exception_t2541973588
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2275904162_H
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
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T2491475817_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T2491475817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t2491475817  : public Attribute_t3968905660
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t2491475817, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T2491475817_H
#ifndef CUSTOMCONSTANTATTRIBUTE_T1768382769_H
#define CUSTOMCONSTANTATTRIBUTE_T1768382769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CustomConstantAttribute
struct  CustomConstantAttribute_t1768382769  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCONSTANTATTRIBUTE_T1768382769_H
#ifndef EXTENSIONATTRIBUTE_T123131713_H
#define EXTENSIONATTRIBUTE_T123131713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t123131713  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T123131713_H
#ifndef FIXEDBUFFERATTRIBUTE_T2091005318_H
#define FIXEDBUFFERATTRIBUTE_T2091005318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t2091005318  : public Attribute_t3968905660
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t2091005318, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t2091005318, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDBUFFERATTRIBUTE_T2091005318_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T3327858919_H
#define INTERNALSVISIBLETOATTRIBUTE_T3327858919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t3327858919  : public Attribute_t3968905660
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t3327858919, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_0), value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t3327858919, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSVISIBLETOATTRIBUTE_T3327858919_H
#ifndef FRIENDACCESSALLOWEDATTRIBUTE_T3588178699_H
#define FRIENDACCESSALLOWEDATTRIBUTE_T3588178699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FriendAccessAllowedAttribute
struct  FriendAccessAllowedAttribute_t3588178699  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDACCESSALLOWEDATTRIBUTE_T3588178699_H
#ifndef ENUM_T3762889491_H
#define ENUM_T3762889491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3762889491  : public ValueType_t405826838
{
public:

public:
};

struct Enum_t3762889491_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1307605391* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t3762889491_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1307605391* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1307605391** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1307605391* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3762889491_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3762889491_marshaled_com
{
};
#endif // ENUM_T3762889491_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T2398609843_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T2398609843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t2398609843  : public Attribute_t3968905660
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t2398609843, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T2398609843_H
#ifndef STATEMACHINEATTRIBUTE_T641168944_H
#define STATEMACHINEATTRIBUTE_T641168944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StateMachineAttribute
struct  StateMachineAttribute_t641168944  : public Attribute_t3968905660
{
public:
	// System.Type System.Runtime.CompilerServices.StateMachineAttribute::<StateMachineType>k__BackingField
	Type_t * ___U3CStateMachineTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StateMachineAttribute_t641168944, ___U3CStateMachineTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CStateMachineTypeU3Ek__BackingField_0() const { return ___U3CStateMachineTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CStateMachineTypeU3Ek__BackingField_0() { return &___U3CStateMachineTypeU3Ek__BackingField_0; }
	inline void set_U3CStateMachineTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CStateMachineTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStateMachineTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEATTRIBUTE_T641168944_H
#ifndef TASKAWAITER_T453276559_H
#define TASKAWAITER_T453276559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t453276559 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t3918363517 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t453276559, ___m_task_0)); }
	inline Task_t3918363517 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3918363517 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3918363517 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t453276559_marshaled_pinvoke
{
	Task_t3918363517 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t453276559_marshaled_com
{
	Task_t3918363517 * ___m_task_0;
};
#endif // TASKAWAITER_T453276559_H
#ifndef CONFIGUREDTASKAWAITER_T761671395_H
#define CONFIGUREDTASKAWAITER_T761671395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t761671395 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t3918363517 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t761671395, ___m_task_0)); }
	inline Task_t3918363517 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3918363517 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3918363517 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t761671395, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t761671395_marshaled_pinvoke
{
	Task_t3918363517 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t761671395_marshaled_com
{
	Task_t3918363517 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T761671395_H
#ifndef TYPEDEPENDENCYATTRIBUTE_T972246183_H
#define TYPEDEPENDENCYATTRIBUTE_T972246183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeDependencyAttribute
struct  TypeDependencyAttribute_t972246183  : public Attribute_t3968905660
{
public:
	// System.String System.Runtime.CompilerServices.TypeDependencyAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeDependencyAttribute_t972246183, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDEPENDENCYATTRIBUTE_T972246183_H
#ifndef TYPEFORWARDEDFROMATTRIBUTE_T695831289_H
#define TYPEFORWARDEDFROMATTRIBUTE_T695831289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeForwardedFromAttribute
struct  TypeForwardedFromAttribute_t695831289  : public Attribute_t3968905660
{
public:
	// System.String System.Runtime.CompilerServices.TypeForwardedFromAttribute::assemblyFullName
	String_t* ___assemblyFullName_0;

public:
	inline static int32_t get_offset_of_assemblyFullName_0() { return static_cast<int32_t>(offsetof(TypeForwardedFromAttribute_t695831289, ___assemblyFullName_0)); }
	inline String_t* get_assemblyFullName_0() const { return ___assemblyFullName_0; }
	inline String_t** get_address_of_assemblyFullName_0() { return &___assemblyFullName_0; }
	inline void set_assemblyFullName_0(String_t* value)
	{
		___assemblyFullName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyFullName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFORWARDEDFROMATTRIBUTE_T695831289_H
#ifndef COMPILERGENERATEDATTRIBUTE_T1418228028_H
#define COMPILERGENERATEDATTRIBUTE_T1418228028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t1418228028  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T1418228028_H
#ifndef UNSAFEVALUETYPEATTRIBUTE_T3384141374_H
#define UNSAFEVALUETYPEATTRIBUTE_T3384141374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.UnsafeValueTypeAttribute
struct  UnsafeValueTypeAttribute_t3384141374  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFEVALUETYPEATTRIBUTE_T3384141374_H
#ifndef GCHANDLE_T3954325348_H
#define GCHANDLE_T3954325348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3954325348 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3954325348, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3954325348_H
#ifndef ACTIVATIONARGUMENTS_T1747179796_H
#define ACTIVATIONARGUMENTS_T1747179796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t1747179796  : public EvidenceBase_t3777793981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T1747179796_H
#ifndef INATTRIBUTE_T859112733_H
#define INATTRIBUTE_T859112733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t859112733  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T859112733_H
#ifndef OUTATTRIBUTE_T1531112043_H
#define OUTATTRIBUTE_T1531112043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t1531112043  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T1531112043_H
#ifndef OPTIONALATTRIBUTE_T974839580_H
#define OPTIONALATTRIBUTE_T974839580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t974839580  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T974839580_H
#ifndef GUIDATTRIBUTE_T4039724462_H
#define GUIDATTRIBUTE_T4039724462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t4039724462  : public Attribute_t3968905660
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t4039724462, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T4039724462_H
#ifndef COMIMPORTATTRIBUTE_T1164444763_H
#define COMIMPORTATTRIBUTE_T1164444763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t1164444763  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T1164444763_H
#ifndef FIELDOFFSETATTRIBUTE_T1638894824_H
#define FIELDOFFSETATTRIBUTE_T1638894824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t1638894824  : public Attribute_t3968905660
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t1638894824, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDOFFSETATTRIBUTE_T1638894824_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T3471588988_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T3471588988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
struct  ComCompatibleVersionAttribute_t3471588988  : public Attribute_t3968905660
{
public:
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_major
	int32_t ____major_0;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_minor
	int32_t ____minor_1;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_build
	int32_t ____build_2;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_revision
	int32_t ____revision_3;

public:
	inline static int32_t get_offset_of__major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t3471588988, ____major_0)); }
	inline int32_t get__major_0() const { return ____major_0; }
	inline int32_t* get_address_of__major_0() { return &____major_0; }
	inline void set__major_0(int32_t value)
	{
		____major_0 = value;
	}

	inline static int32_t get_offset_of__minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t3471588988, ____minor_1)); }
	inline int32_t get__minor_1() const { return ____minor_1; }
	inline int32_t* get_address_of__minor_1() { return &____minor_1; }
	inline void set__minor_1(int32_t value)
	{
		____minor_1 = value;
	}

	inline static int32_t get_offset_of__build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t3471588988, ____build_2)); }
	inline int32_t get__build_2() const { return ____build_2; }
	inline int32_t* get_address_of__build_2() { return &____build_2; }
	inline void set__build_2(int32_t value)
	{
		____build_2 = value;
	}

	inline static int32_t get_offset_of__revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t3471588988, ____revision_3)); }
	inline int32_t get__revision_3() const { return ____revision_3; }
	inline int32_t* get_address_of__revision_3() { return &____revision_3; }
	inline void set__revision_3(int32_t value)
	{
		____revision_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T3471588988_H
#ifndef BESTFITMAPPINGATTRIBUTE_T4085541344_H
#define BESTFITMAPPINGATTRIBUTE_T4085541344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BestFitMappingAttribute
struct  BestFitMappingAttribute_t4085541344  : public Attribute_t3968905660
{
public:
	// System.Boolean System.Runtime.InteropServices.BestFitMappingAttribute::_bestFitMapping
	bool ____bestFitMapping_0;

public:
	inline static int32_t get_offset_of__bestFitMapping_0() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t4085541344, ____bestFitMapping_0)); }
	inline bool get__bestFitMapping_0() const { return ____bestFitMapping_0; }
	inline bool* get_address_of__bestFitMapping_0() { return &____bestFitMapping_0; }
	inline void set__bestFitMapping_0(bool value)
	{
		____bestFitMapping_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BESTFITMAPPINGATTRIBUTE_T4085541344_H
#ifndef PRESERVESIGATTRIBUTE_T2963377122_H
#define PRESERVESIGATTRIBUTE_T2963377122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t2963377122  : public Attribute_t3968905660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T2963377122_H
#ifndef EPHEMERON_T2765829463_H
#define EPHEMERON_T2765829463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.Ephemeron
struct  Ephemeron_t2765829463 
{
public:
	// System.Object System.Runtime.CompilerServices.Ephemeron::key
	RuntimeObject * ___key_0;
	// System.Object System.Runtime.CompilerServices.Ephemeron::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Ephemeron_t2765829463, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Ephemeron_t2765829463, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t2765829463_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t2765829463_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // EPHEMERON_T2765829463_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T2709386389_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T2709386389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t2709386389  : public Attribute_t3968905660
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClassName
	String_t* ____importClassName_0;

public:
	inline static int32_t get_offset_of__importClassName_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t2709386389, ____importClassName_0)); }
	inline String_t* get__importClassName_0() const { return ____importClassName_0; }
	inline String_t** get_address_of__importClassName_0() { return &____importClassName_0; }
	inline void set__importClassName_0(String_t* value)
	{
		____importClassName_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClassName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T2709386389_H
#ifndef COMVISIBLEATTRIBUTE_T3516844067_H
#define COMVISIBLEATTRIBUTE_T3516844067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t3516844067  : public Attribute_t3968905660
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::_val
	bool ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t3516844067, ____val_0)); }
	inline bool get__val_0() const { return ____val_0; }
	inline bool* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(bool value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMVISIBLEATTRIBUTE_T3516844067_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T2486466741_H
#define COMDEFAULTINTERFACEATTRIBUTE_T2486466741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t2486466741  : public Attribute_t3968905660
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_val
	Type_t * ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t2486466741, ____val_0)); }
	inline Type_t * get__val_0() const { return ____val_0; }
	inline Type_t ** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(Type_t * value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T2486466741_H
#ifndef DISPIDATTRIBUTE_T2179668149_H
#define DISPIDATTRIBUTE_T2179668149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t2179668149  : public Attribute_t3968905660
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t2179668149, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T2179668149_H
#ifndef CLASSINTERFACETYPE_T261880088_H
#define CLASSINTERFACETYPE_T261880088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t261880088 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t261880088, ___value___2)); }
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
#endif // CLASSINTERFACETYPE_T261880088_H
#ifndef UNMANAGEDTYPE_T1277482491_H
#define UNMANAGEDTYPE_T1277482491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t1277482491 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnmanagedType_t1277482491, ___value___2)); }
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
#endif // UNMANAGEDTYPE_T1277482491_H
#ifndef COMINTERFACETYPE_T1362995110_H
#define COMINTERFACETYPE_T1362995110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t1362995110 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ComInterfaceType_t1362995110, ___value___2)); }
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
#endif // COMINTERFACETYPE_T1362995110_H
#ifndef SAFEHANDLE_T1440707200_H
#define SAFEHANDLE_T1440707200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1440707200  : public CriticalFinalizerObject_t1106268787
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1440707200, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1440707200, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1440707200, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1440707200, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T1440707200_H
#ifndef ASYNCTASKMETHODBUILDER_1_T3512354365_H
#define ASYNCTASKMETHODBUILDER_1_T3512354365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t3512354365 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t3255430051  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t2032105089 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3512354365, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t3255430051  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t3255430051 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t3255430051  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3512354365, ___m_task_2)); }
	inline Task_1_t2032105089 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t2032105089 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t2032105089 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t3512354365_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t2032105089 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3512354365_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t2032105089 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t2032105089 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t2032105089 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T3512354365_H
#ifndef GCHANDLETYPE_T3243400135_H
#define GCHANDLETYPE_T3243400135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3243400135 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t3243400135, ___value___2)); }
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
#endif // GCHANDLETYPE_T3243400135_H
#ifndef VARENUM_T3083407355_H
#define VARENUM_T3083407355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VarEnum
struct  VarEnum_t3083407355 
{
public:
	// System.Int32 System.Runtime.InteropServices.VarEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VarEnum_t3083407355, ___value___2)); }
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
#endif // VARENUM_T3083407355_H
#ifndef CONFIGUREDTASKAWAITABLE_T1961638390_H
#define CONFIGUREDTASKAWAITABLE_T1961638390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct  ConfiguredTaskAwaitable_t1961638390 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t761671395  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t1961638390, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t761671395  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t761671395 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t761671395  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t1961638390_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t761671395_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t1961638390_marshaled_com
{
	ConfiguredTaskAwaiter_t761671395_marshaled_com ___m_configuredTaskAwaiter_0;
};
#endif // CONFIGUREDTASKAWAITABLE_T1961638390_H
#ifndef METHODIMPLOPTIONS_T457574544_H
#define METHODIMPLOPTIONS_T457574544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplOptions
struct  MethodImplOptions_t457574544 
{
public:
	// System.Int32 System.Runtime.CompilerServices.MethodImplOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplOptions_t457574544, ___value___2)); }
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
#endif // METHODIMPLOPTIONS_T457574544_H
#ifndef LOADHINT_T2325728876_H
#define LOADHINT_T2325728876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t2325728876 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadHint_t2325728876, ___value___2)); }
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
#endif // LOADHINT_T2325728876_H
#ifndef WINDOWSRUNTIMEMARSHAL_T761216841_H
#define WINDOWSRUNTIMEMARSHAL_T761216841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal
struct  WindowsRuntimeMarshal_t761216841  : public RuntimeObject
{
public:

public:
};

struct WindowsRuntimeMarshal_t761216841_StaticFields
{
public:
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::s_haveBlueErrorApis
	bool ___s_haveBlueErrorApis_0;
	// System.Guid System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::s_iidIErrorInfo
	Guid_t  ___s_iidIErrorInfo_1;

public:
	inline static int32_t get_offset_of_s_haveBlueErrorApis_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeMarshal_t761216841_StaticFields, ___s_haveBlueErrorApis_0)); }
	inline bool get_s_haveBlueErrorApis_0() const { return ___s_haveBlueErrorApis_0; }
	inline bool* get_address_of_s_haveBlueErrorApis_0() { return &___s_haveBlueErrorApis_0; }
	inline void set_s_haveBlueErrorApis_0(bool value)
	{
		___s_haveBlueErrorApis_0 = value;
	}

	inline static int32_t get_offset_of_s_iidIErrorInfo_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeMarshal_t761216841_StaticFields, ___s_iidIErrorInfo_1)); }
	inline Guid_t  get_s_iidIErrorInfo_1() const { return ___s_iidIErrorInfo_1; }
	inline Guid_t * get_address_of_s_iidIErrorInfo_1() { return &___s_iidIErrorInfo_1; }
	inline void set_s_iidIErrorInfo_1(Guid_t  value)
	{
		___s_iidIErrorInfo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSRUNTIMEMARSHAL_T761216841_H
#ifndef DECIMALCONSTANTATTRIBUTE_T3797502069_H
#define DECIMALCONSTANTATTRIBUTE_T3797502069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t3797502069  : public Attribute_t3968905660
{
public:
	// System.Decimal System.Runtime.CompilerServices.DecimalConstantAttribute::dec
	Decimal_t1421015549  ___dec_0;

public:
	inline static int32_t get_offset_of_dec_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t3797502069, ___dec_0)); }
	inline Decimal_t1421015549  get_dec_0() const { return ___dec_0; }
	inline Decimal_t1421015549 * get_address_of_dec_0() { return &___dec_0; }
	inline void set_dec_0(Decimal_t1421015549  value)
	{
		___dec_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T3797502069_H
#ifndef DATETIMECONSTANTATTRIBUTE_T1484030137_H
#define DATETIMECONSTANTATTRIBUTE_T1484030137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct  DateTimeConstantAttribute_t1484030137  : public CustomConstantAttribute_t1768382769
{
public:
	// System.DateTime System.Runtime.CompilerServices.DateTimeConstantAttribute::date
	DateTime_t2717371579  ___date_0;

public:
	inline static int32_t get_offset_of_date_0() { return static_cast<int32_t>(offsetof(DateTimeConstantAttribute_t1484030137, ___date_0)); }
	inline DateTime_t2717371579  get_date_0() const { return ___date_0; }
	inline DateTime_t2717371579 * get_address_of_date_0() { return &___date_0; }
	inline void set_date_0(DateTime_t2717371579  value)
	{
		___date_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONSTANTATTRIBUTE_T1484030137_H
#ifndef COMPILATIONRELAXATIONS_T2312572314_H
#define COMPILATIONRELAXATIONS_T2312572314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t2312572314 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t2312572314, ___value___2)); }
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
#endif // COMPILATIONRELAXATIONS_T2312572314_H
#ifndef ASYNCSTATEMACHINEATTRIBUTE_T3306348936_H
#define ASYNCSTATEMACHINEATTRIBUTE_T3306348936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncStateMachineAttribute
struct  AsyncStateMachineAttribute_t3306348936  : public StateMachineAttribute_t641168944
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATEMACHINEATTRIBUTE_T3306348936_H
#ifndef CALLINGCONVENTION_T3705349690_H
#define CALLINGCONVENTION_T3705349690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3705349690 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConvention_t3705349690, ___value___2)); }
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
#endif // CALLINGCONVENTION_T3705349690_H
#ifndef CHARSET_T587843830_H
#define CHARSET_T587843830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t587843830 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharSet_t587843830, ___value___2)); }
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
#endif // CHARSET_T587843830_H
#ifndef EXTERNALEXCEPTION_T2367783298_H
#define EXTERNALEXCEPTION_T2367783298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t2367783298  : public SystemException_t2275904162
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T2367783298_H
#ifndef ITERATORSTATEMACHINEATTRIBUTE_T3000962954_H
#define ITERATORSTATEMACHINEATTRIBUTE_T3000962954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IteratorStateMachineAttribute
struct  IteratorStateMachineAttribute_t3000962954  : public StateMachineAttribute_t641168944
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITERATORSTATEMACHINEATTRIBUTE_T3000962954_H
#ifndef HANDLEREF_T2135133410_H
#define HANDLEREF_T2135133410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t2135133410 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t2135133410, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_wrapper_0), value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t2135133410, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEREF_T2135133410_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T51450359_H
#define MARSHALDIRECTIVEEXCEPTION_T51450359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t51450359  : public SystemException_t2275904162
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T51450359_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T169941991_H
#define DEFAULTDEPENDENCYATTRIBUTE_T169941991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t169941991  : public Attribute_t3968905660
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::loadHint
	int32_t ___loadHint_0;

public:
	inline static int32_t get_offset_of_loadHint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t169941991, ___loadHint_0)); }
	inline int32_t get_loadHint_0() const { return ___loadHint_0; }
	inline int32_t* get_address_of_loadHint_0() { return &___loadHint_0; }
	inline void set_loadHint_0(int32_t value)
	{
		___loadHint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T169941991_H
#ifndef MARSHALASATTRIBUTE_T2069321284_H
#define MARSHALASATTRIBUTE_T2069321284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t2069321284  : public Attribute_t3968905660
{
public:
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalCookie
	String_t* ___MarshalCookie_0;
	// System.String System.Runtime.InteropServices.MarshalAsAttribute::MarshalType
	String_t* ___MarshalType_1;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::MarshalTypeRef
	Type_t * ___MarshalTypeRef_2;
	// System.Type System.Runtime.InteropServices.MarshalAsAttribute::SafeArrayUserDefinedSubType
	Type_t * ___SafeArrayUserDefinedSubType_3;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::utype
	int32_t ___utype_4;
	// System.Runtime.InteropServices.UnmanagedType System.Runtime.InteropServices.MarshalAsAttribute::ArraySubType
	int32_t ___ArraySubType_5;
	// System.Runtime.InteropServices.VarEnum System.Runtime.InteropServices.MarshalAsAttribute::SafeArraySubType
	int32_t ___SafeArraySubType_6;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::SizeConst
	int32_t ___SizeConst_7;
	// System.Int32 System.Runtime.InteropServices.MarshalAsAttribute::IidParameterIndex
	int32_t ___IidParameterIndex_8;
	// System.Int16 System.Runtime.InteropServices.MarshalAsAttribute::SizeParamIndex
	int16_t ___SizeParamIndex_9;

public:
	inline static int32_t get_offset_of_MarshalCookie_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___MarshalCookie_0)); }
	inline String_t* get_MarshalCookie_0() const { return ___MarshalCookie_0; }
	inline String_t** get_address_of_MarshalCookie_0() { return &___MarshalCookie_0; }
	inline void set_MarshalCookie_0(String_t* value)
	{
		___MarshalCookie_0 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_0), value);
	}

	inline static int32_t get_offset_of_MarshalType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___MarshalType_1)); }
	inline String_t* get_MarshalType_1() const { return ___MarshalType_1; }
	inline String_t** get_address_of_MarshalType_1() { return &___MarshalType_1; }
	inline void set_MarshalType_1(String_t* value)
	{
		___MarshalType_1 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_1), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___MarshalTypeRef_2)); }
	inline Type_t * get_MarshalTypeRef_2() const { return ___MarshalTypeRef_2; }
	inline Type_t ** get_address_of_MarshalTypeRef_2() { return &___MarshalTypeRef_2; }
	inline void set_MarshalTypeRef_2(Type_t * value)
	{
		___MarshalTypeRef_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_2), value);
	}

	inline static int32_t get_offset_of_SafeArrayUserDefinedSubType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___SafeArrayUserDefinedSubType_3)); }
	inline Type_t * get_SafeArrayUserDefinedSubType_3() const { return ___SafeArrayUserDefinedSubType_3; }
	inline Type_t ** get_address_of_SafeArrayUserDefinedSubType_3() { return &___SafeArrayUserDefinedSubType_3; }
	inline void set_SafeArrayUserDefinedSubType_3(Type_t * value)
	{
		___SafeArrayUserDefinedSubType_3 = value;
		Il2CppCodeGenWriteBarrier((&___SafeArrayUserDefinedSubType_3), value);
	}

	inline static int32_t get_offset_of_utype_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___utype_4)); }
	inline int32_t get_utype_4() const { return ___utype_4; }
	inline int32_t* get_address_of_utype_4() { return &___utype_4; }
	inline void set_utype_4(int32_t value)
	{
		___utype_4 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___ArraySubType_5)); }
	inline int32_t get_ArraySubType_5() const { return ___ArraySubType_5; }
	inline int32_t* get_address_of_ArraySubType_5() { return &___ArraySubType_5; }
	inline void set_ArraySubType_5(int32_t value)
	{
		___ArraySubType_5 = value;
	}

	inline static int32_t get_offset_of_SafeArraySubType_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___SafeArraySubType_6)); }
	inline int32_t get_SafeArraySubType_6() const { return ___SafeArraySubType_6; }
	inline int32_t* get_address_of_SafeArraySubType_6() { return &___SafeArraySubType_6; }
	inline void set_SafeArraySubType_6(int32_t value)
	{
		___SafeArraySubType_6 = value;
	}

	inline static int32_t get_offset_of_SizeConst_7() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___SizeConst_7)); }
	inline int32_t get_SizeConst_7() const { return ___SizeConst_7; }
	inline int32_t* get_address_of_SizeConst_7() { return &___SizeConst_7; }
	inline void set_SizeConst_7(int32_t value)
	{
		___SizeConst_7 = value;
	}

	inline static int32_t get_offset_of_IidParameterIndex_8() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___IidParameterIndex_8)); }
	inline int32_t get_IidParameterIndex_8() const { return ___IidParameterIndex_8; }
	inline int32_t* get_address_of_IidParameterIndex_8() { return &___IidParameterIndex_8; }
	inline void set_IidParameterIndex_8(int32_t value)
	{
		___IidParameterIndex_8 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_9() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t2069321284, ___SizeParamIndex_9)); }
	inline int16_t get_SizeParamIndex_9() const { return ___SizeParamIndex_9; }
	inline int16_t* get_address_of_SizeParamIndex_9() { return &___SizeParamIndex_9; }
	inline void set_SizeParamIndex_9(int16_t value)
	{
		___SizeParamIndex_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALASATTRIBUTE_T2069321284_H
#ifndef ASYNCTASKMETHODBUILDER_T3529294518_H
#define ASYNCTASKMETHODBUILDER_T3529294518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3529294518 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3512354365  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3529294518, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3512354365  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3512354365 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3512354365  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3529294518_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t2032105089 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3529294518_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t2032105089 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t2032105089 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t2032105089 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3529294518_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3512354365  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3529294518_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3512354365  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3529294518_H
#ifndef INTERFACETYPEATTRIBUTE_T1019018427_H
#define INTERFACETYPEATTRIBUTE_T1019018427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t1019018427  : public Attribute_t3968905660
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t1019018427, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T1019018427_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T714783540_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T714783540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t714783540  : public SafeHandle_t1440707200
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T714783540_H
#ifndef COMEXCEPTION_T1325281057_H
#define COMEXCEPTION_T1325281057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t1325281057  : public ExternalException_t2367783298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T1325281057_H
#ifndef CLASSINTERFACEATTRIBUTE_T4196538573_H
#define CLASSINTERFACEATTRIBUTE_T4196538573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t4196538573  : public Attribute_t3968905660
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t4196538573, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T4196538573_H
#ifndef DLLIMPORTATTRIBUTE_T3676625116_H
#define DLLIMPORTATTRIBUTE_T3676625116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t3676625116  : public Attribute_t3968905660
{
public:
	// System.String System.Runtime.InteropServices.DllImportAttribute::_val
	String_t* ____val_0;
	// System.String System.Runtime.InteropServices.DllImportAttribute::EntryPoint
	String_t* ___EntryPoint_1;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.DllImportAttribute::CharSet
	int32_t ___CharSet_2;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::SetLastError
	bool ___SetLastError_3;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ExactSpelling
	bool ___ExactSpelling_4;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::PreserveSig
	bool ___PreserveSig_5;
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.DllImportAttribute::CallingConvention
	int32_t ___CallingConvention_6;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::BestFitMapping
	bool ___BestFitMapping_7;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_8;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}

	inline static int32_t get_offset_of_EntryPoint_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ___EntryPoint_1)); }
	inline String_t* get_EntryPoint_1() const { return ___EntryPoint_1; }
	inline String_t** get_address_of_EntryPoint_1() { return &___EntryPoint_1; }
	inline void set_EntryPoint_1(String_t* value)
	{
		___EntryPoint_1 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_1), value);
	}

	inline static int32_t get_offset_of_CharSet_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ___CharSet_2)); }
	inline int32_t get_CharSet_2() const { return ___CharSet_2; }
	inline int32_t* get_address_of_CharSet_2() { return &___CharSet_2; }
	inline void set_CharSet_2(int32_t value)
	{
		___CharSet_2 = value;
	}

	inline static int32_t get_offset_of_SetLastError_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ___SetLastError_3)); }
	inline bool get_SetLastError_3() const { return ___SetLastError_3; }
	inline bool* get_address_of_SetLastError_3() { return &___SetLastError_3; }
	inline void set_SetLastError_3(bool value)
	{
		___SetLastError_3 = value;
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_CallingConvention_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ___CallingConvention_6)); }
	inline int32_t get_CallingConvention_6() const { return ___CallingConvention_6; }
	inline int32_t* get_address_of_CallingConvention_6() { return &___CallingConvention_6; }
	inline void set_CallingConvention_6(int32_t value)
	{
		___CallingConvention_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t3676625116, ___ThrowOnUnmappableChar_8)); }
	inline bool get_ThrowOnUnmappableChar_8() const { return ___ThrowOnUnmappableChar_8; }
	inline bool* get_address_of_ThrowOnUnmappableChar_8() { return &___ThrowOnUnmappableChar_8; }
	inline void set_ThrowOnUnmappableChar_8(bool value)
	{
		___ThrowOnUnmappableChar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLIMPORTATTRIBUTE_T3676625116_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2426356889_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2426356889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t2426356889  : public Attribute_t3968905660
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::m_callingConvention
	int32_t ___m_callingConvention_0;

public:
	inline static int32_t get_offset_of_m_callingConvention_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t2426356889, ___m_callingConvention_0)); }
	inline int32_t get_m_callingConvention_0() const { return ___m_callingConvention_0; }
	inline int32_t* get_address_of_m_callingConvention_0() { return &___m_callingConvention_0; }
	inline void set_m_callingConvention_0(int32_t value)
	{
		___m_callingConvention_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2426356889_H
#ifndef METHODIMPLATTRIBUTE_T591790157_H
#define METHODIMPLATTRIBUTE_T591790157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplAttribute
struct  MethodImplAttribute_t591790157  : public Attribute_t3968905660
{
public:
	// System.Runtime.CompilerServices.MethodImplOptions System.Runtime.CompilerServices.MethodImplAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(MethodImplAttribute_t591790157, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTE_T591790157_H
#ifndef SAFEBUFFER_T828263112_H
#define SAFEBUFFER_T828263112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeBuffer
struct  SafeBuffer_t828263112  : public SafeHandleZeroOrMinusOneIsInvalid_t714783540
{
public:
	// System.Boolean System.Runtime.InteropServices.SafeBuffer::inited
	bool ___inited_4;

public:
	inline static int32_t get_offset_of_inited_4() { return static_cast<int32_t>(offsetof(SafeBuffer_t828263112, ___inited_4)); }
	inline bool get_inited_4() const { return ___inited_4; }
	inline bool* get_address_of_inited_4() { return &___inited_4; }
	inline void set_inited_4(bool value)
	{
		___inited_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBUFFER_T828263112_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (GCHandle_t3954325348)+ sizeof (RuntimeObject), sizeof(GCHandle_t3954325348 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1015[1] = 
{
	GCHandle_t3954325348::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (GCHandleType_t3243400135)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1016[5] = 
{
	GCHandleType_t3243400135::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { 0, sizeof(IErrorInfo_t3543970310*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (ManagedErrorInfo_t1144983465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1018[1] = 
{
	ManagedErrorInfo_t1144983465::get_offset_of_m_Exception_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (Marshal_t3962730765), -1, sizeof(Marshal_t3962730765_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1019[4] = 
{
	Marshal_t3962730765_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t3962730765_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
	Marshal_t3962730765_StaticFields::get_offset_of_SetErrorInfoNotAvailable_2(),
	Marshal_t3962730765_StaticFields::get_offset_of_GetErrorInfoNotAvailable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (MarshalAsAttribute_t2069321284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1020[10] = 
{
	MarshalAsAttribute_t2069321284::get_offset_of_MarshalCookie_0(),
	MarshalAsAttribute_t2069321284::get_offset_of_MarshalType_1(),
	MarshalAsAttribute_t2069321284::get_offset_of_MarshalTypeRef_2(),
	MarshalAsAttribute_t2069321284::get_offset_of_SafeArrayUserDefinedSubType_3(),
	MarshalAsAttribute_t2069321284::get_offset_of_utype_4(),
	MarshalAsAttribute_t2069321284::get_offset_of_ArraySubType_5(),
	MarshalAsAttribute_t2069321284::get_offset_of_SafeArraySubType_6(),
	MarshalAsAttribute_t2069321284::get_offset_of_SizeConst_7(),
	MarshalAsAttribute_t2069321284::get_offset_of_IidParameterIndex_8(),
	MarshalAsAttribute_t2069321284::get_offset_of_SizeParamIndex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (SafeBuffer_t828263112), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1021[1] = 
{
	SafeBuffer_t828263112::get_offset_of_inited_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (SafeHandle_t1440707200), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1022[4] = 
{
	SafeHandle_t1440707200::get_offset_of_handle_0(),
	SafeHandle_t1440707200::get_offset_of__state_1(),
	SafeHandle_t1440707200::get_offset_of__ownsHandle_2(),
	SafeHandle_t1440707200::get_offset_of__fullyInitialized_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (UnmanagedFunctionPointerAttribute_t2426356889), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1023[1] = 
{
	UnmanagedFunctionPointerAttribute_t2426356889::get_offset_of_m_callingConvention_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (DispIdAttribute_t2179668149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1024[1] = 
{
	DispIdAttribute_t2179668149::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (ComInterfaceType_t1362995110)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1025[5] = 
{
	ComInterfaceType_t1362995110::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (InterfaceTypeAttribute_t1019018427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1026[1] = 
{
	InterfaceTypeAttribute_t1019018427::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (ComDefaultInterfaceAttribute_t2486466741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1027[1] = 
{
	ComDefaultInterfaceAttribute_t2486466741::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (ClassInterfaceType_t261880088)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1028[4] = 
{
	ClassInterfaceType_t261880088::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { sizeof (ClassInterfaceAttribute_t4196538573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1029[1] = 
{
	ClassInterfaceAttribute_t4196538573::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { sizeof (ComVisibleAttribute_t3516844067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1030[1] = 
{
	ComVisibleAttribute_t3516844067::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { sizeof (TypeLibImportClassAttribute_t2709386389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1031[1] = 
{
	TypeLibImportClassAttribute_t2709386389::get_offset_of__importClassName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (VarEnum_t3083407355)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1032[45] = 
{
	VarEnum_t3083407355::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (UnmanagedType_t1277482491)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1033[39] = 
{
	UnmanagedType_t1277482491::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (ComImportAttribute_t1164444763), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (GuidAttribute_t4039724462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1035[1] = 
{
	GuidAttribute_t4039724462::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (PreserveSigAttribute_t2963377122), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (InAttribute_t859112733), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (OutAttribute_t1531112043), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (OptionalAttribute_t974839580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (DllImportAttribute_t3676625116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1040[9] = 
{
	DllImportAttribute_t3676625116::get_offset_of__val_0(),
	DllImportAttribute_t3676625116::get_offset_of_EntryPoint_1(),
	DllImportAttribute_t3676625116::get_offset_of_CharSet_2(),
	DllImportAttribute_t3676625116::get_offset_of_SetLastError_3(),
	DllImportAttribute_t3676625116::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t3676625116::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t3676625116::get_offset_of_CallingConvention_6(),
	DllImportAttribute_t3676625116::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t3676625116::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (FieldOffsetAttribute_t1638894824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1041[1] = 
{
	FieldOffsetAttribute_t1638894824::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (ComCompatibleVersionAttribute_t3471588988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1042[4] = 
{
	ComCompatibleVersionAttribute_t3471588988::get_offset_of__major_0(),
	ComCompatibleVersionAttribute_t3471588988::get_offset_of__minor_1(),
	ComCompatibleVersionAttribute_t3471588988::get_offset_of__build_2(),
	ComCompatibleVersionAttribute_t3471588988::get_offset_of__revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (BestFitMappingAttribute_t4085541344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1043[1] = 
{
	BestFitMappingAttribute_t4085541344::get_offset_of__bestFitMapping_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (CallingConvention_t3705349690)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1044[6] = 
{
	CallingConvention_t3705349690::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (CharSet_t587843830)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1045[5] = 
{
	CharSet_t587843830::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (COMException_t1325281057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (ErrorWrapper_t622423444), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1047[1] = 
{
	ErrorWrapper_t622423444::get_offset_of_m_ErrorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (ExternalException_t2367783298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (HandleRef_t2135133410)+ sizeof (RuntimeObject), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1049[2] = 
{
	HandleRef_t2135133410::get_offset_of_m_wrapper_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HandleRef_t2135133410::get_offset_of_m_handle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (MarshalDirectiveException_t51450359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (RuntimeEnvironment_t900854643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (UnsafeNativeMethods_t1052966748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { 0, sizeof(IRestrictedErrorInfo_t1597032266*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (WindowsRuntimeMarshal_t761216841), -1, sizeof(WindowsRuntimeMarshal_t761216841_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1054[2] = 
{
	WindowsRuntimeMarshal_t761216841_StaticFields::get_offset_of_s_haveBlueErrorApis_0(),
	WindowsRuntimeMarshal_t761216841_StaticFields::get_offset_of_s_iidIErrorInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (ActivationArguments_t1747179796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (Ephemeron_t2765829463)+ sizeof (RuntimeObject), sizeof(Ephemeron_t2765829463_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1056[2] = 
{
	Ephemeron_t2765829463::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ephemeron_t2765829463::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1057[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (RuntimeHelpers_t3605637268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (JitHelpers_t227929246), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (StringFreezingAttribute_t527581688), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (LoadHint_t2325728876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1061[4] = 
{
	LoadHint_t2325728876::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (DefaultDependencyAttribute_t169941991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1062[1] = 
{
	DefaultDependencyAttribute_t169941991::get_offset_of_loadHint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (AsyncTaskMethodBuilder_t3529294518)+ sizeof (RuntimeObject), -1, sizeof(AsyncTaskMethodBuilder_t3529294518_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1063[2] = 
{
	AsyncTaskMethodBuilder_t3529294518_StaticFields::get_offset_of_s_cachedCompleted_0(),
	AsyncTaskMethodBuilder_t3529294518::get_offset_of_m_builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1064[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (AsyncTaskCache_t2656926898), -1, sizeof(AsyncTaskCache_t2656926898_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1065[3] = 
{
	AsyncTaskCache_t2656926898_StaticFields::get_offset_of_TrueTask_0(),
	AsyncTaskCache_t2656926898_StaticFields::get_offset_of_FalseTask_1(),
	AsyncTaskCache_t2656926898_StaticFields::get_offset_of_Int32Tasks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (AsyncMethodBuilderCore_t3255430051)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1066[2] = 
{
	AsyncMethodBuilderCore_t3255430051::get_offset_of_m_stateMachine_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncMethodBuilderCore_t3255430051::get_offset_of_m_defaultContextAction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (MoveNextRunner_t1335159762), -1, sizeof(MoveNextRunner_t1335159762_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1067[3] = 
{
	MoveNextRunner_t1335159762::get_offset_of_m_context_0(),
	MoveNextRunner_t1335159762::get_offset_of_m_stateMachine_1(),
	MoveNextRunner_t1335159762_StaticFields::get_offset_of_s_invokeMoveNext_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (ContinuationWrapper_t2020231078), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1068[3] = 
{
	ContinuationWrapper_t2020231078::get_offset_of_m_continuation_0(),
	ContinuationWrapper_t2020231078::get_offset_of_m_invokeAction_1(),
	ContinuationWrapper_t2020231078::get_offset_of_m_innerTask_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (U3CU3Ec__DisplayClass4_0_t1804221689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1069[2] = 
{
	U3CU3Ec__DisplayClass4_0_t1804221689::get_offset_of_innerTask_0(),
	U3CU3Ec__DisplayClass4_0_t1804221689::get_offset_of_continuation_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (U3CU3Ec_t3956526107), -1, sizeof(U3CU3Ec_t3956526107_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1070[3] = 
{
	U3CU3Ec_t3956526107_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3956526107_StaticFields::get_offset_of_U3CU3E9__6_0_1(),
	U3CU3Ec_t3956526107_StaticFields::get_offset_of_U3CU3E9__6_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (AsyncStateMachineAttribute_t3306348936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (CompilationRelaxations_t2312572314)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1072[2] = 
{
	CompilationRelaxations_t2312572314::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (CompilationRelaxationsAttribute_t2491475817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1073[1] = 
{
	CompilationRelaxationsAttribute_t2491475817::get_offset_of_m_relaxations_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (CompilerGeneratedAttribute_t1418228028), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (CustomConstantAttribute_t1768382769), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (DateTimeConstantAttribute_t1484030137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1076[1] = 
{
	DateTimeConstantAttribute_t1484030137::get_offset_of_date_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (DecimalConstantAttribute_t3797502069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1077[1] = 
{
	DecimalConstantAttribute_t3797502069::get_offset_of_dec_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (ExtensionAttribute_t123131713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (FixedBufferAttribute_t2091005318), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1079[2] = 
{
	FixedBufferAttribute_t2091005318::get_offset_of_elementType_0(),
	FixedBufferAttribute_t2091005318::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (InternalsVisibleToAttribute_t3327858919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1083[2] = 
{
	InternalsVisibleToAttribute_t3327858919::get_offset_of__assemblyName_0(),
	InternalsVisibleToAttribute_t3327858919::get_offset_of__allInternalsVisible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (FriendAccessAllowedAttribute_t3588178699), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (IsVolatile_t3153218105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (IteratorStateMachineAttribute_t3000962954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (MethodImplOptions_t457574544)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1087[9] = 
{
	MethodImplOptions_t457574544::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (MethodImplAttribute_t591790157), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1088[1] = 
{
	MethodImplAttribute_t591790157::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (RuntimeCompatibilityAttribute_t2398609843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1089[1] = 
{
	RuntimeCompatibilityAttribute_t2398609843::get_offset_of_m_wrapNonExceptionThrows_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (StateMachineAttribute_t641168944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1090[1] = 
{
	StateMachineAttribute_t641168944::get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (TaskAwaiter_t453276559)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1091[1] = 
{
	TaskAwaiter_t453276559::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1092[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (ConfiguredTaskAwaitable_t1961638390)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1093[1] = 
{
	ConfiguredTaskAwaitable_t1961638390::get_offset_of_m_configuredTaskAwaiter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (ConfiguredTaskAwaiter_t761671395)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1094[2] = 
{
	ConfiguredTaskAwaiter_t761671395::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConfiguredTaskAwaiter_t761671395::get_offset_of_m_continueOnCapturedContext_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1095[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1096[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (TypeDependencyAttribute_t972246183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1097[1] = 
{
	TypeDependencyAttribute_t972246183::get_offset_of_typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (TypeForwardedFromAttribute_t695831289), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1098[1] = 
{
	TypeForwardedFromAttribute_t695831289::get_offset_of_assemblyFullName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (UnsafeValueTypeAttribute_t3384141374), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
