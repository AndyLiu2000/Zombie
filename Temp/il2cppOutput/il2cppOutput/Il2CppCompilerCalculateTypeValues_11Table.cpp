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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2682980787;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1020550882;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2900323292;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t3614854660;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t2346709998;
// System.Byte[]
struct ByteU5BU5D_t2516310093;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t3890721306;
// System.Resources.IResourceReader
struct IResourceReader_t3007756804;
// System.Collections.Hashtable
struct Hashtable_t776164328;
// System.Resources.ResourceReader
struct ResourceReader_t1860394420;
// System.Resources.ResourceManager
struct ResourceManager_t1704110741;
// System.Collections.IDictionary
struct IDictionary_t3780516851;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3445273258;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4209346658;
// System.IntPtr[]
struct IntPtrU5BU5D_t1109855381;
// System.Resources.NameOrId
struct NameOrId_t3060796736;
// System.Resources.ResourceManager/ResourceManagerMediator
struct ResourceManagerMediator_t1882107298;
// System.IO.BinaryReader
struct BinaryReader_t2689104570;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator>
struct Dictionary_2_t2827352979;
// System.Int32[]
struct Int32U5BU5D_t890136779;
// System.RuntimeType[]
struct RuntimeTypeU5BU5D_t639542928;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t2692286363;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t250308475;
// System.Int32
struct Int32_t3818132350;
// System.Char[]
struct CharU5BU5D_t1307605391;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t2358268871;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3499554945;
// System.Void
struct Void_t996922892;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t4142488538;
// System.Exception[]
struct ExceptionU5BU5D_t2895003613;
// System.Type[]
struct TypeU5BU5D_t3464161425;
// System.Reflection.Assembly
struct Assembly_t1335047557;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2978779363;
// System.Security.Policy.Evidence
struct Evidence_t3255114419;
// System.Security.PermissionSet
struct PermissionSet_t4265104243;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2989360121;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t828263112;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1550289478;
// System.Byte
struct Byte_t3548368036;
// System.Globalization.CultureInfo
struct CultureInfo_t816937530;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t4257165617;
// System.Version
struct Version_t1549971293;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_t1539043596;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t2914742105;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t3660872792;
// System.Resources.IResourceGroveler
struct IResourceGroveler_t2854783901;
// System.Delegate[]
struct DelegateU5BU5D_t3948460075;
// System.Reflection.TypeFilter
struct TypeFilter_t2563343322;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t3960867763;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t2069321284;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1692686078;
// System.Delegate
struct Delegate_t1558589342;
// System.IAsyncResult
struct IAsyncResult_t1680407113;
// System.AsyncCallback
struct AsyncCallback_t3624585834;
// System.Reflection.Module
struct Module_t2558395130;

struct Exception_t2541973588_marshaled_pinvoke;
struct Exception_t2541973588_marshaled_com;
struct CultureInfo_t816937530_marshaled_pinvoke;
struct CultureInfo_t816937530_marshaled_com;
struct Assembly_t1335047557_marshaled_pinvoke;
struct Assembly_t1335047557_marshaled_com;



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
#ifndef MARSHALBYREFOBJECT_T2838402765_H
#define MARSHALBYREFOBJECT_T2838402765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2838402765  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2682980787 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2838402765, ____identity_0)); }
	inline ServerIdentity_t2682980787 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2682980787 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2682980787 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2838402765_marshaled_pinvoke
{
	ServerIdentity_t2682980787 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2838402765_marshaled_com
{
	ServerIdentity_t2682980787 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2838402765_H
#ifndef LOCALVARIABLEINFO_T397290019_H
#define LOCALVARIABLEINFO_T397290019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.LocalVariableInfo
struct  LocalVariableInfo_t397290019  : public RuntimeObject
{
public:
	// System.Type System.Reflection.LocalVariableInfo::type
	Type_t * ___type_0;
	// System.Boolean System.Reflection.LocalVariableInfo::is_pinned
	bool ___is_pinned_1;
	// System.UInt16 System.Reflection.LocalVariableInfo::position
	uint16_t ___position_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t397290019, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_is_pinned_1() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t397290019, ___is_pinned_1)); }
	inline bool get_is_pinned_1() const { return ___is_pinned_1; }
	inline bool* get_address_of_is_pinned_1() { return &___is_pinned_1; }
	inline void set_is_pinned_1(bool value)
	{
		___is_pinned_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t397290019, ___position_2)); }
	inline uint16_t get_position_2() const { return ___position_2; }
	inline uint16_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(uint16_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.LocalVariableInfo
struct LocalVariableInfo_t397290019_marshaled_pinvoke
{
	Type_t * ___type_0;
	int32_t ___is_pinned_1;
	uint16_t ___position_2;
};
// Native definition for COM marshalling of System.Reflection.LocalVariableInfo
struct LocalVariableInfo_t397290019_marshaled_com
{
	Type_t * ___type_0;
	int32_t ___is_pinned_1;
	uint16_t ___position_2;
};
#endif // LOCALVARIABLEINFO_T397290019_H
#ifndef INTROSPECTIONEXTENSIONS_T941276245_H
#define INTROSPECTIONEXTENSIONS_T941276245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.IntrospectionExtensions
struct  IntrospectionExtensions_t941276245  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTROSPECTIONEXTENSIONS_T941276245_H
#ifndef CUSTOMATTRIBUTEEXTENSIONS_T846375311_H
#define CUSTOMATTRIBUTEEXTENSIONS_T846375311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeExtensions
struct  CustomAttributeExtensions_t846375311  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEEXTENSIONS_T846375311_H
#ifndef BINDER_T3651822128_H
#define BINDER_T3651822128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t3651822128  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T3651822128_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef CUSTOMATTRIBUTEDATA_T2834530432_H
#define CUSTOMATTRIBUTEDATA_T2834530432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2834530432  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t1020550882 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData/LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t2346709998 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2834530432, ___ctorInfo_0)); }
	inline ConstructorInfo_t1020550882 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t1020550882 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t1020550882 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2834530432, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2834530432, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2834530432, ___lazyData_3)); }
	inline LazyCAttrData_t2346709998 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t2346709998 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t2346709998 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((&___lazyData_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T2834530432_H
#ifndef RESOLVEEVENTHOLDER_T2978779363_H
#define RESOLVEEVENTHOLDER_T2978779363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t2978779363  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T2978779363_H
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
#ifndef STRONGNAMEKEYPAIR_T4257165617_H
#define STRONGNAMEKEYPAIR_T4257165617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t4257165617  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t2516310093* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t2516310093* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t3890721306 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4257165617, ____publicKey_0)); }
	inline ByteU5BU5D_t2516310093* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t2516310093** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t2516310093* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4257165617, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4257165617, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4257165617, ____keyPairArray_3)); }
	inline ByteU5BU5D_t2516310093* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t2516310093** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t2516310093* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4257165617, ____rsa_4)); }
	inline RSA_t3890721306 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t3890721306 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t3890721306 * value)
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T4257165617_H
#ifndef RESOURCESET_T635877287_H
#define RESOURCESET_T635877287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t635877287  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t776164328 * ___Table_1;
	// System.Collections.Hashtable System.Resources.ResourceSet::_caseInsensitiveTable
	Hashtable_t776164328 * ____caseInsensitiveTable_2;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t635877287, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t635877287, ___Table_1)); }
	inline Hashtable_t776164328 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t776164328 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t776164328 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_2() { return static_cast<int32_t>(offsetof(ResourceSet_t635877287, ____caseInsensitiveTable_2)); }
	inline Hashtable_t776164328 * get__caseInsensitiveTable_2() const { return ____caseInsensitiveTable_2; }
	inline Hashtable_t776164328 ** get_address_of__caseInsensitiveTable_2() { return &____caseInsensitiveTable_2; }
	inline void set__caseInsensitiveTable_2(Hashtable_t776164328 * value)
	{
		____caseInsensitiveTable_2 = value;
		Il2CppCodeGenWriteBarrier((&____caseInsensitiveTable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T635877287_H
#ifndef RESOURCEENUMERATOR_T1170083932_H
#define RESOURCEENUMERATOR_T1170083932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t1170083932  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::_reader
	ResourceReader_t1860394420 * ____reader_0;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::_currentIsValid
	bool ____currentIsValid_1;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::_currentName
	int32_t ____currentName_2;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::_dataPosition
	int32_t ____dataPosition_3;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1170083932, ____reader_0)); }
	inline ResourceReader_t1860394420 * get__reader_0() const { return ____reader_0; }
	inline ResourceReader_t1860394420 ** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(ResourceReader_t1860394420 * value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier((&____reader_0), value);
	}

	inline static int32_t get_offset_of__currentIsValid_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1170083932, ____currentIsValid_1)); }
	inline bool get__currentIsValid_1() const { return ____currentIsValid_1; }
	inline bool* get_address_of__currentIsValid_1() { return &____currentIsValid_1; }
	inline void set__currentIsValid_1(bool value)
	{
		____currentIsValid_1 = value;
	}

	inline static int32_t get_offset_of__currentName_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1170083932, ____currentName_2)); }
	inline int32_t get__currentName_2() const { return ____currentName_2; }
	inline int32_t* get_address_of__currentName_2() { return &____currentName_2; }
	inline void set__currentName_2(int32_t value)
	{
		____currentName_2 = value;
	}

	inline static int32_t get_offset_of__dataPosition_3() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1170083932, ____dataPosition_3)); }
	inline int32_t get__dataPosition_3() const { return ____dataPosition_3; }
	inline int32_t* get_address_of__dataPosition_3() { return &____dataPosition_3; }
	inline void set__dataPosition_3(int32_t value)
	{
		____dataPosition_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T1170083932_H
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
#ifndef RESOURCEMANAGERMEDIATOR_T1882107298_H
#define RESOURCEMANAGERMEDIATOR_T1882107298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager/ResourceManagerMediator
struct  ResourceManagerMediator_t1882107298  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager System.Resources.ResourceManager/ResourceManagerMediator::_rm
	ResourceManager_t1704110741 * ____rm_0;

public:
	inline static int32_t get_offset_of__rm_0() { return static_cast<int32_t>(offsetof(ResourceManagerMediator_t1882107298, ____rm_0)); }
	inline ResourceManager_t1704110741 * get__rm_0() const { return ____rm_0; }
	inline ResourceManager_t1704110741 ** get_address_of__rm_0() { return &____rm_0; }
	inline void set__rm_0(ResourceManager_t1704110741 * value)
	{
		____rm_0 = value;
		Il2CppCodeGenWriteBarrier((&____rm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGERMEDIATOR_T1882107298_H
#ifndef CULTURENAMERESOURCESETPAIR_T2914742105_H
#define CULTURENAMERESOURCESETPAIR_T2914742105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager/CultureNameResourceSetPair
struct  CultureNameResourceSetPair_t2914742105  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURENAMERESOURCESETPAIR_T2914742105_H
#ifndef NAMEORID_T3060796736_H
#define NAMEORID_T3060796736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NameOrId
struct  NameOrId_t3060796736  : public RuntimeObject
{
public:
	// System.String System.Resources.NameOrId::name
	String_t* ___name_0;
	// System.Int32 System.Resources.NameOrId::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t3060796736, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t3060796736, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEORID_T3060796736_H
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
#ifndef WIN32RESOURCE_T2769484352_H
#define WIN32RESOURCE_T2769484352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32Resource
struct  Win32Resource_t2769484352  : public RuntimeObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t3060796736 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t3060796736 * ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t2769484352, ___type_0)); }
	inline NameOrId_t3060796736 * get_type_0() const { return ___type_0; }
	inline NameOrId_t3060796736 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t3060796736 * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t2769484352, ___name_1)); }
	inline NameOrId_t3060796736 * get_name_1() const { return ___name_1; }
	inline NameOrId_t3060796736 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t3060796736 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32RESOURCE_T2769484352_H
#ifndef FASTRESOURCECOMPARER_T482802228_H
#define FASTRESOURCECOMPARER_T482802228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FastResourceComparer
struct  FastResourceComparer_t482802228  : public RuntimeObject
{
public:

public:
};

struct FastResourceComparer_t482802228_StaticFields
{
public:
	// System.Resources.FastResourceComparer System.Resources.FastResourceComparer::Default
	FastResourceComparer_t482802228 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(FastResourceComparer_t482802228_StaticFields, ___Default_0)); }
	inline FastResourceComparer_t482802228 * get_Default_0() const { return ___Default_0; }
	inline FastResourceComparer_t482802228 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(FastResourceComparer_t482802228 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTRESOURCECOMPARER_T482802228_H
#ifndef FILEBASEDRESOURCEGROVELER_T700373367_H
#define FILEBASEDRESOURCEGROVELER_T700373367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FileBasedResourceGroveler
struct  FileBasedResourceGroveler_t700373367  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.FileBasedResourceGroveler::_mediator
	ResourceManagerMediator_t1882107298 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(FileBasedResourceGroveler_t700373367, ____mediator_0)); }
	inline ResourceManagerMediator_t1882107298 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t1882107298 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t1882107298 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEBASEDRESOURCEGROVELER_T700373367_H
#ifndef RESOURCEREADER_T1860394420_H
#define RESOURCEREADER_T1860394420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t1860394420  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::_store
	BinaryReader_t2689104570 * ____store_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.ResourceReader::_resCache
	Dictionary_2_t2827352979 * ____resCache_1;
	// System.Int64 System.Resources.ResourceReader::_nameSectionOffset
	int64_t ____nameSectionOffset_2;
	// System.Int64 System.Resources.ResourceReader::_dataSectionOffset
	int64_t ____dataSectionOffset_3;
	// System.Int32[] System.Resources.ResourceReader::_nameHashes
	Int32U5BU5D_t890136779* ____nameHashes_4;
	// System.Int32* System.Resources.ResourceReader::_nameHashesPtr
	int32_t* ____nameHashesPtr_5;
	// System.Int32[] System.Resources.ResourceReader::_namePositions
	Int32U5BU5D_t890136779* ____namePositions_6;
	// System.Int32* System.Resources.ResourceReader::_namePositionsPtr
	int32_t* ____namePositionsPtr_7;
	// System.RuntimeType[] System.Resources.ResourceReader::_typeTable
	RuntimeTypeU5BU5D_t639542928* ____typeTable_8;
	// System.Int32[] System.Resources.ResourceReader::_typeNamePositions
	Int32U5BU5D_t890136779* ____typeNamePositions_9;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Resources.ResourceReader::_objFormatter
	BinaryFormatter_t2692286363 * ____objFormatter_10;
	// System.Int32 System.Resources.ResourceReader::_numResources
	int32_t ____numResources_11;
	// System.IO.UnmanagedMemoryStream System.Resources.ResourceReader::_ums
	UnmanagedMemoryStream_t250308475 * ____ums_12;
	// System.Int32 System.Resources.ResourceReader::_version
	int32_t ____version_13;

public:
	inline static int32_t get_offset_of__store_0() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____store_0)); }
	inline BinaryReader_t2689104570 * get__store_0() const { return ____store_0; }
	inline BinaryReader_t2689104570 ** get_address_of__store_0() { return &____store_0; }
	inline void set__store_0(BinaryReader_t2689104570 * value)
	{
		____store_0 = value;
		Il2CppCodeGenWriteBarrier((&____store_0), value);
	}

	inline static int32_t get_offset_of__resCache_1() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____resCache_1)); }
	inline Dictionary_2_t2827352979 * get__resCache_1() const { return ____resCache_1; }
	inline Dictionary_2_t2827352979 ** get_address_of__resCache_1() { return &____resCache_1; }
	inline void set__resCache_1(Dictionary_2_t2827352979 * value)
	{
		____resCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____resCache_1), value);
	}

	inline static int32_t get_offset_of__nameSectionOffset_2() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____nameSectionOffset_2)); }
	inline int64_t get__nameSectionOffset_2() const { return ____nameSectionOffset_2; }
	inline int64_t* get_address_of__nameSectionOffset_2() { return &____nameSectionOffset_2; }
	inline void set__nameSectionOffset_2(int64_t value)
	{
		____nameSectionOffset_2 = value;
	}

	inline static int32_t get_offset_of__dataSectionOffset_3() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____dataSectionOffset_3)); }
	inline int64_t get__dataSectionOffset_3() const { return ____dataSectionOffset_3; }
	inline int64_t* get_address_of__dataSectionOffset_3() { return &____dataSectionOffset_3; }
	inline void set__dataSectionOffset_3(int64_t value)
	{
		____dataSectionOffset_3 = value;
	}

	inline static int32_t get_offset_of__nameHashes_4() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____nameHashes_4)); }
	inline Int32U5BU5D_t890136779* get__nameHashes_4() const { return ____nameHashes_4; }
	inline Int32U5BU5D_t890136779** get_address_of__nameHashes_4() { return &____nameHashes_4; }
	inline void set__nameHashes_4(Int32U5BU5D_t890136779* value)
	{
		____nameHashes_4 = value;
		Il2CppCodeGenWriteBarrier((&____nameHashes_4), value);
	}

	inline static int32_t get_offset_of__nameHashesPtr_5() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____nameHashesPtr_5)); }
	inline int32_t* get__nameHashesPtr_5() const { return ____nameHashesPtr_5; }
	inline int32_t** get_address_of__nameHashesPtr_5() { return &____nameHashesPtr_5; }
	inline void set__nameHashesPtr_5(int32_t* value)
	{
		____nameHashesPtr_5 = value;
	}

	inline static int32_t get_offset_of__namePositions_6() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____namePositions_6)); }
	inline Int32U5BU5D_t890136779* get__namePositions_6() const { return ____namePositions_6; }
	inline Int32U5BU5D_t890136779** get_address_of__namePositions_6() { return &____namePositions_6; }
	inline void set__namePositions_6(Int32U5BU5D_t890136779* value)
	{
		____namePositions_6 = value;
		Il2CppCodeGenWriteBarrier((&____namePositions_6), value);
	}

	inline static int32_t get_offset_of__namePositionsPtr_7() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____namePositionsPtr_7)); }
	inline int32_t* get__namePositionsPtr_7() const { return ____namePositionsPtr_7; }
	inline int32_t** get_address_of__namePositionsPtr_7() { return &____namePositionsPtr_7; }
	inline void set__namePositionsPtr_7(int32_t* value)
	{
		____namePositionsPtr_7 = value;
	}

	inline static int32_t get_offset_of__typeTable_8() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____typeTable_8)); }
	inline RuntimeTypeU5BU5D_t639542928* get__typeTable_8() const { return ____typeTable_8; }
	inline RuntimeTypeU5BU5D_t639542928** get_address_of__typeTable_8() { return &____typeTable_8; }
	inline void set__typeTable_8(RuntimeTypeU5BU5D_t639542928* value)
	{
		____typeTable_8 = value;
		Il2CppCodeGenWriteBarrier((&____typeTable_8), value);
	}

	inline static int32_t get_offset_of__typeNamePositions_9() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____typeNamePositions_9)); }
	inline Int32U5BU5D_t890136779* get__typeNamePositions_9() const { return ____typeNamePositions_9; }
	inline Int32U5BU5D_t890136779** get_address_of__typeNamePositions_9() { return &____typeNamePositions_9; }
	inline void set__typeNamePositions_9(Int32U5BU5D_t890136779* value)
	{
		____typeNamePositions_9 = value;
		Il2CppCodeGenWriteBarrier((&____typeNamePositions_9), value);
	}

	inline static int32_t get_offset_of__objFormatter_10() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____objFormatter_10)); }
	inline BinaryFormatter_t2692286363 * get__objFormatter_10() const { return ____objFormatter_10; }
	inline BinaryFormatter_t2692286363 ** get_address_of__objFormatter_10() { return &____objFormatter_10; }
	inline void set__objFormatter_10(BinaryFormatter_t2692286363 * value)
	{
		____objFormatter_10 = value;
		Il2CppCodeGenWriteBarrier((&____objFormatter_10), value);
	}

	inline static int32_t get_offset_of__numResources_11() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____numResources_11)); }
	inline int32_t get__numResources_11() const { return ____numResources_11; }
	inline int32_t* get_address_of__numResources_11() { return &____numResources_11; }
	inline void set__numResources_11(int32_t value)
	{
		____numResources_11 = value;
	}

	inline static int32_t get_offset_of__ums_12() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____ums_12)); }
	inline UnmanagedMemoryStream_t250308475 * get__ums_12() const { return ____ums_12; }
	inline UnmanagedMemoryStream_t250308475 ** get_address_of__ums_12() { return &____ums_12; }
	inline void set__ums_12(UnmanagedMemoryStream_t250308475 * value)
	{
		____ums_12 = value;
		Il2CppCodeGenWriteBarrier((&____ums_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(ResourceReader_t1860394420, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T1860394420_H
#ifndef MANIFESTBASEDRESOURCEGROVELER_T877045718_H
#define MANIFESTBASEDRESOURCEGROVELER_T877045718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ManifestBasedResourceGroveler
struct  ManifestBasedResourceGroveler_t877045718  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.ManifestBasedResourceGroveler::_mediator
	ResourceManagerMediator_t1882107298 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(ManifestBasedResourceGroveler_t877045718, ____mediator_0)); }
	inline ResourceManagerMediator_t1882107298 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t1882107298 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t1882107298 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIFESTBASEDRESOURCEGROVELER_T877045718_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T366144024_H
#define ASSEMBLYTITLEATTRIBUTE_T366144024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t366144024  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::m_title
	String_t* ___m_title_0;

public:
	inline static int32_t get_offset_of_m_title_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t366144024, ___m_title_0)); }
	inline String_t* get_m_title_0() const { return ___m_title_0; }
	inline String_t** get_address_of_m_title_0() { return &___m_title_0; }
	inline void set_m_title_0(String_t* value)
	{
		___m_title_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_title_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T366144024_H
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
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T1522918482_H
#define ASSEMBLYPRODUCTATTRIBUTE_T1522918482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t1522918482  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t1522918482, ___m_product_0)); }
	inline String_t* get_m_product_0() const { return ___m_product_0; }
	inline String_t** get_address_of_m_product_0() { return &___m_product_0; }
	inline void set_m_product_0(String_t* value)
	{
		___m_product_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_product_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T1522918482_H
#ifndef DEFAULTMEMBERATTRIBUTE_T2081107854_H
#define DEFAULTMEMBERATTRIBUTE_T2081107854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t2081107854  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t2081107854, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_memberName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMEMBERATTRIBUTE_T2081107854_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T3246790047_H
#define ASSEMBLYKEYFILEATTRIBUTE_T3246790047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t3246790047  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::m_keyFile
	String_t* ___m_keyFile_0;

public:
	inline static int32_t get_offset_of_m_keyFile_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t3246790047, ___m_keyFile_0)); }
	inline String_t* get_m_keyFile_0() const { return ___m_keyFile_0; }
	inline String_t** get_address_of_m_keyFile_0() { return &___m_keyFile_0; }
	inline void set_m_keyFile_0(String_t* value)
	{
		___m_keyFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyFile_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T3246790047_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T1555455682_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T1555455682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t1555455682  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::m_trademark
	String_t* ___m_trademark_0;

public:
	inline static int32_t get_offset_of_m_trademark_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t1555455682, ___m_trademark_0)); }
	inline String_t* get_m_trademark_0() const { return ___m_trademark_0; }
	inline String_t** get_address_of_m_trademark_0() { return &___m_trademark_0; }
	inline void set_m_trademark_0(String_t* value)
	{
		___m_trademark_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_trademark_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T1555455682_H
#ifndef ASSEMBLYVERSIONATTRIBUTE_T360494414_H
#define ASSEMBLYVERSIONATTRIBUTE_T360494414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyVersionAttribute
struct  AssemblyVersionAttribute_t360494414  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyVersionAttribute::m_version
	String_t* ___m_version_0;

public:
	inline static int32_t get_offset_of_m_version_0() { return static_cast<int32_t>(offsetof(AssemblyVersionAttribute_t360494414, ___m_version_0)); }
	inline String_t* get_m_version_0() const { return ___m_version_0; }
	inline String_t** get_address_of_m_version_0() { return &___m_version_0; }
	inline void set_m_version_0(String_t* value)
	{
		___m_version_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_version_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONATTRIBUTE_T360494414_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T676265285_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T676265285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t676265285  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t676265285, ____version_0)); }
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
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T676265285_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3447752837_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3447752837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t3447752837  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::m_informationalVersion
	String_t* ___m_informationalVersion_0;

public:
	inline static int32_t get_offset_of_m_informationalVersion_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t3447752837, ___m_informationalVersion_0)); }
	inline String_t* get_m_informationalVersion_0() const { return ___m_informationalVersion_0; }
	inline String_t** get_address_of_m_informationalVersion_0() { return &___m_informationalVersion_0; }
	inline void set_m_informationalVersion_0(String_t* value)
	{
		___m_informationalVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_informationalVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3447752837_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T2722640223_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T2722640223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t2722640223  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t2722640223, ___m_copyright_0)); }
	inline String_t* get_m_copyright_0() const { return ___m_copyright_0; }
	inline String_t** get_address_of_m_copyright_0() { return &___m_copyright_0; }
	inline void set_m_copyright_0(String_t* value)
	{
		___m_copyright_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_copyright_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T2722640223_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T3920299173_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T3920299173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t3920299173  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::m_defaultAlias
	String_t* ___m_defaultAlias_0;

public:
	inline static int32_t get_offset_of_m_defaultAlias_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t3920299173, ___m_defaultAlias_0)); }
	inline String_t* get_m_defaultAlias_0() const { return ___m_defaultAlias_0; }
	inline String_t** get_address_of_m_defaultAlias_0() { return &___m_defaultAlias_0; }
	inline void set_m_defaultAlias_0(String_t* value)
	{
		___m_defaultAlias_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultAlias_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T3920299173_H
#ifndef ASSEMBLYCONFIGURATIONATTRIBUTE_T501869586_H
#define ASSEMBLYCONFIGURATIONATTRIBUTE_T501869586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyConfigurationAttribute
struct  AssemblyConfigurationAttribute_t501869586  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyConfigurationAttribute::m_configuration
	String_t* ___m_configuration_0;

public:
	inline static int32_t get_offset_of_m_configuration_0() { return static_cast<int32_t>(offsetof(AssemblyConfigurationAttribute_t501869586, ___m_configuration_0)); }
	inline String_t* get_m_configuration_0() const { return ___m_configuration_0; }
	inline String_t** get_address_of_m_configuration_0() { return &___m_configuration_0; }
	inline void set_m_configuration_0(String_t* value)
	{
		___m_configuration_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_configuration_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCONFIGURATIONATTRIBUTE_T501869586_H
#ifndef METHODBASE_T2487692207_H
#define METHODBASE_T2487692207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t2487692207  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T2487692207_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T3257589432_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T3257589432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t3257589432  : public Attribute_t3968905660
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::m_delaySign
	bool ___m_delaySign_0;

public:
	inline static int32_t get_offset_of_m_delaySign_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t3257589432, ___m_delaySign_0)); }
	inline bool get_m_delaySign_0() const { return ___m_delaySign_0; }
	inline bool* get_address_of_m_delaySign_0() { return &___m_delaySign_0; }
	inline void set_m_delaySign_0(bool value)
	{
		___m_delaySign_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T3257589432_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T1179128081_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T1179128081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t1179128081  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::m_description
	String_t* ___m_description_0;

public:
	inline static int32_t get_offset_of_m_description_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t1179128081, ___m_description_0)); }
	inline String_t* get_m_description_0() const { return ___m_description_0; }
	inline String_t** get_address_of_m_description_0() { return &___m_description_0; }
	inline void set_m_description_0(String_t* value)
	{
		___m_description_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T1179128081_H
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T2343421206_H
#define ASSEMBLYCOMPANYATTRIBUTE_T2343421206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t2343421206  : public Attribute_t3968905660
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t2343421206, ___m_company_0)); }
	inline String_t* get_m_company_0() const { return ___m_company_0; }
	inline String_t** get_address_of_m_company_0() { return &___m_company_0; }
	inline void set_m_company_0(String_t* value)
	{
		___m_company_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_company_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T2343421206_H
#ifndef WIN32VERSIONRESOURCE_T2985912725_H
#define WIN32VERSIONRESOURCE_T2985912725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32VersionResource
struct  Win32VersionResource_t2985912725  : public Win32Resource_t2769484352
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32VERSIONRESOURCE_T2985912725_H
#ifndef STREAM_T2774301260_H
#define STREAM_T2774301260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t2774301260  : public MarshalByRefObject_t2838402765
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t2358268871 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3499554945 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t2774301260, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t2358268871 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t2358268871 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t2358268871 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t2774301260, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3499554945 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3499554945 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3499554945 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t2774301260_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t2774301260 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t2774301260_StaticFields, ___Null_1)); }
	inline Stream_t2774301260 * get_Null_1() const { return ___Null_1; }
	inline Stream_t2774301260 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t2774301260 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T2774301260_H
#ifndef RESOURCELOCATOR_T1924186670_H
#define RESOURCELOCATOR_T1924186670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceLocator
struct  ResourceLocator_t1924186670 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t1924186670, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t1924186670, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t1924186670_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t1924186670_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
#endif // RESOURCELOCATOR_T1924186670_H
#ifndef APPLICATIONEXCEPTION_T3914770226_H
#define APPLICATIONEXCEPTION_T3914770226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t3914770226  : public Exception_t2541973588
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T3914770226_H
#ifndef RUNTIMERESOURCESET_T1818663132_H
#define RUNTIMERESOURCESET_T1818663132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t1818663132  : public ResourceSet_t635877287
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_resCache
	Dictionary_2_t2827352979 * ____resCache_4;
	// System.Resources.ResourceReader System.Resources.RuntimeResourceSet::_defaultReader
	ResourceReader_t1860394420 * ____defaultReader_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_caseInsensitiveTable
	Dictionary_2_t2827352979 * ____caseInsensitiveTable_6;
	// System.Boolean System.Resources.RuntimeResourceSet::_haveReadFromReader
	bool ____haveReadFromReader_7;

public:
	inline static int32_t get_offset_of__resCache_4() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t1818663132, ____resCache_4)); }
	inline Dictionary_2_t2827352979 * get__resCache_4() const { return ____resCache_4; }
	inline Dictionary_2_t2827352979 ** get_address_of__resCache_4() { return &____resCache_4; }
	inline void set__resCache_4(Dictionary_2_t2827352979 * value)
	{
		____resCache_4 = value;
		Il2CppCodeGenWriteBarrier((&____resCache_4), value);
	}

	inline static int32_t get_offset_of__defaultReader_5() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t1818663132, ____defaultReader_5)); }
	inline ResourceReader_t1860394420 * get__defaultReader_5() const { return ____defaultReader_5; }
	inline ResourceReader_t1860394420 ** get_address_of__defaultReader_5() { return &____defaultReader_5; }
	inline void set__defaultReader_5(ResourceReader_t1860394420 * value)
	{
		____defaultReader_5 = value;
		Il2CppCodeGenWriteBarrier((&____defaultReader_5), value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_6() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t1818663132, ____caseInsensitiveTable_6)); }
	inline Dictionary_2_t2827352979 * get__caseInsensitiveTable_6() const { return ____caseInsensitiveTable_6; }
	inline Dictionary_2_t2827352979 ** get_address_of__caseInsensitiveTable_6() { return &____caseInsensitiveTable_6; }
	inline void set__caseInsensitiveTable_6(Dictionary_2_t2827352979 * value)
	{
		____caseInsensitiveTable_6 = value;
		Il2CppCodeGenWriteBarrier((&____caseInsensitiveTable_6), value);
	}

	inline static int32_t get_offset_of__haveReadFromReader_7() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t1818663132, ____haveReadFromReader_7)); }
	inline bool get__haveReadFromReader_7() const { return ____haveReadFromReader_7; }
	inline bool* get_address_of__haveReadFromReader_7() { return &____haveReadFromReader_7; }
	inline void set__haveReadFromReader_7(bool value)
	{
		____haveReadFromReader_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T1818663132_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T1159011837_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T1159011837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t1159011837  : public Attribute_t3968905660
{
public:
	// System.String System.Resources.SatelliteContractVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t1159011837, ____version_0)); }
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
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T1159011837_H
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
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T1506896658_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T1506896658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t1506896658 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t1506896658, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t1506896658, ___value_1)); }
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
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t1506896658_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t1506896658_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T1506896658_H
#ifndef VOID_T996922892_H
#define VOID_T996922892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t996922892 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t996922892__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T996922892_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t4142488538 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t4142488538 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t4142488538 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t4142488538 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef BINDINGFLAGS_T3318191187_H
#define BINDINGFLAGS_T3318191187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t3318191187 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t3318191187, ___value___2)); }
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
#endif // BINDINGFLAGS_T3318191187_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T3571929601_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T3571929601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t3571929601 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t3571929601, ___value___2)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T3571929601_H
#ifndef FILEACCESS_T3779717099_H
#define FILEACCESS_T3779717099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t3779717099 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t3779717099, ___value___2)); }
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
#endif // FILEACCESS_T3779717099_H
#ifndef INVALIDFILTERCRITERIAEXCEPTION_T2208516309_H
#define INVALIDFILTERCRITERIAEXCEPTION_T2208516309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.InvalidFilterCriteriaException
struct  InvalidFilterCriteriaException_t2208516309  : public ApplicationException_t3914770226
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDFILTERCRITERIAEXCEPTION_T2208516309_H
#ifndef GENERICPARAMETERATTRIBUTES_T2515986137_H
#define GENERICPARAMETERATTRIBUTES_T2515986137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.GenericParameterAttributes
struct  GenericParameterAttributes_t2515986137 
{
public:
	// System.Int32 System.Reflection.GenericParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GenericParameterAttributes_t2515986137, ___value___2)); }
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
#endif // GENERICPARAMETERATTRIBUTES_T2515986137_H
#ifndef FIELDATTRIBUTES_T3452410374_H
#define FIELDATTRIBUTES_T3452410374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t3452410374 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FieldAttributes_t3452410374, ___value___2)); }
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
#endif // FIELDATTRIBUTES_T3452410374_H
#ifndef EVENTATTRIBUTES_T589940098_H
#define EVENTATTRIBUTES_T589940098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t589940098 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventAttributes_t589940098, ___value___2)); }
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
#endif // EVENTATTRIBUTES_T589940098_H
#ifndef PARAMETERATTRIBUTES_T3087442550_H
#define PARAMETERATTRIBUTES_T3087442550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t3087442550 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t3087442550, ___value___2)); }
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
#endif // PARAMETERATTRIBUTES_T3087442550_H
#ifndef PROPERTYATTRIBUTES_T2960145563_H
#define PROPERTYATTRIBUTES_T2960145563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t2960145563 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyAttributes_t2960145563, ___value___2)); }
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
#endif // PROPERTYATTRIBUTES_T2960145563_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t2487692207
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef METHODIMPLATTRIBUTES_T2950075362_H
#define METHODIMPLATTRIBUTES_T2950075362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t2950075362 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t2950075362, ___value___2)); }
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
#endif // METHODIMPLATTRIBUTES_T2950075362_H
#ifndef METHODATTRIBUTES_T3881594441_H
#define METHODATTRIBUTES_T3881594441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t3881594441 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodAttributes_t3881594441, ___value___2)); }
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
#endif // METHODATTRIBUTES_T3881594441_H
#ifndef RUNTIMEFIELDHANDLE_T2513614710_H
#define RUNTIMEFIELDHANDLE_T2513614710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2513614710 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2513614710, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T2513614710_H
#ifndef FORMATEXCEPTION_T331665324_H
#define FORMATEXCEPTION_T331665324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t331665324  : public SystemException_t2275904162
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T331665324_H
#ifndef ASSEMBLYNAMEFLAGS_T4261537561_H
#define ASSEMBLYNAMEFLAGS_T4261537561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t4261537561 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t4261537561, ___value___2)); }
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
#endif // ASSEMBLYNAMEFLAGS_T4261537561_H
#ifndef ASSEMBLYCONTENTTYPE_T3979067622_H
#define ASSEMBLYCONTENTTYPE_T3979067622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t3979067622 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t3979067622, ___value___2)); }
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
#endif // ASSEMBLYCONTENTTYPE_T3979067622_H
#ifndef PROCESSORARCHITECTURE_T2712292647_H
#define PROCESSORARCHITECTURE_T2712292647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t2712292647 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t2712292647, ___value___2)); }
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
#endif // PROCESSORARCHITECTURE_T2712292647_H
#ifndef CALLINGCONVENTIONS_T150076343_H
#define CALLINGCONVENTIONS_T150076343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t150076343 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConventions_t150076343, ___value___2)); }
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
#endif // CALLINGCONVENTIONS_T150076343_H
#ifndef ASSEMBLYHASHALGORITHM_T699205446_H
#define ASSEMBLYHASHALGORITHM_T699205446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t699205446 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t699205446, ___value___2)); }
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
#endif // ASSEMBLYHASHALGORITHM_T699205446_H
#ifndef WIN32RESOURCETYPE_T2630161231_H
#define WIN32RESOURCETYPE_T2630161231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32ResourceType
struct  Win32ResourceType_t2630161231 
{
public:
	// System.Int32 System.Resources.Win32ResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Win32ResourceType_t2630161231, ___value___2)); }
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
#endif // WIN32RESOURCETYPE_T2630161231_H
#ifndef REFLECTIONTYPELOADEXCEPTION_T1125548538_H
#define REFLECTIONTYPELOADEXCEPTION_T1125548538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t1125548538  : public SystemException_t2275904162
{
public:
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::loaderExceptions
	ExceptionU5BU5D_t2895003613* ___loaderExceptions_16;
	// System.Type[] System.Reflection.ReflectionTypeLoadException::types
	TypeU5BU5D_t3464161425* ___types_17;

public:
	inline static int32_t get_offset_of_loaderExceptions_16() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t1125548538, ___loaderExceptions_16)); }
	inline ExceptionU5BU5D_t2895003613* get_loaderExceptions_16() const { return ___loaderExceptions_16; }
	inline ExceptionU5BU5D_t2895003613** get_address_of_loaderExceptions_16() { return &___loaderExceptions_16; }
	inline void set_loaderExceptions_16(ExceptionU5BU5D_t2895003613* value)
	{
		___loaderExceptions_16 = value;
		Il2CppCodeGenWriteBarrier((&___loaderExceptions_16), value);
	}

	inline static int32_t get_offset_of_types_17() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t1125548538, ___types_17)); }
	inline TypeU5BU5D_t3464161425* get_types_17() const { return ___types_17; }
	inline TypeU5BU5D_t3464161425** get_address_of_types_17() { return &___types_17; }
	inline void set_types_17(TypeU5BU5D_t3464161425* value)
	{
		___types_17 = value;
		Il2CppCodeGenWriteBarrier((&___types_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONTYPELOADEXCEPTION_T1125548538_H
#ifndef RESOLVETOKENERROR_T247298882_H
#define RESOLVETOKENERROR_T247298882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResolveTokenError
struct  ResolveTokenError_t247298882 
{
public:
	// System.Int32 System.Reflection.ResolveTokenError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResolveTokenError_t247298882, ___value___2)); }
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
#endif // RESOLVETOKENERROR_T247298882_H
#ifndef RUNTIMEFIELDINFO_T1026712_H
#define RUNTIMEFIELDINFO_T1026712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeFieldInfo
struct  RuntimeFieldInfo_t1026712  : public FieldInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDINFO_T1026712_H
#ifndef LAZYCATTRDATA_T2346709998_H
#define LAZYCATTRDATA_T2346709998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData/LazyCAttrData
struct  LazyCAttrData_t2346709998  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Reflection.CustomAttributeData/LazyCAttrData::assembly
	Assembly_t1335047557 * ___assembly_0;
	// System.IntPtr System.Reflection.CustomAttributeData/LazyCAttrData::data
	intptr_t ___data_1;
	// System.UInt32 System.Reflection.CustomAttributeData/LazyCAttrData::data_length
	uint32_t ___data_length_2;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(LazyCAttrData_t2346709998, ___assembly_0)); }
	inline Assembly_t1335047557 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t1335047557 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t1335047557 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(LazyCAttrData_t2346709998, ___data_1)); }
	inline intptr_t get_data_1() const { return ___data_1; }
	inline intptr_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(intptr_t value)
	{
		___data_1 = value;
	}

	inline static int32_t get_offset_of_data_length_2() { return static_cast<int32_t>(offsetof(LazyCAttrData_t2346709998, ___data_length_2)); }
	inline uint32_t get_data_length_2() const { return ___data_length_2; }
	inline uint32_t* get_address_of_data_length_2() { return &___data_length_2; }
	inline void set_data_length_2(uint32_t value)
	{
		___data_length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAZYCATTRDATA_T2346709998_H
#ifndef CONSTRUCTORINFO_T1020550882_H
#define CONSTRUCTORINFO_T1020550882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t1020550882  : public MethodBase_t2487692207
{
public:

public:
};

struct ConstructorInfo_t1020550882_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t1020550882_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t1020550882_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T1020550882_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T2806965256_H
#define AMBIGUOUSMATCHEXCEPTION_T2806965256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t2806965256  : public SystemException_t2275904162
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T2806965256_H
#ifndef ASSEMBLY_T1335047557_H
#define ASSEMBLY_T1335047557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t1335047557  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2978779363 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t3255114419 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t4265104243 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t4265104243 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t4265104243 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t4265104243 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t4265104243 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2978779363 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2978779363 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2978779363 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ____evidence_2)); }
	inline Evidence_t3255114419 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t3255114419 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t3255114419 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ____minimum_3)); }
	inline PermissionSet_t4265104243 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t4265104243 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t4265104243 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ____optional_4)); }
	inline PermissionSet_t4265104243 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t4265104243 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t4265104243 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ____refuse_5)); }
	inline PermissionSet_t4265104243 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t4265104243 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t4265104243 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ____granted_6)); }
	inline PermissionSet_t4265104243 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t4265104243 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t4265104243 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ____denied_7)); }
	inline PermissionSet_t4265104243 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t4265104243 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t4265104243 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t1335047557, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t1335047557_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2978779363 * ___resolve_event_holder_1;
	Evidence_t3255114419 * ____evidence_2;
	PermissionSet_t4265104243 * ____minimum_3;
	PermissionSet_t4265104243 * ____optional_4;
	PermissionSet_t4265104243 * ____refuse_5;
	PermissionSet_t4265104243 * ____granted_6;
	PermissionSet_t4265104243 * ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t1335047557_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2978779363 * ___resolve_event_holder_1;
	Evidence_t3255114419 * ____evidence_2;
	PermissionSet_t4265104243 * ____minimum_3;
	PermissionSet_t4265104243 * ____optional_4;
	PermissionSet_t4265104243 * ____refuse_5;
	PermissionSet_t4265104243 * ____granted_6;
	PermissionSet_t4265104243 * ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};
#endif // ASSEMBLY_T1335047557_H
#ifndef ULTIMATERESOURCEFALLBACKLOCATION_T1143631536_H
#define ULTIMATERESOURCEFALLBACKLOCATION_T1143631536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.UltimateResourceFallbackLocation
struct  UltimateResourceFallbackLocation_t1143631536 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_t1143631536, ___value___2)); }
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
#endif // ULTIMATERESOURCEFALLBACKLOCATION_T1143631536_H
#ifndef RESOURCETYPECODE_T3838084402_H
#define RESOURCETYPECODE_T3838084402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceTypeCode
struct  ResourceTypeCode_t3838084402 
{
public:
	// System.Int32 System.Resources.ResourceTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResourceTypeCode_t3838084402, ___value___2)); }
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
#endif // RESOURCETYPECODE_T3838084402_H
#ifndef PINFO_T266195142_H
#define PINFO_T266195142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t266195142 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PInfo_t266195142, ___value___2)); }
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
#endif // PINFO_T266195142_H
#ifndef RUNTIMEPROPERTYINFO_T3673186551_H
#define RUNTIMEPROPERTYINFO_T3673186551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimePropertyInfo
struct  RuntimePropertyInfo_t3673186551  : public PropertyInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPROPERTYINFO_T3673186551_H
#ifndef RUNTIMEEVENTINFO_T404823632_H
#define RUNTIMEEVENTINFO_T404823632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeEventInfo
struct  RuntimeEventInfo_t404823632  : public EventInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEEVENTINFO_T404823632_H
#ifndef DELEGATE_T1558589342_H
#define DELEGATE_T1558589342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1558589342  : public RuntimeObject
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
	DelegateData_t2989360121 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___data_9)); }
	inline DelegateData_t2989360121 * get_data_9() const { return ___data_9; }
	inline DelegateData_t2989360121 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t2989360121 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1558589342, ___method_is_virtual_10)); }
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
struct Delegate_t1558589342_marshaled_pinvoke
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
	DelegateData_t2989360121 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1558589342_marshaled_com
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
	DelegateData_t2989360121 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1558589342_H
#ifndef MISSINGMANIFESTRESOURCEEXCEPTION_T3102697787_H
#define MISSINGMANIFESTRESOURCEEXCEPTION_T3102697787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.MissingManifestResourceException
struct  MissingManifestResourceException_t3102697787  : public SystemException_t2275904162
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMANIFESTRESOURCEEXCEPTION_T3102697787_H
#ifndef PORTABLEEXECUTABLEKINDS_T2735621479_H
#define PORTABLEEXECUTABLEKINDS_T2735621479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PortableExecutableKinds
struct  PortableExecutableKinds_t2735621479 
{
public:
	// System.Int32 System.Reflection.PortableExecutableKinds::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PortableExecutableKinds_t2735621479, ___value___2)); }
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
#endif // PORTABLEEXECUTABLEKINDS_T2735621479_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T2221428026_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T2221428026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t2221428026 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t1506896658  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t2221428026, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t1506896658  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t1506896658 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t1506896658  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t2221428026, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t2221428026_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t1506896658_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t2221428026_marshaled_com
{
	CustomAttributeTypedArgument_t1506896658_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T2221428026_H
#ifndef IMAGEFILEMACHINE_T1357313066_H
#define IMAGEFILEMACHINE_T1357313066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ImageFileMachine
struct  ImageFileMachine_t1357313066 
{
public:
	// System.Int32 System.Reflection.ImageFileMachine::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageFileMachine_t1357313066, ___value___2)); }
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
#endif // IMAGEFILEMACHINE_T1357313066_H
#ifndef UNMANAGEDMEMORYSTREAM_T250308475_H
#define UNMANAGEDMEMORYSTREAM_T250308475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_t250308475  : public Stream_t2774301260
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_t828263112 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_t1550289478 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____buffer_4)); }
	inline SafeBuffer_t828263112 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_t828263112 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_t828263112 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t250308475, ____lastReadTask_12)); }
	inline Task_1_t1550289478 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_t1550289478 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_t1550289478 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORYSTREAM_T250308475_H
#ifndef ASSEMBLYNAME_T585760915_H
#define ASSEMBLYNAME_T585760915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t585760915  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t816937530 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t4257165617 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t2516310093* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t2516310093* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t1549971293 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___cultureinfo_6)); }
	inline CultureInfo_t816937530 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t816937530 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t816937530 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___keypair_9)); }
	inline StrongNameKeyPair_t4257165617 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t4257165617 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t4257165617 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___publicKey_10)); }
	inline ByteU5BU5D_t2516310093* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t2516310093** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t2516310093* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___keyToken_11)); }
	inline ByteU5BU5D_t2516310093* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t2516310093** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t2516310093* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___version_13)); }
	inline Version_t1549971293 * get_version_13() const { return ___version_13; }
	inline Version_t1549971293 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t1549971293 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t585760915, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t585760915_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t816937530_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t4257165617 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t1549971293 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t585760915_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t816937530_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t4257165617 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t1549971293 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
#endif // ASSEMBLYNAME_T585760915_H
#ifndef CUSTOMATTRIBUTEFORMATEXCEPTION_T1550625222_H
#define CUSTOMATTRIBUTEFORMATEXCEPTION_T1550625222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeFormatException
struct  CustomAttributeFormatException_t1550625222  : public FormatException_t331665324
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEFORMATEXCEPTION_T1550625222_H
#ifndef RESOURCEMANAGER_T1704110741_H
#define RESOURCEMANAGER_T1704110741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t1704110741  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t776164328 * ___ResourceSets_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_t1539043596 * ____resourceSets_1;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t1335047557 * ___MainAssembly_2;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t816937530 * ____neutralResourcesCulture_3;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t2914742105 * ____lastUsedResourceCache_4;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_5;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_6;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_7;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t1335047557 * ____callingAssembly_8;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t3660872792 * ___m_callingAssembly_9;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_10;

public:
	inline static int32_t get_offset_of_ResourceSets_0() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ___ResourceSets_0)); }
	inline Hashtable_t776164328 * get_ResourceSets_0() const { return ___ResourceSets_0; }
	inline Hashtable_t776164328 ** get_address_of_ResourceSets_0() { return &___ResourceSets_0; }
	inline void set_ResourceSets_0(Hashtable_t776164328 * value)
	{
		___ResourceSets_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceSets_0), value);
	}

	inline static int32_t get_offset_of__resourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ____resourceSets_1)); }
	inline Dictionary_2_t1539043596 * get__resourceSets_1() const { return ____resourceSets_1; }
	inline Dictionary_2_t1539043596 ** get_address_of__resourceSets_1() { return &____resourceSets_1; }
	inline void set__resourceSets_1(Dictionary_2_t1539043596 * value)
	{
		____resourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((&____resourceSets_1), value);
	}

	inline static int32_t get_offset_of_MainAssembly_2() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ___MainAssembly_2)); }
	inline Assembly_t1335047557 * get_MainAssembly_2() const { return ___MainAssembly_2; }
	inline Assembly_t1335047557 ** get_address_of_MainAssembly_2() { return &___MainAssembly_2; }
	inline void set_MainAssembly_2(Assembly_t1335047557 * value)
	{
		___MainAssembly_2 = value;
		Il2CppCodeGenWriteBarrier((&___MainAssembly_2), value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_3() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ____neutralResourcesCulture_3)); }
	inline CultureInfo_t816937530 * get__neutralResourcesCulture_3() const { return ____neutralResourcesCulture_3; }
	inline CultureInfo_t816937530 ** get_address_of__neutralResourcesCulture_3() { return &____neutralResourcesCulture_3; }
	inline void set__neutralResourcesCulture_3(CultureInfo_t816937530 * value)
	{
		____neutralResourcesCulture_3 = value;
		Il2CppCodeGenWriteBarrier((&____neutralResourcesCulture_3), value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_4() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ____lastUsedResourceCache_4)); }
	inline CultureNameResourceSetPair_t2914742105 * get__lastUsedResourceCache_4() const { return ____lastUsedResourceCache_4; }
	inline CultureNameResourceSetPair_t2914742105 ** get_address_of__lastUsedResourceCache_4() { return &____lastUsedResourceCache_4; }
	inline void set__lastUsedResourceCache_4(CultureNameResourceSetPair_t2914742105 * value)
	{
		____lastUsedResourceCache_4 = value;
		Il2CppCodeGenWriteBarrier((&____lastUsedResourceCache_4), value);
	}

	inline static int32_t get_offset_of_UseManifest_5() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ___UseManifest_5)); }
	inline bool get_UseManifest_5() const { return ___UseManifest_5; }
	inline bool* get_address_of_UseManifest_5() { return &___UseManifest_5; }
	inline void set_UseManifest_5(bool value)
	{
		___UseManifest_5 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_6() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ___UseSatelliteAssem_6)); }
	inline bool get_UseSatelliteAssem_6() const { return ___UseSatelliteAssem_6; }
	inline bool* get_address_of_UseSatelliteAssem_6() { return &___UseSatelliteAssem_6; }
	inline void set_UseSatelliteAssem_6(bool value)
	{
		___UseSatelliteAssem_6 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_7() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ____fallbackLoc_7)); }
	inline int32_t get__fallbackLoc_7() const { return ____fallbackLoc_7; }
	inline int32_t* get_address_of__fallbackLoc_7() { return &____fallbackLoc_7; }
	inline void set__fallbackLoc_7(int32_t value)
	{
		____fallbackLoc_7 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_8() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ____callingAssembly_8)); }
	inline Assembly_t1335047557 * get__callingAssembly_8() const { return ____callingAssembly_8; }
	inline Assembly_t1335047557 ** get_address_of__callingAssembly_8() { return &____callingAssembly_8; }
	inline void set__callingAssembly_8(Assembly_t1335047557 * value)
	{
		____callingAssembly_8 = value;
		Il2CppCodeGenWriteBarrier((&____callingAssembly_8), value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_9() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ___m_callingAssembly_9)); }
	inline RuntimeAssembly_t3660872792 * get_m_callingAssembly_9() const { return ___m_callingAssembly_9; }
	inline RuntimeAssembly_t3660872792 ** get_address_of_m_callingAssembly_9() { return &___m_callingAssembly_9; }
	inline void set_m_callingAssembly_9(RuntimeAssembly_t3660872792 * value)
	{
		___m_callingAssembly_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_callingAssembly_9), value);
	}

	inline static int32_t get_offset_of_resourceGroveler_10() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741, ___resourceGroveler_10)); }
	inline RuntimeObject* get_resourceGroveler_10() const { return ___resourceGroveler_10; }
	inline RuntimeObject** get_address_of_resourceGroveler_10() { return &___resourceGroveler_10; }
	inline void set_resourceGroveler_10(RuntimeObject* value)
	{
		___resourceGroveler_10 = value;
		Il2CppCodeGenWriteBarrier((&___resourceGroveler_10), value);
	}
};

struct ResourceManager_t1704110741_StaticFields
{
public:
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_11;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_12;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t * ____minResourceSet_13;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_14;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_15;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_16;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_17;

public:
	inline static int32_t get_offset_of_MagicNumber_11() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741_StaticFields, ___MagicNumber_11)); }
	inline int32_t get_MagicNumber_11() const { return ___MagicNumber_11; }
	inline int32_t* get_address_of_MagicNumber_11() { return &___MagicNumber_11; }
	inline void set_MagicNumber_11(int32_t value)
	{
		___MagicNumber_11 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_12() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741_StaticFields, ___HeaderVersionNumber_12)); }
	inline int32_t get_HeaderVersionNumber_12() const { return ___HeaderVersionNumber_12; }
	inline int32_t* get_address_of_HeaderVersionNumber_12() { return &___HeaderVersionNumber_12; }
	inline void set_HeaderVersionNumber_12(int32_t value)
	{
		___HeaderVersionNumber_12 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_13() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741_StaticFields, ____minResourceSet_13)); }
	inline Type_t * get__minResourceSet_13() const { return ____minResourceSet_13; }
	inline Type_t ** get_address_of__minResourceSet_13() { return &____minResourceSet_13; }
	inline void set__minResourceSet_13(Type_t * value)
	{
		____minResourceSet_13 = value;
		Il2CppCodeGenWriteBarrier((&____minResourceSet_13), value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_14() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741_StaticFields, ___ResReaderTypeName_14)); }
	inline String_t* get_ResReaderTypeName_14() const { return ___ResReaderTypeName_14; }
	inline String_t** get_address_of_ResReaderTypeName_14() { return &___ResReaderTypeName_14; }
	inline void set_ResReaderTypeName_14(String_t* value)
	{
		___ResReaderTypeName_14 = value;
		Il2CppCodeGenWriteBarrier((&___ResReaderTypeName_14), value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_15() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741_StaticFields, ___ResSetTypeName_15)); }
	inline String_t* get_ResSetTypeName_15() const { return ___ResSetTypeName_15; }
	inline String_t** get_address_of_ResSetTypeName_15() { return &___ResSetTypeName_15; }
	inline void set_ResSetTypeName_15(String_t* value)
	{
		___ResSetTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&___ResSetTypeName_15), value);
	}

	inline static int32_t get_offset_of_MscorlibName_16() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741_StaticFields, ___MscorlibName_16)); }
	inline String_t* get_MscorlibName_16() const { return ___MscorlibName_16; }
	inline String_t** get_address_of_MscorlibName_16() { return &___MscorlibName_16; }
	inline void set_MscorlibName_16(String_t* value)
	{
		___MscorlibName_16 = value;
		Il2CppCodeGenWriteBarrier((&___MscorlibName_16), value);
	}

	inline static int32_t get_offset_of_DEBUG_17() { return static_cast<int32_t>(offsetof(ResourceManager_t1704110741_StaticFields, ___DEBUG_17)); }
	inline int32_t get_DEBUG_17() const { return ___DEBUG_17; }
	inline int32_t* get_address_of_DEBUG_17() { return &___DEBUG_17; }
	inline void set_DEBUG_17(int32_t value)
	{
		___DEBUG_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T1704110741_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1823984300_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1823984300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t1823984300  : public Attribute_t3968905660
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::_culture
	String_t* ____culture_0;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.NeutralResourcesLanguageAttribute::_fallbackLoc
	int32_t ____fallbackLoc_1;

public:
	inline static int32_t get_offset_of__culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t1823984300, ____culture_0)); }
	inline String_t* get__culture_0() const { return ____culture_0; }
	inline String_t** get_address_of__culture_0() { return &____culture_0; }
	inline void set__culture_0(String_t* value)
	{
		____culture_0 = value;
		Il2CppCodeGenWriteBarrier((&____culture_0), value);
	}

	inline static int32_t get_offset_of__fallbackLoc_1() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t1823984300, ____fallbackLoc_1)); }
	inline int32_t get__fallbackLoc_1() const { return ____fallbackLoc_1; }
	inline int32_t* get_address_of__fallbackLoc_1() { return &____fallbackLoc_1; }
	inline void set__fallbackLoc_1(int32_t value)
	{
		____fallbackLoc_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T1823984300_H
#ifndef MULTICASTDELEGATE_T2785948311_H
#define MULTICASTDELEGATE_T2785948311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2785948311  : public Delegate_t1558589342
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t3948460075* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2785948311, ___delegates_11)); }
	inline DelegateU5BU5D_t3948460075* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t3948460075** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t3948460075* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t2785948311_marshaled_pinvoke : public Delegate_t1558589342_marshaled_pinvoke
{
	DelegateU5BU5D_t3948460075* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t2785948311_marshaled_com : public Delegate_t1558589342_marshaled_com
{
	DelegateU5BU5D_t3948460075* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T2785948311_H
#ifndef MODULE_T2558395130_H
#define MODULE_T2558395130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2558395130  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t1335047557 * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;

public:
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_t2558395130, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_t2558395130, ___assembly_3)); }
	inline Assembly_t1335047557 * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t1335047557 ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t1335047557 * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_3), value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_t2558395130, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_4), value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_t2558395130, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_t2558395130, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_6), value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_t2558395130, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_t2558395130, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_t2558395130_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2563343322 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2563343322 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_t2558395130_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t2563343322 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t2563343322 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t2563343322 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_0), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_t2558395130_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t2563343322 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t2563343322 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t2563343322 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_t2558395130_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t1335047557_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_t2558395130_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t1335047557_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
#endif // MODULE_T2558395130_H
#ifndef MONOEVENTINFO_T58685831_H
#define MONOEVENTINFO_T58685831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t58685831 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t3960867763* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t58685831, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t58685831, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t58685831, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t58685831, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t58685831, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t58685831, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t58685831, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t58685831, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t3960867763* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t3960867763** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t3960867763* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t58685831_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t3960867763* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t58685831_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t3960867763* ___other_methods_7;
};
#endif // MONOEVENTINFO_T58685831_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public RuntimeEventInfo_t404823632
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	intptr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	intptr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline intptr_t get_klass_1() const { return ___klass_1; }
	inline intptr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(intptr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline intptr_t get_handle_2() const { return ___handle_2; }
	inline intptr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(intptr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef RTFIELDINFO_T138090315_H
#define RTFIELDINFO_T138090315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RtFieldInfo
struct  RtFieldInfo_t138090315  : public RuntimeFieldInfo_t1026712
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RTFIELDINFO_T138090315_H
#ifndef PARAMETERINFO_T1087920126_H
#define PARAMETERINFO_T1087920126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1087920126  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t2069321284 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1087920126, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1087920126, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1087920126, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1087920126, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1087920126, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1087920126, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1087920126, ___marshalAs_6)); }
	inline MarshalAsAttribute_t2069321284 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t2069321284 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t2069321284 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t1087920126_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t2069321284 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t1087920126_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t2069321284 * ___marshalAs_6;
};
#endif // PARAMETERINFO_T1087920126_H
#ifndef MONOMETHODINFO_T4161370562_H
#define MONOMETHODINFO_T4161370562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t4161370562 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t4161370562, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t4161370562, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t4161370562, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t4161370562, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t4161370562, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t4161370562_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t4161370562_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T4161370562_H
#ifndef RUNTIMEMETHODINFO_T960047212_H
#define RUNTIMEMETHODINFO_T960047212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeMethodInfo
struct  RuntimeMethodInfo_t960047212  : public MethodInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODINFO_T960047212_H
#ifndef MONOPROPERTYINFO_T2341970652_H
#define MONOPROPERTYINFO_T2341970652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t2341970652 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t * ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2341970652, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_declaring_type_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2341970652, ___declaring_type_1)); }
	inline Type_t * get_declaring_type_1() const { return ___declaring_type_1; }
	inline Type_t ** get_address_of_declaring_type_1() { return &___declaring_type_1; }
	inline void set_declaring_type_1(Type_t * value)
	{
		___declaring_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2341970652, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_get_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2341970652, ___get_method_3)); }
	inline MethodInfo_t * get_get_method_3() const { return ___get_method_3; }
	inline MethodInfo_t ** get_address_of_get_method_3() { return &___get_method_3; }
	inline void set_get_method_3(MethodInfo_t * value)
	{
		___get_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_3), value);
	}

	inline static int32_t get_offset_of_set_method_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2341970652, ___set_method_4)); }
	inline MethodInfo_t * get_set_method_4() const { return ___set_method_4; }
	inline MethodInfo_t ** get_address_of_set_method_4() { return &___set_method_4; }
	inline void set_set_method_4(MethodInfo_t * value)
	{
		___set_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_4), value);
	}

	inline static int32_t get_offset_of_attrs_5() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t2341970652, ___attrs_5)); }
	inline int32_t get_attrs_5() const { return ___attrs_5; }
	inline int32_t* get_address_of_attrs_5() { return &___attrs_5; }
	inline void set_attrs_5(int32_t value)
	{
		___attrs_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t2341970652_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t2341970652_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
#endif // MONOPROPERTYINFO_T2341970652_H
#ifndef RUNTIMECONSTRUCTORINFO_T3982025709_H
#define RUNTIMECONSTRUCTORINFO_T3982025709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeConstructorInfo
struct  RuntimeConstructorInfo_t3982025709  : public ConstructorInfo_t1020550882
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECONSTRUCTORINFO_T3982025709_H
#ifndef RUNTIMEASSEMBLY_T3660872792_H
#define RUNTIMEASSEMBLY_T3660872792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeAssembly
struct  RuntimeAssembly_t3660872792  : public Assembly_t1335047557
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEASSEMBLY_T3660872792_H
#ifndef MONOASSEMBLY_T1298181095_H
#define MONOASSEMBLY_T1298181095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoAssembly
struct  MonoAssembly_t1298181095  : public RuntimeAssembly_t3660872792
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASSEMBLY_T1298181095_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public RuntimePropertyInfo_t3673186551
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t2341970652  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t1692686078 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline intptr_t get_prop_1() const { return ___prop_1; }
	inline intptr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(intptr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t2341970652  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t2341970652 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t2341970652  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t1692686078 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t1692686078 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t1692686078 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef RUNTIMEPARAMETERINFO_T3780641546_H
#define RUNTIMEPARAMETERINFO_T3780641546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeParameterInfo
struct  RuntimeParameterInfo_t3780641546  : public ParameterInfo_t1087920126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPARAMETERINFO_T3780641546_H
#ifndef MONOCMETHOD_T2907567153_H
#define MONOCMETHOD_T2907567153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t2907567153  : public RuntimeConstructorInfo_t3982025709
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	intptr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t2907567153, ___mhandle_2)); }
	inline intptr_t get_mhandle_2() const { return ___mhandle_2; }
	inline intptr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(intptr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t2907567153, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t2907567153, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T2907567153_H
#ifndef RUNTIMEMODULE_T2107397018_H
#define RUNTIMEMODULE_T2107397018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeModule
struct  RuntimeModule_t2107397018  : public Module_t2558395130
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMODULE_T2107397018_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public RuntimeMethodInfo_t960047212
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	intptr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline intptr_t get_mhandle_0() const { return ___mhandle_0; }
	inline intptr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(intptr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef ADDEVENTADAPTER_T4142488538_H
#define ADDEVENTADAPTER_T4142488538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t4142488538  : public MulticastDelegate_t2785948311
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T4142488538_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public RtFieldInfo_t138090315
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	intptr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t2513614710  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t2513614710  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t2513614710 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t2513614710  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef UNMANAGEDMEMORYSTREAMFORMODULE_T622504619_H
#define UNMANAGEDMEMORYSTREAMFORMODULE_T622504619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct  UnmanagedMemoryStreamForModule_t622504619  : public UnmanagedMemoryStream_t250308475
{
public:
	// System.Reflection.Module System.Reflection.Assembly/UnmanagedMemoryStreamForModule::module
	Module_t2558395130 * ___module_13;

public:
	inline static int32_t get_offset_of_module_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStreamForModule_t622504619, ___module_13)); }
	inline Module_t2558395130 * get_module_13() const { return ___module_13; }
	inline Module_t2558395130 ** get_address_of_module_13() { return &___module_13; }
	inline void set_module_13(Module_t2558395130 * value)
	{
		___module_13 = value;
		Il2CppCodeGenWriteBarrier((&___module_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORYSTREAMFORMODULE_T622504619_H
#ifndef GETTERADAPTER_T1692686078_H
#define GETTERADAPTER_T1692686078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t1692686078  : public MulticastDelegate_t2785948311
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T1692686078_H
#ifndef MONOMODULE_T3913905394_H
#define MONOMODULE_T3913905394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoModule
struct  MonoModule_t3913905394  : public RuntimeModule_t2107397018
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMODULE_T3913905394_H
#ifndef MONOPARAMETERINFO_T866435423_H
#define MONOPARAMETERINFO_T866435423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoParameterInfo
struct  MonoParameterInfo_t866435423  : public RuntimeParameterInfo_t3780641546
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPARAMETERINFO_T866435423_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { sizeof (Win32ResourceType_t2630161231)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1101[21] = 
{
	Win32ResourceType_t2630161231::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { sizeof (NameOrId_t3060796736), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1102[2] = 
{
	NameOrId_t3060796736::get_offset_of_name_0(),
	NameOrId_t3060796736::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { sizeof (Win32Resource_t2769484352), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1103[2] = 
{
	Win32Resource_t2769484352::get_offset_of_type_0(),
	Win32Resource_t2769484352::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { sizeof (Win32VersionResource_t2985912725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { sizeof (FastResourceComparer_t482802228), -1, sizeof(FastResourceComparer_t482802228_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1105[1] = 
{
	FastResourceComparer_t482802228_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { sizeof (FileBasedResourceGroveler_t700373367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1106[1] = 
{
	FileBasedResourceGroveler_t700373367::get_offset_of__mediator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (ManifestBasedResourceGroveler_t877045718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1109[1] = 
{
	ManifestBasedResourceGroveler_t877045718::get_offset_of__mediator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (MissingManifestResourceException_t3102697787), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (NeutralResourcesLanguageAttribute_t1823984300), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1111[2] = 
{
	NeutralResourcesLanguageAttribute_t1823984300::get_offset_of__culture_0(),
	NeutralResourcesLanguageAttribute_t1823984300::get_offset_of__fallbackLoc_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (ResourceManager_t1704110741), -1, sizeof(ResourceManager_t1704110741_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1112[18] = 
{
	ResourceManager_t1704110741::get_offset_of_ResourceSets_0(),
	ResourceManager_t1704110741::get_offset_of__resourceSets_1(),
	ResourceManager_t1704110741::get_offset_of_MainAssembly_2(),
	ResourceManager_t1704110741::get_offset_of__neutralResourcesCulture_3(),
	ResourceManager_t1704110741::get_offset_of__lastUsedResourceCache_4(),
	ResourceManager_t1704110741::get_offset_of_UseManifest_5(),
	ResourceManager_t1704110741::get_offset_of_UseSatelliteAssem_6(),
	ResourceManager_t1704110741::get_offset_of__fallbackLoc_7(),
	ResourceManager_t1704110741::get_offset_of__callingAssembly_8(),
	ResourceManager_t1704110741::get_offset_of_m_callingAssembly_9(),
	ResourceManager_t1704110741::get_offset_of_resourceGroveler_10(),
	ResourceManager_t1704110741_StaticFields::get_offset_of_MagicNumber_11(),
	ResourceManager_t1704110741_StaticFields::get_offset_of_HeaderVersionNumber_12(),
	ResourceManager_t1704110741_StaticFields::get_offset_of__minResourceSet_13(),
	ResourceManager_t1704110741_StaticFields::get_offset_of_ResReaderTypeName_14(),
	ResourceManager_t1704110741_StaticFields::get_offset_of_ResSetTypeName_15(),
	ResourceManager_t1704110741_StaticFields::get_offset_of_MscorlibName_16(),
	ResourceManager_t1704110741_StaticFields::get_offset_of_DEBUG_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (CultureNameResourceSetPair_t2914742105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (ResourceManagerMediator_t1882107298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1114[1] = 
{
	ResourceManagerMediator_t1882107298::get_offset_of__rm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (ResourceLocator_t1924186670)+ sizeof (RuntimeObject), sizeof(ResourceLocator_t1924186670_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1115[2] = 
{
	ResourceLocator_t1924186670::get_offset_of__value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceLocator_t1924186670::get_offset_of__dataPos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (ResourceReader_t1860394420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[14] = 
{
	ResourceReader_t1860394420::get_offset_of__store_0(),
	ResourceReader_t1860394420::get_offset_of__resCache_1(),
	ResourceReader_t1860394420::get_offset_of__nameSectionOffset_2(),
	ResourceReader_t1860394420::get_offset_of__dataSectionOffset_3(),
	ResourceReader_t1860394420::get_offset_of__nameHashes_4(),
	ResourceReader_t1860394420::get_offset_of__nameHashesPtr_5(),
	ResourceReader_t1860394420::get_offset_of__namePositions_6(),
	ResourceReader_t1860394420::get_offset_of__namePositionsPtr_7(),
	ResourceReader_t1860394420::get_offset_of__typeTable_8(),
	ResourceReader_t1860394420::get_offset_of__typeNamePositions_9(),
	ResourceReader_t1860394420::get_offset_of__objFormatter_10(),
	ResourceReader_t1860394420::get_offset_of__numResources_11(),
	ResourceReader_t1860394420::get_offset_of__ums_12(),
	ResourceReader_t1860394420::get_offset_of__version_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (ResourceEnumerator_t1170083932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[4] = 
{
	ResourceEnumerator_t1170083932::get_offset_of__reader_0(),
	ResourceEnumerator_t1170083932::get_offset_of__currentIsValid_1(),
	ResourceEnumerator_t1170083932::get_offset_of__currentName_2(),
	ResourceEnumerator_t1170083932::get_offset_of__dataPosition_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (ResourceSet_t635877287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[3] = 
{
	ResourceSet_t635877287::get_offset_of_Reader_0(),
	ResourceSet_t635877287::get_offset_of_Table_1(),
	ResourceSet_t635877287::get_offset_of__caseInsensitiveTable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (ResourceTypeCode_t3838084402)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1119[22] = 
{
	ResourceTypeCode_t3838084402::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (RuntimeResourceSet_t1818663132), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1120[5] = 
{
	0,
	RuntimeResourceSet_t1818663132::get_offset_of__resCache_4(),
	RuntimeResourceSet_t1818663132::get_offset_of__defaultReader_5(),
	RuntimeResourceSet_t1818663132::get_offset_of__caseInsensitiveTable_6(),
	RuntimeResourceSet_t1818663132::get_offset_of__haveReadFromReader_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (SatelliteContractVersionAttribute_t1159011837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[1] = 
{
	SatelliteContractVersionAttribute_t1159011837::get_offset_of__version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (UltimateResourceFallbackLocation_t1143631536)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1122[3] = 
{
	UltimateResourceFallbackLocation_t1143631536::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { sizeof (Assembly_t1335047557), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1123[10] = 
{
	Assembly_t1335047557::get_offset_of__mono_assembly_0(),
	Assembly_t1335047557::get_offset_of_resolve_event_holder_1(),
	Assembly_t1335047557::get_offset_of__evidence_2(),
	Assembly_t1335047557::get_offset_of__minimum_3(),
	Assembly_t1335047557::get_offset_of__optional_4(),
	Assembly_t1335047557::get_offset_of__refuse_5(),
	Assembly_t1335047557::get_offset_of__granted_6(),
	Assembly_t1335047557::get_offset_of__denied_7(),
	Assembly_t1335047557::get_offset_of_fromByteArray_8(),
	Assembly_t1335047557::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { sizeof (ResolveEventHolder_t2978779363), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { sizeof (UnmanagedMemoryStreamForModule_t622504619), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1125[1] = 
{
	UnmanagedMemoryStreamForModule_t622504619::get_offset_of_module_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { sizeof (AssemblyName_t585760915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1126[16] = 
{
	AssemblyName_t585760915::get_offset_of_name_0(),
	AssemblyName_t585760915::get_offset_of_codebase_1(),
	AssemblyName_t585760915::get_offset_of_major_2(),
	AssemblyName_t585760915::get_offset_of_minor_3(),
	AssemblyName_t585760915::get_offset_of_build_4(),
	AssemblyName_t585760915::get_offset_of_revision_5(),
	AssemblyName_t585760915::get_offset_of_cultureinfo_6(),
	AssemblyName_t585760915::get_offset_of_flags_7(),
	AssemblyName_t585760915::get_offset_of_hashalg_8(),
	AssemblyName_t585760915::get_offset_of_keypair_9(),
	AssemblyName_t585760915::get_offset_of_publicKey_10(),
	AssemblyName_t585760915::get_offset_of_keyToken_11(),
	AssemblyName_t585760915::get_offset_of_versioncompat_12(),
	AssemblyName_t585760915::get_offset_of_version_13(),
	AssemblyName_t585760915::get_offset_of_processor_architecture_14(),
	AssemblyName_t585760915::get_offset_of_contentType_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { sizeof (ConstructorInfo_t1020550882), -1, sizeof(ConstructorInfo_t1020550882_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1127[2] = 
{
	ConstructorInfo_t1020550882_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t1020550882_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (CustomAttributeData_t2834530432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1128[4] = 
{
	CustomAttributeData_t2834530432::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t2834530432::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t2834530432::get_offset_of_namedArgs_2(),
	CustomAttributeData_t2834530432::get_offset_of_lazyData_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (LazyCAttrData_t2346709998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[3] = 
{
	LazyCAttrData_t2346709998::get_offset_of_assembly_0(),
	LazyCAttrData_t2346709998::get_offset_of_data_1(),
	LazyCAttrData_t2346709998::get_offset_of_data_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (CustomAttributeFormatException_t1550625222), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (CustomAttributeNamedArgument_t2221428026)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[2] = 
{
	CustomAttributeNamedArgument_t2221428026::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t2221428026::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (CustomAttributeTypedArgument_t1506896658)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1132[2] = 
{
	CustomAttributeTypedArgument_t1506896658::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t1506896658::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1133[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (AddEventAdapter_t4142488538), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (ImageFileMachine_t1357313066)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1136[5] = 
{
	ImageFileMachine_t1357313066::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (LocalVariableInfo_t397290019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1137[3] = 
{
	LocalVariableInfo_t397290019::get_offset_of_type_0(),
	LocalVariableInfo_t397290019::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t397290019::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (ResolveTokenError_t247298882)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1138[4] = 
{
	ResolveTokenError_t247298882::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (Module_t2558395130), -1, sizeof(Module_t2558395130_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1139[10] = 
{
	Module_t2558395130_StaticFields::get_offset_of_FilterTypeName_0(),
	Module_t2558395130_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_1(),
	Module_t2558395130::get_offset_of__impl_2(),
	Module_t2558395130::get_offset_of_assembly_3(),
	Module_t2558395130::get_offset_of_fqname_4(),
	Module_t2558395130::get_offset_of_name_5(),
	Module_t2558395130::get_offset_of_scopename_6(),
	Module_t2558395130::get_offset_of_is_resource_7(),
	Module_t2558395130::get_offset_of_token_8(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (RuntimeAssembly_t3660872792), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (MonoAssembly_t1298181095), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (MonoEventInfo_t58685831)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1142[8] = 
{
	MonoEventInfo_t58685831::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t58685831::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t58685831::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t58685831::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t58685831::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t58685831::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t58685831::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t58685831::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (RuntimeEventInfo_t404823632), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1144[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (RuntimeFieldInfo_t1026712), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (RtFieldInfo_t138090315), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1147[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (MonoMethodInfo_t4161370562)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1148[5] = 
{
	MonoMethodInfo_t4161370562::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t4161370562::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t4161370562::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t4161370562::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t4161370562::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (RuntimeMethodInfo_t960047212), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1150[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (RuntimeConstructorInfo_t3982025709), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (MonoCMethod_t2907567153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1152[3] = 
{
	MonoCMethod_t2907567153::get_offset_of_mhandle_2(),
	MonoCMethod_t2907567153::get_offset_of_name_3(),
	MonoCMethod_t2907567153::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (RuntimeModule_t2107397018), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (MonoModule_t3913905394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (RuntimeParameterInfo_t3780641546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (MonoParameterInfo_t866435423), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (MonoPropertyInfo_t2341970652)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1157[6] = 
{
	MonoPropertyInfo_t2341970652::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2341970652::get_offset_of_declaring_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2341970652::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2341970652::get_offset_of_get_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2341970652::get_offset_of_set_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t2341970652::get_offset_of_attrs_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (PInfo_t266195142)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1158[7] = 
{
	PInfo_t266195142::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (RuntimePropertyInfo_t3673186551), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1160[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (GetterAdapter_t1692686078), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (ParameterInfo_t1087920126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1164[7] = 
{
	ParameterInfo_t1087920126::get_offset_of_ClassImpl_0(),
	ParameterInfo_t1087920126::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t1087920126::get_offset_of_MemberImpl_2(),
	ParameterInfo_t1087920126::get_offset_of_NameImpl_3(),
	ParameterInfo_t1087920126::get_offset_of_PositionImpl_4(),
	ParameterInfo_t1087920126::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t1087920126::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (PortableExecutableKinds_t2735621479)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1165[7] = 
{
	PortableExecutableKinds_t2735621479::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { sizeof (ReflectionTypeLoadException_t1125548538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1167[2] = 
{
	ReflectionTypeLoadException_t1125548538::get_offset_of_loaderExceptions_16(),
	ReflectionTypeLoadException_t1125548538::get_offset_of_types_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { sizeof (StrongNameKeyPair_t4257165617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1168[5] = 
{
	StrongNameKeyPair_t4257165617::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t4257165617::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t4257165617::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t4257165617::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t4257165617::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { sizeof (MethodBase_t2487692207), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { sizeof (AmbiguousMatchException_t2806965256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { sizeof (AssemblyCopyrightAttribute_t2722640223), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1171[1] = 
{
	AssemblyCopyrightAttribute_t2722640223::get_offset_of_m_copyright_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { sizeof (AssemblyTrademarkAttribute_t1555455682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1172[1] = 
{
	AssemblyTrademarkAttribute_t1555455682::get_offset_of_m_trademark_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { sizeof (AssemblyProductAttribute_t1522918482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1173[1] = 
{
	AssemblyProductAttribute_t1522918482::get_offset_of_m_product_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { sizeof (AssemblyCompanyAttribute_t2343421206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1174[1] = 
{
	AssemblyCompanyAttribute_t2343421206::get_offset_of_m_company_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { sizeof (AssemblyDescriptionAttribute_t1179128081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1175[1] = 
{
	AssemblyDescriptionAttribute_t1179128081::get_offset_of_m_description_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (AssemblyTitleAttribute_t366144024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1176[1] = 
{
	AssemblyTitleAttribute_t366144024::get_offset_of_m_title_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (AssemblyConfigurationAttribute_t501869586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1177[1] = 
{
	AssemblyConfigurationAttribute_t501869586::get_offset_of_m_configuration_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (AssemblyDefaultAliasAttribute_t3920299173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1178[1] = 
{
	AssemblyDefaultAliasAttribute_t3920299173::get_offset_of_m_defaultAlias_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (AssemblyInformationalVersionAttribute_t3447752837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1179[1] = 
{
	AssemblyInformationalVersionAttribute_t3447752837::get_offset_of_m_informationalVersion_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (AssemblyFileVersionAttribute_t676265285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1180[1] = 
{
	AssemblyFileVersionAttribute_t676265285::get_offset_of__version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (AssemblyVersionAttribute_t360494414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1181[1] = 
{
	AssemblyVersionAttribute_t360494414::get_offset_of_m_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (AssemblyKeyFileAttribute_t3246790047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1182[1] = 
{
	AssemblyKeyFileAttribute_t3246790047::get_offset_of_m_keyFile_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (AssemblyDelaySignAttribute_t3257589432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1183[1] = 
{
	AssemblyDelaySignAttribute_t3257589432::get_offset_of_m_delaySign_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (AssemblyNameFlags_t4261537561)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1184[6] = 
{
	AssemblyNameFlags_t4261537561::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (AssemblyContentType_t3979067622)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1185[3] = 
{
	AssemblyContentType_t3979067622::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (ProcessorArchitecture_t2712292647)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1186[7] = 
{
	ProcessorArchitecture_t2712292647::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (Binder_t3651822128), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (BindingFlags_t3318191187)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1188[21] = 
{
	BindingFlags_t3318191187::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (CallingConventions_t150076343)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1189[6] = 
{
	CallingConventions_t150076343::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (CustomAttributeExtensions_t846375311), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (DefaultMemberAttribute_t2081107854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[1] = 
{
	DefaultMemberAttribute_t2081107854::get_offset_of_m_memberName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (EventAttributes_t589940098)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1192[5] = 
{
	EventAttributes_t589940098::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (FieldAttributes_t3452410374)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1193[20] = 
{
	FieldAttributes_t3452410374::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (GenericParameterAttributes_t2515986137)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1194[9] = 
{
	GenericParameterAttributes_t2515986137::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (InvalidFilterCriteriaException_t2208516309), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (IntrospectionExtensions_t941276245), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
