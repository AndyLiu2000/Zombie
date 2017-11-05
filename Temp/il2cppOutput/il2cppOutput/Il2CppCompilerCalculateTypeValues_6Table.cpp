﻿#include "il2cpp-config.h"

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

// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t4282168330;
// System.Func`1<System.Security.Cryptography.HashAlgorithm>
struct Func_1_t2308987627;
// System.Byte[]
struct ByteU5BU5D_t3238143234;
// System.Collections.IEnumerator
struct IEnumerator_t2831473847;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t2473310436;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2014228674;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t3852311497;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3393229735;
// System.UInt32[]
struct UInt32U5BU5D_t466307513;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t825968487;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1606073231;
// System.Collections.IDictionary
struct IDictionary_t1379970845;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t508390884;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4101682769;
// System.IntPtr[]
struct IntPtrU5BU5D_t1172512062;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t4002044518;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t1866675558;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t158843127;
// System.Action`1<System.Object>
struct Action_1_t2694143500;
// System.Threading.Tasks.Task
struct Task_t3671119414;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t3429193233;
// System.Security.Cryptography.RSA
struct RSA_t3128138134;
// System.Boolean[]
struct BooleanU5BU5D_t3859375967;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t4217177116;
// System.Version
struct Version_t1961646512;
// System.Security.Cryptography.DSA
struct DSA_t155212402;
// System.Char[]
struct CharU5BU5D_t1705485309;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t2249872656;
// System.Void
struct Void_t4233125135;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t1940462068;
// System.Action
struct Action_t3034160452;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1653742283;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t1646338614;
// System.Security.Cryptography.TailStream
struct TailStream_t3883015398;
// System.Security.Cryptography.TripleDES
struct TripleDES_t1024823572;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2213945148;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t4260821176;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t1368833649;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t4215673496;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t2905905619;
// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct KeyContainerPermissionAccessEntryCollection_t1331421447;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t3031225890;
// System.IO.Stream
struct Stream_t3261028515;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4118296959;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t503540002;
// System.Security.Cryptography.DESTransform
struct DESTransform_t1595996680;
// System.UInt16[]
struct UInt16U5BU5D_t2991509662;

struct Exception_t3288061028_marshaled_pinvoke;
struct Exception_t3288061028_marshaled_com;



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
#ifndef ASYMMETRICALGORITHM_T809218938_H
#define ASYMMETRICALGORITHM_T809218938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t809218938  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t4282168330* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t809218938, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t809218938, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t4282168330* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t4282168330** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t4282168330* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T809218938_H
#ifndef CODEACCESSPERMISSION_T3087678236_H
#define CODEACCESSPERMISSION_T3087678236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t3087678236  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T3087678236_H
#ifndef U3CU3EC_T3554710478_H
#define U3CU3EC_T3554710478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512/<>c
struct  U3CU3Ec_t3554710478  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3554710478_StaticFields
{
public:
	// System.Security.Cryptography.HMACSHA512/<>c System.Security.Cryptography.HMACSHA512/<>c::<>9
	U3CU3Ec_t3554710478 * ___U3CU3E9_0;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA512/<>c::<>9__2_0
	Func_1_t2308987627 * ___U3CU3E9__2_0_1;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA512/<>c::<>9__2_1
	Func_1_t2308987627 * ___U3CU3E9__2_1_2;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA512/<>c::<>9__2_2
	Func_1_t2308987627 * ___U3CU3E9__2_2_3;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA512/<>c::<>9__2_3
	Func_1_t2308987627 * ___U3CU3E9__2_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3554710478_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3554710478 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3554710478 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3554710478 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3554710478_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_1_t2308987627 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_1_t2308987627 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3554710478_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_1_t2308987627 * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_1_t2308987627 * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3554710478_StaticFields, ___U3CU3E9__2_2_3)); }
	inline Func_1_t2308987627 * get_U3CU3E9__2_2_3() const { return ___U3CU3E9__2_2_3; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__2_2_3() { return &___U3CU3E9__2_2_3; }
	inline void set_U3CU3E9__2_2_3(Func_1_t2308987627 * value)
	{
		___U3CU3E9__2_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3554710478_StaticFields, ___U3CU3E9__2_3_4)); }
	inline Func_1_t2308987627 * get_U3CU3E9__2_3_4() const { return ___U3CU3E9__2_3_4; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__2_3_4() { return &___U3CU3E9__2_3_4; }
	inline void set_U3CU3E9__2_3_4(Func_1_t2308987627 * value)
	{
		___U3CU3E9__2_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3554710478_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T1151021572_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T1151021572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t1151021572  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T1151021572_H
#ifndef U3CU3EC_T1663732271_H
#define U3CU3EC_T1663732271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256/<>c
struct  U3CU3Ec_t1663732271  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1663732271_StaticFields
{
public:
	// System.Security.Cryptography.HMACSHA256/<>c System.Security.Cryptography.HMACSHA256/<>c::<>9
	U3CU3Ec_t1663732271 * ___U3CU3E9_0;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA256/<>c::<>9__1_0
	Func_1_t2308987627 * ___U3CU3E9__1_0_1;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA256/<>c::<>9__1_1
	Func_1_t2308987627 * ___U3CU3E9__1_1_2;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA256/<>c::<>9__1_2
	Func_1_t2308987627 * ___U3CU3E9__1_2_3;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA256/<>c::<>9__1_3
	Func_1_t2308987627 * ___U3CU3E9__1_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1663732271_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1663732271 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1663732271 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1663732271 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1663732271_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_1_t2308987627 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_1_t2308987627 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1663732271_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_1_t2308987627 * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_1_t2308987627 * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1663732271_StaticFields, ___U3CU3E9__1_2_3)); }
	inline Func_1_t2308987627 * get_U3CU3E9__1_2_3() const { return ___U3CU3E9__1_2_3; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__1_2_3() { return &___U3CU3E9__1_2_3; }
	inline void set_U3CU3E9__1_2_3(Func_1_t2308987627 * value)
	{
		___U3CU3E9__1_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1663732271_StaticFields, ___U3CU3E9__1_3_4)); }
	inline Func_1_t2308987627 * get_U3CU3E9__1_3_4() const { return ___U3CU3E9__1_3_4; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__1_3_4() { return &___U3CU3E9__1_3_4; }
	inline void set_U3CU3E9__1_3_4(Func_1_t2308987627 * value)
	{
		___U3CU3E9__1_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1663732271_H
#ifndef HASHALGORITHM_T2213945148_H
#define HASHALGORITHM_T2213945148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t2213945148  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_0;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3238143234* ___HashValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::m_bDisposed
	bool ___m_bDisposed_3;

public:
	inline static int32_t get_offset_of_HashSizeValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2213945148, ___HashSizeValue_0)); }
	inline int32_t get_HashSizeValue_0() const { return ___HashSizeValue_0; }
	inline int32_t* get_address_of_HashSizeValue_0() { return &___HashSizeValue_0; }
	inline void set_HashSizeValue_0(int32_t value)
	{
		___HashSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_HashValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2213945148, ___HashValue_1)); }
	inline ByteU5BU5D_t3238143234* get_HashValue_1() const { return ___HashValue_1; }
	inline ByteU5BU5D_t3238143234** get_address_of_HashValue_1() { return &___HashValue_1; }
	inline void set_HashValue_1(ByteU5BU5D_t3238143234* value)
	{
		___HashValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_1), value);
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2213945148, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_m_bDisposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t2213945148, ___m_bDisposed_3)); }
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
#endif // HASHALGORITHM_T2213945148_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3623760829_H
#define KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3623760829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator
struct  KeyContainerPermissionAccessEntryEnumerator_t3623760829  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Permissions.KeyContainerPermissionAccessEntryEnumerator::e
	RuntimeObject* ___e_0;

public:
	inline static int32_t get_offset_of_e_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryEnumerator_t3623760829, ___e_0)); }
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
#endif // KEYCONTAINERPERMISSIONACCESSENTRYENUMERATOR_T3623760829_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T4217177116_H
#define STRONGNAMEPUBLICKEYBLOB_T4217177116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t4217177116  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t3238143234* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t4217177116, ___pubkey_0)); }
	inline ByteU5BU5D_t3238143234* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t3238143234** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t3238143234* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T4217177116_H
#ifndef CRYPTOCONFIG_T1661594826_H
#define CRYPTOCONFIG_T1661594826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t1661594826  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t1661594826_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> System.Security.Cryptography.CryptoConfig::algorithms
	Dictionary_2_t2473310436 * ___algorithms_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig::unresolved_algorithms
	Dictionary_2_t2014228674 * ___unresolved_algorithms_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig::oids
	Dictionary_2_t2014228674 * ___oids_3;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA1
	Type_t * ___defaultSHA1_4;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultMD5
	Type_t * ___defaultMD5_5;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA256
	Type_t * ___defaultSHA256_6;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA384
	Type_t * ___defaultSHA384_7;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultSHA512
	Type_t * ___defaultSHA512_8;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSA
	Type_t * ___defaultRSA_9;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDSA
	Type_t * ___defaultDSA_10;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDES
	Type_t * ___defaultDES_11;
	// System.Type System.Security.Cryptography.CryptoConfig::default3DES
	Type_t * ___default3DES_12;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRC2
	Type_t * ___defaultRC2_13;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultAES
	Type_t * ___defaultAES_14;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRNG
	Type_t * ___defaultRNG_15;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMAC
	Type_t * ___defaultHMAC_16;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultMAC3DES
	Type_t * ___defaultMAC3DES_17;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultDSASigDesc
	Type_t * ___defaultDSASigDesc_18;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA1SigDesc
	Type_t * ___defaultRSAPKCS1SHA1SigDesc_19;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA256SigDesc
	Type_t * ___defaultRSAPKCS1SHA256SigDesc_20;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA384SigDesc
	Type_t * ___defaultRSAPKCS1SHA384SigDesc_21;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRSAPKCS1SHA512SigDesc
	Type_t * ___defaultRSAPKCS1SHA512SigDesc_22;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultRIPEMD160
	Type_t * ___defaultRIPEMD160_23;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACMD5
	Type_t * ___defaultHMACMD5_24;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACRIPEMD160
	Type_t * ___defaultHMACRIPEMD160_25;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA256
	Type_t * ___defaultHMACSHA256_26;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA384
	Type_t * ___defaultHMACSHA384_27;
	// System.Type System.Security.Cryptography.CryptoConfig::defaultHMACSHA512
	Type_t * ___defaultHMACSHA512_28;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___algorithms_1)); }
	inline Dictionary_2_t2473310436 * get_algorithms_1() const { return ___algorithms_1; }
	inline Dictionary_2_t2473310436 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Dictionary_2_t2473310436 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_unresolved_algorithms_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___unresolved_algorithms_2)); }
	inline Dictionary_2_t2014228674 * get_unresolved_algorithms_2() const { return ___unresolved_algorithms_2; }
	inline Dictionary_2_t2014228674 ** get_address_of_unresolved_algorithms_2() { return &___unresolved_algorithms_2; }
	inline void set_unresolved_algorithms_2(Dictionary_2_t2014228674 * value)
	{
		___unresolved_algorithms_2 = value;
		Il2CppCodeGenWriteBarrier((&___unresolved_algorithms_2), value);
	}

	inline static int32_t get_offset_of_oids_3() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___oids_3)); }
	inline Dictionary_2_t2014228674 * get_oids_3() const { return ___oids_3; }
	inline Dictionary_2_t2014228674 ** get_address_of_oids_3() { return &___oids_3; }
	inline void set_oids_3(Dictionary_2_t2014228674 * value)
	{
		___oids_3 = value;
		Il2CppCodeGenWriteBarrier((&___oids_3), value);
	}

	inline static int32_t get_offset_of_defaultSHA1_4() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultSHA1_4)); }
	inline Type_t * get_defaultSHA1_4() const { return ___defaultSHA1_4; }
	inline Type_t ** get_address_of_defaultSHA1_4() { return &___defaultSHA1_4; }
	inline void set_defaultSHA1_4(Type_t * value)
	{
		___defaultSHA1_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA1_4), value);
	}

	inline static int32_t get_offset_of_defaultMD5_5() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultMD5_5)); }
	inline Type_t * get_defaultMD5_5() const { return ___defaultMD5_5; }
	inline Type_t ** get_address_of_defaultMD5_5() { return &___defaultMD5_5; }
	inline void set_defaultMD5_5(Type_t * value)
	{
		___defaultMD5_5 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMD5_5), value);
	}

	inline static int32_t get_offset_of_defaultSHA256_6() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultSHA256_6)); }
	inline Type_t * get_defaultSHA256_6() const { return ___defaultSHA256_6; }
	inline Type_t ** get_address_of_defaultSHA256_6() { return &___defaultSHA256_6; }
	inline void set_defaultSHA256_6(Type_t * value)
	{
		___defaultSHA256_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA256_6), value);
	}

	inline static int32_t get_offset_of_defaultSHA384_7() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultSHA384_7)); }
	inline Type_t * get_defaultSHA384_7() const { return ___defaultSHA384_7; }
	inline Type_t ** get_address_of_defaultSHA384_7() { return &___defaultSHA384_7; }
	inline void set_defaultSHA384_7(Type_t * value)
	{
		___defaultSHA384_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA384_7), value);
	}

	inline static int32_t get_offset_of_defaultSHA512_8() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultSHA512_8)); }
	inline Type_t * get_defaultSHA512_8() const { return ___defaultSHA512_8; }
	inline Type_t ** get_address_of_defaultSHA512_8() { return &___defaultSHA512_8; }
	inline void set_defaultSHA512_8(Type_t * value)
	{
		___defaultSHA512_8 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSHA512_8), value);
	}

	inline static int32_t get_offset_of_defaultRSA_9() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultRSA_9)); }
	inline Type_t * get_defaultRSA_9() const { return ___defaultRSA_9; }
	inline Type_t ** get_address_of_defaultRSA_9() { return &___defaultRSA_9; }
	inline void set_defaultRSA_9(Type_t * value)
	{
		___defaultRSA_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSA_9), value);
	}

	inline static int32_t get_offset_of_defaultDSA_10() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultDSA_10)); }
	inline Type_t * get_defaultDSA_10() const { return ___defaultDSA_10; }
	inline Type_t ** get_address_of_defaultDSA_10() { return &___defaultDSA_10; }
	inline void set_defaultDSA_10(Type_t * value)
	{
		___defaultDSA_10 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDSA_10), value);
	}

	inline static int32_t get_offset_of_defaultDES_11() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultDES_11)); }
	inline Type_t * get_defaultDES_11() const { return ___defaultDES_11; }
	inline Type_t ** get_address_of_defaultDES_11() { return &___defaultDES_11; }
	inline void set_defaultDES_11(Type_t * value)
	{
		___defaultDES_11 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDES_11), value);
	}

	inline static int32_t get_offset_of_default3DES_12() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___default3DES_12)); }
	inline Type_t * get_default3DES_12() const { return ___default3DES_12; }
	inline Type_t ** get_address_of_default3DES_12() { return &___default3DES_12; }
	inline void set_default3DES_12(Type_t * value)
	{
		___default3DES_12 = value;
		Il2CppCodeGenWriteBarrier((&___default3DES_12), value);
	}

	inline static int32_t get_offset_of_defaultRC2_13() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultRC2_13)); }
	inline Type_t * get_defaultRC2_13() const { return ___defaultRC2_13; }
	inline Type_t ** get_address_of_defaultRC2_13() { return &___defaultRC2_13; }
	inline void set_defaultRC2_13(Type_t * value)
	{
		___defaultRC2_13 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRC2_13), value);
	}

	inline static int32_t get_offset_of_defaultAES_14() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultAES_14)); }
	inline Type_t * get_defaultAES_14() const { return ___defaultAES_14; }
	inline Type_t ** get_address_of_defaultAES_14() { return &___defaultAES_14; }
	inline void set_defaultAES_14(Type_t * value)
	{
		___defaultAES_14 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAES_14), value);
	}

	inline static int32_t get_offset_of_defaultRNG_15() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultRNG_15)); }
	inline Type_t * get_defaultRNG_15() const { return ___defaultRNG_15; }
	inline Type_t ** get_address_of_defaultRNG_15() { return &___defaultRNG_15; }
	inline void set_defaultRNG_15(Type_t * value)
	{
		___defaultRNG_15 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRNG_15), value);
	}

	inline static int32_t get_offset_of_defaultHMAC_16() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultHMAC_16)); }
	inline Type_t * get_defaultHMAC_16() const { return ___defaultHMAC_16; }
	inline Type_t ** get_address_of_defaultHMAC_16() { return &___defaultHMAC_16; }
	inline void set_defaultHMAC_16(Type_t * value)
	{
		___defaultHMAC_16 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMAC_16), value);
	}

	inline static int32_t get_offset_of_defaultMAC3DES_17() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultMAC3DES_17)); }
	inline Type_t * get_defaultMAC3DES_17() const { return ___defaultMAC3DES_17; }
	inline Type_t ** get_address_of_defaultMAC3DES_17() { return &___defaultMAC3DES_17; }
	inline void set_defaultMAC3DES_17(Type_t * value)
	{
		___defaultMAC3DES_17 = value;
		Il2CppCodeGenWriteBarrier((&___defaultMAC3DES_17), value);
	}

	inline static int32_t get_offset_of_defaultDSASigDesc_18() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultDSASigDesc_18)); }
	inline Type_t * get_defaultDSASigDesc_18() const { return ___defaultDSASigDesc_18; }
	inline Type_t ** get_address_of_defaultDSASigDesc_18() { return &___defaultDSASigDesc_18; }
	inline void set_defaultDSASigDesc_18(Type_t * value)
	{
		___defaultDSASigDesc_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultDSASigDesc_18), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA1SigDesc_19() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultRSAPKCS1SHA1SigDesc_19)); }
	inline Type_t * get_defaultRSAPKCS1SHA1SigDesc_19() const { return ___defaultRSAPKCS1SHA1SigDesc_19; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA1SigDesc_19() { return &___defaultRSAPKCS1SHA1SigDesc_19; }
	inline void set_defaultRSAPKCS1SHA1SigDesc_19(Type_t * value)
	{
		___defaultRSAPKCS1SHA1SigDesc_19 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA1SigDesc_19), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA256SigDesc_20() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultRSAPKCS1SHA256SigDesc_20)); }
	inline Type_t * get_defaultRSAPKCS1SHA256SigDesc_20() const { return ___defaultRSAPKCS1SHA256SigDesc_20; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA256SigDesc_20() { return &___defaultRSAPKCS1SHA256SigDesc_20; }
	inline void set_defaultRSAPKCS1SHA256SigDesc_20(Type_t * value)
	{
		___defaultRSAPKCS1SHA256SigDesc_20 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA256SigDesc_20), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA384SigDesc_21() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultRSAPKCS1SHA384SigDesc_21)); }
	inline Type_t * get_defaultRSAPKCS1SHA384SigDesc_21() const { return ___defaultRSAPKCS1SHA384SigDesc_21; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA384SigDesc_21() { return &___defaultRSAPKCS1SHA384SigDesc_21; }
	inline void set_defaultRSAPKCS1SHA384SigDesc_21(Type_t * value)
	{
		___defaultRSAPKCS1SHA384SigDesc_21 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA384SigDesc_21), value);
	}

	inline static int32_t get_offset_of_defaultRSAPKCS1SHA512SigDesc_22() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultRSAPKCS1SHA512SigDesc_22)); }
	inline Type_t * get_defaultRSAPKCS1SHA512SigDesc_22() const { return ___defaultRSAPKCS1SHA512SigDesc_22; }
	inline Type_t ** get_address_of_defaultRSAPKCS1SHA512SigDesc_22() { return &___defaultRSAPKCS1SHA512SigDesc_22; }
	inline void set_defaultRSAPKCS1SHA512SigDesc_22(Type_t * value)
	{
		___defaultRSAPKCS1SHA512SigDesc_22 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRSAPKCS1SHA512SigDesc_22), value);
	}

	inline static int32_t get_offset_of_defaultRIPEMD160_23() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultRIPEMD160_23)); }
	inline Type_t * get_defaultRIPEMD160_23() const { return ___defaultRIPEMD160_23; }
	inline Type_t ** get_address_of_defaultRIPEMD160_23() { return &___defaultRIPEMD160_23; }
	inline void set_defaultRIPEMD160_23(Type_t * value)
	{
		___defaultRIPEMD160_23 = value;
		Il2CppCodeGenWriteBarrier((&___defaultRIPEMD160_23), value);
	}

	inline static int32_t get_offset_of_defaultHMACMD5_24() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultHMACMD5_24)); }
	inline Type_t * get_defaultHMACMD5_24() const { return ___defaultHMACMD5_24; }
	inline Type_t ** get_address_of_defaultHMACMD5_24() { return &___defaultHMACMD5_24; }
	inline void set_defaultHMACMD5_24(Type_t * value)
	{
		___defaultHMACMD5_24 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACMD5_24), value);
	}

	inline static int32_t get_offset_of_defaultHMACRIPEMD160_25() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultHMACRIPEMD160_25)); }
	inline Type_t * get_defaultHMACRIPEMD160_25() const { return ___defaultHMACRIPEMD160_25; }
	inline Type_t ** get_address_of_defaultHMACRIPEMD160_25() { return &___defaultHMACRIPEMD160_25; }
	inline void set_defaultHMACRIPEMD160_25(Type_t * value)
	{
		___defaultHMACRIPEMD160_25 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACRIPEMD160_25), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA256_26() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultHMACSHA256_26)); }
	inline Type_t * get_defaultHMACSHA256_26() const { return ___defaultHMACSHA256_26; }
	inline Type_t ** get_address_of_defaultHMACSHA256_26() { return &___defaultHMACSHA256_26; }
	inline void set_defaultHMACSHA256_26(Type_t * value)
	{
		___defaultHMACSHA256_26 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA256_26), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA384_27() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultHMACSHA384_27)); }
	inline Type_t * get_defaultHMACSHA384_27() const { return ___defaultHMACSHA384_27; }
	inline Type_t ** get_address_of_defaultHMACSHA384_27() { return &___defaultHMACSHA384_27; }
	inline void set_defaultHMACSHA384_27(Type_t * value)
	{
		___defaultHMACSHA384_27 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA384_27), value);
	}

	inline static int32_t get_offset_of_defaultHMACSHA512_28() { return static_cast<int32_t>(offsetof(CryptoConfig_t1661594826_StaticFields, ___defaultHMACSHA512_28)); }
	inline Type_t * get_defaultHMACSHA512_28() const { return ___defaultHMACSHA512_28; }
	inline Type_t ** get_address_of_defaultHMACSHA512_28() { return &___defaultHMACSHA512_28; }
	inline void set_defaultHMACSHA512_28(Type_t * value)
	{
		___defaultHMACSHA512_28 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHMACSHA512_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T1661594826_H
#ifndef CRYPTOHANDLER_T1786947975_H
#define CRYPTOHANDLER_T1786947975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig/CryptoHandler
struct  CryptoHandler_t1786947975  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,System.Type> System.Security.Cryptography.CryptoConfig/CryptoHandler::algorithms
	RuntimeObject* ___algorithms_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::oid
	RuntimeObject* ___oid_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::names
	Dictionary_2_t2014228674 * ___names_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> System.Security.Cryptography.CryptoConfig/CryptoHandler::classnames
	Dictionary_2_t2014228674 * ___classnames_3;
	// System.Int32 System.Security.Cryptography.CryptoConfig/CryptoHandler::level
	int32_t ___level_4;

public:
	inline static int32_t get_offset_of_algorithms_0() { return static_cast<int32_t>(offsetof(CryptoHandler_t1786947975, ___algorithms_0)); }
	inline RuntimeObject* get_algorithms_0() const { return ___algorithms_0; }
	inline RuntimeObject** get_address_of_algorithms_0() { return &___algorithms_0; }
	inline void set_algorithms_0(RuntimeObject* value)
	{
		___algorithms_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_0), value);
	}

	inline static int32_t get_offset_of_oid_1() { return static_cast<int32_t>(offsetof(CryptoHandler_t1786947975, ___oid_1)); }
	inline RuntimeObject* get_oid_1() const { return ___oid_1; }
	inline RuntimeObject** get_address_of_oid_1() { return &___oid_1; }
	inline void set_oid_1(RuntimeObject* value)
	{
		___oid_1 = value;
		Il2CppCodeGenWriteBarrier((&___oid_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(CryptoHandler_t1786947975, ___names_2)); }
	inline Dictionary_2_t2014228674 * get_names_2() const { return ___names_2; }
	inline Dictionary_2_t2014228674 ** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(Dictionary_2_t2014228674 * value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_classnames_3() { return static_cast<int32_t>(offsetof(CryptoHandler_t1786947975, ___classnames_3)); }
	inline Dictionary_2_t2014228674 * get_classnames_3() const { return ___classnames_3; }
	inline Dictionary_2_t2014228674 ** get_address_of_classnames_3() { return &___classnames_3; }
	inline void set_classnames_3(Dictionary_2_t2014228674 * value)
	{
		___classnames_3 = value;
		Il2CppCodeGenWriteBarrier((&___classnames_3), value);
	}

	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(CryptoHandler_t1786947975, ___level_4)); }
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
#endif // CRYPTOHANDLER_T1786947975_H
#ifndef KEYSIZES_T1673080811_H
#define KEYSIZES_T1673080811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t1673080811  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::m_minSize
	int32_t ___m_minSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::m_maxSize
	int32_t ___m_maxSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::m_skipSize
	int32_t ___m_skipSize_2;

public:
	inline static int32_t get_offset_of_m_minSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t1673080811, ___m_minSize_0)); }
	inline int32_t get_m_minSize_0() const { return ___m_minSize_0; }
	inline int32_t* get_address_of_m_minSize_0() { return &___m_minSize_0; }
	inline void set_m_minSize_0(int32_t value)
	{
		___m_minSize_0 = value;
	}

	inline static int32_t get_offset_of_m_maxSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t1673080811, ___m_maxSize_1)); }
	inline int32_t get_m_maxSize_1() const { return ___m_maxSize_1; }
	inline int32_t* get_address_of_m_maxSize_1() { return &___m_maxSize_1; }
	inline void set_m_maxSize_1(int32_t value)
	{
		___m_maxSize_1 = value;
	}

	inline static int32_t get_offset_of_m_skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t1673080811, ___m_skipSize_2)); }
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
#endif // KEYSIZES_T1673080811_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T2325651768_H
#define ASYMMETRICSIGNATUREFORMATTER_T2325651768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t2325651768  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T2325651768_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T386807421_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T386807421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t386807421  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T386807421_H
#ifndef SHA1INTERNAL_T2905905619_H
#define SHA1INTERNAL_T2905905619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t2905905619  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t466307513* ____H_0;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_1;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t3238143234* ____ProcessingBuffer_2;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_3;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t466307513* ___buff_4;

public:
	inline static int32_t get_offset_of__H_0() { return static_cast<int32_t>(offsetof(SHA1Internal_t2905905619, ____H_0)); }
	inline UInt32U5BU5D_t466307513* get__H_0() const { return ____H_0; }
	inline UInt32U5BU5D_t466307513** get_address_of__H_0() { return &____H_0; }
	inline void set__H_0(UInt32U5BU5D_t466307513* value)
	{
		____H_0 = value;
		Il2CppCodeGenWriteBarrier((&____H_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(SHA1Internal_t2905905619, ___count_1)); }
	inline uint64_t get_count_1() const { return ___count_1; }
	inline uint64_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(uint64_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t2905905619, ____ProcessingBuffer_2)); }
	inline ByteU5BU5D_t3238143234* get__ProcessingBuffer_2() const { return ____ProcessingBuffer_2; }
	inline ByteU5BU5D_t3238143234** get_address_of__ProcessingBuffer_2() { return &____ProcessingBuffer_2; }
	inline void set__ProcessingBuffer_2(ByteU5BU5D_t3238143234* value)
	{
		____ProcessingBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_2), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t2905905619, ____ProcessingBufferCount_3)); }
	inline int32_t get__ProcessingBufferCount_3() const { return ____ProcessingBufferCount_3; }
	inline int32_t* get_address_of__ProcessingBufferCount_3() { return &____ProcessingBufferCount_3; }
	inline void set__ProcessingBufferCount_3(int32_t value)
	{
		____ProcessingBufferCount_3 = value;
	}

	inline static int32_t get_offset_of_buff_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t2905905619, ___buff_4)); }
	inline UInt32U5BU5D_t466307513* get_buff_4() const { return ___buff_4; }
	inline UInt32U5BU5D_t466307513** get_address_of_buff_4() { return &___buff_4; }
	inline void set_buff_4(UInt32U5BU5D_t466307513* value)
	{
		___buff_4 = value;
		Il2CppCodeGenWriteBarrier((&___buff_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T2905905619_H
#ifndef CSPPARAMETERS_T833395919_H
#define CSPPARAMETERS_T833395919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t833395919  : public RuntimeObject
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

public:
	inline static int32_t get_offset_of_ProviderType_0() { return static_cast<int32_t>(offsetof(CspParameters_t833395919, ___ProviderType_0)); }
	inline int32_t get_ProviderType_0() const { return ___ProviderType_0; }
	inline int32_t* get_address_of_ProviderType_0() { return &___ProviderType_0; }
	inline void set_ProviderType_0(int32_t value)
	{
		___ProviderType_0 = value;
	}

	inline static int32_t get_offset_of_ProviderName_1() { return static_cast<int32_t>(offsetof(CspParameters_t833395919, ___ProviderName_1)); }
	inline String_t* get_ProviderName_1() const { return ___ProviderName_1; }
	inline String_t** get_address_of_ProviderName_1() { return &___ProviderName_1; }
	inline void set_ProviderName_1(String_t* value)
	{
		___ProviderName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_1), value);
	}

	inline static int32_t get_offset_of_KeyContainerName_2() { return static_cast<int32_t>(offsetof(CspParameters_t833395919, ___KeyContainerName_2)); }
	inline String_t* get_KeyContainerName_2() const { return ___KeyContainerName_2; }
	inline String_t** get_address_of_KeyContainerName_2() { return &___KeyContainerName_2; }
	inline void set_KeyContainerName_2(String_t* value)
	{
		___KeyContainerName_2 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_2), value);
	}

	inline static int32_t get_offset_of_KeyNumber_3() { return static_cast<int32_t>(offsetof(CspParameters_t833395919, ___KeyNumber_3)); }
	inline int32_t get_KeyNumber_3() const { return ___KeyNumber_3; }
	inline int32_t* get_address_of_KeyNumber_3() { return &___KeyNumber_3; }
	inline void set_KeyNumber_3(int32_t value)
	{
		___KeyNumber_3 = value;
	}

	inline static int32_t get_offset_of_m_flags_4() { return static_cast<int32_t>(offsetof(CspParameters_t833395919, ___m_flags_4)); }
	inline int32_t get_m_flags_4() const { return ___m_flags_4; }
	inline int32_t* get_address_of_m_flags_4() { return &___m_flags_4; }
	inline void set_m_flags_4(int32_t value)
	{
		___m_flags_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T833395919_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T1331421447_H
#define KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T1331421447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection
struct  KeyContainerPermissionAccessEntryCollection_t1331421447  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Permissions.KeyContainerPermissionAccessEntryCollection::_list
	ArrayList_t825968487 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntryCollection_t1331421447, ____list_0)); }
	inline ArrayList_t825968487 * get__list_0() const { return ____list_0; }
	inline ArrayList_t825968487 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t825968487 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCONTAINERPERMISSIONACCESSENTRYCOLLECTION_T1331421447_H
#ifndef U3CU3EC_T1916002738_H
#define U3CU3EC_T1916002738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384/<>c
struct  U3CU3Ec_t1916002738  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1916002738_StaticFields
{
public:
	// System.Security.Cryptography.HMACSHA384/<>c System.Security.Cryptography.HMACSHA384/<>c::<>9
	U3CU3Ec_t1916002738 * ___U3CU3E9_0;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA384/<>c::<>9__2_0
	Func_1_t2308987627 * ___U3CU3E9__2_0_1;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA384/<>c::<>9__2_1
	Func_1_t2308987627 * ___U3CU3E9__2_1_2;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA384/<>c::<>9__2_2
	Func_1_t2308987627 * ___U3CU3E9__2_2_3;
	// System.Func`1<System.Security.Cryptography.HashAlgorithm> System.Security.Cryptography.HMACSHA384/<>c::<>9__2_3
	Func_1_t2308987627 * ___U3CU3E9__2_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1916002738_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1916002738 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1916002738 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1916002738 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1916002738_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_1_t2308987627 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_1_t2308987627 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1916002738_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_1_t2308987627 * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_1_t2308987627 * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1916002738_StaticFields, ___U3CU3E9__2_2_3)); }
	inline Func_1_t2308987627 * get_U3CU3E9__2_2_3() const { return ___U3CU3E9__2_2_3; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__2_2_3() { return &___U3CU3E9__2_2_3; }
	inline void set_U3CU3E9__2_2_3(Func_1_t2308987627 * value)
	{
		___U3CU3E9__2_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1916002738_StaticFields, ___U3CU3E9__2_3_4)); }
	inline Func_1_t2308987627 * get_U3CU3E9__2_3_4() const { return ___U3CU3E9__2_3_4; }
	inline Func_1_t2308987627 ** get_address_of_U3CU3E9__2_3_4() { return &___U3CU3E9__2_3_4; }
	inline void set_U3CU3E9__2_3_4(Func_1_t2308987627 * value)
	{
		___U3CU3E9__2_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1916002738_H
#ifndef VALUETYPE_T1706913817_H
#define VALUETYPE_T1706913817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1706913817  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1706913817_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1706913817_marshaled_com
{
};
#endif // VALUETYPE_T1706913817_H
#ifndef MARSHALBYREFOBJECT_T2617547684_H
#define MARSHALBYREFOBJECT_T2617547684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2617547684  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1606073231 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2617547684, ____identity_0)); }
	inline ServerIdentity_t1606073231 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1606073231 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1606073231 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2617547684_marshaled_pinvoke
{
	ServerIdentity_t1606073231 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2617547684_marshaled_com
{
	ServerIdentity_t1606073231 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2617547684_H
#ifndef ATTRIBUTE_T1602879233_H
#define ATTRIBUTE_T1602879233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1602879233  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1602879233_H
#ifndef RANDOMNUMBERGENERATOR_T503540002_H
#define RANDOMNUMBERGENERATOR_T503540002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t503540002  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T503540002_H
#ifndef EXCEPTION_T3288061028_H
#define EXCEPTION_T3288061028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3288061028  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t3288061028 * ____innerException_4;
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
	SafeSerializationManager_t508390884 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4101682769* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t1172512062* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____innerException_4)); }
	inline Exception_t3288061028 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t3288061028 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t3288061028 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t508390884 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t508390884 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t508390884 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4101682769* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4101682769** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4101682769* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t3288061028, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t1172512062* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t1172512062** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t1172512062* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t3288061028_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t3288061028_StaticFields, ___s_EDILock_0)); }
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
struct Exception_t3288061028_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3288061028_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t508390884 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4101682769* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t3288061028_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t3288061028_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t508390884 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4101682769* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T3288061028_H
#ifndef DSAPARAMETERS_T3790330035_H
#define DSAPARAMETERS_T3790330035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t3790330035 
{
public:
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t3238143234* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t3238143234* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t3238143234* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t3238143234* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t3238143234* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t3238143234* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t3238143234* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(DSAParameters_t3790330035, ___P_0)); }
	inline ByteU5BU5D_t3238143234* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t3238143234** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t3238143234* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(DSAParameters_t3790330035, ___Q_1)); }
	inline ByteU5BU5D_t3238143234* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t3238143234** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t3238143234* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_G_2() { return static_cast<int32_t>(offsetof(DSAParameters_t3790330035, ___G_2)); }
	inline ByteU5BU5D_t3238143234* get_G_2() const { return ___G_2; }
	inline ByteU5BU5D_t3238143234** get_address_of_G_2() { return &___G_2; }
	inline void set_G_2(ByteU5BU5D_t3238143234* value)
	{
		___G_2 = value;
		Il2CppCodeGenWriteBarrier((&___G_2), value);
	}

	inline static int32_t get_offset_of_Y_3() { return static_cast<int32_t>(offsetof(DSAParameters_t3790330035, ___Y_3)); }
	inline ByteU5BU5D_t3238143234* get_Y_3() const { return ___Y_3; }
	inline ByteU5BU5D_t3238143234** get_address_of_Y_3() { return &___Y_3; }
	inline void set_Y_3(ByteU5BU5D_t3238143234* value)
	{
		___Y_3 = value;
		Il2CppCodeGenWriteBarrier((&___Y_3), value);
	}

	inline static int32_t get_offset_of_J_4() { return static_cast<int32_t>(offsetof(DSAParameters_t3790330035, ___J_4)); }
	inline ByteU5BU5D_t3238143234* get_J_4() const { return ___J_4; }
	inline ByteU5BU5D_t3238143234** get_address_of_J_4() { return &___J_4; }
	inline void set_J_4(ByteU5BU5D_t3238143234* value)
	{
		___J_4 = value;
		Il2CppCodeGenWriteBarrier((&___J_4), value);
	}

	inline static int32_t get_offset_of_X_5() { return static_cast<int32_t>(offsetof(DSAParameters_t3790330035, ___X_5)); }
	inline ByteU5BU5D_t3238143234* get_X_5() const { return ___X_5; }
	inline ByteU5BU5D_t3238143234** get_address_of_X_5() { return &___X_5; }
	inline void set_X_5(ByteU5BU5D_t3238143234* value)
	{
		___X_5 = value;
		Il2CppCodeGenWriteBarrier((&___X_5), value);
	}

	inline static int32_t get_offset_of_Seed_6() { return static_cast<int32_t>(offsetof(DSAParameters_t3790330035, ___Seed_6)); }
	inline ByteU5BU5D_t3238143234* get_Seed_6() const { return ___Seed_6; }
	inline ByteU5BU5D_t3238143234** get_address_of_Seed_6() { return &___Seed_6; }
	inline void set_Seed_6(ByteU5BU5D_t3238143234* value)
	{
		___Seed_6 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_6), value);
	}

	inline static int32_t get_offset_of_Counter_7() { return static_cast<int32_t>(offsetof(DSAParameters_t3790330035, ___Counter_7)); }
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
struct DSAParameters_t3790330035_marshaled_pinvoke
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
struct DSAParameters_t3790330035_marshaled_com
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
#endif // DSAPARAMETERS_T3790330035_H
#ifndef SYSTEMEXCEPTION_T3730317307_H
#define SYSTEMEXCEPTION_T3730317307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3730317307  : public Exception_t3288061028
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3730317307_H
#ifndef HOPTOTHREADPOOLAWAITABLE_T3243568240_H
#define HOPTOTHREADPOOLAWAITABLE_T3243568240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable
struct  HopToThreadPoolAwaitable_t3243568240 
{
public:
	union
	{
		struct
		{
		};
		uint8_t HopToThreadPoolAwaitable_t3243568240__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOPTOTHREADPOOLAWAITABLE_T3243568240_H
#ifndef STREAM_T3261028515_H
#define STREAM_T3261028515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t3261028515  : public MarshalByRefObject_t2617547684
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t4002044518 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t1866675558 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t3261028515, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t4002044518 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t4002044518 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t4002044518 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t3261028515, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t1866675558 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t1866675558 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t1866675558 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t3261028515_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t3261028515 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t3261028515_StaticFields, ___Null_1)); }
	inline Stream_t3261028515 * get_Null_1() const { return ___Null_1; }
	inline Stream_t3261028515 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t3261028515 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T3261028515_H
#ifndef CANCELLATIONTOKEN_T1520886056_H
#define CANCELLATIONTOKEN_T1520886056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t1520886056 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t158843127 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t1520886056, ___m_source_0)); }
	inline CancellationTokenSource_t158843127 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t158843127 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t158843127 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t1520886056_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t2694143500 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t1520886056_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t2694143500 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t2694143500 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t2694143500 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t1520886056_marshaled_pinvoke
{
	CancellationTokenSource_t158843127 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t1520886056_marshaled_com
{
	CancellationTokenSource_t158843127 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T1520886056_H
#ifndef DSA_T155212402_H
#define DSA_T155212402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t155212402  : public AsymmetricAlgorithm_t809218938
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T155212402_H
#ifndef CONFIGUREDTASKAWAITER_T1533030867_H
#define CONFIGUREDTASKAWAITER_T1533030867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t1533030867 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t3671119414 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t1533030867, ___m_task_0)); }
	inline Task_t3671119414 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3671119414 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3671119414 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t1533030867, ___m_continueOnCapturedContext_1)); }
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
struct ConfiguredTaskAwaiter_t1533030867_marshaled_pinvoke
{
	Task_t3671119414 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t1533030867_marshaled_com
{
	Task_t3671119414 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T1533030867_H
#ifndef CONFIGUREDTASKAWAITER_T2452323930_H
#define CONFIGUREDTASKAWAITER_T2452323930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct  ConfiguredTaskAwaiter_t2452323930 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t3429193233 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2452323930, ___m_task_0)); }
	inline Task_1_t3429193233 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t3429193233 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t3429193233 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t2452323930, ___m_continueOnCapturedContext_1)); }
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
#endif // CONFIGUREDTASKAWAITER_T2452323930_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T3090578574_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T3090578574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t3090578574  : public AsymmetricSignatureDeformatter_t386807421
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t3128138134 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3090578574, ___rsa_0)); }
	inline RSA_t3128138134 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3128138134 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3128138134 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3090578574, ___hashName_1)); }
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
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T3090578574_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T1839371782_H
#define RSAPKCS1SIGNATUREFORMATTER_T1839371782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t1839371782  : public AsymmetricSignatureFormatter_t2325651768
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t3128138134 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	String_t* ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t1839371782, ___rsa_0)); }
	inline RSA_t3128138134 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3128138134 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3128138134 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t1839371782, ___hash_1)); }
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
#endif // RSAPKCS1SIGNATUREFORMATTER_T1839371782_H
#ifndef URLIDENTITYPERMISSION_T4111796069_H
#define URLIDENTITYPERMISSION_T4111796069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UrlIdentityPermission
struct  UrlIdentityPermission_t4111796069  : public CodeAccessPermission_t3087678236
{
public:
	// System.String System.Security.Permissions.UrlIdentityPermission::url
	String_t* ___url_0;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(UrlIdentityPermission_t4111796069, ___url_0)); }
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
#endif // URLIDENTITYPERMISSION_T4111796069_H
#ifndef SITEIDENTITYPERMISSION_T2449938017_H
#define SITEIDENTITYPERMISSION_T2449938017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SiteIdentityPermission
struct  SiteIdentityPermission_t2449938017  : public CodeAccessPermission_t3087678236
{
public:
	// System.String System.Security.Permissions.SiteIdentityPermission::_site
	String_t* ____site_0;

public:
	inline static int32_t get_offset_of__site_0() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t2449938017, ____site_0)); }
	inline String_t* get__site_0() const { return ____site_0; }
	inline String_t** get_address_of__site_0() { return &____site_0; }
	inline void set__site_0(String_t* value)
	{
		____site_0 = value;
		Il2CppCodeGenWriteBarrier((&____site_0), value);
	}
};

struct SiteIdentityPermission_t2449938017_StaticFields
{
public:
	// System.Boolean[] System.Security.Permissions.SiteIdentityPermission::valid
	BooleanU5BU5D_t3859375967* ___valid_1;

public:
	inline static int32_t get_offset_of_valid_1() { return static_cast<int32_t>(offsetof(SiteIdentityPermission_t2449938017_StaticFields, ___valid_1)); }
	inline BooleanU5BU5D_t3859375967* get_valid_1() const { return ___valid_1; }
	inline BooleanU5BU5D_t3859375967** get_address_of_valid_1() { return &___valid_1; }
	inline void set_valid_1(BooleanU5BU5D_t3859375967* value)
	{
		___valid_1 = value;
		Il2CppCodeGenWriteBarrier((&___valid_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SITEIDENTITYPERMISSION_T2449938017_H
#ifndef SNIP_T3960573932_H
#define SNIP_T3960573932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct  SNIP_t3960573932 
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Permissions.StrongNameIdentityPermission/SNIP::PublicKey
	StrongNamePublicKeyBlob_t4217177116 * ___PublicKey_0;
	// System.String System.Security.Permissions.StrongNameIdentityPermission/SNIP::Name
	String_t* ___Name_1;
	// System.Version System.Security.Permissions.StrongNameIdentityPermission/SNIP::AssemblyVersion
	Version_t1961646512 * ___AssemblyVersion_2;

public:
	inline static int32_t get_offset_of_PublicKey_0() { return static_cast<int32_t>(offsetof(SNIP_t3960573932, ___PublicKey_0)); }
	inline StrongNamePublicKeyBlob_t4217177116 * get_PublicKey_0() const { return ___PublicKey_0; }
	inline StrongNamePublicKeyBlob_t4217177116 ** get_address_of_PublicKey_0() { return &___PublicKey_0; }
	inline void set_PublicKey_0(StrongNamePublicKeyBlob_t4217177116 * value)
	{
		___PublicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___PublicKey_0), value);
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SNIP_t3960573932, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_AssemblyVersion_2() { return static_cast<int32_t>(offsetof(SNIP_t3960573932, ___AssemblyVersion_2)); }
	inline Version_t1961646512 * get_AssemblyVersion_2() const { return ___AssemblyVersion_2; }
	inline Version_t1961646512 ** get_address_of_AssemblyVersion_2() { return &___AssemblyVersion_2; }
	inline void set_AssemblyVersion_2(Version_t1961646512 * value)
	{
		___AssemblyVersion_2 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyVersion_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t3960573932_marshaled_pinvoke
{
	StrongNamePublicKeyBlob_t4217177116 * ___PublicKey_0;
	char* ___Name_1;
	Version_t1961646512 * ___AssemblyVersion_2;
};
// Native definition for COM marshalling of System.Security.Permissions.StrongNameIdentityPermission/SNIP
struct SNIP_t3960573932_marshaled_com
{
	StrongNamePublicKeyBlob_t4217177116 * ___PublicKey_0;
	Il2CppChar* ___Name_1;
	Version_t1961646512 * ___AssemblyVersion_2;
};
#endif // SNIP_T3960573932_H
#ifndef DSASIGNATUREFORMATTER_T492396351_H
#define DSASIGNATUREFORMATTER_T492396351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t492396351  : public AsymmetricSignatureFormatter_t2325651768
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::_dsaKey
	DSA_t155212402 * ____dsaKey_0;
	// System.String System.Security.Cryptography.DSASignatureFormatter::_oid
	String_t* ____oid_1;

public:
	inline static int32_t get_offset_of__dsaKey_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t492396351, ____dsaKey_0)); }
	inline DSA_t155212402 * get__dsaKey_0() const { return ____dsaKey_0; }
	inline DSA_t155212402 ** get_address_of__dsaKey_0() { return &____dsaKey_0; }
	inline void set__dsaKey_0(DSA_t155212402 * value)
	{
		____dsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____dsaKey_0), value);
	}

	inline static int32_t get_offset_of__oid_1() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t492396351, ____oid_1)); }
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
#endif // DSASIGNATUREFORMATTER_T492396351_H
#ifndef MD5_T174264562_H
#define MD5_T174264562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t174264562  : public HashAlgorithm_t2213945148
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T174264562_H
#ifndef ENUM_T2026808421_H
#define ENUM_T2026808421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2026808421  : public ValueType_t1706913817
{
public:

public:
};

struct Enum_t2026808421_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1705485309* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2026808421_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1705485309* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1705485309** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1705485309* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2026808421_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2026808421_marshaled_com
{
};
#endif // ENUM_T2026808421_H
#ifndef PUBLISHERIDENTITYPERMISSION_T783287520_H
#define PUBLISHERIDENTITYPERMISSION_T783287520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PublisherIdentityPermission
struct  PublisherIdentityPermission_t783287520  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Permissions.PublisherIdentityPermission::x509
	X509Certificate_t2249872656 * ___x509_0;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(PublisherIdentityPermission_t783287520, ___x509_0)); }
	inline X509Certificate_t2249872656 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t2249872656 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t2249872656 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLISHERIDENTITYPERMISSION_T783287520_H
#ifndef DSASIGNATUREDEFORMATTER_T688764430_H
#define DSASIGNATUREDEFORMATTER_T688764430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t688764430  : public AsymmetricSignatureDeformatter_t386807421
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::_dsaKey
	DSA_t155212402 * ____dsaKey_0;
	// System.String System.Security.Cryptography.DSASignatureDeformatter::_oid
	String_t* ____oid_1;

public:
	inline static int32_t get_offset_of__dsaKey_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t688764430, ____dsaKey_0)); }
	inline DSA_t155212402 * get__dsaKey_0() const { return ____dsaKey_0; }
	inline DSA_t155212402 ** get_address_of__dsaKey_0() { return &____dsaKey_0; }
	inline void set__dsaKey_0(DSA_t155212402 * value)
	{
		____dsaKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____dsaKey_0), value);
	}

	inline static int32_t get_offset_of__oid_1() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t688764430, ____oid_1)); }
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
#endif // DSASIGNATUREDEFORMATTER_T688764430_H
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
#ifndef KEYEDHASHALGORITHM_T2861851642_H
#define KEYEDHASHALGORITHM_T2861851642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t2861851642  : public HashAlgorithm_t2213945148
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t3238143234* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t2861851642, ___KeyValue_4)); }
	inline ByteU5BU5D_t3238143234* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t3238143234** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t3238143234* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T2861851642_H
#ifndef SHA1_T3894497807_H
#define SHA1_T3894497807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t3894497807  : public HashAlgorithm_t2213945148
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T3894497807_H
#ifndef HASHALGORITHMNAME_T900445294_H
#define HASHALGORITHMNAME_T900445294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithmName
struct  HashAlgorithmName_t900445294 
{
public:
	// System.String System.Security.Cryptography.HashAlgorithmName::_name
	String_t* ____name_0;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(HashAlgorithmName_t900445294, ____name_0)); }
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
struct HashAlgorithmName_t900445294_marshaled_pinvoke
{
	char* ____name_0;
};
// Native definition for COM marshalling of System.Security.Cryptography.HashAlgorithmName
struct HashAlgorithmName_t900445294_marshaled_com
{
	Il2CppChar* ____name_0;
};
#endif // HASHALGORITHMNAME_T900445294_H
#ifndef GACIDENTITYPERMISSION_T647361407_H
#define GACIDENTITYPERMISSION_T647361407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.GacIdentityPermission
struct  GacIdentityPermission_t647361407  : public CodeAccessPermission_t3087678236
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GACIDENTITYPERMISSION_T647361407_H
#ifndef RSA_T3128138134_H
#define RSA_T3128138134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3128138134  : public AsymmetricAlgorithm_t809218938
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3128138134_H
#ifndef ASYNCMETHODBUILDERCORE_T3569540942_H
#define ASYNCMETHODBUILDERCORE_T3569540942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t3569540942 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t3034160452 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t3569540942, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t3569540942, ___m_defaultContextAction_1)); }
	inline Action_t3034160452 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t3034160452 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t3034160452 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t3569540942_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t3569540942_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T3569540942_H
#ifndef CRYPTOSTREAMMODE_T532034502_H
#define CRYPTOSTREAMMODE_T532034502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStreamMode
struct  CryptoStreamMode_t532034502 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CryptoStreamMode_t532034502, ___value___2)); }
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
#endif // CRYPTOSTREAMMODE_T532034502_H
#ifndef CSPPROVIDERFLAGS_T1884736043_H
#define CSPPROVIDERFLAGS_T1884736043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t1884736043 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CspProviderFlags_t1884736043, ___value___2)); }
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
#endif // CSPPROVIDERFLAGS_T1884736043_H
#ifndef ASYNCTASKMETHODBUILDER_1_T2734913_H
#define ASYNCTASKMETHODBUILDER_1_T2734913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct  AsyncTaskMethodBuilder_1_t2734913 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t3569540942  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3429193233 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2734913, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t3569540942  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t3569540942 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t3569540942  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2734913, ___m_task_2)); }
	inline Task_1_t3429193233 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t3429193233 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t3429193233 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t2734913_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3429193233 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2734913_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t3429193233 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t3429193233 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t3429193233 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T2734913_H
#ifndef CRYPTOGRAPHICEXCEPTION_T3937215370_H
#define CRYPTOGRAPHICEXCEPTION_T3937215370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t3937215370  : public SystemException_t3730317307
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T3937215370_H
#ifndef MACTRIPLEDES_T3020635656_H
#define MACTRIPLEDES_T3020635656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t3020635656  : public KeyedHashAlgorithm_t2861851642
{
public:
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.MACTripleDES::m_encryptor
	RuntimeObject* ___m_encryptor_5;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.MACTripleDES::_cs
	CryptoStream_t1646338614 * ____cs_6;
	// System.Security.Cryptography.TailStream System.Security.Cryptography.MACTripleDES::_ts
	TailStream_t3883015398 * ____ts_7;
	// System.Int32 System.Security.Cryptography.MACTripleDES::m_bytesPerBlock
	int32_t ___m_bytesPerBlock_8;
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::des
	TripleDES_t1024823572 * ___des_9;

public:
	inline static int32_t get_offset_of_m_encryptor_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t3020635656, ___m_encryptor_5)); }
	inline RuntimeObject* get_m_encryptor_5() const { return ___m_encryptor_5; }
	inline RuntimeObject** get_address_of_m_encryptor_5() { return &___m_encryptor_5; }
	inline void set_m_encryptor_5(RuntimeObject* value)
	{
		___m_encryptor_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_encryptor_5), value);
	}

	inline static int32_t get_offset_of__cs_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t3020635656, ____cs_6)); }
	inline CryptoStream_t1646338614 * get__cs_6() const { return ____cs_6; }
	inline CryptoStream_t1646338614 ** get_address_of__cs_6() { return &____cs_6; }
	inline void set__cs_6(CryptoStream_t1646338614 * value)
	{
		____cs_6 = value;
		Il2CppCodeGenWriteBarrier((&____cs_6), value);
	}

	inline static int32_t get_offset_of__ts_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t3020635656, ____ts_7)); }
	inline TailStream_t3883015398 * get__ts_7() const { return ____ts_7; }
	inline TailStream_t3883015398 ** get_address_of__ts_7() { return &____ts_7; }
	inline void set__ts_7(TailStream_t3883015398 * value)
	{
		____ts_7 = value;
		Il2CppCodeGenWriteBarrier((&____ts_7), value);
	}

	inline static int32_t get_offset_of_m_bytesPerBlock_8() { return static_cast<int32_t>(offsetof(MACTripleDES_t3020635656, ___m_bytesPerBlock_8)); }
	inline int32_t get_m_bytesPerBlock_8() const { return ___m_bytesPerBlock_8; }
	inline int32_t* get_address_of_m_bytesPerBlock_8() { return &___m_bytesPerBlock_8; }
	inline void set_m_bytesPerBlock_8(int32_t value)
	{
		___m_bytesPerBlock_8 = value;
	}

	inline static int32_t get_offset_of_des_9() { return static_cast<int32_t>(offsetof(MACTripleDES_t3020635656, ___des_9)); }
	inline TripleDES_t1024823572 * get_des_9() const { return ___des_9; }
	inline TripleDES_t1024823572 ** get_address_of_des_9() { return &___des_9; }
	inline void set_des_9(TripleDES_t1024823572 * value)
	{
		___des_9 = value;
		Il2CppCodeGenWriteBarrier((&___des_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T3020635656_H
#ifndef PADDINGMODE_T787013845_H
#define PADDINGMODE_T787013845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t787013845 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t787013845, ___value___2)); }
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
#endif // PADDINGMODE_T787013845_H
#ifndef CIPHERMODE_T2969010684_H
#define CIPHERMODE_T2969010684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2969010684 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t2969010684, ___value___2)); }
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
#endif // CIPHERMODE_T2969010684_H
#ifndef TAILSTREAM_T3883015398_H
#define TAILSTREAM_T3883015398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TailStream
struct  TailStream_t3883015398  : public Stream_t3261028515
{
public:
	// System.Byte[] System.Security.Cryptography.TailStream::_Buffer
	ByteU5BU5D_t3238143234* ____Buffer_4;
	// System.Int32 System.Security.Cryptography.TailStream::_BufferSize
	int32_t ____BufferSize_5;
	// System.Int32 System.Security.Cryptography.TailStream::_BufferIndex
	int32_t ____BufferIndex_6;
	// System.Boolean System.Security.Cryptography.TailStream::_BufferFull
	bool ____BufferFull_7;

public:
	inline static int32_t get_offset_of__Buffer_4() { return static_cast<int32_t>(offsetof(TailStream_t3883015398, ____Buffer_4)); }
	inline ByteU5BU5D_t3238143234* get__Buffer_4() const { return ____Buffer_4; }
	inline ByteU5BU5D_t3238143234** get_address_of__Buffer_4() { return &____Buffer_4; }
	inline void set__Buffer_4(ByteU5BU5D_t3238143234* value)
	{
		____Buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____Buffer_4), value);
	}

	inline static int32_t get_offset_of__BufferSize_5() { return static_cast<int32_t>(offsetof(TailStream_t3883015398, ____BufferSize_5)); }
	inline int32_t get__BufferSize_5() const { return ____BufferSize_5; }
	inline int32_t* get_address_of__BufferSize_5() { return &____BufferSize_5; }
	inline void set__BufferSize_5(int32_t value)
	{
		____BufferSize_5 = value;
	}

	inline static int32_t get_offset_of__BufferIndex_6() { return static_cast<int32_t>(offsetof(TailStream_t3883015398, ____BufferIndex_6)); }
	inline int32_t get__BufferIndex_6() const { return ____BufferIndex_6; }
	inline int32_t* get_address_of__BufferIndex_6() { return &____BufferIndex_6; }
	inline void set__BufferIndex_6(int32_t value)
	{
		____BufferIndex_6 = value;
	}

	inline static int32_t get_offset_of__BufferFull_7() { return static_cast<int32_t>(offsetof(TailStream_t3883015398, ____BufferFull_7)); }
	inline bool get__BufferFull_7() const { return ____BufferFull_7; }
	inline bool* get_address_of__BufferFull_7() { return &____BufferFull_7; }
	inline void set__BufferFull_7(bool value)
	{
		____BufferFull_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILSTREAM_T3883015398_H
#ifndef HMAC_T1905000658_H
#define HMAC_T1905000658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t1905000658  : public KeyedHashAlgorithm_t2861851642
{
public:
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t2213945148 * ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t2213945148 * ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_t3238143234* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_t3238143234* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;

public:
	inline static int32_t get_offset_of_blockSizeValue_5() { return static_cast<int32_t>(offsetof(HMAC_t1905000658, ___blockSizeValue_5)); }
	inline int32_t get_blockSizeValue_5() const { return ___blockSizeValue_5; }
	inline int32_t* get_address_of_blockSizeValue_5() { return &___blockSizeValue_5; }
	inline void set_blockSizeValue_5(int32_t value)
	{
		___blockSizeValue_5 = value;
	}

	inline static int32_t get_offset_of_m_hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t1905000658, ___m_hashName_6)); }
	inline String_t* get_m_hashName_6() const { return ___m_hashName_6; }
	inline String_t** get_address_of_m_hashName_6() { return &___m_hashName_6; }
	inline void set_m_hashName_6(String_t* value)
	{
		___m_hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashName_6), value);
	}

	inline static int32_t get_offset_of_m_hash1_7() { return static_cast<int32_t>(offsetof(HMAC_t1905000658, ___m_hash1_7)); }
	inline HashAlgorithm_t2213945148 * get_m_hash1_7() const { return ___m_hash1_7; }
	inline HashAlgorithm_t2213945148 ** get_address_of_m_hash1_7() { return &___m_hash1_7; }
	inline void set_m_hash1_7(HashAlgorithm_t2213945148 * value)
	{
		___m_hash1_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_hash1_7), value);
	}

	inline static int32_t get_offset_of_m_hash2_8() { return static_cast<int32_t>(offsetof(HMAC_t1905000658, ___m_hash2_8)); }
	inline HashAlgorithm_t2213945148 * get_m_hash2_8() const { return ___m_hash2_8; }
	inline HashAlgorithm_t2213945148 ** get_address_of_m_hash2_8() { return &___m_hash2_8; }
	inline void set_m_hash2_8(HashAlgorithm_t2213945148 * value)
	{
		___m_hash2_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_hash2_8), value);
	}

	inline static int32_t get_offset_of_m_inner_9() { return static_cast<int32_t>(offsetof(HMAC_t1905000658, ___m_inner_9)); }
	inline ByteU5BU5D_t3238143234* get_m_inner_9() const { return ___m_inner_9; }
	inline ByteU5BU5D_t3238143234** get_address_of_m_inner_9() { return &___m_inner_9; }
	inline void set_m_inner_9(ByteU5BU5D_t3238143234* value)
	{
		___m_inner_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_inner_9), value);
	}

	inline static int32_t get_offset_of_m_outer_10() { return static_cast<int32_t>(offsetof(HMAC_t1905000658, ___m_outer_10)); }
	inline ByteU5BU5D_t3238143234* get_m_outer_10() const { return ___m_outer_10; }
	inline ByteU5BU5D_t3238143234** get_address_of_m_outer_10() { return &___m_outer_10; }
	inline void set_m_outer_10(ByteU5BU5D_t3238143234* value)
	{
		___m_outer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_outer_10), value);
	}

	inline static int32_t get_offset_of_m_hashing_11() { return static_cast<int32_t>(offsetof(HMAC_t1905000658, ___m_hashing_11)); }
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
#endif // HMAC_T1905000658_H
#ifndef SECURITYZONE_T766715454_H
#define SECURITYZONE_T766715454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityZone
struct  SecurityZone_t766715454 
{
public:
	// System.Int32 System.Security.SecurityZone::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityZone_t766715454, ___value___2)); }
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
#endif // SECURITYZONE_T766715454_H
#ifndef ASYNCTASKMETHODBUILDER_1_T834362856_H
#define ASYNCTASKMETHODBUILDER_1_T834362856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t834362856 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t3569540942  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4260821176 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t834362856, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t3569540942  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t3569540942 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t3569540942  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t834362856, ___m_task_2)); }
	inline Task_1_t4260821176 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4260821176 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4260821176 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t834362856_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4260821176 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t834362856_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4260821176 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4260821176 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4260821176 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T834362856_H
#ifndef FILEIOPERMISSIONACCESS_T3796062330_H
#define FILEIOPERMISSIONACCESS_T3796062330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAccess
struct  FileIOPermissionAccess_t3796062330 
{
public:
	// System.Int32 System.Security.Permissions.FileIOPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileIOPermissionAccess_t3796062330, ___value___2)); }
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
#endif // FILEIOPERMISSIONACCESS_T3796062330_H
#ifndef SECURITYPERMISSIONFLAG_T2022819542_H
#define SECURITYPERMISSIONFLAG_T2022819542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t2022819542 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t2022819542, ___value___2)); }
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
#endif // SECURITYPERMISSIONFLAG_T2022819542_H
#ifndef REGISTRYPERMISSIONACCESS_T480859583_H
#define REGISTRYPERMISSIONACCESS_T480859583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAccess
struct  RegistryPermissionAccess_t480859583 
{
public:
	// System.Int32 System.Security.Permissions.RegistryPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryPermissionAccess_t480859583, ___value___2)); }
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
#endif // REGISTRYPERMISSIONACCESS_T480859583_H
#ifndef FILEDIALOGPERMISSIONACCESS_T1033705253_H
#define FILEDIALOGPERMISSIONACCESS_T1033705253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermissionAccess
struct  FileDialogPermissionAccess_t1033705253 
{
public:
	// System.Int32 System.Security.Permissions.FileDialogPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileDialogPermissionAccess_t1033705253, ___value___2)); }
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
#endif // FILEDIALOGPERMISSIONACCESS_T1033705253_H
#ifndef REFLECTIONPERMISSIONFLAG_T367147693_H
#define REFLECTIONPERMISSIONFLAG_T367147693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionFlag
struct  ReflectionPermissionFlag_t367147693 
{
public:
	// System.Int32 System.Security.Permissions.ReflectionPermissionFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionPermissionFlag_t367147693, ___value___2)); }
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
#endif // REFLECTIONPERMISSIONFLAG_T367147693_H
#ifndef HOSTPROTECTIONRESOURCE_T3218523013_H
#define HOSTPROTECTIONRESOURCE_T3218523013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionResource
struct  HostProtectionResource_t3218523013 
{
public:
	// System.Int32 System.Security.Permissions.HostProtectionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostProtectionResource_t3218523013, ___value___2)); }
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
#endif // HOSTPROTECTIONRESOURCE_T3218523013_H
#ifndef SECURITYACTION_T2678615916_H
#define SECURITYACTION_T2678615916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t2678615916 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityAction_t2678615916, ___value___2)); }
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
#endif // SECURITYACTION_T2678615916_H
#ifndef UIPERMISSIONCLIPBOARD_T3960613657_H
#define UIPERMISSIONCLIPBOARD_T3960613657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionClipboard
struct  UIPermissionClipboard_t3960613657 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionClipboard::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIPermissionClipboard_t3960613657, ___value___2)); }
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
#endif // UIPERMISSIONCLIPBOARD_T3960613657_H
#ifndef UIPERMISSIONWINDOW_T3744212778_H
#define UIPERMISSIONWINDOW_T3744212778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermissionWindow
struct  UIPermissionWindow_t3744212778 
{
public:
	// System.Int32 System.Security.Permissions.UIPermissionWindow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UIPermissionWindow_t3744212778, ___value___2)); }
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
#endif // UIPERMISSIONWINDOW_T3744212778_H
#ifndef PERMISSIONSTATE_T2619702861_H
#define PERMISSIONSTATE_T2619702861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t2619702861 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionState_t2619702861, ___value___2)); }
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
#endif // PERMISSIONSTATE_T2619702861_H
#ifndef KEYCONTAINERPERMISSIONFLAGS_T2973217742_H
#define KEYCONTAINERPERMISSIONFLAGS_T2973217742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionFlags
struct  KeyContainerPermissionFlags_t2973217742 
{
public:
	// System.Int32 System.Security.Permissions.KeyContainerPermissionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionFlags_t2973217742, ___value___2)); }
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
#endif // KEYCONTAINERPERMISSIONFLAGS_T2973217742_H
#ifndef ENVIRONMENTPERMISSIONACCESS_T2642831510_H
#define ENVIRONMENTPERMISSIONACCESS_T2642831510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermissionAccess
struct  EnvironmentPermissionAccess_t2642831510 
{
public:
	// System.Int32 System.Security.Permissions.EnvironmentPermissionAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAccess_t2642831510, ___value___2)); }
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
#endif // ENVIRONMENTPERMISSIONACCESS_T2642831510_H
#ifndef DSACRYPTOSERVICEPROVIDER_T3353344564_H
#define DSACRYPTOSERVICEPROVIDER_T3353344564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t3353344564  : public DSA_t155212402
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t1368833649 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t4215673496 * ___dsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3353344564, ___store_2)); }
	inline KeyPairPersistence_t1368833649 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t1368833649 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t1368833649 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3353344564, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3353344564, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3353344564, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3353344564, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_dsa_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3353344564, ___dsa_7)); }
	inline DSAManaged_t4215673496 * get_dsa_7() const { return ___dsa_7; }
	inline DSAManaged_t4215673496 ** get_address_of_dsa_7() { return &___dsa_7; }
	inline void set_dsa_7(DSAManaged_t4215673496 * value)
	{
		___dsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_7), value);
	}
};

struct DSACryptoServiceProvider_t3353344564_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3353344564_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T3353344564_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T3831295951_H
#define MD5CRYPTOSERVICEPROVIDER_T3831295951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t3831295951  : public MD5_t174264562
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t466307513* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t466307513* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t3238143234* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3831295951, ____H_4)); }
	inline UInt32U5BU5D_t466307513* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t466307513** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t466307513* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3831295951, ___buff_5)); }
	inline UInt32U5BU5D_t466307513* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t466307513** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t466307513* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((&___buff_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3831295951, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3831295951, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_t3238143234* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_t3238143234** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_t3238143234* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_7), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3831295951, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t3831295951_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t466307513* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3831295951_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t466307513* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t466307513** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t466307513* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((&___K_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T3831295951_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T1437340527_H
#define RNGCRYPTOSERVICEPROVIDER_T1437340527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t1437340527  : public RandomNumberGenerator_t503540002
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1437340527, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t1437340527_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1437340527_StaticFields, ____lock_0)); }
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
#endif // RNGCRYPTOSERVICEPROVIDER_T1437340527_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T244241134_H
#define SHA1CRYPTOSERVICEPROVIDER_T244241134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t244241134  : public SHA1_t3894497807
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t2905905619 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t244241134, ___sha_4)); }
	inline SHA1Internal_t2905905619 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2905905619 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2905905619 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T244241134_H
#ifndef ISOLATEDSTORAGECONTAINMENT_T3061652312_H
#define ISOLATEDSTORAGECONTAINMENT_T3061652312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageContainment
struct  IsolatedStorageContainment_t3061652312 
{
public:
	// System.Int32 System.Security.Permissions.IsolatedStorageContainment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IsolatedStorageContainment_t3061652312, ___value___2)); }
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
#endif // ISOLATEDSTORAGECONTAINMENT_T3061652312_H
#ifndef REFLECTIONPERMISSION_T1852449113_H
#define REFLECTIONPERMISSION_T1852449113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermission
struct  ReflectionPermission_t1852449113  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(ReflectionPermission_t1852449113, ___flags_0)); }
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
#endif // REFLECTIONPERMISSION_T1852449113_H
#ifndef KEYCONTAINERPERMISSIONACCESSENTRY_T1002656839_H
#define KEYCONTAINERPERMISSIONACCESSENTRY_T1002656839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermissionAccessEntry
struct  KeyContainerPermissionAccessEntry_t1002656839  : public RuntimeObject
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
	inline static int32_t get_offset_of__flags_0() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t1002656839, ____flags_0)); }
	inline int32_t get__flags_0() const { return ____flags_0; }
	inline int32_t* get_address_of__flags_0() { return &____flags_0; }
	inline void set__flags_0(int32_t value)
	{
		____flags_0 = value;
	}

	inline static int32_t get_offset_of__containerName_1() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t1002656839, ____containerName_1)); }
	inline String_t* get__containerName_1() const { return ____containerName_1; }
	inline String_t** get_address_of__containerName_1() { return &____containerName_1; }
	inline void set__containerName_1(String_t* value)
	{
		____containerName_1 = value;
		Il2CppCodeGenWriteBarrier((&____containerName_1), value);
	}

	inline static int32_t get_offset_of__spec_2() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t1002656839, ____spec_2)); }
	inline int32_t get__spec_2() const { return ____spec_2; }
	inline int32_t* get_address_of__spec_2() { return &____spec_2; }
	inline void set__spec_2(int32_t value)
	{
		____spec_2 = value;
	}

	inline static int32_t get_offset_of__store_3() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t1002656839, ____store_3)); }
	inline String_t* get__store_3() const { return ____store_3; }
	inline String_t** get_address_of__store_3() { return &____store_3; }
	inline void set__store_3(String_t* value)
	{
		____store_3 = value;
		Il2CppCodeGenWriteBarrier((&____store_3), value);
	}

	inline static int32_t get_offset_of__providerName_4() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t1002656839, ____providerName_4)); }
	inline String_t* get__providerName_4() const { return ____providerName_4; }
	inline String_t** get_address_of__providerName_4() { return &____providerName_4; }
	inline void set__providerName_4(String_t* value)
	{
		____providerName_4 = value;
		Il2CppCodeGenWriteBarrier((&____providerName_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(KeyContainerPermissionAccessEntry_t1002656839, ____type_5)); }
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
#endif // KEYCONTAINERPERMISSIONACCESSENTRY_T1002656839_H
#ifndef REGISTRYPERMISSION_T1381292016_H
#define REGISTRYPERMISSION_T1381292016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermission
struct  RegistryPermission_t1381292016  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.RegistryPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::createList
	ArrayList_t825968487 * ___createList_1;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::readList
	ArrayList_t825968487 * ___readList_2;
	// System.Collections.ArrayList System.Security.Permissions.RegistryPermission::writeList
	ArrayList_t825968487 * ___writeList_3;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(RegistryPermission_t1381292016, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_createList_1() { return static_cast<int32_t>(offsetof(RegistryPermission_t1381292016, ___createList_1)); }
	inline ArrayList_t825968487 * get_createList_1() const { return ___createList_1; }
	inline ArrayList_t825968487 ** get_address_of_createList_1() { return &___createList_1; }
	inline void set_createList_1(ArrayList_t825968487 * value)
	{
		___createList_1 = value;
		Il2CppCodeGenWriteBarrier((&___createList_1), value);
	}

	inline static int32_t get_offset_of_readList_2() { return static_cast<int32_t>(offsetof(RegistryPermission_t1381292016, ___readList_2)); }
	inline ArrayList_t825968487 * get_readList_2() const { return ___readList_2; }
	inline ArrayList_t825968487 ** get_address_of_readList_2() { return &___readList_2; }
	inline void set_readList_2(ArrayList_t825968487 * value)
	{
		___readList_2 = value;
		Il2CppCodeGenWriteBarrier((&___readList_2), value);
	}

	inline static int32_t get_offset_of_writeList_3() { return static_cast<int32_t>(offsetof(RegistryPermission_t1381292016, ___writeList_3)); }
	inline ArrayList_t825968487 * get_writeList_3() const { return ___writeList_3; }
	inline ArrayList_t825968487 ** get_address_of_writeList_3() { return &___writeList_3; }
	inline void set_writeList_3(ArrayList_t825968487 * value)
	{
		___writeList_3 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYPERMISSION_T1381292016_H
#ifndef HMACSHA512_T807020312_H
#define HMACSHA512_T807020312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t807020312  : public HMAC_t1905000658
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::m_useLegacyBlockSize
	bool ___m_useLegacyBlockSize_12;

public:
	inline static int32_t get_offset_of_m_useLegacyBlockSize_12() { return static_cast<int32_t>(offsetof(HMACSHA512_t807020312, ___m_useLegacyBlockSize_12)); }
	inline bool get_m_useLegacyBlockSize_12() const { return ___m_useLegacyBlockSize_12; }
	inline bool* get_address_of_m_useLegacyBlockSize_12() { return &___m_useLegacyBlockSize_12; }
	inline void set_m_useLegacyBlockSize_12(bool value)
	{
		___m_useLegacyBlockSize_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T807020312_H
#ifndef KEYCONTAINERPERMISSION_T1648239669_H
#define KEYCONTAINERPERMISSION_T1648239669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.KeyContainerPermission
struct  KeyContainerPermission_t1648239669  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.KeyContainerPermissionAccessEntryCollection System.Security.Permissions.KeyContainerPermission::_accessEntries
	KeyContainerPermissionAccessEntryCollection_t1331421447 * ____accessEntries_0;
	// System.Security.Permissions.KeyContainerPermissionFlags System.Security.Permissions.KeyContainerPermission::_flags
	int32_t ____flags_1;

public:
	inline static int32_t get_offset_of__accessEntries_0() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1648239669, ____accessEntries_0)); }
	inline KeyContainerPermissionAccessEntryCollection_t1331421447 * get__accessEntries_0() const { return ____accessEntries_0; }
	inline KeyContainerPermissionAccessEntryCollection_t1331421447 ** get_address_of__accessEntries_0() { return &____accessEntries_0; }
	inline void set__accessEntries_0(KeyContainerPermissionAccessEntryCollection_t1331421447 * value)
	{
		____accessEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&____accessEntries_0), value);
	}

	inline static int32_t get_offset_of__flags_1() { return static_cast<int32_t>(offsetof(KeyContainerPermission_t1648239669, ____flags_1)); }
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
#endif // KEYCONTAINERPERMISSION_T1648239669_H
#ifndef HOSTPROTECTIONPERMISSION_T3780716613_H
#define HOSTPROTECTIONPERMISSION_T3780716613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionPermission
struct  HostProtectionPermission_t3780716613  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.Permissions.HostProtectionPermission::_resources
	int32_t ____resources_0;

public:
	inline static int32_t get_offset_of__resources_0() { return static_cast<int32_t>(offsetof(HostProtectionPermission_t3780716613, ____resources_0)); }
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
#endif // HOSTPROTECTIONPERMISSION_T3780716613_H
#ifndef SYMMETRICALGORITHM_T4118296959_H
#define SYMMETRICALGORITHM_T4118296959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4118296959  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3238143234* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3238143234* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t4282168330* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t4282168330* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___IVValue_2)); }
	inline ByteU5BU5D_t3238143234* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_t3238143234** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_t3238143234* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_2), value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___KeyValue_3)); }
	inline ByteU5BU5D_t3238143234* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3238143234** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3238143234* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t4282168330* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t4282168330** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t4282168330* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t4282168330* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t4282168330** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t4282168330* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4118296959, ___PaddingValue_8)); }
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
#endif // SYMMETRICALGORITHM_T4118296959_H
#ifndef HMACSHA256_T1807254422_H
#define HMACSHA256_T1807254422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t1807254422  : public HMAC_t1905000658
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T1807254422_H
#ifndef HMACSHA1_T2462935510_H
#define HMACSHA1_T2462935510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t2462935510  : public HMAC_t1905000658
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T2462935510_H
#ifndef HMACSHA384_T2188926666_H
#define HMACSHA384_T2188926666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t2188926666  : public HMAC_t1905000658
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::m_useLegacyBlockSize
	bool ___m_useLegacyBlockSize_12;

public:
	inline static int32_t get_offset_of_m_useLegacyBlockSize_12() { return static_cast<int32_t>(offsetof(HMACSHA384_t2188926666, ___m_useLegacyBlockSize_12)); }
	inline bool get_m_useLegacyBlockSize_12() const { return ___m_useLegacyBlockSize_12; }
	inline bool* get_address_of_m_useLegacyBlockSize_12() { return &___m_useLegacyBlockSize_12; }
	inline void set_m_useLegacyBlockSize_12(bool value)
	{
		___m_useLegacyBlockSize_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T2188926666_H
#ifndef HMACMD5_T1783405236_H
#define HMACMD5_T1783405236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t1783405236  : public HMAC_t1905000658
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T1783405236_H
#ifndef RSACRYPTOSERVICEPROVIDER_T422262756_H
#define RSACRYPTOSERVICEPROVIDER_T422262756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t422262756  : public RSA_t3128138134
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t1368833649 * ___store_2;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t3031225890 * ___rsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t422262756, ___store_2)); }
	inline KeyPairPersistence_t1368833649 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t1368833649 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t1368833649 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t422262756, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t422262756, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t422262756, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t422262756, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_rsa_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t422262756, ___rsa_7)); }
	inline RSAManaged_t3031225890 * get_rsa_7() const { return ___rsa_7; }
	inline RSAManaged_t3031225890 ** get_address_of_rsa_7() { return &___rsa_7; }
	inline void set_rsa_7(RSAManaged_t3031225890 * value)
	{
		___rsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_7), value);
	}
};

struct RSACryptoServiceProvider_t422262756_StaticFields
{
public:
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_s_UseMachineKeyStore_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t422262756_StaticFields, ___s_UseMachineKeyStore_8)); }
	inline int32_t get_s_UseMachineKeyStore_8() const { return ___s_UseMachineKeyStore_8; }
	inline int32_t* get_address_of_s_UseMachineKeyStore_8() { return &___s_UseMachineKeyStore_8; }
	inline void set_s_UseMachineKeyStore_8(int32_t value)
	{
		___s_UseMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T422262756_H
#ifndef ENVIRONMENTPERMISSION_T3405383696_H
#define ENVIRONMENTPERMISSION_T3405383696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermission
struct  EnvironmentPermission_t3405383696  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.EnvironmentPermission::_state
	int32_t ____state_0;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::readList
	ArrayList_t825968487 * ___readList_1;
	// System.Collections.ArrayList System.Security.Permissions.EnvironmentPermission::writeList
	ArrayList_t825968487 * ___writeList_2;

public:
	inline static int32_t get_offset_of__state_0() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t3405383696, ____state_0)); }
	inline int32_t get__state_0() const { return ____state_0; }
	inline int32_t* get_address_of__state_0() { return &____state_0; }
	inline void set__state_0(int32_t value)
	{
		____state_0 = value;
	}

	inline static int32_t get_offset_of_readList_1() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t3405383696, ___readList_1)); }
	inline ArrayList_t825968487 * get_readList_1() const { return ___readList_1; }
	inline ArrayList_t825968487 ** get_address_of_readList_1() { return &___readList_1; }
	inline void set_readList_1(ArrayList_t825968487 * value)
	{
		___readList_1 = value;
		Il2CppCodeGenWriteBarrier((&___readList_1), value);
	}

	inline static int32_t get_offset_of_writeList_2() { return static_cast<int32_t>(offsetof(EnvironmentPermission_t3405383696, ___writeList_2)); }
	inline ArrayList_t825968487 * get_writeList_2() const { return ___writeList_2; }
	inline ArrayList_t825968487 ** get_address_of_writeList_2() { return &___writeList_2; }
	inline void set_writeList_2(ArrayList_t825968487 * value)
	{
		___writeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENTPERMISSION_T3405383696_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T424018894_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T424018894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t424018894  : public CryptographicException_t3937215370
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T424018894_H
#ifndef ZONEIDENTITYPERMISSION_T1933385239_H
#define ZONEIDENTITYPERMISSION_T1933385239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ZoneIdentityPermission
struct  ZoneIdentityPermission_t1933385239  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.SecurityZone System.Security.Permissions.ZoneIdentityPermission::zone
	int32_t ___zone_0;

public:
	inline static int32_t get_offset_of_zone_0() { return static_cast<int32_t>(offsetof(ZoneIdentityPermission_t1933385239, ___zone_0)); }
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
#endif // ZONEIDENTITYPERMISSION_T1933385239_H
#ifndef CRYPTOSTREAM_T1646338614_H
#define CRYPTOSTREAM_T1646338614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t1646338614  : public Stream_t3261028515
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t3261028515 * ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_Transform
	RuntimeObject* ____Transform_5;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_InputBuffer
	ByteU5BU5D_t3238143234* ____InputBuffer_6;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBufferIndex
	int32_t ____InputBufferIndex_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_InputBlockSize
	int32_t ____InputBlockSize_8;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_OutputBuffer
	ByteU5BU5D_t3238143234* ____OutputBuffer_9;
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
	inline static int32_t get_offset_of__stream_4() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____stream_4)); }
	inline Stream_t3261028515 * get__stream_4() const { return ____stream_4; }
	inline Stream_t3261028515 ** get_address_of__stream_4() { return &____stream_4; }
	inline void set__stream_4(Stream_t3261028515 * value)
	{
		____stream_4 = value;
		Il2CppCodeGenWriteBarrier((&____stream_4), value);
	}

	inline static int32_t get_offset_of__Transform_5() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____Transform_5)); }
	inline RuntimeObject* get__Transform_5() const { return ____Transform_5; }
	inline RuntimeObject** get_address_of__Transform_5() { return &____Transform_5; }
	inline void set__Transform_5(RuntimeObject* value)
	{
		____Transform_5 = value;
		Il2CppCodeGenWriteBarrier((&____Transform_5), value);
	}

	inline static int32_t get_offset_of__InputBuffer_6() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____InputBuffer_6)); }
	inline ByteU5BU5D_t3238143234* get__InputBuffer_6() const { return ____InputBuffer_6; }
	inline ByteU5BU5D_t3238143234** get_address_of__InputBuffer_6() { return &____InputBuffer_6; }
	inline void set__InputBuffer_6(ByteU5BU5D_t3238143234* value)
	{
		____InputBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____InputBuffer_6), value);
	}

	inline static int32_t get_offset_of__InputBufferIndex_7() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____InputBufferIndex_7)); }
	inline int32_t get__InputBufferIndex_7() const { return ____InputBufferIndex_7; }
	inline int32_t* get_address_of__InputBufferIndex_7() { return &____InputBufferIndex_7; }
	inline void set__InputBufferIndex_7(int32_t value)
	{
		____InputBufferIndex_7 = value;
	}

	inline static int32_t get_offset_of__InputBlockSize_8() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____InputBlockSize_8)); }
	inline int32_t get__InputBlockSize_8() const { return ____InputBlockSize_8; }
	inline int32_t* get_address_of__InputBlockSize_8() { return &____InputBlockSize_8; }
	inline void set__InputBlockSize_8(int32_t value)
	{
		____InputBlockSize_8 = value;
	}

	inline static int32_t get_offset_of__OutputBuffer_9() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____OutputBuffer_9)); }
	inline ByteU5BU5D_t3238143234* get__OutputBuffer_9() const { return ____OutputBuffer_9; }
	inline ByteU5BU5D_t3238143234** get_address_of__OutputBuffer_9() { return &____OutputBuffer_9; }
	inline void set__OutputBuffer_9(ByteU5BU5D_t3238143234* value)
	{
		____OutputBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((&____OutputBuffer_9), value);
	}

	inline static int32_t get_offset_of__OutputBufferIndex_10() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____OutputBufferIndex_10)); }
	inline int32_t get__OutputBufferIndex_10() const { return ____OutputBufferIndex_10; }
	inline int32_t* get_address_of__OutputBufferIndex_10() { return &____OutputBufferIndex_10; }
	inline void set__OutputBufferIndex_10(int32_t value)
	{
		____OutputBufferIndex_10 = value;
	}

	inline static int32_t get_offset_of__OutputBlockSize_11() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____OutputBlockSize_11)); }
	inline int32_t get__OutputBlockSize_11() const { return ____OutputBlockSize_11; }
	inline int32_t* get_address_of__OutputBlockSize_11() { return &____OutputBlockSize_11; }
	inline void set__OutputBlockSize_11(int32_t value)
	{
		____OutputBlockSize_11 = value;
	}

	inline static int32_t get_offset_of__transformMode_12() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____transformMode_12)); }
	inline int32_t get__transformMode_12() const { return ____transformMode_12; }
	inline int32_t* get_address_of__transformMode_12() { return &____transformMode_12; }
	inline void set__transformMode_12(int32_t value)
	{
		____transformMode_12 = value;
	}

	inline static int32_t get_offset_of__canRead_13() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____canRead_13)); }
	inline bool get__canRead_13() const { return ____canRead_13; }
	inline bool* get_address_of__canRead_13() { return &____canRead_13; }
	inline void set__canRead_13(bool value)
	{
		____canRead_13 = value;
	}

	inline static int32_t get_offset_of__canWrite_14() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____canWrite_14)); }
	inline bool get__canWrite_14() const { return ____canWrite_14; }
	inline bool* get_address_of__canWrite_14() { return &____canWrite_14; }
	inline void set__canWrite_14(bool value)
	{
		____canWrite_14 = value;
	}

	inline static int32_t get_offset_of__finalBlockTransformed_15() { return static_cast<int32_t>(offsetof(CryptoStream_t1646338614, ____finalBlockTransformed_15)); }
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
#endif // CRYPTOSTREAM_T1646338614_H
#ifndef UIPERMISSION_T4242026986_H
#define UIPERMISSION_T4242026986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.UIPermission
struct  UIPermission_t4242026986  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.UIPermissionWindow System.Security.Permissions.UIPermission::_window
	int32_t ____window_0;
	// System.Security.Permissions.UIPermissionClipboard System.Security.Permissions.UIPermission::_clipboard
	int32_t ____clipboard_1;

public:
	inline static int32_t get_offset_of__window_0() { return static_cast<int32_t>(offsetof(UIPermission_t4242026986, ____window_0)); }
	inline int32_t get__window_0() const { return ____window_0; }
	inline int32_t* get_address_of__window_0() { return &____window_0; }
	inline void set__window_0(int32_t value)
	{
		____window_0 = value;
	}

	inline static int32_t get_offset_of__clipboard_1() { return static_cast<int32_t>(offsetof(UIPermission_t4242026986, ____clipboard_1)); }
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
#endif // UIPERMISSION_T4242026986_H
#ifndef HMACRIPEMD160_T3904173651_H
#define HMACRIPEMD160_T3904173651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t3904173651  : public HMAC_t1905000658
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T3904173651_H
#ifndef U3CREADASYNCINTERNALU3ED__34_T868710510_H
#define U3CREADASYNCINTERNALU3ED__34_T868710510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34
struct  U3CReadAsyncInternalU3Ed__34_t868710510 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>t__builder
	AsyncTaskMethodBuilder_1_t2734913  ___U3CU3Et__builder_1;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>4__this
	CryptoStream_t1646338614 * ___U3CU3E4__this_2;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::count
	int32_t ___count_3;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::offset
	int32_t ___offset_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::buffer
	ByteU5BU5D_t3238143234* ___buffer_5;
	// System.Threading.CancellationToken System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::cancellationToken
	CancellationToken_t1520886056  ___cancellationToken_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<tempInputBuffer>5__1
	ByteU5BU5D_t3238143234* ___U3CtempInputBufferU3E5__1_7;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<currentOutputIndex>5__2
	int32_t ___U3CcurrentOutputIndexU3E5__2_8;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<bytesToDeliver>5__3
	int32_t ___U3CbytesToDeliverU3E5__3_9;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<sem>5__4
	SemaphoreSlim_t1866675558 * ___U3CsemU3E5__4_10;
	// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__1
	HopToThreadPoolAwaitable_t3243568240  ___U3CU3Eu__1_11;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__2
	ConfiguredTaskAwaiter_t1533030867  ___U3CU3Eu__2_12;
	// System.Int32 System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>7__wrap1
	int32_t ___U3CU3E7__wrap1_13;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.Security.Cryptography.CryptoStream/<ReadAsyncInternal>d__34::<>u__3
	ConfiguredTaskAwaiter_t2452323930  ___U3CU3Eu__3_14;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2734913  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2734913 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2734913  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CU3E4__this_2)); }
	inline CryptoStream_t1646338614 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CryptoStream_t1646338614 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CryptoStream_t1646338614 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___buffer_5)); }
	inline ByteU5BU5D_t3238143234* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t3238143234** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t3238143234* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___cancellationToken_6)); }
	inline CancellationToken_t1520886056  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t1520886056 * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t1520886056  value)
	{
		___cancellationToken_6 = value;
	}

	inline static int32_t get_offset_of_U3CtempInputBufferU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CtempInputBufferU3E5__1_7)); }
	inline ByteU5BU5D_t3238143234* get_U3CtempInputBufferU3E5__1_7() const { return ___U3CtempInputBufferU3E5__1_7; }
	inline ByteU5BU5D_t3238143234** get_address_of_U3CtempInputBufferU3E5__1_7() { return &___U3CtempInputBufferU3E5__1_7; }
	inline void set_U3CtempInputBufferU3E5__1_7(ByteU5BU5D_t3238143234* value)
	{
		___U3CtempInputBufferU3E5__1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtempInputBufferU3E5__1_7), value);
	}

	inline static int32_t get_offset_of_U3CcurrentOutputIndexU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CcurrentOutputIndexU3E5__2_8)); }
	inline int32_t get_U3CcurrentOutputIndexU3E5__2_8() const { return ___U3CcurrentOutputIndexU3E5__2_8; }
	inline int32_t* get_address_of_U3CcurrentOutputIndexU3E5__2_8() { return &___U3CcurrentOutputIndexU3E5__2_8; }
	inline void set_U3CcurrentOutputIndexU3E5__2_8(int32_t value)
	{
		___U3CcurrentOutputIndexU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CbytesToDeliverU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CbytesToDeliverU3E5__3_9)); }
	inline int32_t get_U3CbytesToDeliverU3E5__3_9() const { return ___U3CbytesToDeliverU3E5__3_9; }
	inline int32_t* get_address_of_U3CbytesToDeliverU3E5__3_9() { return &___U3CbytesToDeliverU3E5__3_9; }
	inline void set_U3CbytesToDeliverU3E5__3_9(int32_t value)
	{
		___U3CbytesToDeliverU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CsemU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CsemU3E5__4_10)); }
	inline SemaphoreSlim_t1866675558 * get_U3CsemU3E5__4_10() const { return ___U3CsemU3E5__4_10; }
	inline SemaphoreSlim_t1866675558 ** get_address_of_U3CsemU3E5__4_10() { return &___U3CsemU3E5__4_10; }
	inline void set_U3CsemU3E5__4_10(SemaphoreSlim_t1866675558 * value)
	{
		___U3CsemU3E5__4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsemU3E5__4_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CU3Eu__1_11)); }
	inline HopToThreadPoolAwaitable_t3243568240  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline HopToThreadPoolAwaitable_t3243568240 * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(HopToThreadPoolAwaitable_t3243568240  value)
	{
		___U3CU3Eu__1_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_12() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CU3Eu__2_12)); }
	inline ConfiguredTaskAwaiter_t1533030867  get_U3CU3Eu__2_12() const { return ___U3CU3Eu__2_12; }
	inline ConfiguredTaskAwaiter_t1533030867 * get_address_of_U3CU3Eu__2_12() { return &___U3CU3Eu__2_12; }
	inline void set_U3CU3Eu__2_12(ConfiguredTaskAwaiter_t1533030867  value)
	{
		___U3CU3Eu__2_12 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_13() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CU3E7__wrap1_13)); }
	inline int32_t get_U3CU3E7__wrap1_13() const { return ___U3CU3E7__wrap1_13; }
	inline int32_t* get_address_of_U3CU3E7__wrap1_13() { return &___U3CU3E7__wrap1_13; }
	inline void set_U3CU3E7__wrap1_13(int32_t value)
	{
		___U3CU3E7__wrap1_13 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_14() { return static_cast<int32_t>(offsetof(U3CReadAsyncInternalU3Ed__34_t868710510, ___U3CU3Eu__3_14)); }
	inline ConfiguredTaskAwaiter_t2452323930  get_U3CU3Eu__3_14() const { return ___U3CU3Eu__3_14; }
	inline ConfiguredTaskAwaiter_t2452323930 * get_address_of_U3CU3Eu__3_14() { return &___U3CU3Eu__3_14; }
	inline void set_U3CU3Eu__3_14(ConfiguredTaskAwaiter_t2452323930  value)
	{
		___U3CU3Eu__3_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREADASYNCINTERNALU3ED__34_T868710510_H
#ifndef FILEDIALOGPERMISSION_T26330297_H
#define FILEDIALOGPERMISSION_T26330297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileDialogPermission
struct  FileDialogPermission_t26330297  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.FileDialogPermissionAccess System.Security.Permissions.FileDialogPermission::_access
	int32_t ____access_0;

public:
	inline static int32_t get_offset_of__access_0() { return static_cast<int32_t>(offsetof(FileDialogPermission_t26330297, ____access_0)); }
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
#endif // FILEDIALOGPERMISSION_T26330297_H
#ifndef FILEIOPERMISSION_T3002594416_H
#define FILEIOPERMISSION_T3002594416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermission
struct  FileIOPermission_t3002594416  : public CodeAccessPermission_t3087678236
{
public:
	// System.Boolean System.Security.Permissions.FileIOPermission::m_Unrestricted
	bool ___m_Unrestricted_2;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllFilesAccess
	int32_t ___m_AllFilesAccess_3;
	// System.Security.Permissions.FileIOPermissionAccess System.Security.Permissions.FileIOPermission::m_AllLocalFilesAccess
	int32_t ___m_AllLocalFilesAccess_4;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::readList
	ArrayList_t825968487 * ___readList_5;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::writeList
	ArrayList_t825968487 * ___writeList_6;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::appendList
	ArrayList_t825968487 * ___appendList_7;
	// System.Collections.ArrayList System.Security.Permissions.FileIOPermission::pathList
	ArrayList_t825968487 * ___pathList_8;

public:
	inline static int32_t get_offset_of_m_Unrestricted_2() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416, ___m_Unrestricted_2)); }
	inline bool get_m_Unrestricted_2() const { return ___m_Unrestricted_2; }
	inline bool* get_address_of_m_Unrestricted_2() { return &___m_Unrestricted_2; }
	inline void set_m_Unrestricted_2(bool value)
	{
		___m_Unrestricted_2 = value;
	}

	inline static int32_t get_offset_of_m_AllFilesAccess_3() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416, ___m_AllFilesAccess_3)); }
	inline int32_t get_m_AllFilesAccess_3() const { return ___m_AllFilesAccess_3; }
	inline int32_t* get_address_of_m_AllFilesAccess_3() { return &___m_AllFilesAccess_3; }
	inline void set_m_AllFilesAccess_3(int32_t value)
	{
		___m_AllFilesAccess_3 = value;
	}

	inline static int32_t get_offset_of_m_AllLocalFilesAccess_4() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416, ___m_AllLocalFilesAccess_4)); }
	inline int32_t get_m_AllLocalFilesAccess_4() const { return ___m_AllLocalFilesAccess_4; }
	inline int32_t* get_address_of_m_AllLocalFilesAccess_4() { return &___m_AllLocalFilesAccess_4; }
	inline void set_m_AllLocalFilesAccess_4(int32_t value)
	{
		___m_AllLocalFilesAccess_4 = value;
	}

	inline static int32_t get_offset_of_readList_5() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416, ___readList_5)); }
	inline ArrayList_t825968487 * get_readList_5() const { return ___readList_5; }
	inline ArrayList_t825968487 ** get_address_of_readList_5() { return &___readList_5; }
	inline void set_readList_5(ArrayList_t825968487 * value)
	{
		___readList_5 = value;
		Il2CppCodeGenWriteBarrier((&___readList_5), value);
	}

	inline static int32_t get_offset_of_writeList_6() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416, ___writeList_6)); }
	inline ArrayList_t825968487 * get_writeList_6() const { return ___writeList_6; }
	inline ArrayList_t825968487 ** get_address_of_writeList_6() { return &___writeList_6; }
	inline void set_writeList_6(ArrayList_t825968487 * value)
	{
		___writeList_6 = value;
		Il2CppCodeGenWriteBarrier((&___writeList_6), value);
	}

	inline static int32_t get_offset_of_appendList_7() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416, ___appendList_7)); }
	inline ArrayList_t825968487 * get_appendList_7() const { return ___appendList_7; }
	inline ArrayList_t825968487 ** get_address_of_appendList_7() { return &___appendList_7; }
	inline void set_appendList_7(ArrayList_t825968487 * value)
	{
		___appendList_7 = value;
		Il2CppCodeGenWriteBarrier((&___appendList_7), value);
	}

	inline static int32_t get_offset_of_pathList_8() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416, ___pathList_8)); }
	inline ArrayList_t825968487 * get_pathList_8() const { return ___pathList_8; }
	inline ArrayList_t825968487 ** get_address_of_pathList_8() { return &___pathList_8; }
	inline void set_pathList_8(ArrayList_t825968487 * value)
	{
		___pathList_8 = value;
		Il2CppCodeGenWriteBarrier((&___pathList_8), value);
	}
};

struct FileIOPermission_t3002594416_StaticFields
{
public:
	// System.Char[] System.Security.Permissions.FileIOPermission::BadPathNameCharacters
	CharU5BU5D_t1705485309* ___BadPathNameCharacters_0;
	// System.Char[] System.Security.Permissions.FileIOPermission::BadFileNameCharacters
	CharU5BU5D_t1705485309* ___BadFileNameCharacters_1;

public:
	inline static int32_t get_offset_of_BadPathNameCharacters_0() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416_StaticFields, ___BadPathNameCharacters_0)); }
	inline CharU5BU5D_t1705485309* get_BadPathNameCharacters_0() const { return ___BadPathNameCharacters_0; }
	inline CharU5BU5D_t1705485309** get_address_of_BadPathNameCharacters_0() { return &___BadPathNameCharacters_0; }
	inline void set_BadPathNameCharacters_0(CharU5BU5D_t1705485309* value)
	{
		___BadPathNameCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((&___BadPathNameCharacters_0), value);
	}

	inline static int32_t get_offset_of_BadFileNameCharacters_1() { return static_cast<int32_t>(offsetof(FileIOPermission_t3002594416_StaticFields, ___BadFileNameCharacters_1)); }
	inline CharU5BU5D_t1705485309* get_BadFileNameCharacters_1() const { return ___BadFileNameCharacters_1; }
	inline CharU5BU5D_t1705485309** get_address_of_BadFileNameCharacters_1() { return &___BadFileNameCharacters_1; }
	inline void set_BadFileNameCharacters_1(CharU5BU5D_t1705485309* value)
	{
		___BadFileNameCharacters_1 = value;
		Il2CppCodeGenWriteBarrier((&___BadFileNameCharacters_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEIOPERMISSION_T3002594416_H
#ifndef STRONGNAMEIDENTITYPERMISSION_T1925416511_H
#define STRONGNAMEIDENTITYPERMISSION_T1925416511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermission
struct  StrongNameIdentityPermission_t1925416511  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.PermissionState System.Security.Permissions.StrongNameIdentityPermission::_state
	int32_t ____state_1;
	// System.Collections.ArrayList System.Security.Permissions.StrongNameIdentityPermission::_list
	ArrayList_t825968487 * ____list_2;

public:
	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t1925416511, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__list_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t1925416511, ____list_2)); }
	inline ArrayList_t825968487 * get__list_2() const { return ____list_2; }
	inline ArrayList_t825968487 ** get_address_of__list_2() { return &____list_2; }
	inline void set__list_2(ArrayList_t825968487 * value)
	{
		____list_2 = value;
		Il2CppCodeGenWriteBarrier((&____list_2), value);
	}
};

struct StrongNameIdentityPermission_t1925416511_StaticFields
{
public:
	// System.Version System.Security.Permissions.StrongNameIdentityPermission::defaultVersion
	Version_t1961646512 * ___defaultVersion_0;

public:
	inline static int32_t get_offset_of_defaultVersion_0() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermission_t1925416511_StaticFields, ___defaultVersion_0)); }
	inline Version_t1961646512 * get_defaultVersion_0() const { return ___defaultVersion_0; }
	inline Version_t1961646512 ** get_address_of_defaultVersion_0() { return &___defaultVersion_0; }
	inline void set_defaultVersion_0(Version_t1961646512 * value)
	{
		___defaultVersion_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultVersion_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEIDENTITYPERMISSION_T1925416511_H
#ifndef ISOLATEDSTORAGEPERMISSION_T2507093320_H
#define ISOLATEDSTORAGEPERMISSION_T2507093320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStoragePermission
struct  IsolatedStoragePermission_t2507093320  : public CodeAccessPermission_t3087678236
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
	inline static int32_t get_offset_of_m_userQuota_0() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2507093320, ___m_userQuota_0)); }
	inline int64_t get_m_userQuota_0() const { return ___m_userQuota_0; }
	inline int64_t* get_address_of_m_userQuota_0() { return &___m_userQuota_0; }
	inline void set_m_userQuota_0(int64_t value)
	{
		___m_userQuota_0 = value;
	}

	inline static int32_t get_offset_of_m_machineQuota_1() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2507093320, ___m_machineQuota_1)); }
	inline int64_t get_m_machineQuota_1() const { return ___m_machineQuota_1; }
	inline int64_t* get_address_of_m_machineQuota_1() { return &___m_machineQuota_1; }
	inline void set_m_machineQuota_1(int64_t value)
	{
		___m_machineQuota_1 = value;
	}

	inline static int32_t get_offset_of_m_expirationDays_2() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2507093320, ___m_expirationDays_2)); }
	inline int64_t get_m_expirationDays_2() const { return ___m_expirationDays_2; }
	inline int64_t* get_address_of_m_expirationDays_2() { return &___m_expirationDays_2; }
	inline void set_m_expirationDays_2(int64_t value)
	{
		___m_expirationDays_2 = value;
	}

	inline static int32_t get_offset_of_m_permanentData_3() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2507093320, ___m_permanentData_3)); }
	inline bool get_m_permanentData_3() const { return ___m_permanentData_3; }
	inline bool* get_address_of_m_permanentData_3() { return &___m_permanentData_3; }
	inline void set_m_permanentData_3(bool value)
	{
		___m_permanentData_3 = value;
	}

	inline static int32_t get_offset_of_m_allowed_4() { return static_cast<int32_t>(offsetof(IsolatedStoragePermission_t2507093320, ___m_allowed_4)); }
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
#endif // ISOLATEDSTORAGEPERMISSION_T2507093320_H
#ifndef SECURITYPERMISSION_T1988712824_H
#define SECURITYPERMISSION_T1988712824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t1988712824  : public CodeAccessPermission_t3087678236
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t1988712824, ___flags_0)); }
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
#endif // SECURITYPERMISSION_T1988712824_H
#ifndef SECURITYATTRIBUTE_T1696713085_H
#define SECURITYATTRIBUTE_T1696713085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t1696713085  : public Attribute_t1602879233
{
public:
	// System.Security.Permissions.SecurityAction System.Security.Permissions.SecurityAttribute::m_Action
	int32_t ___m_Action_0;
	// System.Boolean System.Security.Permissions.SecurityAttribute::m_Unrestricted
	bool ___m_Unrestricted_1;

public:
	inline static int32_t get_offset_of_m_Action_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t1696713085, ___m_Action_0)); }
	inline int32_t get_m_Action_0() const { return ___m_Action_0; }
	inline int32_t* get_address_of_m_Action_0() { return &___m_Action_0; }
	inline void set_m_Action_0(int32_t value)
	{
		___m_Action_0 = value;
	}

	inline static int32_t get_offset_of_m_Unrestricted_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t1696713085, ___m_Unrestricted_1)); }
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
#endif // SECURITYATTRIBUTE_T1696713085_H
#ifndef ASYNCTASKMETHODBUILDER_T3844559353_H
#define ASYNCTASKMETHODBUILDER_T3844559353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3844559353 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t834362856  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3844559353, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t834362856  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t834362856 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t834362856  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3844559353_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t4260821176 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3844559353_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t4260821176 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t4260821176 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t4260821176 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3844559353_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t834362856  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3844559353_marshaled_com
{
	AsyncTaskMethodBuilder_1_t834362856  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3844559353_H
#ifndef SYMMETRICTRANSFORM_T2586807002_H
#define SYMMETRICTRANSFORM_T2586807002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t2586807002  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4118296959 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3238143234* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3238143234* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3238143234* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3238143234* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t503540002 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___algo_0)); }
	inline SymmetricAlgorithm_t4118296959 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4118296959 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4118296959 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___temp_3)); }
	inline ByteU5BU5D_t3238143234* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3238143234** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3238143234* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___temp2_4)); }
	inline ByteU5BU5D_t3238143234* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3238143234** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3238143234* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___workBuff_5)); }
	inline ByteU5BU5D_t3238143234* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3238143234** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3238143234* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___workout_6)); }
	inline ByteU5BU5D_t3238143234* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3238143234** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3238143234* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2586807002, ____rng_11)); }
	inline RandomNumberGenerator_t503540002 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t503540002 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t503540002 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T2586807002_H
#ifndef TRIPLEDESTRANSFORM_T2450898061_H
#define TRIPLEDESTRANSFORM_T2450898061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t2450898061  : public SymmetricTransform_t2586807002
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t1595996680 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t1595996680 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t1595996680 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t1595996680 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t1595996680 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t1595996680 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2450898061, ___E1_12)); }
	inline DESTransform_t1595996680 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t1595996680 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t1595996680 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2450898061, ___D2_13)); }
	inline DESTransform_t1595996680 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t1595996680 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t1595996680 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2450898061, ___E3_14)); }
	inline DESTransform_t1595996680 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t1595996680 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t1595996680 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2450898061, ___D1_15)); }
	inline DESTransform_t1595996680 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t1595996680 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t1595996680 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2450898061, ___E2_16)); }
	inline DESTransform_t1595996680 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t1595996680 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t1595996680 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2450898061, ___D3_17)); }
	inline DESTransform_t1595996680 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t1595996680 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t1595996680 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T2450898061_H
#ifndef AES_T1486933197_H
#define AES_T1486933197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1486933197  : public SymmetricAlgorithm_t4118296959
{
public:

public:
};

struct Aes_t1486933197_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_t4282168330* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_t4282168330* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_t1486933197_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t4282168330* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t4282168330** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t4282168330* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_t1486933197_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t4282168330* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t4282168330** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t4282168330* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1486933197_H
#ifndef DES_T2370064903_H
#define DES_T2370064903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t2370064903  : public SymmetricAlgorithm_t4118296959
{
public:

public:
};

struct DES_t2370064903_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.DES::s_legalBlockSizes
	KeySizesU5BU5D_t4282168330* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.DES::s_legalKeySizes
	KeySizesU5BU5D_t4282168330* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(DES_t2370064903_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t4282168330* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t4282168330** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t4282168330* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(DES_t2370064903_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t4282168330* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t4282168330** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t4282168330* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T2370064903_H
#ifndef U3CWRITEASYNCINTERNALU3ED__37_T549021138_H
#define U3CWRITEASYNCINTERNALU3ED__37_T549021138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37
struct  U3CWriteAsyncInternalU3Ed__37_t549021138 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>t__builder
	AsyncTaskMethodBuilder_t3844559353  ___U3CU3Et__builder_1;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>4__this
	CryptoStream_t1646338614 * ___U3CU3E4__this_2;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::count
	int32_t ___count_3;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::offset
	int32_t ___offset_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::buffer
	ByteU5BU5D_t3238143234* ___buffer_5;
	// System.Threading.CancellationToken System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::cancellationToken
	CancellationToken_t1520886056  ___cancellationToken_6;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<bytesToWrite>5__1
	int32_t ___U3CbytesToWriteU3E5__1_7;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<currentInputIndex>5__2
	int32_t ___U3CcurrentInputIndexU3E5__2_8;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<numWholeBlocksInBytes>5__3
	int32_t ___U3CnumWholeBlocksInBytesU3E5__3_9;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<sem>5__4
	SemaphoreSlim_t1866675558 * ___U3CsemU3E5__4_10;
	// System.Security.Cryptography.CryptoStream/HopToThreadPoolAwaitable System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>u__1
	HopToThreadPoolAwaitable_t3243568240  ___U3CU3Eu__1_11;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__37::<>u__2
	ConfiguredTaskAwaiter_t1533030867  ___U3CU3Eu__2_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t3844559353  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t3844559353 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t3844559353  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CU3E4__this_2)); }
	inline CryptoStream_t1646338614 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CryptoStream_t1646338614 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CryptoStream_t1646338614 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___buffer_5)); }
	inline ByteU5BU5D_t3238143234* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t3238143234** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t3238143234* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___cancellationToken_6)); }
	inline CancellationToken_t1520886056  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t1520886056 * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t1520886056  value)
	{
		___cancellationToken_6 = value;
	}

	inline static int32_t get_offset_of_U3CbytesToWriteU3E5__1_7() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CbytesToWriteU3E5__1_7)); }
	inline int32_t get_U3CbytesToWriteU3E5__1_7() const { return ___U3CbytesToWriteU3E5__1_7; }
	inline int32_t* get_address_of_U3CbytesToWriteU3E5__1_7() { return &___U3CbytesToWriteU3E5__1_7; }
	inline void set_U3CbytesToWriteU3E5__1_7(int32_t value)
	{
		___U3CbytesToWriteU3E5__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentInputIndexU3E5__2_8() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CcurrentInputIndexU3E5__2_8)); }
	inline int32_t get_U3CcurrentInputIndexU3E5__2_8() const { return ___U3CcurrentInputIndexU3E5__2_8; }
	inline int32_t* get_address_of_U3CcurrentInputIndexU3E5__2_8() { return &___U3CcurrentInputIndexU3E5__2_8; }
	inline void set_U3CcurrentInputIndexU3E5__2_8(int32_t value)
	{
		___U3CcurrentInputIndexU3E5__2_8 = value;
	}

	inline static int32_t get_offset_of_U3CnumWholeBlocksInBytesU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CnumWholeBlocksInBytesU3E5__3_9)); }
	inline int32_t get_U3CnumWholeBlocksInBytesU3E5__3_9() const { return ___U3CnumWholeBlocksInBytesU3E5__3_9; }
	inline int32_t* get_address_of_U3CnumWholeBlocksInBytesU3E5__3_9() { return &___U3CnumWholeBlocksInBytesU3E5__3_9; }
	inline void set_U3CnumWholeBlocksInBytesU3E5__3_9(int32_t value)
	{
		___U3CnumWholeBlocksInBytesU3E5__3_9 = value;
	}

	inline static int32_t get_offset_of_U3CsemU3E5__4_10() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CsemU3E5__4_10)); }
	inline SemaphoreSlim_t1866675558 * get_U3CsemU3E5__4_10() const { return ___U3CsemU3E5__4_10; }
	inline SemaphoreSlim_t1866675558 ** get_address_of_U3CsemU3E5__4_10() { return &___U3CsemU3E5__4_10; }
	inline void set_U3CsemU3E5__4_10(SemaphoreSlim_t1866675558 * value)
	{
		___U3CsemU3E5__4_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsemU3E5__4_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_11() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CU3Eu__1_11)); }
	inline HopToThreadPoolAwaitable_t3243568240  get_U3CU3Eu__1_11() const { return ___U3CU3Eu__1_11; }
	inline HopToThreadPoolAwaitable_t3243568240 * get_address_of_U3CU3Eu__1_11() { return &___U3CU3Eu__1_11; }
	inline void set_U3CU3Eu__1_11(HopToThreadPoolAwaitable_t3243568240  value)
	{
		___U3CU3Eu__1_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_12() { return static_cast<int32_t>(offsetof(U3CWriteAsyncInternalU3Ed__37_t549021138, ___U3CU3Eu__2_12)); }
	inline ConfiguredTaskAwaiter_t1533030867  get_U3CU3Eu__2_12() const { return ___U3CU3Eu__2_12; }
	inline ConfiguredTaskAwaiter_t1533030867 * get_address_of_U3CU3Eu__2_12() { return &___U3CU3Eu__2_12; }
	inline void set_U3CU3Eu__2_12(ConfiguredTaskAwaiter_t1533030867  value)
	{
		___U3CU3Eu__2_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWRITEASYNCINTERNALU3ED__37_T549021138_H
#ifndef DESTRANSFORM_T1595996680_H
#define DESTRANSFORM_T1595996680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t1595996680  : public SymmetricTransform_t2586807002
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t3238143234* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t3238143234* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t466307513* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680, ___keySchedule_16)); }
	inline ByteU5BU5D_t3238143234* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t3238143234** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t3238143234* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680, ___byteBuff_17)); }
	inline ByteU5BU5D_t3238143234* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t3238143234** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t3238143234* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t466307513* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t466307513** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t466307513* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t1595996680_StaticFields
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
	UInt32U5BU5D_t466307513* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t3238143234* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t3238143234* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t3238143234* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t466307513* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t466307513* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t466307513* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t466307513** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t466307513* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t3238143234* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t3238143234** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t3238143234* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t3238143234* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t3238143234** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t3238143234* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t3238143234* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t3238143234** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t3238143234* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t466307513* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t466307513** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t466307513* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t1595996680_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t466307513* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t466307513** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t466307513* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T1595996680_H
#ifndef RC2TRANSFORM_T2154104478_H
#define RC2TRANSFORM_T2154104478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t2154104478  : public SymmetricTransform_t2586807002
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
	UInt16U5BU5D_t2991509662* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t2154104478, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t2154104478, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t2154104478, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t2154104478, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t2154104478, ___K_16)); }
	inline UInt16U5BU5D_t2991509662* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t2991509662** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t2991509662* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t2154104478, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t2154104478_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t3238143234* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t2154104478_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t3238143234* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t3238143234** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t3238143234* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T2154104478_H
#ifndef ISOLATEDSTORAGEFILEPERMISSION_T1295411372_H
#define ISOLATEDSTORAGEFILEPERMISSION_T1295411372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.IsolatedStorageFilePermission
struct  IsolatedStorageFilePermission_t1295411372  : public IsolatedStoragePermission_t2507093320
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISOLATEDSTORAGEFILEPERMISSION_T1295411372_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T1216140431_H
#define CODEACCESSSECURITYATTRIBUTE_T1216140431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t1216140431  : public SecurityAttribute_t1696713085
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T1216140431_H
#ifndef PERMISSIONSETATTRIBUTE_T1917913996_H
#define PERMISSIONSETATTRIBUTE_T1917913996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionSetAttribute
struct  PermissionSetAttribute_t1917913996  : public CodeAccessSecurityAttribute_t1216140431
{
public:
	// System.String System.Security.Permissions.PermissionSetAttribute::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(PermissionSetAttribute_t1917913996, ___name_2)); }
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
#endif // PERMISSIONSETATTRIBUTE_T1917913996_H
#ifndef REFLECTIONPERMISSIONATTRIBUTE_T2468060168_H
#define REFLECTIONPERMISSIONATTRIBUTE_T2468060168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.ReflectionPermissionAttribute
struct  ReflectionPermissionAttribute_t2468060168  : public CodeAccessSecurityAttribute_t1216140431
{
public:
	// System.Security.Permissions.ReflectionPermissionFlag System.Security.Permissions.ReflectionPermissionAttribute::flags
	int32_t ___flags_2;

public:
	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(ReflectionPermissionAttribute_t2468060168, ___flags_2)); }
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
#endif // REFLECTIONPERMISSIONATTRIBUTE_T2468060168_H
#ifndef HOSTPROTECTIONATTRIBUTE_T1739592328_H
#define HOSTPROTECTIONATTRIBUTE_T1739592328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.HostProtectionAttribute
struct  HostProtectionAttribute_t1739592328  : public CodeAccessSecurityAttribute_t1216140431
{
public:
	// System.Security.Permissions.HostProtectionResource System.Security.Permissions.HostProtectionAttribute::_resources
	int32_t ____resources_2;

public:
	inline static int32_t get_offset_of__resources_2() { return static_cast<int32_t>(offsetof(HostProtectionAttribute_t1739592328, ____resources_2)); }
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
#endif // HOSTPROTECTIONATTRIBUTE_T1739592328_H
#ifndef REGISTRYPERMISSIONATTRIBUTE_T2161187833_H
#define REGISTRYPERMISSIONATTRIBUTE_T2161187833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.RegistryPermissionAttribute
struct  RegistryPermissionAttribute_t2161187833  : public CodeAccessSecurityAttribute_t1216140431
{
public:
	// System.String System.Security.Permissions.RegistryPermissionAttribute::create
	String_t* ___create_2;
	// System.String System.Security.Permissions.RegistryPermissionAttribute::read
	String_t* ___read_3;
	// System.String System.Security.Permissions.RegistryPermissionAttribute::write
	String_t* ___write_4;

public:
	inline static int32_t get_offset_of_create_2() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t2161187833, ___create_2)); }
	inline String_t* get_create_2() const { return ___create_2; }
	inline String_t** get_address_of_create_2() { return &___create_2; }
	inline void set_create_2(String_t* value)
	{
		___create_2 = value;
		Il2CppCodeGenWriteBarrier((&___create_2), value);
	}

	inline static int32_t get_offset_of_read_3() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t2161187833, ___read_3)); }
	inline String_t* get_read_3() const { return ___read_3; }
	inline String_t** get_address_of_read_3() { return &___read_3; }
	inline void set_read_3(String_t* value)
	{
		___read_3 = value;
		Il2CppCodeGenWriteBarrier((&___read_3), value);
	}

	inline static int32_t get_offset_of_write_4() { return static_cast<int32_t>(offsetof(RegistryPermissionAttribute_t2161187833, ___write_4)); }
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
#endif // REGISTRYPERMISSIONATTRIBUTE_T2161187833_H
#ifndef FILEIOPERMISSIONATTRIBUTE_T1502037200_H
#define FILEIOPERMISSIONATTRIBUTE_T1502037200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.FileIOPermissionAttribute
struct  FileIOPermissionAttribute_t1502037200  : public CodeAccessSecurityAttribute_t1216140431
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
	inline static int32_t get_offset_of_append_2() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t1502037200, ___append_2)); }
	inline String_t* get_append_2() const { return ___append_2; }
	inline String_t** get_address_of_append_2() { return &___append_2; }
	inline void set_append_2(String_t* value)
	{
		___append_2 = value;
		Il2CppCodeGenWriteBarrier((&___append_2), value);
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t1502037200, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((&___path_3), value);
	}

	inline static int32_t get_offset_of_read_4() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t1502037200, ___read_4)); }
	inline String_t* get_read_4() const { return ___read_4; }
	inline String_t** get_address_of_read_4() { return &___read_4; }
	inline void set_read_4(String_t* value)
	{
		___read_4 = value;
		Il2CppCodeGenWriteBarrier((&___read_4), value);
	}

	inline static int32_t get_offset_of_write_5() { return static_cast<int32_t>(offsetof(FileIOPermissionAttribute_t1502037200, ___write_5)); }
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
#endif // FILEIOPERMISSIONATTRIBUTE_T1502037200_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T1069040370_H
#define SECURITYPERMISSIONATTRIBUTE_T1069040370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t1069040370  : public CodeAccessSecurityAttribute_t1216140431
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_2;

public:
	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t1069040370, ___m_Flags_2)); }
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
#endif // SECURITYPERMISSIONATTRIBUTE_T1069040370_H
#ifndef STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T3083735855_H
#define STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T3083735855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNameIdentityPermissionAttribute
struct  StrongNameIdentityPermissionAttribute_t3083735855  : public CodeAccessSecurityAttribute_t1216140431
{
public:
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::name
	String_t* ___name_2;
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::key
	String_t* ___key_3;
	// System.String System.Security.Permissions.StrongNameIdentityPermissionAttribute::version
	String_t* ___version_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t3083735855, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_key_3() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t3083735855, ___key_3)); }
	inline String_t* get_key_3() const { return ___key_3; }
	inline String_t** get_address_of_key_3() { return &___key_3; }
	inline void set_key_3(String_t* value)
	{
		___key_3 = value;
		Il2CppCodeGenWriteBarrier((&___key_3), value);
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(StrongNameIdentityPermissionAttribute_t3083735855, ___version_4)); }
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
#endif // STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_T3083735855_H
#ifndef DESCRYPTOSERVICEPROVIDER_T1569407498_H
#define DESCRYPTOSERVICEPROVIDER_T1569407498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t1569407498  : public DES_t2370064903
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T1569407498_H
#ifndef ENVIRONMENTPERMISSIONATTRIBUTE_T1701341354_H
#define ENVIRONMENTPERMISSIONATTRIBUTE_T1701341354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.EnvironmentPermissionAttribute
struct  EnvironmentPermissionAttribute_t1701341354  : public CodeAccessSecurityAttribute_t1216140431
{
public:
	// System.String System.Security.Permissions.EnvironmentPermissionAttribute::read
	String_t* ___read_2;
	// System.String System.Security.Permissions.EnvironmentPermissionAttribute::write
	String_t* ___write_3;

public:
	inline static int32_t get_offset_of_read_2() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAttribute_t1701341354, ___read_2)); }
	inline String_t* get_read_2() const { return ___read_2; }
	inline String_t** get_address_of_read_2() { return &___read_2; }
	inline void set_read_2(String_t* value)
	{
		___read_2 = value;
		Il2CppCodeGenWriteBarrier((&___read_2), value);
	}

	inline static int32_t get_offset_of_write_3() { return static_cast<int32_t>(offsetof(EnvironmentPermissionAttribute_t1701341354, ___write_3)); }
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
#endif // ENVIRONMENTPERMISSIONATTRIBUTE_T1701341354_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (CodeAccessSecurityAttribute_t1216140431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (EnvironmentPermission_t3405383696), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable601[3] = 
{
	EnvironmentPermission_t3405383696::get_offset_of__state_0(),
	EnvironmentPermission_t3405383696::get_offset_of_readList_1(),
	EnvironmentPermission_t3405383696::get_offset_of_writeList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (EnvironmentPermissionAccess_t2642831510)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable602[5] = 
{
	EnvironmentPermissionAccess_t2642831510::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (EnvironmentPermissionAttribute_t1701341354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable603[2] = 
{
	EnvironmentPermissionAttribute_t1701341354::get_offset_of_read_2(),
	EnvironmentPermissionAttribute_t1701341354::get_offset_of_write_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (FileDialogPermission_t26330297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable604[1] = 
{
	FileDialogPermission_t26330297::get_offset_of__access_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (FileDialogPermissionAccess_t1033705253)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable605[5] = 
{
	FileDialogPermissionAccess_t1033705253::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (FileIOPermission_t3002594416), -1, sizeof(FileIOPermission_t3002594416_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable606[9] = 
{
	FileIOPermission_t3002594416_StaticFields::get_offset_of_BadPathNameCharacters_0(),
	FileIOPermission_t3002594416_StaticFields::get_offset_of_BadFileNameCharacters_1(),
	FileIOPermission_t3002594416::get_offset_of_m_Unrestricted_2(),
	FileIOPermission_t3002594416::get_offset_of_m_AllFilesAccess_3(),
	FileIOPermission_t3002594416::get_offset_of_m_AllLocalFilesAccess_4(),
	FileIOPermission_t3002594416::get_offset_of_readList_5(),
	FileIOPermission_t3002594416::get_offset_of_writeList_6(),
	FileIOPermission_t3002594416::get_offset_of_appendList_7(),
	FileIOPermission_t3002594416::get_offset_of_pathList_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (FileIOPermissionAccess_t3796062330)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable607[7] = 
{
	FileIOPermissionAccess_t3796062330::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (FileIOPermissionAttribute_t1502037200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable608[4] = 
{
	FileIOPermissionAttribute_t1502037200::get_offset_of_append_2(),
	FileIOPermissionAttribute_t1502037200::get_offset_of_path_3(),
	FileIOPermissionAttribute_t1502037200::get_offset_of_read_4(),
	FileIOPermissionAttribute_t1502037200::get_offset_of_write_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (GacIdentityPermission_t647361407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (HostProtectionAttribute_t1739592328), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable610[1] = 
{
	HostProtectionAttribute_t1739592328::get_offset_of__resources_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (HostProtectionPermission_t3780716613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable611[1] = 
{
	HostProtectionPermission_t3780716613::get_offset_of__resources_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (HostProtectionResource_t3218523013)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable612[12] = 
{
	HostProtectionResource_t3218523013::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (IsolatedStorageContainment_t3061652312)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable614[13] = 
{
	IsolatedStorageContainment_t3061652312::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (IsolatedStorageFilePermission_t1295411372), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (IsolatedStoragePermission_t2507093320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable616[5] = 
{
	IsolatedStoragePermission_t2507093320::get_offset_of_m_userQuota_0(),
	IsolatedStoragePermission_t2507093320::get_offset_of_m_machineQuota_1(),
	IsolatedStoragePermission_t2507093320::get_offset_of_m_expirationDays_2(),
	IsolatedStoragePermission_t2507093320::get_offset_of_m_permanentData_3(),
	IsolatedStoragePermission_t2507093320::get_offset_of_m_allowed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (KeyContainerPermission_t1648239669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable618[2] = 
{
	KeyContainerPermission_t1648239669::get_offset_of__accessEntries_0(),
	KeyContainerPermission_t1648239669::get_offset_of__flags_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (KeyContainerPermissionAccessEntry_t1002656839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable619[6] = 
{
	KeyContainerPermissionAccessEntry_t1002656839::get_offset_of__flags_0(),
	KeyContainerPermissionAccessEntry_t1002656839::get_offset_of__containerName_1(),
	KeyContainerPermissionAccessEntry_t1002656839::get_offset_of__spec_2(),
	KeyContainerPermissionAccessEntry_t1002656839::get_offset_of__store_3(),
	KeyContainerPermissionAccessEntry_t1002656839::get_offset_of__providerName_4(),
	KeyContainerPermissionAccessEntry_t1002656839::get_offset_of__type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (KeyContainerPermissionAccessEntryCollection_t1331421447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable620[1] = 
{
	KeyContainerPermissionAccessEntryCollection_t1331421447::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (KeyContainerPermissionAccessEntryEnumerator_t3623760829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable621[1] = 
{
	KeyContainerPermissionAccessEntryEnumerator_t3623760829::get_offset_of_e_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (KeyContainerPermissionFlags_t2973217742)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable622[12] = 
{
	KeyContainerPermissionFlags_t2973217742::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { sizeof (PermissionSetAttribute_t1917913996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable623[1] = 
{
	PermissionSetAttribute_t1917913996::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (PermissionState_t2619702861)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable624[3] = 
{
	PermissionState_t2619702861::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (PublisherIdentityPermission_t783287520), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable625[1] = 
{
	PublisherIdentityPermission_t783287520::get_offset_of_x509_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (ReflectionPermission_t1852449113), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable626[1] = 
{
	ReflectionPermission_t1852449113::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (ReflectionPermissionAttribute_t2468060168), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable627[1] = 
{
	ReflectionPermissionAttribute_t2468060168::get_offset_of_flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (ReflectionPermissionFlag_t367147693)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable628[7] = 
{
	ReflectionPermissionFlag_t367147693::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (RegistryPermission_t1381292016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable629[4] = 
{
	RegistryPermission_t1381292016::get_offset_of__state_0(),
	RegistryPermission_t1381292016::get_offset_of_createList_1(),
	RegistryPermission_t1381292016::get_offset_of_readList_2(),
	RegistryPermission_t1381292016::get_offset_of_writeList_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (RegistryPermissionAccess_t480859583)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable630[6] = 
{
	RegistryPermissionAccess_t480859583::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (RegistryPermissionAttribute_t2161187833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable631[3] = 
{
	RegistryPermissionAttribute_t2161187833::get_offset_of_create_2(),
	RegistryPermissionAttribute_t2161187833::get_offset_of_read_3(),
	RegistryPermissionAttribute_t2161187833::get_offset_of_write_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (SecurityAction_t2678615916)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable632[10] = 
{
	SecurityAction_t2678615916::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (SecurityAttribute_t1696713085), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable633[2] = 
{
	SecurityAttribute_t1696713085::get_offset_of_m_Action_0(),
	SecurityAttribute_t1696713085::get_offset_of_m_Unrestricted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (SecurityPermission_t1988712824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable634[1] = 
{
	SecurityPermission_t1988712824::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (SecurityPermissionAttribute_t1069040370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable635[1] = 
{
	SecurityPermissionAttribute_t1069040370::get_offset_of_m_Flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (SecurityPermissionFlag_t2022819542)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable636[17] = 
{
	SecurityPermissionFlag_t2022819542::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (SiteIdentityPermission_t2449938017), -1, sizeof(SiteIdentityPermission_t2449938017_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable637[2] = 
{
	SiteIdentityPermission_t2449938017::get_offset_of__site_0(),
	SiteIdentityPermission_t2449938017_StaticFields::get_offset_of_valid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (StrongNameIdentityPermission_t1925416511), -1, sizeof(StrongNameIdentityPermission_t1925416511_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable638[3] = 
{
	StrongNameIdentityPermission_t1925416511_StaticFields::get_offset_of_defaultVersion_0(),
	StrongNameIdentityPermission_t1925416511::get_offset_of__state_1(),
	StrongNameIdentityPermission_t1925416511::get_offset_of__list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (SNIP_t3960573932)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable639[3] = 
{
	SNIP_t3960573932::get_offset_of_PublicKey_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t3960573932::get_offset_of_Name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SNIP_t3960573932::get_offset_of_AssemblyVersion_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (StrongNameIdentityPermissionAttribute_t3083735855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable640[3] = 
{
	StrongNameIdentityPermissionAttribute_t3083735855::get_offset_of_name_2(),
	StrongNameIdentityPermissionAttribute_t3083735855::get_offset_of_key_3(),
	StrongNameIdentityPermissionAttribute_t3083735855::get_offset_of_version_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (StrongNamePublicKeyBlob_t4217177116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable641[1] = 
{
	StrongNamePublicKeyBlob_t4217177116::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (UIPermission_t4242026986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable642[2] = 
{
	UIPermission_t4242026986::get_offset_of__window_0(),
	UIPermission_t4242026986::get_offset_of__clipboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (UIPermissionClipboard_t3960613657)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable643[4] = 
{
	UIPermissionClipboard_t3960613657::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (UIPermissionWindow_t3744212778)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable644[5] = 
{
	UIPermissionWindow_t3744212778::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (UrlIdentityPermission_t4111796069), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable645[1] = 
{
	UrlIdentityPermission_t4111796069::get_offset_of_url_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (ZoneIdentityPermission_t1933385239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable646[1] = 
{
	ZoneIdentityPermission_t1933385239::get_offset_of_zone_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (CryptoConfig_t1661594826), -1, sizeof(CryptoConfig_t1661594826_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable647[29] = 
{
	CryptoConfig_t1661594826_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_unresolved_algorithms_2(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_oids_3(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultSHA1_4(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultMD5_5(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultSHA256_6(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultSHA384_7(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultSHA512_8(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultRSA_9(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultDSA_10(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultDES_11(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_default3DES_12(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultRC2_13(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultAES_14(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultRNG_15(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultHMAC_16(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultMAC3DES_17(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultDSASigDesc_18(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultRSAPKCS1SHA1SigDesc_19(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultRSAPKCS1SHA256SigDesc_20(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultRSAPKCS1SHA384SigDesc_21(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultRSAPKCS1SHA512SigDesc_22(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultRIPEMD160_23(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultHMACMD5_24(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultHMACRIPEMD160_25(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultHMACSHA256_26(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultHMACSHA384_27(),
	CryptoConfig_t1661594826_StaticFields::get_offset_of_defaultHMACSHA512_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (CryptoHandler_t1786947975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable648[5] = 
{
	CryptoHandler_t1786947975::get_offset_of_algorithms_0(),
	CryptoHandler_t1786947975::get_offset_of_oid_1(),
	CryptoHandler_t1786947975::get_offset_of_names_2(),
	CryptoHandler_t1786947975::get_offset_of_classnames_3(),
	CryptoHandler_t1786947975::get_offset_of_level_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (DESTransform_t1595996680), -1, sizeof(DESTransform_t1595996680_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable649[13] = 
{
	DESTransform_t1595996680_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t1595996680_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t1595996680_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t1595996680_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t1595996680::get_offset_of_keySchedule_16(),
	DESTransform_t1595996680::get_offset_of_byteBuff_17(),
	DESTransform_t1595996680::get_offset_of_dwordBuff_18(),
	DESTransform_t1595996680_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t1595996680_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t1595996680_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t1595996680_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t1595996680_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t1595996680_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (DSACryptoServiceProvider_t3353344564), -1, sizeof(DSACryptoServiceProvider_t3353344564_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable650[7] = 
{
	DSACryptoServiceProvider_t3353344564::get_offset_of_store_2(),
	DSACryptoServiceProvider_t3353344564::get_offset_of_persistKey_3(),
	DSACryptoServiceProvider_t3353344564::get_offset_of_persisted_4(),
	DSACryptoServiceProvider_t3353344564::get_offset_of_privateKeyExportable_5(),
	DSACryptoServiceProvider_t3353344564::get_offset_of_m_disposed_6(),
	DSACryptoServiceProvider_t3353344564::get_offset_of_dsa_7(),
	DSACryptoServiceProvider_t3353344564_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (MD5CryptoServiceProvider_t3831295951), -1, sizeof(MD5CryptoServiceProvider_t3831295951_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable652[6] = 
{
	MD5CryptoServiceProvider_t3831295951::get_offset_of__H_4(),
	MD5CryptoServiceProvider_t3831295951::get_offset_of_buff_5(),
	MD5CryptoServiceProvider_t3831295951::get_offset_of_count_6(),
	MD5CryptoServiceProvider_t3831295951::get_offset_of__ProcessingBuffer_7(),
	MD5CryptoServiceProvider_t3831295951::get_offset_of__ProcessingBufferCount_8(),
	MD5CryptoServiceProvider_t3831295951_StaticFields::get_offset_of_K_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (RC2Transform_t2154104478), -1, sizeof(RC2Transform_t2154104478_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable653[7] = 
{
	RC2Transform_t2154104478::get_offset_of_R0_12(),
	RC2Transform_t2154104478::get_offset_of_R1_13(),
	RC2Transform_t2154104478::get_offset_of_R2_14(),
	RC2Transform_t2154104478::get_offset_of_R3_15(),
	RC2Transform_t2154104478::get_offset_of_K_16(),
	RC2Transform_t2154104478::get_offset_of_j_17(),
	RC2Transform_t2154104478_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (RNGCryptoServiceProvider_t1437340527), -1, sizeof(RNGCryptoServiceProvider_t1437340527_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable654[2] = 
{
	RNGCryptoServiceProvider_t1437340527_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t1437340527::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (RSACryptoServiceProvider_t422262756), -1, sizeof(RSACryptoServiceProvider_t422262756_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable655[7] = 
{
	RSACryptoServiceProvider_t422262756::get_offset_of_store_2(),
	RSACryptoServiceProvider_t422262756::get_offset_of_persistKey_3(),
	RSACryptoServiceProvider_t422262756::get_offset_of_persisted_4(),
	RSACryptoServiceProvider_t422262756::get_offset_of_privateKeyExportable_5(),
	RSACryptoServiceProvider_t422262756::get_offset_of_m_disposed_6(),
	RSACryptoServiceProvider_t422262756::get_offset_of_rsa_7(),
	RSACryptoServiceProvider_t422262756_StaticFields::get_offset_of_s_UseMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (RSAPKCS1SignatureDeformatter_t3090578574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable656[2] = 
{
	RSAPKCS1SignatureDeformatter_t3090578574::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t3090578574::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (RSAPKCS1SignatureFormatter_t1839371782), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable657[2] = 
{
	RSAPKCS1SignatureFormatter_t1839371782::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t1839371782::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (SHA1Internal_t2905905619), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable658[5] = 
{
	SHA1Internal_t2905905619::get_offset_of__H_0(),
	SHA1Internal_t2905905619::get_offset_of_count_1(),
	SHA1Internal_t2905905619::get_offset_of__ProcessingBuffer_2(),
	SHA1Internal_t2905905619::get_offset_of__ProcessingBufferCount_3(),
	SHA1Internal_t2905905619::get_offset_of_buff_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (SHA1CryptoServiceProvider_t244241134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable659[1] = 
{
	SHA1CryptoServiceProvider_t244241134::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (TripleDESTransform_t2450898061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable660[6] = 
{
	TripleDESTransform_t2450898061::get_offset_of_E1_12(),
	TripleDESTransform_t2450898061::get_offset_of_D2_13(),
	TripleDESTransform_t2450898061::get_offset_of_E3_14(),
	TripleDESTransform_t2450898061::get_offset_of_D1_15(),
	TripleDESTransform_t2450898061::get_offset_of_E2_16(),
	TripleDESTransform_t2450898061::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (Aes_t1486933197), -1, sizeof(Aes_t1486933197_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable661[2] = 
{
	Aes_t1486933197_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	Aes_t1486933197_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (AsymmetricAlgorithm_t809218938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable662[2] = 
{
	AsymmetricAlgorithm_t809218938::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t809218938::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (AsymmetricKeyExchangeFormatter_t1151021572), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (AsymmetricSignatureDeformatter_t386807421), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (AsymmetricSignatureFormatter_t2325651768), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (CipherMode_t2969010684)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable666[6] = 
{
	CipherMode_t2969010684::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (PaddingMode_t787013845)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable667[6] = 
{
	PaddingMode_t787013845::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (KeySizes_t1673080811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable668[3] = 
{
	KeySizes_t1673080811::get_offset_of_m_minSize_0(),
	KeySizes_t1673080811::get_offset_of_m_maxSize_1(),
	KeySizes_t1673080811::get_offset_of_m_skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (CryptographicException_t3937215370), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (CryptographicUnexpectedOperationException_t424018894), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (CspProviderFlags_t1884736043)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable671[10] = 
{
	CspProviderFlags_t1884736043::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (CspParameters_t833395919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable672[5] = 
{
	CspParameters_t833395919::get_offset_of_ProviderType_0(),
	CspParameters_t833395919::get_offset_of_ProviderName_1(),
	CspParameters_t833395919::get_offset_of_KeyContainerName_2(),
	CspParameters_t833395919::get_offset_of_KeyNumber_3(),
	CspParameters_t833395919::get_offset_of_m_flags_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (CryptoStreamMode_t532034502)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable673[3] = 
{
	CryptoStreamMode_t532034502::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (CryptoStream_t1646338614), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable674[12] = 
{
	CryptoStream_t1646338614::get_offset_of__stream_4(),
	CryptoStream_t1646338614::get_offset_of__Transform_5(),
	CryptoStream_t1646338614::get_offset_of__InputBuffer_6(),
	CryptoStream_t1646338614::get_offset_of__InputBufferIndex_7(),
	CryptoStream_t1646338614::get_offset_of__InputBlockSize_8(),
	CryptoStream_t1646338614::get_offset_of__OutputBuffer_9(),
	CryptoStream_t1646338614::get_offset_of__OutputBufferIndex_10(),
	CryptoStream_t1646338614::get_offset_of__OutputBlockSize_11(),
	CryptoStream_t1646338614::get_offset_of__transformMode_12(),
	CryptoStream_t1646338614::get_offset_of__canRead_13(),
	CryptoStream_t1646338614::get_offset_of__canWrite_14(),
	CryptoStream_t1646338614::get_offset_of__finalBlockTransformed_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (HopToThreadPoolAwaitable_t3243568240)+ sizeof (RuntimeObject), sizeof(HopToThreadPoolAwaitable_t3243568240 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (U3CReadAsyncInternalU3Ed__34_t868710510)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable676[15] = 
{
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_count_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_buffer_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_cancellationToken_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CtempInputBufferU3E5__1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CcurrentOutputIndexU3E5__2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CbytesToDeliverU3E5__3_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CsemU3E5__4_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CU3Eu__1_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CU3Eu__2_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CU3E7__wrap1_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CReadAsyncInternalU3Ed__34_t868710510::get_offset_of_U3CU3Eu__3_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { sizeof (U3CWriteAsyncInternalU3Ed__37_t549021138)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable677[13] = 
{
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_count_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_buffer_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_cancellationToken_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CbytesToWriteU3E5__1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CcurrentInputIndexU3E5__2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CnumWholeBlocksInBytesU3E5__3_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CsemU3E5__4_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CU3Eu__1_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CWriteAsyncInternalU3Ed__37_t549021138::get_offset_of_U3CU3Eu__2_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (DES_t2370064903), -1, sizeof(DES_t2370064903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable678[2] = 
{
	DES_t2370064903_StaticFields::get_offset_of_s_legalBlockSizes_9(),
	DES_t2370064903_StaticFields::get_offset_of_s_legalKeySizes_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (DESCryptoServiceProvider_t1569407498), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { sizeof (DSAParameters_t3790330035)+ sizeof (RuntimeObject), sizeof(DSAParameters_t3790330035_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable680[8] = 
{
	DSAParameters_t3790330035::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t3790330035::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t3790330035::get_offset_of_G_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t3790330035::get_offset_of_Y_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t3790330035::get_offset_of_J_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t3790330035::get_offset_of_X_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t3790330035::get_offset_of_Seed_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t3790330035::get_offset_of_Counter_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (DSA_t155212402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (DSASignatureDeformatter_t688764430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable682[2] = 
{
	DSASignatureDeformatter_t688764430::get_offset_of__dsaKey_0(),
	DSASignatureDeformatter_t688764430::get_offset_of__oid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (DSASignatureFormatter_t492396351), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable683[2] = 
{
	DSASignatureFormatter_t492396351::get_offset_of__dsaKey_0(),
	DSASignatureFormatter_t492396351::get_offset_of__oid_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (HashAlgorithm_t2213945148), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable684[4] = 
{
	HashAlgorithm_t2213945148::get_offset_of_HashSizeValue_0(),
	HashAlgorithm_t2213945148::get_offset_of_HashValue_1(),
	HashAlgorithm_t2213945148::get_offset_of_State_2(),
	HashAlgorithm_t2213945148::get_offset_of_m_bDisposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (HashAlgorithmName_t900445294)+ sizeof (RuntimeObject), sizeof(HashAlgorithmName_t900445294_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable685[1] = 
{
	HashAlgorithmName_t900445294::get_offset_of__name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { sizeof (HMAC_t1905000658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable686[7] = 
{
	HMAC_t1905000658::get_offset_of_blockSizeValue_5(),
	HMAC_t1905000658::get_offset_of_m_hashName_6(),
	HMAC_t1905000658::get_offset_of_m_hash1_7(),
	HMAC_t1905000658::get_offset_of_m_hash2_8(),
	HMAC_t1905000658::get_offset_of_m_inner_9(),
	HMAC_t1905000658::get_offset_of_m_outer_10(),
	HMAC_t1905000658::get_offset_of_m_hashing_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { sizeof (HMACMD5_t1783405236), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { sizeof (HMACRIPEMD160_t3904173651), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (HMACSHA1_t2462935510), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (HMACSHA256_t1807254422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (U3CU3Ec_t1663732271), -1, sizeof(U3CU3Ec_t1663732271_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable691[5] = 
{
	U3CU3Ec_t1663732271_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t1663732271_StaticFields::get_offset_of_U3CU3E9__1_0_1(),
	U3CU3Ec_t1663732271_StaticFields::get_offset_of_U3CU3E9__1_1_2(),
	U3CU3Ec_t1663732271_StaticFields::get_offset_of_U3CU3E9__1_2_3(),
	U3CU3Ec_t1663732271_StaticFields::get_offset_of_U3CU3E9__1_3_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (HMACSHA384_t2188926666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable692[1] = 
{
	HMACSHA384_t2188926666::get_offset_of_m_useLegacyBlockSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (U3CU3Ec_t1916002738), -1, sizeof(U3CU3Ec_t1916002738_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable693[5] = 
{
	U3CU3Ec_t1916002738_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t1916002738_StaticFields::get_offset_of_U3CU3E9__2_0_1(),
	U3CU3Ec_t1916002738_StaticFields::get_offset_of_U3CU3E9__2_1_2(),
	U3CU3Ec_t1916002738_StaticFields::get_offset_of_U3CU3E9__2_2_3(),
	U3CU3Ec_t1916002738_StaticFields::get_offset_of_U3CU3E9__2_3_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (HMACSHA512_t807020312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable694[1] = 
{
	HMACSHA512_t807020312::get_offset_of_m_useLegacyBlockSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (U3CU3Ec_t3554710478), -1, sizeof(U3CU3Ec_t3554710478_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable695[5] = 
{
	U3CU3Ec_t3554710478_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3554710478_StaticFields::get_offset_of_U3CU3E9__2_0_1(),
	U3CU3Ec_t3554710478_StaticFields::get_offset_of_U3CU3E9__2_1_2(),
	U3CU3Ec_t3554710478_StaticFields::get_offset_of_U3CU3E9__2_2_3(),
	U3CU3Ec_t3554710478_StaticFields::get_offset_of_U3CU3E9__2_3_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (KeyedHashAlgorithm_t2861851642), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable697[1] = 
{
	KeyedHashAlgorithm_t2861851642::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (MACTripleDES_t3020635656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable698[5] = 
{
	MACTripleDES_t3020635656::get_offset_of_m_encryptor_5(),
	MACTripleDES_t3020635656::get_offset_of__cs_6(),
	MACTripleDES_t3020635656::get_offset_of__ts_7(),
	MACTripleDES_t3020635656::get_offset_of_m_bytesPerBlock_8(),
	MACTripleDES_t3020635656::get_offset_of_des_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (TailStream_t3883015398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable699[4] = 
{
	TailStream_t3883015398::get_offset_of__Buffer_4(),
	TailStream_t3883015398::get_offset_of__BufferSize_5(),
	TailStream_t3883015398::get_offset_of__BufferIndex_6(),
	TailStream_t3883015398::get_offset_of__BufferFull_7(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif