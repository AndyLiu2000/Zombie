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

// System.Byte[]
struct ByteU5BU5D_t3632859112;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t2401441661;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Collections.IDictionary
struct IDictionary_t2209762685;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3559648024;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t3791304912;
// System.IntPtr[]
struct IntPtrU5BU5D_t3595384210;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t2466408233;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t3367109532;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t846109529;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t965062428;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t3265823699;
// UnityEngine.Object
struct Object_t1021359025;
// System.Object[]
struct ObjectU5BU5D_t2019706879;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t2805423354;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t732834135;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t4260430513;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1527797204;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t2897025684;
// System.Void
struct Void_t634856565;
// System.Char[]
struct CharU5BU5D_t1313538844;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1843741840;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3274661381;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2608094953;
// UnityEngine.Events.UnityAction
struct UnityAction_t346187895;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t1913391400;
// UnityEngine.AudioExtensionDefinition
struct AudioExtensionDefinition_t2619545947;
// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition>
struct List_1_t3112446905;
// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition>
struct List_1_t1152808963;
// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension>
struct List_1_t1979932740;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2989019778;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t309420792;
// UnityEngine.ILogHandler
struct ILogHandler_t472844606;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t2424416268;
// System.Delegate[]
struct DelegateU5BU5D_t2205479154;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t2315447825;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t3646726198;
// System.IAsyncResult
struct IAsyncResult_t1336778382;
// System.AsyncCallback
struct AsyncCallback_t1548115960;
// System.Single[]
struct SingleU5BU5D_t1564445887;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t666719839;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1389177168;
// UnityEngine.AudioListener
struct AudioListener_t190731661;
// UnityEngine.AudioListenerExtension
struct AudioListenerExtension_t2678555444;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t1415809440;

struct Exception_t4083038797_marshaled_pinvoke;
struct Exception_t4083038797_marshaled_com;
struct Object_t1021359025_marshaled_com;



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
#ifndef U3CMODULEU3E_T2540223368_H
#define U3CMODULEU3E_T2540223368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2540223368 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2540223368_H
#ifndef MESSAGEEVENTARGS_T429272874_H
#define MESSAGEEVENTARGS_T429272874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t429272874  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t3632859112* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t429272874, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t429272874, ___data_1)); }
	inline ByteU5BU5D_t3632859112* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3632859112** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3632859112* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T429272874_H
#ifndef AUDIOSETTINGS_T2270659813_H
#define AUDIOSETTINGS_T2270659813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings
struct  AudioSettings_t2270659813  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t2270659813_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t2401441661 * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t2270659813_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t2401441661 * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t2401441661 ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t2401441661 * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioConfigurationChanged_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSETTINGS_T2270659813_H
#ifndef AUDIOEXTENSIONDEFINITION_T2619545947_H
#define AUDIOEXTENSIONDEFINITION_T2619545947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionDefinition
struct  AudioExtensionDefinition_t2619545947  : public RuntimeObject
{
public:
	// System.String UnityEngine.AudioExtensionDefinition::assemblyName
	String_t* ___assemblyName_0;
	// System.String UnityEngine.AudioExtensionDefinition::extensionNamespace
	String_t* ___extensionNamespace_1;
	// System.String UnityEngine.AudioExtensionDefinition::extensionTypeName
	String_t* ___extensionTypeName_2;
	// System.Type UnityEngine.AudioExtensionDefinition::extensionType
	Type_t * ___extensionType_3;

public:
	inline static int32_t get_offset_of_assemblyName_0() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t2619545947, ___assemblyName_0)); }
	inline String_t* get_assemblyName_0() const { return ___assemblyName_0; }
	inline String_t** get_address_of_assemblyName_0() { return &___assemblyName_0; }
	inline void set_assemblyName_0(String_t* value)
	{
		___assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_0), value);
	}

	inline static int32_t get_offset_of_extensionNamespace_1() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t2619545947, ___extensionNamespace_1)); }
	inline String_t* get_extensionNamespace_1() const { return ___extensionNamespace_1; }
	inline String_t** get_address_of_extensionNamespace_1() { return &___extensionNamespace_1; }
	inline void set_extensionNamespace_1(String_t* value)
	{
		___extensionNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___extensionNamespace_1), value);
	}

	inline static int32_t get_offset_of_extensionTypeName_2() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t2619545947, ___extensionTypeName_2)); }
	inline String_t* get_extensionTypeName_2() const { return ___extensionTypeName_2; }
	inline String_t** get_address_of_extensionTypeName_2() { return &___extensionTypeName_2; }
	inline void set_extensionTypeName_2(String_t* value)
	{
		___extensionTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensionTypeName_2), value);
	}

	inline static int32_t get_offset_of_extensionType_3() { return static_cast<int32_t>(offsetof(AudioExtensionDefinition_t2619545947, ___extensionType_3)); }
	inline Type_t * get_extensionType_3() const { return ___extensionType_3; }
	inline Type_t ** get_address_of_extensionType_3() { return &___extensionType_3; }
	inline void set_extensionType_3(Type_t * value)
	{
		___extensionType_3 = value;
		Il2CppCodeGenWriteBarrier((&___extensionType_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONDEFINITION_T2619545947_H
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
#ifndef NETFXCOREEXTENSIONS_T2947786637_H
#define NETFXCOREEXTENSIONS_T2947786637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t2947786637  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T2947786637_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T666719839_H
#define PLAYEREDITORCONNECTIONEVENTS_T666719839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t666719839  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t2466408233 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t3367109532 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t3367109532 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t666719839, ___messageTypeSubscribers_0)); }
	inline List_1_t2466408233 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t2466408233 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t2466408233 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t666719839, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t3367109532 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t3367109532 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t3367109532 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t666719839, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t3367109532 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t3367109532 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t3367109532 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T666719839_H
#ifndef UNITYSTRING_T1749546135_H
#define UNITYSTRING_T1749546135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t1749546135  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T1749546135_H
#ifndef SYNCHRONIZATIONCONTEXT_T989572006_H
#define SYNCHRONIZATIONCONTEXT_T989572006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t989572006  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T989572006_H
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
#ifndef UNITYEVENTBASE_T2964726847_H
#define UNITYEVENTBASE_T2964726847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t2964726847  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t846109529 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t965062428 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t2964726847, ___m_Calls_0)); }
	inline InvokableCallList_t846109529 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t846109529 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t846109529 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t2964726847, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t965062428 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t965062428 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t965062428 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t2964726847, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t2964726847, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T2964726847_H
#ifndef INVOKABLECALLLIST_T846109529_H
#define INVOKABLECALLLIST_T846109529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t846109529  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t3265823699 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t3265823699 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t3265823699 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t846109529, ___m_PersistentCalls_0)); }
	inline List_1_t3265823699 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t3265823699 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t3265823699 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t846109529, ___m_RuntimeCalls_1)); }
	inline List_1_t3265823699 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t3265823699 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t3265823699 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t846109529, ___m_ExecutingCalls_2)); }
	inline List_1_t3265823699 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t3265823699 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t3265823699 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t846109529, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T846109529_H
#ifndef CUSTOMYIELDINSTRUCTION_T1608464514_H
#define CUSTOMYIELDINSTRUCTION_T1608464514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1608464514  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1608464514_H
#ifndef BASEINVOKABLECALL_T2701700399_H
#define BASEINVOKABLECALL_T2701700399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2701700399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2701700399_H
#ifndef ARGUMENTCACHE_T309420792_H
#define ARGUMENTCACHE_T309420792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t309420792  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t1021359025 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t309420792, ___m_ObjectArgument_0)); }
	inline Object_t1021359025 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t1021359025 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t1021359025 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t309420792, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t309420792, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t309420792, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t309420792, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t309420792, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T309420792_H
#ifndef STACK_T3408888297_H
#define STACK_T3408888297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t3408888297  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t2019706879* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t3408888297, ____array_0)); }
	inline ObjectU5BU5D_t2019706879* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2019706879** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2019706879* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t3408888297, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t3408888297, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t3408888297, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T3408888297_H
#ifndef PLAYABLEBEHAVIOUR_T3357170312_H
#define PLAYABLEBEHAVIOUR_T3357170312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t3357170312  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T3357170312_H
#ifndef RENDERPIPELINEMANAGER_T2467934844_H
#define RENDERPIPELINEMANAGER_T2467934844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t2467934844  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t2467934844_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t2467934844_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t2467934844_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T2467934844_H
#ifndef STACKTRACEUTILITY_T2764640855_H
#define STACKTRACEUTILITY_T2764640855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t2764640855  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t2764640855_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t2764640855_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T2764640855_H
#ifndef MESSAGETYPESUBSCRIBERS_T1902284933_H
#define MESSAGETYPESUBSCRIBERS_T1902284933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t1902284933  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t4260430513 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1902284933, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1902284933, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t1902284933, ___messageCallback_2)); }
	inline MessageEvent_t4260430513 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t4260430513 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t4260430513 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T1902284933_H
#ifndef PERSISTENTCALLGROUP_T965062428_H
#define PERSISTENTCALLGROUP_T965062428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t965062428  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1527797204 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t965062428, ___m_Calls_0)); }
	inline List_1_t1527797204 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t1527797204 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t1527797204 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T965062428_H
#ifndef NATIVE_T733434214_H
#define NATIVE_T733434214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.Native
struct  Native_t733434214  : public RuntimeObject
{
public:

public:
};

struct Native_t733434214_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> UnityEngine.CSSLayout.Native::s_MeasureFunctions
	Dictionary_2_t2897025684 * ___s_MeasureFunctions_0;

public:
	inline static int32_t get_offset_of_s_MeasureFunctions_0() { return static_cast<int32_t>(offsetof(Native_t733434214_StaticFields, ___s_MeasureFunctions_0)); }
	inline Dictionary_2_t2897025684 * get_s_MeasureFunctions_0() const { return ___s_MeasureFunctions_0; }
	inline Dictionary_2_t2897025684 ** get_address_of_s_MeasureFunctions_0() { return &___s_MeasureFunctions_0; }
	inline void set_s_MeasureFunctions_0(Dictionary_2_t2897025684 * value)
	{
		___s_MeasureFunctions_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_MeasureFunctions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_T733434214_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T2496578177_H
#define TYPEINFERENCERULEATTRIBUTE_T2496578177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t2496578177  : public Attribute_t28087532
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t2496578177, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T2496578177_H
#ifndef REQUIREDBYNATIVECODEATTRIBUTE_T2610302021_H
#define REQUIREDBYNATIVECODEATTRIBUTE_T2610302021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t2610302021  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREDBYNATIVECODEATTRIBUTE_T2610302021_H
#ifndef GENERICSTACK_T1065876605_H
#define GENERICSTACK_T1065876605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_t1065876605  : public Stack_t3408888297
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_T1065876605_H
#ifndef USEDBYNATIVECODEATTRIBUTE_T2182861864_H
#define USEDBYNATIVECODEATTRIBUTE_T2182861864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct  UsedByNativeCodeAttribute_t2182861864  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDBYNATIVECODEATTRIBUTE_T2182861864_H
#ifndef PRESERVEATTRIBUTE_T3725689919_H
#define PRESERVEATTRIBUTE_T3725689919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.PreserveAttribute
struct  PreserveAttribute_t3725689919  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVEATTRIBUTE_T3725689919_H
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
#ifndef UNITYEVENT_1_T3046413025_H
#define UNITYEVENT_1_T3046413025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t3046413025  : public UnityEventBase_t2964726847
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2019706879* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3046413025, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2019706879* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2019706879** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2019706879* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3046413025_H
#ifndef UNITYEVENT_1_T3442194019_H
#define UNITYEVENT_1_T3442194019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t3442194019  : public UnityEventBase_t2964726847
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2019706879* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3442194019, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2019706879* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2019706879** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2019706879* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T3442194019_H
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
#ifndef SINGLE_T2888322970_H
#define SINGLE_T2888322970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2888322970 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t2888322970, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2888322970_H
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
#ifndef PROPERTYNAME_T3455615735_H
#define PROPERTYNAME_T3455615735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t3455615735 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t3455615735, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAME_T3455615735_H
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
#ifndef CSSSIZE_T3437345275_H
#define CSSSIZE_T3437345275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSSize
struct  CSSSize_t3437345275 
{
public:
	// System.Single UnityEngine.CSSLayout.CSSSize::width
	float ___width_0;
	// System.Single UnityEngine.CSSLayout.CSSSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(CSSSize_t3437345275, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(CSSSize_t3437345275, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSSIZE_T3437345275_H
#ifndef SERIALIZEFIELD_T1180760339_H
#define SERIALIZEFIELD_T1180760339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t1180760339  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T1180760339_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T3504298987_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T3504298987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t3504298987  : public Attribute_t28087532
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t3504298987, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T3504298987_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T3059602789_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T3059602789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t3059602789  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T3059602789_H
#ifndef WORKREQUEST_T4031085637_H
#define WORKREQUEST_T4031085637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t4031085637 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t3274661381 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t2608094953 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t4031085637, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t3274661381 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t3274661381 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t3274661381 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t4031085637, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t4031085637, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t2608094953 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t2608094953 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t2608094953 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t4031085637_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t2608094953 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t4031085637_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t2608094953 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T4031085637_H
#ifndef VECTOR2_T2127393906_H
#define VECTOR2_T2127393906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2127393906 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2127393906, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2127393906, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2127393906_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2127393906  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2127393906  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2127393906  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2127393906  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2127393906  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2127393906  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2127393906  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2127393906  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2127393906_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2127393906  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2127393906 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2127393906  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2127393906_StaticFields, ___oneVector_3)); }
	inline Vector2_t2127393906  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2127393906 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2127393906  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2127393906_StaticFields, ___upVector_4)); }
	inline Vector2_t2127393906  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2127393906 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2127393906  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2127393906_StaticFields, ___downVector_5)); }
	inline Vector2_t2127393906  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2127393906 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2127393906  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2127393906_StaticFields, ___leftVector_6)); }
	inline Vector2_t2127393906  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2127393906 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2127393906  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2127393906_StaticFields, ___rightVector_7)); }
	inline Vector2_t2127393906  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2127393906 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2127393906  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2127393906_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2127393906  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2127393906 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2127393906  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2127393906_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2127393906  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2127393906 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2127393906  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2127393906_H
#ifndef VECTOR4_T3297278114_H
#define VECTOR4_T3297278114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3297278114 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3297278114, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3297278114, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3297278114, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3297278114, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3297278114_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3297278114  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3297278114  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3297278114  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3297278114  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3297278114_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3297278114  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3297278114 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3297278114  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3297278114_StaticFields, ___oneVector_6)); }
	inline Vector4_t3297278114  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3297278114 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3297278114  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3297278114_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3297278114  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3297278114 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3297278114  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3297278114_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3297278114  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3297278114 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3297278114  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3297278114_H
#ifndef WAITFORSECONDSREALTIME_T2029382855_H
#define WAITFORSECONDSREALTIME_T2029382855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t2029382855  : public CustomYieldInstruction_t1608464514
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::waitTime
	float ___waitTime_0;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t2029382855, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T2029382855_H
#ifndef UNMARSHALLEDATTRIBUTE_T157288178_H
#define UNMARSHALLEDATTRIBUTE_T157288178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.UnmarshalledAttribute
struct  UnmarshalledAttribute_t157288178  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMARSHALLEDATTRIBUTE_T157288178_H
#ifndef INVOKABLECALL_T1058823530_H
#define INVOKABLECALL_T1058823530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t1058823530  : public BaseInvokableCall_t2701700399
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t346187895 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t1058823530, ___Delegate_0)); }
	inline UnityAction_t346187895 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t346187895 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t346187895 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T1058823530_H
#ifndef UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T1094515114_H
#define UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T1094515114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityAPICompatibilityVersionAttribute
struct  UnityAPICompatibilityVersionAttribute_t1094515114  : public Attribute_t28087532
{
public:
	// System.String UnityEngine.UnityAPICompatibilityVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(UnityAPICompatibilityVersionAttribute_t1094515114, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((&____version_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T1094515114_H
#ifndef UNITYEVENT_T1458170981_H
#define UNITYEVENT_T1458170981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t1458170981  : public UnityEventBase_t2964726847
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2019706879* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t1458170981, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2019706879* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2019706879** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2019706879* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T1458170981_H
#ifndef READONLYATTRIBUTE_T2868231034_H
#define READONLYATTRIBUTE_T2868231034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t2868231034  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T2868231034_H
#ifndef READWRITEATTRIBUTE_T356301658_H
#define READWRITEATTRIBUTE_T356301658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t356301658  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T356301658_H
#ifndef WRITEONLYATTRIBUTE_T2997352692_H
#define WRITEONLYATTRIBUTE_T2997352692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t2997352692  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T2997352692_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T254472015_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T254472015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t254472015  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T254472015_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T3097430248_H
#define UNITYSYNCHRONIZATIONCONTEXT_T3097430248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t3097430248  : public SynchronizationContext_t989572006
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t1913391400 * ___m_AsyncWorkQueue_0;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_0() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t3097430248, ___m_AsyncWorkQueue_0)); }
	inline Queue_1_t1913391400 * get_m_AsyncWorkQueue_0() const { return ___m_AsyncWorkQueue_0; }
	inline Queue_1_t1913391400 ** get_address_of_m_AsyncWorkQueue_0() { return &___m_AsyncWorkQueue_0; }
	inline void set_m_AsyncWorkQueue_0(Queue_1_t1913391400 * value)
	{
		___m_AsyncWorkQueue_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_0), value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t3097430248, ___m_MainThreadID_1)); }
	inline int32_t get_m_MainThreadID_1() const { return ___m_MainThreadID_1; }
	inline int32_t* get_address_of_m_MainThreadID_1() { return &___m_MainThreadID_1; }
	inline void set_m_MainThreadID_1(int32_t value)
	{
		___m_MainThreadID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T3097430248_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T1460431578_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T1460431578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t1460431578  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T1460431578_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T77964081_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T77964081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t77964081  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T77964081_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T1876034474_H
#define EXCLUDEFROMDOCSATTRIBUTE_T1876034474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t1876034474  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T1876034474_H
#ifndef UNITYEXCEPTION_T3856837809_H
#define UNITYEXCEPTION_T3856837809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3856837809  : public Exception_t4083038797
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3856837809_H
#ifndef PREFERBINARYSERIALIZATION_T420836706_H
#define PREFERBINARYSERIALIZATION_T420836706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t420836706  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T420836706_H
#ifndef DEFAULTVALUEATTRIBUTE_T4276880203_H
#define DEFAULTVALUEATTRIBUTE_T4276880203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t4276880203  : public Attribute_t28087532
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t4276880203, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T4276880203_H
#ifndef NATIVECONTAINERATTRIBUTE_T2543609737_H
#define NATIVECONTAINERATTRIBUTE_T2543609737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t2543609737  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T2543609737_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T2056912012_H
#define TOUCHSCREENKEYBOARDTYPE_T2056912012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t2056912012 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t2056912012, ___value___2)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T2056912012_H
#ifndef MESSAGEEVENT_T4260430513_H
#define MESSAGEEVENT_T4260430513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t4260430513  : public UnityEvent_1_t3046413025
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T4260430513_H
#ifndef CONNECTIONCHANGEEVENT_T3367109532_H
#define CONNECTIONCHANGEEVENT_T3367109532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t3367109532  : public UnityEvent_1_t3442194019
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T3367109532_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1742230199_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1742230199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1742230199  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1742230199, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T1742230199_H
#ifndef AUDIOAMBISONICEXTENSIONDEFINITION_T588685663_H
#define AUDIOAMBISONICEXTENSIONDEFINITION_T588685663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioAmbisonicExtensionDefinition
struct  AudioAmbisonicExtensionDefinition_t588685663  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioAmbisonicExtensionDefinition::ambisonicPluginName
	PropertyName_t3455615735  ___ambisonicPluginName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioAmbisonicExtensionDefinition::definition
	AudioExtensionDefinition_t2619545947 * ___definition_1;

public:
	inline static int32_t get_offset_of_ambisonicPluginName_0() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t588685663, ___ambisonicPluginName_0)); }
	inline PropertyName_t3455615735  get_ambisonicPluginName_0() const { return ___ambisonicPluginName_0; }
	inline PropertyName_t3455615735 * get_address_of_ambisonicPluginName_0() { return &___ambisonicPluginName_0; }
	inline void set_ambisonicPluginName_0(PropertyName_t3455615735  value)
	{
		___ambisonicPluginName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioAmbisonicExtensionDefinition_t588685663, ___definition_1)); }
	inline AudioExtensionDefinition_t2619545947 * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_t2619545947 ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_t2619545947 * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOAMBISONICEXTENSIONDEFINITION_T588685663_H
#ifndef AUDIOSPATIALIZEREXTENSIONDEFINITION_T2548323605_H
#define AUDIOSPATIALIZEREXTENSIONDEFINITION_T2548323605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSpatializerExtensionDefinition
struct  AudioSpatializerExtensionDefinition_t2548323605  : public RuntimeObject
{
public:
	// UnityEngine.PropertyName UnityEngine.AudioSpatializerExtensionDefinition::spatializerName
	PropertyName_t3455615735  ___spatializerName_0;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioSpatializerExtensionDefinition::definition
	AudioExtensionDefinition_t2619545947 * ___definition_1;
	// UnityEngine.AudioExtensionDefinition UnityEngine.AudioSpatializerExtensionDefinition::editorDefinition
	AudioExtensionDefinition_t2619545947 * ___editorDefinition_2;

public:
	inline static int32_t get_offset_of_spatializerName_0() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t2548323605, ___spatializerName_0)); }
	inline PropertyName_t3455615735  get_spatializerName_0() const { return ___spatializerName_0; }
	inline PropertyName_t3455615735 * get_address_of_spatializerName_0() { return &___spatializerName_0; }
	inline void set_spatializerName_0(PropertyName_t3455615735  value)
	{
		___spatializerName_0 = value;
	}

	inline static int32_t get_offset_of_definition_1() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t2548323605, ___definition_1)); }
	inline AudioExtensionDefinition_t2619545947 * get_definition_1() const { return ___definition_1; }
	inline AudioExtensionDefinition_t2619545947 ** get_address_of_definition_1() { return &___definition_1; }
	inline void set_definition_1(AudioExtensionDefinition_t2619545947 * value)
	{
		___definition_1 = value;
		Il2CppCodeGenWriteBarrier((&___definition_1), value);
	}

	inline static int32_t get_offset_of_editorDefinition_2() { return static_cast<int32_t>(offsetof(AudioSpatializerExtensionDefinition_t2548323605, ___editorDefinition_2)); }
	inline AudioExtensionDefinition_t2619545947 * get_editorDefinition_2() const { return ___editorDefinition_2; }
	inline AudioExtensionDefinition_t2619545947 ** get_address_of_editorDefinition_2() { return &___editorDefinition_2; }
	inline void set_editorDefinition_2(AudioExtensionDefinition_t2619545947 * value)
	{
		___editorDefinition_2 = value;
		Il2CppCodeGenWriteBarrier((&___editorDefinition_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSPATIALIZEREXTENSIONDEFINITION_T2548323605_H
#ifndef DATASTREAMTYPE_T297655536_H
#define DATASTREAMTYPE_T297655536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t297655536 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataStreamType_t297655536, ___value___2)); }
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
#endif // DATASTREAMTYPE_T297655536_H
#ifndef OBJECT_T1021359025_H
#define OBJECT_T1021359025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021359025  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021359025, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021359025_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021359025_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t1021359025_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021359025_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021359025_H
#ifndef PLAYABLEOUTPUTHANDLE_T1449832350_H
#define PLAYABLEOUTPUTHANDLE_T1449832350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t1449832350 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1449832350, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t1449832350, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T1449832350_H
#ifndef LOGTYPE_T3840911326_H
#define LOGTYPE_T3840911326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t3840911326 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t3840911326, ___value___2)); }
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
#endif // LOGTYPE_T3840911326_H
#ifndef UNITYEVENTCALLSTATE_T3199813229_H
#define UNITYEVENTCALLSTATE_T3199813229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t3199813229 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityEventCallState_t3199813229, ___value___2)); }
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
#endif // UNITYEVENTCALLSTATE_T3199813229_H
#ifndef PLAYABLEHANDLE_T1061587480_H
#define PLAYABLEHANDLE_T1061587480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1061587480 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1061587480, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1061587480, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1061587480_H
#ifndef PERSISTENTLISTENERMODE_T134928423_H
#define PERSISTENTLISTENERMODE_T134928423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t134928423 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t134928423, ___value___2)); }
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
#endif // PERSISTENTLISTENERMODE_T134928423_H
#ifndef AUDIOEXTENSIONMANAGER_T3517719806_H
#define AUDIOEXTENSIONMANAGER_T3517719806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioExtensionManager
struct  AudioExtensionManager_t3517719806  : public RuntimeObject
{
public:

public:
};

struct AudioExtensionManager_t3517719806_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionDefinitions
	List_1_t3112446905 * ___m_ListenerSpatializerExtensionDefinitions_0;
	// System.Collections.Generic.List`1<UnityEngine.AudioSpatializerExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceSpatializerExtensionDefinitions
	List_1_t3112446905 * ___m_SourceSpatializerExtensionDefinitions_1;
	// System.Collections.Generic.List`1<UnityEngine.AudioAmbisonicExtensionDefinition> UnityEngine.AudioExtensionManager::m_SourceAmbisonicDecoderExtensionDefinitions
	List_1_t1152808963 * ___m_SourceAmbisonicDecoderExtensionDefinitions_2;
	// System.Collections.Generic.List`1<UnityEngine.AudioSourceExtension> UnityEngine.AudioExtensionManager::m_SourceExtensionsToUpdate
	List_1_t1979932740 * ___m_SourceExtensionsToUpdate_3;
	// System.Int32 UnityEngine.AudioExtensionManager::m_NextStopIndex
	int32_t ___m_NextStopIndex_4;
	// System.Boolean UnityEngine.AudioExtensionManager::m_BuiltinDefinitionsRegistered
	bool ___m_BuiltinDefinitionsRegistered_5;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerName
	PropertyName_t3455615735  ___m_SpatializerName_6;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_SpatializerExtensionName
	PropertyName_t3455615735  ___m_SpatializerExtensionName_7;
	// UnityEngine.PropertyName UnityEngine.AudioExtensionManager::m_ListenerSpatializerExtensionName
	PropertyName_t3455615735  ___m_ListenerSpatializerExtensionName_8;

public:
	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionDefinitions_0() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_ListenerSpatializerExtensionDefinitions_0)); }
	inline List_1_t3112446905 * get_m_ListenerSpatializerExtensionDefinitions_0() const { return ___m_ListenerSpatializerExtensionDefinitions_0; }
	inline List_1_t3112446905 ** get_address_of_m_ListenerSpatializerExtensionDefinitions_0() { return &___m_ListenerSpatializerExtensionDefinitions_0; }
	inline void set_m_ListenerSpatializerExtensionDefinitions_0(List_1_t3112446905 * value)
	{
		___m_ListenerSpatializerExtensionDefinitions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ListenerSpatializerExtensionDefinitions_0), value);
	}

	inline static int32_t get_offset_of_m_SourceSpatializerExtensionDefinitions_1() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_SourceSpatializerExtensionDefinitions_1)); }
	inline List_1_t3112446905 * get_m_SourceSpatializerExtensionDefinitions_1() const { return ___m_SourceSpatializerExtensionDefinitions_1; }
	inline List_1_t3112446905 ** get_address_of_m_SourceSpatializerExtensionDefinitions_1() { return &___m_SourceSpatializerExtensionDefinitions_1; }
	inline void set_m_SourceSpatializerExtensionDefinitions_1(List_1_t3112446905 * value)
	{
		___m_SourceSpatializerExtensionDefinitions_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceSpatializerExtensionDefinitions_1), value);
	}

	inline static int32_t get_offset_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_SourceAmbisonicDecoderExtensionDefinitions_2)); }
	inline List_1_t1152808963 * get_m_SourceAmbisonicDecoderExtensionDefinitions_2() const { return ___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline List_1_t1152808963 ** get_address_of_m_SourceAmbisonicDecoderExtensionDefinitions_2() { return &___m_SourceAmbisonicDecoderExtensionDefinitions_2; }
	inline void set_m_SourceAmbisonicDecoderExtensionDefinitions_2(List_1_t1152808963 * value)
	{
		___m_SourceAmbisonicDecoderExtensionDefinitions_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceAmbisonicDecoderExtensionDefinitions_2), value);
	}

	inline static int32_t get_offset_of_m_SourceExtensionsToUpdate_3() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_SourceExtensionsToUpdate_3)); }
	inline List_1_t1979932740 * get_m_SourceExtensionsToUpdate_3() const { return ___m_SourceExtensionsToUpdate_3; }
	inline List_1_t1979932740 ** get_address_of_m_SourceExtensionsToUpdate_3() { return &___m_SourceExtensionsToUpdate_3; }
	inline void set_m_SourceExtensionsToUpdate_3(List_1_t1979932740 * value)
	{
		___m_SourceExtensionsToUpdate_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceExtensionsToUpdate_3), value);
	}

	inline static int32_t get_offset_of_m_NextStopIndex_4() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_NextStopIndex_4)); }
	inline int32_t get_m_NextStopIndex_4() const { return ___m_NextStopIndex_4; }
	inline int32_t* get_address_of_m_NextStopIndex_4() { return &___m_NextStopIndex_4; }
	inline void set_m_NextStopIndex_4(int32_t value)
	{
		___m_NextStopIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_BuiltinDefinitionsRegistered_5() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_BuiltinDefinitionsRegistered_5)); }
	inline bool get_m_BuiltinDefinitionsRegistered_5() const { return ___m_BuiltinDefinitionsRegistered_5; }
	inline bool* get_address_of_m_BuiltinDefinitionsRegistered_5() { return &___m_BuiltinDefinitionsRegistered_5; }
	inline void set_m_BuiltinDefinitionsRegistered_5(bool value)
	{
		___m_BuiltinDefinitionsRegistered_5 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerName_6() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_SpatializerName_6)); }
	inline PropertyName_t3455615735  get_m_SpatializerName_6() const { return ___m_SpatializerName_6; }
	inline PropertyName_t3455615735 * get_address_of_m_SpatializerName_6() { return &___m_SpatializerName_6; }
	inline void set_m_SpatializerName_6(PropertyName_t3455615735  value)
	{
		___m_SpatializerName_6 = value;
	}

	inline static int32_t get_offset_of_m_SpatializerExtensionName_7() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_SpatializerExtensionName_7)); }
	inline PropertyName_t3455615735  get_m_SpatializerExtensionName_7() const { return ___m_SpatializerExtensionName_7; }
	inline PropertyName_t3455615735 * get_address_of_m_SpatializerExtensionName_7() { return &___m_SpatializerExtensionName_7; }
	inline void set_m_SpatializerExtensionName_7(PropertyName_t3455615735  value)
	{
		___m_SpatializerExtensionName_7 = value;
	}

	inline static int32_t get_offset_of_m_ListenerSpatializerExtensionName_8() { return static_cast<int32_t>(offsetof(AudioExtensionManager_t3517719806_StaticFields, ___m_ListenerSpatializerExtensionName_8)); }
	inline PropertyName_t3455615735  get_m_ListenerSpatializerExtensionName_8() const { return ___m_ListenerSpatializerExtensionName_8; }
	inline PropertyName_t3455615735 * get_address_of_m_ListenerSpatializerExtensionName_8() { return &___m_ListenerSpatializerExtensionName_8; }
	inline void set_m_ListenerSpatializerExtensionName_8(PropertyName_t3455615735  value)
	{
		___m_ListenerSpatializerExtensionName_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOEXTENSIONMANAGER_T3517719806_H
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
#ifndef TYPEINFERENCERULES_T182862299_H
#define TYPEINFERENCERULES_T182862299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t182862299 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t182862299, ___value___2)); }
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
#endif // TYPEINFERENCERULES_T182862299_H
#ifndef CSSMEASUREMODE_T3315692221_H
#define CSSMEASUREMODE_T3315692221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureMode
struct  CSSMeasureMode_t3315692221 
{
public:
	// System.Int32 UnityEngine.CSSLayout.CSSMeasureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CSSMeasureMode_t3315692221, ___value___2)); }
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
#endif // CSSMEASUREMODE_T3315692221_H
#ifndef TRACKEDREFERENCE_T492358297_H
#define TRACKEDREFERENCE_T492358297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t492358297  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t492358297, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t492358297_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t492358297_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T492358297_H
#ifndef PERSISTENTCALL_T963673904_H
#define PERSISTENTCALL_T963673904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t963673904  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t1021359025 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t309420792 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t963673904, ___m_Target_0)); }
	inline Object_t1021359025 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t1021359025 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t1021359025 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t963673904, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t963673904, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t963673904, ___m_Arguments_3)); }
	inline ArgumentCache_t309420792 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t309420792 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t309420792 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t963673904, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T963673904_H
#ifndef SCRIPTABLEOBJECT_T1616218996_H
#define SCRIPTABLEOBJECT_T1616218996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1616218996  : public Object_t1021359025
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1616218996_marshaled_pinvoke : public Object_t1021359025_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1616218996_marshaled_com : public Object_t1021359025_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1616218996_H
#ifndef LOGGER_T3471711689_H
#define LOGGER_T3471711689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t3471711689  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t3471711689, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t3471711689, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t3471711689, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T3471711689_H
#ifndef COMPONENT_T3923053789_H
#define COMPONENT_T3923053789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3923053789  : public Object_t1021359025
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3923053789_H
#ifndef SCRIPTPLAYABLEOUTPUT_T2611847929_H
#define SCRIPTPLAYABLEOUTPUT_T2611847929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t2611847929 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t1449832350  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t2611847929, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1449832350  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1449832350 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1449832350  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T2611847929_H
#ifndef AUDIOPLAYABLEOUTPUT_T2813944530_H
#define AUDIOPLAYABLEOUTPUT_T2813944530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioPlayableOutput
struct  AudioPlayableOutput_t2813944530 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t1449832350  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t2813944530, ___m_Handle_0)); }
	inline PlayableOutputHandle_t1449832350  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t1449832350 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t1449832350  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYABLEOUTPUT_T2813944530_H
#ifndef AUDIOCLIPPLAYABLE_T71276401_H
#define AUDIOCLIPPLAYABLE_T71276401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioClipPlayable
struct  AudioClipPlayable_t71276401 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t1061587480  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t71276401, ___m_Handle_0)); }
	inline PlayableHandle_t1061587480  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1061587480 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1061587480  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIPPLAYABLE_T71276401_H
#ifndef AUDIOMIXERPLAYABLE_T1164922868_H
#define AUDIOMIXERPLAYABLE_T1164922868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Audio.AudioMixerPlayable
struct  AudioMixerPlayable_t1164922868 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t1061587480  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t1164922868, ___m_Handle_0)); }
	inline PlayableHandle_t1061587480  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1061587480 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1061587480  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMIXERPLAYABLE_T1164922868_H
#ifndef PLAYABLEBINDING_T787308177_H
#define PLAYABLEBINDING_T787308177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t787308177 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t1021359025 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t787308177__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t787308177, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t787308177, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t787308177, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t1021359025 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t1021359025 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t1021359025 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t787308177, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t787308177_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t2424416268* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t787308177_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t2424416268* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t2424416268** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t2424416268* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t787308177_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t787308177_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t1021359025_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t787308177__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t787308177_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t1021359025_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t787308177__padding[1];
	};
};
#endif // PLAYABLEBINDING_T787308177_H
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
#ifndef AUDIOCLIP_T593923754_H
#define AUDIOCLIP_T593923754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t593923754  : public Object_t1021359025
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t2315447825 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t3646726198 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t593923754, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t2315447825 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t2315447825 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t2315447825 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t593923754, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t3646726198 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t3646726198 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t3646726198 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T593923754_H
#ifndef BEHAVIOUR_T490859331_H
#define BEHAVIOUR_T490859331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t490859331  : public Component_t3923053789
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T490859331_H
#ifndef PLAYABLEASSET_T916859770_H
#define PLAYABLEASSET_T916859770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t916859770  : public ScriptableObject_t1616218996
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T916859770_H
#ifndef CSSMEASUREFUNC_T2688705928_H
#define CSSMEASUREFUNC_T2688705928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureFunc
struct  CSSMeasureFunc_t2688705928  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREFUNC_T2688705928_H
#ifndef PCMREADERCALLBACK_T2315447825_H
#define PCMREADERCALLBACK_T2315447825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMReaderCallback
struct  PCMReaderCallback_t2315447825  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMREADERCALLBACK_T2315447825_H
#ifndef PCMSETPOSITIONCALLBACK_T3646726198_H
#define PCMSETPOSITIONCALLBACK_T3646726198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip/PCMSetPositionCallback
struct  PCMSetPositionCallback_t3646726198  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PCMSETPOSITIONCALLBACK_T3646726198_H
#ifndef PLAYERCONNECTION_T1585413793_H
#define PLAYERCONNECTION_T1585413793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t1585413793  : public ScriptableObject_t1616218996
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t666719839 * ___m_PlayerEditorConnectionEvents_2;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t1389177168 * ___m_connectedPlayers_3;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t1585413793, ___m_PlayerEditorConnectionEvents_2)); }
	inline PlayerEditorConnectionEvents_t666719839 * get_m_PlayerEditorConnectionEvents_2() const { return ___m_PlayerEditorConnectionEvents_2; }
	inline PlayerEditorConnectionEvents_t666719839 ** get_address_of_m_PlayerEditorConnectionEvents_2() { return &___m_PlayerEditorConnectionEvents_2; }
	inline void set_m_PlayerEditorConnectionEvents_2(PlayerEditorConnectionEvents_t666719839 * value)
	{
		___m_PlayerEditorConnectionEvents_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_2), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t1585413793, ___m_connectedPlayers_3)); }
	inline List_1_t1389177168 * get_m_connectedPlayers_3() const { return ___m_connectedPlayers_3; }
	inline List_1_t1389177168 ** get_address_of_m_connectedPlayers_3() { return &___m_connectedPlayers_3; }
	inline void set_m_connectedPlayers_3(List_1_t1389177168 * value)
	{
		___m_connectedPlayers_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_3), value);
	}
};

struct PlayerConnection_t1585413793_StaticFields
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t1585413793 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t1585413793_StaticFields, ___s_Instance_4)); }
	inline PlayerConnection_t1585413793 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline PlayerConnection_t1585413793 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(PlayerConnection_t1585413793 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_T1585413793_H
#ifndef AUDIOLISTENEREXTENSION_T2678555444_H
#define AUDIOLISTENEREXTENSION_T2678555444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListenerExtension
struct  AudioListenerExtension_t2678555444  : public ScriptableObject_t1616218996
{
public:
	// UnityEngine.AudioListener UnityEngine.AudioListenerExtension::m_audioListener
	AudioListener_t190731661 * ___m_audioListener_2;

public:
	inline static int32_t get_offset_of_m_audioListener_2() { return static_cast<int32_t>(offsetof(AudioListenerExtension_t2678555444, ___m_audioListener_2)); }
	inline AudioListener_t190731661 * get_m_audioListener_2() const { return ___m_audioListener_2; }
	inline AudioListener_t190731661 ** get_address_of_m_audioListener_2() { return &___m_audioListener_2; }
	inline void set_m_audioListener_2(AudioListener_t190731661 * value)
	{
		___m_audioListener_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_audioListener_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENEREXTENSION_T2678555444_H
#ifndef AUDIOCONFIGURATIONCHANGEHANDLER_T2401441661_H
#define AUDIOCONFIGURATIONCHANGEHANDLER_T2401441661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct  AudioConfigurationChangeHandler_t2401441661  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCONFIGURATIONCHANGEHANDLER_T2401441661_H
#ifndef UNITYACTION_T346187895_H
#define UNITYACTION_T346187895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t346187895  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T346187895_H
#ifndef AUDIOLISTENER_T190731661_H
#define AUDIOLISTENER_T190731661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListener
struct  AudioListener_t190731661  : public Behaviour_t490859331
{
public:
	// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::spatializerExtension
	AudioListenerExtension_t2678555444 * ___spatializerExtension_2;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioListener_t190731661, ___spatializerExtension_2)); }
	inline AudioListenerExtension_t2678555444 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioListenerExtension_t2678555444 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioListenerExtension_t2678555444 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENER_T190731661_H
#ifndef AUDIOSOURCE_T971035350_H
#define AUDIOSOURCE_T971035350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t971035350  : public Behaviour_t490859331
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t1415809440 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t1415809440 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t971035350, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t1415809440 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t1415809440 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t1415809440 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t971035350, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t1415809440 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t1415809440 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t1415809440 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T971035350_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3400 = { sizeof (SerializeField_t1180760339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3401 = { sizeof (PreferBinarySerialization_t420836706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3402 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3403 = { sizeof (StackTraceUtility_t2764640855), -1, sizeof(StackTraceUtility_t2764640855_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3403[1] = 
{
	StackTraceUtility_t2764640855_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3404 = { sizeof (UnityException_t3856837809), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3405 = { sizeof (TouchScreenKeyboardType_t2056912012)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3405[12] = 
{
	TouchScreenKeyboardType_t2056912012::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3406 = { sizeof (TrackedReference_t492358297), sizeof(TrackedReference_t492358297_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3406[1] = 
{
	TrackedReference_t492358297::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3407 = { sizeof (UnityAPICompatibilityVersionAttribute_t1094515114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3407[1] = 
{
	UnityAPICompatibilityVersionAttribute_t1094515114::get_offset_of__version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3408 = { sizeof (PersistentListenerMode_t134928423)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3408[8] = 
{
	PersistentListenerMode_t134928423::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3409 = { sizeof (ArgumentCache_t309420792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3409[6] = 
{
	ArgumentCache_t309420792::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t309420792::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t309420792::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t309420792::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t309420792::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t309420792::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3410 = { sizeof (BaseInvokableCall_t2701700399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3411 = { sizeof (InvokableCall_t1058823530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3411[1] = 
{
	InvokableCall_t1058823530::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3412 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3412[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3413 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3413[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3414 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3414[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3415 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3415[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3416 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3416[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3417 = { sizeof (UnityEventCallState_t3199813229)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3417[4] = 
{
	UnityEventCallState_t3199813229::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3418 = { sizeof (PersistentCall_t963673904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3418[5] = 
{
	PersistentCall_t963673904::get_offset_of_m_Target_0(),
	PersistentCall_t963673904::get_offset_of_m_MethodName_1(),
	PersistentCall_t963673904::get_offset_of_m_Mode_2(),
	PersistentCall_t963673904::get_offset_of_m_Arguments_3(),
	PersistentCall_t963673904::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3419 = { sizeof (PersistentCallGroup_t965062428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3419[1] = 
{
	PersistentCallGroup_t965062428::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3420 = { sizeof (InvokableCallList_t846109529), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3420[4] = 
{
	InvokableCallList_t846109529::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t846109529::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t846109529::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t846109529::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3421 = { sizeof (UnityEventBase_t2964726847), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3421[4] = 
{
	UnityEventBase_t2964726847::get_offset_of_m_Calls_0(),
	UnityEventBase_t2964726847::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t2964726847::get_offset_of_m_TypeName_2(),
	UnityEventBase_t2964726847::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3422 = { sizeof (UnityAction_t346187895), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3423 = { sizeof (UnityEvent_t1458170981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3423[1] = 
{
	UnityEvent_t1458170981::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3424 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3425 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3425[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3426 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3427 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3427[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3428 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3429 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3429[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3430 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3431 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3431[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3432 = { sizeof (UnityString_t1749546135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3433 = { sizeof (UnitySynchronizationContext_t3097430248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3433[2] = 
{
	UnitySynchronizationContext_t3097430248::get_offset_of_m_AsyncWorkQueue_0(),
	UnitySynchronizationContext_t3097430248::get_offset_of_m_MainThreadID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3434 = { sizeof (WorkRequest_t4031085637)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3434[3] = 
{
	WorkRequest_t4031085637::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t4031085637::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t4031085637::get_offset_of_m_WaitHandle_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3435 = { sizeof (Vector2_t2127393906)+ sizeof (RuntimeObject), sizeof(Vector2_t2127393906 ), sizeof(Vector2_t2127393906_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3435[11] = 
{
	Vector2_t2127393906::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t2127393906::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t2127393906_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t2127393906_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t2127393906_StaticFields::get_offset_of_upVector_4(),
	Vector2_t2127393906_StaticFields::get_offset_of_downVector_5(),
	Vector2_t2127393906_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t2127393906_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t2127393906_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t2127393906_StaticFields::get_offset_of_negativeInfinityVector_9(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3436 = { sizeof (Vector4_t3297278114)+ sizeof (RuntimeObject), sizeof(Vector4_t3297278114 ), sizeof(Vector4_t3297278114_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3436[9] = 
{
	0,
	Vector4_t3297278114::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3297278114::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3297278114::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3297278114::get_offset_of_w_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t3297278114_StaticFields::get_offset_of_zeroVector_5(),
	Vector4_t3297278114_StaticFields::get_offset_of_oneVector_6(),
	Vector4_t3297278114_StaticFields::get_offset_of_positiveInfinityVector_7(),
	Vector4_t3297278114_StaticFields::get_offset_of_negativeInfinityVector_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3437 = { sizeof (WaitForSecondsRealtime_t2029382855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3437[1] = 
{
	WaitForSecondsRealtime_t2029382855::get_offset_of_waitTime_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3438 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3439 = { sizeof (UnmarshalledAttribute_t157288178), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3440 = { sizeof (ThreadAndSerializationSafeAttribute_t3059602789), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3441 = { sizeof (ReadOnlyAttribute_t2868231034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3442 = { sizeof (ReadWriteAttribute_t356301658), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3443 = { sizeof (WriteOnlyAttribute_t2997352692), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3444 = { sizeof (DeallocateOnJobCompletionAttribute_t254472015), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3445 = { sizeof (NativeContainerAttribute_t2543609737), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3446 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t1460431578), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3447 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t77964081), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3448 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3449 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3450 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3451 = { sizeof (PlayableBinding_t787308177)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t787308177_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3451[6] = 
{
	PlayableBinding_t787308177_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t787308177_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t787308177::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t787308177::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t787308177::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t787308177::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3452 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3453 = { sizeof (PlayableAsset_t916859770), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3454 = { sizeof (PlayableBehaviour_t3357170312), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3455 = { sizeof (ScriptPlayableOutput_t2611847929)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t2611847929 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3455[1] = 
{
	ScriptPlayableOutput_t2611847929::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3456 = { sizeof (DefaultValueAttribute_t4276880203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3456[1] = 
{
	DefaultValueAttribute_t4276880203::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3457 = { sizeof (ExcludeFromDocsAttribute_t1876034474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3458 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3459 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3460 = { sizeof (Logger_t3471711689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3460[3] = 
{
	Logger_t3471711689::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t3471711689::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t3471711689::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3461 = { sizeof (MessageEventArgs_t429272874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3461[2] = 
{
	MessageEventArgs_t429272874::get_offset_of_playerId_0(),
	MessageEventArgs_t429272874::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3462 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3463 = { sizeof (PlayerConnection_t1585413793), -1, sizeof(PlayerConnection_t1585413793_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3463[3] = 
{
	PlayerConnection_t1585413793::get_offset_of_m_PlayerEditorConnectionEvents_2(),
	PlayerConnection_t1585413793::get_offset_of_m_connectedPlayers_3(),
	PlayerConnection_t1585413793_StaticFields::get_offset_of_s_Instance_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3464 = { sizeof (PlayerEditorConnectionEvents_t666719839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3464[3] = 
{
	PlayerEditorConnectionEvents_t666719839::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t666719839::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t666719839::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3465 = { sizeof (MessageEvent_t4260430513), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3466 = { sizeof (ConnectionChangeEvent_t3367109532), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3467 = { sizeof (MessageTypeSubscribers_t1902284933), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3467[3] = 
{
	MessageTypeSubscribers_t1902284933::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t1902284933::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t1902284933::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3468 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1742230199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3468[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t1742230199::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3469 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3470 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3471 = { sizeof (RenderPipelineManager_t2467934844), -1, sizeof(RenderPipelineManager_t2467934844_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3471[2] = 
{
	RenderPipelineManager_t2467934844_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t2467934844_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3472 = { sizeof (PreserveAttribute_t3725689919), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3473 = { sizeof (UsedByNativeCodeAttribute_t2182861864), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3474 = { sizeof (RequiredByNativeCodeAttribute_t2610302021), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3475 = { sizeof (FormerlySerializedAsAttribute_t3504298987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3475[1] = 
{
	FormerlySerializedAsAttribute_t3504298987::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3476 = { sizeof (TypeInferenceRules_t182862299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3476[5] = 
{
	TypeInferenceRules_t182862299::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3477 = { sizeof (TypeInferenceRuleAttribute_t2496578177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3477[1] = 
{
	TypeInferenceRuleAttribute_t2496578177::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3478 = { sizeof (GenericStack_t1065876605), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3479 = { sizeof (NetFxCoreExtensions_t2947786637), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3480 = { sizeof (CSSMeasureFunc_t2688705928), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3481 = { sizeof (CSSMeasureMode_t3315692221)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3481[4] = 
{
	CSSMeasureMode_t3315692221::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3482 = { sizeof (CSSSize_t3437345275)+ sizeof (RuntimeObject), sizeof(CSSSize_t3437345275 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3482[2] = 
{
	CSSSize_t3437345275::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CSSSize_t3437345275::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3483 = { sizeof (Native_t733434214), -1, sizeof(Native_t733434214_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3483[1] = 
{
	Native_t733434214_StaticFields::get_offset_of_s_MeasureFunctions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3484 = { sizeof (U3CModuleU3E_t2540223368), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3485 = { sizeof (AudioSettings_t2270659813), -1, sizeof(AudioSettings_t2270659813_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3485[1] = 
{
	AudioSettings_t2270659813_StaticFields::get_offset_of_OnAudioConfigurationChanged_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3486 = { sizeof (AudioConfigurationChangeHandler_t2401441661), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3487 = { sizeof (AudioExtensionManager_t3517719806), -1, sizeof(AudioExtensionManager_t3517719806_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3487[9] = 
{
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_ListenerSpatializerExtensionDefinitions_0(),
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_SourceSpatializerExtensionDefinitions_1(),
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_SourceAmbisonicDecoderExtensionDefinitions_2(),
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_SourceExtensionsToUpdate_3(),
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_NextStopIndex_4(),
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_BuiltinDefinitionsRegistered_5(),
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_SpatializerName_6(),
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_SpatializerExtensionName_7(),
	AudioExtensionManager_t3517719806_StaticFields::get_offset_of_m_ListenerSpatializerExtensionName_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3488 = { sizeof (AudioClip_t593923754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3488[2] = 
{
	AudioClip_t593923754::get_offset_of_m_PCMReaderCallback_2(),
	AudioClip_t593923754::get_offset_of_m_PCMSetPositionCallback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3489 = { sizeof (PCMReaderCallback_t2315447825), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3490 = { sizeof (PCMSetPositionCallback_t3646726198), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3491 = { sizeof (AudioListener_t190731661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3491[1] = 
{
	AudioListener_t190731661::get_offset_of_spatializerExtension_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3492 = { sizeof (AudioSource_t971035350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3492[2] = 
{
	AudioSource_t971035350::get_offset_of_spatializerExtension_2(),
	AudioSource_t971035350::get_offset_of_ambisonicExtension_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3493 = { sizeof (AudioMixerPlayable_t1164922868)+ sizeof (RuntimeObject), sizeof(AudioMixerPlayable_t1164922868 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3493[1] = 
{
	AudioMixerPlayable_t1164922868::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3494 = { sizeof (AudioClipPlayable_t71276401)+ sizeof (RuntimeObject), sizeof(AudioClipPlayable_t71276401 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3494[1] = 
{
	AudioClipPlayable_t71276401::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3495 = { sizeof (AudioPlayableOutput_t2813944530)+ sizeof (RuntimeObject), sizeof(AudioPlayableOutput_t2813944530 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3495[1] = 
{
	AudioPlayableOutput_t2813944530::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3496 = { sizeof (AudioExtensionDefinition_t2619545947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3496[4] = 
{
	AudioExtensionDefinition_t2619545947::get_offset_of_assemblyName_0(),
	AudioExtensionDefinition_t2619545947::get_offset_of_extensionNamespace_1(),
	AudioExtensionDefinition_t2619545947::get_offset_of_extensionTypeName_2(),
	AudioExtensionDefinition_t2619545947::get_offset_of_extensionType_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3497 = { sizeof (AudioSpatializerExtensionDefinition_t2548323605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3497[3] = 
{
	AudioSpatializerExtensionDefinition_t2548323605::get_offset_of_spatializerName_0(),
	AudioSpatializerExtensionDefinition_t2548323605::get_offset_of_definition_1(),
	AudioSpatializerExtensionDefinition_t2548323605::get_offset_of_editorDefinition_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3498 = { sizeof (AudioAmbisonicExtensionDefinition_t588685663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3498[2] = 
{
	AudioAmbisonicExtensionDefinition_t588685663::get_offset_of_ambisonicPluginName_0(),
	AudioAmbisonicExtensionDefinition_t588685663::get_offset_of_definition_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3499 = { sizeof (AudioListenerExtension_t2678555444), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3499[1] = 
{
	AudioListenerExtension_t2678555444::get_offset_of_m_audioListener_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
