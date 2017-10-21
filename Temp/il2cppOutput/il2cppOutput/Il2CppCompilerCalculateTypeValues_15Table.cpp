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

// System.Security.Cryptography.RSA
struct RSA_t3890721306;
// System.Byte[]
struct ByteU5BU5D_t2516310093;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t3424891946;
// Mono.Globalization.Unicode.CodePointIndexer/TableRange[]
struct TableRangeU5BU5D_t2929337772;
// System.Char[]
struct CharU5BU5D_t1307605391;
// Mono.Globalization.Unicode.TailoringInfo[]
struct TailoringInfoU5BU5D_t1938524979;
// System.Byte
struct Byte_t3548368036;
// System.Comparison`1<Mono.Globalization.Unicode.Level2Map>
struct Comparison_1_t1117050503;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t413203008;
// System.Globalization.TextInfo
struct TextInfo_t2227080339;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t699585210;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t3096738118;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t3425007057;
// System.Collections.Hashtable
struct Hashtable_t776164328;
// System.Collections.ArrayList
struct ArrayList_t3576894409;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2682980787;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t2560268273;
// System.UInt32[]
struct UInt32U5BU5D_t1508412189;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1266854030;
// System.IO.FileStream
struct FileStream_t2636901281;
// Mono.Security.ASN1
struct ASN1_t1450547606;
// Mono.Security.X509.X509Stores
struct X509Stores_t2996079275;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2318156732;
// System.Collections.IEnumerator
struct IEnumerator_t2604455502;
// System.Security.Cryptography.CspParameters
struct CspParameters_t300073384;
// Mono.Security.X509.X509Store
struct X509Store_t2550465051;
// Mono.Security.Uri/UriScheme[]
struct UriSchemeU5BU5D_t652268518;
// System.Int32[]
struct Int32U5BU5D_t890136779;
// Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct SafeRegistryHandle_t2819695873;
// Microsoft.Win32.IRegistryApi
struct IRegistryApi_t3777762665;
// System.Void
struct Void_t996922892;
// System.Version
struct Version_t1549971293;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2483470942;
// Mono.Security.X509.X509Chain
struct X509Chain_t1327291242;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3545235482;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3340730147;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2989360121;
// System.Security.Cryptography.DSA
struct DSA_t2548050784;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3201042415;
// System.Delegate[]
struct DelegateU5BU5D_t3948460075;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3518896029;
// System.EventArgs
struct EventArgs_t1023591425;
// System.IAsyncResult
struct IAsyncResult_t1680407113;
// System.AsyncCallback
struct AsyncCallback_t3624585834;




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
#ifndef STRONGNAME_T3786047429_H
#define STRONGNAME_T3786047429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.StrongName
struct  StrongName_t3786047429  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t3890721306 * ___rsa_0;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t2516310093* ___publicKey_1;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t2516310093* ___keyToken_2;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm_3;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(StrongName_t3786047429, ___rsa_0)); }
	inline RSA_t3890721306 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t3890721306 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t3890721306 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_publicKey_1() { return static_cast<int32_t>(offsetof(StrongName_t3786047429, ___publicKey_1)); }
	inline ByteU5BU5D_t2516310093* get_publicKey_1() const { return ___publicKey_1; }
	inline ByteU5BU5D_t2516310093** get_address_of_publicKey_1() { return &___publicKey_1; }
	inline void set_publicKey_1(ByteU5BU5D_t2516310093* value)
	{
		___publicKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_1), value);
	}

	inline static int32_t get_offset_of_keyToken_2() { return static_cast<int32_t>(offsetof(StrongName_t3786047429, ___keyToken_2)); }
	inline ByteU5BU5D_t2516310093* get_keyToken_2() const { return ___keyToken_2; }
	inline ByteU5BU5D_t2516310093** get_address_of_keyToken_2() { return &___keyToken_2; }
	inline void set_keyToken_2(ByteU5BU5D_t2516310093* value)
	{
		___keyToken_2 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_2), value);
	}

	inline static int32_t get_offset_of_tokenAlgorithm_3() { return static_cast<int32_t>(offsetof(StrongName_t3786047429, ___tokenAlgorithm_3)); }
	inline String_t* get_tokenAlgorithm_3() const { return ___tokenAlgorithm_3; }
	inline String_t** get_address_of_tokenAlgorithm_3() { return &___tokenAlgorithm_3; }
	inline void set_tokenAlgorithm_3(String_t* value)
	{
		___tokenAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&___tokenAlgorithm_3), value);
	}
};

struct StrongName_t3786047429_StaticFields
{
public:
	// System.Object Mono.Security.StrongName::lockObject
	RuntimeObject * ___lockObject_4;

public:
	inline static int32_t get_offset_of_lockObject_4() { return static_cast<int32_t>(offsetof(StrongName_t3786047429_StaticFields, ___lockObject_4)); }
	inline RuntimeObject * get_lockObject_4() const { return ___lockObject_4; }
	inline RuntimeObject ** get_address_of_lockObject_4() { return &___lockObject_4; }
	inline void set_lockObject_4(RuntimeObject * value)
	{
		___lockObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T3786047429_H
#ifndef MODULUSRING_T2288836809_H
#define MODULUSRING_T2288836809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t2288836809  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t3424891946 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t3424891946 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t2288836809, ___mod_0)); }
	inline BigInteger_t3424891946 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t3424891946 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t3424891946 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t2288836809, ___constant_1)); }
	inline BigInteger_t3424891946 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t3424891946 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t3424891946 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T2288836809_H
#ifndef KERNEL_T251016117_H
#define KERNEL_T251016117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t251016117  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T251016117_H
#ifndef PRIMALITYTESTS_T388720861_H
#define PRIMALITYTESTS_T388720861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t388720861  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T388720861_H
#ifndef PRIMEGENERATORBASE_T1480341072_H
#define PRIMEGENERATORBASE_T1480341072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t1480341072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T1480341072_H
#ifndef CODEPOINTINDEXER_T413203008_H
#define CODEPOINTINDEXER_T413203008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer
struct  CodePointIndexer_t413203008  : public RuntimeObject
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer/TableRange[] Mono.Globalization.Unicode.CodePointIndexer::ranges
	TableRangeU5BU5D_t2929337772* ___ranges_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::TotalCount
	int32_t ___TotalCount_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultIndex
	int32_t ___defaultIndex_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::defaultCP
	int32_t ___defaultCP_3;

public:
	inline static int32_t get_offset_of_ranges_0() { return static_cast<int32_t>(offsetof(CodePointIndexer_t413203008, ___ranges_0)); }
	inline TableRangeU5BU5D_t2929337772* get_ranges_0() const { return ___ranges_0; }
	inline TableRangeU5BU5D_t2929337772** get_address_of_ranges_0() { return &___ranges_0; }
	inline void set_ranges_0(TableRangeU5BU5D_t2929337772* value)
	{
		___ranges_0 = value;
		Il2CppCodeGenWriteBarrier((&___ranges_0), value);
	}

	inline static int32_t get_offset_of_TotalCount_1() { return static_cast<int32_t>(offsetof(CodePointIndexer_t413203008, ___TotalCount_1)); }
	inline int32_t get_TotalCount_1() const { return ___TotalCount_1; }
	inline int32_t* get_address_of_TotalCount_1() { return &___TotalCount_1; }
	inline void set_TotalCount_1(int32_t value)
	{
		___TotalCount_1 = value;
	}

	inline static int32_t get_offset_of_defaultIndex_2() { return static_cast<int32_t>(offsetof(CodePointIndexer_t413203008, ___defaultIndex_2)); }
	inline int32_t get_defaultIndex_2() const { return ___defaultIndex_2; }
	inline int32_t* get_address_of_defaultIndex_2() { return &___defaultIndex_2; }
	inline void set_defaultIndex_2(int32_t value)
	{
		___defaultIndex_2 = value;
	}

	inline static int32_t get_offset_of_defaultCP_3() { return static_cast<int32_t>(offsetof(CodePointIndexer_t413203008, ___defaultCP_3)); }
	inline int32_t get_defaultCP_3() const { return ___defaultCP_3; }
	inline int32_t* get_address_of_defaultCP_3() { return &___defaultCP_3; }
	inline void set_defaultCP_3(int32_t value)
	{
		___defaultCP_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEPOINTINDEXER_T413203008_H
#ifndef TAILORINGINFO_T3412058934_H
#define TAILORINGINFO_T3412058934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.TailoringInfo
struct  TailoringInfo_t3412058934  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::LCID
	int32_t ___LCID_0;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringIndex
	int32_t ___TailoringIndex_1;
	// System.Int32 Mono.Globalization.Unicode.TailoringInfo::TailoringCount
	int32_t ___TailoringCount_2;
	// System.Boolean Mono.Globalization.Unicode.TailoringInfo::FrenchSort
	bool ___FrenchSort_3;

public:
	inline static int32_t get_offset_of_LCID_0() { return static_cast<int32_t>(offsetof(TailoringInfo_t3412058934, ___LCID_0)); }
	inline int32_t get_LCID_0() const { return ___LCID_0; }
	inline int32_t* get_address_of_LCID_0() { return &___LCID_0; }
	inline void set_LCID_0(int32_t value)
	{
		___LCID_0 = value;
	}

	inline static int32_t get_offset_of_TailoringIndex_1() { return static_cast<int32_t>(offsetof(TailoringInfo_t3412058934, ___TailoringIndex_1)); }
	inline int32_t get_TailoringIndex_1() const { return ___TailoringIndex_1; }
	inline int32_t* get_address_of_TailoringIndex_1() { return &___TailoringIndex_1; }
	inline void set_TailoringIndex_1(int32_t value)
	{
		___TailoringIndex_1 = value;
	}

	inline static int32_t get_offset_of_TailoringCount_2() { return static_cast<int32_t>(offsetof(TailoringInfo_t3412058934, ___TailoringCount_2)); }
	inline int32_t get_TailoringCount_2() const { return ___TailoringCount_2; }
	inline int32_t* get_address_of_TailoringCount_2() { return &___TailoringCount_2; }
	inline void set_TailoringCount_2(int32_t value)
	{
		___TailoringCount_2 = value;
	}

	inline static int32_t get_offset_of_FrenchSort_3() { return static_cast<int32_t>(offsetof(TailoringInfo_t3412058934, ___FrenchSort_3)); }
	inline bool get_FrenchSort_3() const { return ___FrenchSort_3; }
	inline bool* get_address_of_FrenchSort_3() { return &___FrenchSort_3; }
	inline void set_FrenchSort_3(bool value)
	{
		___FrenchSort_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TAILORINGINFO_T3412058934_H
#ifndef CONTRACTION_T2043761403_H
#define CONTRACTION_T2043761403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Contraction
struct  Contraction_t2043761403  : public RuntimeObject
{
public:
	// System.Int32 Mono.Globalization.Unicode.Contraction::Index
	int32_t ___Index_0;
	// System.Char[] Mono.Globalization.Unicode.Contraction::Source
	CharU5BU5D_t1307605391* ___Source_1;
	// System.String Mono.Globalization.Unicode.Contraction::Replacement
	String_t* ___Replacement_2;
	// System.Byte[] Mono.Globalization.Unicode.Contraction::SortKey
	ByteU5BU5D_t2516310093* ___SortKey_3;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(Contraction_t2043761403, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Source_1() { return static_cast<int32_t>(offsetof(Contraction_t2043761403, ___Source_1)); }
	inline CharU5BU5D_t1307605391* get_Source_1() const { return ___Source_1; }
	inline CharU5BU5D_t1307605391** get_address_of_Source_1() { return &___Source_1; }
	inline void set_Source_1(CharU5BU5D_t1307605391* value)
	{
		___Source_1 = value;
		Il2CppCodeGenWriteBarrier((&___Source_1), value);
	}

	inline static int32_t get_offset_of_Replacement_2() { return static_cast<int32_t>(offsetof(Contraction_t2043761403, ___Replacement_2)); }
	inline String_t* get_Replacement_2() const { return ___Replacement_2; }
	inline String_t** get_address_of_Replacement_2() { return &___Replacement_2; }
	inline void set_Replacement_2(String_t* value)
	{
		___Replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___Replacement_2), value);
	}

	inline static int32_t get_offset_of_SortKey_3() { return static_cast<int32_t>(offsetof(Contraction_t2043761403, ___SortKey_3)); }
	inline ByteU5BU5D_t2516310093* get_SortKey_3() const { return ___SortKey_3; }
	inline ByteU5BU5D_t2516310093** get_address_of_SortKey_3() { return &___SortKey_3; }
	inline void set_SortKey_3(ByteU5BU5D_t2516310093* value)
	{
		___SortKey_3 = value;
		Il2CppCodeGenWriteBarrier((&___SortKey_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTION_T2043761403_H
#ifndef CONTRACTIONCOMPARER_T529643123_H
#define CONTRACTIONCOMPARER_T529643123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.ContractionComparer
struct  ContractionComparer_t529643123  : public RuntimeObject
{
public:

public:
};

struct ContractionComparer_t529643123_StaticFields
{
public:
	// Mono.Globalization.Unicode.ContractionComparer Mono.Globalization.Unicode.ContractionComparer::Instance
	ContractionComparer_t529643123 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(ContractionComparer_t529643123_StaticFields, ___Instance_0)); }
	inline ContractionComparer_t529643123 * get_Instance_0() const { return ___Instance_0; }
	inline ContractionComparer_t529643123 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(ContractionComparer_t529643123 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTIONCOMPARER_T529643123_H
#ifndef LEVEL2MAP_T3216195167_H
#define LEVEL2MAP_T3216195167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Level2Map
struct  Level2Map_t3216195167  : public RuntimeObject
{
public:
	// System.Byte Mono.Globalization.Unicode.Level2Map::Source
	uint8_t ___Source_0;
	// System.Byte Mono.Globalization.Unicode.Level2Map::Replace
	uint8_t ___Replace_1;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Level2Map_t3216195167, ___Source_0)); }
	inline uint8_t get_Source_0() const { return ___Source_0; }
	inline uint8_t* get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(uint8_t value)
	{
		___Source_0 = value;
	}

	inline static int32_t get_offset_of_Replace_1() { return static_cast<int32_t>(offsetof(Level2Map_t3216195167, ___Replace_1)); }
	inline uint8_t get_Replace_1() const { return ___Replace_1; }
	inline uint8_t* get_address_of_Replace_1() { return &___Replace_1; }
	inline void set_Replace_1(uint8_t value)
	{
		___Replace_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL2MAP_T3216195167_H
#ifndef MSCOMPATUNICODETABLE_T1596958875_H
#define MSCOMPATUNICODETABLE_T1596958875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTable
struct  MSCompatUnicodeTable_t1596958875  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTable_t1596958875_StaticFields
{
public:
	// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::MaxExpansionLength
	int32_t ___MaxExpansionLength_0;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::ignorableFlags
	uint8_t* ___ignorableFlags_1;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::categories
	uint8_t* ___categories_2;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level1
	uint8_t* ___level1_3;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level2
	uint8_t* ___level2_4;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::level3
	uint8_t* ___level3_5;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHScategory
	uint8_t* ___cjkCHScategory_6;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTcategory
	uint8_t* ___cjkCHTcategory_7;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAcategory
	uint8_t* ___cjkJAcategory_8;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOcategory
	uint8_t* ___cjkKOcategory_9;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHSlv1
	uint8_t* ___cjkCHSlv1_10;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkCHTlv1
	uint8_t* ___cjkCHTlv1_11;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkJAlv1
	uint8_t* ___cjkJAlv1_12;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv1
	uint8_t* ___cjkKOlv1_13;
	// System.Byte* Mono.Globalization.Unicode.MSCompatUnicodeTable::cjkKOlv2
	uint8_t* ___cjkKOlv2_14;
	// System.Char[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringArr
	CharU5BU5D_t1307605391* ___tailoringArr_15;
	// Mono.Globalization.Unicode.TailoringInfo[] Mono.Globalization.Unicode.MSCompatUnicodeTable::tailoringInfos
	TailoringInfoU5BU5D_t1938524979* ___tailoringInfos_16;
	// System.Object Mono.Globalization.Unicode.MSCompatUnicodeTable::forLock
	RuntimeObject * ___forLock_17;
	// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::isReady
	bool ___isReady_18;

public:
	inline static int32_t get_offset_of_MaxExpansionLength_0() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___MaxExpansionLength_0)); }
	inline int32_t get_MaxExpansionLength_0() const { return ___MaxExpansionLength_0; }
	inline int32_t* get_address_of_MaxExpansionLength_0() { return &___MaxExpansionLength_0; }
	inline void set_MaxExpansionLength_0(int32_t value)
	{
		___MaxExpansionLength_0 = value;
	}

	inline static int32_t get_offset_of_ignorableFlags_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___ignorableFlags_1)); }
	inline uint8_t* get_ignorableFlags_1() const { return ___ignorableFlags_1; }
	inline uint8_t** get_address_of_ignorableFlags_1() { return &___ignorableFlags_1; }
	inline void set_ignorableFlags_1(uint8_t* value)
	{
		___ignorableFlags_1 = value;
	}

	inline static int32_t get_offset_of_categories_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___categories_2)); }
	inline uint8_t* get_categories_2() const { return ___categories_2; }
	inline uint8_t** get_address_of_categories_2() { return &___categories_2; }
	inline void set_categories_2(uint8_t* value)
	{
		___categories_2 = value;
	}

	inline static int32_t get_offset_of_level1_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___level1_3)); }
	inline uint8_t* get_level1_3() const { return ___level1_3; }
	inline uint8_t** get_address_of_level1_3() { return &___level1_3; }
	inline void set_level1_3(uint8_t* value)
	{
		___level1_3 = value;
	}

	inline static int32_t get_offset_of_level2_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___level2_4)); }
	inline uint8_t* get_level2_4() const { return ___level2_4; }
	inline uint8_t** get_address_of_level2_4() { return &___level2_4; }
	inline void set_level2_4(uint8_t* value)
	{
		___level2_4 = value;
	}

	inline static int32_t get_offset_of_level3_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___level3_5)); }
	inline uint8_t* get_level3_5() const { return ___level3_5; }
	inline uint8_t** get_address_of_level3_5() { return &___level3_5; }
	inline void set_level3_5(uint8_t* value)
	{
		___level3_5 = value;
	}

	inline static int32_t get_offset_of_cjkCHScategory_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkCHScategory_6)); }
	inline uint8_t* get_cjkCHScategory_6() const { return ___cjkCHScategory_6; }
	inline uint8_t** get_address_of_cjkCHScategory_6() { return &___cjkCHScategory_6; }
	inline void set_cjkCHScategory_6(uint8_t* value)
	{
		___cjkCHScategory_6 = value;
	}

	inline static int32_t get_offset_of_cjkCHTcategory_7() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkCHTcategory_7)); }
	inline uint8_t* get_cjkCHTcategory_7() const { return ___cjkCHTcategory_7; }
	inline uint8_t** get_address_of_cjkCHTcategory_7() { return &___cjkCHTcategory_7; }
	inline void set_cjkCHTcategory_7(uint8_t* value)
	{
		___cjkCHTcategory_7 = value;
	}

	inline static int32_t get_offset_of_cjkJAcategory_8() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkJAcategory_8)); }
	inline uint8_t* get_cjkJAcategory_8() const { return ___cjkJAcategory_8; }
	inline uint8_t** get_address_of_cjkJAcategory_8() { return &___cjkJAcategory_8; }
	inline void set_cjkJAcategory_8(uint8_t* value)
	{
		___cjkJAcategory_8 = value;
	}

	inline static int32_t get_offset_of_cjkKOcategory_9() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkKOcategory_9)); }
	inline uint8_t* get_cjkKOcategory_9() const { return ___cjkKOcategory_9; }
	inline uint8_t** get_address_of_cjkKOcategory_9() { return &___cjkKOcategory_9; }
	inline void set_cjkKOcategory_9(uint8_t* value)
	{
		___cjkKOcategory_9 = value;
	}

	inline static int32_t get_offset_of_cjkCHSlv1_10() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkCHSlv1_10)); }
	inline uint8_t* get_cjkCHSlv1_10() const { return ___cjkCHSlv1_10; }
	inline uint8_t** get_address_of_cjkCHSlv1_10() { return &___cjkCHSlv1_10; }
	inline void set_cjkCHSlv1_10(uint8_t* value)
	{
		___cjkCHSlv1_10 = value;
	}

	inline static int32_t get_offset_of_cjkCHTlv1_11() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkCHTlv1_11)); }
	inline uint8_t* get_cjkCHTlv1_11() const { return ___cjkCHTlv1_11; }
	inline uint8_t** get_address_of_cjkCHTlv1_11() { return &___cjkCHTlv1_11; }
	inline void set_cjkCHTlv1_11(uint8_t* value)
	{
		___cjkCHTlv1_11 = value;
	}

	inline static int32_t get_offset_of_cjkJAlv1_12() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkJAlv1_12)); }
	inline uint8_t* get_cjkJAlv1_12() const { return ___cjkJAlv1_12; }
	inline uint8_t** get_address_of_cjkJAlv1_12() { return &___cjkJAlv1_12; }
	inline void set_cjkJAlv1_12(uint8_t* value)
	{
		___cjkJAlv1_12 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv1_13() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkKOlv1_13)); }
	inline uint8_t* get_cjkKOlv1_13() const { return ___cjkKOlv1_13; }
	inline uint8_t** get_address_of_cjkKOlv1_13() { return &___cjkKOlv1_13; }
	inline void set_cjkKOlv1_13(uint8_t* value)
	{
		___cjkKOlv1_13 = value;
	}

	inline static int32_t get_offset_of_cjkKOlv2_14() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___cjkKOlv2_14)); }
	inline uint8_t* get_cjkKOlv2_14() const { return ___cjkKOlv2_14; }
	inline uint8_t** get_address_of_cjkKOlv2_14() { return &___cjkKOlv2_14; }
	inline void set_cjkKOlv2_14(uint8_t* value)
	{
		___cjkKOlv2_14 = value;
	}

	inline static int32_t get_offset_of_tailoringArr_15() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___tailoringArr_15)); }
	inline CharU5BU5D_t1307605391* get_tailoringArr_15() const { return ___tailoringArr_15; }
	inline CharU5BU5D_t1307605391** get_address_of_tailoringArr_15() { return &___tailoringArr_15; }
	inline void set_tailoringArr_15(CharU5BU5D_t1307605391* value)
	{
		___tailoringArr_15 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringArr_15), value);
	}

	inline static int32_t get_offset_of_tailoringInfos_16() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___tailoringInfos_16)); }
	inline TailoringInfoU5BU5D_t1938524979* get_tailoringInfos_16() const { return ___tailoringInfos_16; }
	inline TailoringInfoU5BU5D_t1938524979** get_address_of_tailoringInfos_16() { return &___tailoringInfos_16; }
	inline void set_tailoringInfos_16(TailoringInfoU5BU5D_t1938524979* value)
	{
		___tailoringInfos_16 = value;
		Il2CppCodeGenWriteBarrier((&___tailoringInfos_16), value);
	}

	inline static int32_t get_offset_of_forLock_17() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___forLock_17)); }
	inline RuntimeObject * get_forLock_17() const { return ___forLock_17; }
	inline RuntimeObject ** get_address_of_forLock_17() { return &___forLock_17; }
	inline void set_forLock_17(RuntimeObject * value)
	{
		___forLock_17 = value;
		Il2CppCodeGenWriteBarrier((&___forLock_17), value);
	}

	inline static int32_t get_offset_of_isReady_18() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTable_t1596958875_StaticFields, ___isReady_18)); }
	inline bool get_isReady_18() const { return ___isReady_18; }
	inline bool* get_address_of_isReady_18() { return &___isReady_18; }
	inline void set_isReady_18(bool value)
	{
		___isReady_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLE_T1596958875_H
#ifndef U3CU3EC_T3608589119_H
#define U3CU3EC_T3608589119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c
struct  U3CU3Ec_t3608589119  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3608589119_StaticFields
{
public:
	// Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c::<>9
	U3CU3Ec_t3608589119 * ___U3CU3E9_0;
	// System.Comparison`1<Mono.Globalization.Unicode.Level2Map> Mono.Globalization.Unicode.MSCompatUnicodeTable/<>c::<>9__17_0
	Comparison_1_t1117050503 * ___U3CU3E9__17_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3608589119_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3608589119 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3608589119 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3608589119 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3608589119_StaticFields, ___U3CU3E9__17_0_1)); }
	inline Comparison_1_t1117050503 * get_U3CU3E9__17_0_1() const { return ___U3CU3E9__17_0_1; }
	inline Comparison_1_t1117050503 ** get_address_of_U3CU3E9__17_0_1() { return &___U3CU3E9__17_0_1; }
	inline void set_U3CU3E9__17_0_1(Comparison_1_t1117050503 * value)
	{
		___U3CU3E9__17_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__17_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3608589119_H
#ifndef MSCOMPATUNICODETABLEUTIL_T1531483003_H
#define MSCOMPATUNICODETABLEUTIL_T1531483003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.MSCompatUnicodeTableUtil
struct  MSCompatUnicodeTableUtil_t1531483003  : public RuntimeObject
{
public:

public:
};

struct MSCompatUnicodeTableUtil_t1531483003_StaticFields
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Ignorable
	CodePointIndexer_t413203008 * ___Ignorable_0;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Category
	CodePointIndexer_t413203008 * ___Category_1;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level1
	CodePointIndexer_t413203008 * ___Level1_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level2
	CodePointIndexer_t413203008 * ___Level2_3;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Level3
	CodePointIndexer_t413203008 * ___Level3_4;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::CjkCHS
	CodePointIndexer_t413203008 * ___CjkCHS_5;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.MSCompatUnicodeTableUtil::Cjk
	CodePointIndexer_t413203008 * ___Cjk_6;

public:
	inline static int32_t get_offset_of_Ignorable_0() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t1531483003_StaticFields, ___Ignorable_0)); }
	inline CodePointIndexer_t413203008 * get_Ignorable_0() const { return ___Ignorable_0; }
	inline CodePointIndexer_t413203008 ** get_address_of_Ignorable_0() { return &___Ignorable_0; }
	inline void set_Ignorable_0(CodePointIndexer_t413203008 * value)
	{
		___Ignorable_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ignorable_0), value);
	}

	inline static int32_t get_offset_of_Category_1() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t1531483003_StaticFields, ___Category_1)); }
	inline CodePointIndexer_t413203008 * get_Category_1() const { return ___Category_1; }
	inline CodePointIndexer_t413203008 ** get_address_of_Category_1() { return &___Category_1; }
	inline void set_Category_1(CodePointIndexer_t413203008 * value)
	{
		___Category_1 = value;
		Il2CppCodeGenWriteBarrier((&___Category_1), value);
	}

	inline static int32_t get_offset_of_Level1_2() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t1531483003_StaticFields, ___Level1_2)); }
	inline CodePointIndexer_t413203008 * get_Level1_2() const { return ___Level1_2; }
	inline CodePointIndexer_t413203008 ** get_address_of_Level1_2() { return &___Level1_2; }
	inline void set_Level1_2(CodePointIndexer_t413203008 * value)
	{
		___Level1_2 = value;
		Il2CppCodeGenWriteBarrier((&___Level1_2), value);
	}

	inline static int32_t get_offset_of_Level2_3() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t1531483003_StaticFields, ___Level2_3)); }
	inline CodePointIndexer_t413203008 * get_Level2_3() const { return ___Level2_3; }
	inline CodePointIndexer_t413203008 ** get_address_of_Level2_3() { return &___Level2_3; }
	inline void set_Level2_3(CodePointIndexer_t413203008 * value)
	{
		___Level2_3 = value;
		Il2CppCodeGenWriteBarrier((&___Level2_3), value);
	}

	inline static int32_t get_offset_of_Level3_4() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t1531483003_StaticFields, ___Level3_4)); }
	inline CodePointIndexer_t413203008 * get_Level3_4() const { return ___Level3_4; }
	inline CodePointIndexer_t413203008 ** get_address_of_Level3_4() { return &___Level3_4; }
	inline void set_Level3_4(CodePointIndexer_t413203008 * value)
	{
		___Level3_4 = value;
		Il2CppCodeGenWriteBarrier((&___Level3_4), value);
	}

	inline static int32_t get_offset_of_CjkCHS_5() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t1531483003_StaticFields, ___CjkCHS_5)); }
	inline CodePointIndexer_t413203008 * get_CjkCHS_5() const { return ___CjkCHS_5; }
	inline CodePointIndexer_t413203008 ** get_address_of_CjkCHS_5() { return &___CjkCHS_5; }
	inline void set_CjkCHS_5(CodePointIndexer_t413203008 * value)
	{
		___CjkCHS_5 = value;
		Il2CppCodeGenWriteBarrier((&___CjkCHS_5), value);
	}

	inline static int32_t get_offset_of_Cjk_6() { return static_cast<int32_t>(offsetof(MSCompatUnicodeTableUtil_t1531483003_StaticFields, ___Cjk_6)); }
	inline CodePointIndexer_t413203008 * get_Cjk_6() const { return ___Cjk_6; }
	inline CodePointIndexer_t413203008 ** get_address_of_Cjk_6() { return &___Cjk_6; }
	inline void set_Cjk_6(CodePointIndexer_t413203008 * value)
	{
		___Cjk_6 = value;
		Il2CppCodeGenWriteBarrier((&___Cjk_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MSCOMPATUNICODETABLEUTIL_T1531483003_H
#ifndef SIMPLECOLLATOR_T1763318688_H
#define SIMPLECOLLATOR_T1763318688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator
struct  SimpleCollator_t1763318688  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo Mono.Globalization.Unicode.SimpleCollator::textInfo
	TextInfo_t2227080339 * ___textInfo_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkIndexer
	CodePointIndexer_t413203008 * ___cjkIndexer_3;
	// Mono.Globalization.Unicode.Contraction[] Mono.Globalization.Unicode.SimpleCollator::contractions
	ContractionU5BU5D_t699585210* ___contractions_4;
	// Mono.Globalization.Unicode.Level2Map[] Mono.Globalization.Unicode.SimpleCollator::level2Maps
	Level2MapU5BU5D_t3096738118* ___level2Maps_5;
	// System.Byte[] Mono.Globalization.Unicode.SimpleCollator::unsafeFlags
	ByteU5BU5D_t2516310093* ___unsafeFlags_6;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkCatTable
	uint8_t* ___cjkCatTable_7;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv1Table
	uint8_t* ___cjkLv1Table_8;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator::cjkLv2Table
	uint8_t* ___cjkLv2Table_9;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.SimpleCollator::cjkLv2Indexer
	CodePointIndexer_t413203008 * ___cjkLv2Indexer_10;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator::lcid
	int32_t ___lcid_11;
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::frenchSort
	bool ___frenchSort_12;

public:
	inline static int32_t get_offset_of_textInfo_2() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___textInfo_2)); }
	inline TextInfo_t2227080339 * get_textInfo_2() const { return ___textInfo_2; }
	inline TextInfo_t2227080339 ** get_address_of_textInfo_2() { return &___textInfo_2; }
	inline void set_textInfo_2(TextInfo_t2227080339 * value)
	{
		___textInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_2), value);
	}

	inline static int32_t get_offset_of_cjkIndexer_3() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___cjkIndexer_3)); }
	inline CodePointIndexer_t413203008 * get_cjkIndexer_3() const { return ___cjkIndexer_3; }
	inline CodePointIndexer_t413203008 ** get_address_of_cjkIndexer_3() { return &___cjkIndexer_3; }
	inline void set_cjkIndexer_3(CodePointIndexer_t413203008 * value)
	{
		___cjkIndexer_3 = value;
		Il2CppCodeGenWriteBarrier((&___cjkIndexer_3), value);
	}

	inline static int32_t get_offset_of_contractions_4() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___contractions_4)); }
	inline ContractionU5BU5D_t699585210* get_contractions_4() const { return ___contractions_4; }
	inline ContractionU5BU5D_t699585210** get_address_of_contractions_4() { return &___contractions_4; }
	inline void set_contractions_4(ContractionU5BU5D_t699585210* value)
	{
		___contractions_4 = value;
		Il2CppCodeGenWriteBarrier((&___contractions_4), value);
	}

	inline static int32_t get_offset_of_level2Maps_5() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___level2Maps_5)); }
	inline Level2MapU5BU5D_t3096738118* get_level2Maps_5() const { return ___level2Maps_5; }
	inline Level2MapU5BU5D_t3096738118** get_address_of_level2Maps_5() { return &___level2Maps_5; }
	inline void set_level2Maps_5(Level2MapU5BU5D_t3096738118* value)
	{
		___level2Maps_5 = value;
		Il2CppCodeGenWriteBarrier((&___level2Maps_5), value);
	}

	inline static int32_t get_offset_of_unsafeFlags_6() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___unsafeFlags_6)); }
	inline ByteU5BU5D_t2516310093* get_unsafeFlags_6() const { return ___unsafeFlags_6; }
	inline ByteU5BU5D_t2516310093** get_address_of_unsafeFlags_6() { return &___unsafeFlags_6; }
	inline void set_unsafeFlags_6(ByteU5BU5D_t2516310093* value)
	{
		___unsafeFlags_6 = value;
		Il2CppCodeGenWriteBarrier((&___unsafeFlags_6), value);
	}

	inline static int32_t get_offset_of_cjkCatTable_7() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___cjkCatTable_7)); }
	inline uint8_t* get_cjkCatTable_7() const { return ___cjkCatTable_7; }
	inline uint8_t** get_address_of_cjkCatTable_7() { return &___cjkCatTable_7; }
	inline void set_cjkCatTable_7(uint8_t* value)
	{
		___cjkCatTable_7 = value;
	}

	inline static int32_t get_offset_of_cjkLv1Table_8() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___cjkLv1Table_8)); }
	inline uint8_t* get_cjkLv1Table_8() const { return ___cjkLv1Table_8; }
	inline uint8_t** get_address_of_cjkLv1Table_8() { return &___cjkLv1Table_8; }
	inline void set_cjkLv1Table_8(uint8_t* value)
	{
		___cjkLv1Table_8 = value;
	}

	inline static int32_t get_offset_of_cjkLv2Table_9() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___cjkLv2Table_9)); }
	inline uint8_t* get_cjkLv2Table_9() const { return ___cjkLv2Table_9; }
	inline uint8_t** get_address_of_cjkLv2Table_9() { return &___cjkLv2Table_9; }
	inline void set_cjkLv2Table_9(uint8_t* value)
	{
		___cjkLv2Table_9 = value;
	}

	inline static int32_t get_offset_of_cjkLv2Indexer_10() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___cjkLv2Indexer_10)); }
	inline CodePointIndexer_t413203008 * get_cjkLv2Indexer_10() const { return ___cjkLv2Indexer_10; }
	inline CodePointIndexer_t413203008 ** get_address_of_cjkLv2Indexer_10() { return &___cjkLv2Indexer_10; }
	inline void set_cjkLv2Indexer_10(CodePointIndexer_t413203008 * value)
	{
		___cjkLv2Indexer_10 = value;
		Il2CppCodeGenWriteBarrier((&___cjkLv2Indexer_10), value);
	}

	inline static int32_t get_offset_of_lcid_11() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___lcid_11)); }
	inline int32_t get_lcid_11() const { return ___lcid_11; }
	inline int32_t* get_address_of_lcid_11() { return &___lcid_11; }
	inline void set_lcid_11(int32_t value)
	{
		___lcid_11 = value;
	}

	inline static int32_t get_offset_of_frenchSort_12() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688, ___frenchSort_12)); }
	inline bool get_frenchSort_12() const { return ___frenchSort_12; }
	inline bool* get_address_of_frenchSort_12() { return &___frenchSort_12; }
	inline void set_frenchSort_12(bool value)
	{
		___frenchSort_12 = value;
	}
};

struct SimpleCollator_t1763318688_StaticFields
{
public:
	// System.Boolean Mono.Globalization.Unicode.SimpleCollator::QuickCheckDisabled
	bool ___QuickCheckDisabled_0;
	// Mono.Globalization.Unicode.SimpleCollator Mono.Globalization.Unicode.SimpleCollator::invariant
	SimpleCollator_t1763318688 * ___invariant_1;

public:
	inline static int32_t get_offset_of_QuickCheckDisabled_0() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688_StaticFields, ___QuickCheckDisabled_0)); }
	inline bool get_QuickCheckDisabled_0() const { return ___QuickCheckDisabled_0; }
	inline bool* get_address_of_QuickCheckDisabled_0() { return &___QuickCheckDisabled_0; }
	inline void set_QuickCheckDisabled_0(bool value)
	{
		___QuickCheckDisabled_0 = value;
	}

	inline static int32_t get_offset_of_invariant_1() { return static_cast<int32_t>(offsetof(SimpleCollator_t1763318688_StaticFields, ___invariant_1)); }
	inline SimpleCollator_t1763318688 * get_invariant_1() const { return ___invariant_1; }
	inline SimpleCollator_t1763318688 ** get_address_of_invariant_1() { return &___invariant_1; }
	inline void set_invariant_1(SimpleCollator_t1763318688 * value)
	{
		___invariant_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECOLLATOR_T1763318688_H
#ifndef NORMALIZATIONTABLEUTIL_T3675139979_H
#define NORMALIZATIONTABLEUTIL_T3675139979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.NormalizationTableUtil
struct  NormalizationTableUtil_t3675139979  : public RuntimeObject
{
public:

public:
};

struct NormalizationTableUtil_t3675139979_StaticFields
{
public:
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Prop
	CodePointIndexer_t413203008 * ___Prop_0;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Map
	CodePointIndexer_t413203008 * ___Map_1;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Combining
	CodePointIndexer_t413203008 * ___Combining_2;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Composite
	CodePointIndexer_t413203008 * ___Composite_3;
	// Mono.Globalization.Unicode.CodePointIndexer Mono.Globalization.Unicode.NormalizationTableUtil::Helper
	CodePointIndexer_t413203008 * ___Helper_4;

public:
	inline static int32_t get_offset_of_Prop_0() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3675139979_StaticFields, ___Prop_0)); }
	inline CodePointIndexer_t413203008 * get_Prop_0() const { return ___Prop_0; }
	inline CodePointIndexer_t413203008 ** get_address_of_Prop_0() { return &___Prop_0; }
	inline void set_Prop_0(CodePointIndexer_t413203008 * value)
	{
		___Prop_0 = value;
		Il2CppCodeGenWriteBarrier((&___Prop_0), value);
	}

	inline static int32_t get_offset_of_Map_1() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3675139979_StaticFields, ___Map_1)); }
	inline CodePointIndexer_t413203008 * get_Map_1() const { return ___Map_1; }
	inline CodePointIndexer_t413203008 ** get_address_of_Map_1() { return &___Map_1; }
	inline void set_Map_1(CodePointIndexer_t413203008 * value)
	{
		___Map_1 = value;
		Il2CppCodeGenWriteBarrier((&___Map_1), value);
	}

	inline static int32_t get_offset_of_Combining_2() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3675139979_StaticFields, ___Combining_2)); }
	inline CodePointIndexer_t413203008 * get_Combining_2() const { return ___Combining_2; }
	inline CodePointIndexer_t413203008 ** get_address_of_Combining_2() { return &___Combining_2; }
	inline void set_Combining_2(CodePointIndexer_t413203008 * value)
	{
		___Combining_2 = value;
		Il2CppCodeGenWriteBarrier((&___Combining_2), value);
	}

	inline static int32_t get_offset_of_Composite_3() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3675139979_StaticFields, ___Composite_3)); }
	inline CodePointIndexer_t413203008 * get_Composite_3() const { return ___Composite_3; }
	inline CodePointIndexer_t413203008 ** get_address_of_Composite_3() { return &___Composite_3; }
	inline void set_Composite_3(CodePointIndexer_t413203008 * value)
	{
		___Composite_3 = value;
		Il2CppCodeGenWriteBarrier((&___Composite_3), value);
	}

	inline static int32_t get_offset_of_Helper_4() { return static_cast<int32_t>(offsetof(NormalizationTableUtil_t3675139979_StaticFields, ___Helper_4)); }
	inline CodePointIndexer_t413203008 * get_Helper_4() const { return ___Helper_4; }
	inline CodePointIndexer_t413203008 ** get_address_of_Helper_4() { return &___Helper_4; }
	inline void set_Helper_4(CodePointIndexer_t413203008 * value)
	{
		___Helper_4 = value;
		Il2CppCodeGenWriteBarrier((&___Helper_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NORMALIZATIONTABLEUTIL_T3675139979_H
#ifndef REGISTRY_T2958990643_H
#define REGISTRY_T2958990643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Registry
struct  Registry_t2958990643  : public RuntimeObject
{
public:

public:
};

struct Registry_t2958990643_StaticFields
{
public:
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::ClassesRoot
	RegistryKey_t3425007057 * ___ClassesRoot_0;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::CurrentConfig
	RegistryKey_t3425007057 * ___CurrentConfig_1;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::CurrentUser
	RegistryKey_t3425007057 * ___CurrentUser_2;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::DynData
	RegistryKey_t3425007057 * ___DynData_3;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::LocalMachine
	RegistryKey_t3425007057 * ___LocalMachine_4;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::PerformanceData
	RegistryKey_t3425007057 * ___PerformanceData_5;
	// Microsoft.Win32.RegistryKey Microsoft.Win32.Registry::Users
	RegistryKey_t3425007057 * ___Users_6;

public:
	inline static int32_t get_offset_of_ClassesRoot_0() { return static_cast<int32_t>(offsetof(Registry_t2958990643_StaticFields, ___ClassesRoot_0)); }
	inline RegistryKey_t3425007057 * get_ClassesRoot_0() const { return ___ClassesRoot_0; }
	inline RegistryKey_t3425007057 ** get_address_of_ClassesRoot_0() { return &___ClassesRoot_0; }
	inline void set_ClassesRoot_0(RegistryKey_t3425007057 * value)
	{
		___ClassesRoot_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassesRoot_0), value);
	}

	inline static int32_t get_offset_of_CurrentConfig_1() { return static_cast<int32_t>(offsetof(Registry_t2958990643_StaticFields, ___CurrentConfig_1)); }
	inline RegistryKey_t3425007057 * get_CurrentConfig_1() const { return ___CurrentConfig_1; }
	inline RegistryKey_t3425007057 ** get_address_of_CurrentConfig_1() { return &___CurrentConfig_1; }
	inline void set_CurrentConfig_1(RegistryKey_t3425007057 * value)
	{
		___CurrentConfig_1 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentConfig_1), value);
	}

	inline static int32_t get_offset_of_CurrentUser_2() { return static_cast<int32_t>(offsetof(Registry_t2958990643_StaticFields, ___CurrentUser_2)); }
	inline RegistryKey_t3425007057 * get_CurrentUser_2() const { return ___CurrentUser_2; }
	inline RegistryKey_t3425007057 ** get_address_of_CurrentUser_2() { return &___CurrentUser_2; }
	inline void set_CurrentUser_2(RegistryKey_t3425007057 * value)
	{
		___CurrentUser_2 = value;
		Il2CppCodeGenWriteBarrier((&___CurrentUser_2), value);
	}

	inline static int32_t get_offset_of_DynData_3() { return static_cast<int32_t>(offsetof(Registry_t2958990643_StaticFields, ___DynData_3)); }
	inline RegistryKey_t3425007057 * get_DynData_3() const { return ___DynData_3; }
	inline RegistryKey_t3425007057 ** get_address_of_DynData_3() { return &___DynData_3; }
	inline void set_DynData_3(RegistryKey_t3425007057 * value)
	{
		___DynData_3 = value;
		Il2CppCodeGenWriteBarrier((&___DynData_3), value);
	}

	inline static int32_t get_offset_of_LocalMachine_4() { return static_cast<int32_t>(offsetof(Registry_t2958990643_StaticFields, ___LocalMachine_4)); }
	inline RegistryKey_t3425007057 * get_LocalMachine_4() const { return ___LocalMachine_4; }
	inline RegistryKey_t3425007057 ** get_address_of_LocalMachine_4() { return &___LocalMachine_4; }
	inline void set_LocalMachine_4(RegistryKey_t3425007057 * value)
	{
		___LocalMachine_4 = value;
		Il2CppCodeGenWriteBarrier((&___LocalMachine_4), value);
	}

	inline static int32_t get_offset_of_PerformanceData_5() { return static_cast<int32_t>(offsetof(Registry_t2958990643_StaticFields, ___PerformanceData_5)); }
	inline RegistryKey_t3425007057 * get_PerformanceData_5() const { return ___PerformanceData_5; }
	inline RegistryKey_t3425007057 ** get_address_of_PerformanceData_5() { return &___PerformanceData_5; }
	inline void set_PerformanceData_5(RegistryKey_t3425007057 * value)
	{
		___PerformanceData_5 = value;
		Il2CppCodeGenWriteBarrier((&___PerformanceData_5), value);
	}

	inline static int32_t get_offset_of_Users_6() { return static_cast<int32_t>(offsetof(Registry_t2958990643_StaticFields, ___Users_6)); }
	inline RegistryKey_t3425007057 * get_Users_6() const { return ___Users_6; }
	inline RegistryKey_t3425007057 ** get_address_of_Users_6() { return &___Users_6; }
	inline void set_Users_6(RegistryKey_t3425007057 * value)
	{
		___Users_6 = value;
		Il2CppCodeGenWriteBarrier((&___Users_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRY_T2958990643_H
#ifndef EXPANDSTRING_T2783439793_H
#define EXPANDSTRING_T2783439793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.ExpandString
struct  ExpandString_t2783439793  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.ExpandString::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(ExpandString_t2783439793, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDSTRING_T2783439793_H
#ifndef REGISTRYKEYCOMPARER_T3681817069_H
#define REGISTRYKEYCOMPARER_T3681817069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKeyComparer
struct  RegistryKeyComparer_t3681817069  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYKEYCOMPARER_T3681817069_H
#ifndef KEYHANDLER_T507701665_H
#define KEYHANDLER_T507701665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.KeyHandler
struct  KeyHandler_t507701665  : public RuntimeObject
{
public:
	// System.String Microsoft.Win32.KeyHandler::Dir
	String_t* ___Dir_2;
	// System.String Microsoft.Win32.KeyHandler::ActualDir
	String_t* ___ActualDir_3;
	// System.Boolean Microsoft.Win32.KeyHandler::IsVolatile
	bool ___IsVolatile_4;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::values
	Hashtable_t776164328 * ___values_5;
	// System.String Microsoft.Win32.KeyHandler::file
	String_t* ___file_6;
	// System.Boolean Microsoft.Win32.KeyHandler::dirty
	bool ___dirty_7;

public:
	inline static int32_t get_offset_of_Dir_2() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665, ___Dir_2)); }
	inline String_t* get_Dir_2() const { return ___Dir_2; }
	inline String_t** get_address_of_Dir_2() { return &___Dir_2; }
	inline void set_Dir_2(String_t* value)
	{
		___Dir_2 = value;
		Il2CppCodeGenWriteBarrier((&___Dir_2), value);
	}

	inline static int32_t get_offset_of_ActualDir_3() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665, ___ActualDir_3)); }
	inline String_t* get_ActualDir_3() const { return ___ActualDir_3; }
	inline String_t** get_address_of_ActualDir_3() { return &___ActualDir_3; }
	inline void set_ActualDir_3(String_t* value)
	{
		___ActualDir_3 = value;
		Il2CppCodeGenWriteBarrier((&___ActualDir_3), value);
	}

	inline static int32_t get_offset_of_IsVolatile_4() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665, ___IsVolatile_4)); }
	inline bool get_IsVolatile_4() const { return ___IsVolatile_4; }
	inline bool* get_address_of_IsVolatile_4() { return &___IsVolatile_4; }
	inline void set_IsVolatile_4(bool value)
	{
		___IsVolatile_4 = value;
	}

	inline static int32_t get_offset_of_values_5() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665, ___values_5)); }
	inline Hashtable_t776164328 * get_values_5() const { return ___values_5; }
	inline Hashtable_t776164328 ** get_address_of_values_5() { return &___values_5; }
	inline void set_values_5(Hashtable_t776164328 * value)
	{
		___values_5 = value;
		Il2CppCodeGenWriteBarrier((&___values_5), value);
	}

	inline static int32_t get_offset_of_file_6() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665, ___file_6)); }
	inline String_t* get_file_6() const { return ___file_6; }
	inline String_t** get_address_of_file_6() { return &___file_6; }
	inline void set_file_6(String_t* value)
	{
		___file_6 = value;
		Il2CppCodeGenWriteBarrier((&___file_6), value);
	}

	inline static int32_t get_offset_of_dirty_7() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665, ___dirty_7)); }
	inline bool get_dirty_7() const { return ___dirty_7; }
	inline bool* get_address_of_dirty_7() { return &___dirty_7; }
	inline void set_dirty_7(bool value)
	{
		___dirty_7 = value;
	}
};

struct KeyHandler_t507701665_StaticFields
{
public:
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::key_to_handler
	Hashtable_t776164328 * ___key_to_handler_0;
	// System.Collections.Hashtable Microsoft.Win32.KeyHandler::dir_to_handler
	Hashtable_t776164328 * ___dir_to_handler_1;
	// System.String Microsoft.Win32.KeyHandler::user_store
	String_t* ___user_store_8;
	// System.String Microsoft.Win32.KeyHandler::machine_store
	String_t* ___machine_store_9;

public:
	inline static int32_t get_offset_of_key_to_handler_0() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665_StaticFields, ___key_to_handler_0)); }
	inline Hashtable_t776164328 * get_key_to_handler_0() const { return ___key_to_handler_0; }
	inline Hashtable_t776164328 ** get_address_of_key_to_handler_0() { return &___key_to_handler_0; }
	inline void set_key_to_handler_0(Hashtable_t776164328 * value)
	{
		___key_to_handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_to_handler_0), value);
	}

	inline static int32_t get_offset_of_dir_to_handler_1() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665_StaticFields, ___dir_to_handler_1)); }
	inline Hashtable_t776164328 * get_dir_to_handler_1() const { return ___dir_to_handler_1; }
	inline Hashtable_t776164328 ** get_address_of_dir_to_handler_1() { return &___dir_to_handler_1; }
	inline void set_dir_to_handler_1(Hashtable_t776164328 * value)
	{
		___dir_to_handler_1 = value;
		Il2CppCodeGenWriteBarrier((&___dir_to_handler_1), value);
	}

	inline static int32_t get_offset_of_user_store_8() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665_StaticFields, ___user_store_8)); }
	inline String_t* get_user_store_8() const { return ___user_store_8; }
	inline String_t** get_address_of_user_store_8() { return &___user_store_8; }
	inline void set_user_store_8(String_t* value)
	{
		___user_store_8 = value;
		Il2CppCodeGenWriteBarrier((&___user_store_8), value);
	}

	inline static int32_t get_offset_of_machine_store_9() { return static_cast<int32_t>(offsetof(KeyHandler_t507701665_StaticFields, ___machine_store_9)); }
	inline String_t* get_machine_store_9() const { return ___machine_store_9; }
	inline String_t** get_address_of_machine_store_9() { return &___machine_store_9; }
	inline void set_machine_store_9(String_t* value)
	{
		___machine_store_9 = value;
		Il2CppCodeGenWriteBarrier((&___machine_store_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYHANDLER_T507701665_H
#ifndef UNIXREGISTRYAPI_T3151315820_H
#define UNIXREGISTRYAPI_T3151315820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.UnixRegistryApi
struct  UnixRegistryApi_t3151315820  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXREGISTRYAPI_T3151315820_H
#ifndef WIN32REGISTRYAPI_T185362464_H
#define WIN32REGISTRYAPI_T185362464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32RegistryApi
struct  Win32RegistryApi_t185362464  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32RegistryApi::NativeBytesPerCharacter
	int32_t ___NativeBytesPerCharacter_0;

public:
	inline static int32_t get_offset_of_NativeBytesPerCharacter_0() { return static_cast<int32_t>(offsetof(Win32RegistryApi_t185362464, ___NativeBytesPerCharacter_0)); }
	inline int32_t get_NativeBytesPerCharacter_0() const { return ___NativeBytesPerCharacter_0; }
	inline int32_t* get_address_of_NativeBytesPerCharacter_0() { return &___NativeBytesPerCharacter_0; }
	inline void set_NativeBytesPerCharacter_0(int32_t value)
	{
		___NativeBytesPerCharacter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32REGISTRYAPI_T185362464_H
#ifndef UNSAFENATIVEMETHODS_T1413630486_H
#define UNSAFENATIVEMETHODS_T1413630486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.UnsafeNativeMethods
struct  UnsafeNativeMethods_t1413630486  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFENATIVEMETHODS_T1413630486_H
#ifndef WIN32_FIND_DATA_T4077751324_H
#define WIN32_FIND_DATA_T4077751324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct  WIN32_FIND_DATA_t4077751324  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// System.UInt32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::ftCreationTime_dwLowDateTime
	uint32_t ___ftCreationTime_dwLowDateTime_1;
	// System.UInt32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::ftCreationTime_dwHighDateTime
	uint32_t ___ftCreationTime_dwHighDateTime_2;
	// System.UInt32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::ftLastAccessTime_dwLowDateTime
	uint32_t ___ftLastAccessTime_dwLowDateTime_3;
	// System.UInt32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::ftLastAccessTime_dwHighDateTime
	uint32_t ___ftLastAccessTime_dwHighDateTime_4;
	// System.UInt32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::ftLastWriteTime_dwLowDateTime
	uint32_t ___ftLastWriteTime_dwLowDateTime_5;
	// System.UInt32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::ftLastWriteTime_dwHighDateTime
	uint32_t ___ftLastWriteTime_dwHighDateTime_6;
	// System.Int32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::nFileSizeHigh
	int32_t ___nFileSizeHigh_7;
	// System.Int32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::nFileSizeLow
	int32_t ___nFileSizeLow_8;
	// System.Int32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::dwReserved0
	int32_t ___dwReserved0_9;
	// System.Int32 Microsoft.Win32.Win32Native/WIN32_FIND_DATA::dwReserved1
	int32_t ___dwReserved1_10;
	// System.String Microsoft.Win32.Win32Native/WIN32_FIND_DATA::cFileName
	String_t* ___cFileName_11;
	// System.String Microsoft.Win32.Win32Native/WIN32_FIND_DATA::cAlternateFileName
	String_t* ___cAlternateFileName_12;

public:
	inline static int32_t get_offset_of_dwFileAttributes_0() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___dwFileAttributes_0)); }
	inline int32_t get_dwFileAttributes_0() const { return ___dwFileAttributes_0; }
	inline int32_t* get_address_of_dwFileAttributes_0() { return &___dwFileAttributes_0; }
	inline void set_dwFileAttributes_0(int32_t value)
	{
		___dwFileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_ftCreationTime_dwLowDateTime_1() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___ftCreationTime_dwLowDateTime_1)); }
	inline uint32_t get_ftCreationTime_dwLowDateTime_1() const { return ___ftCreationTime_dwLowDateTime_1; }
	inline uint32_t* get_address_of_ftCreationTime_dwLowDateTime_1() { return &___ftCreationTime_dwLowDateTime_1; }
	inline void set_ftCreationTime_dwLowDateTime_1(uint32_t value)
	{
		___ftCreationTime_dwLowDateTime_1 = value;
	}

	inline static int32_t get_offset_of_ftCreationTime_dwHighDateTime_2() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___ftCreationTime_dwHighDateTime_2)); }
	inline uint32_t get_ftCreationTime_dwHighDateTime_2() const { return ___ftCreationTime_dwHighDateTime_2; }
	inline uint32_t* get_address_of_ftCreationTime_dwHighDateTime_2() { return &___ftCreationTime_dwHighDateTime_2; }
	inline void set_ftCreationTime_dwHighDateTime_2(uint32_t value)
	{
		___ftCreationTime_dwHighDateTime_2 = value;
	}

	inline static int32_t get_offset_of_ftLastAccessTime_dwLowDateTime_3() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___ftLastAccessTime_dwLowDateTime_3)); }
	inline uint32_t get_ftLastAccessTime_dwLowDateTime_3() const { return ___ftLastAccessTime_dwLowDateTime_3; }
	inline uint32_t* get_address_of_ftLastAccessTime_dwLowDateTime_3() { return &___ftLastAccessTime_dwLowDateTime_3; }
	inline void set_ftLastAccessTime_dwLowDateTime_3(uint32_t value)
	{
		___ftLastAccessTime_dwLowDateTime_3 = value;
	}

	inline static int32_t get_offset_of_ftLastAccessTime_dwHighDateTime_4() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___ftLastAccessTime_dwHighDateTime_4)); }
	inline uint32_t get_ftLastAccessTime_dwHighDateTime_4() const { return ___ftLastAccessTime_dwHighDateTime_4; }
	inline uint32_t* get_address_of_ftLastAccessTime_dwHighDateTime_4() { return &___ftLastAccessTime_dwHighDateTime_4; }
	inline void set_ftLastAccessTime_dwHighDateTime_4(uint32_t value)
	{
		___ftLastAccessTime_dwHighDateTime_4 = value;
	}

	inline static int32_t get_offset_of_ftLastWriteTime_dwLowDateTime_5() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___ftLastWriteTime_dwLowDateTime_5)); }
	inline uint32_t get_ftLastWriteTime_dwLowDateTime_5() const { return ___ftLastWriteTime_dwLowDateTime_5; }
	inline uint32_t* get_address_of_ftLastWriteTime_dwLowDateTime_5() { return &___ftLastWriteTime_dwLowDateTime_5; }
	inline void set_ftLastWriteTime_dwLowDateTime_5(uint32_t value)
	{
		___ftLastWriteTime_dwLowDateTime_5 = value;
	}

	inline static int32_t get_offset_of_ftLastWriteTime_dwHighDateTime_6() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___ftLastWriteTime_dwHighDateTime_6)); }
	inline uint32_t get_ftLastWriteTime_dwHighDateTime_6() const { return ___ftLastWriteTime_dwHighDateTime_6; }
	inline uint32_t* get_address_of_ftLastWriteTime_dwHighDateTime_6() { return &___ftLastWriteTime_dwHighDateTime_6; }
	inline void set_ftLastWriteTime_dwHighDateTime_6(uint32_t value)
	{
		___ftLastWriteTime_dwHighDateTime_6 = value;
	}

	inline static int32_t get_offset_of_nFileSizeHigh_7() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___nFileSizeHigh_7)); }
	inline int32_t get_nFileSizeHigh_7() const { return ___nFileSizeHigh_7; }
	inline int32_t* get_address_of_nFileSizeHigh_7() { return &___nFileSizeHigh_7; }
	inline void set_nFileSizeHigh_7(int32_t value)
	{
		___nFileSizeHigh_7 = value;
	}

	inline static int32_t get_offset_of_nFileSizeLow_8() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___nFileSizeLow_8)); }
	inline int32_t get_nFileSizeLow_8() const { return ___nFileSizeLow_8; }
	inline int32_t* get_address_of_nFileSizeLow_8() { return &___nFileSizeLow_8; }
	inline void set_nFileSizeLow_8(int32_t value)
	{
		___nFileSizeLow_8 = value;
	}

	inline static int32_t get_offset_of_dwReserved0_9() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___dwReserved0_9)); }
	inline int32_t get_dwReserved0_9() const { return ___dwReserved0_9; }
	inline int32_t* get_address_of_dwReserved0_9() { return &___dwReserved0_9; }
	inline void set_dwReserved0_9(int32_t value)
	{
		___dwReserved0_9 = value;
	}

	inline static int32_t get_offset_of_dwReserved1_10() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___dwReserved1_10)); }
	inline int32_t get_dwReserved1_10() const { return ___dwReserved1_10; }
	inline int32_t* get_address_of_dwReserved1_10() { return &___dwReserved1_10; }
	inline void set_dwReserved1_10(int32_t value)
	{
		___dwReserved1_10 = value;
	}

	inline static int32_t get_offset_of_cFileName_11() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___cFileName_11)); }
	inline String_t* get_cFileName_11() const { return ___cFileName_11; }
	inline String_t** get_address_of_cFileName_11() { return &___cFileName_11; }
	inline void set_cFileName_11(String_t* value)
	{
		___cFileName_11 = value;
		Il2CppCodeGenWriteBarrier((&___cFileName_11), value);
	}

	inline static int32_t get_offset_of_cAlternateFileName_12() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_t4077751324, ___cAlternateFileName_12)); }
	inline String_t* get_cAlternateFileName_12() const { return ___cAlternateFileName_12; }
	inline String_t** get_address_of_cAlternateFileName_12() { return &___cAlternateFileName_12; }
	inline void set_cAlternateFileName_12(String_t* value)
	{
		___cAlternateFileName_12 = value;
		Il2CppCodeGenWriteBarrier((&___cAlternateFileName_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct WIN32_FIND_DATA_t4077751324_marshaled_pinvoke
{
	int32_t ___dwFileAttributes_0;
	uint32_t ___ftCreationTime_dwLowDateTime_1;
	uint32_t ___ftCreationTime_dwHighDateTime_2;
	uint32_t ___ftLastAccessTime_dwLowDateTime_3;
	uint32_t ___ftLastAccessTime_dwHighDateTime_4;
	uint32_t ___ftLastWriteTime_dwLowDateTime_5;
	uint32_t ___ftLastWriteTime_dwHighDateTime_6;
	int32_t ___nFileSizeHigh_7;
	int32_t ___nFileSizeLow_8;
	int32_t ___dwReserved0_9;
	int32_t ___dwReserved1_10;
	char ___cFileName_11[260];
	char ___cAlternateFileName_12[14];
};
// Native definition for COM marshalling of Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct WIN32_FIND_DATA_t4077751324_marshaled_com
{
	int32_t ___dwFileAttributes_0;
	uint32_t ___ftCreationTime_dwLowDateTime_1;
	uint32_t ___ftCreationTime_dwHighDateTime_2;
	uint32_t ___ftLastAccessTime_dwLowDateTime_3;
	uint32_t ___ftLastAccessTime_dwHighDateTime_4;
	uint32_t ___ftLastWriteTime_dwLowDateTime_5;
	uint32_t ___ftLastWriteTime_dwHighDateTime_6;
	int32_t ___nFileSizeHigh_7;
	int32_t ___nFileSizeLow_8;
	int32_t ___dwReserved0_9;
	int32_t ___dwReserved1_10;
	char ___cFileName_11[260];
	char ___cAlternateFileName_12[14];
};
#endif // WIN32_FIND_DATA_T4077751324_H
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
#ifndef COLLECTIONBASE_T2847732657_H
#define COLLECTIONBASE_T2847732657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2847732657  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t3576894409 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2847732657, ___list_0)); }
	inline ArrayList_t3576894409 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3576894409 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3576894409 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2847732657_H
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
#ifndef ASYMMETRICALGORITHM_T2476573202_H
#define ASYMMETRICALGORITHM_T2476573202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t2476573202  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t2560268273* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2476573202, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2476573202, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t2560268273* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t2560268273** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t2560268273* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T2476573202_H
#ifndef BIGINTEGER_T3424891946_H
#define BIGINTEGER_T3424891946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t3424891946  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t1508412189* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3424891946, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3424891946, ___data_1)); }
	inline UInt32U5BU5D_t1508412189* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t1508412189** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t1508412189* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t3424891946_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t1508412189* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t1266854030 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3424891946_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t1508412189* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t1508412189** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t1508412189* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3424891946_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t1266854030 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t1266854030 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t1266854030 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T3424891946_H
#ifndef AUTHENTICODEBASE_T2209899351_H
#define AUTHENTICODEBASE_T2209899351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeBase
struct  AuthenticodeBase_t2209899351  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::fileblock
	ByteU5BU5D_t2516310093* ___fileblock_0;
	// System.IO.FileStream Mono.Security.Authenticode.AuthenticodeBase::fs
	FileStream_t2636901281 * ___fs_1;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockNo
	int32_t ___blockNo_2;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockLength
	int32_t ___blockLength_3;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::peOffset
	int32_t ___peOffset_4;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecurityOffset
	int32_t ___dirSecurityOffset_5;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecuritySize
	int32_t ___dirSecuritySize_6;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::coffSymbolTableOffset
	int32_t ___coffSymbolTableOffset_7;

public:
	inline static int32_t get_offset_of_fileblock_0() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t2209899351, ___fileblock_0)); }
	inline ByteU5BU5D_t2516310093* get_fileblock_0() const { return ___fileblock_0; }
	inline ByteU5BU5D_t2516310093** get_address_of_fileblock_0() { return &___fileblock_0; }
	inline void set_fileblock_0(ByteU5BU5D_t2516310093* value)
	{
		___fileblock_0 = value;
		Il2CppCodeGenWriteBarrier((&___fileblock_0), value);
	}

	inline static int32_t get_offset_of_fs_1() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t2209899351, ___fs_1)); }
	inline FileStream_t2636901281 * get_fs_1() const { return ___fs_1; }
	inline FileStream_t2636901281 ** get_address_of_fs_1() { return &___fs_1; }
	inline void set_fs_1(FileStream_t2636901281 * value)
	{
		___fs_1 = value;
		Il2CppCodeGenWriteBarrier((&___fs_1), value);
	}

	inline static int32_t get_offset_of_blockNo_2() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t2209899351, ___blockNo_2)); }
	inline int32_t get_blockNo_2() const { return ___blockNo_2; }
	inline int32_t* get_address_of_blockNo_2() { return &___blockNo_2; }
	inline void set_blockNo_2(int32_t value)
	{
		___blockNo_2 = value;
	}

	inline static int32_t get_offset_of_blockLength_3() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t2209899351, ___blockLength_3)); }
	inline int32_t get_blockLength_3() const { return ___blockLength_3; }
	inline int32_t* get_address_of_blockLength_3() { return &___blockLength_3; }
	inline void set_blockLength_3(int32_t value)
	{
		___blockLength_3 = value;
	}

	inline static int32_t get_offset_of_peOffset_4() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t2209899351, ___peOffset_4)); }
	inline int32_t get_peOffset_4() const { return ___peOffset_4; }
	inline int32_t* get_address_of_peOffset_4() { return &___peOffset_4; }
	inline void set_peOffset_4(int32_t value)
	{
		___peOffset_4 = value;
	}

	inline static int32_t get_offset_of_dirSecurityOffset_5() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t2209899351, ___dirSecurityOffset_5)); }
	inline int32_t get_dirSecurityOffset_5() const { return ___dirSecurityOffset_5; }
	inline int32_t* get_address_of_dirSecurityOffset_5() { return &___dirSecurityOffset_5; }
	inline void set_dirSecurityOffset_5(int32_t value)
	{
		___dirSecurityOffset_5 = value;
	}

	inline static int32_t get_offset_of_dirSecuritySize_6() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t2209899351, ___dirSecuritySize_6)); }
	inline int32_t get_dirSecuritySize_6() const { return ___dirSecuritySize_6; }
	inline int32_t* get_address_of_dirSecuritySize_6() { return &___dirSecuritySize_6; }
	inline void set_dirSecuritySize_6(int32_t value)
	{
		___dirSecuritySize_6 = value;
	}

	inline static int32_t get_offset_of_coffSymbolTableOffset_7() { return static_cast<int32_t>(offsetof(AuthenticodeBase_t2209899351, ___coffSymbolTableOffset_7)); }
	inline int32_t get_coffSymbolTableOffset_7() const { return ___coffSymbolTableOffset_7; }
	inline int32_t* get_address_of_coffSymbolTableOffset_7() { return &___coffSymbolTableOffset_7; }
	inline void set_coffSymbolTableOffset_7(int32_t value)
	{
		___coffSymbolTableOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEBASE_T2209899351_H
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
#ifndef X509EXTENSION_T783139659_H
#define X509EXTENSION_T783139659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t783139659  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t1450547606 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t783139659, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t783139659, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t783139659, ___extnValue_2)); }
	inline ASN1_t1450547606 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t1450547606 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t1450547606 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T783139659_H
#ifndef X509STOREMANAGER_T2251089788_H
#define X509STOREMANAGER_T2251089788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t2251089788  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t2251089788_StaticFields
{
public:
	// System.String Mono.Security.X509.X509StoreManager::_userPath
	String_t* ____userPath_0;
	// System.String Mono.Security.X509.X509StoreManager::_localMachinePath
	String_t* ____localMachinePath_1;
	// System.String Mono.Security.X509.X509StoreManager::_newLocalMachinePath
	String_t* ____newLocalMachinePath_2;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t2996079275 * ____userStore_3;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t2996079275 * ____machineStore_4;

public:
	inline static int32_t get_offset_of__userPath_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t2251089788_StaticFields, ____userPath_0)); }
	inline String_t* get__userPath_0() const { return ____userPath_0; }
	inline String_t** get_address_of__userPath_0() { return &____userPath_0; }
	inline void set__userPath_0(String_t* value)
	{
		____userPath_0 = value;
		Il2CppCodeGenWriteBarrier((&____userPath_0), value);
	}

	inline static int32_t get_offset_of__localMachinePath_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t2251089788_StaticFields, ____localMachinePath_1)); }
	inline String_t* get__localMachinePath_1() const { return ____localMachinePath_1; }
	inline String_t** get_address_of__localMachinePath_1() { return &____localMachinePath_1; }
	inline void set__localMachinePath_1(String_t* value)
	{
		____localMachinePath_1 = value;
		Il2CppCodeGenWriteBarrier((&____localMachinePath_1), value);
	}

	inline static int32_t get_offset_of__newLocalMachinePath_2() { return static_cast<int32_t>(offsetof(X509StoreManager_t2251089788_StaticFields, ____newLocalMachinePath_2)); }
	inline String_t* get__newLocalMachinePath_2() const { return ____newLocalMachinePath_2; }
	inline String_t** get_address_of__newLocalMachinePath_2() { return &____newLocalMachinePath_2; }
	inline void set__newLocalMachinePath_2(String_t* value)
	{
		____newLocalMachinePath_2 = value;
		Il2CppCodeGenWriteBarrier((&____newLocalMachinePath_2), value);
	}

	inline static int32_t get_offset_of__userStore_3() { return static_cast<int32_t>(offsetof(X509StoreManager_t2251089788_StaticFields, ____userStore_3)); }
	inline X509Stores_t2996079275 * get__userStore_3() const { return ____userStore_3; }
	inline X509Stores_t2996079275 ** get_address_of__userStore_3() { return &____userStore_3; }
	inline void set__userStore_3(X509Stores_t2996079275 * value)
	{
		____userStore_3 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_3), value);
	}

	inline static int32_t get_offset_of__machineStore_4() { return static_cast<int32_t>(offsetof(X509StoreManager_t2251089788_StaticFields, ____machineStore_4)); }
	inline X509Stores_t2996079275 * get__machineStore_4() const { return ____machineStore_4; }
	inline X509Stores_t2996079275 ** get_address_of__machineStore_4() { return &____machineStore_4; }
	inline void set__machineStore_4(X509Stores_t2996079275 * value)
	{
		____machineStore_4 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T2251089788_H
#ifndef PKCS12_T2301687543_H
#define PKCS12_T2301687543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t2301687543  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t2516310093* ____password_0;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t3576894409 * ____keyBags_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t3576894409 * ____secretBags_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t2318156732 * ____certs_3;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_4;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_6;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_7;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t3576894409 * ____safeBags_8;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t1266854030 * ____rng_9;

public:
	inline static int32_t get_offset_of__password_0() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____password_0)); }
	inline ByteU5BU5D_t2516310093* get__password_0() const { return ____password_0; }
	inline ByteU5BU5D_t2516310093** get_address_of__password_0() { return &____password_0; }
	inline void set__password_0(ByteU5BU5D_t2516310093* value)
	{
		____password_0 = value;
		Il2CppCodeGenWriteBarrier((&____password_0), value);
	}

	inline static int32_t get_offset_of__keyBags_1() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____keyBags_1)); }
	inline ArrayList_t3576894409 * get__keyBags_1() const { return ____keyBags_1; }
	inline ArrayList_t3576894409 ** get_address_of__keyBags_1() { return &____keyBags_1; }
	inline void set__keyBags_1(ArrayList_t3576894409 * value)
	{
		____keyBags_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_1), value);
	}

	inline static int32_t get_offset_of__secretBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____secretBags_2)); }
	inline ArrayList_t3576894409 * get__secretBags_2() const { return ____secretBags_2; }
	inline ArrayList_t3576894409 ** get_address_of__secretBags_2() { return &____secretBags_2; }
	inline void set__secretBags_2(ArrayList_t3576894409 * value)
	{
		____secretBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_2), value);
	}

	inline static int32_t get_offset_of__certs_3() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____certs_3)); }
	inline X509CertificateCollection_t2318156732 * get__certs_3() const { return ____certs_3; }
	inline X509CertificateCollection_t2318156732 ** get_address_of__certs_3() { return &____certs_3; }
	inline void set__certs_3(X509CertificateCollection_t2318156732 * value)
	{
		____certs_3 = value;
		Il2CppCodeGenWriteBarrier((&____certs_3), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_4() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____keyBagsChanged_4)); }
	inline bool get__keyBagsChanged_4() const { return ____keyBagsChanged_4; }
	inline bool* get_address_of__keyBagsChanged_4() { return &____keyBagsChanged_4; }
	inline void set__keyBagsChanged_4(bool value)
	{
		____keyBagsChanged_4 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____secretBagsChanged_5)); }
	inline bool get__secretBagsChanged_5() const { return ____secretBagsChanged_5; }
	inline bool* get_address_of__secretBagsChanged_5() { return &____secretBagsChanged_5; }
	inline void set__secretBagsChanged_5(bool value)
	{
		____secretBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__certsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____certsChanged_6)); }
	inline bool get__certsChanged_6() const { return ____certsChanged_6; }
	inline bool* get_address_of__certsChanged_6() { return &____certsChanged_6; }
	inline void set__certsChanged_6(bool value)
	{
		____certsChanged_6 = value;
	}

	inline static int32_t get_offset_of__iterations_7() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____iterations_7)); }
	inline int32_t get__iterations_7() const { return ____iterations_7; }
	inline int32_t* get_address_of__iterations_7() { return &____iterations_7; }
	inline void set__iterations_7(int32_t value)
	{
		____iterations_7 = value;
	}

	inline static int32_t get_offset_of__safeBags_8() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____safeBags_8)); }
	inline ArrayList_t3576894409 * get__safeBags_8() const { return ____safeBags_8; }
	inline ArrayList_t3576894409 ** get_address_of__safeBags_8() { return &____safeBags_8; }
	inline void set__safeBags_8(ArrayList_t3576894409 * value)
	{
		____safeBags_8 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_8), value);
	}

	inline static int32_t get_offset_of__rng_9() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543, ____rng_9)); }
	inline RandomNumberGenerator_t1266854030 * get__rng_9() const { return ____rng_9; }
	inline RandomNumberGenerator_t1266854030 ** get_address_of__rng_9() { return &____rng_9; }
	inline void set__rng_9(RandomNumberGenerator_t1266854030 * value)
	{
		____rng_9 = value;
		Il2CppCodeGenWriteBarrier((&____rng_9), value);
	}
};

struct PKCS12_t2301687543_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_10;

public:
	inline static int32_t get_offset_of_password_max_length_10() { return static_cast<int32_t>(offsetof(PKCS12_t2301687543_StaticFields, ___password_max_length_10)); }
	inline int32_t get_password_max_length_10() const { return ___password_max_length_10; }
	inline int32_t* get_address_of_password_max_length_10() { return &___password_max_length_10; }
	inline void set_password_max_length_10(int32_t value)
	{
		___password_max_length_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T2301687543_H
#ifndef CRYPTOCONVERT_T3532489358_H
#define CRYPTOCONVERT_T3532489358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t3532489358  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T3532489358_H
#ifndef KEYBUILDER_T1140821251_H
#define KEYBUILDER_T1140821251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t1140821251  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t1140821251_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t1266854030 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t1140821251_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t1266854030 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t1266854030 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t1266854030 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T1140821251_H
#ifndef X509CERTIFICATEENUMERATOR_T187569084_H
#define X509CERTIFICATEENUMERATOR_T187569084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t187569084  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t187569084, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T187569084_H
#ifndef SAFEBAG_T1920738679_H
#define SAFEBAG_T1920738679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t1920738679  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t1450547606 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t1920738679, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t1920738679, ____asn1_1)); }
	inline ASN1_t1450547606 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t1450547606 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t1450547606 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T1920738679_H
#ifndef KEYPAIRPERSISTENCE_T3970917333_H
#define KEYPAIRPERSISTENCE_T3970917333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyPairPersistence
struct  KeyPairPersistence_t3970917333  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::_params
	CspParameters_t300073384 * ____params_4;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_keyvalue
	String_t* ____keyvalue_5;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_filename
	String_t* ____filename_6;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_container
	String_t* ____container_7;

public:
	inline static int32_t get_offset_of__params_4() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333, ____params_4)); }
	inline CspParameters_t300073384 * get__params_4() const { return ____params_4; }
	inline CspParameters_t300073384 ** get_address_of__params_4() { return &____params_4; }
	inline void set__params_4(CspParameters_t300073384 * value)
	{
		____params_4 = value;
		Il2CppCodeGenWriteBarrier((&____params_4), value);
	}

	inline static int32_t get_offset_of__keyvalue_5() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333, ____keyvalue_5)); }
	inline String_t* get__keyvalue_5() const { return ____keyvalue_5; }
	inline String_t** get_address_of__keyvalue_5() { return &____keyvalue_5; }
	inline void set__keyvalue_5(String_t* value)
	{
		____keyvalue_5 = value;
		Il2CppCodeGenWriteBarrier((&____keyvalue_5), value);
	}

	inline static int32_t get_offset_of__filename_6() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333, ____filename_6)); }
	inline String_t* get__filename_6() const { return ____filename_6; }
	inline String_t** get_address_of__filename_6() { return &____filename_6; }
	inline void set__filename_6(String_t* value)
	{
		____filename_6 = value;
		Il2CppCodeGenWriteBarrier((&____filename_6), value);
	}

	inline static int32_t get_offset_of__container_7() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333, ____container_7)); }
	inline String_t* get__container_7() const { return ____container_7; }
	inline String_t** get_address_of__container_7() { return &____container_7; }
	inline void set__container_7(String_t* value)
	{
		____container_7 = value;
		Il2CppCodeGenWriteBarrier((&____container_7), value);
	}
};

struct KeyPairPersistence_t3970917333_StaticFields
{
public:
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_userPathExists
	bool ____userPathExists_0;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_userPath
	String_t* ____userPath_1;
	// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_machinePathExists
	bool ____machinePathExists_2;
	// System.String Mono.Security.Cryptography.KeyPairPersistence::_machinePath
	String_t* ____machinePath_3;
	// System.Object Mono.Security.Cryptography.KeyPairPersistence::lockobj
	RuntimeObject * ___lockobj_8;

public:
	inline static int32_t get_offset_of__userPathExists_0() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333_StaticFields, ____userPathExists_0)); }
	inline bool get__userPathExists_0() const { return ____userPathExists_0; }
	inline bool* get_address_of__userPathExists_0() { return &____userPathExists_0; }
	inline void set__userPathExists_0(bool value)
	{
		____userPathExists_0 = value;
	}

	inline static int32_t get_offset_of__userPath_1() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333_StaticFields, ____userPath_1)); }
	inline String_t* get__userPath_1() const { return ____userPath_1; }
	inline String_t** get_address_of__userPath_1() { return &____userPath_1; }
	inline void set__userPath_1(String_t* value)
	{
		____userPath_1 = value;
		Il2CppCodeGenWriteBarrier((&____userPath_1), value);
	}

	inline static int32_t get_offset_of__machinePathExists_2() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333_StaticFields, ____machinePathExists_2)); }
	inline bool get__machinePathExists_2() const { return ____machinePathExists_2; }
	inline bool* get_address_of__machinePathExists_2() { return &____machinePathExists_2; }
	inline void set__machinePathExists_2(bool value)
	{
		____machinePathExists_2 = value;
	}

	inline static int32_t get_offset_of__machinePath_3() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333_StaticFields, ____machinePath_3)); }
	inline String_t* get__machinePath_3() const { return ____machinePath_3; }
	inline String_t** get_address_of__machinePath_3() { return &____machinePath_3; }
	inline void set__machinePath_3(String_t* value)
	{
		____machinePath_3 = value;
		Il2CppCodeGenWriteBarrier((&____machinePath_3), value);
	}

	inline static int32_t get_offset_of_lockobj_8() { return static_cast<int32_t>(offsetof(KeyPairPersistence_t3970917333_StaticFields, ___lockobj_8)); }
	inline RuntimeObject * get_lockobj_8() const { return ___lockobj_8; }
	inline RuntimeObject ** get_address_of_lockobj_8() { return &___lockobj_8; }
	inline void set_lockobj_8(RuntimeObject * value)
	{
		___lockobj_8 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYPAIRPERSISTENCE_T3970917333_H
#ifndef X509STORES_T2996079275_H
#define X509STORES_T2996079275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t2996079275  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// System.Boolean Mono.Security.X509.X509Stores::_newFormat
	bool ____newFormat_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t2550465051 * ____trusted_2;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t2996079275, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__newFormat_1() { return static_cast<int32_t>(offsetof(X509Stores_t2996079275, ____newFormat_1)); }
	inline bool get__newFormat_1() const { return ____newFormat_1; }
	inline bool* get_address_of__newFormat_1() { return &____newFormat_1; }
	inline void set__newFormat_1(bool value)
	{
		____newFormat_1 = value;
	}

	inline static int32_t get_offset_of__trusted_2() { return static_cast<int32_t>(offsetof(X509Stores_t2996079275, ____trusted_2)); }
	inline X509Store_t2550465051 * get__trusted_2() const { return ____trusted_2; }
	inline X509Store_t2550465051 ** get_address_of__trusted_2() { return &____trusted_2; }
	inline void set__trusted_2(X509Store_t2550465051 * value)
	{
		____trusted_2 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T2996079275_H
#ifndef X501_T2870895225_H
#define X501_T2870895225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t2870895225  : public RuntimeObject
{
public:

public:
};

struct X501_t2870895225_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t2516310093* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t2516310093* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t2516310093* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t2516310093* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t2516310093* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t2516310093* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t2516310093* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t2516310093* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t2516310093* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t2516310093* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t2516310093* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t2516310093* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t2516310093* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t2516310093* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t2516310093* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t2516310093* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t2516310093** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t2516310093* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t2516310093* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t2516310093** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t2516310093* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t2516310093* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t2516310093** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t2516310093* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t2516310093* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t2516310093** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t2516310093* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t2516310093* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t2516310093** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t2516310093* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t2516310093* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t2516310093** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t2516310093* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t2516310093* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t2516310093** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t2516310093* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t2516310093* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t2516310093** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t2516310093* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t2516310093* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t2516310093** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t2516310093* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t2516310093* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t2516310093** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t2516310093* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t2516310093* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t2516310093** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t2516310093* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t2516310093* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t2516310093** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t2516310093* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t2516310093* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t2516310093** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t2516310093* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t2516310093* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t2516310093** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t2516310093* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t2870895225_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t2516310093* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t2516310093** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t2516310093* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T2870895225_H
#ifndef PKCS8_T4216919648_H
#define PKCS8_T4216919648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t4216919648  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T4216919648_H
#ifndef URI_T354905582_H
#define URI_T354905582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Uri
struct  Uri_t354905582  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String Mono.Security.Uri::source
	String_t* ___source_1;
	// System.String Mono.Security.Uri::scheme
	String_t* ___scheme_2;
	// System.String Mono.Security.Uri::host
	String_t* ___host_3;
	// System.Int32 Mono.Security.Uri::port
	int32_t ___port_4;
	// System.String Mono.Security.Uri::path
	String_t* ___path_5;
	// System.String Mono.Security.Uri::query
	String_t* ___query_6;
	// System.String Mono.Security.Uri::fragment
	String_t* ___fragment_7;
	// System.String Mono.Security.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean Mono.Security.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean Mono.Security.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean Mono.Security.Uri::userEscaped
	bool ___userEscaped_11;
	// System.String Mono.Security.Uri::cachedToString
	String_t* ___cachedToString_12;
	// System.String Mono.Security.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_13;
	// System.Int32 Mono.Security.Uri::cachedHashCode
	int32_t ___cachedHashCode_14;
	// System.Boolean Mono.Security.Uri::reduce
	bool ___reduce_15;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_userEscaped_11() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___userEscaped_11)); }
	inline bool get_userEscaped_11() const { return ___userEscaped_11; }
	inline bool* get_address_of_userEscaped_11() { return &___userEscaped_11; }
	inline void set_userEscaped_11(bool value)
	{
		___userEscaped_11 = value;
	}

	inline static int32_t get_offset_of_cachedToString_12() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___cachedToString_12)); }
	inline String_t* get_cachedToString_12() const { return ___cachedToString_12; }
	inline String_t** get_address_of_cachedToString_12() { return &___cachedToString_12; }
	inline void set_cachedToString_12(String_t* value)
	{
		___cachedToString_12 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_12), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_13() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___cachedLocalPath_13)); }
	inline String_t* get_cachedLocalPath_13() const { return ___cachedLocalPath_13; }
	inline String_t** get_address_of_cachedLocalPath_13() { return &___cachedLocalPath_13; }
	inline void set_cachedLocalPath_13(String_t* value)
	{
		___cachedLocalPath_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_13), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_14() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___cachedHashCode_14)); }
	inline int32_t get_cachedHashCode_14() const { return ___cachedHashCode_14; }
	inline int32_t* get_address_of_cachedHashCode_14() { return &___cachedHashCode_14; }
	inline void set_cachedHashCode_14(int32_t value)
	{
		___cachedHashCode_14 = value;
	}

	inline static int32_t get_offset_of_reduce_15() { return static_cast<int32_t>(offsetof(Uri_t354905582, ___reduce_15)); }
	inline bool get_reduce_15() const { return ___reduce_15; }
	inline bool* get_address_of_reduce_15() { return &___reduce_15; }
	inline void set_reduce_15(bool value)
	{
		___reduce_15 = value;
	}
};

struct Uri_t354905582_StaticFields
{
public:
	// System.String Mono.Security.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String Mono.Security.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String Mono.Security.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String Mono.Security.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String Mono.Security.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String Mono.Security.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String Mono.Security.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String Mono.Security.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String Mono.Security.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String Mono.Security.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// Mono.Security.Uri/UriScheme[] Mono.Security.Uri::schemes
	UriSchemeU5BU5D_t652268518* ___schemes_26;

public:
	inline static int32_t get_offset_of_hexUpperChars_16() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___hexUpperChars_16)); }
	inline String_t* get_hexUpperChars_16() const { return ___hexUpperChars_16; }
	inline String_t** get_address_of_hexUpperChars_16() { return &___hexUpperChars_16; }
	inline void set_hexUpperChars_16(String_t* value)
	{
		___hexUpperChars_16 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_16), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_17() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___SchemeDelimiter_17)); }
	inline String_t* get_SchemeDelimiter_17() const { return ___SchemeDelimiter_17; }
	inline String_t** get_address_of_SchemeDelimiter_17() { return &___SchemeDelimiter_17; }
	inline void set_SchemeDelimiter_17(String_t* value)
	{
		___SchemeDelimiter_17 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_17), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_18() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___UriSchemeFile_18)); }
	inline String_t* get_UriSchemeFile_18() const { return ___UriSchemeFile_18; }
	inline String_t** get_address_of_UriSchemeFile_18() { return &___UriSchemeFile_18; }
	inline void set_UriSchemeFile_18(String_t* value)
	{
		___UriSchemeFile_18 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_19() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___UriSchemeFtp_19)); }
	inline String_t* get_UriSchemeFtp_19() const { return ___UriSchemeFtp_19; }
	inline String_t** get_address_of_UriSchemeFtp_19() { return &___UriSchemeFtp_19; }
	inline void set_UriSchemeFtp_19(String_t* value)
	{
		___UriSchemeFtp_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_20() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___UriSchemeGopher_20)); }
	inline String_t* get_UriSchemeGopher_20() const { return ___UriSchemeGopher_20; }
	inline String_t** get_address_of_UriSchemeGopher_20() { return &___UriSchemeGopher_20; }
	inline void set_UriSchemeGopher_20(String_t* value)
	{
		___UriSchemeGopher_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_21() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___UriSchemeHttp_21)); }
	inline String_t* get_UriSchemeHttp_21() const { return ___UriSchemeHttp_21; }
	inline String_t** get_address_of_UriSchemeHttp_21() { return &___UriSchemeHttp_21; }
	inline void set_UriSchemeHttp_21(String_t* value)
	{
		___UriSchemeHttp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_22() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___UriSchemeHttps_22)); }
	inline String_t* get_UriSchemeHttps_22() const { return ___UriSchemeHttps_22; }
	inline String_t** get_address_of_UriSchemeHttps_22() { return &___UriSchemeHttps_22; }
	inline void set_UriSchemeHttps_22(String_t* value)
	{
		___UriSchemeHttps_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_23() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___UriSchemeMailto_23)); }
	inline String_t* get_UriSchemeMailto_23() const { return ___UriSchemeMailto_23; }
	inline String_t** get_address_of_UriSchemeMailto_23() { return &___UriSchemeMailto_23; }
	inline void set_UriSchemeMailto_23(String_t* value)
	{
		___UriSchemeMailto_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_24() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___UriSchemeNews_24)); }
	inline String_t* get_UriSchemeNews_24() const { return ___UriSchemeNews_24; }
	inline String_t** get_address_of_UriSchemeNews_24() { return &___UriSchemeNews_24; }
	inline void set_UriSchemeNews_24(String_t* value)
	{
		___UriSchemeNews_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_25() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___UriSchemeNntp_25)); }
	inline String_t* get_UriSchemeNntp_25() const { return ___UriSchemeNntp_25; }
	inline String_t** get_address_of_UriSchemeNntp_25() { return &___UriSchemeNntp_25; }
	inline void set_UriSchemeNntp_25(String_t* value)
	{
		___UriSchemeNntp_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_25), value);
	}

	inline static int32_t get_offset_of_schemes_26() { return static_cast<int32_t>(offsetof(Uri_t354905582_StaticFields, ___schemes_26)); }
	inline UriSchemeU5BU5D_t652268518* get_schemes_26() const { return ___schemes_26; }
	inline UriSchemeU5BU5D_t652268518** get_address_of_schemes_26() { return &___schemes_26; }
	inline void set_schemes_26(UriSchemeU5BU5D_t652268518* value)
	{
		___schemes_26 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T354905582_H
#ifndef PRIVATEKEYINFO_T328423928_H
#define PRIVATEKEYINFO_T328423928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t328423928  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t2516310093* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t3576894409 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t328423928, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t328423928, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t328423928, ____key_2)); }
	inline ByteU5BU5D_t2516310093* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t2516310093** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t2516310093* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t328423928, ____list_3)); }
	inline ArrayList_t3576894409 * get__list_3() const { return ____list_3; }
	inline ArrayList_t3576894409 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t3576894409 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T328423928_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T1204268337_H
#define ENCRYPTEDPRIVATEKEYINFO_T1204268337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t1204268337  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t2516310093* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t2516310093* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1204268337, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1204268337, ____salt_1)); }
	inline ByteU5BU5D_t2516310093* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t2516310093** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t2516310093* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1204268337, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1204268337, ____data_3)); }
	inline ByteU5BU5D_t2516310093* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t2516310093** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t2516310093* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T1204268337_H
#ifndef DERIVEBYTES_T2218711155_H
#define DERIVEBYTES_T2218711155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t2218711155  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t2516310093* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t2516310093* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t2218711155, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t2218711155, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t2218711155, ____password_5)); }
	inline ByteU5BU5D_t2516310093* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t2516310093** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t2516310093* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t2218711155, ____salt_6)); }
	inline ByteU5BU5D_t2516310093* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t2516310093** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t2516310093* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t2218711155_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t2516310093* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t2516310093* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t2516310093* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t2218711155_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t2516310093* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t2516310093** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t2516310093* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t2218711155_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t2516310093* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t2516310093** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t2516310093* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t2218711155_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t2516310093* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t2516310093** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t2516310093* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T2218711155_H
#ifndef PKCS1_T2408253136_H
#define PKCS1_T2408253136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t2408253136  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t2408253136_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t2516310093* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t2516310093* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t2516310093* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t2516310093* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t2408253136_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t2516310093* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t2516310093** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t2516310093* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t2408253136_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t2516310093* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t2516310093** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t2516310093* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t2408253136_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t2516310093* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t2516310093** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t2516310093* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t2408253136_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t2516310093* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t2516310093** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t2516310093* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T2408253136_H
#ifndef X509STORE_T2550465051_H
#define X509STORE_T2550465051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t2550465051  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t2318156732 * ____certificates_1;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_2;
	// System.Boolean Mono.Security.X509.X509Store::_newFormat
	bool ____newFormat_3;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t2550465051, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t2550465051, ____certificates_1)); }
	inline X509CertificateCollection_t2318156732 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t2318156732 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t2318156732 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crl_2() { return static_cast<int32_t>(offsetof(X509Store_t2550465051, ____crl_2)); }
	inline bool get__crl_2() const { return ____crl_2; }
	inline bool* get_address_of__crl_2() { return &____crl_2; }
	inline void set__crl_2(bool value)
	{
		____crl_2 = value;
	}

	inline static int32_t get_offset_of__newFormat_3() { return static_cast<int32_t>(offsetof(X509Store_t2550465051, ____newFormat_3)); }
	inline bool get__newFormat_3() const { return ____newFormat_3; }
	inline bool* get_address_of__newFormat_3() { return &____newFormat_3; }
	inline void set__newFormat_3(bool value)
	{
		____newFormat_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T2550465051_H
#ifndef __STATICARRAYINITTYPESIZEU3D16_T3112835832_H
#define __STATICARRAYINITTYPESIZEU3D16_T3112835832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct  __StaticArrayInitTypeSizeU3D16_t3112835832 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t3112835832__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D16_T3112835832_H
#ifndef __STATICARRAYINITTYPESIZEU3D72_T3425957266_H
#define __STATICARRAYINITTYPESIZEU3D72_T3425957266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct  __StaticArrayInitTypeSizeU3D72_t3425957266 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t3425957266__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D72_T3425957266_H
#ifndef __STATICARRAYINITTYPESIZEU3D24_T2942451342_H
#define __STATICARRAYINITTYPESIZEU3D24_T2942451342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct  __StaticArrayInitTypeSizeU3D24_t2942451342 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t2942451342__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D24_T2942451342_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T3021320602_H
#define __STATICARRAYINITTYPESIZEU3D32_T3021320602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t3021320602 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t3021320602__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T3021320602_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T1040947147_H
#define __STATICARRAYINITTYPESIZEU3D12_T1040947147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t1040947147 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1040947147__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T1040947147_H
#ifndef __STATICARRAYINITTYPESIZEU3D36_T1175211245_H
#define __STATICARRAYINITTYPESIZEU3D36_T1175211245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct  __StaticArrayInitTypeSizeU3D36_t1175211245 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t1175211245__padding[36];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D36_T1175211245_H
#ifndef __STATICARRAYINITTYPESIZEU3D10_T577514998_H
#define __STATICARRAYINITTYPESIZEU3D10_T577514998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_t577514998 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t577514998__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_T577514998_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3773403495_H
#define __STATICARRAYINITTYPESIZEU3D9_T3773403495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3773403495 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t3773403495__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3773403495_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T3233475679_H
#define __STATICARRAYINITTYPESIZEU3D6_T3233475679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t3233475679 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t3233475679__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T3233475679_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T2610884860_H
#define __STATICARRAYINITTYPESIZEU3D3_T2610884860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t2610884860 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t2610884860__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T2610884860_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T959002123_H
#define __STATICARRAYINITTYPESIZEU3D14_T959002123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t959002123 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t959002123__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T959002123_H
#ifndef __STATICARRAYINITTYPESIZEU3D20_T287997725_H
#define __STATICARRAYINITTYPESIZEU3D20_T287997725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct  __StaticArrayInitTypeSizeU3D20_t287997725 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t287997725__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D20_T287997725_H
#ifndef __STATICARRAYINITTYPESIZEU3D52_T3493798233_H
#define __STATICARRAYINITTYPESIZEU3D52_T3493798233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct  __StaticArrayInitTypeSizeU3D52_t3493798233 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t3493798233__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D52_T3493798233_H
#ifndef __STATICARRAYINITTYPESIZEU3D40_T3331666755_H
#define __STATICARRAYINITTYPESIZEU3D40_T3331666755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct  __StaticArrayInitTypeSizeU3D40_t3331666755 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t3331666755__padding[40];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D40_T3331666755_H
#ifndef SYSTEMTIME_T1015641507_H
#define SYSTEMTIME_T1015641507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Interop/mincore/SYSTEMTIME
struct  SYSTEMTIME_t1015641507 
{
public:
	// System.UInt16 Interop/mincore/SYSTEMTIME::wYear
	uint16_t ___wYear_0;
	// System.UInt16 Interop/mincore/SYSTEMTIME::wMonth
	uint16_t ___wMonth_1;
	// System.UInt16 Interop/mincore/SYSTEMTIME::wDayOfWeek
	uint16_t ___wDayOfWeek_2;
	// System.UInt16 Interop/mincore/SYSTEMTIME::wDay
	uint16_t ___wDay_3;
	// System.UInt16 Interop/mincore/SYSTEMTIME::wHour
	uint16_t ___wHour_4;
	// System.UInt16 Interop/mincore/SYSTEMTIME::wMinute
	uint16_t ___wMinute_5;
	// System.UInt16 Interop/mincore/SYSTEMTIME::wSecond
	uint16_t ___wSecond_6;
	// System.UInt16 Interop/mincore/SYSTEMTIME::wMilliseconds
	uint16_t ___wMilliseconds_7;

public:
	inline static int32_t get_offset_of_wYear_0() { return static_cast<int32_t>(offsetof(SYSTEMTIME_t1015641507, ___wYear_0)); }
	inline uint16_t get_wYear_0() const { return ___wYear_0; }
	inline uint16_t* get_address_of_wYear_0() { return &___wYear_0; }
	inline void set_wYear_0(uint16_t value)
	{
		___wYear_0 = value;
	}

	inline static int32_t get_offset_of_wMonth_1() { return static_cast<int32_t>(offsetof(SYSTEMTIME_t1015641507, ___wMonth_1)); }
	inline uint16_t get_wMonth_1() const { return ___wMonth_1; }
	inline uint16_t* get_address_of_wMonth_1() { return &___wMonth_1; }
	inline void set_wMonth_1(uint16_t value)
	{
		___wMonth_1 = value;
	}

	inline static int32_t get_offset_of_wDayOfWeek_2() { return static_cast<int32_t>(offsetof(SYSTEMTIME_t1015641507, ___wDayOfWeek_2)); }
	inline uint16_t get_wDayOfWeek_2() const { return ___wDayOfWeek_2; }
	inline uint16_t* get_address_of_wDayOfWeek_2() { return &___wDayOfWeek_2; }
	inline void set_wDayOfWeek_2(uint16_t value)
	{
		___wDayOfWeek_2 = value;
	}

	inline static int32_t get_offset_of_wDay_3() { return static_cast<int32_t>(offsetof(SYSTEMTIME_t1015641507, ___wDay_3)); }
	inline uint16_t get_wDay_3() const { return ___wDay_3; }
	inline uint16_t* get_address_of_wDay_3() { return &___wDay_3; }
	inline void set_wDay_3(uint16_t value)
	{
		___wDay_3 = value;
	}

	inline static int32_t get_offset_of_wHour_4() { return static_cast<int32_t>(offsetof(SYSTEMTIME_t1015641507, ___wHour_4)); }
	inline uint16_t get_wHour_4() const { return ___wHour_4; }
	inline uint16_t* get_address_of_wHour_4() { return &___wHour_4; }
	inline void set_wHour_4(uint16_t value)
	{
		___wHour_4 = value;
	}

	inline static int32_t get_offset_of_wMinute_5() { return static_cast<int32_t>(offsetof(SYSTEMTIME_t1015641507, ___wMinute_5)); }
	inline uint16_t get_wMinute_5() const { return ___wMinute_5; }
	inline uint16_t* get_address_of_wMinute_5() { return &___wMinute_5; }
	inline void set_wMinute_5(uint16_t value)
	{
		___wMinute_5 = value;
	}

	inline static int32_t get_offset_of_wSecond_6() { return static_cast<int32_t>(offsetof(SYSTEMTIME_t1015641507, ___wSecond_6)); }
	inline uint16_t get_wSecond_6() const { return ___wSecond_6; }
	inline uint16_t* get_address_of_wSecond_6() { return &___wSecond_6; }
	inline void set_wSecond_6(uint16_t value)
	{
		___wSecond_6 = value;
	}

	inline static int32_t get_offset_of_wMilliseconds_7() { return static_cast<int32_t>(offsetof(SYSTEMTIME_t1015641507, ___wMilliseconds_7)); }
	inline uint16_t get_wMilliseconds_7() const { return ___wMilliseconds_7; }
	inline uint16_t* get_address_of_wMilliseconds_7() { return &___wMilliseconds_7; }
	inline void set_wMilliseconds_7(uint16_t value)
	{
		___wMilliseconds_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMTIME_T1015641507_H
#ifndef RSA_T3890721306_H
#define RSA_T3890721306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3890721306  : public AsymmetricAlgorithm_t2476573202
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3890721306_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D256_T2048586436_H
#define __STATICARRAYINITTYPESIZEU3D256_T2048586436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t2048586436 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t2048586436__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T2048586436_H
#ifndef DSA_T2548050784_H
#define DSA_T2548050784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2548050784  : public AsymmetricAlgorithm_t2476573202
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2548050784_H
#ifndef URISCHEME_T1479819327_H
#define URISCHEME_T1479819327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Uri/UriScheme
struct  UriScheme_t1479819327 
{
public:
	// System.String Mono.Security.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String Mono.Security.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 Mono.Security.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t1479819327, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t1479819327, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t1479819327, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t1479819327_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of Mono.Security.Uri/UriScheme
struct UriScheme_t1479819327_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T1479819327_H
#ifndef __STATICARRAYINITTYPESIZEU3D38_T4102847592_H
#define __STATICARRAYINITTYPESIZEU3D38_T4102847592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct  __StaticArrayInitTypeSizeU3D38_t4102847592 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t4102847592__padding[38];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D38_T4102847592_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D64_T705749310_H
#define __STATICARRAYINITTYPESIZEU3D64_T705749310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t705749310 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t705749310__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T705749310_H
#ifndef __STATICARRAYINITTYPESIZEU3D56_T3117903646_H
#define __STATICARRAYINITTYPESIZEU3D56_T3117903646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct  __StaticArrayInitTypeSizeU3D56_t3117903646 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t3117903646__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D56_T3117903646_H
#ifndef __STATICARRAYINITTYPESIZEU3D84_T895453024_H
#define __STATICARRAYINITTYPESIZEU3D84_T895453024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84
struct  __StaticArrayInitTypeSizeU3D84_t895453024 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_t895453024__padding[84];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D84_T895453024_H
#ifndef __STATICARRAYINITTYPESIZEU3D48_T1017684765_H
#define __STATICARRAYINITTYPESIZEU3D48_T1017684765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t1017684765 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t1017684765__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D48_T1017684765_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T2924178629_H
#define __STATICARRAYINITTYPESIZEU3D44_T2924178629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t2924178629 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t2924178629__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T2924178629_H
#ifndef __STATICARRAYINITTYPESIZEU3D42_T203389744_H
#define __STATICARRAYINITTYPESIZEU3D42_T203389744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
struct  __StaticArrayInitTypeSizeU3D42_t203389744 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t203389744__padding[42];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D42_T203389744_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D240_T1812643390_H
#define __STATICARRAYINITTYPESIZEU3D240_T1812643390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct  __StaticArrayInitTypeSizeU3D240_t1812643390 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t1812643390__padding[240];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D240_T1812643390_H
#ifndef __STATICARRAYINITTYPESIZEU3D120_T1520772219_H
#define __STATICARRAYINITTYPESIZEU3D120_T1520772219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct  __StaticArrayInitTypeSizeU3D120_t1520772219 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t1520772219__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D120_T1520772219_H
#ifndef __STATICARRAYINITTYPESIZEU3D2048_T4121960640_H
#define __STATICARRAYINITTYPESIZEU3D2048_T4121960640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct  __StaticArrayInitTypeSizeU3D2048_t4121960640 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t4121960640__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2048_T4121960640_H
#ifndef __STATICARRAYINITTYPESIZEU3D2350_T2042313488_H
#define __STATICARRAYINITTYPESIZEU3D2350_T2042313488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
struct  __StaticArrayInitTypeSizeU3D2350_t2042313488 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t2042313488__padding[2350];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2350_T2042313488_H
#ifndef __STATICARRAYINITTYPESIZEU3D262_T3346364158_H
#define __STATICARRAYINITTYPESIZEU3D262_T3346364158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262
struct  __StaticArrayInitTypeSizeU3D262_t3346364158 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t3346364158__padding[262];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D262_T3346364158_H
#ifndef __STATICARRAYINITTYPESIZEU3D160_T202218844_H
#define __STATICARRAYINITTYPESIZEU3D160_T202218844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160
struct  __StaticArrayInitTypeSizeU3D160_t202218844 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D160_t202218844__padding[160];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D160_T202218844_H
#ifndef __STATICARRAYINITTYPESIZEU3D82_T568479875_H
#define __STATICARRAYINITTYPESIZEU3D82_T568479875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=82
struct  __StaticArrayInitTypeSizeU3D82_t568479875 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D82_t568479875__padding[82];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D82_T568479875_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T3912118356_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T3912118356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t3912118356  : public PrimeGeneratorBase_t1480341072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T3912118356_H
#ifndef TABLERANGE_T727234929_H
#define TABLERANGE_T727234929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
struct  TableRange_t727234929 
{
public:
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Start
	int32_t ___Start_0;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::End
	int32_t ___End_1;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::Count
	int32_t ___Count_2;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexStart
	int32_t ___IndexStart_3;
	// System.Int32 Mono.Globalization.Unicode.CodePointIndexer/TableRange::IndexEnd
	int32_t ___IndexEnd_4;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(TableRange_t727234929, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(TableRange_t727234929, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Count_2() { return static_cast<int32_t>(offsetof(TableRange_t727234929, ___Count_2)); }
	inline int32_t get_Count_2() const { return ___Count_2; }
	inline int32_t* get_address_of_Count_2() { return &___Count_2; }
	inline void set_Count_2(int32_t value)
	{
		___Count_2 = value;
	}

	inline static int32_t get_offset_of_IndexStart_3() { return static_cast<int32_t>(offsetof(TableRange_t727234929, ___IndexStart_3)); }
	inline int32_t get_IndexStart_3() const { return ___IndexStart_3; }
	inline int32_t* get_address_of_IndexStart_3() { return &___IndexStart_3; }
	inline void set_IndexStart_3(int32_t value)
	{
		___IndexStart_3 = value;
	}

	inline static int32_t get_offset_of_IndexEnd_4() { return static_cast<int32_t>(offsetof(TableRange_t727234929, ___IndexEnd_4)); }
	inline int32_t get_IndexEnd_4() const { return ___IndexEnd_4; }
	inline int32_t* get_address_of_IndexEnd_4() { return &___IndexEnd_4; }
	inline void set_IndexEnd_4(int32_t value)
	{
		___IndexEnd_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLERANGE_T727234929_H
#ifndef __STATICARRAYINITTYPESIZEU3D94_T3538080186_H
#define __STATICARRAYINITTYPESIZEU3D94_T3538080186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94
struct  __StaticArrayInitTypeSizeU3D94_t3538080186 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_t3538080186__padding[94];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D94_T3538080186_H
#ifndef __STATICARRAYINITTYPESIZEU3D360_T3778338517_H
#define __STATICARRAYINITTYPESIZEU3D360_T3778338517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
struct  __StaticArrayInitTypeSizeU3D360_t3778338517 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_t3778338517__padding[360];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D360_T3778338517_H
#ifndef BASICCONSTRAINTSEXTENSION_T3067959644_H
#define BASICCONSTRAINTSEXTENSION_T3067959644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t3067959644  : public X509Extension_t783139659
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t3067959644, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t3067959644, ___pathLenConstraint_4)); }
	inline int32_t get_pathLenConstraint_4() const { return ___pathLenConstraint_4; }
	inline int32_t* get_address_of_pathLenConstraint_4() { return &___pathLenConstraint_4; }
	inline void set_pathLenConstraint_4(int32_t value)
	{
		___pathLenConstraint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T3067959644_H
#ifndef __STATICARRAYINITTYPESIZEU3D998_T337523735_H
#define __STATICARRAYINITTYPESIZEU3D998_T337523735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998
struct  __StaticArrayInitTypeSizeU3D998_t337523735 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t337523735__padding[998];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D998_T337523735_H
#ifndef PREVIOUSINFO_T2096251989_H
#define PREVIOUSINFO_T2096251989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct  PreviousInfo_t2096251989 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::Code
	int32_t ___Code_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::SortKey
	uint8_t* ___SortKey_1;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(PreviousInfo_t2096251989, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_SortKey_1() { return static_cast<int32_t>(offsetof(PreviousInfo_t2096251989, ___SortKey_1)); }
	inline uint8_t* get_SortKey_1() const { return ___SortKey_1; }
	inline uint8_t** get_address_of_SortKey_1() { return &___SortKey_1; }
	inline void set_SortKey_1(uint8_t* value)
	{
		___SortKey_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2096251989_marshaled_pinvoke
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2096251989_marshaled_com
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
#endif // PREVIOUSINFO_T2096251989_H
#ifndef ESCAPE_T570209192_H
#define ESCAPE_T570209192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/Escape
struct  Escape_t570209192 
{
public:
	// System.String Mono.Globalization.Unicode.SimpleCollator/Escape::Source
	String_t* ___Source_0;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Index
	int32_t ___Index_1;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Start
	int32_t ___Start_2;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::End
	int32_t ___End_3;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Escape::Optional
	int32_t ___Optional_4;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Escape_t570209192, ___Source_0)); }
	inline String_t* get_Source_0() const { return ___Source_0; }
	inline String_t** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(String_t* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier((&___Source_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(Escape_t570209192, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Start_2() { return static_cast<int32_t>(offsetof(Escape_t570209192, ___Start_2)); }
	inline int32_t get_Start_2() const { return ___Start_2; }
	inline int32_t* get_address_of_Start_2() { return &___Start_2; }
	inline void set_Start_2(int32_t value)
	{
		___Start_2 = value;
	}

	inline static int32_t get_offset_of_End_3() { return static_cast<int32_t>(offsetof(Escape_t570209192, ___End_3)); }
	inline int32_t get_End_3() const { return ___End_3; }
	inline int32_t* get_address_of_End_3() { return &___End_3; }
	inline void set_End_3(int32_t value)
	{
		___End_3 = value;
	}

	inline static int32_t get_offset_of_Optional_4() { return static_cast<int32_t>(offsetof(Escape_t570209192, ___Optional_4)); }
	inline int32_t get_Optional_4() const { return ___Optional_4; }
	inline int32_t* get_address_of_Optional_4() { return &___Optional_4; }
	inline void set_Optional_4(int32_t value)
	{
		___Optional_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t570209192_marshaled_pinvoke
{
	char* ___Source_0;
	int32_t ___Index_1;
	int32_t ___Start_2;
	int32_t ___End_3;
	int32_t ___Optional_4;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/Escape
struct Escape_t570209192_marshaled_com
{
	Il2CppChar* ___Source_0;
	int32_t ___Index_1;
	int32_t ___Start_2;
	int32_t ___End_3;
	int32_t ___Optional_4;
};
#endif // ESCAPE_T570209192_H
#ifndef __STATICARRAYINITTYPESIZEU3D4096_T3782690522_H
#define __STATICARRAYINITTYPESIZEU3D4096_T3782690522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096
struct  __StaticArrayInitTypeSizeU3D4096_t3782690522 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4096_t3782690522__padding[4096];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D4096_T3782690522_H
#ifndef __STATICARRAYINITTYPESIZEU3D174_T656707292_H
#define __STATICARRAYINITTYPESIZEU3D174_T656707292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174
struct  __StaticArrayInitTypeSizeU3D174_t656707292 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_t656707292__padding[174];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D174_T656707292_H
#ifndef __STATICARRAYINITTYPESIZEU3D1018_T2180605824_H
#define __STATICARRAYINITTYPESIZEU3D1018_T2180605824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018
struct  __StaticArrayInitTypeSizeU3D1018_t2180605824 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t2180605824__padding[1018];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1018_T2180605824_H
#ifndef REGISTRYKEY_T3425007057_H
#define REGISTRYKEY_T3425007057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKey
struct  RegistryKey_t3425007057  : public MarshalByRefObject_t2838402765
{
public:
	// System.Object Microsoft.Win32.RegistryKey::handle
	RuntimeObject * ___handle_1;
	// Microsoft.Win32.SafeHandles.SafeRegistryHandle Microsoft.Win32.RegistryKey::safe_handle
	SafeRegistryHandle_t2819695873 * ___safe_handle_2;
	// System.Object Microsoft.Win32.RegistryKey::hive
	RuntimeObject * ___hive_3;
	// System.String Microsoft.Win32.RegistryKey::qname
	String_t* ___qname_4;
	// System.Boolean Microsoft.Win32.RegistryKey::isRemoteRoot
	bool ___isRemoteRoot_5;
	// System.Boolean Microsoft.Win32.RegistryKey::isWritable
	bool ___isWritable_6;

public:
	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(RegistryKey_t3425007057, ___handle_1)); }
	inline RuntimeObject * get_handle_1() const { return ___handle_1; }
	inline RuntimeObject ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(RuntimeObject * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_safe_handle_2() { return static_cast<int32_t>(offsetof(RegistryKey_t3425007057, ___safe_handle_2)); }
	inline SafeRegistryHandle_t2819695873 * get_safe_handle_2() const { return ___safe_handle_2; }
	inline SafeRegistryHandle_t2819695873 ** get_address_of_safe_handle_2() { return &___safe_handle_2; }
	inline void set_safe_handle_2(SafeRegistryHandle_t2819695873 * value)
	{
		___safe_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_handle_2), value);
	}

	inline static int32_t get_offset_of_hive_3() { return static_cast<int32_t>(offsetof(RegistryKey_t3425007057, ___hive_3)); }
	inline RuntimeObject * get_hive_3() const { return ___hive_3; }
	inline RuntimeObject ** get_address_of_hive_3() { return &___hive_3; }
	inline void set_hive_3(RuntimeObject * value)
	{
		___hive_3 = value;
		Il2CppCodeGenWriteBarrier((&___hive_3), value);
	}

	inline static int32_t get_offset_of_qname_4() { return static_cast<int32_t>(offsetof(RegistryKey_t3425007057, ___qname_4)); }
	inline String_t* get_qname_4() const { return ___qname_4; }
	inline String_t** get_address_of_qname_4() { return &___qname_4; }
	inline void set_qname_4(String_t* value)
	{
		___qname_4 = value;
		Il2CppCodeGenWriteBarrier((&___qname_4), value);
	}

	inline static int32_t get_offset_of_isRemoteRoot_5() { return static_cast<int32_t>(offsetof(RegistryKey_t3425007057, ___isRemoteRoot_5)); }
	inline bool get_isRemoteRoot_5() const { return ___isRemoteRoot_5; }
	inline bool* get_address_of_isRemoteRoot_5() { return &___isRemoteRoot_5; }
	inline void set_isRemoteRoot_5(bool value)
	{
		___isRemoteRoot_5 = value;
	}

	inline static int32_t get_offset_of_isWritable_6() { return static_cast<int32_t>(offsetof(RegistryKey_t3425007057, ___isWritable_6)); }
	inline bool get_isWritable_6() const { return ___isWritable_6; }
	inline bool* get_address_of_isWritable_6() { return &___isWritable_6; }
	inline void set_isWritable_6(bool value)
	{
		___isWritable_6 = value;
	}
};

struct RegistryKey_t3425007057_StaticFields
{
public:
	// Microsoft.Win32.IRegistryApi Microsoft.Win32.RegistryKey::RegistryApi
	RuntimeObject* ___RegistryApi_7;

public:
	inline static int32_t get_offset_of_RegistryApi_7() { return static_cast<int32_t>(offsetof(RegistryKey_t3425007057_StaticFields, ___RegistryApi_7)); }
	inline RuntimeObject* get_RegistryApi_7() const { return ___RegistryApi_7; }
	inline RuntimeObject** get_address_of_RegistryApi_7() { return &___RegistryApi_7; }
	inline void set_RegistryApi_7(RuntimeObject* value)
	{
		___RegistryApi_7 = value;
		Il2CppCodeGenWriteBarrier((&___RegistryApi_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYKEY_T3425007057_H
#ifndef __STATICARRAYINITTYPESIZEU3D2382_T244591831_H
#define __STATICARRAYINITTYPESIZEU3D2382_T244591831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
struct  __StaticArrayInitTypeSizeU3D2382_t244591831 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_t244591831__padding[2382];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2382_T244591831_H
#ifndef __STATICARRAYINITTYPESIZEU3D1450_T2451058238_H
#define __STATICARRAYINITTYPESIZEU3D1450_T2451058238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450
struct  __StaticArrayInitTypeSizeU3D1450_t2451058238 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t2451058238__padding[1450];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1450_T2451058238_H
#ifndef __STATICARRAYINITTYPESIZEU3D1665_T3726907158_H
#define __STATICARRAYINITTYPESIZEU3D1665_T3726907158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665
struct  __StaticArrayInitTypeSizeU3D1665_t3726907158 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_t3726907158__padding[1665];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1665_T3726907158_H
#ifndef __STATICARRAYINITTYPESIZEU3D212_T2046049362_H
#define __STATICARRAYINITTYPESIZEU3D212_T2046049362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212
struct  __StaticArrayInitTypeSizeU3D212_t2046049362 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_t2046049362__padding[212];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D212_T2046049362_H
#ifndef X509EXTENSIONCOLLECTION_T3201042415_H
#define X509EXTENSIONCOLLECTION_T3201042415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t3201042415  : public CollectionBase_t2847732657
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t3201042415, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T3201042415_H
#ifndef X509CERTIFICATECOLLECTION_T2318156732_H
#define X509CERTIFICATECOLLECTION_T2318156732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t2318156732  : public CollectionBase_t2847732657
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T2318156732_H
#ifndef __STATICARRAYINITTYPESIZEU3D288_T1367395062_H
#define __STATICARRAYINITTYPESIZEU3D288_T1367395062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct  __StaticArrayInitTypeSizeU3D288_t1367395062 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t1367395062__padding[288];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D288_T1367395062_H
#ifndef __STATICARRAYINITTYPESIZEU3D3132_T385532906_H
#define __STATICARRAYINITTYPESIZEU3D3132_T385532906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct  __StaticArrayInitTypeSizeU3D3132_t385532906 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_t385532906__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3132_T385532906_H
#ifndef __STATICARRAYINITTYPESIZEU3D76_T3301205552_H
#define __STATICARRAYINITTYPESIZEU3D76_T3301205552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct  __StaticArrayInitTypeSizeU3D76_t3301205552 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t3301205552__padding[76];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D76_T3301205552_H
#ifndef __STATICARRAYINITTYPESIZEU3D2100_T2551185137_H
#define __STATICARRAYINITTYPESIZEU3D2100_T2551185137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100
struct  __StaticArrayInitTypeSizeU3D2100_t2551185137 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t2551185137__padding[2100];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2100_T2551185137_H
#ifndef __STATICARRAYINITTYPESIZEU3D640_T2367726510_H
#define __STATICARRAYINITTYPESIZEU3D640_T2367726510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640
struct  __StaticArrayInitTypeSizeU3D640_t2367726510 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D640_t2367726510__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D640_T2367726510_H
#ifndef __STATICARRAYINITTYPESIZEU3D130_T2597528560_H
#define __STATICARRAYINITTYPESIZEU3D130_T2597528560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130
struct  __StaticArrayInitTypeSizeU3D130_t2597528560 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t2597528560__padding[130];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D130_T2597528560_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T3595134431_H
#define __STATICARRAYINITTYPESIZEU3D128_T3595134431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t3595134431 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t3595134431__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T3595134431_H
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
#ifndef URIPARTIAL_T2091500811_H
#define URIPARTIAL_T2091500811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.UriPartial
struct  UriPartial_t2091500811 
{
public:
	// System.Int32 Mono.Security.UriPartial::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriPartial_t2091500811, ___value___2)); }
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
#endif // URIPARTIAL_T2091500811_H
#ifndef WIN32NATIVE_T4026409549_H
#define WIN32NATIVE_T4026409549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32Native
struct  Win32Native_t4026409549  : public RuntimeObject
{
public:

public:
};

struct Win32Native_t4026409549_StaticFields
{
public:
	// System.IntPtr Microsoft.Win32.Win32Native::INVALID_HANDLE_VALUE
	intptr_t ___INVALID_HANDLE_VALUE_0;
	// System.Version Microsoft.Win32.Win32Native::ThreadErrorModeMinOsVersion
	Version_t1549971293 * ___ThreadErrorModeMinOsVersion_1;

public:
	inline static int32_t get_offset_of_INVALID_HANDLE_VALUE_0() { return static_cast<int32_t>(offsetof(Win32Native_t4026409549_StaticFields, ___INVALID_HANDLE_VALUE_0)); }
	inline intptr_t get_INVALID_HANDLE_VALUE_0() const { return ___INVALID_HANDLE_VALUE_0; }
	inline intptr_t* get_address_of_INVALID_HANDLE_VALUE_0() { return &___INVALID_HANDLE_VALUE_0; }
	inline void set_INVALID_HANDLE_VALUE_0(intptr_t value)
	{
		___INVALID_HANDLE_VALUE_0 = value;
	}

	inline static int32_t get_offset_of_ThreadErrorModeMinOsVersion_1() { return static_cast<int32_t>(offsetof(Win32Native_t4026409549_StaticFields, ___ThreadErrorModeMinOsVersion_1)); }
	inline Version_t1549971293 * get_ThreadErrorModeMinOsVersion_1() const { return ___ThreadErrorModeMinOsVersion_1; }
	inline Version_t1549971293 ** get_address_of_ThreadErrorModeMinOsVersion_1() { return &___ThreadErrorModeMinOsVersion_1; }
	inline void set_ThreadErrorModeMinOsVersion_1(Version_t1549971293 * value)
	{
		___ThreadErrorModeMinOsVersion_1 = value;
		Il2CppCodeGenWriteBarrier((&___ThreadErrorModeMinOsVersion_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NATIVE_T4026409549_H
#ifndef PADDINGMODE_T2911706812_H
#define PADDINGMODE_T2911706812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2911706812 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t2911706812, ___value___2)); }
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
#endif // PADDINGMODE_T2911706812_H
#ifndef AUTHENTICODEDEFORMATTER_T3210119886_H
#define AUTHENTICODEDEFORMATTER_T3210119886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct  AuthenticodeDeformatter_t3210119886  : public AuthenticodeBase_t2209899351
{
public:
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_8;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_t2516310093* ___hash_9;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t2318156732 * ___coll_10;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t1450547606 * ___signedHash_11;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t2717371579  ___timestamp_12;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t2483470942 * ___signingCertificate_13;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_14;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_15;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_16;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_t2516310093* ___entry_17;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t1327291242 * ___signerChain_18;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t1327291242 * ___timestampChain_19;

public:
	inline static int32_t get_offset_of_filename_8() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___filename_8)); }
	inline String_t* get_filename_8() const { return ___filename_8; }
	inline String_t** get_address_of_filename_8() { return &___filename_8; }
	inline void set_filename_8(String_t* value)
	{
		___filename_8 = value;
		Il2CppCodeGenWriteBarrier((&___filename_8), value);
	}

	inline static int32_t get_offset_of_hash_9() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___hash_9)); }
	inline ByteU5BU5D_t2516310093* get_hash_9() const { return ___hash_9; }
	inline ByteU5BU5D_t2516310093** get_address_of_hash_9() { return &___hash_9; }
	inline void set_hash_9(ByteU5BU5D_t2516310093* value)
	{
		___hash_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_9), value);
	}

	inline static int32_t get_offset_of_coll_10() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___coll_10)); }
	inline X509CertificateCollection_t2318156732 * get_coll_10() const { return ___coll_10; }
	inline X509CertificateCollection_t2318156732 ** get_address_of_coll_10() { return &___coll_10; }
	inline void set_coll_10(X509CertificateCollection_t2318156732 * value)
	{
		___coll_10 = value;
		Il2CppCodeGenWriteBarrier((&___coll_10), value);
	}

	inline static int32_t get_offset_of_signedHash_11() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___signedHash_11)); }
	inline ASN1_t1450547606 * get_signedHash_11() const { return ___signedHash_11; }
	inline ASN1_t1450547606 ** get_address_of_signedHash_11() { return &___signedHash_11; }
	inline void set_signedHash_11(ASN1_t1450547606 * value)
	{
		___signedHash_11 = value;
		Il2CppCodeGenWriteBarrier((&___signedHash_11), value);
	}

	inline static int32_t get_offset_of_timestamp_12() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___timestamp_12)); }
	inline DateTime_t2717371579  get_timestamp_12() const { return ___timestamp_12; }
	inline DateTime_t2717371579 * get_address_of_timestamp_12() { return &___timestamp_12; }
	inline void set_timestamp_12(DateTime_t2717371579  value)
	{
		___timestamp_12 = value;
	}

	inline static int32_t get_offset_of_signingCertificate_13() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___signingCertificate_13)); }
	inline X509Certificate_t2483470942 * get_signingCertificate_13() const { return ___signingCertificate_13; }
	inline X509Certificate_t2483470942 ** get_address_of_signingCertificate_13() { return &___signingCertificate_13; }
	inline void set_signingCertificate_13(X509Certificate_t2483470942 * value)
	{
		___signingCertificate_13 = value;
		Il2CppCodeGenWriteBarrier((&___signingCertificate_13), value);
	}

	inline static int32_t get_offset_of_reason_14() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___reason_14)); }
	inline int32_t get_reason_14() const { return ___reason_14; }
	inline int32_t* get_address_of_reason_14() { return &___reason_14; }
	inline void set_reason_14(int32_t value)
	{
		___reason_14 = value;
	}

	inline static int32_t get_offset_of_trustedRoot_15() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___trustedRoot_15)); }
	inline bool get_trustedRoot_15() const { return ___trustedRoot_15; }
	inline bool* get_address_of_trustedRoot_15() { return &___trustedRoot_15; }
	inline void set_trustedRoot_15(bool value)
	{
		___trustedRoot_15 = value;
	}

	inline static int32_t get_offset_of_trustedTimestampRoot_16() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___trustedTimestampRoot_16)); }
	inline bool get_trustedTimestampRoot_16() const { return ___trustedTimestampRoot_16; }
	inline bool* get_address_of_trustedTimestampRoot_16() { return &___trustedTimestampRoot_16; }
	inline void set_trustedTimestampRoot_16(bool value)
	{
		___trustedTimestampRoot_16 = value;
	}

	inline static int32_t get_offset_of_entry_17() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___entry_17)); }
	inline ByteU5BU5D_t2516310093* get_entry_17() const { return ___entry_17; }
	inline ByteU5BU5D_t2516310093** get_address_of_entry_17() { return &___entry_17; }
	inline void set_entry_17(ByteU5BU5D_t2516310093* value)
	{
		___entry_17 = value;
		Il2CppCodeGenWriteBarrier((&___entry_17), value);
	}

	inline static int32_t get_offset_of_signerChain_18() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___signerChain_18)); }
	inline X509Chain_t1327291242 * get_signerChain_18() const { return ___signerChain_18; }
	inline X509Chain_t1327291242 ** get_address_of_signerChain_18() { return &___signerChain_18; }
	inline void set_signerChain_18(X509Chain_t1327291242 * value)
	{
		___signerChain_18 = value;
		Il2CppCodeGenWriteBarrier((&___signerChain_18), value);
	}

	inline static int32_t get_offset_of_timestampChain_19() { return static_cast<int32_t>(offsetof(AuthenticodeDeformatter_t3210119886, ___timestampChain_19)); }
	inline X509Chain_t1327291242 * get_timestampChain_19() const { return ___timestampChain_19; }
	inline X509Chain_t1327291242 ** get_address_of_timestampChain_19() { return &___timestampChain_19; }
	inline void set_timestampChain_19(X509Chain_t1327291242 * value)
	{
		___timestampChain_19 = value;
		Il2CppCodeGenWriteBarrier((&___timestampChain_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICODEDEFORMATTER_T3210119886_H
#ifndef RSAMANAGED_T282852449_H
#define RSAMANAGED_T282852449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t282852449  : public RSA_t3890721306
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t3424891946 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t3424891946 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t3424891946 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t3424891946 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t3424891946 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t3424891946 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t3424891946 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t3424891946 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3545235482 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___d_6)); }
	inline BigInteger_t3424891946 * get_d_6() const { return ___d_6; }
	inline BigInteger_t3424891946 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t3424891946 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___p_7)); }
	inline BigInteger_t3424891946 * get_p_7() const { return ___p_7; }
	inline BigInteger_t3424891946 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t3424891946 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___q_8)); }
	inline BigInteger_t3424891946 * get_q_8() const { return ___q_8; }
	inline BigInteger_t3424891946 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t3424891946 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___dp_9)); }
	inline BigInteger_t3424891946 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t3424891946 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t3424891946 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___dq_10)); }
	inline BigInteger_t3424891946 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t3424891946 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t3424891946 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___qInv_11)); }
	inline BigInteger_t3424891946 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t3424891946 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t3424891946 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___n_12)); }
	inline BigInteger_t3424891946 * get_n_12() const { return ___n_12; }
	inline BigInteger_t3424891946 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t3424891946 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___e_13)); }
	inline BigInteger_t3424891946 * get_e_13() const { return ___e_13; }
	inline BigInteger_t3424891946 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t3424891946 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t282852449, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t3545235482 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t3545235482 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t3545235482 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T282852449_H
#ifndef SIGN_T2028550566_H
#define SIGN_T2028550566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t2028550566 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Sign_t2028550566, ___value___2)); }
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
#endif // SIGN_T2028550566_H
#ifndef CONFIDENCEFACTOR_T2362333458_H
#define CONFIDENCEFACTOR_T2362333458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2362333458 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2362333458, ___value___2)); }
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
#endif // CONFIDENCEFACTOR_T2362333458_H
#ifndef DSAMANAGED_T4174402455_H
#define DSAMANAGED_T4174402455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged
struct  DSAManaged_t4174402455  : public DSA_t2548050784
{
public:
	// System.Boolean Mono.Security.Cryptography.DSAManaged::keypairGenerated
	bool ___keypairGenerated_2;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::m_disposed
	bool ___m_disposed_3;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::p
	BigInteger_t3424891946 * ___p_4;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::q
	BigInteger_t3424891946 * ___q_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::g
	BigInteger_t3424891946 * ___g_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::x
	BigInteger_t3424891946 * ___x_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::y
	BigInteger_t3424891946 * ___y_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::j
	BigInteger_t3424891946 * ___j_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::seed
	BigInteger_t3424891946 * ___seed_10;
	// System.Int32 Mono.Security.Cryptography.DSAManaged::counter
	int32_t ___counter_11;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::j_missing
	bool ___j_missing_12;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::rng
	RandomNumberGenerator_t1266854030 * ___rng_13;
	// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.DSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3340730147 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_keypairGenerated_2() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___keypairGenerated_2)); }
	inline bool get_keypairGenerated_2() const { return ___keypairGenerated_2; }
	inline bool* get_address_of_keypairGenerated_2() { return &___keypairGenerated_2; }
	inline void set_keypairGenerated_2(bool value)
	{
		___keypairGenerated_2 = value;
	}

	inline static int32_t get_offset_of_m_disposed_3() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___m_disposed_3)); }
	inline bool get_m_disposed_3() const { return ___m_disposed_3; }
	inline bool* get_address_of_m_disposed_3() { return &___m_disposed_3; }
	inline void set_m_disposed_3(bool value)
	{
		___m_disposed_3 = value;
	}

	inline static int32_t get_offset_of_p_4() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___p_4)); }
	inline BigInteger_t3424891946 * get_p_4() const { return ___p_4; }
	inline BigInteger_t3424891946 ** get_address_of_p_4() { return &___p_4; }
	inline void set_p_4(BigInteger_t3424891946 * value)
	{
		___p_4 = value;
		Il2CppCodeGenWriteBarrier((&___p_4), value);
	}

	inline static int32_t get_offset_of_q_5() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___q_5)); }
	inline BigInteger_t3424891946 * get_q_5() const { return ___q_5; }
	inline BigInteger_t3424891946 ** get_address_of_q_5() { return &___q_5; }
	inline void set_q_5(BigInteger_t3424891946 * value)
	{
		___q_5 = value;
		Il2CppCodeGenWriteBarrier((&___q_5), value);
	}

	inline static int32_t get_offset_of_g_6() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___g_6)); }
	inline BigInteger_t3424891946 * get_g_6() const { return ___g_6; }
	inline BigInteger_t3424891946 ** get_address_of_g_6() { return &___g_6; }
	inline void set_g_6(BigInteger_t3424891946 * value)
	{
		___g_6 = value;
		Il2CppCodeGenWriteBarrier((&___g_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___x_7)); }
	inline BigInteger_t3424891946 * get_x_7() const { return ___x_7; }
	inline BigInteger_t3424891946 ** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(BigInteger_t3424891946 * value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___y_8)); }
	inline BigInteger_t3424891946 * get_y_8() const { return ___y_8; }
	inline BigInteger_t3424891946 ** get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(BigInteger_t3424891946 * value)
	{
		___y_8 = value;
		Il2CppCodeGenWriteBarrier((&___y_8), value);
	}

	inline static int32_t get_offset_of_j_9() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___j_9)); }
	inline BigInteger_t3424891946 * get_j_9() const { return ___j_9; }
	inline BigInteger_t3424891946 ** get_address_of_j_9() { return &___j_9; }
	inline void set_j_9(BigInteger_t3424891946 * value)
	{
		___j_9 = value;
		Il2CppCodeGenWriteBarrier((&___j_9), value);
	}

	inline static int32_t get_offset_of_seed_10() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___seed_10)); }
	inline BigInteger_t3424891946 * get_seed_10() const { return ___seed_10; }
	inline BigInteger_t3424891946 ** get_address_of_seed_10() { return &___seed_10; }
	inline void set_seed_10(BigInteger_t3424891946 * value)
	{
		___seed_10 = value;
		Il2CppCodeGenWriteBarrier((&___seed_10), value);
	}

	inline static int32_t get_offset_of_counter_11() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___counter_11)); }
	inline int32_t get_counter_11() const { return ___counter_11; }
	inline int32_t* get_address_of_counter_11() { return &___counter_11; }
	inline void set_counter_11(int32_t value)
	{
		___counter_11 = value;
	}

	inline static int32_t get_offset_of_j_missing_12() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___j_missing_12)); }
	inline bool get_j_missing_12() const { return ___j_missing_12; }
	inline bool* get_address_of_j_missing_12() { return &___j_missing_12; }
	inline void set_j_missing_12(bool value)
	{
		___j_missing_12 = value;
	}

	inline static int32_t get_offset_of_rng_13() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___rng_13)); }
	inline RandomNumberGenerator_t1266854030 * get_rng_13() const { return ___rng_13; }
	inline RandomNumberGenerator_t1266854030 ** get_address_of_rng_13() { return &___rng_13; }
	inline void set_rng_13(RandomNumberGenerator_t1266854030 * value)
	{
		___rng_13 = value;
		Il2CppCodeGenWriteBarrier((&___rng_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(DSAManaged_t4174402455, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t3340730147 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t3340730147 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t3340730147 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAMANAGED_T4174402455_H
#ifndef EXTENDERTYPE_T3320060819_H
#define EXTENDERTYPE_T3320060819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
struct  ExtenderType_t3320060819 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/ExtenderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExtenderType_t3320060819, ___value___2)); }
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
#endif // EXTENDERTYPE_T3320060819_H
#ifndef REGISTRYKEYPERMISSIONCHECK_T2168541285_H
#define REGISTRYKEYPERMISSIONCHECK_T2168541285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryKeyPermissionCheck
struct  RegistryKeyPermissionCheck_t2168541285 
{
public:
	// System.Int32 Microsoft.Win32.RegistryKeyPermissionCheck::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryKeyPermissionCheck_t2168541285, ___value___2)); }
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
#endif // REGISTRYKEYPERMISSIONCHECK_T2168541285_H
#ifndef REGISTRYHIVE_T2213724187_H
#define REGISTRYHIVE_T2213724187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryHive
struct  RegistryHive_t2213724187 
{
public:
	// System.Int32 Microsoft.Win32.RegistryHive::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryHive_t2213724187, ___value___2)); }
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
#endif // REGISTRYHIVE_T2213724187_H
#ifndef REGISTRYVALUEKIND_T3037806794_H
#define REGISTRYVALUEKIND_T3037806794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryValueKind
struct  RegistryValueKind_t3037806794 
{
public:
	// System.Int32 Microsoft.Win32.RegistryValueKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryValueKind_t3037806794, ___value___2)); }
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
#endif // REGISTRYVALUEKIND_T3037806794_H
#ifndef COMPAREOPTIONS_T3379205412_H
#define COMPAREOPTIONS_T3379205412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t3379205412 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t3379205412, ___value___2)); }
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
#endif // COMPAREOPTIONS_T3379205412_H
#ifndef X509CHAINSTATUSFLAGS_T1017148407_H
#define X509CHAINSTATUSFLAGS_T1017148407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1017148407 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1017148407, ___value___2)); }
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
#endif // X509CHAINSTATUSFLAGS_T1017148407_H
#ifndef REGISTRYVALUEOPTIONS_T2006255671_H
#define REGISTRYVALUEOPTIONS_T2006255671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.RegistryValueOptions
struct  RegistryValueOptions_t2006255671 
{
public:
	// System.Int32 Microsoft.Win32.RegistryValueOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegistryValueOptions_t2006255671, ___value___2)); }
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
#endif // REGISTRYVALUEOPTIONS_T2006255671_H
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
#ifndef REGISTRYTIMEZONEINFORMATION_T1379238577_H
#define REGISTRYTIMEZONEINFORMATION_T1379238577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.Win32Native/RegistryTimeZoneInformation
struct  RegistryTimeZoneInformation_t1379238577 
{
public:
	// System.Int32 Microsoft.Win32.Win32Native/RegistryTimeZoneInformation::Bias
	int32_t ___Bias_0;
	// System.Int32 Microsoft.Win32.Win32Native/RegistryTimeZoneInformation::StandardBias
	int32_t ___StandardBias_1;
	// System.Int32 Microsoft.Win32.Win32Native/RegistryTimeZoneInformation::DaylightBias
	int32_t ___DaylightBias_2;
	// Interop/mincore/SYSTEMTIME Microsoft.Win32.Win32Native/RegistryTimeZoneInformation::StandardDate
	SYSTEMTIME_t1015641507  ___StandardDate_3;
	// Interop/mincore/SYSTEMTIME Microsoft.Win32.Win32Native/RegistryTimeZoneInformation::DaylightDate
	SYSTEMTIME_t1015641507  ___DaylightDate_4;

public:
	inline static int32_t get_offset_of_Bias_0() { return static_cast<int32_t>(offsetof(RegistryTimeZoneInformation_t1379238577, ___Bias_0)); }
	inline int32_t get_Bias_0() const { return ___Bias_0; }
	inline int32_t* get_address_of_Bias_0() { return &___Bias_0; }
	inline void set_Bias_0(int32_t value)
	{
		___Bias_0 = value;
	}

	inline static int32_t get_offset_of_StandardBias_1() { return static_cast<int32_t>(offsetof(RegistryTimeZoneInformation_t1379238577, ___StandardBias_1)); }
	inline int32_t get_StandardBias_1() const { return ___StandardBias_1; }
	inline int32_t* get_address_of_StandardBias_1() { return &___StandardBias_1; }
	inline void set_StandardBias_1(int32_t value)
	{
		___StandardBias_1 = value;
	}

	inline static int32_t get_offset_of_DaylightBias_2() { return static_cast<int32_t>(offsetof(RegistryTimeZoneInformation_t1379238577, ___DaylightBias_2)); }
	inline int32_t get_DaylightBias_2() const { return ___DaylightBias_2; }
	inline int32_t* get_address_of_DaylightBias_2() { return &___DaylightBias_2; }
	inline void set_DaylightBias_2(int32_t value)
	{
		___DaylightBias_2 = value;
	}

	inline static int32_t get_offset_of_StandardDate_3() { return static_cast<int32_t>(offsetof(RegistryTimeZoneInformation_t1379238577, ___StandardDate_3)); }
	inline SYSTEMTIME_t1015641507  get_StandardDate_3() const { return ___StandardDate_3; }
	inline SYSTEMTIME_t1015641507 * get_address_of_StandardDate_3() { return &___StandardDate_3; }
	inline void set_StandardDate_3(SYSTEMTIME_t1015641507  value)
	{
		___StandardDate_3 = value;
	}

	inline static int32_t get_offset_of_DaylightDate_4() { return static_cast<int32_t>(offsetof(RegistryTimeZoneInformation_t1379238577, ___DaylightDate_4)); }
	inline SYSTEMTIME_t1015641507  get_DaylightDate_4() const { return ___DaylightDate_4; }
	inline SYSTEMTIME_t1015641507 * get_address_of_DaylightDate_4() { return &___DaylightDate_4; }
	inline void set_DaylightDate_4(SYSTEMTIME_t1015641507  value)
	{
		___DaylightDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRYTIMEZONEINFORMATION_T1379238577_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1736982555_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1736982555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1736982555  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::0392525BCB01691D1F319D89F2C12BF93A478467
	__StaticArrayInitTypeSizeU3D256_t2048586436  ___0392525BCB01691D1F319D89F2C12BF93A478467_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::0588059ACBD52F7EA2835882F977A9CF72EB9775
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___0588059ACBD52F7EA2835882F977A9CF72EB9775_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84 <PrivateImplementationDetails>::0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C
	__StaticArrayInitTypeSizeU3D84_t895453024  ___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::121EC59E23F7559B28D338D562528F6299C2DE22
	__StaticArrayInitTypeSizeU3D240_t1812643390  ___121EC59E23F7559B28D338D562528F6299C2DE22_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::12D04472A8285260EA12FD3813CDFA9F2D2B548C
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::13A35EF1A549297C70E2AD46045BBD2ECA17852D
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::1730F09044E91DB8371B849EFF5E6D17BDE4AED0
	__StaticArrayInitTypeSizeU3D24_t2942451342  ___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3
	__StaticArrayInitTypeSizeU3D4096_t3782690522  ___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5
	__StaticArrayInitTypeSizeU3D2048_t4121960640  ___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1FE6CE411858B3D864679DE2139FB081F08BFACD
	__StaticArrayInitTypeSizeU3D16_t3112835832  ___1FE6CE411858B3D864679DE2139FB081F08BFACD_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::235D99572263B22ADFEE10FDA0C25E12F4D94FFC
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::25420D0055076FA8D3E4DD96BC53AE24DE6E619F
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::29C1A61550F0E3260E1953D4FAD71C256218EF40
	__StaticArrayInitTypeSizeU3D42_t203389744  ___29C1A61550F0E3260E1953D4FAD71C256218EF40_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::2B33BEC8C30DFDC49DAFE20D3BDE19487850D717
	__StaticArrayInitTypeSizeU3D12_t1040947147  ___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::2BA840FF6020B8FF623DBCB7188248CF853FAF4F
	__StaticArrayInitTypeSizeU3D36_t1175211245  ___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2C840AFA48C27B9C05593E468C1232CA1CC74AFD
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2D1DA5BB407F0C11C3B5116196C0C6374D932B20
	__StaticArrayInitTypeSizeU3D16_t3112835832  ___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130
	__StaticArrayInitTypeSizeU3D14_t959002123  ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::320B018758ECE3752FFEDBAEB1A6DB67C80B9359
	__StaticArrayInitTypeSizeU3D64_t705749310  ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::34476C29F6F81C989CFCA42F7C06E84C66236834
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___34476C29F6F81C989CFCA42F7C06E84C66236834_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382 <PrivateImplementationDetails>::35EED060772F2748D13B745DAEC8CD7BD3B87604
	__StaticArrayInitTypeSizeU3D2382_t244591831  ___35EED060772F2748D13B745DAEC8CD7BD3B87604_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3
	__StaticArrayInitTypeSizeU3D38_t4102847592  ___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450 <PrivateImplementationDetails>::379C06C9E702D31469C29033F0DD63931EB349F5
	__StaticArrayInitTypeSizeU3D1450_t2451058238  ___379C06C9E702D31469C29033F0DD63931EB349F5_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::399BD13E240F33F808CA7940293D6EC4E6FD5A00
	__StaticArrayInitTypeSizeU3D10_t577514998  ___399BD13E240F33F808CA7940293D6EC4E6FD5A00_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::39C9CE73C7B0619D409EF28344F687C1B5C130FE
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___39C9CE73C7B0619D409EF28344F687C1B5C130FE_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::3E3442C7396F3F2BB4C7348F4A2074C7DC677D68
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3E823444D2DFECF0F90B436B88F02A533CB376F1
	__StaticArrayInitTypeSizeU3D12_t1040947147  ___3E823444D2DFECF0F90B436B88F02A533CB376F1_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3FE6C283BCF384FD2C8789880DFF59664E2AB4A1
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665 <PrivateImplementationDetails>::40981BAA39513E58B28DCF0103CC04DE2A0A0444
	__StaticArrayInitTypeSizeU3D1665_t3726907158  ___40981BAA39513E58B28DCF0103CC04DE2A0A0444_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::40E7C49413D261F3F38AD3A870C0AC69C8BDA048
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::421EC7E82F2967DF6CA8C3605514DC6F29EE5845
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::433175D38B13FFE177FDD661A309F1B528B3F6E2
	__StaticArrayInitTypeSizeU3D256_t2048586436  ___433175D38B13FFE177FDD661A309F1B528B3F6E2_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::46232052BC757E030490D851F265FB47FA100902
	__StaticArrayInitTypeSizeU3D120_t1520772219  ___46232052BC757E030490D851F265FB47FA100902_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::4858DB4AA76D3933F1CA9E6712D4FDB16903F628
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::4E3B533C39447AAEB59A8E48FABD7E15B5B5D195
	__StaticArrayInitTypeSizeU3D48_t1017684765  ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::4F7A8890F332B22B8DE0BD29D36FA7364748D76A
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::536422B321459B242ADED7240B7447E904E083E3
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___536422B321459B242ADED7240B7447E904E083E3_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::56DFA5053B3131883637F53219E7D88CCEF35949
	__StaticArrayInitTypeSizeU3D10_t577514998  ___56DFA5053B3131883637F53219E7D88CCEF35949_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::57218C316B6921E2CD61027A2387EDC31A2D9471
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___57218C316B6921E2CD61027A2387EDC31A2D9471_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::57F320D62696EC99727E0FE2045A05F1289CC0C6
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___57F320D62696EC99727E0FE2045A05F1289CC0C6_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3
	__StaticArrayInitTypeSizeU3D212_t2046049362  ___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::5BBDF8058D4235C33F2E8DCF76004031B6187A2F
	__StaticArrayInitTypeSizeU3D36_t1175211245  ___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF
	__StaticArrayInitTypeSizeU3D288_t1367395062  ___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5BFE2819B4778217C56416C7585FF0E56EBACD89
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___5BFE2819B4778217C56416C7585FF0E56EBACD89_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::609C0E8D8DA86A09D6013D301C86BA8782C16B8C
	__StaticArrayInitTypeSizeU3D128_t3595134431  ___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::62BAB0F245E66C3EB982CF5A7015F0A7C3382283
	__StaticArrayInitTypeSizeU3D48_t1017684765  ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::646036A65DECCD6835C914A46E6E44B729433B60
	__StaticArrayInitTypeSizeU3D2048_t4121960640  ___646036A65DECCD6835C914A46E6E44B729433B60_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::65E32B4E150FD8D24B93B0D42A17F1DAD146162B
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::6770974FEF1E98B9C1864370E2B5B786EB0EA39E
	__StaticArrayInitTypeSizeU3D52_t3493798233  ___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::67EEAD805D708D9AA4E14BF747E44CED801744F3
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___67EEAD805D708D9AA4E14BF747E44CED801744F3_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::6C71197D228427B2864C69B357FEF73D8C9D59DF
	__StaticArrayInitTypeSizeU3D120_t1520772219  ___6C71197D228427B2864C69B357FEF73D8C9D59DF_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t3773403495  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::6D797C11E1D4FB68B6570CF2A92B792433527065
	__StaticArrayInitTypeSizeU3D2048_t4121960640  ___6D797C11E1D4FB68B6570CF2A92B792433527065_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132 <PrivateImplementationDetails>::6E5DC824F803F8565AF31B42199DAE39FE7F4EA9
	__StaticArrayInitTypeSizeU3D3132_t385532906  ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::6FC754859E4EC74E447048364B216D825C6F8FE7
	__StaticArrayInitTypeSizeU3D76_t3301205552  ___6FC754859E4EC74E447048364B216D825C6F8FE7_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::704939CD172085D1295FCE3F1D92431D685D7AA2
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___704939CD172085D1295FCE3F1D92431D685D7AA2_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::7088AAE49F0627B72729078DE6E3182DDCF8ED99
	__StaticArrayInitTypeSizeU3D24_t2942451342  ___7088AAE49F0627B72729078DE6E3182DDCF8ED99_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::7341C933A70EAE383CC50C4B945ADB8E08F06737
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___7341C933A70EAE383CC50C4B945ADB8E08F06737_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::736D39815215889F11249D9958F6ED12D37B9F57
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___736D39815215889F11249D9958F6ED12D37B9F57_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::7F42F2EDC974BE29B2746957416ED1AEFA605F47
	__StaticArrayInitTypeSizeU3D4096_t3782690522  ___7F42F2EDC974BE29B2746957416ED1AEFA605F47_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::81917F1E21F3C22B9F916994547A614FB03E968E
	__StaticArrayInitTypeSizeU3D36_t1175211245  ___81917F1E21F3C22B9F916994547A614FB03E968E_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::823566DA642D6EA356E15585921F2A4CA23D6760
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___823566DA642D6EA356E15585921F2A4CA23D6760_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::82C2A59850B2E85BCE1A45A479537A384DF6098D
	__StaticArrayInitTypeSizeU3D12_t1040947147  ___82C2A59850B2E85BCE1A45A479537A384DF6098D_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4
	__StaticArrayInitTypeSizeU3D44_t2924178629  ___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::86F4F563FA2C61798AE6238D789139739428463A
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___86F4F563FA2C61798AE6238D789139739428463A_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::871B9CF85DB352BAADF12BAE8F19857683E385AC
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___871B9CF85DB352BAADF12BAE8F19857683E385AC_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::89A040451C8CC5C8FB268BE44BDD74964C104155
	__StaticArrayInitTypeSizeU3D16_t3112835832  ___89A040451C8CC5C8FB268BE44BDD74964C104155_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8CAA092E783257106251246FF5C97F88D28517A6
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___8CAA092E783257106251246FF5C97F88D28517A6_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100 <PrivateImplementationDetails>::8D231DD55FE1AD7631BBD0905A17D5EB616C2154
	__StaticArrayInitTypeSizeU3D2100_t2551185137  ___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8E10AC2F34545DFBBF3FCBC06055D797A8C99991
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::8F22C9ECE1331718CBD268A9BBFD2F5E451441E3
	__StaticArrayInitTypeSizeU3D256_t2048586436  ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640 <PrivateImplementationDetails>::90A0542282A011472F94E97CEAE59F8B3B1A3291
	__StaticArrayInitTypeSizeU3D640_t2367726510  ___90A0542282A011472F94E97CEAE59F8B3B1A3291_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::93A63E90605400F34B49F0EB3361D23C89164BDA
	__StaticArrayInitTypeSizeU3D12_t1040947147  ___93A63E90605400F34B49F0EB3361D23C89164BDA_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::94841DD2F330CCB1089BF413E4FA9B04505152E2
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___94841DD2F330CCB1089BF413E4FA9B04505152E2_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::95264589E48F94B7857CFF398FB72A537E13EEE2
	__StaticArrayInitTypeSizeU3D12_t1040947147  ___95264589E48F94B7857CFF398FB72A537E13EEE2_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::95C48758CAE1715783472FB073AB158AB8A0AB2A
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___95C48758CAE1715783472FB073AB158AB8A0AB2A_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::973417296623D8DC6961B09664E54039E44CA5D8
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___973417296623D8DC6961B09664E54039E44CA5D8_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::97FB30C84FF4A41CD4625B44B2940BFC8DB43003
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24
	__StaticArrayInitTypeSizeU3D4096_t3782690522  ___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5
	__StaticArrayInitTypeSizeU3D64_t705749310  ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A0074C15377C0C870B055927403EA9FA7A349D12
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___A0074C15377C0C870B055927403EA9FA7A349D12_84;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130 <PrivateImplementationDetails>::A1319B706116AB2C6D44483F60A7D0ACEA543396
	__StaticArrayInitTypeSizeU3D130_t2597528560  ___A1319B706116AB2C6D44483F60A7D0ACEA543396_85;
	// System.Int64 <PrivateImplementationDetails>::A13AA52274D951A18029131A8DDECF76B569A15D
	int64_t ___A13AA52274D951A18029131A8DDECF76B569A15D_86;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::A323DB0813C4D072957BA6FDA79D9776674CD06B
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___A323DB0813C4D072957BA6FDA79D9776674CD06B_87;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::A5444763673307F6828C748D4B9708CFC02B0959
	__StaticArrayInitTypeSizeU3D212_t2046049362  ___A5444763673307F6828C748D4B9708CFC02B0959_88;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A6732F8E7FC23766AB329B492D6BF82E3B33233F
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___A6732F8E7FC23766AB329B492D6BF82E3B33233F_89;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::A705A106D95282BD15E13EEA6B0AF583FF786D83
	__StaticArrayInitTypeSizeU3D174_t656707292  ___A705A106D95282BD15E13EEA6B0AF583FF786D83_90;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018 <PrivateImplementationDetails>::A8A491E4CED49AE0027560476C10D933CE70C8DF
	__StaticArrayInitTypeSizeU3D1018_t2180605824  ___A8A491E4CED49AE0027560476C10D933CE70C8DF_91;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::AC791C4F39504D1184B73478943D0636258DA7B1
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___AC791C4F39504D1184B73478943D0636258DA7B1_92;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::AFCD4E1211233E99373A3367B23105A3D624B1F2
	__StaticArrayInitTypeSizeU3D52_t3493798233  ___AFCD4E1211233E99373A3367B23105A3D624B1F2_93;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::B472ED77CB3B2A66D49D179F1EE2081B70A6AB61
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D
	__StaticArrayInitTypeSizeU3D16_t3112835832  ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF
	__StaticArrayInitTypeSizeU3D256_t2048586436  ___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096 <PrivateImplementationDetails>::B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B
	__StaticArrayInitTypeSizeU3D4096_t3782690522  ___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998 <PrivateImplementationDetails>::B881DA88BE0B68D8A6B6B6893822586B8B2CFC45
	__StaticArrayInitTypeSizeU3D998_t337523735  ___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360 <PrivateImplementationDetails>::B8F87834C3597B2EEF22BA6D3A392CC925636401
	__StaticArrayInitTypeSizeU3D360_t3778338517  ___B8F87834C3597B2EEF22BA6D3A392CC925636401_99;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::B9B670F134A59FB1107AF01A9FE8F8E3980B3093
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::BE1BDEC0AA74B4DCB079943E70528096CCA985F8
	__StaticArrayInitTypeSizeU3D20_t287997725  ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::BEBC9ECC660A13EFC359BA3383411F698CFF25DB
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::BF477463CE2F5EF38FC4C644BBBF4DF109E7670A
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::BF5EB60806ECB74EE484105DD9D6F463BF994867
	__StaticArrayInitTypeSizeU3D6_t3233475679  ___BF5EB60806ECB74EE484105DD9D6F463BF994867_105;
	// System.Int64 <PrivateImplementationDetails>::C1A1100642BA9685B30A84D97348484E14AA1865
	int64_t ___C1A1100642BA9685B30A84D97348484E14AA1865_106;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94 <PrivateImplementationDetails>::C35AB913B7CBEB243E050D1C7A61174F7C67D416
	__StaticArrayInitTypeSizeU3D94_t3538080186  ___C35AB913B7CBEB243E050D1C7A61174F7C67D416_107;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C6F364A0AD934EFED8909446C215752E565D77C1
	__StaticArrayInitTypeSizeU3D16_t3112835832  ___C6F364A0AD934EFED8909446C215752E565D77C1_108;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::CE5835130F5277F63D716FC9115526B0AC68FFAD
	__StaticArrayInitTypeSizeU3D174_t656707292  ___CE5835130F5277F63D716FC9115526B0AC68FFAD_109;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::CE93C35B755802BC4B3D180716B048FC61701EF7
	__StaticArrayInitTypeSizeU3D6_t3233475679  ___CE93C35B755802BC4B3D180716B048FC61701EF7_110;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::CF0B42666EF5E37EDEA0AB8E173E42C196D03814
	__StaticArrayInitTypeSizeU3D64_t705749310  ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7
	__StaticArrayInitTypeSizeU3D256_t2048586436  ___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D117188BE8D4609C0D531C51B0BB911A4219DEBE
	__StaticArrayInitTypeSizeU3D32_t3021320602  ___D117188BE8D4609C0D531C51B0BB911A4219DEBE_113;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE
	__StaticArrayInitTypeSizeU3D32_t3021320602  ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=82 <PrivateImplementationDetails>::D76478B994B312CD022DCA207AA2254880D2FCC9
	__StaticArrayInitTypeSizeU3D82_t568479875  ___D76478B994B312CD022DCA207AA2254880D2FCC9_115;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636
	__StaticArrayInitTypeSizeU3D44_t2924178629  ___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::DA19DB47B583EFCF7825D2E39D661D2354F28219
	__StaticArrayInitTypeSizeU3D76_t3301205552  ___DA19DB47B583EFCF7825D2E39D661D2354F28219_117;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82
	__StaticArrayInitTypeSizeU3D56_t3117903646  ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_t3493798233  ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_119;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::E1827270A5FE1C85F5352A66FD87BA747213D006
	__StaticArrayInitTypeSizeU3D36_t1175211245  ___E1827270A5FE1C85F5352A66FD87BA747213D006_120;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::E45BAB43F7D5D038672B3E3431F92E34A7AF2571
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::E75835D001C843F156FBA01B001DFE1B8029AC17
	__StaticArrayInitTypeSizeU3D64_t705749310  ___E75835D001C843F156FBA01B001DFE1B8029AC17_122;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_t3493798233  ___E92B39D8233061927D9ACDE54665E68E7535635A_123;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::EA9506959484C55CFE0C139C624DF6060E285866
	__StaticArrayInitTypeSizeU3D12_t1040947147  ___EA9506959484C55CFE0C139C624DF6060E285866_124;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=160 <PrivateImplementationDetails>::EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0
	__StaticArrayInitTypeSizeU3D160_t202218844  ___EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262 <PrivateImplementationDetails>::EB5E9A80A40096AB74D2E226650C7258D7BC5E9D
	__StaticArrayInitTypeSizeU3D262_t3346364158  ___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::EBF68F411848D603D059DFDEA2321C5A5EA78044
	__StaticArrayInitTypeSizeU3D64_t705749310  ___EBF68F411848D603D059DFDEA2321C5A5EA78044_127;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11
	__StaticArrayInitTypeSizeU3D10_t577514998  ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::EC83FB16C20052BEE2B4025159BC2ED45C9C70C3
	__StaticArrayInitTypeSizeU3D3_t2610884860  ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::EC89C317EA2BF49A70EFF5E89C691E34733D7C37
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::F06E829E62F3AFBC045D064E10A4F5DF7C969612
	__StaticArrayInitTypeSizeU3D40_t3331666755  ___F06E829E62F3AFBC045D064E10A4F5DF7C969612_131;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::F34B0E10653402E8F788F8BC3F7CD7090928A429
	__StaticArrayInitTypeSizeU3D120_t1520772219  ___F34B0E10653402E8F788F8BC3F7CD7090928A429_132;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F37E34BEADB04F34FCC31078A59F49856CA83D5B
	__StaticArrayInitTypeSizeU3D72_t3425957266  ___F37E34BEADB04F34FCC31078A59F49856CA83D5B_133;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94 <PrivateImplementationDetails>::F512A9ABF88066AAEB92684F95CC05D8101B462B
	__StaticArrayInitTypeSizeU3D94_t3538080186  ___F512A9ABF88066AAEB92684F95CC05D8101B462B_134;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::F8FAABB821300AA500C2CEC6091B3782A7FB44A4
	__StaticArrayInitTypeSizeU3D12_t1040947147  ___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350 <PrivateImplementationDetails>::FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B
	__StaticArrayInitTypeSizeU3D2350_t2042313488  ___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136;

public:
	inline static int32_t get_offset_of_U30392525BCB01691D1F319D89F2C12BF93A478467_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___0392525BCB01691D1F319D89F2C12BF93A478467_0)); }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436  get_U30392525BCB01691D1F319D89F2C12BF93A478467_0() const { return ___0392525BCB01691D1F319D89F2C12BF93A478467_0; }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436 * get_address_of_U30392525BCB01691D1F319D89F2C12BF93A478467_0() { return &___0392525BCB01691D1F319D89F2C12BF93A478467_0; }
	inline void set_U30392525BCB01691D1F319D89F2C12BF93A478467_0(__StaticArrayInitTypeSizeU3D256_t2048586436  value)
	{
		___0392525BCB01691D1F319D89F2C12BF93A478467_0 = value;
	}

	inline static int32_t get_offset_of_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___0588059ACBD52F7EA2835882F977A9CF72EB9775_1)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1() const { return ___0588059ACBD52F7EA2835882F977A9CF72EB9775_1; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1() { return &___0588059ACBD52F7EA2835882F977A9CF72EB9775_1; }
	inline void set_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___0588059ACBD52F7EA2835882F977A9CF72EB9775_1 = value;
	}

	inline static int32_t get_offset_of_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2)); }
	inline __StaticArrayInitTypeSizeU3D84_t895453024  get_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2() const { return ___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2; }
	inline __StaticArrayInitTypeSizeU3D84_t895453024 * get_address_of_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2() { return &___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2; }
	inline void set_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2(__StaticArrayInitTypeSizeU3D84_t895453024  value)
	{
		___0A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2 = value;
	}

	inline static int32_t get_offset_of_U3121EC59E23F7559B28D338D562528F6299C2DE22_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___121EC59E23F7559B28D338D562528F6299C2DE22_3)); }
	inline __StaticArrayInitTypeSizeU3D240_t1812643390  get_U3121EC59E23F7559B28D338D562528F6299C2DE22_3() const { return ___121EC59E23F7559B28D338D562528F6299C2DE22_3; }
	inline __StaticArrayInitTypeSizeU3D240_t1812643390 * get_address_of_U3121EC59E23F7559B28D338D562528F6299C2DE22_3() { return &___121EC59E23F7559B28D338D562528F6299C2DE22_3; }
	inline void set_U3121EC59E23F7559B28D338D562528F6299C2DE22_3(__StaticArrayInitTypeSizeU3D240_t1812643390  value)
	{
		___121EC59E23F7559B28D338D562528F6299C2DE22_3 = value;
	}

	inline static int32_t get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4() const { return ___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4() { return &___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4; }
	inline void set_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___12D04472A8285260EA12FD3813CDFA9F2D2B548C_4 = value;
	}

	inline static int32_t get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5() const { return ___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5() { return &___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5; }
	inline void set_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___13A35EF1A549297C70E2AD46045BBD2ECA17852D_5 = value;
	}

	inline static int32_t get_offset_of_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6)); }
	inline __StaticArrayInitTypeSizeU3D24_t2942451342  get_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6() const { return ___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6; }
	inline __StaticArrayInitTypeSizeU3D24_t2942451342 * get_address_of_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6() { return &___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6; }
	inline void set_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6(__StaticArrayInitTypeSizeU3D24_t2942451342  value)
	{
		___1730F09044E91DB8371B849EFF5E6D17BDE4AED0_6 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_7)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_7; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_7; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_7 = value;
	}

	inline static int32_t get_offset_of_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8)); }
	inline __StaticArrayInitTypeSizeU3D4096_t3782690522  get_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8() const { return ___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8; }
	inline __StaticArrayInitTypeSizeU3D4096_t3782690522 * get_address_of_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8() { return &___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8; }
	inline void set_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8(__StaticArrayInitTypeSizeU3D4096_t3782690522  value)
	{
		___1AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8 = value;
	}

	inline static int32_t get_offset_of_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9)); }
	inline __StaticArrayInitTypeSizeU3D2048_t4121960640  get_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9() const { return ___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9; }
	inline __StaticArrayInitTypeSizeU3D2048_t4121960640 * get_address_of_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9() { return &___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9; }
	inline void set_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9(__StaticArrayInitTypeSizeU3D2048_t4121960640  value)
	{
		___1E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9 = value;
	}

	inline static int32_t get_offset_of_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___1FE6CE411858B3D864679DE2139FB081F08BFACD_10)); }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832  get_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10() const { return ___1FE6CE411858B3D864679DE2139FB081F08BFACD_10; }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832 * get_address_of_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10() { return &___1FE6CE411858B3D864679DE2139FB081F08BFACD_10; }
	inline void set_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10(__StaticArrayInitTypeSizeU3D16_t3112835832  value)
	{
		___1FE6CE411858B3D864679DE2139FB081F08BFACD_10 = value;
	}

	inline static int32_t get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11() const { return ___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11() { return &___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11; }
	inline void set_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11 = value;
	}

	inline static int32_t get_offset_of_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12() const { return ___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12() { return &___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12; }
	inline void set_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___25420D0055076FA8D3E4DD96BC53AE24DE6E619F_12 = value;
	}

	inline static int32_t get_offset_of_U329C1A61550F0E3260E1953D4FAD71C256218EF40_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___29C1A61550F0E3260E1953D4FAD71C256218EF40_13)); }
	inline __StaticArrayInitTypeSizeU3D42_t203389744  get_U329C1A61550F0E3260E1953D4FAD71C256218EF40_13() const { return ___29C1A61550F0E3260E1953D4FAD71C256218EF40_13; }
	inline __StaticArrayInitTypeSizeU3D42_t203389744 * get_address_of_U329C1A61550F0E3260E1953D4FAD71C256218EF40_13() { return &___29C1A61550F0E3260E1953D4FAD71C256218EF40_13; }
	inline void set_U329C1A61550F0E3260E1953D4FAD71C256218EF40_13(__StaticArrayInitTypeSizeU3D42_t203389744  value)
	{
		___29C1A61550F0E3260E1953D4FAD71C256218EF40_13 = value;
	}

	inline static int32_t get_offset_of_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14)); }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147  get_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14() const { return ___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14; }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147 * get_address_of_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14() { return &___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14; }
	inline void set_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14(__StaticArrayInitTypeSizeU3D12_t1040947147  value)
	{
		___2B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14 = value;
	}

	inline static int32_t get_offset_of_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_15)); }
	inline __StaticArrayInitTypeSizeU3D36_t1175211245  get_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_15() const { return ___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_15; }
	inline __StaticArrayInitTypeSizeU3D36_t1175211245 * get_address_of_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_15() { return &___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_15; }
	inline void set_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_15(__StaticArrayInitTypeSizeU3D36_t1175211245  value)
	{
		___2BA840FF6020B8FF623DBCB7188248CF853FAF4F_15 = value;
	}

	inline static int32_t get_offset_of_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_16)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_16() const { return ___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_16; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_16() { return &___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_16; }
	inline void set_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_16(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___2C840AFA48C27B9C05593E468C1232CA1CC74AFD_16 = value;
	}

	inline static int32_t get_offset_of_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_17)); }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832  get_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_17() const { return ___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_17; }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832 * get_address_of_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_17() { return &___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_17; }
	inline void set_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_17(__StaticArrayInitTypeSizeU3D16_t3112835832  value)
	{
		___2D1DA5BB407F0C11C3B5116196C0C6374D932B20_17 = value;
	}

	inline static int32_t get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18)); }
	inline __StaticArrayInitTypeSizeU3D14_t959002123  get_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18() const { return ___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18; }
	inline __StaticArrayInitTypeSizeU3D14_t959002123 * get_address_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18() { return &___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18; }
	inline void set_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18(__StaticArrayInitTypeSizeU3D14_t959002123  value)
	{
		___2D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18 = value;
	}

	inline static int32_t get_offset_of_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19() const { return ___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19() { return &___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19; }
	inline void set_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___2F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19 = value;
	}

	inline static int32_t get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20)); }
	inline __StaticArrayInitTypeSizeU3D64_t705749310  get_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20() const { return ___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20; }
	inline __StaticArrayInitTypeSizeU3D64_t705749310 * get_address_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20() { return &___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20; }
	inline void set_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20(__StaticArrayInitTypeSizeU3D64_t705749310  value)
	{
		___320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20 = value;
	}

	inline static int32_t get_offset_of_U334476C29F6F81C989CFCA42F7C06E84C66236834_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___34476C29F6F81C989CFCA42F7C06E84C66236834_21)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U334476C29F6F81C989CFCA42F7C06E84C66236834_21() const { return ___34476C29F6F81C989CFCA42F7C06E84C66236834_21; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U334476C29F6F81C989CFCA42F7C06E84C66236834_21() { return &___34476C29F6F81C989CFCA42F7C06E84C66236834_21; }
	inline void set_U334476C29F6F81C989CFCA42F7C06E84C66236834_21(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___34476C29F6F81C989CFCA42F7C06E84C66236834_21 = value;
	}

	inline static int32_t get_offset_of_U335EED060772F2748D13B745DAEC8CD7BD3B87604_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___35EED060772F2748D13B745DAEC8CD7BD3B87604_22)); }
	inline __StaticArrayInitTypeSizeU3D2382_t244591831  get_U335EED060772F2748D13B745DAEC8CD7BD3B87604_22() const { return ___35EED060772F2748D13B745DAEC8CD7BD3B87604_22; }
	inline __StaticArrayInitTypeSizeU3D2382_t244591831 * get_address_of_U335EED060772F2748D13B745DAEC8CD7BD3B87604_22() { return &___35EED060772F2748D13B745DAEC8CD7BD3B87604_22; }
	inline void set_U335EED060772F2748D13B745DAEC8CD7BD3B87604_22(__StaticArrayInitTypeSizeU3D2382_t244591831  value)
	{
		___35EED060772F2748D13B745DAEC8CD7BD3B87604_22 = value;
	}

	inline static int32_t get_offset_of_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23)); }
	inline __StaticArrayInitTypeSizeU3D38_t4102847592  get_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23() const { return ___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23; }
	inline __StaticArrayInitTypeSizeU3D38_t4102847592 * get_address_of_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23() { return &___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23; }
	inline void set_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23(__StaticArrayInitTypeSizeU3D38_t4102847592  value)
	{
		___375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23 = value;
	}

	inline static int32_t get_offset_of_U3379C06C9E702D31469C29033F0DD63931EB349F5_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___379C06C9E702D31469C29033F0DD63931EB349F5_24)); }
	inline __StaticArrayInitTypeSizeU3D1450_t2451058238  get_U3379C06C9E702D31469C29033F0DD63931EB349F5_24() const { return ___379C06C9E702D31469C29033F0DD63931EB349F5_24; }
	inline __StaticArrayInitTypeSizeU3D1450_t2451058238 * get_address_of_U3379C06C9E702D31469C29033F0DD63931EB349F5_24() { return &___379C06C9E702D31469C29033F0DD63931EB349F5_24; }
	inline void set_U3379C06C9E702D31469C29033F0DD63931EB349F5_24(__StaticArrayInitTypeSizeU3D1450_t2451058238  value)
	{
		___379C06C9E702D31469C29033F0DD63931EB349F5_24 = value;
	}

	inline static int32_t get_offset_of_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___399BD13E240F33F808CA7940293D6EC4E6FD5A00_25)); }
	inline __StaticArrayInitTypeSizeU3D10_t577514998  get_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_25() const { return ___399BD13E240F33F808CA7940293D6EC4E6FD5A00_25; }
	inline __StaticArrayInitTypeSizeU3D10_t577514998 * get_address_of_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_25() { return &___399BD13E240F33F808CA7940293D6EC4E6FD5A00_25; }
	inline void set_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_25(__StaticArrayInitTypeSizeU3D10_t577514998  value)
	{
		___399BD13E240F33F808CA7940293D6EC4E6FD5A00_25 = value;
	}

	inline static int32_t get_offset_of_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___39C9CE73C7B0619D409EF28344F687C1B5C130FE_26)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_26() const { return ___39C9CE73C7B0619D409EF28344F687C1B5C130FE_26; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_26() { return &___39C9CE73C7B0619D409EF28344F687C1B5C130FE_26; }
	inline void set_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_26(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___39C9CE73C7B0619D409EF28344F687C1B5C130FE_26 = value;
	}

	inline static int32_t get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27() const { return ___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27() { return &___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27; }
	inline void set_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___3E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27 = value;
	}

	inline static int32_t get_offset_of_U33E823444D2DFECF0F90B436B88F02A533CB376F1_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___3E823444D2DFECF0F90B436B88F02A533CB376F1_28)); }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147  get_U33E823444D2DFECF0F90B436B88F02A533CB376F1_28() const { return ___3E823444D2DFECF0F90B436B88F02A533CB376F1_28; }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147 * get_address_of_U33E823444D2DFECF0F90B436B88F02A533CB376F1_28() { return &___3E823444D2DFECF0F90B436B88F02A533CB376F1_28; }
	inline void set_U33E823444D2DFECF0F90B436B88F02A533CB376F1_28(__StaticArrayInitTypeSizeU3D12_t1040947147  value)
	{
		___3E823444D2DFECF0F90B436B88F02A533CB376F1_28 = value;
	}

	inline static int32_t get_offset_of_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29() const { return ___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29() { return &___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29; }
	inline void set_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___3FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29 = value;
	}

	inline static int32_t get_offset_of_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___40981BAA39513E58B28DCF0103CC04DE2A0A0444_30)); }
	inline __StaticArrayInitTypeSizeU3D1665_t3726907158  get_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_30() const { return ___40981BAA39513E58B28DCF0103CC04DE2A0A0444_30; }
	inline __StaticArrayInitTypeSizeU3D1665_t3726907158 * get_address_of_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_30() { return &___40981BAA39513E58B28DCF0103CC04DE2A0A0444_30; }
	inline void set_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_30(__StaticArrayInitTypeSizeU3D1665_t3726907158  value)
	{
		___40981BAA39513E58B28DCF0103CC04DE2A0A0444_30 = value;
	}

	inline static int32_t get_offset_of_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_31)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_31() const { return ___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_31; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_31() { return &___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_31; }
	inline void set_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_31(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___40E7C49413D261F3F38AD3A870C0AC69C8BDA048_31 = value;
	}

	inline static int32_t get_offset_of_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32() const { return ___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32() { return &___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32; }
	inline void set_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32 = value;
	}

	inline static int32_t get_offset_of_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___433175D38B13FFE177FDD661A309F1B528B3F6E2_33)); }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436  get_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_33() const { return ___433175D38B13FFE177FDD661A309F1B528B3F6E2_33; }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436 * get_address_of_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_33() { return &___433175D38B13FFE177FDD661A309F1B528B3F6E2_33; }
	inline void set_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_33(__StaticArrayInitTypeSizeU3D256_t2048586436  value)
	{
		___433175D38B13FFE177FDD661A309F1B528B3F6E2_33 = value;
	}

	inline static int32_t get_offset_of_U346232052BC757E030490D851F265FB47FA100902_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___46232052BC757E030490D851F265FB47FA100902_34)); }
	inline __StaticArrayInitTypeSizeU3D120_t1520772219  get_U346232052BC757E030490D851F265FB47FA100902_34() const { return ___46232052BC757E030490D851F265FB47FA100902_34; }
	inline __StaticArrayInitTypeSizeU3D120_t1520772219 * get_address_of_U346232052BC757E030490D851F265FB47FA100902_34() { return &___46232052BC757E030490D851F265FB47FA100902_34; }
	inline void set_U346232052BC757E030490D851F265FB47FA100902_34(__StaticArrayInitTypeSizeU3D120_t1520772219  value)
	{
		___46232052BC757E030490D851F265FB47FA100902_34 = value;
	}

	inline static int32_t get_offset_of_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_35)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_35() const { return ___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_35; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_35() { return &___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_35; }
	inline void set_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_35(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___4858DB4AA76D3933F1CA9E6712D4FDB16903F628_35 = value;
	}

	inline static int32_t get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36)); }
	inline __StaticArrayInitTypeSizeU3D48_t1017684765  get_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36() const { return ___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36; }
	inline __StaticArrayInitTypeSizeU3D48_t1017684765 * get_address_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36() { return &___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36; }
	inline void set_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36(__StaticArrayInitTypeSizeU3D48_t1017684765  value)
	{
		___4E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36 = value;
	}

	inline static int32_t get_offset_of_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_37)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_37() const { return ___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_37; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_37() { return &___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_37; }
	inline void set_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_37(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___4F7A8890F332B22B8DE0BD29D36FA7364748D76A_37 = value;
	}

	inline static int32_t get_offset_of_U3536422B321459B242ADED7240B7447E904E083E3_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___536422B321459B242ADED7240B7447E904E083E3_38)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U3536422B321459B242ADED7240B7447E904E083E3_38() const { return ___536422B321459B242ADED7240B7447E904E083E3_38; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U3536422B321459B242ADED7240B7447E904E083E3_38() { return &___536422B321459B242ADED7240B7447E904E083E3_38; }
	inline void set_U3536422B321459B242ADED7240B7447E904E083E3_38(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___536422B321459B242ADED7240B7447E904E083E3_38 = value;
	}

	inline static int32_t get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___56DFA5053B3131883637F53219E7D88CCEF35949_39)); }
	inline __StaticArrayInitTypeSizeU3D10_t577514998  get_U356DFA5053B3131883637F53219E7D88CCEF35949_39() const { return ___56DFA5053B3131883637F53219E7D88CCEF35949_39; }
	inline __StaticArrayInitTypeSizeU3D10_t577514998 * get_address_of_U356DFA5053B3131883637F53219E7D88CCEF35949_39() { return &___56DFA5053B3131883637F53219E7D88CCEF35949_39; }
	inline void set_U356DFA5053B3131883637F53219E7D88CCEF35949_39(__StaticArrayInitTypeSizeU3D10_t577514998  value)
	{
		___56DFA5053B3131883637F53219E7D88CCEF35949_39 = value;
	}

	inline static int32_t get_offset_of_U357218C316B6921E2CD61027A2387EDC31A2D9471_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___57218C316B6921E2CD61027A2387EDC31A2D9471_40)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U357218C316B6921E2CD61027A2387EDC31A2D9471_40() const { return ___57218C316B6921E2CD61027A2387EDC31A2D9471_40; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U357218C316B6921E2CD61027A2387EDC31A2D9471_40() { return &___57218C316B6921E2CD61027A2387EDC31A2D9471_40; }
	inline void set_U357218C316B6921E2CD61027A2387EDC31A2D9471_40(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___57218C316B6921E2CD61027A2387EDC31A2D9471_40 = value;
	}

	inline static int32_t get_offset_of_U357F320D62696EC99727E0FE2045A05F1289CC0C6_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___57F320D62696EC99727E0FE2045A05F1289CC0C6_41)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U357F320D62696EC99727E0FE2045A05F1289CC0C6_41() const { return ___57F320D62696EC99727E0FE2045A05F1289CC0C6_41; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U357F320D62696EC99727E0FE2045A05F1289CC0C6_41() { return &___57F320D62696EC99727E0FE2045A05F1289CC0C6_41; }
	inline void set_U357F320D62696EC99727E0FE2045A05F1289CC0C6_41(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___57F320D62696EC99727E0FE2045A05F1289CC0C6_41 = value;
	}

	inline static int32_t get_offset_of_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42)); }
	inline __StaticArrayInitTypeSizeU3D212_t2046049362  get_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42() const { return ___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42; }
	inline __StaticArrayInitTypeSizeU3D212_t2046049362 * get_address_of_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42() { return &___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42; }
	inline void set_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42(__StaticArrayInitTypeSizeU3D212_t2046049362  value)
	{
		___594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42 = value;
	}

	inline static int32_t get_offset_of_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_43)); }
	inline __StaticArrayInitTypeSizeU3D36_t1175211245  get_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_43() const { return ___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_43; }
	inline __StaticArrayInitTypeSizeU3D36_t1175211245 * get_address_of_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_43() { return &___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_43; }
	inline void set_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_43(__StaticArrayInitTypeSizeU3D36_t1175211245  value)
	{
		___5BBDF8058D4235C33F2E8DCF76004031B6187A2F_43 = value;
	}

	inline static int32_t get_offset_of_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44)); }
	inline __StaticArrayInitTypeSizeU3D288_t1367395062  get_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44() const { return ___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44; }
	inline __StaticArrayInitTypeSizeU3D288_t1367395062 * get_address_of_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44() { return &___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44; }
	inline void set_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44(__StaticArrayInitTypeSizeU3D288_t1367395062  value)
	{
		___5BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44 = value;
	}

	inline static int32_t get_offset_of_U35BFE2819B4778217C56416C7585FF0E56EBACD89_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___5BFE2819B4778217C56416C7585FF0E56EBACD89_45)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U35BFE2819B4778217C56416C7585FF0E56EBACD89_45() const { return ___5BFE2819B4778217C56416C7585FF0E56EBACD89_45; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U35BFE2819B4778217C56416C7585FF0E56EBACD89_45() { return &___5BFE2819B4778217C56416C7585FF0E56EBACD89_45; }
	inline void set_U35BFE2819B4778217C56416C7585FF0E56EBACD89_45(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___5BFE2819B4778217C56416C7585FF0E56EBACD89_45 = value;
	}

	inline static int32_t get_offset_of_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46)); }
	inline __StaticArrayInitTypeSizeU3D128_t3595134431  get_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46() const { return ___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46; }
	inline __StaticArrayInitTypeSizeU3D128_t3595134431 * get_address_of_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46() { return &___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46; }
	inline void set_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46(__StaticArrayInitTypeSizeU3D128_t3595134431  value)
	{
		___609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46 = value;
	}

	inline static int32_t get_offset_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_47)); }
	inline __StaticArrayInitTypeSizeU3D48_t1017684765  get_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_47() const { return ___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_47; }
	inline __StaticArrayInitTypeSizeU3D48_t1017684765 * get_address_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_47() { return &___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_47; }
	inline void set_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_47(__StaticArrayInitTypeSizeU3D48_t1017684765  value)
	{
		___62BAB0F245E66C3EB982CF5A7015F0A7C3382283_47 = value;
	}

	inline static int32_t get_offset_of_U3646036A65DECCD6835C914A46E6E44B729433B60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___646036A65DECCD6835C914A46E6E44B729433B60_48)); }
	inline __StaticArrayInitTypeSizeU3D2048_t4121960640  get_U3646036A65DECCD6835C914A46E6E44B729433B60_48() const { return ___646036A65DECCD6835C914A46E6E44B729433B60_48; }
	inline __StaticArrayInitTypeSizeU3D2048_t4121960640 * get_address_of_U3646036A65DECCD6835C914A46E6E44B729433B60_48() { return &___646036A65DECCD6835C914A46E6E44B729433B60_48; }
	inline void set_U3646036A65DECCD6835C914A46E6E44B729433B60_48(__StaticArrayInitTypeSizeU3D2048_t4121960640  value)
	{
		___646036A65DECCD6835C914A46E6E44B729433B60_48 = value;
	}

	inline static int32_t get_offset_of_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_49)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_49() const { return ___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_49; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_49() { return &___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_49; }
	inline void set_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_49(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___65E32B4E150FD8D24B93B0D42A17F1DAD146162B_49 = value;
	}

	inline static int32_t get_offset_of_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_50)); }
	inline __StaticArrayInitTypeSizeU3D52_t3493798233  get_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_50() const { return ___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_50; }
	inline __StaticArrayInitTypeSizeU3D52_t3493798233 * get_address_of_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_50() { return &___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_50; }
	inline void set_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_50(__StaticArrayInitTypeSizeU3D52_t3493798233  value)
	{
		___6770974FEF1E98B9C1864370E2B5B786EB0EA39E_50 = value;
	}

	inline static int32_t get_offset_of_U367EEAD805D708D9AA4E14BF747E44CED801744F3_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___67EEAD805D708D9AA4E14BF747E44CED801744F3_51)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U367EEAD805D708D9AA4E14BF747E44CED801744F3_51() const { return ___67EEAD805D708D9AA4E14BF747E44CED801744F3_51; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U367EEAD805D708D9AA4E14BF747E44CED801744F3_51() { return &___67EEAD805D708D9AA4E14BF747E44CED801744F3_51; }
	inline void set_U367EEAD805D708D9AA4E14BF747E44CED801744F3_51(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___67EEAD805D708D9AA4E14BF747E44CED801744F3_51 = value;
	}

	inline static int32_t get_offset_of_U36C71197D228427B2864C69B357FEF73D8C9D59DF_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___6C71197D228427B2864C69B357FEF73D8C9D59DF_52)); }
	inline __StaticArrayInitTypeSizeU3D120_t1520772219  get_U36C71197D228427B2864C69B357FEF73D8C9D59DF_52() const { return ___6C71197D228427B2864C69B357FEF73D8C9D59DF_52; }
	inline __StaticArrayInitTypeSizeU3D120_t1520772219 * get_address_of_U36C71197D228427B2864C69B357FEF73D8C9D59DF_52() { return &___6C71197D228427B2864C69B357FEF73D8C9D59DF_52; }
	inline void set_U36C71197D228427B2864C69B357FEF73D8C9D59DF_52(__StaticArrayInitTypeSizeU3D120_t1520772219  value)
	{
		___6C71197D228427B2864C69B357FEF73D8C9D59DF_52 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_53() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_53)); }
	inline __StaticArrayInitTypeSizeU3D9_t3773403495  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_53() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_53; }
	inline __StaticArrayInitTypeSizeU3D9_t3773403495 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_53() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_53; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_53(__StaticArrayInitTypeSizeU3D9_t3773403495  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_53 = value;
	}

	inline static int32_t get_offset_of_U36D797C11E1D4FB68B6570CF2A92B792433527065_54() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___6D797C11E1D4FB68B6570CF2A92B792433527065_54)); }
	inline __StaticArrayInitTypeSizeU3D2048_t4121960640  get_U36D797C11E1D4FB68B6570CF2A92B792433527065_54() const { return ___6D797C11E1D4FB68B6570CF2A92B792433527065_54; }
	inline __StaticArrayInitTypeSizeU3D2048_t4121960640 * get_address_of_U36D797C11E1D4FB68B6570CF2A92B792433527065_54() { return &___6D797C11E1D4FB68B6570CF2A92B792433527065_54; }
	inline void set_U36D797C11E1D4FB68B6570CF2A92B792433527065_54(__StaticArrayInitTypeSizeU3D2048_t4121960640  value)
	{
		___6D797C11E1D4FB68B6570CF2A92B792433527065_54 = value;
	}

	inline static int32_t get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55)); }
	inline __StaticArrayInitTypeSizeU3D3132_t385532906  get_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55() const { return ___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55; }
	inline __StaticArrayInitTypeSizeU3D3132_t385532906 * get_address_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55() { return &___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55; }
	inline void set_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55(__StaticArrayInitTypeSizeU3D3132_t385532906  value)
	{
		___6E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55 = value;
	}

	inline static int32_t get_offset_of_U36FC754859E4EC74E447048364B216D825C6F8FE7_56() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___6FC754859E4EC74E447048364B216D825C6F8FE7_56)); }
	inline __StaticArrayInitTypeSizeU3D76_t3301205552  get_U36FC754859E4EC74E447048364B216D825C6F8FE7_56() const { return ___6FC754859E4EC74E447048364B216D825C6F8FE7_56; }
	inline __StaticArrayInitTypeSizeU3D76_t3301205552 * get_address_of_U36FC754859E4EC74E447048364B216D825C6F8FE7_56() { return &___6FC754859E4EC74E447048364B216D825C6F8FE7_56; }
	inline void set_U36FC754859E4EC74E447048364B216D825C6F8FE7_56(__StaticArrayInitTypeSizeU3D76_t3301205552  value)
	{
		___6FC754859E4EC74E447048364B216D825C6F8FE7_56 = value;
	}

	inline static int32_t get_offset_of_U3704939CD172085D1295FCE3F1D92431D685D7AA2_57() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___704939CD172085D1295FCE3F1D92431D685D7AA2_57)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U3704939CD172085D1295FCE3F1D92431D685D7AA2_57() const { return ___704939CD172085D1295FCE3F1D92431D685D7AA2_57; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U3704939CD172085D1295FCE3F1D92431D685D7AA2_57() { return &___704939CD172085D1295FCE3F1D92431D685D7AA2_57; }
	inline void set_U3704939CD172085D1295FCE3F1D92431D685D7AA2_57(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___704939CD172085D1295FCE3F1D92431D685D7AA2_57 = value;
	}

	inline static int32_t get_offset_of_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_58() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___7088AAE49F0627B72729078DE6E3182DDCF8ED99_58)); }
	inline __StaticArrayInitTypeSizeU3D24_t2942451342  get_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_58() const { return ___7088AAE49F0627B72729078DE6E3182DDCF8ED99_58; }
	inline __StaticArrayInitTypeSizeU3D24_t2942451342 * get_address_of_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_58() { return &___7088AAE49F0627B72729078DE6E3182DDCF8ED99_58; }
	inline void set_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_58(__StaticArrayInitTypeSizeU3D24_t2942451342  value)
	{
		___7088AAE49F0627B72729078DE6E3182DDCF8ED99_58 = value;
	}

	inline static int32_t get_offset_of_U37341C933A70EAE383CC50C4B945ADB8E08F06737_59() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___7341C933A70EAE383CC50C4B945ADB8E08F06737_59)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U37341C933A70EAE383CC50C4B945ADB8E08F06737_59() const { return ___7341C933A70EAE383CC50C4B945ADB8E08F06737_59; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U37341C933A70EAE383CC50C4B945ADB8E08F06737_59() { return &___7341C933A70EAE383CC50C4B945ADB8E08F06737_59; }
	inline void set_U37341C933A70EAE383CC50C4B945ADB8E08F06737_59(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___7341C933A70EAE383CC50C4B945ADB8E08F06737_59 = value;
	}

	inline static int32_t get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_60() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___736D39815215889F11249D9958F6ED12D37B9F57_60)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U3736D39815215889F11249D9958F6ED12D37B9F57_60() const { return ___736D39815215889F11249D9958F6ED12D37B9F57_60; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U3736D39815215889F11249D9958F6ED12D37B9F57_60() { return &___736D39815215889F11249D9958F6ED12D37B9F57_60; }
	inline void set_U3736D39815215889F11249D9958F6ED12D37B9F57_60(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___736D39815215889F11249D9958F6ED12D37B9F57_60 = value;
	}

	inline static int32_t get_offset_of_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_61() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___7F42F2EDC974BE29B2746957416ED1AEFA605F47_61)); }
	inline __StaticArrayInitTypeSizeU3D4096_t3782690522  get_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_61() const { return ___7F42F2EDC974BE29B2746957416ED1AEFA605F47_61; }
	inline __StaticArrayInitTypeSizeU3D4096_t3782690522 * get_address_of_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_61() { return &___7F42F2EDC974BE29B2746957416ED1AEFA605F47_61; }
	inline void set_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_61(__StaticArrayInitTypeSizeU3D4096_t3782690522  value)
	{
		___7F42F2EDC974BE29B2746957416ED1AEFA605F47_61 = value;
	}

	inline static int32_t get_offset_of_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62() const { return ___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62() { return &___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62; }
	inline void set_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___7FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62 = value;
	}

	inline static int32_t get_offset_of_U381917F1E21F3C22B9F916994547A614FB03E968E_63() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___81917F1E21F3C22B9F916994547A614FB03E968E_63)); }
	inline __StaticArrayInitTypeSizeU3D36_t1175211245  get_U381917F1E21F3C22B9F916994547A614FB03E968E_63() const { return ___81917F1E21F3C22B9F916994547A614FB03E968E_63; }
	inline __StaticArrayInitTypeSizeU3D36_t1175211245 * get_address_of_U381917F1E21F3C22B9F916994547A614FB03E968E_63() { return &___81917F1E21F3C22B9F916994547A614FB03E968E_63; }
	inline void set_U381917F1E21F3C22B9F916994547A614FB03E968E_63(__StaticArrayInitTypeSizeU3D36_t1175211245  value)
	{
		___81917F1E21F3C22B9F916994547A614FB03E968E_63 = value;
	}

	inline static int32_t get_offset_of_U3823566DA642D6EA356E15585921F2A4CA23D6760_64() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___823566DA642D6EA356E15585921F2A4CA23D6760_64)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U3823566DA642D6EA356E15585921F2A4CA23D6760_64() const { return ___823566DA642D6EA356E15585921F2A4CA23D6760_64; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U3823566DA642D6EA356E15585921F2A4CA23D6760_64() { return &___823566DA642D6EA356E15585921F2A4CA23D6760_64; }
	inline void set_U3823566DA642D6EA356E15585921F2A4CA23D6760_64(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___823566DA642D6EA356E15585921F2A4CA23D6760_64 = value;
	}

	inline static int32_t get_offset_of_U382C2A59850B2E85BCE1A45A479537A384DF6098D_65() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___82C2A59850B2E85BCE1A45A479537A384DF6098D_65)); }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147  get_U382C2A59850B2E85BCE1A45A479537A384DF6098D_65() const { return ___82C2A59850B2E85BCE1A45A479537A384DF6098D_65; }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147 * get_address_of_U382C2A59850B2E85BCE1A45A479537A384DF6098D_65() { return &___82C2A59850B2E85BCE1A45A479537A384DF6098D_65; }
	inline void set_U382C2A59850B2E85BCE1A45A479537A384DF6098D_65(__StaticArrayInitTypeSizeU3D12_t1040947147  value)
	{
		___82C2A59850B2E85BCE1A45A479537A384DF6098D_65 = value;
	}

	inline static int32_t get_offset_of_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66)); }
	inline __StaticArrayInitTypeSizeU3D44_t2924178629  get_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66() const { return ___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66; }
	inline __StaticArrayInitTypeSizeU3D44_t2924178629 * get_address_of_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66() { return &___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66; }
	inline void set_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66(__StaticArrayInitTypeSizeU3D44_t2924178629  value)
	{
		___82C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66 = value;
	}

	inline static int32_t get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_67() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___86F4F563FA2C61798AE6238D789139739428463A_67)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U386F4F563FA2C61798AE6238D789139739428463A_67() const { return ___86F4F563FA2C61798AE6238D789139739428463A_67; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U386F4F563FA2C61798AE6238D789139739428463A_67() { return &___86F4F563FA2C61798AE6238D789139739428463A_67; }
	inline void set_U386F4F563FA2C61798AE6238D789139739428463A_67(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___86F4F563FA2C61798AE6238D789139739428463A_67 = value;
	}

	inline static int32_t get_offset_of_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_68() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___871B9CF85DB352BAADF12BAE8F19857683E385AC_68)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_68() const { return ___871B9CF85DB352BAADF12BAE8F19857683E385AC_68; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_68() { return &___871B9CF85DB352BAADF12BAE8F19857683E385AC_68; }
	inline void set_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_68(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___871B9CF85DB352BAADF12BAE8F19857683E385AC_68 = value;
	}

	inline static int32_t get_offset_of_U389A040451C8CC5C8FB268BE44BDD74964C104155_69() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___89A040451C8CC5C8FB268BE44BDD74964C104155_69)); }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832  get_U389A040451C8CC5C8FB268BE44BDD74964C104155_69() const { return ___89A040451C8CC5C8FB268BE44BDD74964C104155_69; }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832 * get_address_of_U389A040451C8CC5C8FB268BE44BDD74964C104155_69() { return &___89A040451C8CC5C8FB268BE44BDD74964C104155_69; }
	inline void set_U389A040451C8CC5C8FB268BE44BDD74964C104155_69(__StaticArrayInitTypeSizeU3D16_t3112835832  value)
	{
		___89A040451C8CC5C8FB268BE44BDD74964C104155_69 = value;
	}

	inline static int32_t get_offset_of_U38CAA092E783257106251246FF5C97F88D28517A6_70() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___8CAA092E783257106251246FF5C97F88D28517A6_70)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U38CAA092E783257106251246FF5C97F88D28517A6_70() const { return ___8CAA092E783257106251246FF5C97F88D28517A6_70; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U38CAA092E783257106251246FF5C97F88D28517A6_70() { return &___8CAA092E783257106251246FF5C97F88D28517A6_70; }
	inline void set_U38CAA092E783257106251246FF5C97F88D28517A6_70(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___8CAA092E783257106251246FF5C97F88D28517A6_70 = value;
	}

	inline static int32_t get_offset_of_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_71() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_71)); }
	inline __StaticArrayInitTypeSizeU3D2100_t2551185137  get_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_71() const { return ___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_71; }
	inline __StaticArrayInitTypeSizeU3D2100_t2551185137 * get_address_of_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_71() { return &___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_71; }
	inline void set_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_71(__StaticArrayInitTypeSizeU3D2100_t2551185137  value)
	{
		___8D231DD55FE1AD7631BBD0905A17D5EB616C2154_71 = value;
	}

	inline static int32_t get_offset_of_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_72() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_72)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_72() const { return ___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_72; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_72() { return &___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_72; }
	inline void set_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_72(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___8E10AC2F34545DFBBF3FCBC06055D797A8C99991_72 = value;
	}

	inline static int32_t get_offset_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73)); }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436  get_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73() const { return ___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73; }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436 * get_address_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73() { return &___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73; }
	inline void set_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73(__StaticArrayInitTypeSizeU3D256_t2048586436  value)
	{
		___8F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73 = value;
	}

	inline static int32_t get_offset_of_U390A0542282A011472F94E97CEAE59F8B3B1A3291_74() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___90A0542282A011472F94E97CEAE59F8B3B1A3291_74)); }
	inline __StaticArrayInitTypeSizeU3D640_t2367726510  get_U390A0542282A011472F94E97CEAE59F8B3B1A3291_74() const { return ___90A0542282A011472F94E97CEAE59F8B3B1A3291_74; }
	inline __StaticArrayInitTypeSizeU3D640_t2367726510 * get_address_of_U390A0542282A011472F94E97CEAE59F8B3B1A3291_74() { return &___90A0542282A011472F94E97CEAE59F8B3B1A3291_74; }
	inline void set_U390A0542282A011472F94E97CEAE59F8B3B1A3291_74(__StaticArrayInitTypeSizeU3D640_t2367726510  value)
	{
		___90A0542282A011472F94E97CEAE59F8B3B1A3291_74 = value;
	}

	inline static int32_t get_offset_of_U393A63E90605400F34B49F0EB3361D23C89164BDA_75() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___93A63E90605400F34B49F0EB3361D23C89164BDA_75)); }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147  get_U393A63E90605400F34B49F0EB3361D23C89164BDA_75() const { return ___93A63E90605400F34B49F0EB3361D23C89164BDA_75; }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147 * get_address_of_U393A63E90605400F34B49F0EB3361D23C89164BDA_75() { return &___93A63E90605400F34B49F0EB3361D23C89164BDA_75; }
	inline void set_U393A63E90605400F34B49F0EB3361D23C89164BDA_75(__StaticArrayInitTypeSizeU3D12_t1040947147  value)
	{
		___93A63E90605400F34B49F0EB3361D23C89164BDA_75 = value;
	}

	inline static int32_t get_offset_of_U394841DD2F330CCB1089BF413E4FA9B04505152E2_76() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___94841DD2F330CCB1089BF413E4FA9B04505152E2_76)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U394841DD2F330CCB1089BF413E4FA9B04505152E2_76() const { return ___94841DD2F330CCB1089BF413E4FA9B04505152E2_76; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U394841DD2F330CCB1089BF413E4FA9B04505152E2_76() { return &___94841DD2F330CCB1089BF413E4FA9B04505152E2_76; }
	inline void set_U394841DD2F330CCB1089BF413E4FA9B04505152E2_76(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___94841DD2F330CCB1089BF413E4FA9B04505152E2_76 = value;
	}

	inline static int32_t get_offset_of_U395264589E48F94B7857CFF398FB72A537E13EEE2_77() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___95264589E48F94B7857CFF398FB72A537E13EEE2_77)); }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147  get_U395264589E48F94B7857CFF398FB72A537E13EEE2_77() const { return ___95264589E48F94B7857CFF398FB72A537E13EEE2_77; }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147 * get_address_of_U395264589E48F94B7857CFF398FB72A537E13EEE2_77() { return &___95264589E48F94B7857CFF398FB72A537E13EEE2_77; }
	inline void set_U395264589E48F94B7857CFF398FB72A537E13EEE2_77(__StaticArrayInitTypeSizeU3D12_t1040947147  value)
	{
		___95264589E48F94B7857CFF398FB72A537E13EEE2_77 = value;
	}

	inline static int32_t get_offset_of_U395C48758CAE1715783472FB073AB158AB8A0AB2A_78() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___95C48758CAE1715783472FB073AB158AB8A0AB2A_78)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U395C48758CAE1715783472FB073AB158AB8A0AB2A_78() const { return ___95C48758CAE1715783472FB073AB158AB8A0AB2A_78; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U395C48758CAE1715783472FB073AB158AB8A0AB2A_78() { return &___95C48758CAE1715783472FB073AB158AB8A0AB2A_78; }
	inline void set_U395C48758CAE1715783472FB073AB158AB8A0AB2A_78(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___95C48758CAE1715783472FB073AB158AB8A0AB2A_78 = value;
	}

	inline static int32_t get_offset_of_U3973417296623D8DC6961B09664E54039E44CA5D8_79() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___973417296623D8DC6961B09664E54039E44CA5D8_79)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_U3973417296623D8DC6961B09664E54039E44CA5D8_79() const { return ___973417296623D8DC6961B09664E54039E44CA5D8_79; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_U3973417296623D8DC6961B09664E54039E44CA5D8_79() { return &___973417296623D8DC6961B09664E54039E44CA5D8_79; }
	inline void set_U3973417296623D8DC6961B09664E54039E44CA5D8_79(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___973417296623D8DC6961B09664E54039E44CA5D8_79 = value;
	}

	inline static int32_t get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_80() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_80)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_80() const { return ___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_80; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_80() { return &___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_80; }
	inline void set_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_80(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___97FB30C84FF4A41CD4625B44B2940BFC8DB43003_80 = value;
	}

	inline static int32_t get_offset_of_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81)); }
	inline __StaticArrayInitTypeSizeU3D4096_t3782690522  get_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81() const { return ___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81; }
	inline __StaticArrayInitTypeSizeU3D4096_t3782690522 * get_address_of_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81() { return &___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81; }
	inline void set_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81(__StaticArrayInitTypeSizeU3D4096_t3782690522  value)
	{
		___99E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81 = value;
	}

	inline static int32_t get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82)); }
	inline __StaticArrayInitTypeSizeU3D64_t705749310  get_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82() const { return ___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82; }
	inline __StaticArrayInitTypeSizeU3D64_t705749310 * get_address_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82() { return &___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82; }
	inline void set_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82(__StaticArrayInitTypeSizeU3D64_t705749310  value)
	{
		___9A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82 = value;
	}

	inline static int32_t get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83() const { return ___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83() { return &___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83; }
	inline void set_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___9BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83 = value;
	}

	inline static int32_t get_offset_of_A0074C15377C0C870B055927403EA9FA7A349D12_84() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___A0074C15377C0C870B055927403EA9FA7A349D12_84)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_A0074C15377C0C870B055927403EA9FA7A349D12_84() const { return ___A0074C15377C0C870B055927403EA9FA7A349D12_84; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_A0074C15377C0C870B055927403EA9FA7A349D12_84() { return &___A0074C15377C0C870B055927403EA9FA7A349D12_84; }
	inline void set_A0074C15377C0C870B055927403EA9FA7A349D12_84(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___A0074C15377C0C870B055927403EA9FA7A349D12_84 = value;
	}

	inline static int32_t get_offset_of_A1319B706116AB2C6D44483F60A7D0ACEA543396_85() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___A1319B706116AB2C6D44483F60A7D0ACEA543396_85)); }
	inline __StaticArrayInitTypeSizeU3D130_t2597528560  get_A1319B706116AB2C6D44483F60A7D0ACEA543396_85() const { return ___A1319B706116AB2C6D44483F60A7D0ACEA543396_85; }
	inline __StaticArrayInitTypeSizeU3D130_t2597528560 * get_address_of_A1319B706116AB2C6D44483F60A7D0ACEA543396_85() { return &___A1319B706116AB2C6D44483F60A7D0ACEA543396_85; }
	inline void set_A1319B706116AB2C6D44483F60A7D0ACEA543396_85(__StaticArrayInitTypeSizeU3D130_t2597528560  value)
	{
		___A1319B706116AB2C6D44483F60A7D0ACEA543396_85 = value;
	}

	inline static int32_t get_offset_of_A13AA52274D951A18029131A8DDECF76B569A15D_86() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___A13AA52274D951A18029131A8DDECF76B569A15D_86)); }
	inline int64_t get_A13AA52274D951A18029131A8DDECF76B569A15D_86() const { return ___A13AA52274D951A18029131A8DDECF76B569A15D_86; }
	inline int64_t* get_address_of_A13AA52274D951A18029131A8DDECF76B569A15D_86() { return &___A13AA52274D951A18029131A8DDECF76B569A15D_86; }
	inline void set_A13AA52274D951A18029131A8DDECF76B569A15D_86(int64_t value)
	{
		___A13AA52274D951A18029131A8DDECF76B569A15D_86 = value;
	}

	inline static int32_t get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_87() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___A323DB0813C4D072957BA6FDA79D9776674CD06B_87)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_A323DB0813C4D072957BA6FDA79D9776674CD06B_87() const { return ___A323DB0813C4D072957BA6FDA79D9776674CD06B_87; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_87() { return &___A323DB0813C4D072957BA6FDA79D9776674CD06B_87; }
	inline void set_A323DB0813C4D072957BA6FDA79D9776674CD06B_87(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___A323DB0813C4D072957BA6FDA79D9776674CD06B_87 = value;
	}

	inline static int32_t get_offset_of_A5444763673307F6828C748D4B9708CFC02B0959_88() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___A5444763673307F6828C748D4B9708CFC02B0959_88)); }
	inline __StaticArrayInitTypeSizeU3D212_t2046049362  get_A5444763673307F6828C748D4B9708CFC02B0959_88() const { return ___A5444763673307F6828C748D4B9708CFC02B0959_88; }
	inline __StaticArrayInitTypeSizeU3D212_t2046049362 * get_address_of_A5444763673307F6828C748D4B9708CFC02B0959_88() { return &___A5444763673307F6828C748D4B9708CFC02B0959_88; }
	inline void set_A5444763673307F6828C748D4B9708CFC02B0959_88(__StaticArrayInitTypeSizeU3D212_t2046049362  value)
	{
		___A5444763673307F6828C748D4B9708CFC02B0959_88 = value;
	}

	inline static int32_t get_offset_of_A6732F8E7FC23766AB329B492D6BF82E3B33233F_89() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___A6732F8E7FC23766AB329B492D6BF82E3B33233F_89)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_A6732F8E7FC23766AB329B492D6BF82E3B33233F_89() const { return ___A6732F8E7FC23766AB329B492D6BF82E3B33233F_89; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_A6732F8E7FC23766AB329B492D6BF82E3B33233F_89() { return &___A6732F8E7FC23766AB329B492D6BF82E3B33233F_89; }
	inline void set_A6732F8E7FC23766AB329B492D6BF82E3B33233F_89(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___A6732F8E7FC23766AB329B492D6BF82E3B33233F_89 = value;
	}

	inline static int32_t get_offset_of_A705A106D95282BD15E13EEA6B0AF583FF786D83_90() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___A705A106D95282BD15E13EEA6B0AF583FF786D83_90)); }
	inline __StaticArrayInitTypeSizeU3D174_t656707292  get_A705A106D95282BD15E13EEA6B0AF583FF786D83_90() const { return ___A705A106D95282BD15E13EEA6B0AF583FF786D83_90; }
	inline __StaticArrayInitTypeSizeU3D174_t656707292 * get_address_of_A705A106D95282BD15E13EEA6B0AF583FF786D83_90() { return &___A705A106D95282BD15E13EEA6B0AF583FF786D83_90; }
	inline void set_A705A106D95282BD15E13EEA6B0AF583FF786D83_90(__StaticArrayInitTypeSizeU3D174_t656707292  value)
	{
		___A705A106D95282BD15E13EEA6B0AF583FF786D83_90 = value;
	}

	inline static int32_t get_offset_of_A8A491E4CED49AE0027560476C10D933CE70C8DF_91() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___A8A491E4CED49AE0027560476C10D933CE70C8DF_91)); }
	inline __StaticArrayInitTypeSizeU3D1018_t2180605824  get_A8A491E4CED49AE0027560476C10D933CE70C8DF_91() const { return ___A8A491E4CED49AE0027560476C10D933CE70C8DF_91; }
	inline __StaticArrayInitTypeSizeU3D1018_t2180605824 * get_address_of_A8A491E4CED49AE0027560476C10D933CE70C8DF_91() { return &___A8A491E4CED49AE0027560476C10D933CE70C8DF_91; }
	inline void set_A8A491E4CED49AE0027560476C10D933CE70C8DF_91(__StaticArrayInitTypeSizeU3D1018_t2180605824  value)
	{
		___A8A491E4CED49AE0027560476C10D933CE70C8DF_91 = value;
	}

	inline static int32_t get_offset_of_AC791C4F39504D1184B73478943D0636258DA7B1_92() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___AC791C4F39504D1184B73478943D0636258DA7B1_92)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_AC791C4F39504D1184B73478943D0636258DA7B1_92() const { return ___AC791C4F39504D1184B73478943D0636258DA7B1_92; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_AC791C4F39504D1184B73478943D0636258DA7B1_92() { return &___AC791C4F39504D1184B73478943D0636258DA7B1_92; }
	inline void set_AC791C4F39504D1184B73478943D0636258DA7B1_92(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___AC791C4F39504D1184B73478943D0636258DA7B1_92 = value;
	}

	inline static int32_t get_offset_of_AFCD4E1211233E99373A3367B23105A3D624B1F2_93() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___AFCD4E1211233E99373A3367B23105A3D624B1F2_93)); }
	inline __StaticArrayInitTypeSizeU3D52_t3493798233  get_AFCD4E1211233E99373A3367B23105A3D624B1F2_93() const { return ___AFCD4E1211233E99373A3367B23105A3D624B1F2_93; }
	inline __StaticArrayInitTypeSizeU3D52_t3493798233 * get_address_of_AFCD4E1211233E99373A3367B23105A3D624B1F2_93() { return &___AFCD4E1211233E99373A3367B23105A3D624B1F2_93; }
	inline void set_AFCD4E1211233E99373A3367B23105A3D624B1F2_93(__StaticArrayInitTypeSizeU3D52_t3493798233  value)
	{
		___AFCD4E1211233E99373A3367B23105A3D624B1F2_93 = value;
	}

	inline static int32_t get_offset_of_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94() const { return ___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94() { return &___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94; }
	inline void set_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94 = value;
	}

	inline static int32_t get_offset_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95)); }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832  get_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95() const { return ___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95; }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832 * get_address_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95() { return &___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95; }
	inline void set_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95(__StaticArrayInitTypeSizeU3D16_t3112835832  value)
	{
		___B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95 = value;
	}

	inline static int32_t get_offset_of_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96)); }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436  get_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96() const { return ___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96; }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436 * get_address_of_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96() { return &___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96; }
	inline void set_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96(__StaticArrayInitTypeSizeU3D256_t2048586436  value)
	{
		___B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96 = value;
	}

	inline static int32_t get_offset_of_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97)); }
	inline __StaticArrayInitTypeSizeU3D4096_t3782690522  get_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97() const { return ___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97; }
	inline __StaticArrayInitTypeSizeU3D4096_t3782690522 * get_address_of_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97() { return &___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97; }
	inline void set_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97(__StaticArrayInitTypeSizeU3D4096_t3782690522  value)
	{
		___B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97 = value;
	}

	inline static int32_t get_offset_of_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98)); }
	inline __StaticArrayInitTypeSizeU3D998_t337523735  get_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98() const { return ___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98; }
	inline __StaticArrayInitTypeSizeU3D998_t337523735 * get_address_of_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98() { return &___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98; }
	inline void set_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98(__StaticArrayInitTypeSizeU3D998_t337523735  value)
	{
		___B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98 = value;
	}

	inline static int32_t get_offset_of_B8F87834C3597B2EEF22BA6D3A392CC925636401_99() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___B8F87834C3597B2EEF22BA6D3A392CC925636401_99)); }
	inline __StaticArrayInitTypeSizeU3D360_t3778338517  get_B8F87834C3597B2EEF22BA6D3A392CC925636401_99() const { return ___B8F87834C3597B2EEF22BA6D3A392CC925636401_99; }
	inline __StaticArrayInitTypeSizeU3D360_t3778338517 * get_address_of_B8F87834C3597B2EEF22BA6D3A392CC925636401_99() { return &___B8F87834C3597B2EEF22BA6D3A392CC925636401_99; }
	inline void set_B8F87834C3597B2EEF22BA6D3A392CC925636401_99(__StaticArrayInitTypeSizeU3D360_t3778338517  value)
	{
		___B8F87834C3597B2EEF22BA6D3A392CC925636401_99 = value;
	}

	inline static int32_t get_offset_of_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100() const { return ___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100() { return &___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100; }
	inline void set_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100 = value;
	}

	inline static int32_t get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101)); }
	inline __StaticArrayInitTypeSizeU3D20_t287997725  get_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101() const { return ___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101; }
	inline __StaticArrayInitTypeSizeU3D20_t287997725 * get_address_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101() { return &___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101; }
	inline void set_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101(__StaticArrayInitTypeSizeU3D20_t287997725  value)
	{
		___BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101 = value;
	}

	inline static int32_t get_offset_of_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102() const { return ___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102() { return &___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102; }
	inline void set_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102 = value;
	}

	inline static int32_t get_offset_of_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103() const { return ___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103() { return &___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103; }
	inline void set_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103 = value;
	}

	inline static int32_t get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104() const { return ___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104() { return &___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104; }
	inline void set_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104 = value;
	}

	inline static int32_t get_offset_of_BF5EB60806ECB74EE484105DD9D6F463BF994867_105() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___BF5EB60806ECB74EE484105DD9D6F463BF994867_105)); }
	inline __StaticArrayInitTypeSizeU3D6_t3233475679  get_BF5EB60806ECB74EE484105DD9D6F463BF994867_105() const { return ___BF5EB60806ECB74EE484105DD9D6F463BF994867_105; }
	inline __StaticArrayInitTypeSizeU3D6_t3233475679 * get_address_of_BF5EB60806ECB74EE484105DD9D6F463BF994867_105() { return &___BF5EB60806ECB74EE484105DD9D6F463BF994867_105; }
	inline void set_BF5EB60806ECB74EE484105DD9D6F463BF994867_105(__StaticArrayInitTypeSizeU3D6_t3233475679  value)
	{
		___BF5EB60806ECB74EE484105DD9D6F463BF994867_105 = value;
	}

	inline static int32_t get_offset_of_C1A1100642BA9685B30A84D97348484E14AA1865_106() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___C1A1100642BA9685B30A84D97348484E14AA1865_106)); }
	inline int64_t get_C1A1100642BA9685B30A84D97348484E14AA1865_106() const { return ___C1A1100642BA9685B30A84D97348484E14AA1865_106; }
	inline int64_t* get_address_of_C1A1100642BA9685B30A84D97348484E14AA1865_106() { return &___C1A1100642BA9685B30A84D97348484E14AA1865_106; }
	inline void set_C1A1100642BA9685B30A84D97348484E14AA1865_106(int64_t value)
	{
		___C1A1100642BA9685B30A84D97348484E14AA1865_106 = value;
	}

	inline static int32_t get_offset_of_C35AB913B7CBEB243E050D1C7A61174F7C67D416_107() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___C35AB913B7CBEB243E050D1C7A61174F7C67D416_107)); }
	inline __StaticArrayInitTypeSizeU3D94_t3538080186  get_C35AB913B7CBEB243E050D1C7A61174F7C67D416_107() const { return ___C35AB913B7CBEB243E050D1C7A61174F7C67D416_107; }
	inline __StaticArrayInitTypeSizeU3D94_t3538080186 * get_address_of_C35AB913B7CBEB243E050D1C7A61174F7C67D416_107() { return &___C35AB913B7CBEB243E050D1C7A61174F7C67D416_107; }
	inline void set_C35AB913B7CBEB243E050D1C7A61174F7C67D416_107(__StaticArrayInitTypeSizeU3D94_t3538080186  value)
	{
		___C35AB913B7CBEB243E050D1C7A61174F7C67D416_107 = value;
	}

	inline static int32_t get_offset_of_C6F364A0AD934EFED8909446C215752E565D77C1_108() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___C6F364A0AD934EFED8909446C215752E565D77C1_108)); }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832  get_C6F364A0AD934EFED8909446C215752E565D77C1_108() const { return ___C6F364A0AD934EFED8909446C215752E565D77C1_108; }
	inline __StaticArrayInitTypeSizeU3D16_t3112835832 * get_address_of_C6F364A0AD934EFED8909446C215752E565D77C1_108() { return &___C6F364A0AD934EFED8909446C215752E565D77C1_108; }
	inline void set_C6F364A0AD934EFED8909446C215752E565D77C1_108(__StaticArrayInitTypeSizeU3D16_t3112835832  value)
	{
		___C6F364A0AD934EFED8909446C215752E565D77C1_108 = value;
	}

	inline static int32_t get_offset_of_CE5835130F5277F63D716FC9115526B0AC68FFAD_109() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___CE5835130F5277F63D716FC9115526B0AC68FFAD_109)); }
	inline __StaticArrayInitTypeSizeU3D174_t656707292  get_CE5835130F5277F63D716FC9115526B0AC68FFAD_109() const { return ___CE5835130F5277F63D716FC9115526B0AC68FFAD_109; }
	inline __StaticArrayInitTypeSizeU3D174_t656707292 * get_address_of_CE5835130F5277F63D716FC9115526B0AC68FFAD_109() { return &___CE5835130F5277F63D716FC9115526B0AC68FFAD_109; }
	inline void set_CE5835130F5277F63D716FC9115526B0AC68FFAD_109(__StaticArrayInitTypeSizeU3D174_t656707292  value)
	{
		___CE5835130F5277F63D716FC9115526B0AC68FFAD_109 = value;
	}

	inline static int32_t get_offset_of_CE93C35B755802BC4B3D180716B048FC61701EF7_110() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___CE93C35B755802BC4B3D180716B048FC61701EF7_110)); }
	inline __StaticArrayInitTypeSizeU3D6_t3233475679  get_CE93C35B755802BC4B3D180716B048FC61701EF7_110() const { return ___CE93C35B755802BC4B3D180716B048FC61701EF7_110; }
	inline __StaticArrayInitTypeSizeU3D6_t3233475679 * get_address_of_CE93C35B755802BC4B3D180716B048FC61701EF7_110() { return &___CE93C35B755802BC4B3D180716B048FC61701EF7_110; }
	inline void set_CE93C35B755802BC4B3D180716B048FC61701EF7_110(__StaticArrayInitTypeSizeU3D6_t3233475679  value)
	{
		___CE93C35B755802BC4B3D180716B048FC61701EF7_110 = value;
	}

	inline static int32_t get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111)); }
	inline __StaticArrayInitTypeSizeU3D64_t705749310  get_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111() const { return ___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111; }
	inline __StaticArrayInitTypeSizeU3D64_t705749310 * get_address_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111() { return &___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111; }
	inline void set_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111(__StaticArrayInitTypeSizeU3D64_t705749310  value)
	{
		___CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111 = value;
	}

	inline static int32_t get_offset_of_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112)); }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436  get_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112() const { return ___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112; }
	inline __StaticArrayInitTypeSizeU3D256_t2048586436 * get_address_of_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112() { return &___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112; }
	inline void set_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112(__StaticArrayInitTypeSizeU3D256_t2048586436  value)
	{
		___D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112 = value;
	}

	inline static int32_t get_offset_of_D117188BE8D4609C0D531C51B0BB911A4219DEBE_113() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___D117188BE8D4609C0D531C51B0BB911A4219DEBE_113)); }
	inline __StaticArrayInitTypeSizeU3D32_t3021320602  get_D117188BE8D4609C0D531C51B0BB911A4219DEBE_113() const { return ___D117188BE8D4609C0D531C51B0BB911A4219DEBE_113; }
	inline __StaticArrayInitTypeSizeU3D32_t3021320602 * get_address_of_D117188BE8D4609C0D531C51B0BB911A4219DEBE_113() { return &___D117188BE8D4609C0D531C51B0BB911A4219DEBE_113; }
	inline void set_D117188BE8D4609C0D531C51B0BB911A4219DEBE_113(__StaticArrayInitTypeSizeU3D32_t3021320602  value)
	{
		___D117188BE8D4609C0D531C51B0BB911A4219DEBE_113 = value;
	}

	inline static int32_t get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114)); }
	inline __StaticArrayInitTypeSizeU3D32_t3021320602  get_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114() const { return ___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114; }
	inline __StaticArrayInitTypeSizeU3D32_t3021320602 * get_address_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114() { return &___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114; }
	inline void set_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114(__StaticArrayInitTypeSizeU3D32_t3021320602  value)
	{
		___D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114 = value;
	}

	inline static int32_t get_offset_of_D76478B994B312CD022DCA207AA2254880D2FCC9_115() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___D76478B994B312CD022DCA207AA2254880D2FCC9_115)); }
	inline __StaticArrayInitTypeSizeU3D82_t568479875  get_D76478B994B312CD022DCA207AA2254880D2FCC9_115() const { return ___D76478B994B312CD022DCA207AA2254880D2FCC9_115; }
	inline __StaticArrayInitTypeSizeU3D82_t568479875 * get_address_of_D76478B994B312CD022DCA207AA2254880D2FCC9_115() { return &___D76478B994B312CD022DCA207AA2254880D2FCC9_115; }
	inline void set_D76478B994B312CD022DCA207AA2254880D2FCC9_115(__StaticArrayInitTypeSizeU3D82_t568479875  value)
	{
		___D76478B994B312CD022DCA207AA2254880D2FCC9_115 = value;
	}

	inline static int32_t get_offset_of_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116)); }
	inline __StaticArrayInitTypeSizeU3D44_t2924178629  get_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116() const { return ___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116; }
	inline __StaticArrayInitTypeSizeU3D44_t2924178629 * get_address_of_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116() { return &___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116; }
	inline void set_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116(__StaticArrayInitTypeSizeU3D44_t2924178629  value)
	{
		___D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116 = value;
	}

	inline static int32_t get_offset_of_DA19DB47B583EFCF7825D2E39D661D2354F28219_117() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___DA19DB47B583EFCF7825D2E39D661D2354F28219_117)); }
	inline __StaticArrayInitTypeSizeU3D76_t3301205552  get_DA19DB47B583EFCF7825D2E39D661D2354F28219_117() const { return ___DA19DB47B583EFCF7825D2E39D661D2354F28219_117; }
	inline __StaticArrayInitTypeSizeU3D76_t3301205552 * get_address_of_DA19DB47B583EFCF7825D2E39D661D2354F28219_117() { return &___DA19DB47B583EFCF7825D2E39D661D2354F28219_117; }
	inline void set_DA19DB47B583EFCF7825D2E39D661D2354F28219_117(__StaticArrayInitTypeSizeU3D76_t3301205552  value)
	{
		___DA19DB47B583EFCF7825D2E39D661D2354F28219_117 = value;
	}

	inline static int32_t get_offset_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118)); }
	inline __StaticArrayInitTypeSizeU3D56_t3117903646  get_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118() const { return ___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118; }
	inline __StaticArrayInitTypeSizeU3D56_t3117903646 * get_address_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118() { return &___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118; }
	inline void set_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118(__StaticArrayInitTypeSizeU3D56_t3117903646  value)
	{
		___DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118 = value;
	}

	inline static int32_t get_offset_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_119() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_119)); }
	inline __StaticArrayInitTypeSizeU3D52_t3493798233  get_DD3AEFEADB1CD615F3017763F1568179FEE640B0_119() const { return ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_119; }
	inline __StaticArrayInitTypeSizeU3D52_t3493798233 * get_address_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_119() { return &___DD3AEFEADB1CD615F3017763F1568179FEE640B0_119; }
	inline void set_DD3AEFEADB1CD615F3017763F1568179FEE640B0_119(__StaticArrayInitTypeSizeU3D52_t3493798233  value)
	{
		___DD3AEFEADB1CD615F3017763F1568179FEE640B0_119 = value;
	}

	inline static int32_t get_offset_of_E1827270A5FE1C85F5352A66FD87BA747213D006_120() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___E1827270A5FE1C85F5352A66FD87BA747213D006_120)); }
	inline __StaticArrayInitTypeSizeU3D36_t1175211245  get_E1827270A5FE1C85F5352A66FD87BA747213D006_120() const { return ___E1827270A5FE1C85F5352A66FD87BA747213D006_120; }
	inline __StaticArrayInitTypeSizeU3D36_t1175211245 * get_address_of_E1827270A5FE1C85F5352A66FD87BA747213D006_120() { return &___E1827270A5FE1C85F5352A66FD87BA747213D006_120; }
	inline void set_E1827270A5FE1C85F5352A66FD87BA747213D006_120(__StaticArrayInitTypeSizeU3D36_t1175211245  value)
	{
		___E1827270A5FE1C85F5352A66FD87BA747213D006_120 = value;
	}

	inline static int32_t get_offset_of_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121() const { return ___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121() { return &___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121; }
	inline void set_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121 = value;
	}

	inline static int32_t get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_122() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___E75835D001C843F156FBA01B001DFE1B8029AC17_122)); }
	inline __StaticArrayInitTypeSizeU3D64_t705749310  get_E75835D001C843F156FBA01B001DFE1B8029AC17_122() const { return ___E75835D001C843F156FBA01B001DFE1B8029AC17_122; }
	inline __StaticArrayInitTypeSizeU3D64_t705749310 * get_address_of_E75835D001C843F156FBA01B001DFE1B8029AC17_122() { return &___E75835D001C843F156FBA01B001DFE1B8029AC17_122; }
	inline void set_E75835D001C843F156FBA01B001DFE1B8029AC17_122(__StaticArrayInitTypeSizeU3D64_t705749310  value)
	{
		___E75835D001C843F156FBA01B001DFE1B8029AC17_122 = value;
	}

	inline static int32_t get_offset_of_E92B39D8233061927D9ACDE54665E68E7535635A_123() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___E92B39D8233061927D9ACDE54665E68E7535635A_123)); }
	inline __StaticArrayInitTypeSizeU3D52_t3493798233  get_E92B39D8233061927D9ACDE54665E68E7535635A_123() const { return ___E92B39D8233061927D9ACDE54665E68E7535635A_123; }
	inline __StaticArrayInitTypeSizeU3D52_t3493798233 * get_address_of_E92B39D8233061927D9ACDE54665E68E7535635A_123() { return &___E92B39D8233061927D9ACDE54665E68E7535635A_123; }
	inline void set_E92B39D8233061927D9ACDE54665E68E7535635A_123(__StaticArrayInitTypeSizeU3D52_t3493798233  value)
	{
		___E92B39D8233061927D9ACDE54665E68E7535635A_123 = value;
	}

	inline static int32_t get_offset_of_EA9506959484C55CFE0C139C624DF6060E285866_124() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___EA9506959484C55CFE0C139C624DF6060E285866_124)); }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147  get_EA9506959484C55CFE0C139C624DF6060E285866_124() const { return ___EA9506959484C55CFE0C139C624DF6060E285866_124; }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147 * get_address_of_EA9506959484C55CFE0C139C624DF6060E285866_124() { return &___EA9506959484C55CFE0C139C624DF6060E285866_124; }
	inline void set_EA9506959484C55CFE0C139C624DF6060E285866_124(__StaticArrayInitTypeSizeU3D12_t1040947147  value)
	{
		___EA9506959484C55CFE0C139C624DF6060E285866_124 = value;
	}

	inline static int32_t get_offset_of_EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125)); }
	inline __StaticArrayInitTypeSizeU3D160_t202218844  get_EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125() const { return ___EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125; }
	inline __StaticArrayInitTypeSizeU3D160_t202218844 * get_address_of_EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125() { return &___EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125; }
	inline void set_EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125(__StaticArrayInitTypeSizeU3D160_t202218844  value)
	{
		___EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125 = value;
	}

	inline static int32_t get_offset_of_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126)); }
	inline __StaticArrayInitTypeSizeU3D262_t3346364158  get_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126() const { return ___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126; }
	inline __StaticArrayInitTypeSizeU3D262_t3346364158 * get_address_of_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126() { return &___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126; }
	inline void set_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126(__StaticArrayInitTypeSizeU3D262_t3346364158  value)
	{
		___EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126 = value;
	}

	inline static int32_t get_offset_of_EBF68F411848D603D059DFDEA2321C5A5EA78044_127() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___EBF68F411848D603D059DFDEA2321C5A5EA78044_127)); }
	inline __StaticArrayInitTypeSizeU3D64_t705749310  get_EBF68F411848D603D059DFDEA2321C5A5EA78044_127() const { return ___EBF68F411848D603D059DFDEA2321C5A5EA78044_127; }
	inline __StaticArrayInitTypeSizeU3D64_t705749310 * get_address_of_EBF68F411848D603D059DFDEA2321C5A5EA78044_127() { return &___EBF68F411848D603D059DFDEA2321C5A5EA78044_127; }
	inline void set_EBF68F411848D603D059DFDEA2321C5A5EA78044_127(__StaticArrayInitTypeSizeU3D64_t705749310  value)
	{
		___EBF68F411848D603D059DFDEA2321C5A5EA78044_127 = value;
	}

	inline static int32_t get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128)); }
	inline __StaticArrayInitTypeSizeU3D10_t577514998  get_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128() const { return ___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128; }
	inline __StaticArrayInitTypeSizeU3D10_t577514998 * get_address_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128() { return &___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128; }
	inline void set_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128(__StaticArrayInitTypeSizeU3D10_t577514998  value)
	{
		___EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128 = value;
	}

	inline static int32_t get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129)); }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860  get_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129() const { return ___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129; }
	inline __StaticArrayInitTypeSizeU3D3_t2610884860 * get_address_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129() { return &___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129; }
	inline void set_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129(__StaticArrayInitTypeSizeU3D3_t2610884860  value)
	{
		___EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129 = value;
	}

	inline static int32_t get_offset_of_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130() const { return ___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130() { return &___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130; }
	inline void set_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130 = value;
	}

	inline static int32_t get_offset_of_F06E829E62F3AFBC045D064E10A4F5DF7C969612_131() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___F06E829E62F3AFBC045D064E10A4F5DF7C969612_131)); }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755  get_F06E829E62F3AFBC045D064E10A4F5DF7C969612_131() const { return ___F06E829E62F3AFBC045D064E10A4F5DF7C969612_131; }
	inline __StaticArrayInitTypeSizeU3D40_t3331666755 * get_address_of_F06E829E62F3AFBC045D064E10A4F5DF7C969612_131() { return &___F06E829E62F3AFBC045D064E10A4F5DF7C969612_131; }
	inline void set_F06E829E62F3AFBC045D064E10A4F5DF7C969612_131(__StaticArrayInitTypeSizeU3D40_t3331666755  value)
	{
		___F06E829E62F3AFBC045D064E10A4F5DF7C969612_131 = value;
	}

	inline static int32_t get_offset_of_F34B0E10653402E8F788F8BC3F7CD7090928A429_132() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___F34B0E10653402E8F788F8BC3F7CD7090928A429_132)); }
	inline __StaticArrayInitTypeSizeU3D120_t1520772219  get_F34B0E10653402E8F788F8BC3F7CD7090928A429_132() const { return ___F34B0E10653402E8F788F8BC3F7CD7090928A429_132; }
	inline __StaticArrayInitTypeSizeU3D120_t1520772219 * get_address_of_F34B0E10653402E8F788F8BC3F7CD7090928A429_132() { return &___F34B0E10653402E8F788F8BC3F7CD7090928A429_132; }
	inline void set_F34B0E10653402E8F788F8BC3F7CD7090928A429_132(__StaticArrayInitTypeSizeU3D120_t1520772219  value)
	{
		___F34B0E10653402E8F788F8BC3F7CD7090928A429_132 = value;
	}

	inline static int32_t get_offset_of_F37E34BEADB04F34FCC31078A59F49856CA83D5B_133() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___F37E34BEADB04F34FCC31078A59F49856CA83D5B_133)); }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266  get_F37E34BEADB04F34FCC31078A59F49856CA83D5B_133() const { return ___F37E34BEADB04F34FCC31078A59F49856CA83D5B_133; }
	inline __StaticArrayInitTypeSizeU3D72_t3425957266 * get_address_of_F37E34BEADB04F34FCC31078A59F49856CA83D5B_133() { return &___F37E34BEADB04F34FCC31078A59F49856CA83D5B_133; }
	inline void set_F37E34BEADB04F34FCC31078A59F49856CA83D5B_133(__StaticArrayInitTypeSizeU3D72_t3425957266  value)
	{
		___F37E34BEADB04F34FCC31078A59F49856CA83D5B_133 = value;
	}

	inline static int32_t get_offset_of_F512A9ABF88066AAEB92684F95CC05D8101B462B_134() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___F512A9ABF88066AAEB92684F95CC05D8101B462B_134)); }
	inline __StaticArrayInitTypeSizeU3D94_t3538080186  get_F512A9ABF88066AAEB92684F95CC05D8101B462B_134() const { return ___F512A9ABF88066AAEB92684F95CC05D8101B462B_134; }
	inline __StaticArrayInitTypeSizeU3D94_t3538080186 * get_address_of_F512A9ABF88066AAEB92684F95CC05D8101B462B_134() { return &___F512A9ABF88066AAEB92684F95CC05D8101B462B_134; }
	inline void set_F512A9ABF88066AAEB92684F95CC05D8101B462B_134(__StaticArrayInitTypeSizeU3D94_t3538080186  value)
	{
		___F512A9ABF88066AAEB92684F95CC05D8101B462B_134 = value;
	}

	inline static int32_t get_offset_of_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135)); }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147  get_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135() const { return ___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135; }
	inline __StaticArrayInitTypeSizeU3D12_t1040947147 * get_address_of_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135() { return &___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135; }
	inline void set_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135(__StaticArrayInitTypeSizeU3D12_t1040947147  value)
	{
		___F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135 = value;
	}

	inline static int32_t get_offset_of_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields, ___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136)); }
	inline __StaticArrayInitTypeSizeU3D2350_t2042313488  get_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136() const { return ___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136; }
	inline __StaticArrayInitTypeSizeU3D2350_t2042313488 * get_address_of_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136() { return &___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136; }
	inline void set_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136(__StaticArrayInitTypeSizeU3D2350_t2042313488  value)
	{
		___FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1736982555_H
#ifndef X509CERTIFICATE_T2483470942_H
#define X509CERTIFICATE_T2483470942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t2483470942  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t1450547606 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t2516310093* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t2717371579  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t2717371579  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t1450547606 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t2516310093* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t1450547606 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t2516310093* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t2516310093* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t2516310093* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t2516310093* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t3890721306 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t2548050784 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t2516310093* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t2516310093* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t2516310093* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t3201042415 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___decoder_0)); }
	inline ASN1_t1450547606 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t1450547606 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t1450547606 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t2516310093* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t2516310093** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t2516310093* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_from_2)); }
	inline DateTime_t2717371579  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t2717371579 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t2717371579  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_until_3)); }
	inline DateTime_t2717371579  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t2717371579 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t2717371579  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___issuer_4)); }
	inline ASN1_t1450547606 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t1450547606 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t1450547606 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t2516310093* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t2516310093** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t2516310093* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___subject_8)); }
	inline ASN1_t1450547606 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t1450547606 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t1450547606 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_publickey_10)); }
	inline ByteU5BU5D_t2516310093* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t2516310093** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t2516310093* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___signature_11)); }
	inline ByteU5BU5D_t2516310093* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t2516310093** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t2516310093* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t2516310093* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t2516310093** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t2516310093* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___certhash_14)); }
	inline ByteU5BU5D_t2516310093* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t2516310093** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t2516310093* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ____rsa_15)); }
	inline RSA_t3890721306 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t3890721306 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t3890721306 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ____dsa_16)); }
	inline DSA_t2548050784 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t2548050784 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t2548050784 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___serialnumber_18)); }
	inline ByteU5BU5D_t2516310093* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t2516310093** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t2516310093* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t2516310093* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t2516310093** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t2516310093* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t2516310093* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t2516310093** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t2516310093* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942, ___extensions_21)); }
	inline X509ExtensionCollection_t3201042415 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t3201042415 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t3201042415 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t2483470942_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t2483470942_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T2483470942_H
#ifndef X509CHAIN_T1327291242_H
#define X509CHAIN_T1327291242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t1327291242  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t2318156732 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t2318156732 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t2483470942 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t2318156732 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t1327291242, ___roots_0)); }
	inline X509CertificateCollection_t2318156732 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t2318156732 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t2318156732 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t1327291242, ___certs_1)); }
	inline X509CertificateCollection_t2318156732 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t2318156732 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t2318156732 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t1327291242, ____root_2)); }
	inline X509Certificate_t2483470942 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t2483470942 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t2483470942 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t1327291242, ____chain_3)); }
	inline X509CertificateCollection_t2318156732 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t2318156732 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t2318156732 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t1327291242, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T1327291242_H
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
#ifndef SYMMETRICTRANSFORM_T481768677_H
#define SYMMETRICTRANSFORM_T481768677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t481768677  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t3518896029 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t2516310093* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t2516310093* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t2516310093* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t2516310093* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t1266854030 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___algo_0)); }
	inline SymmetricAlgorithm_t3518896029 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t3518896029 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t3518896029 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___temp_3)); }
	inline ByteU5BU5D_t2516310093* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t2516310093** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t2516310093* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___temp2_4)); }
	inline ByteU5BU5D_t2516310093* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t2516310093** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t2516310093* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___workBuff_5)); }
	inline ByteU5BU5D_t2516310093* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t2516310093** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t2516310093* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___workout_6)); }
	inline ByteU5BU5D_t2516310093* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t2516310093** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t2516310093* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t481768677, ____rng_11)); }
	inline RandomNumberGenerator_t1266854030 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t1266854030 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t1266854030 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T481768677_H
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
#ifndef CONTEXT_T1039318745_H
#define CONTEXT_T1039318745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/Context
struct  Context_t1039318745 
{
public:
	// System.Globalization.CompareOptions Mono.Globalization.Unicode.SimpleCollator/Context::Option
	int32_t ___Option_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::NeverMatchFlags
	uint8_t* ___NeverMatchFlags_1;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::AlwaysMatchFlags
	uint8_t* ___AlwaysMatchFlags_2;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::Buffer1
	uint8_t* ___Buffer1_3;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::Buffer2
	uint8_t* ___Buffer2_4;
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/Context::PrevCode
	int32_t ___PrevCode_5;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/Context::PrevSortKey
	uint8_t* ___PrevSortKey_6;

public:
	inline static int32_t get_offset_of_Option_0() { return static_cast<int32_t>(offsetof(Context_t1039318745, ___Option_0)); }
	inline int32_t get_Option_0() const { return ___Option_0; }
	inline int32_t* get_address_of_Option_0() { return &___Option_0; }
	inline void set_Option_0(int32_t value)
	{
		___Option_0 = value;
	}

	inline static int32_t get_offset_of_NeverMatchFlags_1() { return static_cast<int32_t>(offsetof(Context_t1039318745, ___NeverMatchFlags_1)); }
	inline uint8_t* get_NeverMatchFlags_1() const { return ___NeverMatchFlags_1; }
	inline uint8_t** get_address_of_NeverMatchFlags_1() { return &___NeverMatchFlags_1; }
	inline void set_NeverMatchFlags_1(uint8_t* value)
	{
		___NeverMatchFlags_1 = value;
	}

	inline static int32_t get_offset_of_AlwaysMatchFlags_2() { return static_cast<int32_t>(offsetof(Context_t1039318745, ___AlwaysMatchFlags_2)); }
	inline uint8_t* get_AlwaysMatchFlags_2() const { return ___AlwaysMatchFlags_2; }
	inline uint8_t** get_address_of_AlwaysMatchFlags_2() { return &___AlwaysMatchFlags_2; }
	inline void set_AlwaysMatchFlags_2(uint8_t* value)
	{
		___AlwaysMatchFlags_2 = value;
	}

	inline static int32_t get_offset_of_Buffer1_3() { return static_cast<int32_t>(offsetof(Context_t1039318745, ___Buffer1_3)); }
	inline uint8_t* get_Buffer1_3() const { return ___Buffer1_3; }
	inline uint8_t** get_address_of_Buffer1_3() { return &___Buffer1_3; }
	inline void set_Buffer1_3(uint8_t* value)
	{
		___Buffer1_3 = value;
	}

	inline static int32_t get_offset_of_Buffer2_4() { return static_cast<int32_t>(offsetof(Context_t1039318745, ___Buffer2_4)); }
	inline uint8_t* get_Buffer2_4() const { return ___Buffer2_4; }
	inline uint8_t** get_address_of_Buffer2_4() { return &___Buffer2_4; }
	inline void set_Buffer2_4(uint8_t* value)
	{
		___Buffer2_4 = value;
	}

	inline static int32_t get_offset_of_PrevCode_5() { return static_cast<int32_t>(offsetof(Context_t1039318745, ___PrevCode_5)); }
	inline int32_t get_PrevCode_5() const { return ___PrevCode_5; }
	inline int32_t* get_address_of_PrevCode_5() { return &___PrevCode_5; }
	inline void set_PrevCode_5(int32_t value)
	{
		___PrevCode_5 = value;
	}

	inline static int32_t get_offset_of_PrevSortKey_6() { return static_cast<int32_t>(offsetof(Context_t1039318745, ___PrevSortKey_6)); }
	inline uint8_t* get_PrevSortKey_6() const { return ___PrevSortKey_6; }
	inline uint8_t** get_address_of_PrevSortKey_6() { return &___PrevSortKey_6; }
	inline void set_PrevSortKey_6(uint8_t* value)
	{
		___PrevSortKey_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t1039318745_marshaled_pinvoke
{
	int32_t ___Option_0;
	uint8_t* ___NeverMatchFlags_1;
	uint8_t* ___AlwaysMatchFlags_2;
	uint8_t* ___Buffer1_3;
	uint8_t* ___Buffer2_4;
	int32_t ___PrevCode_5;
	uint8_t* ___PrevSortKey_6;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t1039318745_marshaled_com
{
	int32_t ___Option_0;
	uint8_t* ___NeverMatchFlags_1;
	uint8_t* ___AlwaysMatchFlags_2;
	uint8_t* ___Buffer1_3;
	uint8_t* ___Buffer2_4;
	int32_t ___PrevCode_5;
	uint8_t* ___PrevSortKey_6;
};
#endif // CONTEXT_T1039318745_H
#ifndef SORTKEYBUFFER_T1269840279_H
#define SORTKEYBUFFER_T1269840279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SortKeyBuffer
struct  SortKeyBuffer_t1269840279  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l1b
	ByteU5BU5D_t2516310093* ___l1b_0;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l2b
	ByteU5BU5D_t2516310093* ___l2b_1;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l3b
	ByteU5BU5D_t2516310093* ___l3b_2;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4sb
	ByteU5BU5D_t2516310093* ___l4sb_3;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4tb
	ByteU5BU5D_t2516310093* ___l4tb_4;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4kb
	ByteU5BU5D_t2516310093* ___l4kb_5;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l4wb
	ByteU5BU5D_t2516310093* ___l4wb_6;
	// System.Byte[] Mono.Globalization.Unicode.SortKeyBuffer::l5b
	ByteU5BU5D_t2516310093* ___l5b_7;
	// System.String Mono.Globalization.Unicode.SortKeyBuffer::source
	String_t* ___source_8;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l1
	int32_t ___l1_9;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l2
	int32_t ___l2_10;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l3
	int32_t ___l3_11;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4s
	int32_t ___l4s_12;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4t
	int32_t ___l4t_13;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4k
	int32_t ___l4k_14;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l4w
	int32_t ___l4w_15;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::l5
	int32_t ___l5_16;
	// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::lcid
	int32_t ___lcid_17;
	// System.Globalization.CompareOptions Mono.Globalization.Unicode.SortKeyBuffer::options
	int32_t ___options_18;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::processLevel2
	bool ___processLevel2_19;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::frenchSort
	bool ___frenchSort_20;
	// System.Boolean Mono.Globalization.Unicode.SortKeyBuffer::frenchSorted
	bool ___frenchSorted_21;

public:
	inline static int32_t get_offset_of_l1b_0() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l1b_0)); }
	inline ByteU5BU5D_t2516310093* get_l1b_0() const { return ___l1b_0; }
	inline ByteU5BU5D_t2516310093** get_address_of_l1b_0() { return &___l1b_0; }
	inline void set_l1b_0(ByteU5BU5D_t2516310093* value)
	{
		___l1b_0 = value;
		Il2CppCodeGenWriteBarrier((&___l1b_0), value);
	}

	inline static int32_t get_offset_of_l2b_1() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l2b_1)); }
	inline ByteU5BU5D_t2516310093* get_l2b_1() const { return ___l2b_1; }
	inline ByteU5BU5D_t2516310093** get_address_of_l2b_1() { return &___l2b_1; }
	inline void set_l2b_1(ByteU5BU5D_t2516310093* value)
	{
		___l2b_1 = value;
		Il2CppCodeGenWriteBarrier((&___l2b_1), value);
	}

	inline static int32_t get_offset_of_l3b_2() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l3b_2)); }
	inline ByteU5BU5D_t2516310093* get_l3b_2() const { return ___l3b_2; }
	inline ByteU5BU5D_t2516310093** get_address_of_l3b_2() { return &___l3b_2; }
	inline void set_l3b_2(ByteU5BU5D_t2516310093* value)
	{
		___l3b_2 = value;
		Il2CppCodeGenWriteBarrier((&___l3b_2), value);
	}

	inline static int32_t get_offset_of_l4sb_3() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l4sb_3)); }
	inline ByteU5BU5D_t2516310093* get_l4sb_3() const { return ___l4sb_3; }
	inline ByteU5BU5D_t2516310093** get_address_of_l4sb_3() { return &___l4sb_3; }
	inline void set_l4sb_3(ByteU5BU5D_t2516310093* value)
	{
		___l4sb_3 = value;
		Il2CppCodeGenWriteBarrier((&___l4sb_3), value);
	}

	inline static int32_t get_offset_of_l4tb_4() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l4tb_4)); }
	inline ByteU5BU5D_t2516310093* get_l4tb_4() const { return ___l4tb_4; }
	inline ByteU5BU5D_t2516310093** get_address_of_l4tb_4() { return &___l4tb_4; }
	inline void set_l4tb_4(ByteU5BU5D_t2516310093* value)
	{
		___l4tb_4 = value;
		Il2CppCodeGenWriteBarrier((&___l4tb_4), value);
	}

	inline static int32_t get_offset_of_l4kb_5() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l4kb_5)); }
	inline ByteU5BU5D_t2516310093* get_l4kb_5() const { return ___l4kb_5; }
	inline ByteU5BU5D_t2516310093** get_address_of_l4kb_5() { return &___l4kb_5; }
	inline void set_l4kb_5(ByteU5BU5D_t2516310093* value)
	{
		___l4kb_5 = value;
		Il2CppCodeGenWriteBarrier((&___l4kb_5), value);
	}

	inline static int32_t get_offset_of_l4wb_6() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l4wb_6)); }
	inline ByteU5BU5D_t2516310093* get_l4wb_6() const { return ___l4wb_6; }
	inline ByteU5BU5D_t2516310093** get_address_of_l4wb_6() { return &___l4wb_6; }
	inline void set_l4wb_6(ByteU5BU5D_t2516310093* value)
	{
		___l4wb_6 = value;
		Il2CppCodeGenWriteBarrier((&___l4wb_6), value);
	}

	inline static int32_t get_offset_of_l5b_7() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l5b_7)); }
	inline ByteU5BU5D_t2516310093* get_l5b_7() const { return ___l5b_7; }
	inline ByteU5BU5D_t2516310093** get_address_of_l5b_7() { return &___l5b_7; }
	inline void set_l5b_7(ByteU5BU5D_t2516310093* value)
	{
		___l5b_7 = value;
		Il2CppCodeGenWriteBarrier((&___l5b_7), value);
	}

	inline static int32_t get_offset_of_source_8() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___source_8)); }
	inline String_t* get_source_8() const { return ___source_8; }
	inline String_t** get_address_of_source_8() { return &___source_8; }
	inline void set_source_8(String_t* value)
	{
		___source_8 = value;
		Il2CppCodeGenWriteBarrier((&___source_8), value);
	}

	inline static int32_t get_offset_of_l1_9() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l1_9)); }
	inline int32_t get_l1_9() const { return ___l1_9; }
	inline int32_t* get_address_of_l1_9() { return &___l1_9; }
	inline void set_l1_9(int32_t value)
	{
		___l1_9 = value;
	}

	inline static int32_t get_offset_of_l2_10() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l2_10)); }
	inline int32_t get_l2_10() const { return ___l2_10; }
	inline int32_t* get_address_of_l2_10() { return &___l2_10; }
	inline void set_l2_10(int32_t value)
	{
		___l2_10 = value;
	}

	inline static int32_t get_offset_of_l3_11() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l3_11)); }
	inline int32_t get_l3_11() const { return ___l3_11; }
	inline int32_t* get_address_of_l3_11() { return &___l3_11; }
	inline void set_l3_11(int32_t value)
	{
		___l3_11 = value;
	}

	inline static int32_t get_offset_of_l4s_12() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l4s_12)); }
	inline int32_t get_l4s_12() const { return ___l4s_12; }
	inline int32_t* get_address_of_l4s_12() { return &___l4s_12; }
	inline void set_l4s_12(int32_t value)
	{
		___l4s_12 = value;
	}

	inline static int32_t get_offset_of_l4t_13() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l4t_13)); }
	inline int32_t get_l4t_13() const { return ___l4t_13; }
	inline int32_t* get_address_of_l4t_13() { return &___l4t_13; }
	inline void set_l4t_13(int32_t value)
	{
		___l4t_13 = value;
	}

	inline static int32_t get_offset_of_l4k_14() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l4k_14)); }
	inline int32_t get_l4k_14() const { return ___l4k_14; }
	inline int32_t* get_address_of_l4k_14() { return &___l4k_14; }
	inline void set_l4k_14(int32_t value)
	{
		___l4k_14 = value;
	}

	inline static int32_t get_offset_of_l4w_15() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l4w_15)); }
	inline int32_t get_l4w_15() const { return ___l4w_15; }
	inline int32_t* get_address_of_l4w_15() { return &___l4w_15; }
	inline void set_l4w_15(int32_t value)
	{
		___l4w_15 = value;
	}

	inline static int32_t get_offset_of_l5_16() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___l5_16)); }
	inline int32_t get_l5_16() const { return ___l5_16; }
	inline int32_t* get_address_of_l5_16() { return &___l5_16; }
	inline void set_l5_16(int32_t value)
	{
		___l5_16 = value;
	}

	inline static int32_t get_offset_of_lcid_17() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___lcid_17)); }
	inline int32_t get_lcid_17() const { return ___lcid_17; }
	inline int32_t* get_address_of_lcid_17() { return &___lcid_17; }
	inline void set_lcid_17(int32_t value)
	{
		___lcid_17 = value;
	}

	inline static int32_t get_offset_of_options_18() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___options_18)); }
	inline int32_t get_options_18() const { return ___options_18; }
	inline int32_t* get_address_of_options_18() { return &___options_18; }
	inline void set_options_18(int32_t value)
	{
		___options_18 = value;
	}

	inline static int32_t get_offset_of_processLevel2_19() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___processLevel2_19)); }
	inline bool get_processLevel2_19() const { return ___processLevel2_19; }
	inline bool* get_address_of_processLevel2_19() { return &___processLevel2_19; }
	inline void set_processLevel2_19(bool value)
	{
		___processLevel2_19 = value;
	}

	inline static int32_t get_offset_of_frenchSort_20() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___frenchSort_20)); }
	inline bool get_frenchSort_20() const { return ___frenchSort_20; }
	inline bool* get_address_of_frenchSort_20() { return &___frenchSort_20; }
	inline void set_frenchSort_20(bool value)
	{
		___frenchSort_20 = value;
	}

	inline static int32_t get_offset_of_frenchSorted_21() { return static_cast<int32_t>(offsetof(SortKeyBuffer_t1269840279, ___frenchSorted_21)); }
	inline bool get_frenchSorted_21() const { return ___frenchSorted_21; }
	inline bool* get_address_of_frenchSorted_21() { return &___frenchSorted_21; }
	inline void set_frenchSorted_21(bool value)
	{
		___frenchSorted_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTKEYBUFFER_T1269840279_H
#ifndef SAFEWAITHANDLE_T2184965948_H
#define SAFEWAITHANDLE_T2184965948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct  SafeWaitHandle_t2184965948  : public SafeHandleZeroOrMinusOneIsInvalid_t714783540
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEWAITHANDLE_T2184965948_H
#ifndef KEYGENERATEDEVENTHANDLER_T3340730147_H
#define KEYGENERATEDEVENTHANDLER_T3340730147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3340730147  : public MulticastDelegate_t2785948311
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3340730147_H
#ifndef PRIMALITYTEST_T3335271311_H
#define PRIMALITYTEST_T3335271311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t3335271311  : public MulticastDelegate_t2785948311
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T3335271311_H
#ifndef SAFEFINDHANDLE_T713246424_H
#define SAFEFINDHANDLE_T713246424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeFindHandle
struct  SafeFindHandle_t713246424  : public SafeHandleZeroOrMinusOneIsInvalid_t714783540
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEFINDHANDLE_T713246424_H
#ifndef SAFEFILEHANDLE_T1761653369_H
#define SAFEFILEHANDLE_T1761653369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeFileHandle
struct  SafeFileHandle_t1761653369  : public SafeHandleZeroOrMinusOneIsInvalid_t714783540
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEFILEHANDLE_T1761653369_H
#ifndef SAFELIBRARYHANDLE_T25987551_H
#define SAFELIBRARYHANDLE_T25987551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeLibraryHandle
struct  SafeLibraryHandle_t25987551  : public SafeHandleZeroOrMinusOneIsInvalid_t714783540
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFELIBRARYHANDLE_T25987551_H
#ifndef SAFEREGISTRYHANDLE_T2819695873_H
#define SAFEREGISTRYHANDLE_T2819695873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeRegistryHandle
struct  SafeRegistryHandle_t2819695873  : public SafeHandleZeroOrMinusOneIsInvalid_t714783540
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEREGISTRYHANDLE_T2819695873_H
#ifndef KEYGENERATEDEVENTHANDLER_T3545235482_H
#define KEYGENERATEDEVENTHANDLER_T3545235482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3545235482  : public MulticastDelegate_t2785948311
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3545235482_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1500 = { sizeof (StrongName_t3786047429), -1, sizeof(StrongName_t3786047429_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1500[5] = 
{
	StrongName_t3786047429::get_offset_of_rsa_0(),
	StrongName_t3786047429::get_offset_of_publicKey_1(),
	StrongName_t3786047429::get_offset_of_keyToken_2(),
	StrongName_t3786047429::get_offset_of_tokenAlgorithm_3(),
	StrongName_t3786047429_StaticFields::get_offset_of_lockObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1501 = { sizeof (UriPartial_t2091500811)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1501[4] = 
{
	UriPartial_t2091500811::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1502 = { sizeof (Uri_t354905582), -1, sizeof(Uri_t354905582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1502[27] = 
{
	Uri_t354905582::get_offset_of_isUnixFilePath_0(),
	Uri_t354905582::get_offset_of_source_1(),
	Uri_t354905582::get_offset_of_scheme_2(),
	Uri_t354905582::get_offset_of_host_3(),
	Uri_t354905582::get_offset_of_port_4(),
	Uri_t354905582::get_offset_of_path_5(),
	Uri_t354905582::get_offset_of_query_6(),
	Uri_t354905582::get_offset_of_fragment_7(),
	Uri_t354905582::get_offset_of_userinfo_8(),
	Uri_t354905582::get_offset_of_isUnc_9(),
	Uri_t354905582::get_offset_of_isOpaquePart_10(),
	Uri_t354905582::get_offset_of_userEscaped_11(),
	Uri_t354905582::get_offset_of_cachedToString_12(),
	Uri_t354905582::get_offset_of_cachedLocalPath_13(),
	Uri_t354905582::get_offset_of_cachedHashCode_14(),
	Uri_t354905582::get_offset_of_reduce_15(),
	Uri_t354905582_StaticFields::get_offset_of_hexUpperChars_16(),
	Uri_t354905582_StaticFields::get_offset_of_SchemeDelimiter_17(),
	Uri_t354905582_StaticFields::get_offset_of_UriSchemeFile_18(),
	Uri_t354905582_StaticFields::get_offset_of_UriSchemeFtp_19(),
	Uri_t354905582_StaticFields::get_offset_of_UriSchemeGopher_20(),
	Uri_t354905582_StaticFields::get_offset_of_UriSchemeHttp_21(),
	Uri_t354905582_StaticFields::get_offset_of_UriSchemeHttps_22(),
	Uri_t354905582_StaticFields::get_offset_of_UriSchemeMailto_23(),
	Uri_t354905582_StaticFields::get_offset_of_UriSchemeNews_24(),
	Uri_t354905582_StaticFields::get_offset_of_UriSchemeNntp_25(),
	Uri_t354905582_StaticFields::get_offset_of_schemes_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1503 = { sizeof (UriScheme_t1479819327)+ sizeof (RuntimeObject), sizeof(UriScheme_t1479819327_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1503[3] = 
{
	UriScheme_t1479819327::get_offset_of_scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t1479819327::get_offset_of_delimiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t1479819327::get_offset_of_defaultPort_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1504 = { sizeof (SafeBag_t1920738679), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1504[2] = 
{
	SafeBag_t1920738679::get_offset_of__bagOID_0(),
	SafeBag_t1920738679::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1505 = { sizeof (PKCS12_t2301687543), -1, sizeof(PKCS12_t2301687543_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1505[11] = 
{
	PKCS12_t2301687543::get_offset_of__password_0(),
	PKCS12_t2301687543::get_offset_of__keyBags_1(),
	PKCS12_t2301687543::get_offset_of__secretBags_2(),
	PKCS12_t2301687543::get_offset_of__certs_3(),
	PKCS12_t2301687543::get_offset_of__keyBagsChanged_4(),
	PKCS12_t2301687543::get_offset_of__secretBagsChanged_5(),
	PKCS12_t2301687543::get_offset_of__certsChanged_6(),
	PKCS12_t2301687543::get_offset_of__iterations_7(),
	PKCS12_t2301687543::get_offset_of__safeBags_8(),
	PKCS12_t2301687543::get_offset_of__rng_9(),
	PKCS12_t2301687543_StaticFields::get_offset_of_password_max_length_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1506 = { sizeof (DeriveBytes_t2218711155), -1, sizeof(DeriveBytes_t2218711155_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1506[7] = 
{
	DeriveBytes_t2218711155_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t2218711155_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t2218711155_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t2218711155::get_offset_of__hashName_3(),
	DeriveBytes_t2218711155::get_offset_of__iterations_4(),
	DeriveBytes_t2218711155::get_offset_of__password_5(),
	DeriveBytes_t2218711155::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1507 = { sizeof (X501_t2870895225), -1, sizeof(X501_t2870895225_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1507[15] = 
{
	X501_t2870895225_StaticFields::get_offset_of_countryName_0(),
	X501_t2870895225_StaticFields::get_offset_of_organizationName_1(),
	X501_t2870895225_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t2870895225_StaticFields::get_offset_of_commonName_3(),
	X501_t2870895225_StaticFields::get_offset_of_localityName_4(),
	X501_t2870895225_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t2870895225_StaticFields::get_offset_of_streetAddress_6(),
	X501_t2870895225_StaticFields::get_offset_of_domainComponent_7(),
	X501_t2870895225_StaticFields::get_offset_of_userid_8(),
	X501_t2870895225_StaticFields::get_offset_of_email_9(),
	X501_t2870895225_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t2870895225_StaticFields::get_offset_of_title_11(),
	X501_t2870895225_StaticFields::get_offset_of_surname_12(),
	X501_t2870895225_StaticFields::get_offset_of_givenName_13(),
	X501_t2870895225_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1508 = { sizeof (X509Certificate_t2483470942), -1, sizeof(X509Certificate_t2483470942_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1508[23] = 
{
	X509Certificate_t2483470942::get_offset_of_decoder_0(),
	X509Certificate_t2483470942::get_offset_of_m_encodedcert_1(),
	X509Certificate_t2483470942::get_offset_of_m_from_2(),
	X509Certificate_t2483470942::get_offset_of_m_until_3(),
	X509Certificate_t2483470942::get_offset_of_issuer_4(),
	X509Certificate_t2483470942::get_offset_of_m_issuername_5(),
	X509Certificate_t2483470942::get_offset_of_m_keyalgo_6(),
	X509Certificate_t2483470942::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t2483470942::get_offset_of_subject_8(),
	X509Certificate_t2483470942::get_offset_of_m_subject_9(),
	X509Certificate_t2483470942::get_offset_of_m_publickey_10(),
	X509Certificate_t2483470942::get_offset_of_signature_11(),
	X509Certificate_t2483470942::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t2483470942::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t2483470942::get_offset_of_certhash_14(),
	X509Certificate_t2483470942::get_offset_of__rsa_15(),
	X509Certificate_t2483470942::get_offset_of__dsa_16(),
	X509Certificate_t2483470942::get_offset_of_version_17(),
	X509Certificate_t2483470942::get_offset_of_serialnumber_18(),
	X509Certificate_t2483470942::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t2483470942::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t2483470942::get_offset_of_extensions_21(),
	X509Certificate_t2483470942_StaticFields::get_offset_of_encoding_error_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1509 = { sizeof (X509CertificateCollection_t2318156732), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1510 = { sizeof (X509CertificateEnumerator_t187569084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1510[1] = 
{
	X509CertificateEnumerator_t187569084::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1511 = { sizeof (X509Chain_t1327291242), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1511[5] = 
{
	X509Chain_t1327291242::get_offset_of_roots_0(),
	X509Chain_t1327291242::get_offset_of_certs_1(),
	X509Chain_t1327291242::get_offset_of__root_2(),
	X509Chain_t1327291242::get_offset_of__chain_3(),
	X509Chain_t1327291242::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1512 = { sizeof (X509ChainStatusFlags_t1017148407)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1512[8] = 
{
	X509ChainStatusFlags_t1017148407::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1513 = { sizeof (X509Extension_t783139659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1513[3] = 
{
	X509Extension_t783139659::get_offset_of_extnOid_0(),
	X509Extension_t783139659::get_offset_of_extnCritical_1(),
	X509Extension_t783139659::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1514 = { sizeof (X509ExtensionCollection_t3201042415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1514[1] = 
{
	X509ExtensionCollection_t3201042415::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1515 = { sizeof (X509Store_t2550465051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1515[4] = 
{
	X509Store_t2550465051::get_offset_of__storePath_0(),
	X509Store_t2550465051::get_offset_of__certificates_1(),
	X509Store_t2550465051::get_offset_of__crl_2(),
	X509Store_t2550465051::get_offset_of__newFormat_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1516 = { sizeof (X509Stores_t2996079275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1516[3] = 
{
	X509Stores_t2996079275::get_offset_of__storePath_0(),
	X509Stores_t2996079275::get_offset_of__newFormat_1(),
	X509Stores_t2996079275::get_offset_of__trusted_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1517 = { sizeof (X509StoreManager_t2251089788), -1, sizeof(X509StoreManager_t2251089788_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1517[5] = 
{
	X509StoreManager_t2251089788_StaticFields::get_offset_of__userPath_0(),
	X509StoreManager_t2251089788_StaticFields::get_offset_of__localMachinePath_1(),
	X509StoreManager_t2251089788_StaticFields::get_offset_of__newLocalMachinePath_2(),
	X509StoreManager_t2251089788_StaticFields::get_offset_of__userStore_3(),
	X509StoreManager_t2251089788_StaticFields::get_offset_of__machineStore_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1518 = { sizeof (BasicConstraintsExtension_t3067959644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1518[2] = 
{
	BasicConstraintsExtension_t3067959644::get_offset_of_cA_3(),
	BasicConstraintsExtension_t3067959644::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1519 = { sizeof (CryptoConvert_t3532489358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1520 = { sizeof (KeyBuilder_t1140821251), -1, sizeof(KeyBuilder_t1140821251_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1520[1] = 
{
	KeyBuilder_t1140821251_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1521 = { sizeof (DSAManaged_t4174402455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1521[13] = 
{
	DSAManaged_t4174402455::get_offset_of_keypairGenerated_2(),
	DSAManaged_t4174402455::get_offset_of_m_disposed_3(),
	DSAManaged_t4174402455::get_offset_of_p_4(),
	DSAManaged_t4174402455::get_offset_of_q_5(),
	DSAManaged_t4174402455::get_offset_of_g_6(),
	DSAManaged_t4174402455::get_offset_of_x_7(),
	DSAManaged_t4174402455::get_offset_of_y_8(),
	DSAManaged_t4174402455::get_offset_of_j_9(),
	DSAManaged_t4174402455::get_offset_of_seed_10(),
	DSAManaged_t4174402455::get_offset_of_counter_11(),
	DSAManaged_t4174402455::get_offset_of_j_missing_12(),
	DSAManaged_t4174402455::get_offset_of_rng_13(),
	DSAManaged_t4174402455::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1522 = { sizeof (KeyGeneratedEventHandler_t3340730147), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1523 = { sizeof (KeyPairPersistence_t3970917333), -1, sizeof(KeyPairPersistence_t3970917333_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1523[9] = 
{
	KeyPairPersistence_t3970917333_StaticFields::get_offset_of__userPathExists_0(),
	KeyPairPersistence_t3970917333_StaticFields::get_offset_of__userPath_1(),
	KeyPairPersistence_t3970917333_StaticFields::get_offset_of__machinePathExists_2(),
	KeyPairPersistence_t3970917333_StaticFields::get_offset_of__machinePath_3(),
	KeyPairPersistence_t3970917333::get_offset_of__params_4(),
	KeyPairPersistence_t3970917333::get_offset_of__keyvalue_5(),
	KeyPairPersistence_t3970917333::get_offset_of__filename_6(),
	KeyPairPersistence_t3970917333::get_offset_of__container_7(),
	KeyPairPersistence_t3970917333_StaticFields::get_offset_of_lockobj_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1524 = { sizeof (PKCS1_t2408253136), -1, sizeof(PKCS1_t2408253136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1524[4] = 
{
	PKCS1_t2408253136_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t2408253136_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t2408253136_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t2408253136_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1525 = { sizeof (PKCS8_t4216919648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1526 = { sizeof (PrivateKeyInfo_t328423928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1526[4] = 
{
	PrivateKeyInfo_t328423928::get_offset_of__version_0(),
	PrivateKeyInfo_t328423928::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t328423928::get_offset_of__key_2(),
	PrivateKeyInfo_t328423928::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1527 = { sizeof (EncryptedPrivateKeyInfo_t1204268337), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1527[4] = 
{
	EncryptedPrivateKeyInfo_t1204268337::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t1204268337::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t1204268337::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t1204268337::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1528 = { sizeof (RSAManaged_t282852449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1528[13] = 
{
	RSAManaged_t282852449::get_offset_of_isCRTpossible_2(),
	RSAManaged_t282852449::get_offset_of_keyBlinding_3(),
	RSAManaged_t282852449::get_offset_of_keypairGenerated_4(),
	RSAManaged_t282852449::get_offset_of_m_disposed_5(),
	RSAManaged_t282852449::get_offset_of_d_6(),
	RSAManaged_t282852449::get_offset_of_p_7(),
	RSAManaged_t282852449::get_offset_of_q_8(),
	RSAManaged_t282852449::get_offset_of_dp_9(),
	RSAManaged_t282852449::get_offset_of_dq_10(),
	RSAManaged_t282852449::get_offset_of_qInv_11(),
	RSAManaged_t282852449::get_offset_of_n_12(),
	RSAManaged_t282852449::get_offset_of_e_13(),
	RSAManaged_t282852449::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1529 = { sizeof (KeyGeneratedEventHandler_t3545235482), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1530 = { sizeof (SymmetricTransform_t481768677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1530[12] = 
{
	SymmetricTransform_t481768677::get_offset_of_algo_0(),
	SymmetricTransform_t481768677::get_offset_of_encrypt_1(),
	SymmetricTransform_t481768677::get_offset_of_BlockSizeByte_2(),
	SymmetricTransform_t481768677::get_offset_of_temp_3(),
	SymmetricTransform_t481768677::get_offset_of_temp2_4(),
	SymmetricTransform_t481768677::get_offset_of_workBuff_5(),
	SymmetricTransform_t481768677::get_offset_of_workout_6(),
	SymmetricTransform_t481768677::get_offset_of_padmode_7(),
	SymmetricTransform_t481768677::get_offset_of_FeedBackByte_8(),
	SymmetricTransform_t481768677::get_offset_of_m_disposed_9(),
	SymmetricTransform_t481768677::get_offset_of_lastBlock_10(),
	SymmetricTransform_t481768677::get_offset_of__rng_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1531 = { sizeof (AuthenticodeBase_t2209899351), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1531[8] = 
{
	AuthenticodeBase_t2209899351::get_offset_of_fileblock_0(),
	AuthenticodeBase_t2209899351::get_offset_of_fs_1(),
	AuthenticodeBase_t2209899351::get_offset_of_blockNo_2(),
	AuthenticodeBase_t2209899351::get_offset_of_blockLength_3(),
	AuthenticodeBase_t2209899351::get_offset_of_peOffset_4(),
	AuthenticodeBase_t2209899351::get_offset_of_dirSecurityOffset_5(),
	AuthenticodeBase_t2209899351::get_offset_of_dirSecuritySize_6(),
	AuthenticodeBase_t2209899351::get_offset_of_coffSymbolTableOffset_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1532 = { sizeof (AuthenticodeDeformatter_t3210119886), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1532[12] = 
{
	AuthenticodeDeformatter_t3210119886::get_offset_of_filename_8(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_hash_9(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_coll_10(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_signedHash_11(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_timestamp_12(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_signingCertificate_13(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_reason_14(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_trustedRoot_15(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_trustedTimestampRoot_16(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_entry_17(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_signerChain_18(),
	AuthenticodeDeformatter_t3210119886::get_offset_of_timestampChain_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1533 = { sizeof (BigInteger_t3424891946), -1, sizeof(BigInteger_t3424891946_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1533[4] = 
{
	BigInteger_t3424891946::get_offset_of_length_0(),
	BigInteger_t3424891946::get_offset_of_data_1(),
	BigInteger_t3424891946_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t3424891946_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1534 = { sizeof (Sign_t2028550566)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1534[4] = 
{
	Sign_t2028550566::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1535 = { sizeof (ModulusRing_t2288836809), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1535[2] = 
{
	ModulusRing_t2288836809::get_offset_of_mod_0(),
	ModulusRing_t2288836809::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1536 = { sizeof (Kernel_t251016117), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1537 = { sizeof (ConfidenceFactor_t2362333458)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1537[7] = 
{
	ConfidenceFactor_t2362333458::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1538 = { sizeof (PrimalityTest_t3335271311), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1539 = { sizeof (PrimalityTests_t388720861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1540 = { sizeof (PrimeGeneratorBase_t1480341072), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1541 = { sizeof (SequentialSearchPrimeGeneratorBase_t3912118356), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1542 = { sizeof (CodePointIndexer_t413203008), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1542[4] = 
{
	CodePointIndexer_t413203008::get_offset_of_ranges_0(),
	CodePointIndexer_t413203008::get_offset_of_TotalCount_1(),
	CodePointIndexer_t413203008::get_offset_of_defaultIndex_2(),
	CodePointIndexer_t413203008::get_offset_of_defaultCP_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1543 = { sizeof (TableRange_t727234929)+ sizeof (RuntimeObject), sizeof(TableRange_t727234929 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1543[5] = 
{
	TableRange_t727234929::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t727234929::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t727234929::get_offset_of_Count_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t727234929::get_offset_of_IndexStart_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TableRange_t727234929::get_offset_of_IndexEnd_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1544 = { sizeof (TailoringInfo_t3412058934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1544[4] = 
{
	TailoringInfo_t3412058934::get_offset_of_LCID_0(),
	TailoringInfo_t3412058934::get_offset_of_TailoringIndex_1(),
	TailoringInfo_t3412058934::get_offset_of_TailoringCount_2(),
	TailoringInfo_t3412058934::get_offset_of_FrenchSort_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1545 = { sizeof (Contraction_t2043761403), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1545[4] = 
{
	Contraction_t2043761403::get_offset_of_Index_0(),
	Contraction_t2043761403::get_offset_of_Source_1(),
	Contraction_t2043761403::get_offset_of_Replacement_2(),
	Contraction_t2043761403::get_offset_of_SortKey_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1546 = { sizeof (ContractionComparer_t529643123), -1, sizeof(ContractionComparer_t529643123_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1546[1] = 
{
	ContractionComparer_t529643123_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1547 = { sizeof (Level2Map_t3216195167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1547[2] = 
{
	Level2Map_t3216195167::get_offset_of_Source_0(),
	Level2Map_t3216195167::get_offset_of_Replace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1548 = { sizeof (MSCompatUnicodeTable_t1596958875), -1, sizeof(MSCompatUnicodeTable_t1596958875_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1548[19] = 
{
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_MaxExpansionLength_0(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_ignorableFlags_1(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_categories_2(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_level1_3(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_level2_4(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_level3_5(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkCHScategory_6(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkCHTcategory_7(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkJAcategory_8(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkKOcategory_9(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkCHSlv1_10(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkCHTlv1_11(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkJAlv1_12(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkKOlv1_13(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_cjkKOlv2_14(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_tailoringArr_15(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_tailoringInfos_16(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_forLock_17(),
	MSCompatUnicodeTable_t1596958875_StaticFields::get_offset_of_isReady_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1549 = { sizeof (U3CU3Ec_t3608589119), -1, sizeof(U3CU3Ec_t3608589119_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1549[2] = 
{
	U3CU3Ec_t3608589119_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3608589119_StaticFields::get_offset_of_U3CU3E9__17_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1550 = { sizeof (MSCompatUnicodeTableUtil_t1531483003), -1, sizeof(MSCompatUnicodeTableUtil_t1531483003_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1550[7] = 
{
	MSCompatUnicodeTableUtil_t1531483003_StaticFields::get_offset_of_Ignorable_0(),
	MSCompatUnicodeTableUtil_t1531483003_StaticFields::get_offset_of_Category_1(),
	MSCompatUnicodeTableUtil_t1531483003_StaticFields::get_offset_of_Level1_2(),
	MSCompatUnicodeTableUtil_t1531483003_StaticFields::get_offset_of_Level2_3(),
	MSCompatUnicodeTableUtil_t1531483003_StaticFields::get_offset_of_Level3_4(),
	MSCompatUnicodeTableUtil_t1531483003_StaticFields::get_offset_of_CjkCHS_5(),
	MSCompatUnicodeTableUtil_t1531483003_StaticFields::get_offset_of_Cjk_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1551 = { sizeof (SimpleCollator_t1763318688), -1, sizeof(SimpleCollator_t1763318688_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1551[13] = 
{
	SimpleCollator_t1763318688_StaticFields::get_offset_of_QuickCheckDisabled_0(),
	SimpleCollator_t1763318688_StaticFields::get_offset_of_invariant_1(),
	SimpleCollator_t1763318688::get_offset_of_textInfo_2(),
	SimpleCollator_t1763318688::get_offset_of_cjkIndexer_3(),
	SimpleCollator_t1763318688::get_offset_of_contractions_4(),
	SimpleCollator_t1763318688::get_offset_of_level2Maps_5(),
	SimpleCollator_t1763318688::get_offset_of_unsafeFlags_6(),
	SimpleCollator_t1763318688::get_offset_of_cjkCatTable_7(),
	SimpleCollator_t1763318688::get_offset_of_cjkLv1Table_8(),
	SimpleCollator_t1763318688::get_offset_of_cjkLv2Table_9(),
	SimpleCollator_t1763318688::get_offset_of_cjkLv2Indexer_10(),
	SimpleCollator_t1763318688::get_offset_of_lcid_11(),
	SimpleCollator_t1763318688::get_offset_of_frenchSort_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1552 = { sizeof (Context_t1039318745)+ sizeof (RuntimeObject), sizeof(Context_t1039318745_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1552[7] = 
{
	Context_t1039318745::get_offset_of_Option_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1039318745::get_offset_of_NeverMatchFlags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1039318745::get_offset_of_AlwaysMatchFlags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1039318745::get_offset_of_Buffer1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1039318745::get_offset_of_Buffer2_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1039318745::get_offset_of_PrevCode_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Context_t1039318745::get_offset_of_PrevSortKey_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1553 = { sizeof (PreviousInfo_t2096251989)+ sizeof (RuntimeObject), sizeof(PreviousInfo_t2096251989_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1553[2] = 
{
	PreviousInfo_t2096251989::get_offset_of_Code_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PreviousInfo_t2096251989::get_offset_of_SortKey_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1554 = { sizeof (Escape_t570209192)+ sizeof (RuntimeObject), sizeof(Escape_t570209192_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1554[5] = 
{
	Escape_t570209192::get_offset_of_Source_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t570209192::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t570209192::get_offset_of_Start_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t570209192::get_offset_of_End_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Escape_t570209192::get_offset_of_Optional_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1555 = { sizeof (ExtenderType_t3320060819)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1555[6] = 
{
	ExtenderType_t3320060819::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1556 = { sizeof (SortKeyBuffer_t1269840279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1556[22] = 
{
	SortKeyBuffer_t1269840279::get_offset_of_l1b_0(),
	SortKeyBuffer_t1269840279::get_offset_of_l2b_1(),
	SortKeyBuffer_t1269840279::get_offset_of_l3b_2(),
	SortKeyBuffer_t1269840279::get_offset_of_l4sb_3(),
	SortKeyBuffer_t1269840279::get_offset_of_l4tb_4(),
	SortKeyBuffer_t1269840279::get_offset_of_l4kb_5(),
	SortKeyBuffer_t1269840279::get_offset_of_l4wb_6(),
	SortKeyBuffer_t1269840279::get_offset_of_l5b_7(),
	SortKeyBuffer_t1269840279::get_offset_of_source_8(),
	SortKeyBuffer_t1269840279::get_offset_of_l1_9(),
	SortKeyBuffer_t1269840279::get_offset_of_l2_10(),
	SortKeyBuffer_t1269840279::get_offset_of_l3_11(),
	SortKeyBuffer_t1269840279::get_offset_of_l4s_12(),
	SortKeyBuffer_t1269840279::get_offset_of_l4t_13(),
	SortKeyBuffer_t1269840279::get_offset_of_l4k_14(),
	SortKeyBuffer_t1269840279::get_offset_of_l4w_15(),
	SortKeyBuffer_t1269840279::get_offset_of_l5_16(),
	SortKeyBuffer_t1269840279::get_offset_of_lcid_17(),
	SortKeyBuffer_t1269840279::get_offset_of_options_18(),
	SortKeyBuffer_t1269840279::get_offset_of_processLevel2_19(),
	SortKeyBuffer_t1269840279::get_offset_of_frenchSort_20(),
	SortKeyBuffer_t1269840279::get_offset_of_frenchSorted_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1557 = { sizeof (NormalizationTableUtil_t3675139979), -1, sizeof(NormalizationTableUtil_t3675139979_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1557[5] = 
{
	NormalizationTableUtil_t3675139979_StaticFields::get_offset_of_Prop_0(),
	NormalizationTableUtil_t3675139979_StaticFields::get_offset_of_Map_1(),
	NormalizationTableUtil_t3675139979_StaticFields::get_offset_of_Combining_2(),
	NormalizationTableUtil_t3675139979_StaticFields::get_offset_of_Composite_3(),
	NormalizationTableUtil_t3675139979_StaticFields::get_offset_of_Helper_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1558 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1559 = { sizeof (RegistryKey_t3425007057), -1, sizeof(RegistryKey_t3425007057_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1559[7] = 
{
	RegistryKey_t3425007057::get_offset_of_handle_1(),
	RegistryKey_t3425007057::get_offset_of_safe_handle_2(),
	RegistryKey_t3425007057::get_offset_of_hive_3(),
	RegistryKey_t3425007057::get_offset_of_qname_4(),
	RegistryKey_t3425007057::get_offset_of_isRemoteRoot_5(),
	RegistryKey_t3425007057::get_offset_of_isWritable_6(),
	RegistryKey_t3425007057_StaticFields::get_offset_of_RegistryApi_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1560 = { sizeof (RegistryKeyPermissionCheck_t2168541285)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1560[4] = 
{
	RegistryKeyPermissionCheck_t2168541285::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1561 = { sizeof (Registry_t2958990643), -1, sizeof(Registry_t2958990643_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1561[7] = 
{
	Registry_t2958990643_StaticFields::get_offset_of_ClassesRoot_0(),
	Registry_t2958990643_StaticFields::get_offset_of_CurrentConfig_1(),
	Registry_t2958990643_StaticFields::get_offset_of_CurrentUser_2(),
	Registry_t2958990643_StaticFields::get_offset_of_DynData_3(),
	Registry_t2958990643_StaticFields::get_offset_of_LocalMachine_4(),
	Registry_t2958990643_StaticFields::get_offset_of_PerformanceData_5(),
	Registry_t2958990643_StaticFields::get_offset_of_Users_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1562 = { sizeof (RegistryHive_t2213724187)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1562[8] = 
{
	RegistryHive_t2213724187::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1563 = { sizeof (RegistryValueKind_t3037806794)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1563[9] = 
{
	RegistryValueKind_t3037806794::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1564 = { sizeof (RegistryValueOptions_t2006255671)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1564[3] = 
{
	RegistryValueOptions_t2006255671::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1565 = { sizeof (ExpandString_t2783439793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1565[1] = 
{
	ExpandString_t2783439793::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1566 = { sizeof (RegistryKeyComparer_t3681817069), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1567 = { sizeof (KeyHandler_t507701665), -1, sizeof(KeyHandler_t507701665_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1567[10] = 
{
	KeyHandler_t507701665_StaticFields::get_offset_of_key_to_handler_0(),
	KeyHandler_t507701665_StaticFields::get_offset_of_dir_to_handler_1(),
	KeyHandler_t507701665::get_offset_of_Dir_2(),
	KeyHandler_t507701665::get_offset_of_ActualDir_3(),
	KeyHandler_t507701665::get_offset_of_IsVolatile_4(),
	KeyHandler_t507701665::get_offset_of_values_5(),
	KeyHandler_t507701665::get_offset_of_file_6(),
	KeyHandler_t507701665::get_offset_of_dirty_7(),
	KeyHandler_t507701665_StaticFields::get_offset_of_user_store_8(),
	KeyHandler_t507701665_StaticFields::get_offset_of_machine_store_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1568 = { sizeof (UnixRegistryApi_t3151315820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1569 = { sizeof (Win32RegistryApi_t185362464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1569[1] = 
{
	Win32RegistryApi_t185362464::get_offset_of_NativeBytesPerCharacter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1570 = { sizeof (SafeLibraryHandle_t25987551), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1571 = { sizeof (UnsafeNativeMethods_t1413630486), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1572 = { sizeof (Win32Native_t4026409549), -1, sizeof(Win32Native_t4026409549_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1572[2] = 
{
	Win32Native_t4026409549_StaticFields::get_offset_of_INVALID_HANDLE_VALUE_0(),
	Win32Native_t4026409549_StaticFields::get_offset_of_ThreadErrorModeMinOsVersion_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1573 = { sizeof (RegistryTimeZoneInformation_t1379238577)+ sizeof (RuntimeObject), sizeof(RegistryTimeZoneInformation_t1379238577 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1573[5] = 
{
	RegistryTimeZoneInformation_t1379238577::get_offset_of_Bias_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RegistryTimeZoneInformation_t1379238577::get_offset_of_StandardBias_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RegistryTimeZoneInformation_t1379238577::get_offset_of_DaylightBias_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RegistryTimeZoneInformation_t1379238577::get_offset_of_StandardDate_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RegistryTimeZoneInformation_t1379238577::get_offset_of_DaylightDate_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1574 = { sizeof (WIN32_FIND_DATA_t4077751324), sizeof(WIN32_FIND_DATA_t4077751324_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1574[13] = 
{
	WIN32_FIND_DATA_t4077751324::get_offset_of_dwFileAttributes_0(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_ftCreationTime_dwLowDateTime_1(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_ftCreationTime_dwHighDateTime_2(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_ftLastAccessTime_dwLowDateTime_3(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_ftLastAccessTime_dwHighDateTime_4(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_ftLastWriteTime_dwLowDateTime_5(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_ftLastWriteTime_dwHighDateTime_6(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_nFileSizeHigh_7(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_nFileSizeLow_8(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_dwReserved0_9(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_dwReserved1_10(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_cFileName_11(),
	WIN32_FIND_DATA_t4077751324::get_offset_of_cAlternateFileName_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1575 = { sizeof (SafeFileHandle_t1761653369), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1576 = { sizeof (SafeFindHandle_t713246424), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1577 = { sizeof (SafeRegistryHandle_t2819695873), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1578 = { sizeof (SafeWaitHandle_t2184965948), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1579 = { sizeof (SafeHandleZeroOrMinusOneIsInvalid_t714783540), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1580 = { sizeof (U3CPrivateImplementationDetailsU3E_t1736982555), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1580[137] = 
{
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U30392525BCB01691D1F319D89F2C12BF93A478467_0(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U30588059ACBD52F7EA2835882F977A9CF72EB9775_1(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U30A1ADB22C1D3E1F4B2448EE3F27DF9DE63329C4C_2(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3121EC59E23F7559B28D338D562528F6299C2DE22_3(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U312D04472A8285260EA12FD3813CDFA9F2D2B548C_4(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U313A35EF1A549297C70E2AD46045BBD2ECA17852D_5(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U31730F09044E91DB8371B849EFF5E6D17BDE4AED0_6(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_7(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U31AEF3D8DF416A46288C91C724CBF7B154D9E5BF3_8(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U31E41C4CD0767AEA21C00DEABA2EA9407F1E6CEA5_9(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U31FE6CE411858B3D864679DE2139FB081F08BFACD_10(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3235D99572263B22ADFEE10FDA0C25E12F4D94FFC_11(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U325420D0055076FA8D3E4DD96BC53AE24DE6E619F_12(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U329C1A61550F0E3260E1953D4FAD71C256218EF40_13(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U32B33BEC8C30DFDC49DAFE20D3BDE19487850D717_14(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U32BA840FF6020B8FF623DBCB7188248CF853FAF4F_15(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U32C840AFA48C27B9C05593E468C1232CA1CC74AFD_16(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U32D1DA5BB407F0C11C3B5116196C0C6374D932B20_17(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U32D3CF0F15AC2DDEC2956EA1B7BBE43FB8B923130_18(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U32F71D2DA12F3CD0A6A112F5A5A75B4FDC6FE8547_19(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3320B018758ECE3752FFEDBAEB1A6DB67C80B9359_20(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U334476C29F6F81C989CFCA42F7C06E84C66236834_21(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U335EED060772F2748D13B745DAEC8CD7BD3B87604_22(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3375F9AE9769A3D1DA789E9ACFE81F3A1BB14F0D3_23(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3379C06C9E702D31469C29033F0DD63931EB349F5_24(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3399BD13E240F33F808CA7940293D6EC4E6FD5A00_25(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U339C9CE73C7B0619D409EF28344F687C1B5C130FE_26(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U33E3442C7396F3F2BB4C7348F4A2074C7DC677D68_27(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U33E823444D2DFECF0F90B436B88F02A533CB376F1_28(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U33FE6C283BCF384FD2C8789880DFF59664E2AB4A1_29(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U340981BAA39513E58B28DCF0103CC04DE2A0A0444_30(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U340E7C49413D261F3F38AD3A870C0AC69C8BDA048_31(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3421EC7E82F2967DF6CA8C3605514DC6F29EE5845_32(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3433175D38B13FFE177FDD661A309F1B528B3F6E2_33(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U346232052BC757E030490D851F265FB47FA100902_34(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U34858DB4AA76D3933F1CA9E6712D4FDB16903F628_35(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U34E3B533C39447AAEB59A8E48FABD7E15B5B5D195_36(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U34F7A8890F332B22B8DE0BD29D36FA7364748D76A_37(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3536422B321459B242ADED7240B7447E904E083E3_38(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U356DFA5053B3131883637F53219E7D88CCEF35949_39(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U357218C316B6921E2CD61027A2387EDC31A2D9471_40(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U357F320D62696EC99727E0FE2045A05F1289CC0C6_41(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3594A33A00BC4F785DFD43E3C6C44FBA1242CCAF3_42(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U35BBDF8058D4235C33F2E8DCF76004031B6187A2F_43(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U35BCD21C341BE6DDF8FFFAE1A23ABA24DCBB612BF_44(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U35BFE2819B4778217C56416C7585FF0E56EBACD89_45(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3609C0E8D8DA86A09D6013D301C86BA8782C16B8C_46(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U362BAB0F245E66C3EB982CF5A7015F0A7C3382283_47(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3646036A65DECCD6835C914A46E6E44B729433B60_48(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U365E32B4E150FD8D24B93B0D42A17F1DAD146162B_49(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U36770974FEF1E98B9C1864370E2B5B786EB0EA39E_50(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U367EEAD805D708D9AA4E14BF747E44CED801744F3_51(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U36C71197D228427B2864C69B357FEF73D8C9D59DF_52(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_53(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U36D797C11E1D4FB68B6570CF2A92B792433527065_54(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U36E5DC824F803F8565AF31B42199DAE39FE7F4EA9_55(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U36FC754859E4EC74E447048364B216D825C6F8FE7_56(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3704939CD172085D1295FCE3F1D92431D685D7AA2_57(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U37088AAE49F0627B72729078DE6E3182DDCF8ED99_58(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U37341C933A70EAE383CC50C4B945ADB8E08F06737_59(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3736D39815215889F11249D9958F6ED12D37B9F57_60(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U37F42F2EDC974BE29B2746957416ED1AEFA605F47_61(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U37FE820C9CF0F0B90445A71F1D262D22E4F0C4C68_62(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U381917F1E21F3C22B9F916994547A614FB03E968E_63(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3823566DA642D6EA356E15585921F2A4CA23D6760_64(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U382C2A59850B2E85BCE1A45A479537A384DF6098D_65(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U382C383F8E6E4D3D87AEBB986A5D0077E8AD157C4_66(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U386F4F563FA2C61798AE6238D789139739428463A_67(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3871B9CF85DB352BAADF12BAE8F19857683E385AC_68(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U389A040451C8CC5C8FB268BE44BDD74964C104155_69(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U38CAA092E783257106251246FF5C97F88D28517A6_70(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U38D231DD55FE1AD7631BBD0905A17D5EB616C2154_71(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U38E10AC2F34545DFBBF3FCBC06055D797A8C99991_72(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U38F22C9ECE1331718CBD268A9BBFD2F5E451441E3_73(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U390A0542282A011472F94E97CEAE59F8B3B1A3291_74(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U393A63E90605400F34B49F0EB3361D23C89164BDA_75(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U394841DD2F330CCB1089BF413E4FA9B04505152E2_76(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U395264589E48F94B7857CFF398FB72A537E13EEE2_77(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U395C48758CAE1715783472FB073AB158AB8A0AB2A_78(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U3973417296623D8DC6961B09664E54039E44CA5D8_79(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U397FB30C84FF4A41CD4625B44B2940BFC8DB43003_80(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U399E2E88877D14C7DDC4E957A0ED7079CA0E9EB24_81(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U39A9C3962CD4753376E3507C8CB5FD8FCC4B4EDB5_82(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_U39BB00D1FCCBAF03165447FC8028E7CA07CA9FE88_83(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_A0074C15377C0C870B055927403EA9FA7A349D12_84(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_A1319B706116AB2C6D44483F60A7D0ACEA543396_85(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_A13AA52274D951A18029131A8DDECF76B569A15D_86(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_A323DB0813C4D072957BA6FDA79D9776674CD06B_87(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_A5444763673307F6828C748D4B9708CFC02B0959_88(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_A6732F8E7FC23766AB329B492D6BF82E3B33233F_89(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_A705A106D95282BD15E13EEA6B0AF583FF786D83_90(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_A8A491E4CED49AE0027560476C10D933CE70C8DF_91(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_AC791C4F39504D1184B73478943D0636258DA7B1_92(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_AFCD4E1211233E99373A3367B23105A3D624B1F2_93(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_B472ED77CB3B2A66D49D179F1EE2081B70A6AB61_94(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_B4FBD02AAB5B16E0F4BD858DA5D9E348F3CE501D_95(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_B53A2C6DF21FC88B17AEFC40EB895B8D63210CDF_96(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_B6002BBF29B2704922EC3BBF0F9EE40ABF185D6B_97(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_B881DA88BE0B68D8A6B6B6893822586B8B2CFC45_98(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_B8F87834C3597B2EEF22BA6D3A392CC925636401_99(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_B9B670F134A59FB1107AF01A9FE8F8E3980B3093_100(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_BE1BDEC0AA74B4DCB079943E70528096CCA985F8_101(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_BEBC9ECC660A13EFC359BA3383411F698CFF25DB_102(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_BEE1CFE5DFAA408E14CE4AF4DCD824FA2E42DCB7_103(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_BF477463CE2F5EF38FC4C644BBBF4DF109E7670A_104(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_BF5EB60806ECB74EE484105DD9D6F463BF994867_105(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_C1A1100642BA9685B30A84D97348484E14AA1865_106(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_C35AB913B7CBEB243E050D1C7A61174F7C67D416_107(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_C6F364A0AD934EFED8909446C215752E565D77C1_108(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_CE5835130F5277F63D716FC9115526B0AC68FFAD_109(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_CE93C35B755802BC4B3D180716B048FC61701EF7_110(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_CF0B42666EF5E37EDEA0AB8E173E42C196D03814_111(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_D002CBBE1FF33721AF7C4D1D3ECAD1B7DB5258B7_112(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_D117188BE8D4609C0D531C51B0BB911A4219DEBE_113(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_D28E8ABDBD777A482CE0EE5C24814ACAE52AABFE_114(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_D76478B994B312CD022DCA207AA2254880D2FCC9_115(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_D78D08081C7A5AD6FBA7A8DC86BCD6D7A577C636_116(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_DA19DB47B583EFCF7825D2E39D661D2354F28219_117(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_DC2B830D8CD59AD6A4E4332D21CA0DCA2821AD82_118(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_119(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_E1827270A5FE1C85F5352A66FD87BA747213D006_120(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_E45BAB43F7D5D038672B3E3431F92E34A7AF2571_121(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_E75835D001C843F156FBA01B001DFE1B8029AC17_122(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_E92B39D8233061927D9ACDE54665E68E7535635A_123(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_EA9506959484C55CFE0C139C624DF6060E285866_124(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_EB237D93FA22EEE4936E8D363A0AD5117F5F3FB0_125(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_EB5E9A80A40096AB74D2E226650C7258D7BC5E9D_126(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_EBF68F411848D603D059DFDEA2321C5A5EA78044_127(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_EC5BB4F59D4B9B2E9ECD3904D44A8275F23AFB11_128(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_EC83FB16C20052BEE2B4025159BC2ED45C9C70C3_129(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_EC89C317EA2BF49A70EFF5E89C691E34733D7C37_130(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_F06E829E62F3AFBC045D064E10A4F5DF7C969612_131(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_F34B0E10653402E8F788F8BC3F7CD7090928A429_132(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_F37E34BEADB04F34FCC31078A59F49856CA83D5B_133(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_F512A9ABF88066AAEB92684F95CC05D8101B462B_134(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_F8FAABB821300AA500C2CEC6091B3782A7FB44A4_135(),
	U3CPrivateImplementationDetailsU3E_t1736982555_StaticFields::get_offset_of_FCBD2781A933F0828ED4AAF88FD8B08D76DDD49B_136(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1581 = { sizeof (__StaticArrayInitTypeSizeU3D3_t2610884860)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3_t2610884860 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1582 = { sizeof (__StaticArrayInitTypeSizeU3D6_t3233475679)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D6_t3233475679 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1583 = { sizeof (__StaticArrayInitTypeSizeU3D9_t3773403495)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t3773403495 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1584 = { sizeof (__StaticArrayInitTypeSizeU3D10_t577514998)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D10_t577514998 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1585 = { sizeof (__StaticArrayInitTypeSizeU3D12_t1040947147)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D12_t1040947147 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1586 = { sizeof (__StaticArrayInitTypeSizeU3D14_t959002123)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t959002123 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1587 = { sizeof (__StaticArrayInitTypeSizeU3D16_t3112835832)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D16_t3112835832 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1588 = { sizeof (__StaticArrayInitTypeSizeU3D20_t287997725)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D20_t287997725 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1589 = { sizeof (__StaticArrayInitTypeSizeU3D24_t2942451342)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D24_t2942451342 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1590 = { sizeof (__StaticArrayInitTypeSizeU3D32_t3021320602)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t3021320602 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1591 = { sizeof (__StaticArrayInitTypeSizeU3D36_t1175211245)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D36_t1175211245 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1592 = { sizeof (__StaticArrayInitTypeSizeU3D38_t4102847592)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D38_t4102847592 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1593 = { sizeof (__StaticArrayInitTypeSizeU3D40_t3331666755)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D40_t3331666755 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1594 = { sizeof (__StaticArrayInitTypeSizeU3D42_t203389744)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D42_t203389744 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1595 = { sizeof (__StaticArrayInitTypeSizeU3D44_t2924178629)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t2924178629 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1596 = { sizeof (__StaticArrayInitTypeSizeU3D48_t1017684765)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D48_t1017684765 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1597 = { sizeof (__StaticArrayInitTypeSizeU3D52_t3493798233)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D52_t3493798233 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1598 = { sizeof (__StaticArrayInitTypeSizeU3D56_t3117903646)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D56_t3117903646 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1599 = { sizeof (__StaticArrayInitTypeSizeU3D64_t705749310)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D64_t705749310 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
