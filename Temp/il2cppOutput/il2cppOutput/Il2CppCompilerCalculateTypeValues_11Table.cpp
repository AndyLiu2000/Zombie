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
struct ServerIdentity_t504254067;
// System.Resources.IResourceReader
struct IResourceReader_t4124335400;
// System.Collections.Hashtable
struct Hashtable_t3971943106;
// System.Resources.ResourceReader
struct ResourceReader_t2879437979;
// System.IO.BinaryReader
struct BinaryReader_t4283375752;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator>
struct Dictionary_2_t1539973668;
// System.Int32[]
struct Int32U5BU5D_t1276023077;
// System.RuntimeType[]
struct RuntimeTypeU5BU5D_t1880731213;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t1712246351;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t3767509405;
// System.Int32
struct Int32_t825053868;
// System.Resources.ResourceManager
struct ResourceManager_t2588638809;
// System.Type
struct Type_t;
// System.Resources.ResourceManager/ResourceManagerMediator
struct ResourceManagerMediator_t911734866;
// System.Resources.NameOrId
struct NameOrId_t3866172727;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3632859112;
// System.Security.Cryptography.RSA
struct RSA_t3739757907;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t4042935252;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t3176421264;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2508934562;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t1936330710;
// System.Collections.IDictionary
struct IDictionary_t2209762685;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3559648024;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t3791304912;
// System.IntPtr[]
struct IntPtrU5BU5D_t3595384210;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t1786581176;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2300956193;
// System.Void
struct Void_t634856565;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t4087444710;
// System.Char[]
struct CharU5BU5D_t1313538844;
// System.UInt32[]
struct UInt32U5BU5D_t1965307802;
// System.Threading.Tasks.Task
struct Task_t2690497587;
// System.Exception[]
struct ExceptionU5BU5D_t766679520;
// System.Type[]
struct TypeU5BU5D_t239669940;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2546935524;
// System.Security.Policy.Evidence
struct Evidence_t1804865947;
// System.Security.PermissionSet
struct PermissionSet_t2685089084;
// System.Reflection.Assembly
struct Assembly_t3901089011;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2989019778;
// System.Reflection.TypeFilter
struct TypeFilter_t356011281;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_t3810322187;
// System.Globalization.CultureInfo
struct CultureInfo_t197737613;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t2908542402;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_t1315804773;
// System.Resources.IResourceGroveler
struct IResourceGroveler_t1729802144;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t4133742925;
// System.Version
struct Version_t1375298617;
// System.Delegate[]
struct DelegateU5BU5D_t2205479154;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2074339038;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t1683731080;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t3549662980;
// System.Byte
struct Byte_t1087778533;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t3001414182;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t3667645738;
// System.Reflection.Module
struct Module_t1203274219;
// System.Delegate
struct Delegate_t1297946403;
// System.IAsyncResult
struct IAsyncResult_t1336778382;
// System.AsyncCallback
struct AsyncCallback_t1548115960;

struct Exception_t4083038797_marshaled_pinvoke;
struct Exception_t4083038797_marshaled_com;
struct Assembly_t3901089011_marshaled_pinvoke;
struct Assembly_t3901089011_marshaled_com;
struct CultureInfo_t197737613_marshaled_pinvoke;
struct CultureInfo_t197737613_marshaled_com;



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
#ifndef RESOURCESET_T541231514_H
#define RESOURCESET_T541231514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t541231514  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t3971943106 * ___Table_1;
	// System.Collections.Hashtable System.Resources.ResourceSet::_caseInsensitiveTable
	Hashtable_t3971943106 * ____caseInsensitiveTable_2;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t541231514, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t541231514, ___Table_1)); }
	inline Hashtable_t3971943106 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t3971943106 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t3971943106 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_2() { return static_cast<int32_t>(offsetof(ResourceSet_t541231514, ____caseInsensitiveTable_2)); }
	inline Hashtable_t3971943106 * get__caseInsensitiveTable_2() const { return ____caseInsensitiveTable_2; }
	inline Hashtable_t3971943106 ** get_address_of__caseInsensitiveTable_2() { return &____caseInsensitiveTable_2; }
	inline void set__caseInsensitiveTable_2(Hashtable_t3971943106 * value)
	{
		____caseInsensitiveTable_2 = value;
		Il2CppCodeGenWriteBarrier((&____caseInsensitiveTable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T541231514_H
#ifndef RESOURCEENUMERATOR_T1920415873_H
#define RESOURCEENUMERATOR_T1920415873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t1920415873  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::_reader
	ResourceReader_t2879437979 * ____reader_0;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::_currentIsValid
	bool ____currentIsValid_1;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::_currentName
	int32_t ____currentName_2;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::_dataPosition
	int32_t ____dataPosition_3;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1920415873, ____reader_0)); }
	inline ResourceReader_t2879437979 * get__reader_0() const { return ____reader_0; }
	inline ResourceReader_t2879437979 ** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(ResourceReader_t2879437979 * value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier((&____reader_0), value);
	}

	inline static int32_t get_offset_of__currentIsValid_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1920415873, ____currentIsValid_1)); }
	inline bool get__currentIsValid_1() const { return ____currentIsValid_1; }
	inline bool* get_address_of__currentIsValid_1() { return &____currentIsValid_1; }
	inline void set__currentIsValid_1(bool value)
	{
		____currentIsValid_1 = value;
	}

	inline static int32_t get_offset_of__currentName_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1920415873, ____currentName_2)); }
	inline int32_t get__currentName_2() const { return ____currentName_2; }
	inline int32_t* get_address_of__currentName_2() { return &____currentName_2; }
	inline void set__currentName_2(int32_t value)
	{
		____currentName_2 = value;
	}

	inline static int32_t get_offset_of__dataPosition_3() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t1920415873, ____dataPosition_3)); }
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
#endif // RESOURCEENUMERATOR_T1920415873_H
#ifndef RESOURCEREADER_T2879437979_H
#define RESOURCEREADER_T2879437979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t2879437979  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::_store
	BinaryReader_t4283375752 * ____store_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.ResourceReader::_resCache
	Dictionary_2_t1539973668 * ____resCache_1;
	// System.Int64 System.Resources.ResourceReader::_nameSectionOffset
	int64_t ____nameSectionOffset_2;
	// System.Int64 System.Resources.ResourceReader::_dataSectionOffset
	int64_t ____dataSectionOffset_3;
	// System.Int32[] System.Resources.ResourceReader::_nameHashes
	Int32U5BU5D_t1276023077* ____nameHashes_4;
	// System.Int32* System.Resources.ResourceReader::_nameHashesPtr
	int32_t* ____nameHashesPtr_5;
	// System.Int32[] System.Resources.ResourceReader::_namePositions
	Int32U5BU5D_t1276023077* ____namePositions_6;
	// System.Int32* System.Resources.ResourceReader::_namePositionsPtr
	int32_t* ____namePositionsPtr_7;
	// System.RuntimeType[] System.Resources.ResourceReader::_typeTable
	RuntimeTypeU5BU5D_t1880731213* ____typeTable_8;
	// System.Int32[] System.Resources.ResourceReader::_typeNamePositions
	Int32U5BU5D_t1276023077* ____typeNamePositions_9;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Resources.ResourceReader::_objFormatter
	BinaryFormatter_t1712246351 * ____objFormatter_10;
	// System.Int32 System.Resources.ResourceReader::_numResources
	int32_t ____numResources_11;
	// System.IO.UnmanagedMemoryStream System.Resources.ResourceReader::_ums
	UnmanagedMemoryStream_t3767509405 * ____ums_12;
	// System.Int32 System.Resources.ResourceReader::_version
	int32_t ____version_13;

public:
	inline static int32_t get_offset_of__store_0() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____store_0)); }
	inline BinaryReader_t4283375752 * get__store_0() const { return ____store_0; }
	inline BinaryReader_t4283375752 ** get_address_of__store_0() { return &____store_0; }
	inline void set__store_0(BinaryReader_t4283375752 * value)
	{
		____store_0 = value;
		Il2CppCodeGenWriteBarrier((&____store_0), value);
	}

	inline static int32_t get_offset_of__resCache_1() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____resCache_1)); }
	inline Dictionary_2_t1539973668 * get__resCache_1() const { return ____resCache_1; }
	inline Dictionary_2_t1539973668 ** get_address_of__resCache_1() { return &____resCache_1; }
	inline void set__resCache_1(Dictionary_2_t1539973668 * value)
	{
		____resCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____resCache_1), value);
	}

	inline static int32_t get_offset_of__nameSectionOffset_2() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____nameSectionOffset_2)); }
	inline int64_t get__nameSectionOffset_2() const { return ____nameSectionOffset_2; }
	inline int64_t* get_address_of__nameSectionOffset_2() { return &____nameSectionOffset_2; }
	inline void set__nameSectionOffset_2(int64_t value)
	{
		____nameSectionOffset_2 = value;
	}

	inline static int32_t get_offset_of__dataSectionOffset_3() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____dataSectionOffset_3)); }
	inline int64_t get__dataSectionOffset_3() const { return ____dataSectionOffset_3; }
	inline int64_t* get_address_of__dataSectionOffset_3() { return &____dataSectionOffset_3; }
	inline void set__dataSectionOffset_3(int64_t value)
	{
		____dataSectionOffset_3 = value;
	}

	inline static int32_t get_offset_of__nameHashes_4() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____nameHashes_4)); }
	inline Int32U5BU5D_t1276023077* get__nameHashes_4() const { return ____nameHashes_4; }
	inline Int32U5BU5D_t1276023077** get_address_of__nameHashes_4() { return &____nameHashes_4; }
	inline void set__nameHashes_4(Int32U5BU5D_t1276023077* value)
	{
		____nameHashes_4 = value;
		Il2CppCodeGenWriteBarrier((&____nameHashes_4), value);
	}

	inline static int32_t get_offset_of__nameHashesPtr_5() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____nameHashesPtr_5)); }
	inline int32_t* get__nameHashesPtr_5() const { return ____nameHashesPtr_5; }
	inline int32_t** get_address_of__nameHashesPtr_5() { return &____nameHashesPtr_5; }
	inline void set__nameHashesPtr_5(int32_t* value)
	{
		____nameHashesPtr_5 = value;
	}

	inline static int32_t get_offset_of__namePositions_6() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____namePositions_6)); }
	inline Int32U5BU5D_t1276023077* get__namePositions_6() const { return ____namePositions_6; }
	inline Int32U5BU5D_t1276023077** get_address_of__namePositions_6() { return &____namePositions_6; }
	inline void set__namePositions_6(Int32U5BU5D_t1276023077* value)
	{
		____namePositions_6 = value;
		Il2CppCodeGenWriteBarrier((&____namePositions_6), value);
	}

	inline static int32_t get_offset_of__namePositionsPtr_7() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____namePositionsPtr_7)); }
	inline int32_t* get__namePositionsPtr_7() const { return ____namePositionsPtr_7; }
	inline int32_t** get_address_of__namePositionsPtr_7() { return &____namePositionsPtr_7; }
	inline void set__namePositionsPtr_7(int32_t* value)
	{
		____namePositionsPtr_7 = value;
	}

	inline static int32_t get_offset_of__typeTable_8() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____typeTable_8)); }
	inline RuntimeTypeU5BU5D_t1880731213* get__typeTable_8() const { return ____typeTable_8; }
	inline RuntimeTypeU5BU5D_t1880731213** get_address_of__typeTable_8() { return &____typeTable_8; }
	inline void set__typeTable_8(RuntimeTypeU5BU5D_t1880731213* value)
	{
		____typeTable_8 = value;
		Il2CppCodeGenWriteBarrier((&____typeTable_8), value);
	}

	inline static int32_t get_offset_of__typeNamePositions_9() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____typeNamePositions_9)); }
	inline Int32U5BU5D_t1276023077* get__typeNamePositions_9() const { return ____typeNamePositions_9; }
	inline Int32U5BU5D_t1276023077** get_address_of__typeNamePositions_9() { return &____typeNamePositions_9; }
	inline void set__typeNamePositions_9(Int32U5BU5D_t1276023077* value)
	{
		____typeNamePositions_9 = value;
		Il2CppCodeGenWriteBarrier((&____typeNamePositions_9), value);
	}

	inline static int32_t get_offset_of__objFormatter_10() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____objFormatter_10)); }
	inline BinaryFormatter_t1712246351 * get__objFormatter_10() const { return ____objFormatter_10; }
	inline BinaryFormatter_t1712246351 ** get_address_of__objFormatter_10() { return &____objFormatter_10; }
	inline void set__objFormatter_10(BinaryFormatter_t1712246351 * value)
	{
		____objFormatter_10 = value;
		Il2CppCodeGenWriteBarrier((&____objFormatter_10), value);
	}

	inline static int32_t get_offset_of__numResources_11() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____numResources_11)); }
	inline int32_t get__numResources_11() const { return ____numResources_11; }
	inline int32_t* get_address_of__numResources_11() { return &____numResources_11; }
	inline void set__numResources_11(int32_t value)
	{
		____numResources_11 = value;
	}

	inline static int32_t get_offset_of__ums_12() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____ums_12)); }
	inline UnmanagedMemoryStream_t3767509405 * get__ums_12() const { return ____ums_12; }
	inline UnmanagedMemoryStream_t3767509405 ** get_address_of__ums_12() { return &____ums_12; }
	inline void set__ums_12(UnmanagedMemoryStream_t3767509405 * value)
	{
		____ums_12 = value;
		Il2CppCodeGenWriteBarrier((&____ums_12), value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(ResourceReader_t2879437979, ____version_13)); }
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
#endif // RESOURCEREADER_T2879437979_H
#ifndef RESOURCEMANAGERMEDIATOR_T911734866_H
#define RESOURCEMANAGERMEDIATOR_T911734866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager/ResourceManagerMediator
struct  ResourceManagerMediator_t911734866  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager System.Resources.ResourceManager/ResourceManagerMediator::_rm
	ResourceManager_t2588638809 * ____rm_0;

public:
	inline static int32_t get_offset_of__rm_0() { return static_cast<int32_t>(offsetof(ResourceManagerMediator_t911734866, ____rm_0)); }
	inline ResourceManager_t2588638809 * get__rm_0() const { return ____rm_0; }
	inline ResourceManager_t2588638809 ** get_address_of__rm_0() { return &____rm_0; }
	inline void set__rm_0(ResourceManager_t2588638809 * value)
	{
		____rm_0 = value;
		Il2CppCodeGenWriteBarrier((&____rm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGERMEDIATOR_T911734866_H
#ifndef CULTURENAMERESOURCESETPAIR_T2908542402_H
#define CULTURENAMERESOURCESETPAIR_T2908542402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager/CultureNameResourceSetPair
struct  CultureNameResourceSetPair_t2908542402  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURENAMERESOURCESETPAIR_T2908542402_H
#ifndef LOCALVARIABLEINFO_T2526227085_H
#define LOCALVARIABLEINFO_T2526227085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.LocalVariableInfo
struct  LocalVariableInfo_t2526227085  : public RuntimeObject
{
public:
	// System.Type System.Reflection.LocalVariableInfo::type
	Type_t * ___type_0;
	// System.Boolean System.Reflection.LocalVariableInfo::is_pinned
	bool ___is_pinned_1;
	// System.UInt16 System.Reflection.LocalVariableInfo::position
	uint16_t ___position_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2526227085, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_is_pinned_1() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2526227085, ___is_pinned_1)); }
	inline bool get_is_pinned_1() const { return ___is_pinned_1; }
	inline bool* get_address_of_is_pinned_1() { return &___is_pinned_1; }
	inline void set_is_pinned_1(bool value)
	{
		___is_pinned_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2526227085, ___position_2)); }
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
struct LocalVariableInfo_t2526227085_marshaled_pinvoke
{
	Type_t * ___type_0;
	int32_t ___is_pinned_1;
	uint16_t ___position_2;
};
// Native definition for COM marshalling of System.Reflection.LocalVariableInfo
struct LocalVariableInfo_t2526227085_marshaled_com
{
	Type_t * ___type_0;
	int32_t ___is_pinned_1;
	uint16_t ___position_2;
};
#endif // LOCALVARIABLEINFO_T2526227085_H
#ifndef MANIFESTBASEDRESOURCEGROVELER_T2752648457_H
#define MANIFESTBASEDRESOURCEGROVELER_T2752648457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ManifestBasedResourceGroveler
struct  ManifestBasedResourceGroveler_t2752648457  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.ManifestBasedResourceGroveler::_mediator
	ResourceManagerMediator_t911734866 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(ManifestBasedResourceGroveler_t2752648457, ____mediator_0)); }
	inline ResourceManagerMediator_t911734866 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t911734866 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t911734866 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANIFESTBASEDRESOURCEGROVELER_T2752648457_H
#ifndef FILEBASEDRESOURCEGROVELER_T1776187837_H
#define FILEBASEDRESOURCEGROVELER_T1776187837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FileBasedResourceGroveler
struct  FileBasedResourceGroveler_t1776187837  : public RuntimeObject
{
public:
	// System.Resources.ResourceManager/ResourceManagerMediator System.Resources.FileBasedResourceGroveler::_mediator
	ResourceManagerMediator_t911734866 * ____mediator_0;

public:
	inline static int32_t get_offset_of__mediator_0() { return static_cast<int32_t>(offsetof(FileBasedResourceGroveler_t1776187837, ____mediator_0)); }
	inline ResourceManagerMediator_t911734866 * get__mediator_0() const { return ____mediator_0; }
	inline ResourceManagerMediator_t911734866 ** get_address_of__mediator_0() { return &____mediator_0; }
	inline void set__mediator_0(ResourceManagerMediator_t911734866 * value)
	{
		____mediator_0 = value;
		Il2CppCodeGenWriteBarrier((&____mediator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEBASEDRESOURCEGROVELER_T1776187837_H
#ifndef FASTRESOURCECOMPARER_T3599416720_H
#define FASTRESOURCECOMPARER_T3599416720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.FastResourceComparer
struct  FastResourceComparer_t3599416720  : public RuntimeObject
{
public:

public:
};

struct FastResourceComparer_t3599416720_StaticFields
{
public:
	// System.Resources.FastResourceComparer System.Resources.FastResourceComparer::Default
	FastResourceComparer_t3599416720 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(FastResourceComparer_t3599416720_StaticFields, ___Default_0)); }
	inline FastResourceComparer_t3599416720 * get_Default_0() const { return ___Default_0; }
	inline FastResourceComparer_t3599416720 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(FastResourceComparer_t3599416720 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FASTRESOURCECOMPARER_T3599416720_H
#ifndef WIN32RESOURCE_T3139241425_H
#define WIN32RESOURCE_T3139241425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32Resource
struct  Win32Resource_t3139241425  : public RuntimeObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t3866172727 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t3866172727 * ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t3139241425, ___type_0)); }
	inline NameOrId_t3866172727 * get_type_0() const { return ___type_0; }
	inline NameOrId_t3866172727 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t3866172727 * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t3139241425, ___name_1)); }
	inline NameOrId_t3866172727 * get_name_1() const { return ___name_1; }
	inline NameOrId_t3866172727 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t3866172727 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32RESOURCE_T3139241425_H
#ifndef NAMEORID_T3866172727_H
#define NAMEORID_T3866172727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NameOrId
struct  NameOrId_t3866172727  : public RuntimeObject
{
public:
	// System.String System.Resources.NameOrId::name
	String_t* ___name_0;
	// System.Int32 System.Resources.NameOrId::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t3866172727, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t3866172727, ___id_1)); }
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
#endif // NAMEORID_T3866172727_H
#ifndef STRONGNAMEKEYPAIR_T4133742925_H
#define STRONGNAMEKEYPAIR_T4133742925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t4133742925  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t3632859112* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t3632859112* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t3739757907 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4133742925, ____publicKey_0)); }
	inline ByteU5BU5D_t3632859112* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t3632859112** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t3632859112* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4133742925, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4133742925, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4133742925, ____keyPairArray_3)); }
	inline ByteU5BU5D_t3632859112* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t3632859112** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t3632859112* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4133742925, ____rsa_4)); }
	inline RSA_t3739757907 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t3739757907 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t3739757907 * value)
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T4133742925_H
#ifndef CUSTOMATTRIBUTEDATA_T2686429608_H
#define CUSTOMATTRIBUTEDATA_T2686429608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2686429608  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t4042935252 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData/LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t1936330710 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2686429608, ___ctorInfo_0)); }
	inline ConstructorInfo_t4042935252 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t4042935252 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t4042935252 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2686429608, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2686429608, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2686429608, ___lazyData_3)); }
	inline LazyCAttrData_t1936330710 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t1936330710 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t1936330710 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((&___lazyData_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T2686429608_H
#ifndef RESOLVEEVENTHOLDER_T2546935524_H
#define RESOLVEEVENTHOLDER_T2546935524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t2546935524  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T2546935524_H
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
#ifndef ISVOLATILE_T267919274_H
#define ISVOLATILE_T267919274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t267919274  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T267919274_H
#ifndef ASSEMBLYTRADEMARKATTRIBUTE_T2822933150_H
#define ASSEMBLYTRADEMARKATTRIBUTE_T2822933150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTrademarkAttribute
struct  AssemblyTrademarkAttribute_t2822933150  : public Attribute_t28087532
{
public:
	// System.String System.Reflection.AssemblyTrademarkAttribute::m_trademark
	String_t* ___m_trademark_0;

public:
	inline static int32_t get_offset_of_m_trademark_0() { return static_cast<int32_t>(offsetof(AssemblyTrademarkAttribute_t2822933150, ___m_trademark_0)); }
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
#endif // ASSEMBLYTRADEMARKATTRIBUTE_T2822933150_H
#ifndef STREAM_T3120643226_H
#define STREAM_T3120643226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t3120643226  : public MarshalByRefObject_t2071385042
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t1786581176 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2300956193 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t3120643226, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t1786581176 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t1786581176 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t1786581176 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t3120643226, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2300956193 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2300956193 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2300956193 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t3120643226_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t3120643226 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t3120643226_StaticFields, ___Null_1)); }
	inline Stream_t3120643226 * get_Null_1() const { return ___Null_1; }
	inline Stream_t3120643226 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t3120643226 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T3120643226_H
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
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2357349873_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2357349873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2357349873 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2357349873, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2357349873, ___value_1)); }
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
struct CustomAttributeTypedArgument_t2357349873_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2357349873_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2357349873_H
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
	AddEventAdapter_t4087444710 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t4087444710 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t4087444710 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t4087444710 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
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
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T3011953601_H
#define ASSEMBLYPRODUCTATTRIBUTE_T3011953601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t3011953601  : public Attribute_t28087532
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::m_product
	String_t* ___m_product_0;

public:
	inline static int32_t get_offset_of_m_product_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t3011953601, ___m_product_0)); }
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
#endif // ASSEMBLYPRODUCTATTRIBUTE_T3011953601_H
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
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T1090954443_H
#define ASSEMBLYCOMPANYATTRIBUTE_T1090954443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t1090954443  : public Attribute_t28087532
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::m_company
	String_t* ___m_company_0;

public:
	inline static int32_t get_offset_of_m_company_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t1090954443, ___m_company_0)); }
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
#endif // ASSEMBLYCOMPANYATTRIBUTE_T1090954443_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T2379871080_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T2379871080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t2379871080  : public Attribute_t28087532
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::m_copyright
	String_t* ___m_copyright_0;

public:
	inline static int32_t get_offset_of_m_copyright_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t2379871080, ___m_copyright_0)); }
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
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T2379871080_H
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
#ifndef METHODBASE_T2030835632_H
#define METHODBASE_T2030835632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t2030835632  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T2030835632_H
#ifndef CUSTOMCONSTANTATTRIBUTE_T2751834049_H
#define CUSTOMCONSTANTATTRIBUTE_T2751834049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CustomConstantAttribute
struct  CustomConstantAttribute_t2751834049  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCONSTANTATTRIBUTE_T2751834049_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T405332570_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T405332570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t405332570  : public Attribute_t28087532
{
public:
	// System.String System.Resources.SatelliteContractVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t405332570, ____version_0)); }
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
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T405332570_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T2103845694_H
#define INTERNALSVISIBLETOATTRIBUTE_T2103845694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t2103845694  : public Attribute_t28087532
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t2103845694, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_0), value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t2103845694, ____allInternalsVisible_1)); }
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
#endif // INTERNALSVISIBLETOATTRIBUTE_T2103845694_H
#ifndef FRIENDACCESSALLOWEDATTRIBUTE_T3512087113_H
#define FRIENDACCESSALLOWEDATTRIBUTE_T3512087113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FriendAccessAllowedAttribute
struct  FriendAccessAllowedAttribute_t3512087113  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDACCESSALLOWEDATTRIBUTE_T3512087113_H
#ifndef FIXEDBUFFERATTRIBUTE_T2037858472_H
#define FIXEDBUFFERATTRIBUTE_T2037858472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t2037858472  : public Attribute_t28087532
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t2037858472, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t2037858472, ___length_1)); }
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
#endif // FIXEDBUFFERATTRIBUTE_T2037858472_H
#ifndef EXTENSIONATTRIBUTE_T2093277488_H
#define EXTENSIONATTRIBUTE_T2093277488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t2093277488  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T2093277488_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T1314149815_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T1314149815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t1314149815  : public Attribute_t28087532
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t1314149815, ___m_wrapNonExceptionThrows_0)); }
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
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T1314149815_H
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
#ifndef TASKAWAITER_T1175979297_H
#define TASKAWAITER_T1175979297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t1175979297 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t2690497587 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t1175979297, ___m_task_0)); }
	inline Task_t2690497587 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t2690497587 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t2690497587 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t1175979297_marshaled_pinvoke
{
	Task_t2690497587 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t1175979297_marshaled_com
{
	Task_t2690497587 * ___m_task_0;
};
#endif // TASKAWAITER_T1175979297_H
#ifndef WIN32VERSIONRESOURCE_T3233489037_H
#define WIN32VERSIONRESOURCE_T3233489037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32VersionResource
struct  Win32VersionResource_t3233489037  : public Win32Resource_t3139241425
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32VERSIONRESOURCE_T3233489037_H
#ifndef RESOURCELOCATOR_T2565850291_H
#define RESOURCELOCATOR_T2565850291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceLocator
struct  ResourceLocator_t2565850291 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t2565850291, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t2565850291, ____dataPos_1)); }
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
struct ResourceLocator_t2565850291_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t2565850291_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
#endif // RESOURCELOCATOR_T2565850291_H
#ifndef CONFIGUREDTASKAWAITER_T1429468025_H
#define CONFIGUREDTASKAWAITER_T1429468025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t1429468025 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t2690497587 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t1429468025, ___m_task_0)); }
	inline Task_t2690497587 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t2690497587 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t2690497587 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t1429468025, ___m_continueOnCapturedContext_1)); }
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
struct ConfiguredTaskAwaiter_t1429468025_marshaled_pinvoke
{
	Task_t2690497587 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t1429468025_marshaled_com
{
	Task_t2690497587 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T1429468025_H
#ifndef TYPEDEPENDENCYATTRIBUTE_T4253339781_H
#define TYPEDEPENDENCYATTRIBUTE_T4253339781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeDependencyAttribute
struct  TypeDependencyAttribute_t4253339781  : public Attribute_t28087532
{
public:
	// System.String System.Runtime.CompilerServices.TypeDependencyAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeDependencyAttribute_t4253339781, ___typeName_0)); }
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
#endif // TYPEDEPENDENCYATTRIBUTE_T4253339781_H
#ifndef TYPEFORWARDEDFROMATTRIBUTE_T2335771072_H
#define TYPEFORWARDEDFROMATTRIBUTE_T2335771072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeForwardedFromAttribute
struct  TypeForwardedFromAttribute_t2335771072  : public Attribute_t28087532
{
public:
	// System.String System.Runtime.CompilerServices.TypeForwardedFromAttribute::assemblyFullName
	String_t* ___assemblyFullName_0;

public:
	inline static int32_t get_offset_of_assemblyFullName_0() { return static_cast<int32_t>(offsetof(TypeForwardedFromAttribute_t2335771072, ___assemblyFullName_0)); }
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
#endif // TYPEFORWARDEDFROMATTRIBUTE_T2335771072_H
#ifndef UNSAFEVALUETYPEATTRIBUTE_T3722796339_H
#define UNSAFEVALUETYPEATTRIBUTE_T3722796339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.UnsafeValueTypeAttribute
struct  UnsafeValueTypeAttribute_t3722796339  : public Attribute_t28087532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFEVALUETYPEATTRIBUTE_T3722796339_H
#ifndef RUNTIMERESOURCESET_T3194135266_H
#define RUNTIMERESOURCESET_T3194135266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t3194135266  : public ResourceSet_t541231514
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_resCache
	Dictionary_2_t1539973668 * ____resCache_4;
	// System.Resources.ResourceReader System.Resources.RuntimeResourceSet::_defaultReader
	ResourceReader_t2879437979 * ____defaultReader_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceLocator> System.Resources.RuntimeResourceSet::_caseInsensitiveTable
	Dictionary_2_t1539973668 * ____caseInsensitiveTable_6;
	// System.Boolean System.Resources.RuntimeResourceSet::_haveReadFromReader
	bool ____haveReadFromReader_7;

public:
	inline static int32_t get_offset_of__resCache_4() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t3194135266, ____resCache_4)); }
	inline Dictionary_2_t1539973668 * get__resCache_4() const { return ____resCache_4; }
	inline Dictionary_2_t1539973668 ** get_address_of__resCache_4() { return &____resCache_4; }
	inline void set__resCache_4(Dictionary_2_t1539973668 * value)
	{
		____resCache_4 = value;
		Il2CppCodeGenWriteBarrier((&____resCache_4), value);
	}

	inline static int32_t get_offset_of__defaultReader_5() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t3194135266, ____defaultReader_5)); }
	inline ResourceReader_t2879437979 * get__defaultReader_5() const { return ____defaultReader_5; }
	inline ResourceReader_t2879437979 ** get_address_of__defaultReader_5() { return &____defaultReader_5; }
	inline void set__defaultReader_5(ResourceReader_t2879437979 * value)
	{
		____defaultReader_5 = value;
		Il2CppCodeGenWriteBarrier((&____defaultReader_5), value);
	}

	inline static int32_t get_offset_of__caseInsensitiveTable_6() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t3194135266, ____caseInsensitiveTable_6)); }
	inline Dictionary_2_t1539973668 * get__caseInsensitiveTable_6() const { return ____caseInsensitiveTable_6; }
	inline Dictionary_2_t1539973668 ** get_address_of__caseInsensitiveTable_6() { return &____caseInsensitiveTable_6; }
	inline void set__caseInsensitiveTable_6(Dictionary_2_t1539973668 * value)
	{
		____caseInsensitiveTable_6 = value;
		Il2CppCodeGenWriteBarrier((&____caseInsensitiveTable_6), value);
	}

	inline static int32_t get_offset_of__haveReadFromReader_7() { return static_cast<int32_t>(offsetof(RuntimeResourceSet_t3194135266, ____haveReadFromReader_7)); }
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
#endif // RUNTIMERESOURCESET_T3194135266_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T3743612438_H
#define AMBIGUOUSMATCHEXCEPTION_T3743612438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t3743612438  : public SystemException_t1971328175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T3743612438_H
#ifndef METHODIMPLOPTIONS_T637840684_H
#define METHODIMPLOPTIONS_T637840684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplOptions
struct  MethodImplOptions_t637840684 
{
public:
	// System.Int32 System.Runtime.CompilerServices.MethodImplOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplOptions_t637840684, ___value___2)); }
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
#endif // METHODIMPLOPTIONS_T637840684_H
#ifndef ITERATORSTATEMACHINEATTRIBUTE_T4258992287_H
#define ITERATORSTATEMACHINEATTRIBUTE_T4258992287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IteratorStateMachineAttribute
struct  IteratorStateMachineAttribute_t4258992287  : public StateMachineAttribute_t3080808000
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITERATORSTATEMACHINEATTRIBUTE_T4258992287_H
#ifndef WIN32RESOURCETYPE_T918676274_H
#define WIN32RESOURCETYPE_T918676274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32ResourceType
struct  Win32ResourceType_t918676274 
{
public:
	// System.Int32 System.Resources.Win32ResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Win32ResourceType_t918676274, ___value___2)); }
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
#endif // WIN32RESOURCETYPE_T918676274_H
#ifndef REFLECTIONTYPELOADEXCEPTION_T3630204432_H
#define REFLECTIONTYPELOADEXCEPTION_T3630204432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t3630204432  : public SystemException_t1971328175
{
public:
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::loaderExceptions
	ExceptionU5BU5D_t766679520* ___loaderExceptions_16;
	// System.Type[] System.Reflection.ReflectionTypeLoadException::types
	TypeU5BU5D_t239669940* ___types_17;

public:
	inline static int32_t get_offset_of_loaderExceptions_16() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t3630204432, ___loaderExceptions_16)); }
	inline ExceptionU5BU5D_t766679520* get_loaderExceptions_16() const { return ___loaderExceptions_16; }
	inline ExceptionU5BU5D_t766679520** get_address_of_loaderExceptions_16() { return &___loaderExceptions_16; }
	inline void set_loaderExceptions_16(ExceptionU5BU5D_t766679520* value)
	{
		___loaderExceptions_16 = value;
		Il2CppCodeGenWriteBarrier((&___loaderExceptions_16), value);
	}

	inline static int32_t get_offset_of_types_17() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t3630204432, ___types_17)); }
	inline TypeU5BU5D_t239669940* get_types_17() const { return ___types_17; }
	inline TypeU5BU5D_t239669940** get_address_of_types_17() { return &___types_17; }
	inline void set_types_17(TypeU5BU5D_t239669940* value)
	{
		___types_17 = value;
		Il2CppCodeGenWriteBarrier((&___types_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONTYPELOADEXCEPTION_T3630204432_H
#ifndef CONFIGUREDTASKAWAITABLE_T3682844483_H
#define CONFIGUREDTASKAWAITABLE_T3682844483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct  ConfiguredTaskAwaitable_t3682844483 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t1429468025  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t3682844483, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t1429468025  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t1429468025 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t1429468025  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t3682844483_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t1429468025_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t3682844483_marshaled_com
{
	ConfiguredTaskAwaiter_t1429468025_marshaled_com ___m_configuredTaskAwaiter_0;
};
#endif // CONFIGUREDTASKAWAITABLE_T3682844483_H
#ifndef ASSEMBLYNAMEFLAGS_T2302011854_H
#define ASSEMBLYNAMEFLAGS_T2302011854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t2302011854 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t2302011854, ___value___2)); }
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
#endif // ASSEMBLYNAMEFLAGS_T2302011854_H
#ifndef PROCESSORARCHITECTURE_T2571093777_H
#define PROCESSORARCHITECTURE_T2571093777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t2571093777 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t2571093777, ___value___2)); }
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
#endif // PROCESSORARCHITECTURE_T2571093777_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T3342300640_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T3342300640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t3342300640 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t3342300640, ___value___2)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T3342300640_H
#ifndef FILEACCESS_T780349988_H
#define FILEACCESS_T780349988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t780349988 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t780349988, ___value___2)); }
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
#endif // FILEACCESS_T780349988_H
#ifndef DATETIMECONSTANTATTRIBUTE_T3599245037_H
#define DATETIMECONSTANTATTRIBUTE_T3599245037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct  DateTimeConstantAttribute_t3599245037  : public CustomConstantAttribute_t2751834049
{
public:
	// System.DateTime System.Runtime.CompilerServices.DateTimeConstantAttribute::date
	DateTime_t1480186961  ___date_0;

public:
	inline static int32_t get_offset_of_date_0() { return static_cast<int32_t>(offsetof(DateTimeConstantAttribute_t3599245037, ___date_0)); }
	inline DateTime_t1480186961  get_date_0() const { return ___date_0; }
	inline DateTime_t1480186961 * get_address_of_date_0() { return &___date_0; }
	inline void set_date_0(DateTime_t1480186961  value)
	{
		___date_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONSTANTATTRIBUTE_T3599245037_H
#ifndef DECIMALCONSTANTATTRIBUTE_T1771009781_H
#define DECIMALCONSTANTATTRIBUTE_T1771009781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t1771009781  : public Attribute_t28087532
{
public:
	// System.Decimal System.Runtime.CompilerServices.DecimalConstantAttribute::dec
	Decimal_t2198627819  ___dec_0;

public:
	inline static int32_t get_offset_of_dec_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1771009781, ___dec_0)); }
	inline Decimal_t2198627819  get_dec_0() const { return ___dec_0; }
	inline Decimal_t2198627819 * get_address_of_dec_0() { return &___dec_0; }
	inline void set_dec_0(Decimal_t2198627819  value)
	{
		___dec_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T1771009781_H
#ifndef PARAMETERATTRIBUTES_T1476764978_H
#define PARAMETERATTRIBUTES_T1476764978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1476764978 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1476764978, ___value___2)); }
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
#endif // PARAMETERATTRIBUTES_T1476764978_H
#ifndef PROPERTYATTRIBUTES_T1136128289_H
#define PROPERTYATTRIBUTES_T1136128289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t1136128289 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyAttributes_t1136128289, ___value___2)); }
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
#endif // PROPERTYATTRIBUTES_T1136128289_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t2030835632
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef CALLINGCONVENTIONS_T3506842885_H
#define CALLINGCONVENTIONS_T3506842885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t3506842885 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConventions_t3506842885, ___value___2)); }
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
#endif // CALLINGCONVENTIONS_T3506842885_H
#ifndef METHODIMPLATTRIBUTES_T1728413772_H
#define METHODIMPLATTRIBUTES_T1728413772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t1728413772 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t1728413772, ___value___2)); }
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
#endif // METHODIMPLATTRIBUTES_T1728413772_H
#ifndef METHODATTRIBUTES_T516576195_H
#define METHODATTRIBUTES_T516576195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t516576195 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodAttributes_t516576195, ___value___2)); }
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
#endif // METHODATTRIBUTES_T516576195_H
#ifndef FIELDATTRIBUTES_T3469913832_H
#define FIELDATTRIBUTES_T3469913832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t3469913832 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FieldAttributes_t3469913832, ___value___2)); }
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
#endif // FIELDATTRIBUTES_T3469913832_H
#ifndef RUNTIMEFIELDHANDLE_T2455196900_H
#define RUNTIMEFIELDHANDLE_T2455196900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2455196900 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2455196900, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T2455196900_H
#ifndef EVENTATTRIBUTES_T3109867807_H
#define EVENTATTRIBUTES_T3109867807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t3109867807 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventAttributes_t3109867807, ___value___2)); }
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
#endif // EVENTATTRIBUTES_T3109867807_H
#ifndef BINDINGFLAGS_T1569464964_H
#define BINDINGFLAGS_T1569464964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t1569464964 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t1569464964, ___value___2)); }
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
#endif // BINDINGFLAGS_T1569464964_H
#ifndef FORMATEXCEPTION_T2381809908_H
#define FORMATEXCEPTION_T2381809908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t2381809908  : public SystemException_t1971328175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T2381809908_H
#ifndef ASSEMBLYCONTENTTYPE_T3505993974_H
#define ASSEMBLYCONTENTTYPE_T3505993974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t3505993974 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t3505993974, ___value___2)); }
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
#endif // ASSEMBLYCONTENTTYPE_T3505993974_H
#ifndef ASSEMBLYHASHALGORITHM_T1687269099_H
#define ASSEMBLYHASHALGORITHM_T1687269099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1687269099 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1687269099, ___value___2)); }
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
#endif // ASSEMBLYHASHALGORITHM_T1687269099_H
#ifndef ULTIMATERESOURCEFALLBACKLOCATION_T492796175_H
#define ULTIMATERESOURCEFALLBACKLOCATION_T492796175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.UltimateResourceFallbackLocation
struct  UltimateResourceFallbackLocation_t492796175 
{
public:
	// System.Int32 System.Resources.UltimateResourceFallbackLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UltimateResourceFallbackLocation_t492796175, ___value___2)); }
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
#endif // ULTIMATERESOURCEFALLBACKLOCATION_T492796175_H
#ifndef PORTABLEEXECUTABLEKINDS_T3259784375_H
#define PORTABLEEXECUTABLEKINDS_T3259784375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PortableExecutableKinds
struct  PortableExecutableKinds_t3259784375 
{
public:
	// System.Int32 System.Reflection.PortableExecutableKinds::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PortableExecutableKinds_t3259784375, ___value___2)); }
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
#endif // PORTABLEEXECUTABLEKINDS_T3259784375_H
#ifndef RUNTIMEEVENTINFO_T2347051563_H
#define RUNTIMEEVENTINFO_T2347051563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeEventInfo
struct  RuntimeEventInfo_t2347051563  : public EventInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEEVENTINFO_T2347051563_H
#ifndef ASSEMBLY_T3901089011_H
#define ASSEMBLY_T3901089011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t3901089011  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2546935524 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t1804865947 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t2685089084 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t2685089084 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t2685089084 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t2685089084 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t2685089084 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2546935524 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2546935524 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2546935524 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ____evidence_2)); }
	inline Evidence_t1804865947 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t1804865947 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t1804865947 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ____minimum_3)); }
	inline PermissionSet_t2685089084 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t2685089084 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t2685089084 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ____optional_4)); }
	inline PermissionSet_t2685089084 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t2685089084 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t2685089084 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ____refuse_5)); }
	inline PermissionSet_t2685089084 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t2685089084 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t2685089084 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ____granted_6)); }
	inline PermissionSet_t2685089084 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t2685089084 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t2685089084 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ____denied_7)); }
	inline PermissionSet_t2685089084 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t2685089084 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t2685089084 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t3901089011, ___assemblyName_9)); }
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
struct Assembly_t3901089011_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2546935524 * ___resolve_event_holder_1;
	Evidence_t1804865947 * ____evidence_2;
	PermissionSet_t2685089084 * ____minimum_3;
	PermissionSet_t2685089084 * ____optional_4;
	PermissionSet_t2685089084 * ____refuse_5;
	PermissionSet_t2685089084 * ____granted_6;
	PermissionSet_t2685089084 * ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t3901089011_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2546935524 * ___resolve_event_holder_1;
	Evidence_t1804865947 * ____evidence_2;
	PermissionSet_t2685089084 * ____minimum_3;
	PermissionSet_t2685089084 * ____optional_4;
	PermissionSet_t2685089084 * ____refuse_5;
	PermissionSet_t2685089084 * ____granted_6;
	PermissionSet_t2685089084 * ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};
#endif // ASSEMBLY_T3901089011_H
#ifndef RUNTIMEPROPERTYINFO_T457563466_H
#define RUNTIMEPROPERTYINFO_T457563466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimePropertyInfo
struct  RuntimePropertyInfo_t457563466  : public PropertyInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPROPERTYINFO_T457563466_H
#ifndef PINFO_T2185376891_H
#define PINFO_T2185376891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t2185376891 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PInfo_t2185376891, ___value___2)); }
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
#endif // PINFO_T2185376891_H
#ifndef RUNTIMEFIELDINFO_T2725676345_H
#define RUNTIMEFIELDINFO_T2725676345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeFieldInfo
struct  RuntimeFieldInfo_t2725676345  : public FieldInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDINFO_T2725676345_H
#ifndef CONSTRUCTORINFO_T4042935252_H
#define CONSTRUCTORINFO_T4042935252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t4042935252  : public MethodBase_t2030835632
{
public:

public:
};

struct ConstructorInfo_t4042935252_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t4042935252_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t4042935252_StaticFields, ___TypeConstructorName_1)); }
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
#endif // CONSTRUCTORINFO_T4042935252_H
#ifndef RESOURCETYPECODE_T3778855353_H
#define RESOURCETYPECODE_T3778855353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceTypeCode
struct  ResourceTypeCode_t3778855353 
{
public:
	// System.Int32 System.Resources.ResourceTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResourceTypeCode_t3778855353, ___value___2)); }
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
#endif // RESOURCETYPECODE_T3778855353_H
#ifndef LAZYCATTRDATA_T1936330710_H
#define LAZYCATTRDATA_T1936330710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData/LazyCAttrData
struct  LazyCAttrData_t1936330710  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Reflection.CustomAttributeData/LazyCAttrData::assembly
	Assembly_t3901089011 * ___assembly_0;
	// System.IntPtr System.Reflection.CustomAttributeData/LazyCAttrData::data
	intptr_t ___data_1;
	// System.UInt32 System.Reflection.CustomAttributeData/LazyCAttrData::data_length
	uint32_t ___data_length_2;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(LazyCAttrData_t1936330710, ___assembly_0)); }
	inline Assembly_t3901089011 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t3901089011 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t3901089011 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(LazyCAttrData_t1936330710, ___data_1)); }
	inline intptr_t get_data_1() const { return ___data_1; }
	inline intptr_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(intptr_t value)
	{
		___data_1 = value;
	}

	inline static int32_t get_offset_of_data_length_2() { return static_cast<int32_t>(offsetof(LazyCAttrData_t1936330710, ___data_length_2)); }
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
#endif // LAZYCATTRDATA_T1936330710_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T1689863171_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T1689863171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t1689863171 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2357349873  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t1689863171, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2357349873  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2357349873 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2357349873  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t1689863171, ___memberInfo_1)); }
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
struct CustomAttributeNamedArgument_t1689863171_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2357349873_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t1689863171_marshaled_com
{
	CustomAttributeTypedArgument_t2357349873_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T1689863171_H
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
#ifndef IMAGEFILEMACHINE_T1419919500_H
#define IMAGEFILEMACHINE_T1419919500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ImageFileMachine
struct  ImageFileMachine_t1419919500 
{
public:
	// System.Int32 System.Reflection.ImageFileMachine::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageFileMachine_t1419919500, ___value___2)); }
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
#endif // IMAGEFILEMACHINE_T1419919500_H
#ifndef MISSINGMANIFESTRESOURCEEXCEPTION_T820391106_H
#define MISSINGMANIFESTRESOURCEEXCEPTION_T820391106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.MissingManifestResourceException
struct  MissingManifestResourceException_t820391106  : public SystemException_t1971328175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMANIFESTRESOURCEEXCEPTION_T820391106_H
#ifndef RESOLVETOKENERROR_T4084989594_H
#define RESOLVETOKENERROR_T4084989594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResolveTokenError
struct  ResolveTokenError_t4084989594 
{
public:
	// System.Int32 System.Reflection.ResolveTokenError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResolveTokenError_t4084989594, ___value___2)); }
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
#endif // RESOLVETOKENERROR_T4084989594_H
#ifndef RUNTIMEASSEMBLY_T1315804773_H
#define RUNTIMEASSEMBLY_T1315804773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeAssembly
struct  RuntimeAssembly_t1315804773  : public Assembly_t3901089011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEASSEMBLY_T1315804773_H
#ifndef MODULE_T1203274219_H
#define MODULE_T1203274219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t1203274219  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t3901089011 * ___assembly_3;
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
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_t1203274219, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_t1203274219, ___assembly_3)); }
	inline Assembly_t3901089011 * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t3901089011 ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t3901089011 * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_3), value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_t1203274219, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_4), value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_t1203274219, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_t1203274219, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_6), value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_t1203274219, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_t1203274219, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_t1203274219_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t356011281 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t356011281 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_t1203274219_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t356011281 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t356011281 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t356011281 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_0), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_t1203274219_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t356011281 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t356011281 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t356011281 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_t1203274219_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t3901089011_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_t1203274219_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t3901089011_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
#endif // MODULE_T1203274219_H
#ifndef RESOURCEMANAGER_T2588638809_H
#define RESOURCEMANAGER_T2588638809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t2588638809  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t3971943106 * ___ResourceSets_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_t3810322187 * ____resourceSets_1;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t3901089011 * ___MainAssembly_2;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t197737613 * ____neutralResourcesCulture_3;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t2908542402 * ____lastUsedResourceCache_4;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_5;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_6;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_7;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t3901089011 * ____callingAssembly_8;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_t1315804773 * ___m_callingAssembly_9;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_10;

public:
	inline static int32_t get_offset_of_ResourceSets_0() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ___ResourceSets_0)); }
	inline Hashtable_t3971943106 * get_ResourceSets_0() const { return ___ResourceSets_0; }
	inline Hashtable_t3971943106 ** get_address_of_ResourceSets_0() { return &___ResourceSets_0; }
	inline void set_ResourceSets_0(Hashtable_t3971943106 * value)
	{
		___ResourceSets_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceSets_0), value);
	}

	inline static int32_t get_offset_of__resourceSets_1() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ____resourceSets_1)); }
	inline Dictionary_2_t3810322187 * get__resourceSets_1() const { return ____resourceSets_1; }
	inline Dictionary_2_t3810322187 ** get_address_of__resourceSets_1() { return &____resourceSets_1; }
	inline void set__resourceSets_1(Dictionary_2_t3810322187 * value)
	{
		____resourceSets_1 = value;
		Il2CppCodeGenWriteBarrier((&____resourceSets_1), value);
	}

	inline static int32_t get_offset_of_MainAssembly_2() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ___MainAssembly_2)); }
	inline Assembly_t3901089011 * get_MainAssembly_2() const { return ___MainAssembly_2; }
	inline Assembly_t3901089011 ** get_address_of_MainAssembly_2() { return &___MainAssembly_2; }
	inline void set_MainAssembly_2(Assembly_t3901089011 * value)
	{
		___MainAssembly_2 = value;
		Il2CppCodeGenWriteBarrier((&___MainAssembly_2), value);
	}

	inline static int32_t get_offset_of__neutralResourcesCulture_3() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ____neutralResourcesCulture_3)); }
	inline CultureInfo_t197737613 * get__neutralResourcesCulture_3() const { return ____neutralResourcesCulture_3; }
	inline CultureInfo_t197737613 ** get_address_of__neutralResourcesCulture_3() { return &____neutralResourcesCulture_3; }
	inline void set__neutralResourcesCulture_3(CultureInfo_t197737613 * value)
	{
		____neutralResourcesCulture_3 = value;
		Il2CppCodeGenWriteBarrier((&____neutralResourcesCulture_3), value);
	}

	inline static int32_t get_offset_of__lastUsedResourceCache_4() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ____lastUsedResourceCache_4)); }
	inline CultureNameResourceSetPair_t2908542402 * get__lastUsedResourceCache_4() const { return ____lastUsedResourceCache_4; }
	inline CultureNameResourceSetPair_t2908542402 ** get_address_of__lastUsedResourceCache_4() { return &____lastUsedResourceCache_4; }
	inline void set__lastUsedResourceCache_4(CultureNameResourceSetPair_t2908542402 * value)
	{
		____lastUsedResourceCache_4 = value;
		Il2CppCodeGenWriteBarrier((&____lastUsedResourceCache_4), value);
	}

	inline static int32_t get_offset_of_UseManifest_5() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ___UseManifest_5)); }
	inline bool get_UseManifest_5() const { return ___UseManifest_5; }
	inline bool* get_address_of_UseManifest_5() { return &___UseManifest_5; }
	inline void set_UseManifest_5(bool value)
	{
		___UseManifest_5 = value;
	}

	inline static int32_t get_offset_of_UseSatelliteAssem_6() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ___UseSatelliteAssem_6)); }
	inline bool get_UseSatelliteAssem_6() const { return ___UseSatelliteAssem_6; }
	inline bool* get_address_of_UseSatelliteAssem_6() { return &___UseSatelliteAssem_6; }
	inline void set_UseSatelliteAssem_6(bool value)
	{
		___UseSatelliteAssem_6 = value;
	}

	inline static int32_t get_offset_of__fallbackLoc_7() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ____fallbackLoc_7)); }
	inline int32_t get__fallbackLoc_7() const { return ____fallbackLoc_7; }
	inline int32_t* get_address_of__fallbackLoc_7() { return &____fallbackLoc_7; }
	inline void set__fallbackLoc_7(int32_t value)
	{
		____fallbackLoc_7 = value;
	}

	inline static int32_t get_offset_of__callingAssembly_8() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ____callingAssembly_8)); }
	inline Assembly_t3901089011 * get__callingAssembly_8() const { return ____callingAssembly_8; }
	inline Assembly_t3901089011 ** get_address_of__callingAssembly_8() { return &____callingAssembly_8; }
	inline void set__callingAssembly_8(Assembly_t3901089011 * value)
	{
		____callingAssembly_8 = value;
		Il2CppCodeGenWriteBarrier((&____callingAssembly_8), value);
	}

	inline static int32_t get_offset_of_m_callingAssembly_9() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ___m_callingAssembly_9)); }
	inline RuntimeAssembly_t1315804773 * get_m_callingAssembly_9() const { return ___m_callingAssembly_9; }
	inline RuntimeAssembly_t1315804773 ** get_address_of_m_callingAssembly_9() { return &___m_callingAssembly_9; }
	inline void set_m_callingAssembly_9(RuntimeAssembly_t1315804773 * value)
	{
		___m_callingAssembly_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_callingAssembly_9), value);
	}

	inline static int32_t get_offset_of_resourceGroveler_10() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809, ___resourceGroveler_10)); }
	inline RuntimeObject* get_resourceGroveler_10() const { return ___resourceGroveler_10; }
	inline RuntimeObject** get_address_of_resourceGroveler_10() { return &___resourceGroveler_10; }
	inline void set_resourceGroveler_10(RuntimeObject* value)
	{
		___resourceGroveler_10 = value;
		Il2CppCodeGenWriteBarrier((&___resourceGroveler_10), value);
	}
};

struct ResourceManager_t2588638809_StaticFields
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
	inline static int32_t get_offset_of_MagicNumber_11() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809_StaticFields, ___MagicNumber_11)); }
	inline int32_t get_MagicNumber_11() const { return ___MagicNumber_11; }
	inline int32_t* get_address_of_MagicNumber_11() { return &___MagicNumber_11; }
	inline void set_MagicNumber_11(int32_t value)
	{
		___MagicNumber_11 = value;
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_12() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809_StaticFields, ___HeaderVersionNumber_12)); }
	inline int32_t get_HeaderVersionNumber_12() const { return ___HeaderVersionNumber_12; }
	inline int32_t* get_address_of_HeaderVersionNumber_12() { return &___HeaderVersionNumber_12; }
	inline void set_HeaderVersionNumber_12(int32_t value)
	{
		___HeaderVersionNumber_12 = value;
	}

	inline static int32_t get_offset_of__minResourceSet_13() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809_StaticFields, ____minResourceSet_13)); }
	inline Type_t * get__minResourceSet_13() const { return ____minResourceSet_13; }
	inline Type_t ** get_address_of__minResourceSet_13() { return &____minResourceSet_13; }
	inline void set__minResourceSet_13(Type_t * value)
	{
		____minResourceSet_13 = value;
		Il2CppCodeGenWriteBarrier((&____minResourceSet_13), value);
	}

	inline static int32_t get_offset_of_ResReaderTypeName_14() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809_StaticFields, ___ResReaderTypeName_14)); }
	inline String_t* get_ResReaderTypeName_14() const { return ___ResReaderTypeName_14; }
	inline String_t** get_address_of_ResReaderTypeName_14() { return &___ResReaderTypeName_14; }
	inline void set_ResReaderTypeName_14(String_t* value)
	{
		___ResReaderTypeName_14 = value;
		Il2CppCodeGenWriteBarrier((&___ResReaderTypeName_14), value);
	}

	inline static int32_t get_offset_of_ResSetTypeName_15() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809_StaticFields, ___ResSetTypeName_15)); }
	inline String_t* get_ResSetTypeName_15() const { return ___ResSetTypeName_15; }
	inline String_t** get_address_of_ResSetTypeName_15() { return &___ResSetTypeName_15; }
	inline void set_ResSetTypeName_15(String_t* value)
	{
		___ResSetTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&___ResSetTypeName_15), value);
	}

	inline static int32_t get_offset_of_MscorlibName_16() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809_StaticFields, ___MscorlibName_16)); }
	inline String_t* get_MscorlibName_16() const { return ___MscorlibName_16; }
	inline String_t** get_address_of_MscorlibName_16() { return &___MscorlibName_16; }
	inline void set_MscorlibName_16(String_t* value)
	{
		___MscorlibName_16 = value;
		Il2CppCodeGenWriteBarrier((&___MscorlibName_16), value);
	}

	inline static int32_t get_offset_of_DEBUG_17() { return static_cast<int32_t>(offsetof(ResourceManager_t2588638809_StaticFields, ___DEBUG_17)); }
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
#endif // RESOURCEMANAGER_T2588638809_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T878533577_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T878533577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t878533577  : public Attribute_t28087532
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::_culture
	String_t* ____culture_0;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.NeutralResourcesLanguageAttribute::_fallbackLoc
	int32_t ____fallbackLoc_1;

public:
	inline static int32_t get_offset_of__culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t878533577, ____culture_0)); }
	inline String_t* get__culture_0() const { return ____culture_0; }
	inline String_t** get_address_of__culture_0() { return &____culture_0; }
	inline void set__culture_0(String_t* value)
	{
		____culture_0 = value;
		Il2CppCodeGenWriteBarrier((&____culture_0), value);
	}

	inline static int32_t get_offset_of__fallbackLoc_1() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t878533577, ____fallbackLoc_1)); }
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
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T878533577_H
#ifndef CUSTOMATTRIBUTEFORMATEXCEPTION_T3931502090_H
#define CUSTOMATTRIBUTEFORMATEXCEPTION_T3931502090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeFormatException
struct  CustomAttributeFormatException_t3931502090  : public FormatException_t2381809908
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEFORMATEXCEPTION_T3931502090_H
#ifndef ASSEMBLYNAME_T1956517508_H
#define ASSEMBLYNAME_T1956517508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t1956517508  : public RuntimeObject
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
	CultureInfo_t197737613 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t4133742925 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t3632859112* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t3632859112* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t1375298617 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___cultureinfo_6)); }
	inline CultureInfo_t197737613 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t197737613 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t197737613 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___keypair_9)); }
	inline StrongNameKeyPair_t4133742925 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t4133742925 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t4133742925 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___publicKey_10)); }
	inline ByteU5BU5D_t3632859112* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t3632859112** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t3632859112* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___keyToken_11)); }
	inline ByteU5BU5D_t3632859112* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t3632859112** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t3632859112* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___version_13)); }
	inline Version_t1375298617 * get_version_13() const { return ___version_13; }
	inline Version_t1375298617 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t1375298617 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t1956517508, ___contentType_15)); }
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
struct AssemblyName_t1956517508_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t197737613_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t4133742925 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t1375298617 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t1956517508_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t197737613_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t4133742925 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t1375298617 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
#endif // ASSEMBLYNAME_T1956517508_H
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
#ifndef MONOEVENTINFO_T3003613183_H
#define MONOEVENTINFO_T3003613183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t3003613183 
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
	MethodInfoU5BU5D_t2074339038* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3003613183, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3003613183, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3003613183, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3003613183, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3003613183, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3003613183, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3003613183, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t3003613183, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t2074339038* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t2074339038** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t2074339038* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t3003613183_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2074339038* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t3003613183_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2074339038* ___other_methods_7;
};
#endif // MONOEVENTINFO_T3003613183_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public RuntimeEventInfo_t2347051563
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
#ifndef RUNTIMECONSTRUCTORINFO_T4222138294_H
#define RUNTIMECONSTRUCTORINFO_T4222138294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeConstructorInfo
struct  RuntimeConstructorInfo_t4222138294  : public ConstructorInfo_t4042935252
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECONSTRUCTORINFO_T4222138294_H
#ifndef UNMANAGEDMEMORYSTREAM_T3767509405_H
#define UNMANAGEDMEMORYSTREAM_T3767509405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnmanagedMemoryStream
struct  UnmanagedMemoryStream_t3767509405  : public Stream_t3120643226
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_t1683731080 * ____buffer_4;
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
	Task_1_t3549662980 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____buffer_4)); }
	inline SafeBuffer_t1683731080 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_t1683731080 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_t1683731080 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_t3767509405, ____lastReadTask_12)); }
	inline Task_1_t3549662980 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_t3549662980 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_t3549662980 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORYSTREAM_T3767509405_H
#ifndef RTFIELDINFO_T1674832205_H
#define RTFIELDINFO_T1674832205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RtFieldInfo
struct  RtFieldInfo_t1674832205  : public RuntimeFieldInfo_t2725676345
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RTFIELDINFO_T1674832205_H
#ifndef MONOMETHODINFO_T693572692_H
#define MONOMETHODINFO_T693572692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t693572692 
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
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t693572692, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t693572692, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t693572692, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t693572692, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t693572692, ___callconv_4)); }
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
struct MonoMethodInfo_t693572692_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t693572692_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T693572692_H
#ifndef RUNTIMEMETHODINFO_T2836545852_H
#define RUNTIMEMETHODINFO_T2836545852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeMethodInfo
struct  RuntimeMethodInfo_t2836545852  : public MethodInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODINFO_T2836545852_H
#ifndef METHODIMPLATTRIBUTE_T2296365295_H
#define METHODIMPLATTRIBUTE_T2296365295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplAttribute
struct  MethodImplAttribute_t2296365295  : public Attribute_t28087532
{
public:
	// System.Runtime.CompilerServices.MethodImplOptions System.Runtime.CompilerServices.MethodImplAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(MethodImplAttribute_t2296365295, ____val_0)); }
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
#endif // METHODIMPLATTRIBUTE_T2296365295_H
#ifndef MONOPROPERTYINFO_T4209295771_H
#define MONOPROPERTYINFO_T4209295771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t4209295771 
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
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4209295771, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_declaring_type_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4209295771, ___declaring_type_1)); }
	inline Type_t * get_declaring_type_1() const { return ___declaring_type_1; }
	inline Type_t ** get_address_of_declaring_type_1() { return &___declaring_type_1; }
	inline void set_declaring_type_1(Type_t * value)
	{
		___declaring_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4209295771, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_get_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4209295771, ___get_method_3)); }
	inline MethodInfo_t * get_get_method_3() const { return ___get_method_3; }
	inline MethodInfo_t ** get_address_of_get_method_3() { return &___get_method_3; }
	inline void set_get_method_3(MethodInfo_t * value)
	{
		___get_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_3), value);
	}

	inline static int32_t get_offset_of_set_method_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4209295771, ___set_method_4)); }
	inline MethodInfo_t * get_set_method_4() const { return ___set_method_4; }
	inline MethodInfo_t ** get_address_of_set_method_4() { return &___set_method_4; }
	inline void set_set_method_4(MethodInfo_t * value)
	{
		___set_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_4), value);
	}

	inline static int32_t get_offset_of_attrs_5() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t4209295771, ___attrs_5)); }
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
struct MonoPropertyInfo_t4209295771_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t4209295771_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
#endif // MONOPROPERTYINFO_T4209295771_H
#ifndef PARAMETERINFO_T3986909063_H
#define PARAMETERINFO_T3986909063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t3986909063  : public RuntimeObject
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
	MarshalAsAttribute_t3001414182 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t3986909063, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t3986909063, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t3986909063, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t3986909063, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t3986909063, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t3986909063, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t3986909063, ___marshalAs_6)); }
	inline MarshalAsAttribute_t3001414182 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t3001414182 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t3001414182 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t3986909063_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t3001414182 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t3986909063_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t3001414182 * ___marshalAs_6;
};
#endif // PARAMETERINFO_T3986909063_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public RuntimePropertyInfo_t457563466
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t4209295771  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t3667645738 * ___cached_getter_4;

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
	inline MonoPropertyInfo_t4209295771  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t4209295771 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t4209295771  value)
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
	inline GetterAdapter_t3667645738 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t3667645738 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t3667645738 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef UNMANAGEDMEMORYSTREAMFORMODULE_T2173839098_H
#define UNMANAGEDMEMORYSTREAMFORMODULE_T2173839098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct  UnmanagedMemoryStreamForModule_t2173839098  : public UnmanagedMemoryStream_t3767509405
{
public:
	// System.Reflection.Module System.Reflection.Assembly/UnmanagedMemoryStreamForModule::module
	Module_t1203274219 * ___module_13;

public:
	inline static int32_t get_offset_of_module_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStreamForModule_t2173839098, ___module_13)); }
	inline Module_t1203274219 * get_module_13() const { return ___module_13; }
	inline Module_t1203274219 ** get_address_of_module_13() { return &___module_13; }
	inline void set_module_13(Module_t1203274219 * value)
	{
		___module_13 = value;
		Il2CppCodeGenWriteBarrier((&___module_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMEMORYSTREAMFORMODULE_T2173839098_H
#ifndef RUNTIMEPARAMETERINFO_T1782344673_H
#define RUNTIMEPARAMETERINFO_T1782344673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeParameterInfo
struct  RuntimeParameterInfo_t1782344673  : public ParameterInfo_t3986909063
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPARAMETERINFO_T1782344673_H
#ifndef MONOASSEMBLY_T4108224758_H
#define MONOASSEMBLY_T4108224758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoAssembly
struct  MonoAssembly_t4108224758  : public RuntimeAssembly_t1315804773
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASSEMBLY_T4108224758_H
#ifndef MONOCMETHOD_T3034563001_H
#define MONOCMETHOD_T3034563001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t3034563001  : public RuntimeConstructorInfo_t4222138294
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	intptr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t3034563001, ___mhandle_2)); }
	inline intptr_t get_mhandle_2() const { return ___mhandle_2; }
	inline intptr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(intptr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t3034563001, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t3034563001, ___reftype_4)); }
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
#endif // MONOCMETHOD_T3034563001_H
#ifndef ADDEVENTADAPTER_T4087444710_H
#define ADDEVENTADAPTER_T4087444710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t4087444710  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T4087444710_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public RuntimeMethodInfo_t2836545852
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
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public RtFieldInfo_t1674832205
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	intptr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t2455196900  ___fhandle_1;
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
	inline RuntimeFieldHandle_t2455196900  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t2455196900 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t2455196900  value)
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
#ifndef RUNTIMEMODULE_T3474299474_H
#define RUNTIMEMODULE_T3474299474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeModule
struct  RuntimeModule_t3474299474  : public Module_t1203274219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMODULE_T3474299474_H
#ifndef GETTERADAPTER_T3667645738_H
#define GETTERADAPTER_T3667645738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t3667645738  : public MulticastDelegate_t2311580730
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T3667645738_H
#ifndef MONOMODULE_T1380922445_H
#define MONOMODULE_T1380922445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoModule
struct  MonoModule_t1380922445  : public RuntimeModule_t3474299474
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMODULE_T1380922445_H
#ifndef MONOPARAMETERINFO_T3710157746_H
#define MONOPARAMETERINFO_T3710157746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoParameterInfo
struct  MonoParameterInfo_t3710157746  : public RuntimeParameterInfo_t1782344673
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPARAMETERINFO_T3710157746_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (CustomConstantAttribute_t2751834049), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { sizeof (DateTimeConstantAttribute_t3599245037), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1101[1] = 
{
	DateTimeConstantAttribute_t3599245037::get_offset_of_date_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { sizeof (DecimalConstantAttribute_t1771009781), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1102[1] = 
{
	DecimalConstantAttribute_t1771009781::get_offset_of_dec_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { sizeof (ExtensionAttribute_t2093277488), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { sizeof (FixedBufferAttribute_t2037858472), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1104[2] = 
{
	FixedBufferAttribute_t2037858472::get_offset_of_elementType_0(),
	FixedBufferAttribute_t2037858472::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (InternalsVisibleToAttribute_t2103845694), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1108[2] = 
{
	InternalsVisibleToAttribute_t2103845694::get_offset_of__assemblyName_0(),
	InternalsVisibleToAttribute_t2103845694::get_offset_of__allInternalsVisible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (FriendAccessAllowedAttribute_t3512087113), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (IsVolatile_t267919274), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (IteratorStateMachineAttribute_t4258992287), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (MethodImplOptions_t637840684)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1112[9] = 
{
	MethodImplOptions_t637840684::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (MethodImplAttribute_t2296365295), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1113[1] = 
{
	MethodImplAttribute_t2296365295::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (RuntimeCompatibilityAttribute_t1314149815), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1114[1] = 
{
	RuntimeCompatibilityAttribute_t1314149815::get_offset_of_m_wrapNonExceptionThrows_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (StateMachineAttribute_t3080808000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1115[1] = 
{
	StateMachineAttribute_t3080808000::get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (TaskAwaiter_t1175979297)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[1] = 
{
	TaskAwaiter_t1175979297::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (ConfiguredTaskAwaitable_t3682844483)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[1] = 
{
	ConfiguredTaskAwaitable_t3682844483::get_offset_of_m_configuredTaskAwaiter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (ConfiguredTaskAwaiter_t1429468025)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1119[2] = 
{
	ConfiguredTaskAwaiter_t1429468025::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConfiguredTaskAwaiter_t1429468025::get_offset_of_m_continueOnCapturedContext_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1120[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (TypeDependencyAttribute_t4253339781), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[1] = 
{
	TypeDependencyAttribute_t4253339781::get_offset_of_typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { sizeof (TypeForwardedFromAttribute_t2335771072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1123[1] = 
{
	TypeForwardedFromAttribute_t2335771072::get_offset_of_assemblyFullName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { sizeof (UnsafeValueTypeAttribute_t3722796339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { sizeof (Win32ResourceType_t918676274)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1126[21] = 
{
	Win32ResourceType_t918676274::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { sizeof (NameOrId_t3866172727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1127[2] = 
{
	NameOrId_t3866172727::get_offset_of_name_0(),
	NameOrId_t3866172727::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (Win32Resource_t3139241425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1128[2] = 
{
	Win32Resource_t3139241425::get_offset_of_type_0(),
	Win32Resource_t3139241425::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (Win32VersionResource_t3233489037), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (FastResourceComparer_t3599416720), -1, sizeof(FastResourceComparer_t3599416720_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1130[1] = 
{
	FastResourceComparer_t3599416720_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (FileBasedResourceGroveler_t1776187837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[1] = 
{
	FileBasedResourceGroveler_t1776187837::get_offset_of__mediator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (ManifestBasedResourceGroveler_t2752648457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1134[1] = 
{
	ManifestBasedResourceGroveler_t2752648457::get_offset_of__mediator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (MissingManifestResourceException_t820391106), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (NeutralResourcesLanguageAttribute_t878533577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1136[2] = 
{
	NeutralResourcesLanguageAttribute_t878533577::get_offset_of__culture_0(),
	NeutralResourcesLanguageAttribute_t878533577::get_offset_of__fallbackLoc_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (ResourceManager_t2588638809), -1, sizeof(ResourceManager_t2588638809_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1137[18] = 
{
	ResourceManager_t2588638809::get_offset_of_ResourceSets_0(),
	ResourceManager_t2588638809::get_offset_of__resourceSets_1(),
	ResourceManager_t2588638809::get_offset_of_MainAssembly_2(),
	ResourceManager_t2588638809::get_offset_of__neutralResourcesCulture_3(),
	ResourceManager_t2588638809::get_offset_of__lastUsedResourceCache_4(),
	ResourceManager_t2588638809::get_offset_of_UseManifest_5(),
	ResourceManager_t2588638809::get_offset_of_UseSatelliteAssem_6(),
	ResourceManager_t2588638809::get_offset_of__fallbackLoc_7(),
	ResourceManager_t2588638809::get_offset_of__callingAssembly_8(),
	ResourceManager_t2588638809::get_offset_of_m_callingAssembly_9(),
	ResourceManager_t2588638809::get_offset_of_resourceGroveler_10(),
	ResourceManager_t2588638809_StaticFields::get_offset_of_MagicNumber_11(),
	ResourceManager_t2588638809_StaticFields::get_offset_of_HeaderVersionNumber_12(),
	ResourceManager_t2588638809_StaticFields::get_offset_of__minResourceSet_13(),
	ResourceManager_t2588638809_StaticFields::get_offset_of_ResReaderTypeName_14(),
	ResourceManager_t2588638809_StaticFields::get_offset_of_ResSetTypeName_15(),
	ResourceManager_t2588638809_StaticFields::get_offset_of_MscorlibName_16(),
	ResourceManager_t2588638809_StaticFields::get_offset_of_DEBUG_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (CultureNameResourceSetPair_t2908542402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (ResourceManagerMediator_t911734866), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1139[1] = 
{
	ResourceManagerMediator_t911734866::get_offset_of__rm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (ResourceLocator_t2565850291)+ sizeof (RuntimeObject), sizeof(ResourceLocator_t2565850291_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1140[2] = 
{
	ResourceLocator_t2565850291::get_offset_of__value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceLocator_t2565850291::get_offset_of__dataPos_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (ResourceReader_t2879437979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1141[14] = 
{
	ResourceReader_t2879437979::get_offset_of__store_0(),
	ResourceReader_t2879437979::get_offset_of__resCache_1(),
	ResourceReader_t2879437979::get_offset_of__nameSectionOffset_2(),
	ResourceReader_t2879437979::get_offset_of__dataSectionOffset_3(),
	ResourceReader_t2879437979::get_offset_of__nameHashes_4(),
	ResourceReader_t2879437979::get_offset_of__nameHashesPtr_5(),
	ResourceReader_t2879437979::get_offset_of__namePositions_6(),
	ResourceReader_t2879437979::get_offset_of__namePositionsPtr_7(),
	ResourceReader_t2879437979::get_offset_of__typeTable_8(),
	ResourceReader_t2879437979::get_offset_of__typeNamePositions_9(),
	ResourceReader_t2879437979::get_offset_of__objFormatter_10(),
	ResourceReader_t2879437979::get_offset_of__numResources_11(),
	ResourceReader_t2879437979::get_offset_of__ums_12(),
	ResourceReader_t2879437979::get_offset_of__version_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (ResourceEnumerator_t1920415873), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1142[4] = 
{
	ResourceEnumerator_t1920415873::get_offset_of__reader_0(),
	ResourceEnumerator_t1920415873::get_offset_of__currentIsValid_1(),
	ResourceEnumerator_t1920415873::get_offset_of__currentName_2(),
	ResourceEnumerator_t1920415873::get_offset_of__dataPosition_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (ResourceSet_t541231514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1143[3] = 
{
	ResourceSet_t541231514::get_offset_of_Reader_0(),
	ResourceSet_t541231514::get_offset_of_Table_1(),
	ResourceSet_t541231514::get_offset_of__caseInsensitiveTable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (ResourceTypeCode_t3778855353)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1144[22] = 
{
	ResourceTypeCode_t3778855353::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (RuntimeResourceSet_t3194135266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1145[5] = 
{
	0,
	RuntimeResourceSet_t3194135266::get_offset_of__resCache_4(),
	RuntimeResourceSet_t3194135266::get_offset_of__defaultReader_5(),
	RuntimeResourceSet_t3194135266::get_offset_of__caseInsensitiveTable_6(),
	RuntimeResourceSet_t3194135266::get_offset_of__haveReadFromReader_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (SatelliteContractVersionAttribute_t405332570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1146[1] = 
{
	SatelliteContractVersionAttribute_t405332570::get_offset_of__version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (UltimateResourceFallbackLocation_t492796175)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1147[3] = 
{
	UltimateResourceFallbackLocation_t492796175::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (Assembly_t3901089011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1148[10] = 
{
	Assembly_t3901089011::get_offset_of__mono_assembly_0(),
	Assembly_t3901089011::get_offset_of_resolve_event_holder_1(),
	Assembly_t3901089011::get_offset_of__evidence_2(),
	Assembly_t3901089011::get_offset_of__minimum_3(),
	Assembly_t3901089011::get_offset_of__optional_4(),
	Assembly_t3901089011::get_offset_of__refuse_5(),
	Assembly_t3901089011::get_offset_of__granted_6(),
	Assembly_t3901089011::get_offset_of__denied_7(),
	Assembly_t3901089011::get_offset_of_fromByteArray_8(),
	Assembly_t3901089011::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (ResolveEventHolder_t2546935524), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (UnmanagedMemoryStreamForModule_t2173839098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1150[1] = 
{
	UnmanagedMemoryStreamForModule_t2173839098::get_offset_of_module_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (AssemblyName_t1956517508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1151[16] = 
{
	AssemblyName_t1956517508::get_offset_of_name_0(),
	AssemblyName_t1956517508::get_offset_of_codebase_1(),
	AssemblyName_t1956517508::get_offset_of_major_2(),
	AssemblyName_t1956517508::get_offset_of_minor_3(),
	AssemblyName_t1956517508::get_offset_of_build_4(),
	AssemblyName_t1956517508::get_offset_of_revision_5(),
	AssemblyName_t1956517508::get_offset_of_cultureinfo_6(),
	AssemblyName_t1956517508::get_offset_of_flags_7(),
	AssemblyName_t1956517508::get_offset_of_hashalg_8(),
	AssemblyName_t1956517508::get_offset_of_keypair_9(),
	AssemblyName_t1956517508::get_offset_of_publicKey_10(),
	AssemblyName_t1956517508::get_offset_of_keyToken_11(),
	AssemblyName_t1956517508::get_offset_of_versioncompat_12(),
	AssemblyName_t1956517508::get_offset_of_version_13(),
	AssemblyName_t1956517508::get_offset_of_processor_architecture_14(),
	AssemblyName_t1956517508::get_offset_of_contentType_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (ConstructorInfo_t4042935252), -1, sizeof(ConstructorInfo_t4042935252_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1152[2] = 
{
	ConstructorInfo_t4042935252_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t4042935252_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (CustomAttributeData_t2686429608), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1153[4] = 
{
	CustomAttributeData_t2686429608::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t2686429608::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t2686429608::get_offset_of_namedArgs_2(),
	CustomAttributeData_t2686429608::get_offset_of_lazyData_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (LazyCAttrData_t1936330710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1154[3] = 
{
	LazyCAttrData_t1936330710::get_offset_of_assembly_0(),
	LazyCAttrData_t1936330710::get_offset_of_data_1(),
	LazyCAttrData_t1936330710::get_offset_of_data_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (CustomAttributeFormatException_t3931502090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (CustomAttributeNamedArgument_t1689863171)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1156[2] = 
{
	CustomAttributeNamedArgument_t1689863171::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t1689863171::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (CustomAttributeTypedArgument_t2357349873)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1157[2] = 
{
	CustomAttributeTypedArgument_t2357349873::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t2357349873::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1158[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (AddEventAdapter_t4087444710), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (ImageFileMachine_t1419919500)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1161[5] = 
{
	ImageFileMachine_t1419919500::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { sizeof (LocalVariableInfo_t2526227085), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1162[3] = 
{
	LocalVariableInfo_t2526227085::get_offset_of_type_0(),
	LocalVariableInfo_t2526227085::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t2526227085::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (ResolveTokenError_t4084989594)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1163[4] = 
{
	ResolveTokenError_t4084989594::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (Module_t1203274219), -1, sizeof(Module_t1203274219_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1164[10] = 
{
	Module_t1203274219_StaticFields::get_offset_of_FilterTypeName_0(),
	Module_t1203274219_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_1(),
	Module_t1203274219::get_offset_of__impl_2(),
	Module_t1203274219::get_offset_of_assembly_3(),
	Module_t1203274219::get_offset_of_fqname_4(),
	Module_t1203274219::get_offset_of_name_5(),
	Module_t1203274219::get_offset_of_scopename_6(),
	Module_t1203274219::get_offset_of_is_resource_7(),
	Module_t1203274219::get_offset_of_token_8(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (RuntimeAssembly_t1315804773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (MonoAssembly_t4108224758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { sizeof (MonoEventInfo_t3003613183)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1167[8] = 
{
	MonoEventInfo_t3003613183::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3003613183::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3003613183::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3003613183::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3003613183::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3003613183::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3003613183::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t3003613183::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { sizeof (RuntimeEventInfo_t2347051563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1169[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { sizeof (RuntimeFieldInfo_t2725676345), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { sizeof (RtFieldInfo_t1674832205), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1172[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { sizeof (MonoMethodInfo_t693572692)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1173[5] = 
{
	MonoMethodInfo_t693572692::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t693572692::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t693572692::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t693572692::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t693572692::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { sizeof (RuntimeMethodInfo_t2836545852), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1175[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (RuntimeConstructorInfo_t4222138294), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (MonoCMethod_t3034563001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1177[3] = 
{
	MonoCMethod_t3034563001::get_offset_of_mhandle_2(),
	MonoCMethod_t3034563001::get_offset_of_name_3(),
	MonoCMethod_t3034563001::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (RuntimeModule_t3474299474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (MonoModule_t1380922445), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (RuntimeParameterInfo_t1782344673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (MonoParameterInfo_t3710157746), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (MonoPropertyInfo_t4209295771)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1182[6] = 
{
	MonoPropertyInfo_t4209295771::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4209295771::get_offset_of_declaring_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4209295771::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4209295771::get_offset_of_get_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4209295771::get_offset_of_set_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t4209295771::get_offset_of_attrs_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (PInfo_t2185376891)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1183[7] = 
{
	PInfo_t2185376891::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (RuntimePropertyInfo_t457563466), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1185[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (GetterAdapter_t3667645738), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (ParameterInfo_t3986909063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1189[7] = 
{
	ParameterInfo_t3986909063::get_offset_of_ClassImpl_0(),
	ParameterInfo_t3986909063::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t3986909063::get_offset_of_MemberImpl_2(),
	ParameterInfo_t3986909063::get_offset_of_NameImpl_3(),
	ParameterInfo_t3986909063::get_offset_of_PositionImpl_4(),
	ParameterInfo_t3986909063::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t3986909063::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (PortableExecutableKinds_t3259784375)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1190[7] = 
{
	PortableExecutableKinds_t3259784375::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (ReflectionTypeLoadException_t3630204432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1192[2] = 
{
	ReflectionTypeLoadException_t3630204432::get_offset_of_loaderExceptions_16(),
	ReflectionTypeLoadException_t3630204432::get_offset_of_types_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (StrongNameKeyPair_t4133742925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1193[5] = 
{
	StrongNameKeyPair_t4133742925::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t4133742925::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t4133742925::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t4133742925::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t4133742925::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (MethodBase_t2030835632), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (AmbiguousMatchException_t3743612438), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (AssemblyCopyrightAttribute_t2379871080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1196[1] = 
{
	AssemblyCopyrightAttribute_t2379871080::get_offset_of_m_copyright_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (AssemblyTrademarkAttribute_t2822933150), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1197[1] = 
{
	AssemblyTrademarkAttribute_t2822933150::get_offset_of_m_trademark_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (AssemblyProductAttribute_t3011953601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1198[1] = 
{
	AssemblyProductAttribute_t3011953601::get_offset_of_m_product_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (AssemblyCompanyAttribute_t1090954443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1199[1] = 
{
	AssemblyCompanyAttribute_t1090954443::get_offset_of_m_company_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
