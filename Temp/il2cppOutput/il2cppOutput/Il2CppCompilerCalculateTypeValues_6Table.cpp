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

// System.UInt32[]
struct UInt32U5BU5D_t1965307802;
// System.Byte[]
struct ByteU5BU5D_t3632859112;
// System.Collections.IEnumerator
struct IEnumerator_t4230448985;
// System.Collections.ArrayList
struct ArrayList_t1409763451;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t1700191993;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t919176318;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3913670143;
// System.Security.Cryptography.CspParameters
struct CspParameters_t2067166484;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2269462312;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t399718522;
// System.String
struct String_t;
// System.Type
struct Type_t;
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
// System.Boolean[]
struct BooleanU5BU5D_t3168228753;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t122025017;
// System.Action
struct Action_t2274821493;
// System.Security.Cryptography.RSA
struct RSA_t3739757907;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2622827795;
// System.Version
struct Version_t1375298617;
// System.Security.Cryptography.DSA
struct DSA_t2770888278;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t3549662980;
// System.Threading.Tasks.Task
struct Task_t2690497587;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t2491976366;
// System.Action`1<System.Object>
struct Action_1_t812734323;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t1786581176;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2300956193;
// System.Void
struct Void_t634856565;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3597187295;
// System.Char[]
struct CharU5BU5D_t1313538844;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t4062768725;
// System.Security.AccessControl.CryptoKeySecurity
struct CryptoKeySecurity_t3076075699;
// System.Security.SecureString
struct SecureString_t3536472921;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t2482470896;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t2866299703;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t221302533;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t1160196235;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t710100505;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1843741840;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t2728286059;
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t2850665406;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t3287244731;
// System.IO.Stream
struct Stream_t3120643226;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t621469248;
// System.Security.Cryptography.DESTransform
struct DESTransform_t1135698164;
// System.UInt16[]
struct UInt16U5BU5D_t3291570429;

struct Exception_t4083038797_marshaled_pinvoke;
struct Exception_t4083038797_marshaled_com;



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
#ifndef SHA1INTERNAL_T2482470896_H
#define SHA1INTERNAL_T2482470896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t2482470896  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t1965307802* ____H_1;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_2;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t3632859112* ____ProcessingBuffer_3;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_4;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t1965307802* ___buff_5;

public:
	inline static int32_t get_offset_of__H_1() { return static_cast<int32_t>(offsetof(SHA1Internal_t2482470896, ____H_1)); }
	inline UInt32U5BU5D_t1965307802* get__H_1() const { return ____H_1; }
	inline UInt32U5BU5D_t1965307802** get_address_of__H_1() { return &____H_1; }
	inline void set__H_1(UInt32U5BU5D_t1965307802* value)
	{
		____H_1 = value;
		Il2CppCodeGenWriteBarrier((&____H_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t2482470896, ___count_2)); }
	inline uint64_t get_count_2() const { return ___count_2; }
	inline uint64_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(uint64_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t2482470896, ____ProcessingBuffer_3)); }
	inline ByteU5BU5D_t3632859112* get__ProcessingBuffer_3() const { return ____ProcessingBuffer_3; }
	inline ByteU5BU5D_t3632859112** get_address_of__ProcessingBuffer_3() { return &____ProcessingBuffer_3; }
	inline void set__ProcessingBuffer_3(ByteU5BU5D_t3632859112* value)
	{
		____ProcessingBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_3), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t2482470896, ____ProcessingBufferCount_4)); }
	inline int32_t get__ProcessingBufferCount_4() const { return ____ProcessingBufferCount_4; }
	inline int32_t* get_address_of__ProcessingBufferCount_4() { return &____ProcessingBufferCount_4; }
	inline void set__ProcessingBufferCount_4(int32_t value)
	{
		____ProcessingBufferCount_4 = value;
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(SHA1Internal_t2482470896, ___buff_5)); }
	inline UInt32U5BU5D_t1965307802* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t1965307802** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t1965307802* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((&___buff_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T2482470896_H
#ifndef HASHALGORITHM_T4062768725_H
#define HASHALGORITHM_T4062768725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t4062768725  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3632859112* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t4062768725, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t4062768725, ___HashValue_1)); }
	inline ByteU5BU5D_t3632859112* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_t3632859112** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_t3632859112* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_1), value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t4062768725, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t4062768725, ___m_bDisposed_3)); }
	inline bool get_m_bDisposed_3() const { return ___m_bDisposed_3; }
	inline bool* get_address_of_m_bDisposed_3() { return &___m_bDisposed_3; }
	inline void set_m_bDisposed_3(bool value)
	{
		___m_bDisposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T4062768725_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T2622827795_H
#define STRONGNAMEPUBLICKEYBLOB_T2622827795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t2622827795  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t3632859112* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t2622827795, ___pubkey_0)); }
	inline ByteU5BU5D_t3632859112* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t3632859112** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t3632859112* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T2622827795_H
#ifndef KEYSIZES_T3622656165_H
#define KEYSIZES_T3622656165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t3622656165  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::m_minSize
	int32_t ___m_minSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::m_maxSize
	int32_t ___m_maxSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::m_skipSize
	int32_t ___m_skipSize_2;

public:
	inline static int32_t get_offset_of_m_minSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t3622656165, ___m_minSize_0)); }
	inline int32_t get_m_minSize_0() const { return ___m_minSize_0; }
	inline int32_t* get_address_of_m_minSize_0() { return &___m_minSize_0; }
	inline void set_m_minSize_0(int32_t value)
	{
		___m_minSize_0 = value;
	}

	inline static int32_t get_offset_of_m_maxSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t3622656165, ___m_maxSize_1)); }
	inline int32_t get_m_maxSize_1() const { return ___m_maxSize_1; }
	inline int32_t* get_address_of_m_maxSize_1() { return &___m_maxSize_1; }
	inline void set_m_maxSize_1(int32_t value)
	{
		___m_maxSize_1 = value;
	}

	inline static int32_t get_offset_of_m_skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t3622656165, ___m_skipSize_2)); }
	inline int32_t get_m_skipSize_2() const { return ___m_skipSize_2; }
	inline int32_t* get_address_of_m_skipSize_2() { return &___m_skipSize_2; }
	inline void set_m_skipSize_2(int32_t value)
	{
		___m_skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T3622656165_H
#ifndef CODEACCESSPERMISSION_T1627142484_H
#define CODEACCESSPERMISSION_T1627142484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t1627142484  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T1627142484_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T2396935803_H
#define KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T2396935803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct  KeyContainerPermissionAccessEntryEnumerator_t2396935803  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::e
	RuntimeObject* ___e_0;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryEnumerator_t2396935803, ___e_0)); }
	inline RuntimeObject* get_e_0() const { return ___e_0; }
	inline RuntimeObject** get_address_of_e_0() { return &___e_0; }
	inline void set_e_0(RuntimeObject* value)
	{
		___e_0 = value;
		Il2CppCodeGenWriteBarrier((&___e_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T2396935803_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T2850665406_H
#define KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T2850665406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct  KeyContainerPermissionAccessEntryCollection_t2850665406  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::_list
	ArrayList_t1409763451 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryCollection_t2850665406, ____list_0)); }
	inline ArrayList_t1409763451 * get__list_0() const { return ____list_0; }
	inline ArrayList_t1409763451 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t1409763451 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T2850665406_H
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
#ifndef DERIVEBYTES_T2252174226_H
#define DERIVEBYTES_T2252174226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DeriveBytes
struct  DeriveBytes_t2252174226  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T2252174226_H
#ifndef RANDOMNUMBERGENERATOR_T1843741840_H
#define RANDOMNUMBERGENERATOR_T1843741840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t1843741840  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T1843741840_H
#ifndef CRYPTOAPITRANSFORM_T748882946_H
#define CRYPTOAPITRANSFORM_T748882946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoAPITransform
struct  CryptoAPITransform_t748882946  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.CryptoAPITransform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(CryptoAPITransform_t748882946, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOAPITRANSFORM_T748882946_H
#ifndef TOBASE64TRANSFORM_T1550471388_H
#define TOBASE64TRANSFORM_T1550471388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t1550471388  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T1550471388_H
#ifndef CRYPTOHANDLER_T3820558635_H
#define CRYPTOHANDLER_T3820558635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct  CryptoHandler_t3820558635  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Type> System.Security.Cryptography.CryptoConfig/CryptoHandler::algorithms
	RuntimeObject* ___algorithms_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::oid
	RuntimeObject* ___oid_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::names
	Dictionary_2_t3913670143 * ___names_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::classnames
	Dictionary_2_t3913670143 * ___classnames_3;
	// System.Int32 System.Security.Cryptography.CryptoConfig/CryptoHandler::level
	int32_t ___level_4;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(CryptoHandler_t3820558635, ___algorithms_0)); }
	inline RuntimeObject* get_algorithms_0() const { return ___algorithms_0; }
	inline RuntimeObject** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(RuntimeObject* value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}

	inline static int32_t get_offset_of_oid_1() { return static_cast<int32_t>(offsetof(CryptoHandler_t3820558635, ___oid_1)); }
	inline RuntimeObject* get_oid_1() const { return ___oid_1; }
	inline RuntimeObject** get_address_of_oid_1() { return &___oid_1; }
	inline void set_oid_1(RuntimeObject* value)
	{
		___oid_1 = value;
		Il2CppCodeGenWriteBarrier((&___oid_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(CryptoHandler_t3820558635, ___names_2)); }
	inline Dictionary_2_t3913670143 * get_names_2() const { return ___names_2; }
	inline Dictionary_2_t3913670143 ** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(Dictionary_2_t3913670143 * value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_classnames_3() { return static_cast<int32_t>(offsetof(CryptoHandler_t3820558635, ___classnames_3)); }
	inline Dictionary_2_t3913670143 * get_classnames_3() const { return ___classnames_3; }
	inline Dictionary_2_t3913670143 ** get_address_of_classnames_3() { return &___classnames_3; }
	inline void set_classnames_3(Dictionary_2_t3913670143 * value)
	{
		___classnames_3 = value;
		Il2CppCodeGenWriteBarrier((&___classnames_3), value);
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(CryptoHandler_t3820558635, ___level_4)); }
	inline int32_t get_level_4() const { return ___level_4; }
	inline int32_t* get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(int32_t value)
	{
		___level_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOHANDLER_T3820558635_H
#ifndef CSPKEYCONTAINERINFO_T3461319235_H
#define CSPKEYCONTAINERINFO_T3461319235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspKeyContainerInfo
struct  CspKeyContainerInfo_t3461319235  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters System.Security.Cryptography.CspKeyContainerInfo::_params
	CspParameters_t2067166484 * ____params_0;
	// System.Boolean System.Security.Cryptography.CspKeyContainerInfo::_random
	bool ____random_1;

public:
	inline static int32_t get_offset_of__params_0() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t3461319235, ____params_0)); }
	inline CspParameters_t2067166484 * get__params_0() const { return ____params_0; }
	inline CspParameters_t2067166484 ** get_address_of__params_0() { return &____params_0; }
	inline void set__params_0(CspParameters_t2067166484 * value)
	{
		____params_0 = value;
		Il2CppCodeGenWriteBarrier((&____params_0), value);
	}

	inline static int32_t get_offset_of__random_1() { return static_cast<int32_t>(offsetof(CspKeyContainerInfo_t3461319235, ____random_1)); }
	inline bool get__random_1() const { return ____random_1; }
	inline bool* get_address_of__random_1() { return &____random_1; }
	inline void set__random_1(bool value)
	{
		____random_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPKEYCONTAINERINFO_T3461319235_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T2729341384_H
#define ASYMMETRICSIGNATUREFORMATTER_T2729341384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t2729341384  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T2729341384_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T2759942994_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T2759942994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t2759942994  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T2759942994_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T3805135927_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T3805135927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t3805135927  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T3805135927_H
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T499330280_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T499330280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t499330280  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T499330280_H
#ifndef ASYMMETRICALGORITHM_T2243017820_H
#define ASYMMETRICALGORITHM_T2243017820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t2243017820  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2269462312* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2243017820, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2243017820, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t2269462312* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t2269462312** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t2269462312* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T2243017820_H
#ifndef CRYPTOCONFIG_T3189056697_H
#define CRYPTOCONFIG_T3189056697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t3189056697  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t3189056697_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> System.Security.Cryptography.CryptoConfig::algorithms
	Dictionary_2_t399718522 * ___algorithms_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig::unresolved_algorithms
	Dictionary_2_t3913670143 * ___unresolved_algorithms_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig::oids
	Dictionary_2_t3913670143 * ___oids_3;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA1
	Type_t * ___defaultSHA1_5;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultMD5
	Type_t * ___defaultMD5_6;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA256
	Type_t * ___defaultSHA256_7;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA384
	Type_t * ___defaultSHA384_8;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA512
	Type_t * ___defaultSHA512_9;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSA
	Type_t * ___defaultRSA_10;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDSA
	Type_t * ___defaultDSA_11;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDES
	Type_t * ___defaultDES_12;
	// System.Type System.Security.Cryptography.CryptoConfig::default3DES
	Type_t * ___default3DES_13;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRC2
	Type_t * ___defaultRC2_14;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultAES
	Type_t * ___defaultAES_15;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRNG
	Type_t * ___defaultRNG_16;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMAC
	Type_t * ___defaultHMAC_17;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultMAC3DES
	Type_t * ___defaultMAC3DES_18;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDSASigDesc
	Type_t * ___defaultDSASigDesc_19;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA1SigDesc
	Type_t * ___defaultRSAPKCS1SHA1SigDesc_20;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA256SigDesc
	Type_t * ___defaultRSAPKCS1SHA256SigDesc_21;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA384SigDesc
	Type_t * ___defaultRSAPKCS1SHA384SigDesc_22;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA512SigDesc
	Type_t * ___defaultRSAPKCS1SHA512SigDesc_23;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRIPEMD160
	Type_t * ___defaultRIPEMD160_24;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACMD5
	Type_t * ___defaultHMACMD5_25;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACRIPEMD160
	Type_t * ___defaultHMACRIPEMD160_26;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA256
	Type_t * ___defaultHMACSHA256_27;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA384
	Type_t * ___defaultHMACSHA384_28;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA512
	Type_t * ___defaultHMACSHA512_29;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___algorithms_1)); }
	inline Dictionary_2_t399718522 * get_algorithms_1() const { return ___algorithms_1; }
	inline Dictionary_2_t399718522 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Dictionary_2_t399718522 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_unresolved_algorithms_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___unresolved_algorithms_2)); }
	inline Dictionary_2_t3913670143 * get_unresolved_algorithms_2() const { return ___unresolved_algorithms_2; }
	inline Dictionary_2_t3913670143 ** get_address_of_unresolved_algorithms_2() { return &___unresolved_algorithms_2; }
	inline void set_unresolved_algorithms_2(Dictionary_2_t3913670143 * value)
	{
		___unresolved_algorithms_2 = value;
		Il2CppCodeGenWriteBarrier((&___unresolved_algorithms_2), value);
	}

	inline static int32_t get_offset_of_oids_3() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___oids_3)); }
	inline Dictionary_2_t3913670143 * get_oids_3() const { return ___oids_3; }
	inline Dictionary_2_t3913670143 ** get_address_of_oids_3() { return &___oids_3; }
	inline void set_oids_3(Dictionary_2_t3913670143 * value)
	{
		___oids_3 = value;
		Il2CppCodeGenWriteBarrier((&___oids_3), value);
	}

	inline static int32_t get_offset_of_defaultSHA1_5() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultSHA1_5)); }
	inline Type_t * get_defaultSHA1_5() const { return ___defaultSHA1_5; }
	inline Type_t ** get_address_of_defaultSHA1_5() { return &___defaultSHA1_5; }
	inline void set_defaultSHA1_5(Type_t * value)
	{
		___defaultSHA1_5 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA1_5), value);
	}

	inline static int32_t get_offset_of_defaultMD5_6() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultMD5_6)); }
	inline Type_t * get_defaultMD5_6() const { return ___defaultMD5_6; }
	inline Type_t ** get_address_of_defaultMD5_6() { return &___defaultMD5_6; }
	inline void set_defaultMD5_6(Type_t * value)
	{
		___defaultMD5_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMD5_6), value);
	}

	inline static int32_t get_offset_of_defaultSHA256_7() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultSHA256_7)); }
	inline Type_t * get_defaultSHA256_7() const { return ___defaultSHA256_7; }
	inline Type_t ** get_address_of_defaultSHA256_7() { return &___defaultSHA256_7; }
	inline void set_defaultSHA256_7(Type_t * value)
	{
		___defaultSHA256_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA256_7), value);
	}

	inline static int32_t get_offset_of_defaultSHA384_8() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultSHA384_8)); }
	inline Type_t * get_defaultSHA384_8() const { return ___defaultSHA384_8; }
	inline Type_t ** get_address_of_defaultSHA384_8() { return &___defaultSHA384_8; }
	inline void set_defaultSHA384_8(Type_t * value)
	{
		___defaultSHA384_8 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA384_8), value);
	}

	inline static int32_t get_offset_of_defaultSHA512_9() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultSHA512_9)); }
	inline Type_t * get_defaultSHA512_9() const { return ___defaultSHA512_9; }
	inline Type_t ** get_address_of_defaultSHA512_9() { return &___defaultSHA512_9; }
	inline void set_defaultSHA512_9(Type_t * value)
	{
		___defaultSHA512_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA512_9), value);
	}

	inline static int32_t get_offset_of_defaultRSA_10() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultRSA_10)); }
	inline Type_t * get_defaultRSA_10() const { return ___defaultRSA_10; }
	inline Type_t ** get_address_of_defaultRSA_10() { return &___defaultRSA_10; }
	inline void set_defaultRSA_10(Type_t * value)
	{
		___defaultRSA_10 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSA_10), value);
	}

	inline static int32_t get_offset_of_defaultDSA_11() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultDSA_11)); }
	inline Type_t * get_defaultDSA_11() const { return ___defaultDSA_11; }
	inline Type_t ** get_address_of_defaultDSA_11() { return &___defaultDSA_11; }
	inline void set_defaultDSA_11(Type_t * value)
	{
		___defaultDSA_11 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDSA_11), value);
	}

	inline static int32_t get_offset_of_defaultDES_12() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultDES_12)); }
	inline Type_t * get_defaultDES_12() const { return ___defaultDES_12; }
	inline Type_t ** get_address_of_defaultDES_12() { return &___defaultDES_12; }
	inline void set_defaultDES_12(Type_t * value)
	{
		___defaultDES_12 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDES_12), value);
	}

	inline static int32_t get_offset_of_default3DES_13() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___default3DES_13)); }
	inline Type_t * get_default3DES_13() const { return ___default3DES_13; }
	inline Type_t ** get_address_of_default3DES_13() { return &___default3DES_13; }
	inline void set_default3DES_13(Type_t * value)
	{
		___default3DES_13 = value;
		Il2CppCodeGenWriteBarrier((&___default3DES_13), value);
	}

	inline static int32_t get_offset_of_defaultRC2_14() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultRC2_14)); }
	inline Type_t * get_defaultRC2_14() const { return ___defaultRC2_14; }
	inline Type_t ** get_address_of_defaultRC2_14() { return &___defaultRC2_14; }
	inline void set_defaultRC2_14(Type_t * value)
	{
		___defaultRC2_14 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRC2_14), value);
	}

	inline static int32_t get_offset_of_defaultAES_15() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultAES_15)); }
	inline Type_t * get_defaultAES_15() const { return ___defaultAES_15; }
	inline Type_t ** get_address_of_defaultAES_15() { return &___defaultAES_15; }
	inline void set_defaultAES_15(Type_t * value)
	{
		___defaultAES_15 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAES_15), value);
	}

	inline static int32_t get_offset_of_defaultRNG_16() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultRNG_16)); }
	inline Type_t * get_defaultRNG_16() const { return ___defaultRNG_16; }
	inline Type_t ** get_address_of_defaultRNG_16() { return &___defaultRNG_16; }
	inline void set_defaultRNG_16(Type_t * value)
	{
		___defaultRNG_16 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRNG_16), value);
	}

	inline static int32_t get_offset_of_defaultHMAC_17() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultHMAC_17)); }
	inline Type_t * get_defaultHMAC_17() const { return ___defaultHMAC_17; }
	inline Type_t ** get_address_of_defaultHMAC_17() { return &___defaultHMAC_17; }
	inline void set_defaultHMAC_17(Type_t * value)
	{
		___defaultHMAC_17 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMAC_17), value);
	}

	inline static int32_t get_offset_of_defaultMAC3DES_18() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultMAC3DES_18)); }
	inline Type_t * get_defaultMAC3DES_18() const { return ___defaultMAC3DES_18; }
	inline Type_t ** get_address_of_defaultMAC3DES_18() { return &___defaultMAC3DES_18; }
	inline void set_defaultMAC3DES_18(Type_t * value)
	{
		___defaultMAC3DES_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMAC3DES_18), value);
	}

	inline static int32_t get_offset_of_defaultDSASigDesc_19() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultDSASigDesc_19)); }
	inline Type_t * get_defaultDSASigDesc_19() const { return ___defaultDSASigDesc_19; }
	inline Type_t ** get_address_of_defaultDSASigDesc_19() { return &___defaultDSASigDesc_19; }
	inline void set_defaultDSASigDesc_19(Type_t * value)
	{
		___defaultDSASigDesc_19 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDSASigDesc_19), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA1SigDesc_20() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultRSAPKCS1SHA1SigDesc_20)); }
	inline Type_t * get_defaultRSAPKCS1SHA1SigDesc_20() const { return ___defaultRSAPKCS1SHA1SigDesc_20; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA1SigDesc_20() { return &___defaultRSAPKCS1SHA1SigDesc_20; }
	inline void set_defaultRSAPKCS1SHA1SigDesc_20(Type_t * value)
	{
		___defaultRSAPKCS1SHA1SigDesc_20 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA1SigDesc_20), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA256SigDesc_21() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultRSAPKCS1SHA256SigDesc_21)); }
	inline Type_t * get_defaultRSAPKCS1SHA256SigDesc_21() const { return ___defaultRSAPKCS1SHA256SigDesc_21; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA256SigDesc_21() { return &___defaultRSAPKCS1SHA256SigDesc_21; }
	inline void set_defaultRSAPKCS1SHA256SigDesc_21(Type_t * value)
	{
		___defaultRSAPKCS1SHA256SigDesc_21 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA256SigDesc_21), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA384SigDesc_22() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultRSAPKCS1SHA384SigDesc_22)); }
	inline Type_t * get_defaultRSAPKCS1SHA384SigDesc_22() const { return ___defaultRSAPKCS1SHA384SigDesc_22; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA384SigDesc_22() { return &___defaultRSAPKCS1SHA384SigDesc_22; }
	inline void set_defaultRSAPKCS1SHA384SigDesc_22(Type_t * value)
	{
		___defaultRSAPKCS1SHA384SigDesc_22 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA384SigDesc_22), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA512SigDesc_23() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultRSAPKCS1SHA512SigDesc_23)); }
	inline Type_t * get_defaultRSAPKCS1SHA512SigDesc_23() const { return ___defaultRSAPKCS1SHA512SigDesc_23; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA512SigDesc_23() { return &___defaultRSAPKCS1SHA512SigDesc_23; }
	inline void set_defaultRSAPKCS1SHA512SigDesc_23(Type_t * value)
	{
		___defaultRSAPKCS1SHA512SigDesc_23 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA512SigDesc_23), value);
	}

	inline static int32_t get_offset_of_defaultRIPEMD160_24() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultRIPEMD160_24)); }
	inline Type_t * get_defaultRIPEMD160_24() const { return ___defaultRIPEMD160_24; }
	inline Type_t ** get_address_of_defaultRIPEMD160_24() { return &___defaultRIPEMD160_24; }
	inline void set_defaultRIPEMD160_24(Type_t * value)
	{
		___defaultRIPEMD160_24 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRIPEMD160_24), value);
	}

	inline static int32_t get_offset_of_defaultHMACMD5_25() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultHMACMD5_25)); }
	inline Type_t * get_defaultHMACMD5_25() const { return ___defaultHMACMD5_25; }
	inline Type_t ** get_address_of_defaultHMACMD5_25() { return &___defaultHMACMD5_25; }
	inline void set_defaultHMACMD5_25(Type_t * value)
	{
		___defaultHMACMD5_25 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACMD5_25), value);
	}

	inline static int32_t get_offset_of_defaultHMACRIPEMD160_26() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultHMACRIPEMD160_26)); }
	inline Type_t * get_defaultHMACRIPEMD160_26() const { return ___defaultHMACRIPEMD160_26; }
	inline Type_t ** get_address_of_defaultHMACRIPEMD160_26() { return &___defaultHMACRIPEMD160_26; }
	inline void set_defaultHMACRIPEMD160_26(Type_t * value)
	{
		___defaultHMACRIPEMD160_26 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACRIPEMD160_26), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA256_27() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultHMACSHA256_27)); }
	inline Type_t * get_defaultHMACSHA256_27() const { return ___defaultHMACSHA256_27; }
	inline Type_t ** get_address_of_defaultHMACSHA256_27() { return &___defaultHMACSHA256_27; }
	inline void set_defaultHMACSHA256_27(Type_t * value)
	{
		___defaultHMACSHA256_27 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA256_27), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA384_28() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultHMACSHA384_28)); }
	inline Type_t * get_defaultHMACSHA384_28() const { return ___defaultHMACSHA384_28; }
	inline Type_t ** get_address_of_defaultHMACSHA384_28() { return &___defaultHMACSHA384_28; }
	inline void set_defaultHMACSHA384_28(Type_t * value)
	{
		___defaultHMACSHA384_28 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA384_28), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA512_29() { return static_cast<int32_t>(offsetof(CryptoConfig_t3189056697_StaticFields, ___defaultHMACSHA512_29)); }
	inline Type_t * get_defaultHMACSHA512_29() const { return ___defaultHMACSHA512_29; }
	inline Type_t ** get_address_of_defaultHMACSHA512_29() { return &___defaultHMACSHA512_29; }
	inline void set_defaultHMACSHA512_29(Type_t * value)
	{
		___defaultHMACSHA512_29 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA512_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T3189056697_H
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
#ifndef HOPTOTHREADPOOLAWAITABLE_T2000679059_H
#define HOPTOTHREADPOOLAWAITABLE_T2000679059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable
struct  HopToThreadPoolAwaitable_t2000679059 
{
public:
	union
	{
		struct
		{
		};
		uint8_t HopToThreadPoolAwaitable_t2000679059__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOPTOTHREADPOOLAWAITABLE_T2000679059_H
#ifndef SITEIDENTITYPERMISSION_T1443084374_H
#define SITEIDENTITYPERMISSION_T1443084374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SiteIdentityPermission
struct  SiteIdentityPermission_t1443084374  : public CodeAccessPermission_t1627142484
{
public:
	// System.String System.Security.Permissions.SiteIdentityPermission::_site
	String_t* ____site_0;

public:
	inline static int32_t get_offset_of__site_0() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t1443084374, ____site_0)); }
	inline String_t* get__site_0() const { return ____site_0; }
	inline String_t** get_address_of__site_0() { return &____site_0; }
	inline void set__site_0(String_t* value)
	{
		____site_0 = value;
		Il2CppCodeGenWriteBarrier((&____site_0), value);
	}
};

struct SiteIdentityPermission_t1443084374_StaticFields
{
public:
	// System.Boolean[] System.Security.Permissions.SiteIdentityPermission::valid
	BooleanU5BU5D_t3168228753* ___valid_1;

public:
	inline static int32_t get_offset_of_valid_1() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t1443084374_StaticFields, ___valid_1)); }
	inline BooleanU5BU5D_t3168228753* get_valid_1() const { return ___valid_1; }
	inline BooleanU5BU5D_t3168228753** get_address_of_valid_1() { return &___valid_1; }
	inline void set_valid_1(BooleanU5BU5D_t3168228753* value)
	{
		___valid_1 = value;
		Il2CppCodeGenWriteBarrier((&___valid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITEIDENTITYPERMISSION_T1443084374_H
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
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T3671993512_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T3671993512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t3671993512  : public AsymmetricSignatureDeformatter_t2759942994
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t3739757907 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3671993512, ___rsa_0)); }
	inline RSA_t3739757907 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3739757907 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3739757907 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3671993512, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T3671993512_H
#ifndef URLIDENTITYPERMISSION_T2690474832_H
#define URLIDENTITYPERMISSION_T2690474832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UrlIdentityPermission
struct  UrlIdentityPermission_t2690474832  : public CodeAccessPermission_t1627142484
{
public:
	// System.String System.Security.Permissions.UrlIdentityPermission::url
	String_t* ___url_0;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(UrlIdentityPermission_t2690474832, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier((&___url_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLIDENTITYPERMISSION_T2690474832_H
#ifndef SNIP_T668884230_H
#define SNIP_T668884230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct  SNIP_t668884230 
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission/SNIP::PublicKey
	StrongNamePublicKeyBlob_t2622827795 * ___PublicKey_0;
	// System.String System.Security.Permissions.StrongNameIdentityPermission/SNIP::Name
	String_t* ___Name_1;
	// System.Version System.Security.Permissions.StrongNameIdentityPermission/SNIP::AssemblyVersion
	Version_t1375298617 * ___AssemblyVersion_2;

public:
	inline static int32_t get_offset_of_PublicKey_0() { return static_cast<int32_t>(offsetof(SNIP_t668884230, ___PublicKey_0)); }
	inline StrongNamePublicKeyBlob_t2622827795 * get_PublicKey_0() const { return ___PublicKey_0; }
	inline StrongNamePublicKeyBlob_t2622827795 ** get_address_of_PublicKey_0() { return &___PublicKey_0; }
	inline void set_PublicKey_0(StrongNamePublicKeyBlob_t2622827795 * value)
	{
		___PublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SNIP_t668884230, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_AssemblyVersion_2() { return static_cast<int32_t>(offsetof(SNIP_t668884230, ___AssemblyVersion_2)); }
	inline Version_t1375298617 * get_AssemblyVersion_2() const { return ___AssemblyVersion_2; }
	inline Version_t1375298617 ** get_address_of_AssemblyVersion_2() { return &___AssemblyVersion_2; }
	inline void set_AssemblyVersion_2(Version_t1375298617 * value)
	{
		___AssemblyVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t668884230_marshaled_pinvoke
{
	StrongNamePublicKeyBlob_t2622827795 * ___PublicKey_0;
	char* ___Name_1;
	Version_t1375298617 * ___AssemblyVersion_2;
};
// Native definition for COM marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t668884230_marshaled_com
{
	StrongNamePublicKeyBlob_t2622827795 * ___PublicKey_0;
	Il2CppChar* ___Name_1;
	Version_t1375298617 * ___AssemblyVersion_2;
};
#endif // SNIP_T668884230_H
#ifndef DSAPARAMETERS_T2385386057_H
#define DSAPARAMETERS_T2385386057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t2385386057 
{
public:
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t3632859112* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t3632859112* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t3632859112* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t3632859112* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t3632859112* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t3632859112* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t3632859112* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(DSAParameters_t2385386057, ___P_0)); }
	inline ByteU5BU5D_t3632859112* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t3632859112** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t3632859112* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(DSAParameters_t2385386057, ___Q_1)); }
	inline ByteU5BU5D_t3632859112* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t3632859112** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t3632859112* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(DSAParameters_t2385386057, ___G_2)); }
	inline ByteU5BU5D_t3632859112* get_G_2() const { return ___G_2; }
	inline ByteU5BU5D_t3632859112** get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(ByteU5BU5D_t3632859112* value)
	{
		___G_2 = value;
		Il2CppCodeGenWriteBarrier((&___G_2), value);
	}

	inline static int32_t get_offset_of_Y_3() { return static_cast<int32_t>(offsetof(DSAParameters_t2385386057, ___Y_3)); }
	inline ByteU5BU5D_t3632859112* get_Y_3() const { return ___Y_3; }
	inline ByteU5BU5D_t3632859112** get_address_of_Y_3() { return &___Y_3; }
	inline void set_Y_3(ByteU5BU5D_t3632859112* value)
	{
		___Y_3 = value;
		Il2CppCodeGenWriteBarrier((&___Y_3), value);
	}

	inline static int32_t get_offset_of_J_4() { return static_cast<int32_t>(offsetof(DSAParameters_t2385386057, ___J_4)); }
	inline ByteU5BU5D_t3632859112* get_J_4() const { return ___J_4; }
	inline ByteU5BU5D_t3632859112** get_address_of_J_4() { return &___J_4; }
	inline void set_J_4(ByteU5BU5D_t3632859112* value)
	{
		___J_4 = value;
		Il2CppCodeGenWriteBarrier((&___J_4), value);
	}

	inline static int32_t get_offset_of_X_5() { return static_cast<int32_t>(offsetof(DSAParameters_t2385386057, ___X_5)); }
	inline ByteU5BU5D_t3632859112* get_X_5() const { return ___X_5; }
	inline ByteU5BU5D_t3632859112** get_address_of_X_5() { return &___X_5; }
	inline void set_X_5(ByteU5BU5D_t3632859112* value)
	{
		___X_5 = value;
		Il2CppCodeGenWriteBarrier((&___X_5), value);
	}

	inline static int32_t get_offset_of_Seed_6() { return static_cast<int32_t>(offsetof(DSAParameters_t2385386057, ___Seed_6)); }
	inline ByteU5BU5D_t3632859112* get_Seed_6() const { return ___Seed_6; }
	inline ByteU5BU5D_t3632859112** get_address_of_Seed_6() { return &___Seed_6; }
	inline void set_Seed_6(ByteU5BU5D_t3632859112* value)
	{
		___Seed_6 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_6), value);
	}

	inline static int32_t get_offset_of_Counter_7() { return static_cast<int32_t>(offsetof(DSAParameters_t2385386057, ___Counter_7)); }
	inline int32_t get_Counter_7() const { return ___Counter_7; }
	inline int32_t* get_address_of_Counter_7() { return &___Counter_7; }
	inline void set_Counter_7(int32_t value)
	{
		___Counter_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2385386057_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___G_2;
	uint8_t* ___Y_3;
	uint8_t* ___J_4;
	uint8_t* ___X_5;
	uint8_t* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2385386057_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___G_2;
	uint8_t* ___Y_3;
	uint8_t* ___J_4;
	uint8_t* ___X_5;
	uint8_t* ___Seed_6;
	int32_t ___Counter_7;
};
#endif // DSAPARAMETERS_T2385386057_H
#ifndef DSASIGNATUREDEFORMATTER_T1243533741_H
#define DSASIGNATUREDEFORMATTER_T1243533741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t1243533741  : public AsymmetricSignatureDeformatter_t2759942994
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::_dsaKey
	DSA_t2770888278 * ____dsaKey_0;
	// System.String System.Security.Cryptography.DSASignatureDeformatter::_oid
	String_t* ____oid_1;

public:
	inline static int32_t get_offset_of__dsaKey_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t1243533741, ____dsaKey_0)); }
	inline DSA_t2770888278 * get__dsaKey_0() const { return ____dsaKey_0; }
	inline DSA_t2770888278 ** get_address_of__dsaKey_0() { return &____dsaKey_0; }
	inline void set__dsaKey_0(DSA_t2770888278 * value)
	{
		____dsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____dsaKey_0), value);
	}

	inline static int32_t get_offset_of__oid_1() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t1243533741, ____oid_1)); }
	inline String_t* get__oid_1() const { return ____oid_1; }
	inline String_t** get_address_of__oid_1() { return &____oid_1; }
	inline void set__oid_1(String_t* value)
	{
		____oid_1 = value;
		Il2CppCodeGenWriteBarrier((&____oid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T1243533741_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T715785199_H
#define RSAPKCS1SIGNATUREFORMATTER_T715785199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t715785199  : public AsymmetricSignatureFormatter_t2729341384
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t3739757907 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	String_t* ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t715785199, ___rsa_0)); }
	inline RSA_t3739757907 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3739757907 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3739757907 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t715785199, ___hash_1)); }
	inline String_t* get_hash_1() const { return ___hash_1; }
	inline String_t** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(String_t* value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T715785199_H
#ifndef KEYEDHASHALGORITHM_T3844467813_H
#define KEYEDHASHALGORITHM_T3844467813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t3844467813  : public HashAlgorithm_t4062768725
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t3632859112* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t3844467813, ___KeyValue_4)); }
	inline ByteU5BU5D_t3632859112* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t3632859112** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t3632859112* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T3844467813_H
#ifndef CONFIGUREDTASKAWAITER_T3740743478_H
#define CONFIGUREDTASKAWAITER_T3740743478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct  ConfiguredTaskAwaiter_t3740743478 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t3549662980 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t3740743478, ___m_task_0)); }
	inline Task_1_t3549662980 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t3549662980 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t3549662980 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t3740743478, ___m_continueOnCapturedContext_1)); }
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
#endif // CONFIGUREDTASKAWAITER_T3740743478_H
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
#ifndef CANCELLATIONTOKEN_T2088174702_H
#define CANCELLATIONTOKEN_T2088174702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t2088174702 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t2491976366 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t2088174702, ___m_source_0)); }
	inline CancellationTokenSource_t2491976366 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t2491976366 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t2491976366 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t2088174702_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t812734323 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t2088174702_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t812734323 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t812734323 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t812734323 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t2088174702_marshaled_pinvoke
{
	CancellationTokenSource_t2491976366 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t2088174702_marshaled_com
{
	CancellationTokenSource_t2491976366 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T2088174702_H
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
#ifndef GACIDENTITYPERMISSION_T2039348361_H
#define GACIDENTITYPERMISSION_T2039348361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.GacIdentityPermission
struct  GacIdentityPermission_t2039348361  : public CodeAccessPermission_t1627142484
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACIDENTITYPERMISSION_T2039348361_H
#ifndef SHA1_T1668751180_H
#define SHA1_T1668751180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t1668751180  : public HashAlgorithm_t4062768725
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T1668751180_H
#ifndef RSA_T3739757907_H
#define RSA_T3739757907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3739757907  : public AsymmetricAlgorithm_t2243017820
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3739757907_H
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
#ifndef DSA_T2770888278_H
#define DSA_T2770888278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2770888278  : public AsymmetricAlgorithm_t2243017820
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2770888278_H
#ifndef MD5_T476910876_H
#define MD5_T476910876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t476910876  : public HashAlgorithm_t4062768725
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T476910876_H
#ifndef PUBLISHERIDENTITYPERMISSION_T2813607577_H
#define PUBLISHERIDENTITYPERMISSION_T2813607577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PublisherIdentityPermission
struct  PublisherIdentityPermission_t2813607577  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Permissions.PublisherIdentityPermission::x509
	X509Certificate_t3597187295 * ___x509_0;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(PublisherIdentityPermission_t2813607577, ___x509_0)); }
	inline X509Certificate_t3597187295 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t3597187295 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t3597187295 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHERIDENTITYPERMISSION_T2813607577_H
#ifndef HASHALGORITHMNAME_T355460891_H
#define HASHALGORITHMNAME_T355460891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithmName
struct  HashAlgorithmName_t355460891 
{
public:
	// System.String System.Security.Cryptography.HashAlgorithmName::_name
	String_t* ____name_0;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(HashAlgorithmName_t355460891, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t355460891_marshaled_pinvoke
{
	char* ____name_0;
};
// Native definition for COM marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t355460891_marshaled_com
{
	Il2CppChar* ____name_0;
};
#endif // HASHALGORITHMNAME_T355460891_H
#ifndef DSASIGNATUREFORMATTER_T2573902755_H
#define DSASIGNATUREFORMATTER_T2573902755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t2573902755  : public AsymmetricSignatureFormatter_t2729341384
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::_dsaKey
	DSA_t2770888278 * ____dsaKey_0;
	// System.String System.Security.Cryptography.DSASignatureFormatter::_oid
	String_t* ____oid_1;

public:
	inline static int32_t get_offset_of__dsaKey_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t2573902755, ____dsaKey_0)); }
	inline DSA_t2770888278 * get__dsaKey_0() const { return ____dsaKey_0; }
	inline DSA_t2770888278 ** get_address_of__dsaKey_0() { return &____dsaKey_0; }
	inline void set__dsaKey_0(DSA_t2770888278 * value)
	{
		____dsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____dsaKey_0), value);
	}

	inline static int32_t get_offset_of__oid_1() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t2573902755, ____oid_1)); }
	inline String_t* get__oid_1() const { return ____oid_1; }
	inline String_t** get_address_of__oid_1() { return &____oid_1; }
	inline void set__oid_1(String_t* value)
	{
		____oid_1 = value;
		Il2CppCodeGenWriteBarrier((&____oid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T2573902755_H
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
#ifndef CIPHERMODE_T3188278575_H
#define CIPHERMODE_T3188278575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3188278575 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t3188278575, ___value___2)); }
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
#endif // CIPHERMODE_T3188278575_H
#ifndef PADDINGMODE_T208862109_H
#define PADDINGMODE_T208862109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t208862109 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t208862109, ___value___2)); }
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
#endif // PADDINGMODE_T208862109_H
#ifndef SECURITYZONE_T3997701187_H
#define SECURITYZONE_T3997701187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t3997701187 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityZone_t3997701187, ___value___2)); }
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
#endif // SECURITYZONE_T3997701187_H
#ifndef CRYPTOGRAPHICEXCEPTION_T1554430912_H
#define CRYPTOGRAPHICEXCEPTION_T1554430912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t1554430912  : public SystemException_t1971328175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T1554430912_H
#ifndef FROMBASE64TRANSFORMMODE_T508267653_H
#define FROMBASE64TRANSFORMMODE_T508267653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64TransformMode
struct  FromBase64TransformMode_t508267653 
{
public:
	// System.Int32 System.Security.Cryptography.FromBase64TransformMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FromBase64TransformMode_t508267653, ___value___2)); }
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
#endif // FROMBASE64TRANSFORMMODE_T508267653_H
#ifndef HMAC_T1345195150_H
#define HMAC_T1345195150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t1345195150  : public KeyedHashAlgorithm_t3844467813
{
public:
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t4062768725 * ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t4062768725 * ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_t3632859112* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_t3632859112* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;

public:
	inline static int32_t get_offset_of_blockSizeValue_5() { return static_cast<int32_t>(offsetof(HMAC_t1345195150, ___blockSizeValue_5)); }
	inline int32_t get_blockSizeValue_5() const { return ___blockSizeValue_5; }
	inline int32_t* get_address_of_blockSizeValue_5() { return &___blockSizeValue_5; }
	inline void set_blockSizeValue_5(int32_t value)
	{
		___blockSizeValue_5 = value;
	}

	inline static int32_t get_offset_of_m_hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t1345195150, ___m_hashName_6)); }
	inline String_t* get_m_hashName_6() const { return ___m_hashName_6; }
	inline String_t** get_address_of_m_hashName_6() { return &___m_hashName_6; }
	inline void set_m_hashName_6(String_t* value)
	{
		___m_hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashName_6), value);
	}

	inline static int32_t get_offset_of_m_hash1_7() { return static_cast<int32_t>(offsetof(HMAC_t1345195150, ___m_hash1_7)); }
	inline HashAlgorithm_t4062768725 * get_m_hash1_7() const { return ___m_hash1_7; }
	inline HashAlgorithm_t4062768725 ** get_address_of_m_hash1_7() { return &___m_hash1_7; }
	inline void set_m_hash1_7(HashAlgorithm_t4062768725 * value)
	{
		___m_hash1_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_hash1_7), value);
	}

	inline static int32_t get_offset_of_m_hash2_8() { return static_cast<int32_t>(offsetof(HMAC_t1345195150, ___m_hash2_8)); }
	inline HashAlgorithm_t4062768725 * get_m_hash2_8() const { return ___m_hash2_8; }
	inline HashAlgorithm_t4062768725 ** get_address_of_m_hash2_8() { return &___m_hash2_8; }
	inline void set_m_hash2_8(HashAlgorithm_t4062768725 * value)
	{
		___m_hash2_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_hash2_8), value);
	}

	inline static int32_t get_offset_of_m_inner_9() { return static_cast<int32_t>(offsetof(HMAC_t1345195150, ___m_inner_9)); }
	inline ByteU5BU5D_t3632859112* get_m_inner_9() const { return ___m_inner_9; }
	inline ByteU5BU5D_t3632859112** get_address_of_m_inner_9() { return &___m_inner_9; }
	inline void set_m_inner_9(ByteU5BU5D_t3632859112* value)
	{
		___m_inner_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_inner_9), value);
	}

	inline static int32_t get_offset_of_m_outer_10() { return static_cast<int32_t>(offsetof(HMAC_t1345195150, ___m_outer_10)); }
	inline ByteU5BU5D_t3632859112* get_m_outer_10() const { return ___m_outer_10; }
	inline ByteU5BU5D_t3632859112** get_address_of_m_outer_10() { return &___m_outer_10; }
	inline void set_m_outer_10(ByteU5BU5D_t3632859112* value)
	{
		___m_outer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_outer_10), value);
	}

	inline static int32_t get_offset_of_m_hashing_11() { return static_cast<int32_t>(offsetof(HMAC_t1345195150, ___m_hashing_11)); }
	inline bool get_m_hashing_11() const { return ___m_hashing_11; }
	inline bool* get_address_of_m_hashing_11() { return &___m_hashing_11; }
	inline void set_m_hashing_11(bool value)
	{
		___m_hashing_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T1345195150_H
#ifndef CSPPROVIDERFLAGS_T1628537230_H
#define CSPPROVIDERFLAGS_T1628537230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t1628537230 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t1628537230, ___value___2)); }
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
#endif // CSPPROVIDERFLAGS_T1628537230_H
#ifndef ASYNCTASKMETHODBUILDER_1_T1559004410_H
#define ASYNCTASKMETHODBUILDER_1_T1559004410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct  AsyncTaskMethodBuilder_1_t1559004410 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2225757285  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3549662980 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1559004410, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2225757285  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2225757285 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2225757285  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1559004410, ___m_task_2)); }
	inline Task_1_t3549662980 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t3549662980 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t3549662980 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t1559004410_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3549662980 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1559004410_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t3549662980 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t3549662980 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t3549662980 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T1559004410_H
#ifndef CSPPARAMETERS_T2067166484_H
#define CSPPARAMETERS_T2067166484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t2067166484  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_0;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_1;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_2;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_3;
	// System.Int32 System.Security.Cryptography.CspParameters::m_flags
	int32_t ___m_flags_4;
	// System.Security.AccessControl.CryptoKeySecurity System.Security.Cryptography.CspParameters::m_cryptoKeySecurity
	CryptoKeySecurity_t3076075699 * ___m_cryptoKeySecurity_5;
	// System.Security.SecureString System.Security.Cryptography.CspParameters::m_keyPassword
	SecureString_t3536472921 * ___m_keyPassword_6;
	// System.IntPtr System.Security.Cryptography.CspParameters::m_parentWindowHandle
	intptr_t ___m_parentWindowHandle_7;

public:
	inline static int32_t get_offset_of_ProviderType_0() { return static_cast<int32_t>(offsetof(CspParameters_t2067166484, ___ProviderType_0)); }
	inline int32_t get_ProviderType_0() const { return ___ProviderType_0; }
	inline int32_t* get_address_of_ProviderType_0() { return &___ProviderType_0; }
	inline void set_ProviderType_0(int32_t value)
	{
		___ProviderType_0 = value;
	}

	inline static int32_t get_offset_of_ProviderName_1() { return static_cast<int32_t>(offsetof(CspParameters_t2067166484, ___ProviderName_1)); }
	inline String_t* get_ProviderName_1() const { return ___ProviderName_1; }
	inline String_t** get_address_of_ProviderName_1() { return &___ProviderName_1; }
	inline void set_ProviderName_1(String_t* value)
	{
		___ProviderName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_1), value);
	}

	inline static int32_t get_offset_of_KeyContainerName_2() { return static_cast<int32_t>(offsetof(CspParameters_t2067166484, ___KeyContainerName_2)); }
	inline String_t* get_KeyContainerName_2() const { return ___KeyContainerName_2; }
	inline String_t** get_address_of_KeyContainerName_2() { return &___KeyContainerName_2; }
	inline void set_KeyContainerName_2(String_t* value)
	{
		___KeyContainerName_2 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_2), value);
	}

	inline static int32_t get_offset_of_KeyNumber_3() { return static_cast<int32_t>(offsetof(CspParameters_t2067166484, ___KeyNumber_3)); }
	inline int32_t get_KeyNumber_3() const { return ___KeyNumber_3; }
	inline int32_t* get_address_of_KeyNumber_3() { return &___KeyNumber_3; }
	inline void set_KeyNumber_3(int32_t value)
	{
		___KeyNumber_3 = value;
	}

	inline static int32_t get_offset_of_m_flags_4() { return static_cast<int32_t>(offsetof(CspParameters_t2067166484, ___m_flags_4)); }
	inline int32_t get_m_flags_4() const { return ___m_flags_4; }
	inline int32_t* get_address_of_m_flags_4() { return &___m_flags_4; }
	inline void set_m_flags_4(int32_t value)
	{
		___m_flags_4 = value;
	}

	inline static int32_t get_offset_of_m_cryptoKeySecurity_5() { return static_cast<int32_t>(offsetof(CspParameters_t2067166484, ___m_cryptoKeySecurity_5)); }
	inline CryptoKeySecurity_t3076075699 * get_m_cryptoKeySecurity_5() const { return ___m_cryptoKeySecurity_5; }
	inline CryptoKeySecurity_t3076075699 ** get_address_of_m_cryptoKeySecurity_5() { return &___m_cryptoKeySecurity_5; }
	inline void set_m_cryptoKeySecurity_5(CryptoKeySecurity_t3076075699 * value)
	{
		___m_cryptoKeySecurity_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_cryptoKeySecurity_5), value);
	}

	inline static int32_t get_offset_of_m_keyPassword_6() { return static_cast<int32_t>(offsetof(CspParameters_t2067166484, ___m_keyPassword_6)); }
	inline SecureString_t3536472921 * get_m_keyPassword_6() const { return ___m_keyPassword_6; }
	inline SecureString_t3536472921 ** get_address_of_m_keyPassword_6() { return &___m_keyPassword_6; }
	inline void set_m_keyPassword_6(SecureString_t3536472921 * value)
	{
		___m_keyPassword_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyPassword_6), value);
	}

	inline static int32_t get_offset_of_m_parentWindowHandle_7() { return static_cast<int32_t>(offsetof(CspParameters_t2067166484, ___m_parentWindowHandle_7)); }
	inline intptr_t get_m_parentWindowHandle_7() const { return ___m_parentWindowHandle_7; }
	inline intptr_t* get_address_of_m_parentWindowHandle_7() { return &___m_parentWindowHandle_7; }
	inline void set_m_parentWindowHandle_7(intptr_t value)
	{
		___m_parentWindowHandle_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T2067166484_H
#ifndef CRYPTOSTREAMMODE_T2268231278_H
#define CRYPTOSTREAMMODE_T2268231278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStreamMode
struct  CryptoStreamMode_t2268231278 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CryptoStreamMode_t2268231278, ___value___2)); }
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
#endif // CRYPTOSTREAMMODE_T2268231278_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T654128002_H
#define SHA1CRYPTOSERVICEPROVIDER_T654128002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t654128002  : public SHA1_t1668751180
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t2482470896 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t654128002, ___sha_4)); }
	inline SHA1Internal_t2482470896 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2482470896 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2482470896 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T654128002_H
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
#ifndef ISOLATEDSTORAGECONTAINMENT_T827571704_H
#define ISOLATEDSTORAGECONTAINMENT_T827571704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageContainment
struct  IsolatedStorageContainment_t827571704 
{
public:
	// System.Int32 System.Security.Permissions.IsolatedStorageContainment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IsolatedStorageContainment_t827571704, ___value___2)); }
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
#endif // ISOLATEDSTORAGECONTAINMENT_T827571704_H
#ifndef SECURITYACTION_T2550933415_H
#define SECURITYACTION_T2550933415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t2550933415 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityAction_t2550933415, ___value___2)); }
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
#endif // SECURITYACTION_T2550933415_H
#ifndef FILEIOPERMISSIONACCESS_T761419378_H
#define FILEIOPERMISSIONACCESS_T761419378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t761419378 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t761419378, ___value___2)); }
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
#endif // FILEIOPERMISSIONACCESS_T761419378_H
#ifndef HOSTPROTECTIONRESOURCE_T2970857360_H
#define HOSTPROTECTIONRESOURCE_T2970857360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionResource
struct  HostProtectionResource_t2970857360 
{
public:
	// System.Int32 System.Security.Permissions.HostProtectionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostProtectionResource_t2970857360, ___value___2)); }
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
#endif // HOSTPROTECTIONRESOURCE_T2970857360_H
#ifndef FILEDIALOGPERMISSIONACCESS_T3508424199_H
#define FILEDIALOGPERMISSIONACCESS_T3508424199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermissionAccess
struct  FileDialogPermissionAccess_t3508424199 
{
public:
	// System.Int32 System.Security.Permissions.FileDialogPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileDialogPermissionAccess_t3508424199, ___value___2)); }
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
#endif // FILEDIALOGPERMISSIONACCESS_T3508424199_H
#ifndef SECURITYPERMISSIONFLAG_T2115664158_H
#define SECURITYPERMISSIONFLAG_T2115664158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t2115664158 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t2115664158, ___value___2)); }
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
#endif // SECURITYPERMISSIONFLAG_T2115664158_H
#ifndef PERMISSIONSTATE_T1393876540_H
#define PERMISSIONSTATE_T1393876540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t1393876540 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionState_t1393876540, ___value___2)); }
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
#endif // PERMISSIONSTATE_T1393876540_H
#ifndef REFLECTIONPERMISSIONFLAG_T2177630096_H
#define REFLECTIONPERMISSIONFLAG_T2177630096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionFlag
struct  ReflectionPermissionFlag_t2177630096 
{
public:
	// System.Int32 System.Security.Permissions.ReflectionPermissionFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionPermissionFlag_t2177630096, ___value___2)); }
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
#endif // REFLECTIONPERMISSIONFLAG_T2177630096_H
#ifndef KEYCONTAINERPERMISSIONFLAGS_T4220695092_H
#define KEYCONTAINERPERMISSIONFLAGS_T4220695092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionFlags
struct  KeyContainerPermissionFlags_t4220695092 
{
public:
	// System.Int32 System.Security.Permissions.KeyContainerPermissionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionFlags_t4220695092, ___value___2)); }
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
#endif // KEYCONTAINERPERMISSIONFLAGS_T4220695092_H
#ifndef UIPERMISSIONCLIPBOARD_T2153243907_H
#define UIPERMISSIONCLIPBOARD_T2153243907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionClipboard
struct  UIPermissionClipboard_t2153243907 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionClipboard::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIPermissionClipboard_t2153243907, ___value___2)); }
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
#endif // UIPERMISSIONCLIPBOARD_T2153243907_H
#ifndef REGISTRYPERMISSIONACCESS_T1786671253_H
#define REGISTRYPERMISSIONACCESS_T1786671253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAccess
struct  RegistryPermissionAccess_t1786671253 
{
public:
	// System.Int32 System.Security.Permissions.RegistryPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryPermissionAccess_t1786671253, ___value___2)); }
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
#endif // REGISTRYPERMISSIONACCESS_T1786671253_H
#ifndef ENVIRONMENTPERMISSIONACCESS_T76554412_H
#define ENVIRONMENTPERMISSIONACCESS_T76554412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermissionAccess
struct  EnvironmentPermissionAccess_t76554412 
{
public:
	// System.Int32 System.Security.Permissions.EnvironmentPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAccess_t76554412, ___value___2)); }
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
#endif // ENVIRONMENTPERMISSIONACCESS_T76554412_H
#ifndef DSACRYPTOSERVICEPROVIDER_T2135957113_H
#define DSACRYPTOSERVICEPROVIDER_T2135957113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t2135957113  : public DSA_t2770888278
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t221302533 * ___store_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t1160196235 * ___dsa_8;

public:
	inline static int32_t get_offset_of_store_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2135957113, ___store_3)); }
	inline KeyPairPersistence_t221302533 * get_store_3() const { return ___store_3; }
	inline KeyPairPersistence_t221302533 ** get_address_of_store_3() { return &___store_3; }
	inline void set_store_3(KeyPairPersistence_t221302533 * value)
	{
		___store_3 = value;
		Il2CppCodeGenWriteBarrier((&___store_3), value);
	}

	inline static int32_t get_offset_of_persistKey_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2135957113, ___persistKey_4)); }
	inline bool get_persistKey_4() const { return ___persistKey_4; }
	inline bool* get_address_of_persistKey_4() { return &___persistKey_4; }
	inline void set_persistKey_4(bool value)
	{
		___persistKey_4 = value;
	}

	inline static int32_t get_offset_of_persisted_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2135957113, ___persisted_5)); }
	inline bool get_persisted_5() const { return ___persisted_5; }
	inline bool* get_address_of_persisted_5() { return &___persisted_5; }
	inline void set_persisted_5(bool value)
	{
		___persisted_5 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2135957113, ___privateKeyExportable_6)); }
	inline bool get_privateKeyExportable_6() const { return ___privateKeyExportable_6; }
	inline bool* get_address_of_privateKeyExportable_6() { return &___privateKeyExportable_6; }
	inline void set_privateKeyExportable_6(bool value)
	{
		___privateKeyExportable_6 = value;
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2135957113, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}

	inline static int32_t get_offset_of_dsa_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2135957113, ___dsa_8)); }
	inline DSAManaged_t1160196235 * get_dsa_8() const { return ___dsa_8; }
	inline DSAManaged_t1160196235 ** get_address_of_dsa_8() { return &___dsa_8; }
	inline void set_dsa_8(DSAManaged_t1160196235 * value)
	{
		___dsa_8 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_8), value);
	}
};

struct DSACryptoServiceProvider_t2135957113_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_9;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_9() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2135957113_StaticFields, ___useMachineKeyStore_9)); }
	inline bool get_useMachineKeyStore_9() const { return ___useMachineKeyStore_9; }
	inline bool* get_address_of_useMachineKeyStore_9() { return &___useMachineKeyStore_9; }
	inline void set_useMachineKeyStore_9(bool value)
	{
		___useMachineKeyStore_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T2135957113_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T3433290543_H
#define RNGCRYPTOSERVICEPROVIDER_T3433290543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t3433290543  : public RandomNumberGenerator_t1843741840
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t3433290543, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t3433290543_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t3433290543_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T3433290543_H
#ifndef KEYNUMBER_T1661073182_H
#define KEYNUMBER_T1661073182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyNumber
struct  KeyNumber_t1661073182 
{
public:
	// System.Int32 System.Security.Cryptography.KeyNumber::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyNumber_t1661073182, ___value___2)); }
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
#endif // KEYNUMBER_T1661073182_H
#ifndef UIPERMISSIONWINDOW_T680537192_H
#define UIPERMISSIONWINDOW_T680537192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionWindow
struct  UIPermissionWindow_t680537192 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionWindow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIPermissionWindow_t680537192, ___value___2)); }
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
#endif // UIPERMISSIONWINDOW_T680537192_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T202075247_H
#define MD5CRYPTOSERVICEPROVIDER_T202075247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t202075247  : public MD5_t476910876
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t1965307802* ____H_5;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t1965307802* ___buff_6;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_7;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t3632859112* ____ProcessingBuffer_8;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_9;

public:
	inline static int32_t get_offset_of__H_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t202075247, ____H_5)); }
	inline UInt32U5BU5D_t1965307802* get__H_5() const { return ____H_5; }
	inline UInt32U5BU5D_t1965307802** get_address_of__H_5() { return &____H_5; }
	inline void set__H_5(UInt32U5BU5D_t1965307802* value)
	{
		____H_5 = value;
		Il2CppCodeGenWriteBarrier((&____H_5), value);
	}

	inline static int32_t get_offset_of_buff_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t202075247, ___buff_6)); }
	inline UInt32U5BU5D_t1965307802* get_buff_6() const { return ___buff_6; }
	inline UInt32U5BU5D_t1965307802** get_address_of_buff_6() { return &___buff_6; }
	inline void set_buff_6(UInt32U5BU5D_t1965307802* value)
	{
		___buff_6 = value;
		Il2CppCodeGenWriteBarrier((&___buff_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t202075247, ___count_7)); }
	inline uint64_t get_count_7() const { return ___count_7; }
	inline uint64_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(uint64_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t202075247, ____ProcessingBuffer_8)); }
	inline ByteU5BU5D_t3632859112* get__ProcessingBuffer_8() const { return ____ProcessingBuffer_8; }
	inline ByteU5BU5D_t3632859112** get_address_of__ProcessingBuffer_8() { return &____ProcessingBuffer_8; }
	inline void set__ProcessingBuffer_8(ByteU5BU5D_t3632859112* value)
	{
		____ProcessingBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_8), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t202075247, ____ProcessingBufferCount_9)); }
	inline int32_t get__ProcessingBufferCount_9() const { return ____ProcessingBufferCount_9; }
	inline int32_t* get_address_of__ProcessingBufferCount_9() { return &____ProcessingBufferCount_9; }
	inline void set__ProcessingBufferCount_9(int32_t value)
	{
		____ProcessingBufferCount_9 = value;
	}
};

struct MD5CryptoServiceProvider_t202075247_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t1965307802* ___K_10;

public:
	inline static int32_t get_offset_of_K_10() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t202075247_StaticFields, ___K_10)); }
	inline UInt32U5BU5D_t1965307802* get_K_10() const { return ___K_10; }
	inline UInt32U5BU5D_t1965307802** get_address_of_K_10() { return &___K_10; }
	inline void set_K_10(UInt32U5BU5D_t1965307802* value)
	{
		___K_10 = value;
		Il2CppCodeGenWriteBarrier((&___K_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T202075247_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRY_T4180699765_H
#define KEYCONTAINERPERMISSIONACCESSENTRY_T4180699765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct  KeyContainerPermissionAccessEntry_t4180699765  : public RuntimeObject
{
public:
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermissionAccessEntry::_flags
	int32_t ____flags_0;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_containerName
	String_t* ____containerName_1;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_spec
	int32_t ____spec_2;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_store
	String_t* ____store_3;
	// System.String System.Security.Permissions.KeyContainerPermissionAccessEntry::_providerName
	String_t* ____providerName_4;
	// System.Int32 System.Security.Permissions.KeyContainerPermissionAccessEntry::_type
	int32_t ____type_5;

public:
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t4180699765, ____flags_0)); }
	inline int32_t get__flags_0() const { return ____flags_0; }
	inline int32_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(int32_t value)
	{
		____flags_0 = value;
	}

	inline static int32_t get_offset_of__containerName_1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t4180699765, ____containerName_1)); }
	inline String_t* get__containerName_1() const { return ____containerName_1; }
	inline String_t** get_address_of__containerName_1() { return &____containerName_1; }
	inline void set__containerName_1(String_t* value)
	{
		____containerName_1 = value;
		Il2CppCodeGenWriteBarrier((&____containerName_1), value);
	}

	inline static int32_t get_offset_of__spec_2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t4180699765, ____spec_2)); }
	inline int32_t get__spec_2() const { return ____spec_2; }
	inline int32_t* get_address_of__spec_2() { return &____spec_2; }
	inline void set__spec_2(int32_t value)
	{
		____spec_2 = value;
	}

	inline static int32_t get_offset_of__store_3() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t4180699765, ____store_3)); }
	inline String_t* get__store_3() const { return ____store_3; }
	inline String_t** get_address_of__store_3() { return &____store_3; }
	inline void set__store_3(String_t* value)
	{
		____store_3 = value;
		Il2CppCodeGenWriteBarrier((&____store_3), value);
	}

	inline static int32_t get_offset_of__providerName_4() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t4180699765, ____providerName_4)); }
	inline String_t* get__providerName_4() const { return ____providerName_4; }
	inline String_t** get_address_of__providerName_4() { return &____providerName_4; }
	inline void set__providerName_4(String_t* value)
	{
		____providerName_4 = value;
		Il2CppCodeGenWriteBarrier((&____providerName_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t4180699765, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRY_T4180699765_H
#ifndef SYMMETRICTRANSFORM_T2678564917_H
#define SYMMETRICTRANSFORM_T2678564917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t2678564917  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t710100505 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3632859112* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3632859112* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3632859112* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3632859112* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t1843741840 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___algo_0)); }
	inline SymmetricAlgorithm_t710100505 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t710100505 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t710100505 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___temp_3)); }
	inline ByteU5BU5D_t3632859112* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3632859112** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3632859112* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___temp2_4)); }
	inline ByteU5BU5D_t3632859112* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3632859112** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3632859112* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___workBuff_5)); }
	inline ByteU5BU5D_t3632859112* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3632859112** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3632859112* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___workout_6)); }
	inline ByteU5BU5D_t3632859112* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3632859112** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3632859112* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2678564917, ____rng_11)); }
	inline RandomNumberGenerator_t1843741840 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t1843741840 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t1843741840 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T2678564917_H
#ifndef RSACRYPTOSERVICEPROVIDER_T1041353003_H
#define RSACRYPTOSERVICEPROVIDER_T1041353003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t1041353003  : public RSA_t3739757907
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t221302533 * ___store_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_7;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_8;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_9;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t2728286059 * ___rsa_10;

public:
	inline static int32_t get_offset_of_store_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1041353003, ___store_5)); }
	inline KeyPairPersistence_t221302533 * get_store_5() const { return ___store_5; }
	inline KeyPairPersistence_t221302533 ** get_address_of_store_5() { return &___store_5; }
	inline void set_store_5(KeyPairPersistence_t221302533 * value)
	{
		___store_5 = value;
		Il2CppCodeGenWriteBarrier((&___store_5), value);
	}

	inline static int32_t get_offset_of_persistKey_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1041353003, ___persistKey_6)); }
	inline bool get_persistKey_6() const { return ___persistKey_6; }
	inline bool* get_address_of_persistKey_6() { return &___persistKey_6; }
	inline void set_persistKey_6(bool value)
	{
		___persistKey_6 = value;
	}

	inline static int32_t get_offset_of_persisted_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1041353003, ___persisted_7)); }
	inline bool get_persisted_7() const { return ___persisted_7; }
	inline bool* get_address_of_persisted_7() { return &___persisted_7; }
	inline void set_persisted_7(bool value)
	{
		___persisted_7 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1041353003, ___privateKeyExportable_8)); }
	inline bool get_privateKeyExportable_8() const { return ___privateKeyExportable_8; }
	inline bool* get_address_of_privateKeyExportable_8() { return &___privateKeyExportable_8; }
	inline void set_privateKeyExportable_8(bool value)
	{
		___privateKeyExportable_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1041353003, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_rsa_10() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1041353003, ___rsa_10)); }
	inline RSAManaged_t2728286059 * get_rsa_10() const { return ___rsa_10; }
	inline RSAManaged_t2728286059 ** get_address_of_rsa_10() { return &___rsa_10; }
	inline void set_rsa_10(RSAManaged_t2728286059 * value)
	{
		___rsa_10 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_10), value);
	}
};

struct RSACryptoServiceProvider_t1041353003_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_11;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_11() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t1041353003_StaticFields, ___s_UseMachineKeyStore_11)); }
	inline int32_t get_s_UseMachineKeyStore_11() const { return ___s_UseMachineKeyStore_11; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_11() { return &___s_UseMachineKeyStore_11; }
	inline void set_s_UseMachineKeyStore_11(int32_t value)
	{
		___s_UseMachineKeyStore_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T1041353003_H
#ifndef ISOLATEDSTORAGEPERMISSION_T3881024036_H
#define ISOLATEDSTORAGEPERMISSION_T3881024036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStoragePermission
struct  IsolatedStoragePermission_t3881024036  : public CodeAccessPermission_t1627142484
{
public:
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_userQuota
	int64_t ___m_userQuota_0;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_machineQuota
	int64_t ___m_machineQuota_1;
	// System.Int64 System.Security.Permissions.IsolatedStoragePermission::m_expirationDays
	int64_t ___m_expirationDays_2;
	// System.Boolean System.Security.Permissions.IsolatedStoragePermission::m_permanentData
	bool ___m_permanentData_3;
	// System.Security.Permissions.IsolatedStorageContainment System.Security.Permissions.IsolatedStoragePermission::m_allowed
	int32_t ___m_allowed_4;

public:
	inline static int32_t get_offset_of_m_userQuota_0() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t3881024036, ___m_userQuota_0)); }
	inline int64_t get_m_userQuota_0() const { return ___m_userQuota_0; }
	inline int64_t* get_address_of_m_userQuota_0() { return &___m_userQuota_0; }
	inline void set_m_userQuota_0(int64_t value)
	{
		___m_userQuota_0 = value;
	}

	inline static int32_t get_offset_of_m_machineQuota_1() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t3881024036, ___m_machineQuota_1)); }
	inline int64_t get_m_machineQuota_1() const { return ___m_machineQuota_1; }
	inline int64_t* get_address_of_m_machineQuota_1() { return &___m_machineQuota_1; }
	inline void set_m_machineQuota_1(int64_t value)
	{
		___m_machineQuota_1 = value;
	}

	inline static int32_t get_offset_of_m_expirationDays_2() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t3881024036, ___m_expirationDays_2)); }
	inline int64_t get_m_expirationDays_2() const { return ___m_expirationDays_2; }
	inline int64_t* get_address_of_m_expirationDays_2() { return &___m_expirationDays_2; }
	inline void set_m_expirationDays_2(int64_t value)
	{
		___m_expirationDays_2 = value;
	}

	inline static int32_t get_offset_of_m_permanentData_3() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t3881024036, ___m_permanentData_3)); }
	inline bool get_m_permanentData_3() const { return ___m_permanentData_3; }
	inline bool* get_address_of_m_permanentData_3() { return &___m_permanentData_3; }
	inline void set_m_permanentData_3(bool value)
	{
		___m_permanentData_3 = value;
	}

	inline static int32_t get_offset_of_m_allowed_4() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t3881024036, ___m_allowed_4)); }
	inline int32_t get_m_allowed_4() const { return ___m_allowed_4; }
	inline int32_t* get_address_of_m_allowed_4() { return &___m_allowed_4; }
	inline void set_m_allowed_4(int32_t value)
	{
		___m_allowed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEPERMISSION_T3881024036_H
#ifndef HMACMD5_T96299911_H
#define HMACMD5_T96299911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t96299911  : public HMAC_t1345195150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T96299911_H
#ifndef HMACRIPEMD160_T3045000289_H
#define HMACRIPEMD160_T3045000289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t3045000289  : public HMAC_t1345195150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T3045000289_H
#ifndef HMACSHA1_T3472975615_H
#define HMACSHA1_T3472975615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t3472975615  : public HMAC_t1345195150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T3472975615_H
#ifndef HMACSHA256_T1795448143_H
#define HMACSHA256_T1795448143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t1795448143  : public HMAC_t1345195150
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T1795448143_H
#ifndef KEYCONTAINERPERMISSION_T1746807911_H
#define KEYCONTAINERPERMISSION_T1746807911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t1746807911  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t2850665406 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of__accessEntries_0() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1746807911, ____accessEntries_0)); }
	inline KeyContainerPermissionAccessEntryCollection_t2850665406 * get__accessEntries_0() const { return ____accessEntries_0; }
	inline KeyContainerPermissionAccessEntryCollection_t2850665406 ** get_address_of__accessEntries_0() { return &____accessEntries_0; }
	inline void set__accessEntries_0(KeyContainerPermissionAccessEntryCollection_t2850665406 * value)
	{
		____accessEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&____accessEntries_0), value);
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1746807911, ____flags_1)); }
	inline int32_t get__flags_1() const { return ____flags_1; }
	inline int32_t* get_address_of__flags_1() { return &____flags_1; }
	inline void set__flags_1(int32_t value)
	{
		____flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSION_T1746807911_H
#ifndef REFLECTIONPERMISSION_T2612673498_H
#define REFLECTIONPERMISSION_T2612673498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermission
struct  ReflectionPermission_t2612673498  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(ReflectionPermission_t2612673498, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSION_T2612673498_H
#ifndef HOSTPROTECTIONPERMISSION_T3946306925_H
#define HOSTPROTECTIONPERMISSION_T3946306925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionPermission
struct  HostProtectionPermission_t3946306925  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.Permissions.HostProtectionPermission::_resources
	int32_t ____resources_0;

public:
	inline static int32_t get_offset_of__resources_0() { return static_cast<int32_t>(offsetof(HostProtectionPermission_t3946306925, ____resources_0)); }
	inline int32_t get__resources_0() const { return ____resources_0; }
	inline int32_t* get_address_of__resources_0() { return &____resources_0; }
	inline void set__resources_0(int32_t value)
	{
		____resources_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTPROTECTIONPERMISSION_T3946306925_H
#ifndef SECURITYATTRIBUTE_T4141158030_H
#define SECURITYATTRIBUTE_T4141158030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t4141158030  : public Attribute_t28087532
{
public:
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4141158030, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Unrestricted_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t4141158030, ___m_Unrestricted_1)); }
	inline bool get_m_Unrestricted_1() const { return ___m_Unrestricted_1; }
	inline bool* get_address_of_m_Unrestricted_1() { return &___m_Unrestricted_1; }
	inline void set_m_Unrestricted_1(bool value)
	{
		___m_Unrestricted_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T4141158030_H
#ifndef SYMMETRICALGORITHM_T710100505_H
#define SYMMETRICALGORITHM_T710100505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t710100505  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3632859112* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3632859112* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t2269462312* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2269462312* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___IVValue_2)); }
	inline ByteU5BU5D_t3632859112* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_t3632859112** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_t3632859112* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_2), value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___KeyValue_3)); }
	inline ByteU5BU5D_t3632859112* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3632859112** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3632859112* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t2269462312* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t2269462312** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t2269462312* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t2269462312* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t2269462312** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t2269462312* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t710100505, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T710100505_H
#ifndef FILEIOPERMISSION_T2475603725_H
#define FILEIOPERMISSION_T2475603725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermission
struct  FileIOPermission_t2475603725  : public CodeAccessPermission_t1627142484
{
public:
	// System.Boolean System.Security.Permissions.FileIOPermission::m_Unrestricted
	bool ___m_Unrestricted_2;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllFilesAccess
	int32_t ___m_AllFilesAccess_3;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllLocalFilesAccess
	int32_t ___m_AllLocalFilesAccess_4;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::readList
	ArrayList_t1409763451 * ___readList_5;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::writeList
	ArrayList_t1409763451 * ___writeList_6;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::appendList
	ArrayList_t1409763451 * ___appendList_7;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::pathList
	ArrayList_t1409763451 * ___pathList_8;

public:
	inline static int32_t get_offset_of_m_Unrestricted_2() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725, ___m_Unrestricted_2)); }
	inline bool get_m_Unrestricted_2() const { return ___m_Unrestricted_2; }
	inline bool* get_address_of_m_Unrestricted_2() { return &___m_Unrestricted_2; }
	inline void set_m_Unrestricted_2(bool value)
	{
		___m_Unrestricted_2 = value;
	}

	inline static int32_t get_offset_of_m_AllFilesAccess_3() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725, ___m_AllFilesAccess_3)); }
	inline int32_t get_m_AllFilesAccess_3() const { return ___m_AllFilesAccess_3; }
	inline int32_t* get_address_of_m_AllFilesAccess_3() { return &___m_AllFilesAccess_3; }
	inline void set_m_AllFilesAccess_3(int32_t value)
	{
		___m_AllFilesAccess_3 = value;
	}

	inline static int32_t get_offset_of_m_AllLocalFilesAccess_4() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725, ___m_AllLocalFilesAccess_4)); }
	inline int32_t get_m_AllLocalFilesAccess_4() const { return ___m_AllLocalFilesAccess_4; }
	inline int32_t* get_address_of_m_AllLocalFilesAccess_4() { return &___m_AllLocalFilesAccess_4; }
	inline void set_m_AllLocalFilesAccess_4(int32_t value)
	{
		___m_AllLocalFilesAccess_4 = value;
	}

	inline static int32_t get_offset_of_readList_5() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725, ___readList_5)); }
	inline ArrayList_t1409763451 * get_readList_5() const { return ___readList_5; }
	inline ArrayList_t1409763451 ** get_address_of_readList_5() { return &___readList_5; }
	inline void set_readList_5(ArrayList_t1409763451 * value)
	{
		___readList_5 = value;
		Il2CppCodeGenWriteBarrier((&___readList_5), value);
	}

	inline static int32_t get_offset_of_writeList_6() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725, ___writeList_6)); }
	inline ArrayList_t1409763451 * get_writeList_6() const { return ___writeList_6; }
	inline ArrayList_t1409763451 ** get_address_of_writeList_6() { return &___writeList_6; }
	inline void set_writeList_6(ArrayList_t1409763451 * value)
	{
		___writeList_6 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_6), value);
	}

	inline static int32_t get_offset_of_appendList_7() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725, ___appendList_7)); }
	inline ArrayList_t1409763451 * get_appendList_7() const { return ___appendList_7; }
	inline ArrayList_t1409763451 ** get_address_of_appendList_7() { return &___appendList_7; }
	inline void set_appendList_7(ArrayList_t1409763451 * value)
	{
		___appendList_7 = value;
		Il2CppCodeGenWriteBarrier((&___appendList_7), value);
	}

	inline static int32_t get_offset_of_pathList_8() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725, ___pathList_8)); }
	inline ArrayList_t1409763451 * get_pathList_8() const { return ___pathList_8; }
	inline ArrayList_t1409763451 ** get_address_of_pathList_8() { return &___pathList_8; }
	inline void set_pathList_8(ArrayList_t1409763451 * value)
	{
		___pathList_8 = value;
		Il2CppCodeGenWriteBarrier((&___pathList_8), value);
	}
};

struct FileIOPermission_t2475603725_StaticFields
{
public:
	// System.Char[] System.Security.Permissions.FileIOPermission::BadPathNameCharacters
	CharU5BU5D_t1313538844* ___BadPathNameCharacters_0;
	// System.Char[] System.Security.Permissions.FileIOPermission::BadFileNameCharacters
	CharU5BU5D_t1313538844* ___BadFileNameCharacters_1;

public:
	inline static int32_t get_offset_of_BadPathNameCharacters_0() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725_StaticFields, ___BadPathNameCharacters_0)); }
	inline CharU5BU5D_t1313538844* get_BadPathNameCharacters_0() const { return ___BadPathNameCharacters_0; }
	inline CharU5BU5D_t1313538844** get_address_of_BadPathNameCharacters_0() { return &___BadPathNameCharacters_0; }
	inline void set_BadPathNameCharacters_0(CharU5BU5D_t1313538844* value)
	{
		___BadPathNameCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((&___BadPathNameCharacters_0), value);
	}

	inline static int32_t get_offset_of_BadFileNameCharacters_1() { return static_cast<int32_t>(offsetof(FileIOPermission_t2475603725_StaticFields, ___BadFileNameCharacters_1)); }
	inline CharU5BU5D_t1313538844* get_BadFileNameCharacters_1() const { return ___BadFileNameCharacters_1; }
	inline CharU5BU5D_t1313538844** get_address_of_BadFileNameCharacters_1() { return &___BadFileNameCharacters_1; }
	inline void set_BadFileNameCharacters_1(CharU5BU5D_t1313538844* value)
	{
		___BadFileNameCharacters_1 = value;
		Il2CppCodeGenWriteBarrier((&___BadFileNameCharacters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEIOPERMISSION_T2475603725_H
#ifndef U3CREADASYNCINTERNALU3ED__34_T3445764231_H
#define U3CREADASYNCINTERNALU3ED__34_T3445764231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34
struct  U3CReadAsyncInternalU3Ed__34_t3445764231 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>t__builder
	AsyncTaskMethodBuilder_1_t1559004410  ___U3CU3Et__builder_1;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>4__this
	CryptoStream_t3287244731 * ___U3CU3E4__this_2;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::count
	int32_t ___count_3;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::offset
	int32_t ___offset_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::buffer
	ByteU5BU5D_t3632859112* ___buffer_5;
	// System.Threading.CancellationToken System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::cancellationToken
	CancellationToken_t2088174702  ___cancellationToken_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<tempInputBuffer>5__1
	ByteU5BU5D_t3632859112* ___U3CtempInputBufferU3E5__1_7;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<currentOutputIndex>5__2
	int32_t ___U3CcurrentOutputIndexU3E5__2_8;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<bytesToDeliver>5__3
	int32_t ___U3CbytesToDeliverU3E5__3_9;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<sem>5__4
	SemaphoreSlim_t2300956193 * ___U3CsemU3E5__4_10;
	// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__1
	HopToThreadPoolAwaitable_t2000679059  ___U3CU3Eu__1_11;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__2
	ConfiguredTaskAwaiter_t1429468025  ___U3CU3Eu__2_12;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>7__wrap1
	int32_t ___U3CU3E7__wrap1_13;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__3
	ConfiguredTaskAwaiter_t3740743478  ___U3CU3Eu__3_14;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t1559004410  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t1559004410 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t1559004410  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CU3E4__this_2)); }
	inline CryptoStream_t3287244731 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CryptoStream_t3287244731 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CryptoStream_t3287244731 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___buffer_5)); }
	inline ByteU5BU5D_t3632859112* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t3632859112** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t3632859112* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___cancellationToken_6)); }
	inline CancellationToken_t2088174702  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t2088174702 * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t2088174702  value)
	{
		___cancellationToken_6 = value;
	}

	inline static int32_t get_offset_of_U3CtempInputBufferU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CtempInputBufferU3E5__1_7)); }
	inline ByteU5BU5D_t3632859112* get_U3CtempInputBufferU3E5__1_7() const { return ___U3CtempInputBufferU3E5__1_7; }
	inline ByteU5BU5D_t3632859112** get_address_of_U3CtempInputBufferU3E5__1_7() { return &___U3CtempInputBufferU3E5__1_7; }
	inline void set_U3CtempInputBufferU3E5__1_7(ByteU5BU5D_t3632859112* value)
	{
		___U3CtempInputBufferU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtempInputBufferU3E5__1_7), value);
	}

	inline static int32_t get_offset_of_U3CcurrentOutputIndexU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CcurrentOutputIndexU3E5__2_8)); }
	inline int32_t get_U3CcurrentOutputIndexU3E5__2_8() const { return ___U3CcurrentOutputIndexU3E5__2_8; }
	inline int32_t* get_address_of_U3CcurrentOutputIndexU3E5__2_8() { return &___U3CcurrentOutputIndexU3E5__2_8; }
	inline void set_U3CcurrentOutputIndexU3E5__2_8(int32_t value)
	{
		___U3CcurrentOutputIndexU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CbytesToDeliverU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CbytesToDeliverU3E5__3_9)); }
	inline int32_t get_U3CbytesToDeliverU3E5__3_9() const { return ___U3CbytesToDeliverU3E5__3_9; }
	inline int32_t* get_address_of_U3CbytesToDeliverU3E5__3_9() { return &___U3CbytesToDeliverU3E5__3_9; }
	inline void set_U3CbytesToDeliverU3E5__3_9(int32_t value)
	{
		___U3CbytesToDeliverU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CsemU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CsemU3E5__4_10)); }
	inline SemaphoreSlim_t2300956193 * get_U3CsemU3E5__4_10() const { return ___U3CsemU3E5__4_10; }
	inline SemaphoreSlim_t2300956193 ** get_address_of_U3CsemU3E5__4_10() { return &___U3CsemU3E5__4_10; }
	inline void set_U3CsemU3E5__4_10(SemaphoreSlim_t2300956193 * value)
	{
		___U3CsemU3E5__4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsemU3E5__4_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CU3Eu__1_11)); }
	inline HopToThreadPoolAwaitable_t2000679059  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline HopToThreadPoolAwaitable_t2000679059 * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(HopToThreadPoolAwaitable_t2000679059  value)
	{
		___U3CU3Eu__1_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_12() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CU3Eu__2_12)); }
	inline ConfiguredTaskAwaiter_t1429468025  get_U3CU3Eu__2_12() const { return ___U3CU3Eu__2_12; }
	inline ConfiguredTaskAwaiter_t1429468025 * get_address_of_U3CU3Eu__2_12() { return &___U3CU3Eu__2_12; }
	inline void set_U3CU3Eu__2_12(ConfiguredTaskAwaiter_t1429468025  value)
	{
		___U3CU3Eu__2_12 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_13() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CU3E7__wrap1_13)); }
	inline int32_t get_U3CU3E7__wrap1_13() const { return ___U3CU3E7__wrap1_13; }
	inline int32_t* get_address_of_U3CU3E7__wrap1_13() { return &___U3CU3E7__wrap1_13; }
	inline void set_U3CU3E7__wrap1_13(int32_t value)
	{
		___U3CU3E7__wrap1_13 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_14() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t3445764231, ___U3CU3Eu__3_14)); }
	inline ConfiguredTaskAwaiter_t3740743478  get_U3CU3Eu__3_14() const { return ___U3CU3Eu__3_14; }
	inline ConfiguredTaskAwaiter_t3740743478 * get_address_of_U3CU3Eu__3_14() { return &___U3CU3Eu__3_14; }
	inline void set_U3CU3Eu__3_14(ConfiguredTaskAwaiter_t3740743478  value)
	{
		___U3CU3Eu__3_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREADASYNCINTERNALU3ED__34_T3445764231_H
#ifndef SECURITYPERMISSION_T205990734_H
#define SECURITYPERMISSION_T205990734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t205990734  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t205990734, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T205990734_H
#ifndef CRYPTOSTREAM_T3287244731_H
#define CRYPTOSTREAM_T3287244731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t3287244731  : public Stream_t3120643226
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t3120643226 * ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_Transform
	RuntimeObject* ____Transform_5;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_InputBuffer
	ByteU5BU5D_t3632859112* ____InputBuffer_6;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBufferIndex
	int32_t ____InputBufferIndex_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBlockSize
	int32_t ____InputBlockSize_8;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_OutputBuffer
	ByteU5BU5D_t3632859112* ____OutputBuffer_9;
	// System.Int32 System.Security.Cryptography.CryptoStream::_OutputBufferIndex
	int32_t ____OutputBufferIndex_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_OutputBlockSize
	int32_t ____OutputBlockSize_11;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;

public:
	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____stream_4)); }
	inline Stream_t3120643226 * get__stream_4() const { return ____stream_4; }
	inline Stream_t3120643226 ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t3120643226 * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((&____stream_4), value);
	}

	inline static int32_t get_offset_of__Transform_5() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____Transform_5)); }
	inline RuntimeObject* get__Transform_5() const { return ____Transform_5; }
	inline RuntimeObject** get_address_of__Transform_5() { return &____Transform_5; }
	inline void set__Transform_5(RuntimeObject* value)
	{
		____Transform_5 = value;
		Il2CppCodeGenWriteBarrier((&____Transform_5), value);
	}

	inline static int32_t get_offset_of__InputBuffer_6() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____InputBuffer_6)); }
	inline ByteU5BU5D_t3632859112* get__InputBuffer_6() const { return ____InputBuffer_6; }
	inline ByteU5BU5D_t3632859112** get_address_of__InputBuffer_6() { return &____InputBuffer_6; }
	inline void set__InputBuffer_6(ByteU5BU5D_t3632859112* value)
	{
		____InputBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____InputBuffer_6), value);
	}

	inline static int32_t get_offset_of__InputBufferIndex_7() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____InputBufferIndex_7)); }
	inline int32_t get__InputBufferIndex_7() const { return ____InputBufferIndex_7; }
	inline int32_t* get_address_of__InputBufferIndex_7() { return &____InputBufferIndex_7; }
	inline void set__InputBufferIndex_7(int32_t value)
	{
		____InputBufferIndex_7 = value;
	}

	inline static int32_t get_offset_of__InputBlockSize_8() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____InputBlockSize_8)); }
	inline int32_t get__InputBlockSize_8() const { return ____InputBlockSize_8; }
	inline int32_t* get_address_of__InputBlockSize_8() { return &____InputBlockSize_8; }
	inline void set__InputBlockSize_8(int32_t value)
	{
		____InputBlockSize_8 = value;
	}

	inline static int32_t get_offset_of__OutputBuffer_9() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____OutputBuffer_9)); }
	inline ByteU5BU5D_t3632859112* get__OutputBuffer_9() const { return ____OutputBuffer_9; }
	inline ByteU5BU5D_t3632859112** get_address_of__OutputBuffer_9() { return &____OutputBuffer_9; }
	inline void set__OutputBuffer_9(ByteU5BU5D_t3632859112* value)
	{
		____OutputBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&____OutputBuffer_9), value);
	}

	inline static int32_t get_offset_of__OutputBufferIndex_10() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____OutputBufferIndex_10)); }
	inline int32_t get__OutputBufferIndex_10() const { return ____OutputBufferIndex_10; }
	inline int32_t* get_address_of__OutputBufferIndex_10() { return &____OutputBufferIndex_10; }
	inline void set__OutputBufferIndex_10(int32_t value)
	{
		____OutputBufferIndex_10 = value;
	}

	inline static int32_t get_offset_of__OutputBlockSize_11() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____OutputBlockSize_11)); }
	inline int32_t get__OutputBlockSize_11() const { return ____OutputBlockSize_11; }
	inline int32_t* get_address_of__OutputBlockSize_11() { return &____OutputBlockSize_11; }
	inline void set__OutputBlockSize_11(int32_t value)
	{
		____OutputBlockSize_11 = value;
	}

	inline static int32_t get_offset_of__transformMode_12() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____transformMode_12)); }
	inline int32_t get__transformMode_12() const { return ____transformMode_12; }
	inline int32_t* get_address_of__transformMode_12() { return &____transformMode_12; }
	inline void set__transformMode_12(int32_t value)
	{
		____transformMode_12 = value;
	}

	inline static int32_t get_offset_of__canRead_13() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____canRead_13)); }
	inline bool get__canRead_13() const { return ____canRead_13; }
	inline bool* get_address_of__canRead_13() { return &____canRead_13; }
	inline void set__canRead_13(bool value)
	{
		____canRead_13 = value;
	}

	inline static int32_t get_offset_of__canWrite_14() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____canWrite_14)); }
	inline bool get__canWrite_14() const { return ____canWrite_14; }
	inline bool* get_address_of__canWrite_14() { return &____canWrite_14; }
	inline void set__canWrite_14(bool value)
	{
		____canWrite_14 = value;
	}

	inline static int32_t get_offset_of__finalBlockTransformed_15() { return static_cast<int32_t>(offsetof(CryptoStream_t3287244731, ____finalBlockTransformed_15)); }
	inline bool get__finalBlockTransformed_15() const { return ____finalBlockTransformed_15; }
	inline bool* get_address_of__finalBlockTransformed_15() { return &____finalBlockTransformed_15; }
	inline void set__finalBlockTransformed_15(bool value)
	{
		____finalBlockTransformed_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOSTREAM_T3287244731_H
#ifndef FILEDIALOGPERMISSION_T1478637547_H
#define FILEDIALOGPERMISSION_T1478637547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermission
struct  FileDialogPermission_t1478637547  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.FileDialogPermissionAccess System.Security.Permissions.FileDialogPermission::_access
	int32_t ____access_0;

public:
	inline static int32_t get_offset_of__access_0() { return static_cast<int32_t>(offsetof(FileDialogPermission_t1478637547, ____access_0)); }
	inline int32_t get__access_0() const { return ____access_0; }
	inline int32_t* get_address_of__access_0() { return &____access_0; }
	inline void set__access_0(int32_t value)
	{
		____access_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEDIALOGPERMISSION_T1478637547_H
#ifndef STRONGNAMEIDENTITYPERMISSION_T543251460_H
#define STRONGNAMEIDENTITYPERMISSION_T543251460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t543251460  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t1409763451 * ____list_2;

public:
	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t543251460, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t543251460, ____list_2)); }
	inline ArrayList_t1409763451 * get__list_2() const { return ____list_2; }
	inline ArrayList_t1409763451 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t1409763451 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((&____list_2), value);
	}
};

struct StrongNameIdentityPermission_t543251460_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t1375298617 * ___defaultVersion_0;

public:
	inline static int32_t get_offset_of_defaultVersion_0() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t543251460_StaticFields, ___defaultVersion_0)); }
	inline Version_t1375298617 * get_defaultVersion_0() const { return ___defaultVersion_0; }
	inline Version_t1375298617 ** get_address_of_defaultVersion_0() { return &___defaultVersion_0; }
	inline void set_defaultVersion_0(Version_t1375298617 * value)
	{
		___defaultVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSION_T543251460_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T1006436623_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T1006436623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t1006436623  : public CryptographicException_t1554430912
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T1006436623_H
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
#ifndef UIPERMISSION_T67502870_H
#define UIPERMISSION_T67502870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermission
struct  UIPermission_t67502870  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_0;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_1;

public:
	inline static int32_t get_offset_of__window_0() { return static_cast<int32_t>(offsetof(UIPermission_t67502870, ____window_0)); }
	inline int32_t get__window_0() const { return ____window_0; }
	inline int32_t* get_address_of__window_0() { return &____window_0; }
	inline void set__window_0(int32_t value)
	{
		____window_0 = value;
	}

	inline static int32_t get_offset_of__clipboard_1() { return static_cast<int32_t>(offsetof(UIPermission_t67502870, ____clipboard_1)); }
	inline int32_t get__clipboard_1() const { return ____clipboard_1; }
	inline int32_t* get_address_of__clipboard_1() { return &____clipboard_1; }
	inline void set__clipboard_1(int32_t value)
	{
		____clipboard_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPERMISSION_T67502870_H
#ifndef FROMBASE64TRANSFORM_T392028262_H
#define FROMBASE64TRANSFORM_T392028262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64Transform
struct  FromBase64Transform_t392028262  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::_inputBuffer
	ByteU5BU5D_t3632859112* ____inputBuffer_0;
	// System.Int32 System.Security.Cryptography.FromBase64Transform::_inputIndex
	int32_t ____inputIndex_1;
	// System.Security.Cryptography.FromBase64TransformMode System.Security.Cryptography.FromBase64Transform::_whitespaces
	int32_t ____whitespaces_2;

public:
	inline static int32_t get_offset_of__inputBuffer_0() { return static_cast<int32_t>(offsetof(FromBase64Transform_t392028262, ____inputBuffer_0)); }
	inline ByteU5BU5D_t3632859112* get__inputBuffer_0() const { return ____inputBuffer_0; }
	inline ByteU5BU5D_t3632859112** get_address_of__inputBuffer_0() { return &____inputBuffer_0; }
	inline void set__inputBuffer_0(ByteU5BU5D_t3632859112* value)
	{
		____inputBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&____inputBuffer_0), value);
	}

	inline static int32_t get_offset_of__inputIndex_1() { return static_cast<int32_t>(offsetof(FromBase64Transform_t392028262, ____inputIndex_1)); }
	inline int32_t get__inputIndex_1() const { return ____inputIndex_1; }
	inline int32_t* get_address_of__inputIndex_1() { return &____inputIndex_1; }
	inline void set__inputIndex_1(int32_t value)
	{
		____inputIndex_1 = value;
	}

	inline static int32_t get_offset_of__whitespaces_2() { return static_cast<int32_t>(offsetof(FromBase64Transform_t392028262, ____whitespaces_2)); }
	inline int32_t get__whitespaces_2() const { return ____whitespaces_2; }
	inline int32_t* get_address_of__whitespaces_2() { return &____whitespaces_2; }
	inline void set__whitespaces_2(int32_t value)
	{
		____whitespaces_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMBASE64TRANSFORM_T392028262_H
#ifndef ZONEIDENTITYPERMISSION_T141264713_H
#define ZONEIDENTITYPERMISSION_T141264713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermission
struct  ZoneIdentityPermission_t141264713  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermission::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(ZoneIdentityPermission_t141264713, ___zone_0)); }
	inline int32_t get_zone_0() const { return ___zone_0; }
	inline int32_t* get_address_of_zone_0() { return &___zone_0; }
	inline void set_zone_0(int32_t value)
	{
		___zone_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEIDENTITYPERMISSION_T141264713_H
#ifndef ENVIRONMENTPERMISSION_T3999123367_H
#define ENVIRONMENTPERMISSION_T3999123367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermission
struct  EnvironmentPermission_t3999123367  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.EnvironmentPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::readList
	ArrayList_t1409763451 * ___readList_1;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::writeList
	ArrayList_t1409763451 * ___writeList_2;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t3999123367, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_readList_1() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t3999123367, ___readList_1)); }
	inline ArrayList_t1409763451 * get_readList_1() const { return ___readList_1; }
	inline ArrayList_t1409763451 ** get_address_of_readList_1() { return &___readList_1; }
	inline void set_readList_1(ArrayList_t1409763451 * value)
	{
		___readList_1 = value;
		Il2CppCodeGenWriteBarrier((&___readList_1), value);
	}

	inline static int32_t get_offset_of_writeList_2() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t3999123367, ___writeList_2)); }
	inline ArrayList_t1409763451 * get_writeList_2() const { return ___writeList_2; }
	inline ArrayList_t1409763451 ** get_address_of_writeList_2() { return &___writeList_2; }
	inline void set_writeList_2(ArrayList_t1409763451 * value)
	{
		___writeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTPERMISSION_T3999123367_H
#ifndef REGISTRYPERMISSION_T4157048561_H
#define REGISTRYPERMISSION_T4157048561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t4157048561  : public CodeAccessPermission_t1627142484
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t1409763451 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t1409763451 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t1409763451 * ___writeList_3;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(RegistryPermission_t4157048561, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_createList_1() { return static_cast<int32_t>(offsetof(RegistryPermission_t4157048561, ___createList_1)); }
	inline ArrayList_t1409763451 * get_createList_1() const { return ___createList_1; }
	inline ArrayList_t1409763451 ** get_address_of_createList_1() { return &___createList_1; }
	inline void set_createList_1(ArrayList_t1409763451 * value)
	{
		___createList_1 = value;
		Il2CppCodeGenWriteBarrier((&___createList_1), value);
	}

	inline static int32_t get_offset_of_readList_2() { return static_cast<int32_t>(offsetof(RegistryPermission_t4157048561, ___readList_2)); }
	inline ArrayList_t1409763451 * get_readList_2() const { return ___readList_2; }
	inline ArrayList_t1409763451 ** get_address_of_readList_2() { return &___readList_2; }
	inline void set_readList_2(ArrayList_t1409763451 * value)
	{
		___readList_2 = value;
		Il2CppCodeGenWriteBarrier((&___readList_2), value);
	}

	inline static int32_t get_offset_of_writeList_3() { return static_cast<int32_t>(offsetof(RegistryPermission_t4157048561, ___writeList_3)); }
	inline ArrayList_t1409763451 * get_writeList_3() const { return ___writeList_3; }
	inline ArrayList_t1409763451 ** get_address_of_writeList_3() { return &___writeList_3; }
	inline void set_writeList_3(ArrayList_t1409763451 * value)
	{
		___writeList_3 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSION_T4157048561_H
#ifndef ZONEMEMBERSHIPCONDITION_T1292333696_H
#define ZONEMEMBERSHIPCONDITION_T1292333696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ZoneMembershipCondition
struct  ZoneMembershipCondition_t1292333696  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Policy.ZoneMembershipCondition::version
	int32_t ___version_0;
	// System.Security.SecurityZone System.Security.Policy.ZoneMembershipCondition::zone
	int32_t ___zone_1;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t1292333696, ___version_0)); }
	inline int32_t get_version_0() const { return ___version_0; }
	inline int32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(int32_t value)
	{
		___version_0 = value;
	}

	inline static int32_t get_offset_of_zone_1() { return static_cast<int32_t>(offsetof(ZoneMembershipCondition_t1292333696, ___zone_1)); }
	inline int32_t get_zone_1() const { return ___zone_1; }
	inline int32_t* get_address_of_zone_1() { return &___zone_1; }
	inline void set_zone_1(int32_t value)
	{
		___zone_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZONEMEMBERSHIPCONDITION_T1292333696_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T2690346022_H
#define CODEACCESSSECURITYATTRIBUTE_T2690346022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t2690346022  : public SecurityAttribute_t4141158030
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T2690346022_H
#ifndef TRIPLEDESTRANSFORM_T343054294_H
#define TRIPLEDESTRANSFORM_T343054294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t343054294  : public SymmetricTransform_t2678564917
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t1135698164 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t1135698164 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t1135698164 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t1135698164 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t1135698164 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t1135698164 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t343054294, ___E1_12)); }
	inline DESTransform_t1135698164 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t1135698164 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t1135698164 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t343054294, ___D2_13)); }
	inline DESTransform_t1135698164 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t1135698164 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t1135698164 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t343054294, ___E3_14)); }
	inline DESTransform_t1135698164 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t1135698164 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t1135698164 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t343054294, ___D1_15)); }
	inline DESTransform_t1135698164 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t1135698164 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t1135698164 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t343054294, ___E2_16)); }
	inline DESTransform_t1135698164 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t1135698164 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t1135698164 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t343054294, ___D3_17)); }
	inline DESTransform_t1135698164 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t1135698164 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t1135698164 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T343054294_H
#ifndef DES_T2665883866_H
#define DES_T2665883866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t2665883866  : public SymmetricAlgorithm_t710100505
{
public:

public:
};

struct DES_t2665883866_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.DES::s_legalBlockSizes
	KeySizesU5BU5D_t2269462312* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.DES::s_legalKeySizes
	KeySizesU5BU5D_t2269462312* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(DES_t2665883866_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t2269462312* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t2269462312** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t2269462312* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(DES_t2665883866_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t2269462312* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t2269462312** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t2269462312* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T2665883866_H
#ifndef U3CWRITEASYNCINTERNALU3ED__37_T1686986986_H
#define U3CWRITEASYNCINTERNALU3ED__37_T1686986986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37
struct  U3CWriteAsyncInternalU3Ed__37_t1686986986 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>t__builder
	AsyncTaskMethodBuilder_t2061377360  ___U3CU3Et__builder_1;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>4__this
	CryptoStream_t3287244731 * ___U3CU3E4__this_2;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::count
	int32_t ___count_3;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::offset
	int32_t ___offset_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::buffer
	ByteU5BU5D_t3632859112* ___buffer_5;
	// System.Threading.CancellationToken System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::cancellationToken
	CancellationToken_t2088174702  ___cancellationToken_6;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<bytesToWrite>5__1
	int32_t ___U3CbytesToWriteU3E5__1_7;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<currentInputIndex>5__2
	int32_t ___U3CcurrentInputIndexU3E5__2_8;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<numWholeBlocksInBytes>5__3
	int32_t ___U3CnumWholeBlocksInBytesU3E5__3_9;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<sem>5__4
	SemaphoreSlim_t2300956193 * ___U3CsemU3E5__4_10;
	// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>u__1
	HopToThreadPoolAwaitable_t2000679059  ___U3CU3Eu__1_11;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>u__2
	ConfiguredTaskAwaiter_t1429468025  ___U3CU3Eu__2_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t2061377360  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t2061377360 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t2061377360  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CU3E4__this_2)); }
	inline CryptoStream_t3287244731 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CryptoStream_t3287244731 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CryptoStream_t3287244731 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___buffer_5)); }
	inline ByteU5BU5D_t3632859112* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t3632859112** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t3632859112* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___cancellationToken_6)); }
	inline CancellationToken_t2088174702  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t2088174702 * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t2088174702  value)
	{
		___cancellationToken_6 = value;
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CbytesToWriteU3E5__1_7)); }
	inline int32_t get_U3CbytesToWriteU3E5__1_7() const { return ___U3CbytesToWriteU3E5__1_7; }
	inline int32_t* get_address_of_U3CbytesToWriteU3E5__1_7() { return &___U3CbytesToWriteU3E5__1_7; }
	inline void set_U3CbytesToWriteU3E5__1_7(int32_t value)
	{
		___U3CbytesToWriteU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentInputIndexU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CcurrentInputIndexU3E5__2_8)); }
	inline int32_t get_U3CcurrentInputIndexU3E5__2_8() const { return ___U3CcurrentInputIndexU3E5__2_8; }
	inline int32_t* get_address_of_U3CcurrentInputIndexU3E5__2_8() { return &___U3CcurrentInputIndexU3E5__2_8; }
	inline void set_U3CcurrentInputIndexU3E5__2_8(int32_t value)
	{
		___U3CcurrentInputIndexU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CnumWholeBlocksInBytesU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CnumWholeBlocksInBytesU3E5__3_9)); }
	inline int32_t get_U3CnumWholeBlocksInBytesU3E5__3_9() const { return ___U3CnumWholeBlocksInBytesU3E5__3_9; }
	inline int32_t* get_address_of_U3CnumWholeBlocksInBytesU3E5__3_9() { return &___U3CnumWholeBlocksInBytesU3E5__3_9; }
	inline void set_U3CnumWholeBlocksInBytesU3E5__3_9(int32_t value)
	{
		___U3CnumWholeBlocksInBytesU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CsemU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CsemU3E5__4_10)); }
	inline SemaphoreSlim_t2300956193 * get_U3CsemU3E5__4_10() const { return ___U3CsemU3E5__4_10; }
	inline SemaphoreSlim_t2300956193 ** get_address_of_U3CsemU3E5__4_10() { return &___U3CsemU3E5__4_10; }
	inline void set_U3CsemU3E5__4_10(SemaphoreSlim_t2300956193 * value)
	{
		___U3CsemU3E5__4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsemU3E5__4_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CU3Eu__1_11)); }
	inline HopToThreadPoolAwaitable_t2000679059  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline HopToThreadPoolAwaitable_t2000679059 * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(HopToThreadPoolAwaitable_t2000679059  value)
	{
		___U3CU3Eu__1_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_12() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t1686986986, ___U3CU3Eu__2_12)); }
	inline ConfiguredTaskAwaiter_t1429468025  get_U3CU3Eu__2_12() const { return ___U3CU3Eu__2_12; }
	inline ConfiguredTaskAwaiter_t1429468025 * get_address_of_U3CU3Eu__2_12() { return &___U3CU3Eu__2_12; }
	inline void set_U3CU3Eu__2_12(ConfiguredTaskAwaiter_t1429468025  value)
	{
		___U3CU3Eu__2_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWRITEASYNCINTERNALU3ED__37_T1686986986_H
#ifndef DESTRANSFORM_T1135698164_H
#define DESTRANSFORM_T1135698164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t1135698164  : public SymmetricTransform_t2678564917
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t3632859112* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t3632859112* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t1965307802* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164, ___keySchedule_16)); }
	inline ByteU5BU5D_t3632859112* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t3632859112** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t3632859112* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164, ___byteBuff_17)); }
	inline ByteU5BU5D_t3632859112* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t3632859112** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t3632859112* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t1965307802* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t1965307802** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t1965307802* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t1135698164_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t1965307802* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t3632859112* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t3632859112* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t3632859112* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t1965307802* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t1965307802* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t1965307802* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t1965307802** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t1965307802* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t3632859112* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t3632859112** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t3632859112* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t3632859112* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t3632859112** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t3632859112* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t3632859112* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t3632859112** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t3632859112* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t1965307802* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t1965307802** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t1965307802* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t1135698164_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t1965307802* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t1965307802** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t1965307802* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T1135698164_H
#ifndef RC2TRANSFORM_T3698070532_H
#define RC2TRANSFORM_T3698070532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t3698070532  : public SymmetricTransform_t2678564917
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t3291570429* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t3698070532, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t3698070532, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t3698070532, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t3698070532, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t3698070532, ___K_16)); }
	inline UInt16U5BU5D_t3291570429* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t3291570429** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t3291570429* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t3698070532, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t3698070532_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t3632859112* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t3698070532_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t3632859112* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t3632859112** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t3632859112* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T3698070532_H
#ifndef AES_T3433973113_H
#define AES_T3433973113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t3433973113  : public SymmetricAlgorithm_t710100505
{
public:

public:
};

struct Aes_t3433973113_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_t2269462312* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_t2269462312* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_t3433973113_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t2269462312* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t2269462312** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t2269462312* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_t3433973113_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t2269462312* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t2269462312** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t2269462312* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T3433973113_H
#ifndef ISOLATEDSTORAGEFILEPERMISSION_T3223922075_H
#define ISOLATEDSTORAGEFILEPERMISSION_T3223922075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageFilePermission
struct  IsolatedStorageFilePermission_t3223922075  : public IsolatedStoragePermission_t3881024036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEFILEPERMISSION_T3223922075_H
#ifndef PERMISSIONSETATTRIBUTE_T3376653580_H
#define PERMISSIONSETATTRIBUTE_T3376653580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionSetAttribute
struct  PermissionSetAttribute_t3376653580  : public CodeAccessSecurityAttribute_t2690346022
{
public:
	// System.String System.Security.Permissions.PermissionSetAttribute::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(PermissionSetAttribute_t3376653580, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSETATTRIBUTE_T3376653580_H
#ifndef HOSTPROTECTIONATTRIBUTE_T3288063201_H
#define HOSTPROTECTIONATTRIBUTE_T3288063201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionAttribute
struct  HostProtectionAttribute_t3288063201  : public CodeAccessSecurityAttribute_t2690346022
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.Permissions.HostProtectionAttribute::_resources
	int32_t ____resources_2;

public:
	inline static int32_t get_offset_of__resources_2() { return static_cast<int32_t>(offsetof(HostProtectionAttribute_t3288063201, ____resources_2)); }
	inline int32_t get__resources_2() const { return ____resources_2; }
	inline int32_t* get_address_of__resources_2() { return &____resources_2; }
	inline void set__resources_2(int32_t value)
	{
		____resources_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTPROTECTIONATTRIBUTE_T3288063201_H
#ifndef REGISTRYPERMISSIONATTRIBUTE_T76398118_H
#define REGISTRYPERMISSIONATTRIBUTE_T76398118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAttribute
struct  RegistryPermissionAttribute_t76398118  : public CodeAccessSecurityAttribute_t2690346022
{
public:
	// System.String System.Security.Permissions.RegistryPermissionAttribute::create
	String_t* ___create_2;
	// System.String System.Security.Permissions.RegistryPermissionAttribute::read
	String_t* ___read_3;
	// System.String System.Security.Permissions.RegistryPermissionAttribute::write
	String_t* ___write_4;

public:
	inline static int32_t get_offset_of_create_2() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t76398118, ___create_2)); }
	inline String_t* get_create_2() const { return ___create_2; }
	inline String_t** get_address_of_create_2() { return &___create_2; }
	inline void set_create_2(String_t* value)
	{
		___create_2 = value;
		Il2CppCodeGenWriteBarrier((&___create_2), value);
	}

	inline static int32_t get_offset_of_read_3() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t76398118, ___read_3)); }
	inline String_t* get_read_3() const { return ___read_3; }
	inline String_t** get_address_of_read_3() { return &___read_3; }
	inline void set_read_3(String_t* value)
	{
		___read_3 = value;
		Il2CppCodeGenWriteBarrier((&___read_3), value);
	}

	inline static int32_t get_offset_of_write_4() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t76398118, ___write_4)); }
	inline String_t* get_write_4() const { return ___write_4; }
	inline String_t** get_address_of_write_4() { return &___write_4; }
	inline void set_write_4(String_t* value)
	{
		___write_4 = value;
		Il2CppCodeGenWriteBarrier((&___write_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSIONATTRIBUTE_T76398118_H
#ifndef FILEIOPERMISSIONATTRIBUTE_T2798049386_H
#define FILEIOPERMISSIONATTRIBUTE_T2798049386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAttribute
struct  FileIOPermissionAttribute_t2798049386  : public CodeAccessSecurityAttribute_t2690346022
{
public:
	// System.String System.Security.Permissions.FileIOPermissionAttribute::append
	String_t* ___append_2;
	// System.String System.Security.Permissions.FileIOPermissionAttribute::path
	String_t* ___path_3;
	// System.String System.Security.Permissions.FileIOPermissionAttribute::read
	String_t* ___read_4;
	// System.String System.Security.Permissions.FileIOPermissionAttribute::write
	String_t* ___write_5;

public:
	inline static int32_t get_offset_of_append_2() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t2798049386, ___append_2)); }
	inline String_t* get_append_2() const { return ___append_2; }
	inline String_t** get_address_of_append_2() { return &___append_2; }
	inline void set_append_2(String_t* value)
	{
		___append_2 = value;
		Il2CppCodeGenWriteBarrier((&___append_2), value);
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t2798049386, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((&___path_3), value);
	}

	inline static int32_t get_offset_of_read_4() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t2798049386, ___read_4)); }
	inline String_t* get_read_4() const { return ___read_4; }
	inline String_t** get_address_of_read_4() { return &___read_4; }
	inline void set_read_4(String_t* value)
	{
		___read_4 = value;
		Il2CppCodeGenWriteBarrier((&___read_4), value);
	}

	inline static int32_t get_offset_of_write_5() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t2798049386, ___write_5)); }
	inline String_t* get_write_5() const { return ___write_5; }
	inline String_t** get_address_of_write_5() { return &___write_5; }
	inline void set_write_5(String_t* value)
	{
		___write_5 = value;
		Il2CppCodeGenWriteBarrier((&___write_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEIOPERMISSIONATTRIBUTE_T2798049386_H
#ifndef DESCRYPTOSERVICEPROVIDER_T815055720_H
#define DESCRYPTOSERVICEPROVIDER_T815055720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t815055720  : public DES_t2665883866
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T815055720_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T4084722724_H
#define SECURITYPERMISSIONATTRIBUTE_T4084722724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t4084722724  : public CodeAccessSecurityAttribute_t2690346022
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_2;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t4084722724, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T4084722724_H
#ifndef ENVIRONMENTPERMISSIONATTRIBUTE_T2828617898_H
#define ENVIRONMENTPERMISSIONATTRIBUTE_T2828617898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermissionAttribute
struct  EnvironmentPermissionAttribute_t2828617898  : public CodeAccessSecurityAttribute_t2690346022
{
public:
	// System.String System.Security.Permissions.EnvironmentPermissionAttribute::read
	String_t* ___read_2;
	// System.String System.Security.Permissions.EnvironmentPermissionAttribute::write
	String_t* ___write_3;

public:
	inline static int32_t get_offset_of_read_2() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAttribute_t2828617898, ___read_2)); }
	inline String_t* get_read_2() const { return ___read_2; }
	inline String_t** get_address_of_read_2() { return &___read_2; }
	inline void set_read_2(String_t* value)
	{
		___read_2 = value;
		Il2CppCodeGenWriteBarrier((&___read_2), value);
	}

	inline static int32_t get_offset_of_write_3() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAttribute_t2828617898, ___write_3)); }
	inline String_t* get_write_3() const { return ___write_3; }
	inline String_t** get_address_of_write_3() { return &___write_3; }
	inline void set_write_3(String_t* value)
	{
		___write_3 = value;
		Il2CppCodeGenWriteBarrier((&___write_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTPERMISSIONATTRIBUTE_T2828617898_H
#ifndef STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T1788781607_H
#define STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T1788781607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermissionAttribute
struct  StrongNameIdentityPermissionAttribute_t1788781607  : public CodeAccessSecurityAttribute_t2690346022
{
public:
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::name
	String_t* ___name_2;
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::key
	String_t* ___key_3;
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::version
	String_t* ___version_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t1788781607, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t1788781607, ___key_3)); }
	inline String_t* get_key_3() const { return ___key_3; }
	inline String_t** get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(String_t* value)
	{
		___key_3 = value;
		Il2CppCodeGenWriteBarrier((&___key_3), value);
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t1788781607, ___version_4)); }
	inline String_t* get_version_4() const { return ___version_4; }
	inline String_t** get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(String_t* value)
	{
		___version_4 = value;
		Il2CppCodeGenWriteBarrier((&___version_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T1788781607_H
#ifndef REFLECTIONPERMISSIONATTRIBUTE_T1326477390_H
#define REFLECTIONPERMISSIONATTRIBUTE_T1326477390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionAttribute
struct  ReflectionPermissionAttribute_t1326477390  : public CodeAccessSecurityAttribute_t2690346022
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermissionAttribute::flags
	int32_t ___flags_2;

public:
	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(ReflectionPermissionAttribute_t1326477390, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPERMISSIONATTRIBUTE_T1326477390_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (ZoneMembershipCondition_t1292333696), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable600[2] = 
{
	ZoneMembershipCondition_t1292333696::get_offset_of_version_0(),
	ZoneMembershipCondition_t1292333696::get_offset_of_zone_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (CodeAccessSecurityAttribute_t2690346022), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (EnvironmentPermission_t3999123367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable602[3] = 
{
	EnvironmentPermission_t3999123367::get_offset_of__state_0(),
	EnvironmentPermission_t3999123367::get_offset_of_readList_1(),
	EnvironmentPermission_t3999123367::get_offset_of_writeList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (EnvironmentPermissionAccess_t76554412)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable603[5] = 
{
	EnvironmentPermissionAccess_t76554412::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (EnvironmentPermissionAttribute_t2828617898), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable604[2] = 
{
	EnvironmentPermissionAttribute_t2828617898::get_offset_of_read_2(),
	EnvironmentPermissionAttribute_t2828617898::get_offset_of_write_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (FileDialogPermission_t1478637547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable605[1] = 
{
	FileDialogPermission_t1478637547::get_offset_of__access_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (FileDialogPermissionAccess_t3508424199)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable606[5] = 
{
	FileDialogPermissionAccess_t3508424199::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (FileIOPermission_t2475603725), -1, sizeof(FileIOPermission_t2475603725_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable607[9] = 
{
	FileIOPermission_t2475603725_StaticFields::get_offset_of_BadPathNameCharacters_0(),
	FileIOPermission_t2475603725_StaticFields::get_offset_of_BadFileNameCharacters_1(),
	FileIOPermission_t2475603725::get_offset_of_m_Unrestricted_2(),
	FileIOPermission_t2475603725::get_offset_of_m_AllFilesAccess_3(),
	FileIOPermission_t2475603725::get_offset_of_m_AllLocalFilesAccess_4(),
	FileIOPermission_t2475603725::get_offset_of_readList_5(),
	FileIOPermission_t2475603725::get_offset_of_writeList_6(),
	FileIOPermission_t2475603725::get_offset_of_appendList_7(),
	FileIOPermission_t2475603725::get_offset_of_pathList_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (FileIOPermissionAccess_t761419378)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable608[7] = 
{
	FileIOPermissionAccess_t761419378::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (FileIOPermissionAttribute_t2798049386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable609[4] = 
{
	FileIOPermissionAttribute_t2798049386::get_offset_of_append_2(),
	FileIOPermissionAttribute_t2798049386::get_offset_of_path_3(),
	FileIOPermissionAttribute_t2798049386::get_offset_of_read_4(),
	FileIOPermissionAttribute_t2798049386::get_offset_of_write_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (GacIdentityPermission_t2039348361), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (HostProtectionAttribute_t3288063201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable611[1] = 
{
	HostProtectionAttribute_t3288063201::get_offset_of__resources_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (HostProtectionPermission_t3946306925), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable612[1] = 
{
	HostProtectionPermission_t3946306925::get_offset_of__resources_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (HostProtectionResource_t2970857360)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable613[12] = 
{
	HostProtectionResource_t2970857360::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (IsolatedStorageContainment_t827571704)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable615[13] = 
{
	IsolatedStorageContainment_t827571704::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (IsolatedStorageFilePermission_t3223922075), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { sizeof (IsolatedStoragePermission_t3881024036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable617[5] = 
{
	IsolatedStoragePermission_t3881024036::get_offset_of_m_userQuota_0(),
	IsolatedStoragePermission_t3881024036::get_offset_of_m_machineQuota_1(),
	IsolatedStoragePermission_t3881024036::get_offset_of_m_expirationDays_2(),
	IsolatedStoragePermission_t3881024036::get_offset_of_m_permanentData_3(),
	IsolatedStoragePermission_t3881024036::get_offset_of_m_allowed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (KeyContainerPermission_t1746807911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable619[2] = 
{
	KeyContainerPermission_t1746807911::get_offset_of__accessEntries_0(),
	KeyContainerPermission_t1746807911::get_offset_of__flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (KeyContainerPermissionAccessEntry_t4180699765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable620[6] = 
{
	KeyContainerPermissionAccessEntry_t4180699765::get_offset_of__flags_0(),
	KeyContainerPermissionAccessEntry_t4180699765::get_offset_of__containerName_1(),
	KeyContainerPermissionAccessEntry_t4180699765::get_offset_of__spec_2(),
	KeyContainerPermissionAccessEntry_t4180699765::get_offset_of__store_3(),
	KeyContainerPermissionAccessEntry_t4180699765::get_offset_of__providerName_4(),
	KeyContainerPermissionAccessEntry_t4180699765::get_offset_of__type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (KeyContainerPermissionAccessEntryCollection_t2850665406), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable621[1] = 
{
	KeyContainerPermissionAccessEntryCollection_t2850665406::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (KeyContainerPermissionAccessEntryEnumerator_t2396935803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable622[1] = 
{
	KeyContainerPermissionAccessEntryEnumerator_t2396935803::get_offset_of_e_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { sizeof (KeyContainerPermissionFlags_t4220695092)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable623[12] = 
{
	KeyContainerPermissionFlags_t4220695092::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (PermissionSetAttribute_t3376653580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable624[1] = 
{
	PermissionSetAttribute_t3376653580::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (PermissionState_t1393876540)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable625[3] = 
{
	PermissionState_t1393876540::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (PublisherIdentityPermission_t2813607577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable626[1] = 
{
	PublisherIdentityPermission_t2813607577::get_offset_of_x509_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (ReflectionPermission_t2612673498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable627[1] = 
{
	ReflectionPermission_t2612673498::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (ReflectionPermissionAttribute_t1326477390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable628[1] = 
{
	ReflectionPermissionAttribute_t1326477390::get_offset_of_flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (ReflectionPermissionFlag_t2177630096)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable629[7] = 
{
	ReflectionPermissionFlag_t2177630096::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (RegistryPermission_t4157048561), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable630[4] = 
{
	RegistryPermission_t4157048561::get_offset_of__state_0(),
	RegistryPermission_t4157048561::get_offset_of_createList_1(),
	RegistryPermission_t4157048561::get_offset_of_readList_2(),
	RegistryPermission_t4157048561::get_offset_of_writeList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (RegistryPermissionAccess_t1786671253)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable631[6] = 
{
	RegistryPermissionAccess_t1786671253::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (RegistryPermissionAttribute_t76398118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable632[3] = 
{
	RegistryPermissionAttribute_t76398118::get_offset_of_create_2(),
	RegistryPermissionAttribute_t76398118::get_offset_of_read_3(),
	RegistryPermissionAttribute_t76398118::get_offset_of_write_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (SecurityAction_t2550933415)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable633[10] = 
{
	SecurityAction_t2550933415::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (SecurityAttribute_t4141158030), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable634[2] = 
{
	SecurityAttribute_t4141158030::get_offset_of_m_Action_0(),
	SecurityAttribute_t4141158030::get_offset_of_m_Unrestricted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (SecurityPermission_t205990734), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable635[1] = 
{
	SecurityPermission_t205990734::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (SecurityPermissionAttribute_t4084722724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable636[1] = 
{
	SecurityPermissionAttribute_t4084722724::get_offset_of_m_Flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (SecurityPermissionFlag_t2115664158)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable637[17] = 
{
	SecurityPermissionFlag_t2115664158::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (SiteIdentityPermission_t1443084374), -1, sizeof(SiteIdentityPermission_t1443084374_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable638[2] = 
{
	SiteIdentityPermission_t1443084374::get_offset_of__site_0(),
	SiteIdentityPermission_t1443084374_StaticFields::get_offset_of_valid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (StrongNameIdentityPermission_t543251460), -1, sizeof(StrongNameIdentityPermission_t543251460_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable639[3] = 
{
	StrongNameIdentityPermission_t543251460_StaticFields::get_offset_of_defaultVersion_0(),
	StrongNameIdentityPermission_t543251460::get_offset_of__state_1(),
	StrongNameIdentityPermission_t543251460::get_offset_of__list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (SNIP_t668884230)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable640[3] = 
{
	SNIP_t668884230::get_offset_of_PublicKey_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t668884230::get_offset_of_Name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t668884230::get_offset_of_AssemblyVersion_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (StrongNameIdentityPermissionAttribute_t1788781607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable641[3] = 
{
	StrongNameIdentityPermissionAttribute_t1788781607::get_offset_of_name_2(),
	StrongNameIdentityPermissionAttribute_t1788781607::get_offset_of_key_3(),
	StrongNameIdentityPermissionAttribute_t1788781607::get_offset_of_version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (StrongNamePublicKeyBlob_t2622827795), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable642[1] = 
{
	StrongNamePublicKeyBlob_t2622827795::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (UIPermission_t67502870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable643[2] = 
{
	UIPermission_t67502870::get_offset_of__window_0(),
	UIPermission_t67502870::get_offset_of__clipboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (UIPermissionClipboard_t2153243907)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable644[4] = 
{
	UIPermissionClipboard_t2153243907::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (UIPermissionWindow_t680537192)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable645[5] = 
{
	UIPermissionWindow_t680537192::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (UrlIdentityPermission_t2690474832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable646[1] = 
{
	UrlIdentityPermission_t2690474832::get_offset_of_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (ZoneIdentityPermission_t141264713), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable647[1] = 
{
	ZoneIdentityPermission_t141264713::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (CryptoAPITransform_t748882946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable648[1] = 
{
	CryptoAPITransform_t748882946::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (CryptoConfig_t3189056697), -1, sizeof(CryptoConfig_t3189056697_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable649[182] = 
{
	CryptoConfig_t3189056697_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_unresolved_algorithms_2(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_oids_3(),
	0,
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultSHA1_5(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultMD5_6(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultSHA256_7(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultSHA384_8(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultSHA512_9(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultRSA_10(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultDSA_11(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultDES_12(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_default3DES_13(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultRC2_14(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultAES_15(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultRNG_16(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultHMAC_17(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultMAC3DES_18(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultDSASigDesc_19(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultRSAPKCS1SHA1SigDesc_20(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultRSAPKCS1SHA256SigDesc_21(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultRSAPKCS1SHA384SigDesc_22(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultRSAPKCS1SHA512SigDesc_23(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultRIPEMD160_24(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultHMACMD5_25(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultHMACRIPEMD160_26(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultHMACSHA256_27(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultHMACSHA384_28(),
	CryptoConfig_t3189056697_StaticFields::get_offset_of_defaultHMACSHA512_29(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (CryptoHandler_t3820558635), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable650[5] = 
{
	CryptoHandler_t3820558635::get_offset_of_algorithms_0(),
	CryptoHandler_t3820558635::get_offset_of_oid_1(),
	CryptoHandler_t3820558635::get_offset_of_names_2(),
	CryptoHandler_t3820558635::get_offset_of_classnames_3(),
	CryptoHandler_t3820558635::get_offset_of_level_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (CspKeyContainerInfo_t3461319235), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable651[2] = 
{
	CspKeyContainerInfo_t3461319235::get_offset_of__params_0(),
	CspKeyContainerInfo_t3461319235::get_offset_of__random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (DESTransform_t1135698164), -1, sizeof(DESTransform_t1135698164_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable652[13] = 
{
	DESTransform_t1135698164_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t1135698164_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t1135698164_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t1135698164_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t1135698164::get_offset_of_keySchedule_16(),
	DESTransform_t1135698164::get_offset_of_byteBuff_17(),
	DESTransform_t1135698164::get_offset_of_dwordBuff_18(),
	DESTransform_t1135698164_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t1135698164_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t1135698164_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t1135698164_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t1135698164_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t1135698164_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (DSACryptoServiceProvider_t2135957113), -1, sizeof(DSACryptoServiceProvider_t2135957113_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable653[8] = 
{
	0,
	DSACryptoServiceProvider_t2135957113::get_offset_of_store_3(),
	DSACryptoServiceProvider_t2135957113::get_offset_of_persistKey_4(),
	DSACryptoServiceProvider_t2135957113::get_offset_of_persisted_5(),
	DSACryptoServiceProvider_t2135957113::get_offset_of_privateKeyExportable_6(),
	DSACryptoServiceProvider_t2135957113::get_offset_of_m_disposed_7(),
	DSACryptoServiceProvider_t2135957113::get_offset_of_dsa_8(),
	DSACryptoServiceProvider_t2135957113_StaticFields::get_offset_of_useMachineKeyStore_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (KeyNumber_t1661073182)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable655[3] = 
{
	KeyNumber_t1661073182::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (MD5CryptoServiceProvider_t202075247), -1, sizeof(MD5CryptoServiceProvider_t202075247_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable656[7] = 
{
	0,
	MD5CryptoServiceProvider_t202075247::get_offset_of__H_5(),
	MD5CryptoServiceProvider_t202075247::get_offset_of_buff_6(),
	MD5CryptoServiceProvider_t202075247::get_offset_of_count_7(),
	MD5CryptoServiceProvider_t202075247::get_offset_of__ProcessingBuffer_8(),
	MD5CryptoServiceProvider_t202075247::get_offset_of__ProcessingBufferCount_9(),
	MD5CryptoServiceProvider_t202075247_StaticFields::get_offset_of_K_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (RC2Transform_t3698070532), -1, sizeof(RC2Transform_t3698070532_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable657[7] = 
{
	RC2Transform_t3698070532::get_offset_of_R0_12(),
	RC2Transform_t3698070532::get_offset_of_R1_13(),
	RC2Transform_t3698070532::get_offset_of_R2_14(),
	RC2Transform_t3698070532::get_offset_of_R3_15(),
	RC2Transform_t3698070532::get_offset_of_K_16(),
	RC2Transform_t3698070532::get_offset_of_j_17(),
	RC2Transform_t3698070532_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (RNGCryptoServiceProvider_t3433290543), -1, sizeof(RNGCryptoServiceProvider_t3433290543_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable658[2] = 
{
	RNGCryptoServiceProvider_t3433290543_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t3433290543::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (RSACryptoServiceProvider_t1041353003), -1, sizeof(RSACryptoServiceProvider_t1041353003_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable659[10] = 
{
	0,
	0,
	0,
	RSACryptoServiceProvider_t1041353003::get_offset_of_store_5(),
	RSACryptoServiceProvider_t1041353003::get_offset_of_persistKey_6(),
	RSACryptoServiceProvider_t1041353003::get_offset_of_persisted_7(),
	RSACryptoServiceProvider_t1041353003::get_offset_of_privateKeyExportable_8(),
	RSACryptoServiceProvider_t1041353003::get_offset_of_m_disposed_9(),
	RSACryptoServiceProvider_t1041353003::get_offset_of_rsa_10(),
	RSACryptoServiceProvider_t1041353003_StaticFields::get_offset_of_s_UseMachineKeyStore_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (RSAPKCS1SignatureDeformatter_t3671993512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable660[2] = 
{
	RSAPKCS1SignatureDeformatter_t3671993512::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t3671993512::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (RSAPKCS1SignatureFormatter_t715785199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable661[2] = 
{
	RSAPKCS1SignatureFormatter_t715785199::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t715785199::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (SHA1Internal_t2482470896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable662[6] = 
{
	0,
	SHA1Internal_t2482470896::get_offset_of__H_1(),
	SHA1Internal_t2482470896::get_offset_of_count_2(),
	SHA1Internal_t2482470896::get_offset_of__ProcessingBuffer_3(),
	SHA1Internal_t2482470896::get_offset_of__ProcessingBufferCount_4(),
	SHA1Internal_t2482470896::get_offset_of_buff_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (SHA1CryptoServiceProvider_t654128002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable663[1] = 
{
	SHA1CryptoServiceProvider_t654128002::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (TripleDESTransform_t343054294), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable664[6] = 
{
	TripleDESTransform_t343054294::get_offset_of_E1_12(),
	TripleDESTransform_t343054294::get_offset_of_D2_13(),
	TripleDESTransform_t343054294::get_offset_of_E3_14(),
	TripleDESTransform_t343054294::get_offset_of_D1_15(),
	TripleDESTransform_t343054294::get_offset_of_E2_16(),
	TripleDESTransform_t343054294::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (Aes_t3433973113), -1, sizeof(Aes_t3433973113_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable665[2] = 
{
	Aes_t3433973113_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	Aes_t3433973113_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (AsymmetricAlgorithm_t2243017820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable666[2] = 
{
	AsymmetricAlgorithm_t2243017820::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t2243017820::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (AsymmetricKeyExchangeDeformatter_t499330280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (AsymmetricKeyExchangeFormatter_t3805135927), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (AsymmetricSignatureDeformatter_t2759942994), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (AsymmetricSignatureFormatter_t2729341384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (FromBase64TransformMode_t508267653)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable671[3] = 
{
	FromBase64TransformMode_t508267653::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (ToBase64Transform_t1550471388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (FromBase64Transform_t392028262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable673[3] = 
{
	FromBase64Transform_t392028262::get_offset_of__inputBuffer_0(),
	FromBase64Transform_t392028262::get_offset_of__inputIndex_1(),
	FromBase64Transform_t392028262::get_offset_of__whitespaces_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (CipherMode_t3188278575)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable674[6] = 
{
	CipherMode_t3188278575::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (PaddingMode_t208862109)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable675[6] = 
{
	PaddingMode_t208862109::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (KeySizes_t3622656165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable676[3] = 
{
	KeySizes_t3622656165::get_offset_of_m_minSize_0(),
	KeySizes_t3622656165::get_offset_of_m_maxSize_1(),
	KeySizes_t3622656165::get_offset_of_m_skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { sizeof (CryptographicException_t1554430912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable677[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (CryptographicUnexpectedOperationException_t1006436623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (CspProviderFlags_t1628537230)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable679[10] = 
{
	CspProviderFlags_t1628537230::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { sizeof (CspParameters_t2067166484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable680[8] = 
{
	CspParameters_t2067166484::get_offset_of_ProviderType_0(),
	CspParameters_t2067166484::get_offset_of_ProviderName_1(),
	CspParameters_t2067166484::get_offset_of_KeyContainerName_2(),
	CspParameters_t2067166484::get_offset_of_KeyNumber_3(),
	CspParameters_t2067166484::get_offset_of_m_flags_4(),
	CspParameters_t2067166484::get_offset_of_m_cryptoKeySecurity_5(),
	CspParameters_t2067166484::get_offset_of_m_keyPassword_6(),
	CspParameters_t2067166484::get_offset_of_m_parentWindowHandle_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (CryptoStreamMode_t2268231278)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable681[3] = 
{
	CryptoStreamMode_t2268231278::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (CryptoStream_t3287244731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable682[12] = 
{
	CryptoStream_t3287244731::get_offset_of__stream_4(),
	CryptoStream_t3287244731::get_offset_of__Transform_5(),
	CryptoStream_t3287244731::get_offset_of__InputBuffer_6(),
	CryptoStream_t3287244731::get_offset_of__InputBufferIndex_7(),
	CryptoStream_t3287244731::get_offset_of__InputBlockSize_8(),
	CryptoStream_t3287244731::get_offset_of__OutputBuffer_9(),
	CryptoStream_t3287244731::get_offset_of__OutputBufferIndex_10(),
	CryptoStream_t3287244731::get_offset_of__OutputBlockSize_11(),
	CryptoStream_t3287244731::get_offset_of__transformMode_12(),
	CryptoStream_t3287244731::get_offset_of__canRead_13(),
	CryptoStream_t3287244731::get_offset_of__canWrite_14(),
	CryptoStream_t3287244731::get_offset_of__finalBlockTransformed_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (HopToThreadPoolAwaitable_t2000679059)+ sizeof (RuntimeObject), sizeof(HopToThreadPoolAwaitable_t2000679059 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (U3CReadAsyncInternalU3Ed__34_t3445764231)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable684[15] = 
{
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_count_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_buffer_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_cancellationToken_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CtempInputBufferU3E5__1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CcurrentOutputIndexU3E5__2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CbytesToDeliverU3E5__3_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CsemU3E5__4_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CU3Eu__1_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CU3Eu__2_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CU3E7__wrap1_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t3445764231::get_offset_of_U3CU3Eu__3_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (U3CWriteAsyncInternalU3Ed__37_t1686986986)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable685[13] = 
{
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_count_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_buffer_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_cancellationToken_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CbytesToWriteU3E5__1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CcurrentInputIndexU3E5__2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CnumWholeBlocksInBytesU3E5__3_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CsemU3E5__4_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CU3Eu__1_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t1686986986::get_offset_of_U3CU3Eu__2_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { sizeof (DeriveBytes_t2252174226), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { sizeof (DES_t2665883866), -1, sizeof(DES_t2665883866_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable687[2] = 
{
	DES_t2665883866_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	DES_t2665883866_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { sizeof (DESCryptoServiceProvider_t815055720), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (DSAParameters_t2385386057)+ sizeof (RuntimeObject), sizeof(DSAParameters_t2385386057_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable689[8] = 
{
	DSAParameters_t2385386057::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2385386057::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2385386057::get_offset_of_G_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2385386057::get_offset_of_Y_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2385386057::get_offset_of_J_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2385386057::get_offset_of_X_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2385386057::get_offset_of_Seed_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t2385386057::get_offset_of_Counter_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (DSA_t2770888278), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (DSASignatureDeformatter_t1243533741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable691[2] = 
{
	DSASignatureDeformatter_t1243533741::get_offset_of__dsaKey_0(),
	DSASignatureDeformatter_t1243533741::get_offset_of__oid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (DSASignatureFormatter_t2573902755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable692[2] = 
{
	DSASignatureFormatter_t2573902755::get_offset_of__dsaKey_0(),
	DSASignatureFormatter_t2573902755::get_offset_of__oid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (HashAlgorithm_t4062768725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable693[4] = 
{
	HashAlgorithm_t4062768725::get_offset_of_HashSizeValue_0(),
	HashAlgorithm_t4062768725::get_offset_of_HashValue_1(),
	HashAlgorithm_t4062768725::get_offset_of_State_2(),
	HashAlgorithm_t4062768725::get_offset_of_m_bDisposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (HashAlgorithmName_t355460891)+ sizeof (RuntimeObject), sizeof(HashAlgorithmName_t355460891_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable694[1] = 
{
	HashAlgorithmName_t355460891::get_offset_of__name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (HMAC_t1345195150), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable695[7] = 
{
	HMAC_t1345195150::get_offset_of_blockSizeValue_5(),
	HMAC_t1345195150::get_offset_of_m_hashName_6(),
	HMAC_t1345195150::get_offset_of_m_hash1_7(),
	HMAC_t1345195150::get_offset_of_m_hash2_8(),
	HMAC_t1345195150::get_offset_of_m_inner_9(),
	HMAC_t1345195150::get_offset_of_m_outer_10(),
	HMAC_t1345195150::get_offset_of_m_hashing_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (HMACMD5_t96299911), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (HMACRIPEMD160_t3045000289), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (HMACSHA1_t3472975615), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (HMACSHA256_t1795448143), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
