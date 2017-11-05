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

// UnityEngine.Font
struct Font_t3612328043;
// UnityEngine.Material
struct Material_t3286089287;
// System.String[]
struct StringU5BU5D_t4060475322;
// System.String
struct String_t;
// System.Action`1<UnityEngine.Font>
struct Action_1_t3951062845;
// System.Delegate
struct Delegate_t147835305;
// System.Action`1<System.Object>
struct Action_1_t2694143500;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2551131392;
// System.IAsyncResult
struct IAsyncResult_t1272001935;
// System.AsyncCallback
struct AsyncCallback_t604134079;
// System.Void
struct Void_t4233125135;
// System.Char[]
struct CharU5BU5D_t1705485309;
// System.Byte[]
struct ByteU5BU5D_t3238143234;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2547442569;
// System.Delegate[]
struct DelegateU5BU5D_t1919448468;

extern RuntimeClass* Font_t3612328043_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3951062845_il2cpp_TypeInfo_var;
extern const uint32_t Font_add_textureRebuilt_m3189211211_MetadataUsageId;
extern const uint32_t Font_remove_textureRebuilt_m2662945837_MetadataUsageId;
extern const RuntimeMethod* Action_1_Invoke_m1070437316_RuntimeMethod_var;
extern const uint32_t Font_InvokeTextureRebuilt_Internal_m930507701_MetadataUsageId;

struct StringU5BU5D_t4060475322;
struct DelegateU5BU5D_t1919448468;


#ifndef U3CMODULEU3E_T62733102_H
#define U3CMODULEU3E_T62733102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t62733102 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T62733102_H
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
#ifndef BOOLEAN_T81383802_H
#define BOOLEAN_T81383802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t81383802 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t81383802, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t81383802_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t81383802_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t81383802_StaticFields, ___FalseString_6)); }
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
#endif // BOOLEAN_T81383802_H
#ifndef VOID_T4233125135_H
#define VOID_T4233125135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t4233125135 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t4233125135__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T4233125135_H
#ifndef SINGLE_T519720423_H
#define SINGLE_T519720423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t519720423 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t519720423, ___m_value_0)); }
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
#endif // SINGLE_T519720423_H
#ifndef INT32_T2524114617_H
#define INT32_T2524114617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2524114617 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2524114617, ___m_value_0)); }
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
#endif // INT32_T2524114617_H
#ifndef RECT_T1240988007_H
#define RECT_T1240988007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t1240988007 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t1240988007, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t1240988007, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t1240988007, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t1240988007, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T1240988007_H
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
#ifndef VECTOR2_T3936759321_H
#define VECTOR2_T3936759321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t3936759321 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t3936759321, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t3936759321, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t3936759321_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t3936759321  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t3936759321  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t3936759321  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t3936759321  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t3936759321  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t3936759321  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t3936759321  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t3936759321  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t3936759321_StaticFields, ___zeroVector_2)); }
	inline Vector2_t3936759321  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t3936759321 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t3936759321  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t3936759321_StaticFields, ___oneVector_3)); }
	inline Vector2_t3936759321  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t3936759321 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t3936759321  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t3936759321_StaticFields, ___upVector_4)); }
	inline Vector2_t3936759321  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t3936759321 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t3936759321  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t3936759321_StaticFields, ___downVector_5)); }
	inline Vector2_t3936759321  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t3936759321 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t3936759321  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t3936759321_StaticFields, ___leftVector_6)); }
	inline Vector2_t3936759321  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t3936759321 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t3936759321  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t3936759321_StaticFields, ___rightVector_7)); }
	inline Vector2_t3936759321  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t3936759321 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t3936759321  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t3936759321_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t3936759321  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t3936759321 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t3936759321  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t3936759321_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t3936759321  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t3936759321 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t3936759321  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T3936759321_H
#ifndef CHAR_T2912159412_H
#define CHAR_T2912159412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2912159412 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t2912159412, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t2912159412_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t3238143234* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t2912159412_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t3238143234* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t3238143234** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t3238143234* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2912159412_H
#ifndef FONTSTYLE_T3706660884_H
#define FONTSTYLE_T3706660884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t3706660884 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyle_t3706660884, ___value___2)); }
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
#endif // FONTSTYLE_T3706660884_H
#ifndef OBJECT_T1594141469_H
#define OBJECT_T1594141469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1594141469  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1594141469, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1594141469_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1594141469_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t1594141469_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1594141469_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1594141469_H
#ifndef DELEGATE_T147835305_H
#define DELEGATE_T147835305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t147835305  : public RuntimeObject
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
	DelegateData_t2547442569 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___data_9)); }
	inline DelegateData_t2547442569 * get_data_9() const { return ___data_9; }
	inline DelegateData_t2547442569 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t2547442569 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t147835305, ___method_is_virtual_10)); }
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
struct Delegate_t147835305_marshaled_pinvoke
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
	DelegateData_t2547442569 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t147835305_marshaled_com
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
	DelegateData_t2547442569 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T147835305_H
#ifndef MATERIAL_T3286089287_H
#define MATERIAL_T3286089287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t3286089287  : public Object_t1594141469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T3286089287_H
#ifndef FONT_T3612328043_H
#define FONT_T3612328043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t3612328043  : public Object_t1594141469
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2551131392 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t3612328043, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t2551131392 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t2551131392 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t2551131392 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_3), value);
	}
};

struct Font_t3612328043_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t3951062845 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t3612328043_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t3951062845 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t3951062845 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t3951062845 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T3612328043_H
#ifndef CHARACTERINFO_T105724164_H
#define CHARACTERINFO_T105724164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterInfo
struct  CharacterInfo_t105724164 
{
public:
	// System.Int32 UnityEngine.CharacterInfo::index
	int32_t ___index_0;
	// UnityEngine.Rect UnityEngine.CharacterInfo::uv
	Rect_t1240988007  ___uv_1;
	// UnityEngine.Rect UnityEngine.CharacterInfo::vert
	Rect_t1240988007  ___vert_2;
	// System.Single UnityEngine.CharacterInfo::width
	float ___width_3;
	// System.Int32 UnityEngine.CharacterInfo::size
	int32_t ___size_4;
	// UnityEngine.FontStyle UnityEngine.CharacterInfo::style
	int32_t ___style_5;
	// System.Boolean UnityEngine.CharacterInfo::flipped
	bool ___flipped_6;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(CharacterInfo_t105724164, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(CharacterInfo_t105724164, ___uv_1)); }
	inline Rect_t1240988007  get_uv_1() const { return ___uv_1; }
	inline Rect_t1240988007 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(Rect_t1240988007  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_vert_2() { return static_cast<int32_t>(offsetof(CharacterInfo_t105724164, ___vert_2)); }
	inline Rect_t1240988007  get_vert_2() const { return ___vert_2; }
	inline Rect_t1240988007 * get_address_of_vert_2() { return &___vert_2; }
	inline void set_vert_2(Rect_t1240988007  value)
	{
		___vert_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(CharacterInfo_t105724164, ___width_3)); }
	inline float get_width_3() const { return ___width_3; }
	inline float* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(float value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(CharacterInfo_t105724164, ___size_4)); }
	inline int32_t get_size_4() const { return ___size_4; }
	inline int32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(int32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_style_5() { return static_cast<int32_t>(offsetof(CharacterInfo_t105724164, ___style_5)); }
	inline int32_t get_style_5() const { return ___style_5; }
	inline int32_t* get_address_of_style_5() { return &___style_5; }
	inline void set_style_5(int32_t value)
	{
		___style_5 = value;
	}

	inline static int32_t get_offset_of_flipped_6() { return static_cast<int32_t>(offsetof(CharacterInfo_t105724164, ___flipped_6)); }
	inline bool get_flipped_6() const { return ___flipped_6; }
	inline bool* get_address_of_flipped_6() { return &___flipped_6; }
	inline void set_flipped_6(bool value)
	{
		___flipped_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CharacterInfo
struct CharacterInfo_t105724164_marshaled_pinvoke
{
	int32_t ___index_0;
	Rect_t1240988007  ___uv_1;
	Rect_t1240988007  ___vert_2;
	float ___width_3;
	int32_t ___size_4;
	int32_t ___style_5;
	int32_t ___flipped_6;
};
// Native definition for COM marshalling of UnityEngine.CharacterInfo
struct CharacterInfo_t105724164_marshaled_com
{
	int32_t ___index_0;
	Rect_t1240988007  ___uv_1;
	Rect_t1240988007  ___vert_2;
	float ___width_3;
	int32_t ___size_4;
	int32_t ___style_5;
	int32_t ___flipped_6;
};
#endif // CHARACTERINFO_T105724164_H
#ifndef MULTICASTDELEGATE_T225745329_H
#define MULTICASTDELEGATE_T225745329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t225745329  : public Delegate_t147835305
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1919448468* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t225745329, ___delegates_11)); }
	inline DelegateU5BU5D_t1919448468* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1919448468** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1919448468* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t225745329_marshaled_pinvoke : public Delegate_t147835305_marshaled_pinvoke
{
	DelegateU5BU5D_t1919448468* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t225745329_marshaled_com : public Delegate_t147835305_marshaled_com
{
	DelegateU5BU5D_t1919448468* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T225745329_H
#ifndef ACTION_1_T3951062845_H
#define ACTION_1_T3951062845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.Font>
struct  Action_1_t3951062845  : public MulticastDelegate_t225745329
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3951062845_H
#ifndef ASYNCCALLBACK_T604134079_H
#define ASYNCCALLBACK_T604134079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t604134079  : public MulticastDelegate_t225745329
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T604134079_H
#ifndef FONTTEXTUREREBUILDCALLBACK_T2551131392_H
#define FONTTEXTUREREBUILDCALLBACK_T2551131392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font/FontTextureRebuildCallback
struct  FontTextureRebuildCallback_t2551131392  : public MulticastDelegate_t225745329
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTTEXTUREREBUILDCALLBACK_T2551131392_H
// System.String[]
struct StringU5BU5D_t4060475322  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1919448468  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t147835305 * m_Items[1];

public:
	inline Delegate_t147835305 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t147835305 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t147835305 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t147835305 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t147835305 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t147835305 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m1221864080_gshared (Action_1_t2694143500 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C"  int32_t CharacterInfo_get_advance_m1916229073 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
extern "C"  float Rect_get_y_m933504663 (Rect_t1240988007 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1505811902 (Rect_t1240988007 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C"  int32_t CharacterInfo_get_minY_m2493645420 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C"  int32_t CharacterInfo_get_maxY_m4033080981 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
extern "C"  float Rect_get_x_m4206711913 (Rect_t1240988007 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C"  int32_t CharacterInfo_get_minX_m2836031912 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m448593059 (Rect_t1240988007 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C"  int32_t CharacterInfo_get_maxX_m991335938 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m814359456 (Vector2_t3936759321 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomLeftUnFlipped_m3272768891 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomRightUnFlipped_m1665557686 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopRightUnFlipped_m3815782618 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopLeftUnFlipped_m120447368 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomLeft_m1400826761 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomRight_m3273032303 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopRight_m2671724843 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopLeft_m2324300145 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t147835305 * Delegate_Combine_m866078210 (RuntimeObject * __this /* static, unused */, Delegate_t147835305 * p0, Delegate_t147835305 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t147835305 * Delegate_Remove_m518593858 (RuntimeObject * __this /* static, unused */, Delegate_t147835305 * p0, Delegate_t147835305 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.Font>::Invoke(!0)
#define Action_1_Invoke_m1070437316(__this, p0, method) ((  void (*) (Action_1_t3951062845 *, Font_t3612328043 *, const RuntimeMethod*))Action_1_Invoke_m1221864080_gshared)(__this, p0, method)
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C"  void FontTextureRebuildCallback_Invoke_m2872657626 (FontTextureRebuildCallback_t2551131392 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t105724164_marshal_pinvoke(const CharacterInfo_t105724164& unmarshaled, CharacterInfo_t105724164_marshaled_pinvoke& marshaled)
{
	marshaled.___index_0 = unmarshaled.get_index_0();
	marshaled.___uv_1 = unmarshaled.get_uv_1();
	marshaled.___vert_2 = unmarshaled.get_vert_2();
	marshaled.___width_3 = unmarshaled.get_width_3();
	marshaled.___size_4 = unmarshaled.get_size_4();
	marshaled.___style_5 = unmarshaled.get_style_5();
	marshaled.___flipped_6 = static_cast<int32_t>(unmarshaled.get_flipped_6());
}
extern "C" void CharacterInfo_t105724164_marshal_pinvoke_back(const CharacterInfo_t105724164_marshaled_pinvoke& marshaled, CharacterInfo_t105724164& unmarshaled)
{
	int32_t unmarshaled_index_temp_0 = 0;
	unmarshaled_index_temp_0 = marshaled.___index_0;
	unmarshaled.set_index_0(unmarshaled_index_temp_0);
	Rect_t1240988007  unmarshaled_uv_temp_1;
	memset(&unmarshaled_uv_temp_1, 0, sizeof(unmarshaled_uv_temp_1));
	unmarshaled_uv_temp_1 = marshaled.___uv_1;
	unmarshaled.set_uv_1(unmarshaled_uv_temp_1);
	Rect_t1240988007  unmarshaled_vert_temp_2;
	memset(&unmarshaled_vert_temp_2, 0, sizeof(unmarshaled_vert_temp_2));
	unmarshaled_vert_temp_2 = marshaled.___vert_2;
	unmarshaled.set_vert_2(unmarshaled_vert_temp_2);
	float unmarshaled_width_temp_3 = 0.0f;
	unmarshaled_width_temp_3 = marshaled.___width_3;
	unmarshaled.set_width_3(unmarshaled_width_temp_3);
	int32_t unmarshaled_size_temp_4 = 0;
	unmarshaled_size_temp_4 = marshaled.___size_4;
	unmarshaled.set_size_4(unmarshaled_size_temp_4);
	int32_t unmarshaled_style_temp_5 = 0;
	unmarshaled_style_temp_5 = marshaled.___style_5;
	unmarshaled.set_style_5(unmarshaled_style_temp_5);
	bool unmarshaled_flipped_temp_6 = false;
	unmarshaled_flipped_temp_6 = static_cast<bool>(marshaled.___flipped_6);
	unmarshaled.set_flipped_6(unmarshaled_flipped_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t105724164_marshal_pinvoke_cleanup(CharacterInfo_t105724164_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t105724164_marshal_com(const CharacterInfo_t105724164& unmarshaled, CharacterInfo_t105724164_marshaled_com& marshaled)
{
	marshaled.___index_0 = unmarshaled.get_index_0();
	marshaled.___uv_1 = unmarshaled.get_uv_1();
	marshaled.___vert_2 = unmarshaled.get_vert_2();
	marshaled.___width_3 = unmarshaled.get_width_3();
	marshaled.___size_4 = unmarshaled.get_size_4();
	marshaled.___style_5 = unmarshaled.get_style_5();
	marshaled.___flipped_6 = static_cast<int32_t>(unmarshaled.get_flipped_6());
}
extern "C" void CharacterInfo_t105724164_marshal_com_back(const CharacterInfo_t105724164_marshaled_com& marshaled, CharacterInfo_t105724164& unmarshaled)
{
	int32_t unmarshaled_index_temp_0 = 0;
	unmarshaled_index_temp_0 = marshaled.___index_0;
	unmarshaled.set_index_0(unmarshaled_index_temp_0);
	Rect_t1240988007  unmarshaled_uv_temp_1;
	memset(&unmarshaled_uv_temp_1, 0, sizeof(unmarshaled_uv_temp_1));
	unmarshaled_uv_temp_1 = marshaled.___uv_1;
	unmarshaled.set_uv_1(unmarshaled_uv_temp_1);
	Rect_t1240988007  unmarshaled_vert_temp_2;
	memset(&unmarshaled_vert_temp_2, 0, sizeof(unmarshaled_vert_temp_2));
	unmarshaled_vert_temp_2 = marshaled.___vert_2;
	unmarshaled.set_vert_2(unmarshaled_vert_temp_2);
	float unmarshaled_width_temp_3 = 0.0f;
	unmarshaled_width_temp_3 = marshaled.___width_3;
	unmarshaled.set_width_3(unmarshaled_width_temp_3);
	int32_t unmarshaled_size_temp_4 = 0;
	unmarshaled_size_temp_4 = marshaled.___size_4;
	unmarshaled.set_size_4(unmarshaled_size_temp_4);
	int32_t unmarshaled_style_temp_5 = 0;
	unmarshaled_style_temp_5 = marshaled.___style_5;
	unmarshaled.set_style_5(unmarshaled_style_temp_5);
	bool unmarshaled_flipped_temp_6 = false;
	unmarshaled_flipped_temp_6 = static_cast<bool>(marshaled.___flipped_6);
	unmarshaled.set_flipped_6(unmarshaled_flipped_temp_6);
}
// Conversion method for clean up from marshalling of: UnityEngine.CharacterInfo
extern "C" void CharacterInfo_t105724164_marshal_com_cleanup(CharacterInfo_t105724164_marshaled_com& marshaled)
{
}
// System.Int32 UnityEngine.CharacterInfo::get_advance()
extern "C"  int32_t CharacterInfo_get_advance_m1916229073 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float L_0 = __this->get_width_3();
		V_0 = (((int32_t)((int32_t)L_0)));
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t CharacterInfo_get_advance_m1916229073_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_advance_m1916229073(_thisAdjusted, method);
}
// System.Int32 UnityEngine.CharacterInfo::get_minY()
extern "C"  int32_t CharacterInfo_get_minY_m2493645420 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Rect_t1240988007 * L_0 = __this->get_address_of_vert_2();
		float L_1 = Rect_get_y_m933504663(L_0, /*hidden argument*/NULL);
		Rect_t1240988007 * L_2 = __this->get_address_of_vert_2();
		float L_3 = Rect_get_height_m1505811902(L_2, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)((float)((float)L_1+(float)L_3)))));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t CharacterInfo_get_minY_m2493645420_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_minY_m2493645420(_thisAdjusted, method);
}
// System.Int32 UnityEngine.CharacterInfo::get_maxY()
extern "C"  int32_t CharacterInfo_get_maxY_m4033080981 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Rect_t1240988007 * L_0 = __this->get_address_of_vert_2();
		float L_1 = Rect_get_y_m933504663(L_0, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_1)));
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
extern "C"  int32_t CharacterInfo_get_maxY_m4033080981_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_maxY_m4033080981(_thisAdjusted, method);
}
// System.Int32 UnityEngine.CharacterInfo::get_minX()
extern "C"  int32_t CharacterInfo_get_minX_m2836031912 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Rect_t1240988007 * L_0 = __this->get_address_of_vert_2();
		float L_1 = Rect_get_x_m4206711913(L_0, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_1)));
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
extern "C"  int32_t CharacterInfo_get_minX_m2836031912_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_minX_m2836031912(_thisAdjusted, method);
}
// System.Int32 UnityEngine.CharacterInfo::get_maxX()
extern "C"  int32_t CharacterInfo_get_maxX_m991335938 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Rect_t1240988007 * L_0 = __this->get_address_of_vert_2();
		float L_1 = Rect_get_x_m4206711913(L_0, /*hidden argument*/NULL);
		Rect_t1240988007 * L_2 = __this->get_address_of_vert_2();
		float L_3 = Rect_get_width_m448593059(L_2, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)((float)((float)L_1+(float)L_3)))));
		goto IL_001f;
	}

IL_001f:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t CharacterInfo_get_maxX_m991335938_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_maxX_m991335938(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeftUnFlipped()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomLeftUnFlipped_m3272768891 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	Vector2_t3936759321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rect_t1240988007 * L_0 = __this->get_address_of_uv_1();
		float L_1 = Rect_get_x_m4206711913(L_0, /*hidden argument*/NULL);
		Rect_t1240988007 * L_2 = __this->get_address_of_uv_1();
		float L_3 = Rect_get_y_m933504663(L_2, /*hidden argument*/NULL);
		Vector2_t3936759321  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m814359456((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_0022:
	{
		Vector2_t3936759321  L_5 = V_0;
		return L_5;
	}
}
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomLeftUnFlipped_m3272768891_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_uvBottomLeftUnFlipped_m3272768891(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRightUnFlipped()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomRightUnFlipped_m1665557686 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	Vector2_t3936759321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rect_t1240988007 * L_0 = __this->get_address_of_uv_1();
		float L_1 = Rect_get_x_m4206711913(L_0, /*hidden argument*/NULL);
		Rect_t1240988007 * L_2 = __this->get_address_of_uv_1();
		float L_3 = Rect_get_width_m448593059(L_2, /*hidden argument*/NULL);
		Rect_t1240988007 * L_4 = __this->get_address_of_uv_1();
		float L_5 = Rect_get_y_m933504663(L_4, /*hidden argument*/NULL);
		Vector2_t3936759321  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m814359456((&L_6), ((float)((float)L_1+(float)L_3)), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		Vector2_t3936759321  L_7 = V_0;
		return L_7;
	}
}
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomRightUnFlipped_m1665557686_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_uvBottomRightUnFlipped_m1665557686(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRightUnFlipped()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopRightUnFlipped_m3815782618 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	Vector2_t3936759321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rect_t1240988007 * L_0 = __this->get_address_of_uv_1();
		float L_1 = Rect_get_x_m4206711913(L_0, /*hidden argument*/NULL);
		Rect_t1240988007 * L_2 = __this->get_address_of_uv_1();
		float L_3 = Rect_get_width_m448593059(L_2, /*hidden argument*/NULL);
		Rect_t1240988007 * L_4 = __this->get_address_of_uv_1();
		float L_5 = Rect_get_y_m933504663(L_4, /*hidden argument*/NULL);
		Rect_t1240988007 * L_6 = __this->get_address_of_uv_1();
		float L_7 = Rect_get_height_m1505811902(L_6, /*hidden argument*/NULL);
		Vector2_t3936759321  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector2__ctor_m814359456((&L_8), ((float)((float)L_1+(float)L_3)), ((float)((float)L_5+(float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003a;
	}

IL_003a:
	{
		Vector2_t3936759321  L_9 = V_0;
		return L_9;
	}
}
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopRightUnFlipped_m3815782618_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_uvTopRightUnFlipped_m3815782618(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeftUnFlipped()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopLeftUnFlipped_m120447368 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	Vector2_t3936759321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rect_t1240988007 * L_0 = __this->get_address_of_uv_1();
		float L_1 = Rect_get_x_m4206711913(L_0, /*hidden argument*/NULL);
		Rect_t1240988007 * L_2 = __this->get_address_of_uv_1();
		float L_3 = Rect_get_y_m933504663(L_2, /*hidden argument*/NULL);
		Rect_t1240988007 * L_4 = __this->get_address_of_uv_1();
		float L_5 = Rect_get_height_m1505811902(L_4, /*hidden argument*/NULL);
		Vector2_t3936759321  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m814359456((&L_6), L_1, ((float)((float)L_3+(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		Vector2_t3936759321  L_7 = V_0;
		return L_7;
	}
}
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopLeftUnFlipped_m120447368_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_uvTopLeftUnFlipped_m120447368(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomLeft()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomLeft_m1400826761 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	Vector2_t3936759321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t3936759321  L_0 = CharacterInfo_get_uvBottomLeftUnFlipped_m3272768891(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t3936759321  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomLeft_m1400826761_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_uvBottomLeft_m1400826761(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvBottomRight()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomRight_m3273032303 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	Vector2_t3936759321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t3936759321  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		bool L_0 = __this->get_flipped_6();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t3936759321  L_1 = CharacterInfo_get_uvTopLeftUnFlipped_m120447368(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0017:
	{
		Vector2_t3936759321  L_2 = CharacterInfo_get_uvBottomRightUnFlipped_m1665557686(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t3936759321  L_3 = V_0;
		return L_3;
	}
}
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvBottomRight_m3273032303_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_uvBottomRight_m3273032303(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopRight()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopRight_m2671724843 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	Vector2_t3936759321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t3936759321  L_0 = CharacterInfo_get_uvTopRightUnFlipped_m3815782618(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t3936759321  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopRight_m2671724843_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_uvTopRight_m2671724843(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.CharacterInfo::get_uvTopLeft()
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopLeft_m2324300145 (CharacterInfo_t105724164 * __this, const RuntimeMethod* method)
{
	Vector2_t3936759321  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t3936759321  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		bool L_0 = __this->get_flipped_6();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Vector2_t3936759321  L_1 = CharacterInfo_get_uvBottomRightUnFlipped_m1665557686(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001d;
	}

IL_0017:
	{
		Vector2_t3936759321  L_2 = CharacterInfo_get_uvTopLeftUnFlipped_m120447368(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t3936759321  L_3 = V_0;
		return L_3;
	}
}
extern "C"  Vector2_t3936759321  CharacterInfo_get_uvTopLeft_m2324300145_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	CharacterInfo_t105724164 * _thisAdjusted = reinterpret_cast<CharacterInfo_t105724164 *>(__this + 1);
	return CharacterInfo_get_uvTopLeft_m2324300145(_thisAdjusted, method);
}
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C"  Material_t3286089287 * Font_get_material_m3722590976 (Font_t3612328043 * __this, const RuntimeMethod* method)
{
	typedef Material_t3286089287 * (*Font_get_material_m3722590976_ftn) (Font_t3612328043 *);
	static Font_get_material_m3722590976_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_material_m3722590976_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_material()");
	Material_t3286089287 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String[] UnityEngine.Font::get_fontNames()
extern "C"  StringU5BU5D_t4060475322* Font_get_fontNames_m1593122627 (Font_t3612328043 * __this, const RuntimeMethod* method)
{
	typedef StringU5BU5D_t4060475322* (*Font_get_fontNames_m1593122627_ftn) (Font_t3612328043 *);
	static Font_get_fontNames_m1593122627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_get_fontNames_m1593122627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::get_fontNames()");
	StringU5BU5D_t4060475322* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C"  void Font_RequestCharactersInTexture_m436170151 (Font_t3612328043 * __this, String_t* ___characters0, int32_t ___size1, int32_t ___style2, const RuntimeMethod* method)
{
	typedef void (*Font_RequestCharactersInTexture_m436170151_ftn) (Font_t3612328043 *, String_t*, int32_t, int32_t);
	static Font_RequestCharactersInTexture_m436170151_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_RequestCharactersInTexture_m436170151_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)");
	_il2cpp_icall_func(__this, ___characters0, ___size1, ___style2);
}
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_add_textureRebuilt_m3189211211 (RuntimeObject * __this /* static, unused */, Action_1_t3951062845 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Font_add_textureRebuilt_m3189211211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3951062845 * V_0 = NULL;
	Action_1_t3951062845 * V_1 = NULL;
	{
		Action_1_t3951062845 * L_0 = ((Font_t3612328043_StaticFields*)il2cpp_codegen_static_fields_for(Font_t3612328043_il2cpp_TypeInfo_var))->get_textureRebuilt_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3951062845 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t3951062845 * L_2 = V_1;
		Action_1_t3951062845 * L_3 = ___value0;
		Delegate_t147835305 * L_4 = Delegate_Combine_m866078210(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t3951062845 * L_5 = V_0;
		Action_1_t3951062845 * L_6 = InterlockedCompareExchangeImpl<Action_1_t3951062845 *>((((Font_t3612328043_StaticFields*)il2cpp_codegen_static_fields_for(Font_t3612328043_il2cpp_TypeInfo_var))->get_address_of_textureRebuilt_2()), ((Action_1_t3951062845 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t3951062845_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t3951062845 * L_7 = V_0;
		Action_1_t3951062845 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3951062845 *)L_7) == ((RuntimeObject*)(Action_1_t3951062845 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C"  void Font_remove_textureRebuilt_m2662945837 (RuntimeObject * __this /* static, unused */, Action_1_t3951062845 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Font_remove_textureRebuilt_m2662945837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3951062845 * V_0 = NULL;
	Action_1_t3951062845 * V_1 = NULL;
	{
		Action_1_t3951062845 * L_0 = ((Font_t3612328043_StaticFields*)il2cpp_codegen_static_fields_for(Font_t3612328043_il2cpp_TypeInfo_var))->get_textureRebuilt_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3951062845 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t3951062845 * L_2 = V_1;
		Action_1_t3951062845 * L_3 = ___value0;
		Delegate_t147835305 * L_4 = Delegate_Remove_m518593858(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t3951062845 * L_5 = V_0;
		Action_1_t3951062845 * L_6 = InterlockedCompareExchangeImpl<Action_1_t3951062845 *>((((Font_t3612328043_StaticFields*)il2cpp_codegen_static_fields_for(Font_t3612328043_il2cpp_TypeInfo_var))->get_address_of_textureRebuilt_2()), ((Action_1_t3951062845 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t3951062845_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t3951062845 * L_7 = V_0;
		Action_1_t3951062845 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3951062845 *)L_7) == ((RuntimeObject*)(Action_1_t3951062845 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C"  void Font_InvokeTextureRebuilt_Internal_m930507701 (RuntimeObject * __this /* static, unused */, Font_t3612328043 * ___font0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Font_InvokeTextureRebuilt_Internal_m930507701_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3951062845 * V_0 = NULL;
	{
		Action_1_t3951062845 * L_0 = ((Font_t3612328043_StaticFields*)il2cpp_codegen_static_fields_for(Font_t3612328043_il2cpp_TypeInfo_var))->get_textureRebuilt_2();
		V_0 = L_0;
		Action_1_t3951062845 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		Action_1_t3951062845 * L_2 = V_0;
		Font_t3612328043 * L_3 = ___font0;
		NullCheck(L_2);
		Action_1_Invoke_m1070437316(L_2, L_3, /*hidden argument*/Action_1_Invoke_m1070437316_RuntimeMethod_var);
	}

IL_0014:
	{
		Font_t3612328043 * L_4 = ___font0;
		NullCheck(L_4);
		FontTextureRebuildCallback_t2551131392 * L_5 = L_4->get_m_FontTextureRebuildCallback_3();
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		Font_t3612328043 * L_6 = ___font0;
		NullCheck(L_6);
		FontTextureRebuildCallback_t2551131392 * L_7 = L_6->get_m_FontTextureRebuildCallback_3();
		NullCheck(L_7);
		FontTextureRebuildCallback_Invoke_m2872657626(L_7, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C"  bool Font_GetCharacterInfo_m2235733136 (Font_t3612328043 * __this, Il2CppChar ___ch0, CharacterInfo_t105724164 * ___info1, int32_t ___size2, int32_t ___style3, const RuntimeMethod* method)
{
	typedef bool (*Font_GetCharacterInfo_m2235733136_ftn) (Font_t3612328043 *, Il2CppChar, CharacterInfo_t105724164 *, int32_t, int32_t);
	static Font_GetCharacterInfo_m2235733136_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Font_GetCharacterInfo_m2235733136_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)");
	bool retVal = _il2cpp_icall_func(__this, ___ch0, ___info1, ___size2, ___style3);
	return retVal;
}
extern "C"  void DelegatePInvokeWrapper_FontTextureRebuildCallback_t2551131392 (FontTextureRebuildCallback_t2551131392 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void FontTextureRebuildCallback__ctor_m3412992447 (FontTextureRebuildCallback_t2551131392 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C"  void FontTextureRebuildCallback_Invoke_m2872657626 (FontTextureRebuildCallback_t2551131392 * __this, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1919448468* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t147835305* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(currentDelegate->get_method_3()));
			bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(currentDelegate->get_method_3()));
			if ((currentDelegate->get_m_target_2() != NULL || MethodHasParameters((RuntimeMethod*)(currentDelegate->get_method_3()))) && ___methodIsStatic)
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(NULL,currentDelegate->get_m_target_2(),(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
			else
			{
				typedef void (*FunctionPointerType) (void* __this, const RuntimeMethod* method);
				((FunctionPointerType)currentDelegate->get_method_ptr_0())(currentDelegate->get_m_target_2(),(RuntimeMethod*)(currentDelegate->get_method_3()));
			}
		}
	}
	else
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
		bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
		if ((__this->get_m_target_2() != NULL || MethodHasParameters((RuntimeMethod*)(__this->get_method_3()))) && ___methodIsStatic)
		{
			typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),(RuntimeMethod*)(__this->get_method_3()));
		}
		else
		{
			typedef void (*FunctionPointerType) (void* __this, const RuntimeMethod* method);
			((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),(RuntimeMethod*)(__this->get_method_3()));
		}
	}
}
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* FontTextureRebuildCallback_BeginInvoke_m1932297985 (FontTextureRebuildCallback_t2551131392 * __this, AsyncCallback_t604134079 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C"  void FontTextureRebuildCallback_EndInvoke_m2252620050 (FontTextureRebuildCallback_t2551131392 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
