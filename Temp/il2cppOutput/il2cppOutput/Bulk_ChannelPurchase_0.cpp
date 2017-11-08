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

// UnityEngine.ChannelPurchase.PurchaseForwardCallback
struct PurchaseForwardCallback_t965680815;
// UnityEngine.ChannelPurchase.IPurchaseListener
struct IPurchaseListener_t3780400622;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t2984261597;
// System.String
struct String_t;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t2309813313;
// System.Object[]
struct ObjectU5BU5D_t2019706879;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t1221499129;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t1594441400;
// System.Void
struct Void_t634856565;

extern RuntimeClass* AndroidJavaProxy_t2984261597_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1590863281;
extern const uint32_t PurchaseForwardCallback__ctor_m2357658360_MetadataUsageId;
extern RuntimeClass* PurchaseForwardCallback_t965680815_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2019706879_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaObject_t2309813313_il2cpp_TypeInfo_var;
extern RuntimeClass* PurchaseService_t40596070_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AndroidJavaObject_Set_TisString_t_m2158410415_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral3612909160;
extern Il2CppCodeGenString* _stringLiteral1061040541;
extern Il2CppCodeGenString* _stringLiteral55277747;
extern Il2CppCodeGenString* _stringLiteral4112225389;
extern const uint32_t PurchaseService_Purchase_m2773802670_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3016753932;
extern const uint32_t PurchaseService_ValidateReceipt_m2991586974_MetadataUsageId;
extern RuntimeClass* AndroidJavaClass_t1221499129_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2688152214;
extern const uint32_t PurchaseService__cctor_m1556276844_MetadataUsageId;

struct ObjectU5BU5D_t2019706879;


#ifndef U3CMODULEU3E_T2540223391_H
#define U3CMODULEU3E_T2540223391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2540223391 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2540223391_H
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
#ifndef PURCHASESERVICE_T40596070_H
#define PURCHASESERVICE_T40596070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ChannelPurchase.PurchaseService
struct  PurchaseService_t40596070  : public RuntimeObject
{
public:

public:
};

struct PurchaseService_t40596070_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.ChannelPurchase.PurchaseService::serviceClass
	AndroidJavaClass_t1221499129 * ___serviceClass_0;

public:
	inline static int32_t get_offset_of_serviceClass_0() { return static_cast<int32_t>(offsetof(PurchaseService_t40596070_StaticFields, ___serviceClass_0)); }
	inline AndroidJavaClass_t1221499129 * get_serviceClass_0() const { return ___serviceClass_0; }
	inline AndroidJavaClass_t1221499129 ** get_address_of_serviceClass_0() { return &___serviceClass_0; }
	inline void set_serviceClass_0(AndroidJavaClass_t1221499129 * value)
	{
		___serviceClass_0 = value;
		Il2CppCodeGenWriteBarrier((&___serviceClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASESERVICE_T40596070_H
#ifndef ANDROIDJAVAOBJECT_T2309813313_H
#define ANDROIDJAVAOBJECT_T2309813313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t2309813313  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t1594441400 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t1594441400 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t2309813313, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t1594441400 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t1594441400 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t1594441400 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_jobject_1), value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t2309813313, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t1594441400 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t1594441400 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t1594441400 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_jclass_2), value);
	}
};

struct AndroidJavaObject_t2309813313_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::s_JavaLangClass
	AndroidJavaClass_t1221499129 * ___s_JavaLangClass_3;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t2309813313_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}

	inline static int32_t get_offset_of_s_JavaLangClass_3() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t2309813313_StaticFields, ___s_JavaLangClass_3)); }
	inline AndroidJavaClass_t1221499129 * get_s_JavaLangClass_3() const { return ___s_JavaLangClass_3; }
	inline AndroidJavaClass_t1221499129 ** get_address_of_s_JavaLangClass_3() { return &___s_JavaLangClass_3; }
	inline void set_s_JavaLangClass_3(AndroidJavaClass_t1221499129 * value)
	{
		___s_JavaLangClass_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangClass_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T2309813313_H
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
#ifndef ANDROIDJAVACLASS_T1221499129_H
#define ANDROIDJAVACLASS_T1221499129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t1221499129  : public AndroidJavaObject_t2309813313
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_T1221499129_H
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
#ifndef ANDROIDJAVAPROXY_T2984261597_H
#define ANDROIDJAVAPROXY_T2984261597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t2984261597  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t1221499129 * ___javaInterface_0;
	// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::proxyObject
	AndroidJavaObject_t2309813313 * ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2984261597, ___javaInterface_0)); }
	inline AndroidJavaClass_t1221499129 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t1221499129 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t1221499129 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((&___javaInterface_0), value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2984261597, ___proxyObject_1)); }
	inline AndroidJavaObject_t2309813313 * get_proxyObject_1() const { return ___proxyObject_1; }
	inline AndroidJavaObject_t2309813313 ** get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(AndroidJavaObject_t2309813313 * value)
	{
		___proxyObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___proxyObject_1), value);
	}
};

struct AndroidJavaProxy_t2984261597_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t1594441400 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2984261597_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t1594441400 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t1594441400 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t1594441400 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangSystemClass_2), value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2984261597_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAPROXY_T2984261597_H
#ifndef PURCHASEFORWARDCALLBACK_T965680815_H
#define PURCHASEFORWARDCALLBACK_T965680815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ChannelPurchase.PurchaseForwardCallback
struct  PurchaseForwardCallback_t965680815  : public AndroidJavaProxy_t2984261597
{
public:
	// UnityEngine.ChannelPurchase.IPurchaseListener UnityEngine.ChannelPurchase.PurchaseForwardCallback::purchaseListener
	RuntimeObject* ___purchaseListener_4;

public:
	inline static int32_t get_offset_of_purchaseListener_4() { return static_cast<int32_t>(offsetof(PurchaseForwardCallback_t965680815, ___purchaseListener_4)); }
	inline RuntimeObject* get_purchaseListener_4() const { return ___purchaseListener_4; }
	inline RuntimeObject** get_address_of_purchaseListener_4() { return &___purchaseListener_4; }
	inline void set_purchaseListener_4(RuntimeObject* value)
	{
		___purchaseListener_4 = value;
		Il2CppCodeGenWriteBarrier((&___purchaseListener_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASEFORWARDCALLBACK_T965680815_H
// System.Object[]
struct ObjectU5BU5D_t2019706879  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,!!0)
extern "C"  void AndroidJavaObject_Set_TisRuntimeObject_m2418420931_gshared (AndroidJavaObject_t2309813313 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
extern "C"  void AndroidJavaProxy__ctor_m712462465 (AndroidJavaProxy_t2984261597 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ChannelPurchase.PurchaseForwardCallback::.ctor(UnityEngine.ChannelPurchase.IPurchaseListener)
extern "C"  void PurchaseForwardCallback__ctor_m2357658360 (PurchaseForwardCallback_t965680815 * __this, RuntimeObject* ___purchaseListener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
extern "C"  void AndroidJavaObject__ctor_m2224927049 (AndroidJavaObject_t2309813313 * __this, String_t* p0, ObjectU5BU5D_t2019706879* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,!!0)
#define AndroidJavaObject_Set_TisString_t_m2158410415(__this, p0, p1, method) ((  void (*) (AndroidJavaObject_t2309813313 *, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m2418420931_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
extern "C"  void AndroidJavaObject_CallStatic_m3086946285 (AndroidJavaObject_t2309813313 * __this, String_t* p0, ObjectU5BU5D_t2019706879* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C"  void AndroidJavaClass__ctor_m2067426589 (AndroidJavaClass_t1221499129 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.ChannelPurchase.PurchaseForwardCallback::.ctor(UnityEngine.ChannelPurchase.IPurchaseListener)
extern "C"  void PurchaseForwardCallback__ctor_m2357658360 (PurchaseForwardCallback_t965680815 * __this, RuntimeObject* ___purchaseListener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseForwardCallback__ctor_m2357658360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t2984261597_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m712462465(__this, _stringLiteral1590863281, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___purchaseListener0;
		__this->set_purchaseListener_4(L_0);
		return;
	}
}
// System.Void UnityEngine.ChannelPurchase.PurchaseService::Purchase(System.String,System.String,UnityEngine.ChannelPurchase.IPurchaseListener)
extern "C"  void PurchaseService_Purchase_m2773802670 (RuntimeObject * __this /* static, unused */, String_t* ___productCode0, String_t* ___gameOrderId1, RuntimeObject* ___listener2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseService_Purchase_m2773802670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PurchaseForwardCallback_t965680815 * V_0 = NULL;
	AndroidJavaObject_t2309813313 * V_1 = NULL;
	{
		RuntimeObject* L_0 = ___listener2;
		PurchaseForwardCallback_t965680815 * L_1 = (PurchaseForwardCallback_t965680815 *)il2cpp_codegen_object_new(PurchaseForwardCallback_t965680815_il2cpp_TypeInfo_var);
		PurchaseForwardCallback__ctor_m2357658360(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AndroidJavaObject_t2309813313 * L_2 = (AndroidJavaObject_t2309813313 *)il2cpp_codegen_object_new(AndroidJavaObject_t2309813313_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m2224927049(L_2, _stringLiteral3612909160, ((ObjectU5BU5D_t2019706879*)SZArrayNew(ObjectU5BU5D_t2019706879_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		V_1 = L_2;
		AndroidJavaObject_t2309813313 * L_3 = V_1;
		String_t* L_4 = ___productCode0;
		NullCheck(L_3);
		AndroidJavaObject_Set_TisString_t_m2158410415(L_3, _stringLiteral1061040541, L_4, /*hidden argument*/AndroidJavaObject_Set_TisString_t_m2158410415_RuntimeMethod_var);
		AndroidJavaObject_t2309813313 * L_5 = V_1;
		String_t* L_6 = ___gameOrderId1;
		NullCheck(L_5);
		AndroidJavaObject_Set_TisString_t_m2158410415(L_5, _stringLiteral55277747, L_6, /*hidden argument*/AndroidJavaObject_Set_TisString_t_m2158410415_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(PurchaseService_t40596070_il2cpp_TypeInfo_var);
		AndroidJavaClass_t1221499129 * L_7 = ((PurchaseService_t40596070_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t40596070_il2cpp_TypeInfo_var))->get_serviceClass_0();
		ObjectU5BU5D_t2019706879* L_8 = ((ObjectU5BU5D_t2019706879*)SZArrayNew(ObjectU5BU5D_t2019706879_il2cpp_TypeInfo_var, (uint32_t)2));
		AndroidJavaObject_t2309813313 * L_9 = V_1;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2019706879* L_10 = L_8;
		PurchaseForwardCallback_t965680815 * L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		NullCheck(L_7);
		AndroidJavaObject_CallStatic_m3086946285(L_7, _stringLiteral4112225389, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ChannelPurchase.PurchaseService::ValidateReceipt(System.String,UnityEngine.ChannelPurchase.IPurchaseListener)
extern "C"  void PurchaseService_ValidateReceipt_m2991586974 (RuntimeObject * __this /* static, unused */, String_t* ___gameOrderId0, RuntimeObject* ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseService_ValidateReceipt_m2991586974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PurchaseForwardCallback_t965680815 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___listener1;
		PurchaseForwardCallback_t965680815 * L_1 = (PurchaseForwardCallback_t965680815 *)il2cpp_codegen_object_new(PurchaseForwardCallback_t965680815_il2cpp_TypeInfo_var);
		PurchaseForwardCallback__ctor_m2357658360(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(PurchaseService_t40596070_il2cpp_TypeInfo_var);
		AndroidJavaClass_t1221499129 * L_2 = ((PurchaseService_t40596070_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t40596070_il2cpp_TypeInfo_var))->get_serviceClass_0();
		ObjectU5BU5D_t2019706879* L_3 = ((ObjectU5BU5D_t2019706879*)SZArrayNew(ObjectU5BU5D_t2019706879_il2cpp_TypeInfo_var, (uint32_t)2));
		String_t* L_4 = ___gameOrderId0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2019706879* L_5 = L_3;
		PurchaseForwardCallback_t965680815 * L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_m3086946285(L_2, _stringLiteral3016753932, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.ChannelPurchase.PurchaseService::.cctor()
extern "C"  void PurchaseService__cctor_m1556276844 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseService__cctor_m1556276844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AndroidJavaClass_t1221499129 * L_0 = (AndroidJavaClass_t1221499129 *)il2cpp_codegen_object_new(AndroidJavaClass_t1221499129_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m2067426589(L_0, _stringLiteral2688152214, /*hidden argument*/NULL);
		((PurchaseService_t40596070_StaticFields*)il2cpp_codegen_static_fields_for(PurchaseService_t40596070_il2cpp_TypeInfo_var))->set_serviceClass_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
