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
// System.Collections.ArrayList
struct ArrayList_t1409763451;
// System.Collections.Hashtable
struct Hashtable_t3971943106;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t3458271752;
// System.Threading.Tasks.Task`1<System.Int32>[]
struct Task_1U5BU5D_t2040782957;
// System.Threading.ExecutionContext
struct ExecutionContext_t3410515667;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t122025017;
// System.Threading.ContextCallback
struct ContextCallback_t3347272414;
// System.Action
struct Action_t2274821493;
// System.Threading.Tasks.Task
struct Task_t2690497587;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3274661381;
// System.Threading.WaitCallback
struct WaitCallback_t2989319428;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t504254067;
// System.Collections.IDictionary
struct IDictionary_t2209762685;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3559648024;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t3791304912;
// System.IntPtr[]
struct IntPtrU5BU5D_t3595384210;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t2334797489;
// System.Exception
struct Exception_t4083038797;
// System.Type
struct Type_t;
// System.Char[]
struct CharU5BU5D_t1313538844;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1843741840;
// System.Void
struct Void_t634856565;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t2866299703;

struct Guid_t ;
struct Exception_t4083038797_marshaled_pinvoke;
struct Exception_t4083038797_marshaled_com;



// System.Runtime.InteropServices.WindowsRuntime.IRestrictedErrorInfo
struct NOVTABLE IRestrictedErrorInfo_t27315495 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_U24__Stripped0_GetErrorDetails_m2284773841() = 0;
	virtual il2cpp_hresult_t STDCALL IRestrictedErrorInfo_U24__Stripped1_GetReference_m2182641594() = 0;
};
// System.Runtime.InteropServices.IErrorInfo
struct NOVTABLE IErrorInfo_t641536068 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetGUID_m3532644704(Guid_t * ___pGuid0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetSource_m3533133273(Il2CppChar** ___pBstrSource0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetDescription_m1270581600(Il2CppChar** ___pbstrDescription0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpFile_m2613421302(Il2CppChar** ___pBstrHelpFile0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IErrorInfo_GetHelpContext_m2859398637(uint32_t* ___pdwHelpContext0, int32_t* comReturnValue) = 0;
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
#ifndef SINKPROVIDERDATA_T2402854885_H
#define SINKPROVIDERDATA_T2402854885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t2402854885  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t1409763451 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t3971943106 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t2402854885, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t2402854885, ___children_1)); }
	inline ArrayList_t1409763451 * get_children_1() const { return ___children_1; }
	inline ArrayList_t1409763451 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t1409763451 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t2402854885, ___properties_2)); }
	inline Hashtable_t3971943106 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t3971943106 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t3971943106 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T2402854885_H
#ifndef UNSAFENATIVEMETHODS_T895510783_H
#define UNSAFENATIVEMETHODS_T895510783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.UnsafeNativeMethods
struct  UnsafeNativeMethods_t895510783  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFENATIVEMETHODS_T895510783_H
#ifndef RUNTIMEHELPERS_T2415089370_H
#define RUNTIMEHELPERS_T2415089370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t2415089370  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T2415089370_H
#ifndef JITHELPERS_T3019189848_H
#define JITHELPERS_T3019189848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t3019189848  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JITHELPERS_T3019189848_H
#ifndef ASYNCTASKCACHE_T2160353526_H
#define ASYNCTASKCACHE_T2160353526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskCache
struct  AsyncTaskCache_t2160353526  : public RuntimeObject
{
public:

public:
};

struct AsyncTaskCache_t2160353526_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::TrueTask
	Task_1_t3458271752 * ___TrueTask_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::FalseTask
	Task_1_t3458271752 * ___FalseTask_1;
	// System.Threading.Tasks.Task`1<System.Int32>[] System.Runtime.CompilerServices.AsyncTaskCache::Int32Tasks
	Task_1U5BU5D_t2040782957* ___Int32Tasks_2;

public:
	inline static int32_t get_offset_of_TrueTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t2160353526_StaticFields, ___TrueTask_0)); }
	inline Task_1_t3458271752 * get_TrueTask_0() const { return ___TrueTask_0; }
	inline Task_1_t3458271752 ** get_address_of_TrueTask_0() { return &___TrueTask_0; }
	inline void set_TrueTask_0(Task_1_t3458271752 * value)
	{
		___TrueTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___TrueTask_0), value);
	}

	inline static int32_t get_offset_of_FalseTask_1() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t2160353526_StaticFields, ___FalseTask_1)); }
	inline Task_1_t3458271752 * get_FalseTask_1() const { return ___FalseTask_1; }
	inline Task_1_t3458271752 ** get_address_of_FalseTask_1() { return &___FalseTask_1; }
	inline void set_FalseTask_1(Task_1_t3458271752 * value)
	{
		___FalseTask_1 = value;
		Il2CppCodeGenWriteBarrier((&___FalseTask_1), value);
	}

	inline static int32_t get_offset_of_Int32Tasks_2() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t2160353526_StaticFields, ___Int32Tasks_2)); }
	inline Task_1U5BU5D_t2040782957* get_Int32Tasks_2() const { return ___Int32Tasks_2; }
	inline Task_1U5BU5D_t2040782957** get_address_of_Int32Tasks_2() { return &___Int32Tasks_2; }
	inline void set_Int32Tasks_2(Task_1U5BU5D_t2040782957* value)
	{
		___Int32Tasks_2 = value;
		Il2CppCodeGenWriteBarrier((&___Int32Tasks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKCACHE_T2160353526_H
#ifndef MOVENEXTRUNNER_T2593978962_H
#define MOVENEXTRUNNER_T2593978962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct  MoveNextRunner_t2593978962  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_context
	ExecutionContext_t3410515667 * ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;

public:
	inline static int32_t get_offset_of_m_context_0() { return static_cast<int32_t>(offsetof(MoveNextRunner_t2593978962, ___m_context_0)); }
	inline ExecutionContext_t3410515667 * get_m_context_0() const { return ___m_context_0; }
	inline ExecutionContext_t3410515667 ** get_address_of_m_context_0() { return &___m_context_0; }
	inline void set_m_context_0(ExecutionContext_t3410515667 * value)
	{
		___m_context_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_context_0), value);
	}

	inline static int32_t get_offset_of_m_stateMachine_1() { return static_cast<int32_t>(offsetof(MoveNextRunner_t2593978962, ___m_stateMachine_1)); }
	inline RuntimeObject* get_m_stateMachine_1() const { return ___m_stateMachine_1; }
	inline RuntimeObject** get_address_of_m_stateMachine_1() { return &___m_stateMachine_1; }
	inline void set_m_stateMachine_1(RuntimeObject* value)
	{
		___m_stateMachine_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_1), value);
	}
};

struct MoveNextRunner_t2593978962_StaticFields
{
public:
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::s_invokeMoveNext
	ContextCallback_t3347272414 * ___s_invokeMoveNext_2;

public:
	inline static int32_t get_offset_of_s_invokeMoveNext_2() { return static_cast<int32_t>(offsetof(MoveNextRunner_t2593978962_StaticFields, ___s_invokeMoveNext_2)); }
	inline ContextCallback_t3347272414 * get_s_invokeMoveNext_2() const { return ___s_invokeMoveNext_2; }
	inline ContextCallback_t3347272414 ** get_address_of_s_invokeMoveNext_2() { return &___s_invokeMoveNext_2; }
	inline void set_s_invokeMoveNext_2(ContextCallback_t3347272414 * value)
	{
		___s_invokeMoveNext_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_invokeMoveNext_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVENEXTRUNNER_T2593978962_H
#ifndef CONTINUATIONWRAPPER_T682062419_H
#define CONTINUATIONWRAPPER_T682062419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper
struct  ContinuationWrapper_t682062419  : public RuntimeObject
{
public:
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_continuation
	Action_t2274821493 * ___m_continuation_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_invokeAction
	Action_t2274821493 * ___m_invokeAction_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_innerTask
	Task_t2690497587 * ___m_innerTask_2;

public:
	inline static int32_t get_offset_of_m_continuation_0() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t682062419, ___m_continuation_0)); }
	inline Action_t2274821493 * get_m_continuation_0() const { return ___m_continuation_0; }
	inline Action_t2274821493 ** get_address_of_m_continuation_0() { return &___m_continuation_0; }
	inline void set_m_continuation_0(Action_t2274821493 * value)
	{
		___m_continuation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuation_0), value);
	}

	inline static int32_t get_offset_of_m_invokeAction_1() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t682062419, ___m_invokeAction_1)); }
	inline Action_t2274821493 * get_m_invokeAction_1() const { return ___m_invokeAction_1; }
	inline Action_t2274821493 ** get_address_of_m_invokeAction_1() { return &___m_invokeAction_1; }
	inline void set_m_invokeAction_1(Action_t2274821493 * value)
	{
		___m_invokeAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_invokeAction_1), value);
	}

	inline static int32_t get_offset_of_m_innerTask_2() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t682062419, ___m_innerTask_2)); }
	inline Task_t2690497587 * get_m_innerTask_2() const { return ___m_innerTask_2; }
	inline Task_t2690497587 ** get_address_of_m_innerTask_2() { return &___m_innerTask_2; }
	inline void set_m_innerTask_2(Task_t2690497587 * value)
	{
		___m_innerTask_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerTask_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINUATIONWRAPPER_T682062419_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_T3065977583_H
#define U3CU3EC__DISPLAYCLASS4_0_T3065977583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t3065977583  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::innerTask
	Task_t2690497587 * ___innerTask_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::continuation
	Action_t2274821493 * ___continuation_1;

public:
	inline static int32_t get_offset_of_innerTask_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3065977583, ___innerTask_0)); }
	inline Task_t2690497587 * get_innerTask_0() const { return ___innerTask_0; }
	inline Task_t2690497587 ** get_address_of_innerTask_0() { return &___innerTask_0; }
	inline void set_innerTask_0(Task_t2690497587 * value)
	{
		___innerTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___innerTask_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3065977583, ___continuation_1)); }
	inline Action_t2274821493 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t2274821493 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t2274821493 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_T3065977583_H
#ifndef U3CU3EC_T3453278036_H
#define U3CU3EC_T3453278036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c
struct  U3CU3Ec_t3453278036  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3453278036_StaticFields
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9
	U3CU3Ec_t3453278036 * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_0
	SendOrPostCallback_t3274661381 * ___U3CU3E9__6_0_1;
	// System.Threading.WaitCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_1
	WaitCallback_t2989319428 * ___U3CU3E9__6_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3453278036_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3453278036 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3453278036 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3453278036 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3453278036_StaticFields, ___U3CU3E9__6_0_1)); }
	inline SendOrPostCallback_t3274661381 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline SendOrPostCallback_t3274661381 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(SendOrPostCallback_t3274661381 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3453278036_StaticFields, ___U3CU3E9__6_1_2)); }
	inline WaitCallback_t2989319428 * get_U3CU3E9__6_1_2() const { return ___U3CU3E9__6_1_2; }
	inline WaitCallback_t2989319428 ** get_address_of_U3CU3E9__6_1_2() { return &___U3CU3E9__6_1_2; }
	inline void set_U3CU3E9__6_1_2(WaitCallback_t2989319428 * value)
	{
		___U3CU3E9__6_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3453278036_H
#ifndef MARSHALBYREFOBJECT_T2071385042_H
#define MARSHALBYREFOBJECT_T2071385042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2071385042  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t504254067 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2071385042, ____identity_0)); }
	inline ServerIdentity_t504254067 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t504254067 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t504254067 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2071385042_marshaled_pinvoke
{
	ServerIdentity_t504254067 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2071385042_marshaled_com
{
	ServerIdentity_t504254067 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2071385042_H
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
#ifndef ATTRIBUTE_T28087532_H
#define ATTRIBUTE_T28087532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t28087532  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T28087532_H
#ifndef CRITICALFINALIZEROBJECT_T3476883387_H
#define CRITICALFINALIZEROBJECT_T3476883387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t3476883387  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T3476883387_H
#ifndef EVIDENCEBASE_T3931399331_H
#define EVIDENCEBASE_T3931399331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.EvidenceBase
struct  EvidenceBase_t3931399331  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEBASE_T3931399331_H
#ifndef RUNTIMEENVIRONMENT_T3449347116_H
#define RUNTIMEENVIRONMENT_T3449347116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.RuntimeEnvironment
struct  RuntimeEnvironment_t3449347116  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEENVIRONMENT_T3449347116_H
#ifndef ERRORWRAPPER_T4073739234_H
#define ERRORWRAPPER_T4073739234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t4073739234  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::m_ErrorCode
	int32_t ___m_ErrorCode_0;

public:
	inline static int32_t get_offset_of_m_ErrorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t4073739234, ___m_ErrorCode_0)); }
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
#endif // ERRORWRAPPER_T4073739234_H
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
#ifndef CROSSAPPDOMAINSINK_T3781141245_H
#define CROSSAPPDOMAINSINK_T3781141245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t3781141245  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3781141245, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t3781141245_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t3971943106 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3781141245_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t3971943106 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t3971943106 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t3971943106 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t3781141245_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T3781141245_H
#ifndef CONTEXTLEVELACTIVATOR_T2908972070_H
#define CONTEXTLEVELACTIVATOR_T2908972070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t2908972070  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t2908972070, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T2908972070_H
#ifndef CROSSAPPDOMAINDATA_T2352988813_H
#define CROSSAPPDOMAINDATA_T2352988813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t2352988813  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2352988813, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2352988813, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2352988813, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T2352988813_H
#ifndef CROSSAPPDOMAINCHANNEL_T2315104105_H
#define CROSSAPPDOMAINCHANNEL_T2315104105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t2315104105  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t2315104105_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t2315104105_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T2315104105_H
#ifndef MANAGEDERRORINFO_T968960341_H
#define MANAGEDERRORINFO_T968960341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ManagedErrorInfo
struct  ManagedErrorInfo_t968960341  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.InteropServices.ManagedErrorInfo::m_Exception
	Exception_t4083038797 * ___m_Exception_0;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ManagedErrorInfo_t968960341, ___m_Exception_0)); }
	inline Exception_t4083038797 * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t4083038797 ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t4083038797 * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exception_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDERRORINFO_T968960341_H
#ifndef MARSHAL_T4066648451_H
#define MARSHAL_T4066648451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t4066648451  : public RuntimeObject
{
public:

public:
};

struct Marshal_t4066648451_StaticFields
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
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t4066648451_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t4066648451_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}

	inline static int32_t get_offset_of_SetErrorInfoNotAvailable_2() { return static_cast<int32_t>(offsetof(Marshal_t4066648451_StaticFields, ___SetErrorInfoNotAvailable_2)); }
	inline bool get_SetErrorInfoNotAvailable_2() const { return ___SetErrorInfoNotAvailable_2; }
	inline bool* get_address_of_SetErrorInfoNotAvailable_2() { return &___SetErrorInfoNotAvailable_2; }
	inline void set_SetErrorInfoNotAvailable_2(bool value)
	{
		___SetErrorInfoNotAvailable_2 = value;
	}

	inline static int32_t get_offset_of_GetErrorInfoNotAvailable_3() { return static_cast<int32_t>(offsetof(Marshal_t4066648451_StaticFields, ___GetErrorInfoNotAvailable_3)); }
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
#endif // MARSHAL_T4066648451_H
#ifndef ACTIVATIONSERVICES_T2101568323_H
#define ACTIVATIONSERVICES_T2101568323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t2101568323  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t2101568323_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t2101568323_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T2101568323_H
#ifndef APPDOMAINLEVELACTIVATOR_T448969607_H
#define APPDOMAINLEVELACTIVATOR_T448969607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t448969607  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t448969607, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t448969607, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T448969607_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T3441869147_H
#define CONSTRUCTIONLEVELACTIVATOR_T3441869147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t3441869147  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T3441869147_H
#ifndef STATEMACHINEATTRIBUTE_T3080808000_H
#define STATEMACHINEATTRIBUTE_T3080808000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StateMachineAttribute
struct  StateMachineAttribute_t3080808000  : public Attribute_t28087532
{
public:
	// System.Type System.Runtime.CompilerServices.StateMachineAttribute::<StateMachineType>k__BackingField
	Type_t * ___U3CStateMachineTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StateMachineAttribute_t3080808000, ___U3CStateMachineTypeU3Ek__BackingField_0)); }
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
#endif // STATEMACHINEATTRIBUTE_T3080808000_H
#ifndef CONTEXTATTRIBUTE_T3723798289_H
#define CONTEXTATTRIBUTE_T3723798289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t3723798289  : public Attribute_t28087532
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t3723798289, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T3723798289_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T3543312884_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T3543312884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t3543312884  : public Attribute_t28087532
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t3543312884, ___m_relaxations_0)); }
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
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T3543312884_H
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
#ifndef ACTIVATIONARGUMENTS_T107926287_H
#define ACTIVATIONARGUMENTS_T107926287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t107926287  : public EvidenceBase_t3931399331
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T107926287_H
#ifndef DISPIDATTRIBUTE_T3721226024_H
#define DISPIDATTRIBUTE_T3721226024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t3721226024  : public Attribute_t28087532
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t3721226024, ____val_0)); }
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
#endif // DISPIDATTRIBUTE_T3721226024_H
#ifndef STRINGFREEZINGATTRIBUTE_T2479390408_H
#define STRINGFREEZINGATTRIBUTE_T2479390408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t2479390408  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T2479390408_H
#ifndef REMOTEACTIVATOR_T4192559711_H
#define REMOTEACTIVATOR_T4192559711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t4192559711  : public MarshalByRefObject_t2071385042
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T4192559711_H
#ifndef COMPILERGENERATEDATTRIBUTE_T4027420737_H
#define COMPILERGENERATEDATTRIBUTE_T4027420737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t4027420737  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T4027420737_H
#ifndef GCHANDLE_T7527549_H
#define GCHANDLE_T7527549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t7527549 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t7527549, ___handle_0)); }
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
#endif // GCHANDLE_T7527549_H
#ifndef EPHEMERON_T1786086276_H
#define EPHEMERON_T1786086276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.Ephemeron
struct  Ephemeron_t1786086276 
{
public:
	// System.Object System.Runtime.CompilerServices.Ephemeron::key
	RuntimeObject * ___key_0;
	// System.Object System.Runtime.CompilerServices.Ephemeron::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Ephemeron_t1786086276, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Ephemeron_t1786086276, ___value_1)); }
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
struct Ephemeron_t1786086276_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t1786086276_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // EPHEMERON_T1786086276_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T1086515534_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T1086515534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
struct  ComCompatibleVersionAttribute_t1086515534  : public Attribute_t28087532
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
	inline static int32_t get_offset_of__major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1086515534, ____major_0)); }
	inline int32_t get__major_0() const { return ____major_0; }
	inline int32_t* get_address_of__major_0() { return &____major_0; }
	inline void set__major_0(int32_t value)
	{
		____major_0 = value;
	}

	inline static int32_t get_offset_of__minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1086515534, ____minor_1)); }
	inline int32_t get__minor_1() const { return ____minor_1; }
	inline int32_t* get_address_of__minor_1() { return &____minor_1; }
	inline void set__minor_1(int32_t value)
	{
		____minor_1 = value;
	}

	inline static int32_t get_offset_of__build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1086515534, ____build_2)); }
	inline int32_t get__build_2() const { return ____build_2; }
	inline int32_t* get_address_of__build_2() { return &____build_2; }
	inline void set__build_2(int32_t value)
	{
		____build_2 = value;
	}

	inline static int32_t get_offset_of__revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1086515534, ____revision_3)); }
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
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T1086515534_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T1673689346_H
#define COMDEFAULTINTERFACEATTRIBUTE_T1673689346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t1673689346  : public Attribute_t28087532
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_val
	Type_t * ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t1673689346, ____val_0)); }
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
#endif // COMDEFAULTINTERFACEATTRIBUTE_T1673689346_H
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
#ifndef COMVISIBLEATTRIBUTE_T750775598_H
#define COMVISIBLEATTRIBUTE_T750775598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t750775598  : public Attribute_t28087532
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::_val
	bool ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t750775598, ____val_0)); }
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
#endif // COMVISIBLEATTRIBUTE_T750775598_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T1262698916_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T1262698916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t1262698916  : public Attribute_t28087532
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClassName
	String_t* ____importClassName_0;

public:
	inline static int32_t get_offset_of__importClassName_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t1262698916, ____importClassName_0)); }
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
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T1262698916_H
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
#ifndef BESTFITMAPPINGATTRIBUTE_T590427943_H
#define BESTFITMAPPINGATTRIBUTE_T590427943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BestFitMappingAttribute
struct  BestFitMappingAttribute_t590427943  : public Attribute_t28087532
{
public:
	// System.Boolean System.Runtime.InteropServices.BestFitMappingAttribute::_bestFitMapping
	bool ____bestFitMapping_0;

public:
	inline static int32_t get_offset_of__bestFitMapping_0() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t590427943, ____bestFitMapping_0)); }
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
#endif // BESTFITMAPPINGATTRIBUTE_T590427943_H
#ifndef ASYNCMETHODBUILDERCORE_T2225757285_H
#define ASYNCMETHODBUILDERCORE_T2225757285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2225757285 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t2274821493 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2225757285, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2225757285, ___m_defaultContextAction_1)); }
	inline Action_t2274821493 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t2274821493 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t2274821493 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2225757285_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2225757285_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2225757285_H
#ifndef COMIMPORTATTRIBUTE_T2568720829_H
#define COMIMPORTATTRIBUTE_T2568720829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t2568720829  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T2568720829_H
#ifndef GUIDATTRIBUTE_T50447241_H
#define GUIDATTRIBUTE_T50447241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t50447241  : public Attribute_t28087532
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t50447241, ____val_0)); }
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
#endif // GUIDATTRIBUTE_T50447241_H
#ifndef PRESERVESIGATTRIBUTE_T1197973886_H
#define PRESERVESIGATTRIBUTE_T1197973886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t1197973886  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T1197973886_H
#ifndef INATTRIBUTE_T647177311_H
#define INATTRIBUTE_T647177311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t647177311  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T647177311_H
#ifndef OUTATTRIBUTE_T4266473169_H
#define OUTATTRIBUTE_T4266473169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t4266473169  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T4266473169_H
#ifndef OPTIONALATTRIBUTE_T892673169_H
#define OPTIONALATTRIBUTE_T892673169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t892673169  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T892673169_H
#ifndef FIELDOFFSETATTRIBUTE_T2526387090_H
#define FIELDOFFSETATTRIBUTE_T2526387090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t2526387090  : public Attribute_t28087532
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t2526387090, ____val_0)); }
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
#endif // FIELDOFFSETATTRIBUTE_T2526387090_H
#ifndef ASYNCTASKMETHODBUILDER_1_T875641133_H
#define ASYNCTASKMETHODBUILDER_1_T875641133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t875641133 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2225757285  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t2866299703 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t875641133, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2225757285  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2225757285 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2225757285  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t875641133, ___m_task_2)); }
	inline Task_1_t2866299703 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t2866299703 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t2866299703 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t875641133_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t2866299703 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t875641133_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t2866299703 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t2866299703 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t2866299703 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T875641133_H
#ifndef URLATTRIBUTE_T641718846_H
#define URLATTRIBUTE_T641718846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t641718846  : public ContextAttribute_t3723798289
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t641718846, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLATTRIBUTE_T641718846_H
#ifndef COMPILATIONRELAXATIONS_T2114718759_H
#define COMPILATIONRELAXATIONS_T2114718759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t2114718759 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t2114718759, ___value___2)); }
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
#endif // COMPILATIONRELAXATIONS_T2114718759_H
#ifndef ASYNCSTATEMACHINEATTRIBUTE_T1259059422_H
#define ASYNCSTATEMACHINEATTRIBUTE_T1259059422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncStateMachineAttribute
struct  AsyncStateMachineAttribute_t1259059422  : public StateMachineAttribute_t3080808000
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATEMACHINEATTRIBUTE_T1259059422_H
#ifndef COMINTERFACETYPE_T22642417_H
#define COMINTERFACETYPE_T22642417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t22642417 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ComInterfaceType_t22642417, ___value___2)); }
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
#endif // COMINTERFACETYPE_T22642417_H
#ifndef LOADHINT_T2335450933_H
#define LOADHINT_T2335450933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t2335450933 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadHint_t2335450933, ___value___2)); }
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
#endif // LOADHINT_T2335450933_H
#ifndef WINDOWSRUNTIMEMARSHAL_T1131210221_H
#define WINDOWSRUNTIMEMARSHAL_T1131210221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal
struct  WindowsRuntimeMarshal_t1131210221  : public RuntimeObject
{
public:

public:
};

struct WindowsRuntimeMarshal_t1131210221_StaticFields
{
public:
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::s_haveBlueErrorApis
	bool ___s_haveBlueErrorApis_0;
	// System.Guid System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeMarshal::s_iidIErrorInfo
	Guid_t  ___s_iidIErrorInfo_1;

public:
	inline static int32_t get_offset_of_s_haveBlueErrorApis_0() { return static_cast<int32_t>(offsetof(WindowsRuntimeMarshal_t1131210221_StaticFields, ___s_haveBlueErrorApis_0)); }
	inline bool get_s_haveBlueErrorApis_0() const { return ___s_haveBlueErrorApis_0; }
	inline bool* get_address_of_s_haveBlueErrorApis_0() { return &___s_haveBlueErrorApis_0; }
	inline void set_s_haveBlueErrorApis_0(bool value)
	{
		___s_haveBlueErrorApis_0 = value;
	}

	inline static int32_t get_offset_of_s_iidIErrorInfo_1() { return static_cast<int32_t>(offsetof(WindowsRuntimeMarshal_t1131210221_StaticFields, ___s_iidIErrorInfo_1)); }
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
#endif // WINDOWSRUNTIMEMARSHAL_T1131210221_H
#ifndef CLASSINTERFACETYPE_T3226054422_H
#define CLASSINTERFACETYPE_T3226054422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t3226054422 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t3226054422, ___value___2)); }
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
#endif // CLASSINTERFACETYPE_T3226054422_H
#ifndef SAFEHANDLE_T3895719305_H
#define SAFEHANDLE_T3895719305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3895719305  : public CriticalFinalizerObject_t3476883387
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
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3895719305, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3895719305, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3895719305, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3895719305, ____fullyInitialized_3)); }
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
#endif // SAFEHANDLE_T3895719305_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T1366450096_H
#define MARSHALDIRECTIVEEXCEPTION_T1366450096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t1366450096  : public SystemException_t1971328175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T1366450096_H
#ifndef HANDLEREF_T266381323_H
#define HANDLEREF_T266381323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t266381323 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t266381323, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_wrapper_0), value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t266381323, ___m_handle_1)); }
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
#endif // HANDLEREF_T266381323_H
#ifndef EXTERNALEXCEPTION_T3680635245_H
#define EXTERNALEXCEPTION_T3680635245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3680635245  : public SystemException_t1971328175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3680635245_H
#ifndef GCHANDLETYPE_T2519396023_H
#define GCHANDLETYPE_T2519396023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t2519396023 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t2519396023, ___value___2)); }
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
#endif // GCHANDLETYPE_T2519396023_H
#ifndef CHARSET_T1848487157_H
#define CHARSET_T1848487157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t1848487157 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharSet_t1848487157, ___value___2)); }
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
#endif // CHARSET_T1848487157_H
#ifndef CALLINGCONVENTION_T4013448960_H
#define CALLINGCONVENTION_T4013448960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t4013448960 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConvention_t4013448960, ___value___2)); }
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
#endif // CALLINGCONVENTION_T4013448960_H
#ifndef VARENUM_T2376542536_H
#define VARENUM_T2376542536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VarEnum
struct  VarEnum_t2376542536 
{
public:
	// System.Int32 System.Runtime.InteropServices.VarEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VarEnum_t2376542536, ___value___2)); }
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
#endif // VARENUM_T2376542536_H
#ifndef UNMANAGEDTYPE_T1566502458_H
#define UNMANAGEDTYPE_T1566502458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t1566502458 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnmanagedType_t1566502458, ___value___2)); }
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
#endif // UNMANAGEDTYPE_T1566502458_H
#ifndef ASYNCTASKMETHODBUILDER_T2061377360_H
#define ASYNCTASKMETHODBUILDER_T2061377360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t2061377360 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t875641133  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t2061377360, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t875641133  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t875641133 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t875641133  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t2061377360_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t2866299703 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t2061377360_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t2866299703 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t2866299703 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t2866299703 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t2061377360_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t875641133  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t2061377360_marshaled_com
{
	AsyncTaskMethodBuilder_1_t875641133  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T2061377360_H
#ifndef INTERFACETYPEATTRIBUTE_T721982198_H
#define INTERFACETYPEATTRIBUTE_T721982198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t721982198  : public Attribute_t28087532
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t721982198, ____val_0)); }
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
#endif // INTERFACETYPEATTRIBUTE_T721982198_H
#ifndef CLASSINTERFACEATTRIBUTE_T885863883_H
#define CLASSINTERFACEATTRIBUTE_T885863883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t885863883  : public Attribute_t28087532
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t885863883, ____val_0)); }
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
#endif // CLASSINTERFACEATTRIBUTE_T885863883_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3147888241_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3147888241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t3147888241  : public Attribute_t28087532
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::m_callingConvention
	int32_t ___m_callingConvention_0;

public:
	inline static int32_t get_offset_of_m_callingConvention_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t3147888241, ___m_callingConvention_0)); }
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
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3147888241_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T2255948713_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T2255948713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t2255948713  : public SafeHandle_t3895719305
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T2255948713_H
#ifndef MARSHALASATTRIBUTE_T3001414182_H
#define MARSHALASATTRIBUTE_T3001414182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalAsAttribute
struct  MarshalAsAttribute_t3001414182  : public Attribute_t28087532
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
	inline static int32_t get_offset_of_MarshalCookie_0() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___MarshalCookie_0)); }
	inline String_t* get_MarshalCookie_0() const { return ___MarshalCookie_0; }
	inline String_t** get_address_of_MarshalCookie_0() { return &___MarshalCookie_0; }
	inline void set_MarshalCookie_0(String_t* value)
	{
		___MarshalCookie_0 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalCookie_0), value);
	}

	inline static int32_t get_offset_of_MarshalType_1() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___MarshalType_1)); }
	inline String_t* get_MarshalType_1() const { return ___MarshalType_1; }
	inline String_t** get_address_of_MarshalType_1() { return &___MarshalType_1; }
	inline void set_MarshalType_1(String_t* value)
	{
		___MarshalType_1 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalType_1), value);
	}

	inline static int32_t get_offset_of_MarshalTypeRef_2() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___MarshalTypeRef_2)); }
	inline Type_t * get_MarshalTypeRef_2() const { return ___MarshalTypeRef_2; }
	inline Type_t ** get_address_of_MarshalTypeRef_2() { return &___MarshalTypeRef_2; }
	inline void set_MarshalTypeRef_2(Type_t * value)
	{
		___MarshalTypeRef_2 = value;
		Il2CppCodeGenWriteBarrier((&___MarshalTypeRef_2), value);
	}

	inline static int32_t get_offset_of_SafeArrayUserDefinedSubType_3() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___SafeArrayUserDefinedSubType_3)); }
	inline Type_t * get_SafeArrayUserDefinedSubType_3() const { return ___SafeArrayUserDefinedSubType_3; }
	inline Type_t ** get_address_of_SafeArrayUserDefinedSubType_3() { return &___SafeArrayUserDefinedSubType_3; }
	inline void set_SafeArrayUserDefinedSubType_3(Type_t * value)
	{
		___SafeArrayUserDefinedSubType_3 = value;
		Il2CppCodeGenWriteBarrier((&___SafeArrayUserDefinedSubType_3), value);
	}

	inline static int32_t get_offset_of_utype_4() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___utype_4)); }
	inline int32_t get_utype_4() const { return ___utype_4; }
	inline int32_t* get_address_of_utype_4() { return &___utype_4; }
	inline void set_utype_4(int32_t value)
	{
		___utype_4 = value;
	}

	inline static int32_t get_offset_of_ArraySubType_5() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___ArraySubType_5)); }
	inline int32_t get_ArraySubType_5() const { return ___ArraySubType_5; }
	inline int32_t* get_address_of_ArraySubType_5() { return &___ArraySubType_5; }
	inline void set_ArraySubType_5(int32_t value)
	{
		___ArraySubType_5 = value;
	}

	inline static int32_t get_offset_of_SafeArraySubType_6() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___SafeArraySubType_6)); }
	inline int32_t get_SafeArraySubType_6() const { return ___SafeArraySubType_6; }
	inline int32_t* get_address_of_SafeArraySubType_6() { return &___SafeArraySubType_6; }
	inline void set_SafeArraySubType_6(int32_t value)
	{
		___SafeArraySubType_6 = value;
	}

	inline static int32_t get_offset_of_SizeConst_7() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___SizeConst_7)); }
	inline int32_t get_SizeConst_7() const { return ___SizeConst_7; }
	inline int32_t* get_address_of_SizeConst_7() { return &___SizeConst_7; }
	inline void set_SizeConst_7(int32_t value)
	{
		___SizeConst_7 = value;
	}

	inline static int32_t get_offset_of_IidParameterIndex_8() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___IidParameterIndex_8)); }
	inline int32_t get_IidParameterIndex_8() const { return ___IidParameterIndex_8; }
	inline int32_t* get_address_of_IidParameterIndex_8() { return &___IidParameterIndex_8; }
	inline void set_IidParameterIndex_8(int32_t value)
	{
		___IidParameterIndex_8 = value;
	}

	inline static int32_t get_offset_of_SizeParamIndex_9() { return static_cast<int32_t>(offsetof(MarshalAsAttribute_t3001414182, ___SizeParamIndex_9)); }
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
#endif // MARSHALASATTRIBUTE_T3001414182_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T318310145_H
#define DEFAULTDEPENDENCYATTRIBUTE_T318310145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t318310145  : public Attribute_t28087532
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::loadHint
	int32_t ___loadHint_0;

public:
	inline static int32_t get_offset_of_loadHint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t318310145, ___loadHint_0)); }
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
#endif // DEFAULTDEPENDENCYATTRIBUTE_T318310145_H
#ifndef DLLIMPORTATTRIBUTE_T2319944875_H
#define DLLIMPORTATTRIBUTE_T2319944875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t2319944875  : public Attribute_t28087532
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
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}

	inline static int32_t get_offset_of_EntryPoint_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ___EntryPoint_1)); }
	inline String_t* get_EntryPoint_1() const { return ___EntryPoint_1; }
	inline String_t** get_address_of_EntryPoint_1() { return &___EntryPoint_1; }
	inline void set_EntryPoint_1(String_t* value)
	{
		___EntryPoint_1 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_1), value);
	}

	inline static int32_t get_offset_of_CharSet_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ___CharSet_2)); }
	inline int32_t get_CharSet_2() const { return ___CharSet_2; }
	inline int32_t* get_address_of_CharSet_2() { return &___CharSet_2; }
	inline void set_CharSet_2(int32_t value)
	{
		___CharSet_2 = value;
	}

	inline static int32_t get_offset_of_SetLastError_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ___SetLastError_3)); }
	inline bool get_SetLastError_3() const { return ___SetLastError_3; }
	inline bool* get_address_of_SetLastError_3() { return &___SetLastError_3; }
	inline void set_SetLastError_3(bool value)
	{
		___SetLastError_3 = value;
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_CallingConvention_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ___CallingConvention_6)); }
	inline int32_t get_CallingConvention_6() const { return ___CallingConvention_6; }
	inline int32_t* get_address_of_CallingConvention_6() { return &___CallingConvention_6; }
	inline void set_CallingConvention_6(int32_t value)
	{
		___CallingConvention_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t2319944875, ___ThrowOnUnmappableChar_8)); }
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
#endif // DLLIMPORTATTRIBUTE_T2319944875_H
#ifndef COMEXCEPTION_T3140902804_H
#define COMEXCEPTION_T3140902804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t3140902804  : public ExternalException_t3680635245
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T3140902804_H
#ifndef SAFEBUFFER_T1683731080_H
#define SAFEBUFFER_T1683731080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeBuffer
struct  SafeBuffer_t1683731080  : public SafeHandleZeroOrMinusOneIsInvalid_t2255948713
{
public:
	// System.Boolean System.Runtime.InteropServices.SafeBuffer::inited
	bool ___inited_4;

public:
	inline static int32_t get_offset_of_inited_4() { return static_cast<int32_t>(offsetof(SafeBuffer_t1683731080, ___inited_4)); }
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
#endif // SAFEBUFFER_T1683731080_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (SinkProviderData_t2402854885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1000[3] = 
{
	SinkProviderData_t2402854885::get_offset_of_sinkName_0(),
	SinkProviderData_t2402854885::get_offset_of_children_1(),
	SinkProviderData_t2402854885::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (CrossAppDomainData_t2352988813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1001[3] = 
{
	CrossAppDomainData_t2352988813::get_offset_of__ContextID_0(),
	CrossAppDomainData_t2352988813::get_offset_of__DomainID_1(),
	CrossAppDomainData_t2352988813::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (CrossAppDomainChannel_t2315104105), -1, sizeof(CrossAppDomainChannel_t2315104105_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1002[1] = 
{
	CrossAppDomainChannel_t2315104105_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (CrossAppDomainSink_t3781141245), -1, sizeof(CrossAppDomainSink_t3781141245_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1003[3] = 
{
	CrossAppDomainSink_t3781141245_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t3781141245_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t3781141245::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (ActivationServices_t2101568323), -1, sizeof(ActivationServices_t2101568323_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1004[1] = 
{
	ActivationServices_t2101568323_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (AppDomainLevelActivator_t448969607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1005[2] = 
{
	AppDomainLevelActivator_t448969607::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t448969607::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (ConstructionLevelActivator_t3441869147), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (ContextLevelActivator_t2908972070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1007[1] = 
{
	ContextLevelActivator_t2908972070::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (RemoteActivator_t4192559711), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (UrlAttribute_t641718846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1011[1] = 
{
	UrlAttribute_t641718846::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (GCHandle_t7527549)+ sizeof (RuntimeObject), sizeof(GCHandle_t7527549 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1040[1] = 
{
	GCHandle_t7527549::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (GCHandleType_t2519396023)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1041[5] = 
{
	GCHandleType_t2519396023::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { 0, sizeof(IErrorInfo_t641536068*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (ManagedErrorInfo_t968960341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1043[1] = 
{
	ManagedErrorInfo_t968960341::get_offset_of_m_Exception_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (Marshal_t4066648451), -1, sizeof(Marshal_t4066648451_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1044[4] = 
{
	Marshal_t4066648451_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t4066648451_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
	Marshal_t4066648451_StaticFields::get_offset_of_SetErrorInfoNotAvailable_2(),
	Marshal_t4066648451_StaticFields::get_offset_of_GetErrorInfoNotAvailable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (MarshalAsAttribute_t3001414182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1045[10] = 
{
	MarshalAsAttribute_t3001414182::get_offset_of_MarshalCookie_0(),
	MarshalAsAttribute_t3001414182::get_offset_of_MarshalType_1(),
	MarshalAsAttribute_t3001414182::get_offset_of_MarshalTypeRef_2(),
	MarshalAsAttribute_t3001414182::get_offset_of_SafeArrayUserDefinedSubType_3(),
	MarshalAsAttribute_t3001414182::get_offset_of_utype_4(),
	MarshalAsAttribute_t3001414182::get_offset_of_ArraySubType_5(),
	MarshalAsAttribute_t3001414182::get_offset_of_SafeArraySubType_6(),
	MarshalAsAttribute_t3001414182::get_offset_of_SizeConst_7(),
	MarshalAsAttribute_t3001414182::get_offset_of_IidParameterIndex_8(),
	MarshalAsAttribute_t3001414182::get_offset_of_SizeParamIndex_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (SafeBuffer_t1683731080), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1046[1] = 
{
	SafeBuffer_t1683731080::get_offset_of_inited_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (SafeHandle_t3895719305), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1047[4] = 
{
	SafeHandle_t3895719305::get_offset_of_handle_0(),
	SafeHandle_t3895719305::get_offset_of__state_1(),
	SafeHandle_t3895719305::get_offset_of__ownsHandle_2(),
	SafeHandle_t3895719305::get_offset_of__fullyInitialized_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (UnmanagedFunctionPointerAttribute_t3147888241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1048[1] = 
{
	UnmanagedFunctionPointerAttribute_t3147888241::get_offset_of_m_callingConvention_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (DispIdAttribute_t3721226024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1049[1] = 
{
	DispIdAttribute_t3721226024::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (ComInterfaceType_t22642417)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1050[5] = 
{
	ComInterfaceType_t22642417::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (InterfaceTypeAttribute_t721982198), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1051[1] = 
{
	InterfaceTypeAttribute_t721982198::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (ComDefaultInterfaceAttribute_t1673689346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1052[1] = 
{
	ComDefaultInterfaceAttribute_t1673689346::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (ClassInterfaceType_t3226054422)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1053[4] = 
{
	ClassInterfaceType_t3226054422::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (ClassInterfaceAttribute_t885863883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1054[1] = 
{
	ClassInterfaceAttribute_t885863883::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (ComVisibleAttribute_t750775598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1055[1] = 
{
	ComVisibleAttribute_t750775598::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (TypeLibImportClassAttribute_t1262698916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1056[1] = 
{
	TypeLibImportClassAttribute_t1262698916::get_offset_of__importClassName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (VarEnum_t2376542536)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1057[45] = 
{
	VarEnum_t2376542536::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (UnmanagedType_t1566502458)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1058[39] = 
{
	UnmanagedType_t1566502458::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (ComImportAttribute_t2568720829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (GuidAttribute_t50447241), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1060[1] = 
{
	GuidAttribute_t50447241::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (PreserveSigAttribute_t1197973886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (InAttribute_t647177311), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (OutAttribute_t4266473169), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (OptionalAttribute_t892673169), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (DllImportAttribute_t2319944875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1065[9] = 
{
	DllImportAttribute_t2319944875::get_offset_of__val_0(),
	DllImportAttribute_t2319944875::get_offset_of_EntryPoint_1(),
	DllImportAttribute_t2319944875::get_offset_of_CharSet_2(),
	DllImportAttribute_t2319944875::get_offset_of_SetLastError_3(),
	DllImportAttribute_t2319944875::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t2319944875::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t2319944875::get_offset_of_CallingConvention_6(),
	DllImportAttribute_t2319944875::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t2319944875::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (FieldOffsetAttribute_t2526387090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1066[1] = 
{
	FieldOffsetAttribute_t2526387090::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (ComCompatibleVersionAttribute_t1086515534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1067[4] = 
{
	ComCompatibleVersionAttribute_t1086515534::get_offset_of__major_0(),
	ComCompatibleVersionAttribute_t1086515534::get_offset_of__minor_1(),
	ComCompatibleVersionAttribute_t1086515534::get_offset_of__build_2(),
	ComCompatibleVersionAttribute_t1086515534::get_offset_of__revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (BestFitMappingAttribute_t590427943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1068[1] = 
{
	BestFitMappingAttribute_t590427943::get_offset_of__bestFitMapping_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (CallingConvention_t4013448960)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1069[6] = 
{
	CallingConvention_t4013448960::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (CharSet_t1848487157)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1070[5] = 
{
	CharSet_t1848487157::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (COMException_t3140902804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (ErrorWrapper_t4073739234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1072[1] = 
{
	ErrorWrapper_t4073739234::get_offset_of_m_ErrorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (ExternalException_t3680635245), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (HandleRef_t266381323)+ sizeof (RuntimeObject), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable1074[2] = 
{
	HandleRef_t266381323::get_offset_of_m_wrapper_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HandleRef_t266381323::get_offset_of_m_handle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (MarshalDirectiveException_t1366450096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (RuntimeEnvironment_t3449347116), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (UnsafeNativeMethods_t895510783), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { 0, sizeof(IRestrictedErrorInfo_t27315495*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (WindowsRuntimeMarshal_t1131210221), -1, sizeof(WindowsRuntimeMarshal_t1131210221_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1079[2] = 
{
	WindowsRuntimeMarshal_t1131210221_StaticFields::get_offset_of_s_haveBlueErrorApis_0(),
	WindowsRuntimeMarshal_t1131210221_StaticFields::get_offset_of_s_iidIErrorInfo_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (ActivationArguments_t107926287), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (Ephemeron_t1786086276)+ sizeof (RuntimeObject), sizeof(Ephemeron_t1786086276_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1081[2] = 
{
	Ephemeron_t1786086276::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ephemeron_t1786086276::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1082[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (RuntimeHelpers_t2415089370), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (JitHelpers_t3019189848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (StringFreezingAttribute_t2479390408), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (LoadHint_t2335450933)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1086[4] = 
{
	LoadHint_t2335450933::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (DefaultDependencyAttribute_t318310145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1087[1] = 
{
	DefaultDependencyAttribute_t318310145::get_offset_of_loadHint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (AsyncTaskMethodBuilder_t2061377360)+ sizeof (RuntimeObject), -1, sizeof(AsyncTaskMethodBuilder_t2061377360_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1088[2] = 
{
	AsyncTaskMethodBuilder_t2061377360_StaticFields::get_offset_of_s_cachedCompleted_0(),
	AsyncTaskMethodBuilder_t2061377360::get_offset_of_m_builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1089[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (AsyncTaskCache_t2160353526), -1, sizeof(AsyncTaskCache_t2160353526_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1090[3] = 
{
	AsyncTaskCache_t2160353526_StaticFields::get_offset_of_TrueTask_0(),
	AsyncTaskCache_t2160353526_StaticFields::get_offset_of_FalseTask_1(),
	AsyncTaskCache_t2160353526_StaticFields::get_offset_of_Int32Tasks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (AsyncMethodBuilderCore_t2225757285)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1091[2] = 
{
	AsyncMethodBuilderCore_t2225757285::get_offset_of_m_stateMachine_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncMethodBuilderCore_t2225757285::get_offset_of_m_defaultContextAction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (MoveNextRunner_t2593978962), -1, sizeof(MoveNextRunner_t2593978962_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1092[3] = 
{
	MoveNextRunner_t2593978962::get_offset_of_m_context_0(),
	MoveNextRunner_t2593978962::get_offset_of_m_stateMachine_1(),
	MoveNextRunner_t2593978962_StaticFields::get_offset_of_s_invokeMoveNext_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (ContinuationWrapper_t682062419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1093[3] = 
{
	ContinuationWrapper_t682062419::get_offset_of_m_continuation_0(),
	ContinuationWrapper_t682062419::get_offset_of_m_invokeAction_1(),
	ContinuationWrapper_t682062419::get_offset_of_m_innerTask_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (U3CU3Ec__DisplayClass4_0_t3065977583), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1094[2] = 
{
	U3CU3Ec__DisplayClass4_0_t3065977583::get_offset_of_innerTask_0(),
	U3CU3Ec__DisplayClass4_0_t3065977583::get_offset_of_continuation_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (U3CU3Ec_t3453278036), -1, sizeof(U3CU3Ec_t3453278036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1095[3] = 
{
	U3CU3Ec_t3453278036_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3453278036_StaticFields::get_offset_of_U3CU3E9__6_0_1(),
	U3CU3Ec_t3453278036_StaticFields::get_offset_of_U3CU3E9__6_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (AsyncStateMachineAttribute_t1259059422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (CompilationRelaxations_t2114718759)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1097[2] = 
{
	CompilationRelaxations_t2114718759::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (CompilationRelaxationsAttribute_t3543312884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1098[1] = 
{
	CompilationRelaxationsAttribute_t3543312884::get_offset_of_m_relaxations_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (CompilerGeneratedAttribute_t4027420737), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
