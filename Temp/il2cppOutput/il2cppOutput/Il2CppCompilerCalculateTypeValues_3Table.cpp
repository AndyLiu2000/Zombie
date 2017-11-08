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

// System.Object[]
struct ObjectU5BU5D_t2019706879;
// System.Int32[]
struct Int32U5BU5D_t1276023077;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t2911326458;
// System.Collections.Queue
struct Queue_t2200790801;
// System.Collections.ArrayList
struct ArrayList_t1409763451;
// System.Collections.IComparer
struct IComparer_t3032127750;
// System.Collections.SortedList/KeyList
struct KeyList_t3191367262;
// System.Collections.SortedList/ValueList
struct ValueList_t1844454974;
// System.Collections.SortedList
struct SortedList_t3305246855;
// System.Collections.Stack
struct Stack_t3408888297;
// System.Collections.Hashtable
struct Hashtable_t3971943106;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2209762685;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t3559648024;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t3791304912;
// System.IntPtr[]
struct IntPtrU5BU5D_t3595384210;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3225667875;
// System.Globalization.CompareInfo
struct CompareInfo_t3802660337;
// System.Globalization.TextInfo
struct TextInfo_t3464677949;
// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t2433738622;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t120948663;
// System.Char[]
struct CharU5BU5D_t1313538844;
// System.Collections.IList
struct IList_t715111167;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t2013282519;
// System.Collections.ICollection
struct ICollection_t2962516710;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2635053567;
// System.Globalization.Calendar
struct Calendar_t571621478;
// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t1656009195;
// System.Int32
struct Int32_t825053868;

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
#ifndef QUEUE_T2200790801_H
#define QUEUE_T2200790801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t2200790801  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t2019706879* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;
	// System.Object System.Collections.Queue::_syncRoot
	RuntimeObject * ____syncRoot_6;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t2200790801, ____array_0)); }
	inline ObjectU5BU5D_t2019706879* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2019706879** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2019706879* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t2200790801, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_t2200790801, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_t2200790801, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t2200790801, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t2200790801, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}

	inline static int32_t get_offset_of__syncRoot_6() { return static_cast<int32_t>(offsetof(Queue_t2200790801, ____syncRoot_6)); }
	inline RuntimeObject * get__syncRoot_6() const { return ____syncRoot_6; }
	inline RuntimeObject ** get_address_of__syncRoot_6() { return &____syncRoot_6; }
	inline void set__syncRoot_6(RuntimeObject * value)
	{
		____syncRoot_6 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T2200790801_H
#ifndef HASHTABLEDEBUGVIEW_T1804994889_H
#define HASHTABLEDEBUGVIEW_T1804994889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableDebugView
struct  HashtableDebugView_t1804994889  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEDEBUGVIEW_T1804994889_H
#ifndef HASHHELPERS_T3924298018_H
#define HASHHELPERS_T3924298018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.HashHelpers
struct  HashHelpers_t3924298018  : public RuntimeObject
{
public:

public:
};

struct HashHelpers_t3924298018_StaticFields
{
public:
	// System.Int32[] System.Collections.HashHelpers::primes
	Int32U5BU5D_t1276023077* ___primes_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::s_SerializationInfoTable
	ConditionalWeakTable_2_t2911326458 * ___s_SerializationInfoTable_1;

public:
	inline static int32_t get_offset_of_primes_0() { return static_cast<int32_t>(offsetof(HashHelpers_t3924298018_StaticFields, ___primes_0)); }
	inline Int32U5BU5D_t1276023077* get_primes_0() const { return ___primes_0; }
	inline Int32U5BU5D_t1276023077** get_address_of_primes_0() { return &___primes_0; }
	inline void set_primes_0(Int32U5BU5D_t1276023077* value)
	{
		___primes_0 = value;
		Il2CppCodeGenWriteBarrier((&___primes_0), value);
	}

	inline static int32_t get_offset_of_s_SerializationInfoTable_1() { return static_cast<int32_t>(offsetof(HashHelpers_t3924298018_StaticFields, ___s_SerializationInfoTable_1)); }
	inline ConditionalWeakTable_2_t2911326458 * get_s_SerializationInfoTable_1() const { return ___s_SerializationInfoTable_1; }
	inline ConditionalWeakTable_2_t2911326458 ** get_address_of_s_SerializationInfoTable_1() { return &___s_SerializationInfoTable_1; }
	inline void set_s_SerializationInfoTable_1(ConditionalWeakTable_2_t2911326458 * value)
	{
		___s_SerializationInfoTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_SerializationInfoTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T3924298018_H
#ifndef QUEUEENUMERATOR_T1004931433_H
#define QUEUEENUMERATOR_T1004931433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueEnumerator
struct  QueueEnumerator_t1004931433  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Collections.Queue/QueueEnumerator::_q
	Queue_t2200790801 * ____q_0;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Queue/QueueEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Queue/QueueEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(QueueEnumerator_t1004931433, ____q_0)); }
	inline Queue_t2200790801 * get__q_0() const { return ____q_0; }
	inline Queue_t2200790801 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_t2200790801 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((&____q_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(QueueEnumerator_t1004931433, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(QueueEnumerator_t1004931433, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(QueueEnumerator_t1004931433, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEENUMERATOR_T1004931433_H
#ifndef QUEUEDEBUGVIEW_T2667007077_H
#define QUEUEDEBUGVIEW_T2667007077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue/QueueDebugView
struct  QueueDebugView_t2667007077  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEDEBUGVIEW_T2667007077_H
#ifndef READONLYCOLLECTIONBASE_T3664736666_H
#define READONLYCOLLECTIONBASE_T3664736666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t3664736666  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t1409763451 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t3664736666, ___list_0)); }
	inline ArrayList_t1409763451 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1409763451 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1409763451 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T3664736666_H
#ifndef SORTEDLIST_T3305246855_H
#define SORTEDLIST_T3305246855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList
struct  SortedList_t3305246855  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_t2019706879* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_t2019706879* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList/KeyList System.Collections.SortedList::keyList
	KeyList_t3191367262 * ___keyList_5;
	// System.Collections.SortedList/ValueList System.Collections.SortedList::valueList
	ValueList_t1844454974 * ___valueList_6;
	// System.Object System.Collections.SortedList::_syncRoot
	RuntimeObject * ____syncRoot_7;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t3305246855, ___keys_0)); }
	inline ObjectU5BU5D_t2019706879* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_t2019706879** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_t2019706879* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((&___keys_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t3305246855, ___values_1)); }
	inline ObjectU5BU5D_t2019706879* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_t2019706879** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_t2019706879* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t3305246855, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t3305246855, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t3305246855, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_4), value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t3305246855, ___keyList_5)); }
	inline KeyList_t3191367262 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t3191367262 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t3191367262 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((&___keyList_5), value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t3305246855, ___valueList_6)); }
	inline ValueList_t1844454974 * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t1844454974 ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t1844454974 * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((&___valueList_6), value);
	}

	inline static int32_t get_offset_of__syncRoot_7() { return static_cast<int32_t>(offsetof(SortedList_t3305246855, ____syncRoot_7)); }
	inline RuntimeObject * get__syncRoot_7() const { return ____syncRoot_7; }
	inline RuntimeObject ** get_address_of__syncRoot_7() { return &____syncRoot_7; }
	inline void set__syncRoot_7(RuntimeObject * value)
	{
		____syncRoot_7 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_7), value);
	}
};

struct SortedList_t3305246855_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_t2019706879* ___emptyArray_8;

public:
	inline static int32_t get_offset_of_emptyArray_8() { return static_cast<int32_t>(offsetof(SortedList_t3305246855_StaticFields, ___emptyArray_8)); }
	inline ObjectU5BU5D_t2019706879* get_emptyArray_8() const { return ___emptyArray_8; }
	inline ObjectU5BU5D_t2019706879** get_address_of_emptyArray_8() { return &___emptyArray_8; }
	inline void set_emptyArray_8(ObjectU5BU5D_t2019706879* value)
	{
		___emptyArray_8 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLIST_T3305246855_H
#ifndef SORTEDLISTENUMERATOR_T2810666562_H
#define SORTEDLISTENUMERATOR_T2810666562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListEnumerator
struct  SortedListEnumerator_t2810666562  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SortedListEnumerator::sortedList
	SortedList_t3305246855 * ___sortedList_0;
	// System.Object System.Collections.SortedList/SortedListEnumerator::key
	RuntimeObject * ___key_1;
	// System.Object System.Collections.SortedList/SortedListEnumerator::value
	RuntimeObject * ___value_2;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::index
	int32_t ___index_3;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::startIndex
	int32_t ___startIndex_4;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::endIndex
	int32_t ___endIndex_5;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::version
	int32_t ___version_6;
	// System.Boolean System.Collections.SortedList/SortedListEnumerator::current
	bool ___current_7;
	// System.Int32 System.Collections.SortedList/SortedListEnumerator::getObjectRetType
	int32_t ___getObjectRetType_8;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___sortedList_0)); }
	inline SortedList_t3305246855 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3305246855 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3305246855 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_startIndex_4() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___startIndex_4)); }
	inline int32_t get_startIndex_4() const { return ___startIndex_4; }
	inline int32_t* get_address_of_startIndex_4() { return &___startIndex_4; }
	inline void set_startIndex_4(int32_t value)
	{
		___startIndex_4 = value;
	}

	inline static int32_t get_offset_of_endIndex_5() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___endIndex_5)); }
	inline int32_t get_endIndex_5() const { return ___endIndex_5; }
	inline int32_t* get_address_of_endIndex_5() { return &___endIndex_5; }
	inline void set_endIndex_5(int32_t value)
	{
		___endIndex_5 = value;
	}

	inline static int32_t get_offset_of_version_6() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___version_6)); }
	inline int32_t get_version_6() const { return ___version_6; }
	inline int32_t* get_address_of_version_6() { return &___version_6; }
	inline void set_version_6(int32_t value)
	{
		___version_6 = value;
	}

	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___current_7)); }
	inline bool get_current_7() const { return ___current_7; }
	inline bool* get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(bool value)
	{
		___current_7 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_8() { return static_cast<int32_t>(offsetof(SortedListEnumerator_t2810666562, ___getObjectRetType_8)); }
	inline int32_t get_getObjectRetType_8() const { return ___getObjectRetType_8; }
	inline int32_t* get_address_of_getObjectRetType_8() { return &___getObjectRetType_8; }
	inline void set_getObjectRetType_8(int32_t value)
	{
		___getObjectRetType_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTENUMERATOR_T2810666562_H
#ifndef KEYLIST_T3191367262_H
#define KEYLIST_T3191367262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/KeyList
struct  KeyList_t3191367262  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/KeyList::sortedList
	SortedList_t3305246855 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(KeyList_t3191367262, ___sortedList_0)); }
	inline SortedList_t3305246855 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3305246855 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3305246855 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYLIST_T3191367262_H
#ifndef VALUELIST_T1844454974_H
#define VALUELIST_T1844454974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/ValueList
struct  ValueList_t1844454974  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Collections.SortedList/ValueList::sortedList
	SortedList_t3305246855 * ___sortedList_0;

public:
	inline static int32_t get_offset_of_sortedList_0() { return static_cast<int32_t>(offsetof(ValueList_t1844454974, ___sortedList_0)); }
	inline SortedList_t3305246855 * get_sortedList_0() const { return ___sortedList_0; }
	inline SortedList_t3305246855 ** get_address_of_sortedList_0() { return &___sortedList_0; }
	inline void set_sortedList_0(SortedList_t3305246855 * value)
	{
		___sortedList_0 = value;
		Il2CppCodeGenWriteBarrier((&___sortedList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUELIST_T1844454974_H
#ifndef SORTEDLISTDEBUGVIEW_T3947104721_H
#define SORTEDLISTDEBUGVIEW_T3947104721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SortedListDebugView
struct  SortedListDebugView_t3947104721  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDLISTDEBUGVIEW_T3947104721_H
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
#ifndef STACKENUMERATOR_T993024868_H
#define STACKENUMERATOR_T993024868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackEnumerator
struct  StackEnumerator_t993024868  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Collections.Stack/StackEnumerator::_stack
	Stack_t3408888297 * ____stack_0;
	// System.Int32 System.Collections.Stack/StackEnumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Stack/StackEnumerator::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack/StackEnumerator::currentElement
	RuntimeObject * ___currentElement_3;

public:
	inline static int32_t get_offset_of__stack_0() { return static_cast<int32_t>(offsetof(StackEnumerator_t993024868, ____stack_0)); }
	inline Stack_t3408888297 * get__stack_0() const { return ____stack_0; }
	inline Stack_t3408888297 ** get_address_of__stack_0() { return &____stack_0; }
	inline void set__stack_0(Stack_t3408888297 * value)
	{
		____stack_0 = value;
		Il2CppCodeGenWriteBarrier((&____stack_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(StackEnumerator_t993024868, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(StackEnumerator_t993024868, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(StackEnumerator_t993024868, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKENUMERATOR_T993024868_H
#ifndef STACKDEBUGVIEW_T3587433319_H
#define STACKDEBUGVIEW_T3587433319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack/StackDebugView
struct  StackDebugView_t3587433319  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKDEBUGVIEW_T3587433319_H
#ifndef LOWLEVELCOMPARER_T3608576024_H
#define LOWLEVELCOMPARER_T3608576024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.LowLevelComparer
struct  LowLevelComparer_t3608576024  : public RuntimeObject
{
public:

public:
};

struct LowLevelComparer_t3608576024_StaticFields
{
public:
	// System.Collections.LowLevelComparer System.Collections.LowLevelComparer::Default
	LowLevelComparer_t3608576024 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(LowLevelComparer_t3608576024_StaticFields, ___Default_0)); }
	inline LowLevelComparer_t3608576024 * get_Default_0() const { return ___Default_0; }
	inline LowLevelComparer_t3608576024 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(LowLevelComparer_t3608576024 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWLEVELCOMPARER_T3608576024_H
#ifndef OBJECTEQUALITYCOMPARER_T4274297239_H
#define OBJECTEQUALITYCOMPARER_T4274297239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ObjectEqualityComparer
struct  ObjectEqualityComparer_t4274297239  : public RuntimeObject
{
public:

public:
};

struct ObjectEqualityComparer_t4274297239_StaticFields
{
public:
	// System.Collections.Generic.ObjectEqualityComparer System.Collections.Generic.ObjectEqualityComparer::Default
	ObjectEqualityComparer_t4274297239 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ObjectEqualityComparer_t4274297239_StaticFields, ___Default_0)); }
	inline ObjectEqualityComparer_t4274297239 * get_Default_0() const { return ___Default_0; }
	inline ObjectEqualityComparer_t4274297239 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ObjectEqualityComparer_t4274297239 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTEQUALITYCOMPARER_T4274297239_H
#ifndef HASHHELPERS_T2577453909_H
#define HASHHELPERS_T2577453909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.HashHelpers
struct  HashHelpers_t2577453909  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHHELPERS_T2577453909_H
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
#ifndef EQUALITYCOMPARER_1_T3386727020_H
#define EQUALITYCOMPARER_1_T3386727020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct  EqualityComparer_1_t3386727020  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3386727020_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t3386727020 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3386727020_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t3386727020 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t3386727020 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t3386727020 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T3386727020_H
#ifndef HASHTABLEENUMERATOR_T1961498450_H
#define HASHTABLEENUMERATOR_T1961498450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/HashtableEnumerator
struct  HashtableEnumerator_t1961498450  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::hashtable
	Hashtable_t3971943106 * ___hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::bucket
	int32_t ___bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::current
	bool ___current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::getObjectRetType
	int32_t ___getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentKey
	RuntimeObject * ___currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::currentValue
	RuntimeObject * ___currentValue_6;

public:
	inline static int32_t get_offset_of_hashtable_0() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1961498450, ___hashtable_0)); }
	inline Hashtable_t3971943106 * get_hashtable_0() const { return ___hashtable_0; }
	inline Hashtable_t3971943106 ** get_address_of_hashtable_0() { return &___hashtable_0; }
	inline void set_hashtable_0(Hashtable_t3971943106 * value)
	{
		___hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_0), value);
	}

	inline static int32_t get_offset_of_bucket_1() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1961498450, ___bucket_1)); }
	inline int32_t get_bucket_1() const { return ___bucket_1; }
	inline int32_t* get_address_of_bucket_1() { return &___bucket_1; }
	inline void set_bucket_1(int32_t value)
	{
		___bucket_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1961498450, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1961498450, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getObjectRetType_4() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1961498450, ___getObjectRetType_4)); }
	inline int32_t get_getObjectRetType_4() const { return ___getObjectRetType_4; }
	inline int32_t* get_address_of_getObjectRetType_4() { return &___getObjectRetType_4; }
	inline void set_getObjectRetType_4(int32_t value)
	{
		___getObjectRetType_4 = value;
	}

	inline static int32_t get_offset_of_currentKey_5() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1961498450, ___currentKey_5)); }
	inline RuntimeObject * get_currentKey_5() const { return ___currentKey_5; }
	inline RuntimeObject ** get_address_of_currentKey_5() { return &___currentKey_5; }
	inline void set_currentKey_5(RuntimeObject * value)
	{
		___currentKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___currentKey_5), value);
	}

	inline static int32_t get_offset_of_currentValue_6() { return static_cast<int32_t>(offsetof(HashtableEnumerator_t1961498450, ___currentValue_6)); }
	inline RuntimeObject * get_currentValue_6() const { return ___currentValue_6; }
	inline RuntimeObject ** get_address_of_currentValue_6() { return &___currentValue_6; }
	inline void set_currentValue_6(RuntimeObject * value)
	{
		___currentValue_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentValue_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLEENUMERATOR_T1961498450_H
#ifndef VALUECOLLECTION_T3292631783_H
#define VALUECOLLECTION_T3292631783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/ValueCollection
struct  ValueCollection_t3292631783  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/ValueCollection::_hashtable
	Hashtable_t3971943106 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3292631783, ____hashtable_0)); }
	inline Hashtable_t3971943106 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t3971943106 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t3971943106 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECOLLECTION_T3292631783_H
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
#ifndef ARRAYLIST_T1409763451_H
#define ARRAYLIST_T1409763451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t1409763451  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2019706879* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t1409763451, ____items_0)); }
	inline ObjectU5BU5D_t2019706879* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t2019706879** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t2019706879* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((&____items_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t1409763451, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t1409763451, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t1409763451, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

struct ArrayList_t1409763451_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t2019706879* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t1409763451_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_t2019706879* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_t2019706879** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_t2019706879* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T1409763451_H
#ifndef COMPATIBLECOMPARER_T2594081854_H
#define COMPATIBLECOMPARER_T2594081854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CompatibleComparer
struct  CompatibleComparer_t2594081854  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_1;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t2594081854, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t2594081854, ____hcp_1)); }
	inline RuntimeObject* get__hcp_1() const { return ____hcp_1; }
	inline RuntimeObject** get_address_of__hcp_1() { return &____hcp_1; }
	inline void set__hcp_1(RuntimeObject* value)
	{
		____hcp_1 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T2594081854_H
#ifndef COMPARER_T2709008246_H
#define COMPARER_T2709008246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Comparer
struct  Comparer_t2709008246  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.Comparer::m_compareInfo
	CompareInfo_t3802660337 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(Comparer_t2709008246, ___m_compareInfo_0)); }
	inline CompareInfo_t3802660337 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t3802660337 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t3802660337 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct Comparer_t2709008246_StaticFields
{
public:
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t2709008246 * ___Default_1;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t2709008246 * ___DefaultInvariant_2;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(Comparer_t2709008246_StaticFields, ___Default_1)); }
	inline Comparer_t2709008246 * get_Default_1() const { return ___Default_1; }
	inline Comparer_t2709008246 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(Comparer_t2709008246 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_DefaultInvariant_2() { return static_cast<int32_t>(offsetof(Comparer_t2709008246_StaticFields, ___DefaultInvariant_2)); }
	inline Comparer_t2709008246 * get_DefaultInvariant_2() const { return ___DefaultInvariant_2; }
	inline Comparer_t2709008246 ** get_address_of_DefaultInvariant_2() { return &___DefaultInvariant_2; }
	inline void set_DefaultInvariant_2(Comparer_t2709008246 * value)
	{
		___DefaultInvariant_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultInvariant_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARER_T2709008246_H
#ifndef COLLECTIONBASE_T4101284622_H
#define COLLECTIONBASE_T4101284622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t4101284622  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t1409763451 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t4101284622, ___list_0)); }
	inline ArrayList_t1409763451 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1409763451 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1409763451 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T4101284622_H
#ifndef CASEINSENSITIVEHASHCODEPROVIDER_T2433738622_H
#define CASEINSENSITIVEHASHCODEPROVIDER_T2433738622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveHashCodeProvider
struct  CaseInsensitiveHashCodeProvider_t2433738622  : public RuntimeObject
{
public:
	// System.Globalization.TextInfo System.Collections.CaseInsensitiveHashCodeProvider::m_text
	TextInfo_t3464677949 * ___m_text_0;

public:
	inline static int32_t get_offset_of_m_text_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t2433738622, ___m_text_0)); }
	inline TextInfo_t3464677949 * get_m_text_0() const { return ___m_text_0; }
	inline TextInfo_t3464677949 ** get_address_of_m_text_0() { return &___m_text_0; }
	inline void set_m_text_0(TextInfo_t3464677949 * value)
	{
		___m_text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_text_0), value);
	}
};

struct CaseInsensitiveHashCodeProvider_t2433738622_StaticFields
{
public:
	// System.Collections.CaseInsensitiveHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveHashCodeProvider::m_InvariantCaseInsensitiveHashCodeProvider
	CaseInsensitiveHashCodeProvider_t2433738622 * ___m_InvariantCaseInsensitiveHashCodeProvider_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveHashCodeProvider_t2433738622_StaticFields, ___m_InvariantCaseInsensitiveHashCodeProvider_1)); }
	inline CaseInsensitiveHashCodeProvider_t2433738622 * get_m_InvariantCaseInsensitiveHashCodeProvider_1() const { return ___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline CaseInsensitiveHashCodeProvider_t2433738622 ** get_address_of_m_InvariantCaseInsensitiveHashCodeProvider_1() { return &___m_InvariantCaseInsensitiveHashCodeProvider_1; }
	inline void set_m_InvariantCaseInsensitiveHashCodeProvider_1(CaseInsensitiveHashCodeProvider_t2433738622 * value)
	{
		___m_InvariantCaseInsensitiveHashCodeProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveHashCodeProvider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVEHASHCODEPROVIDER_T2433738622_H
#ifndef TUPLE_T1786198327_H
#define TUPLE_T1786198327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Tuple
struct  Tuple_t1786198327  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLE_T1786198327_H
#ifndef CASEINSENSITIVECOMPARER_T120948663_H
#define CASEINSENSITIVECOMPARER_T120948663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CaseInsensitiveComparer
struct  CaseInsensitiveComparer_t120948663  : public RuntimeObject
{
public:
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::m_compareInfo
	CompareInfo_t3802660337 * ___m_compareInfo_0;

public:
	inline static int32_t get_offset_of_m_compareInfo_0() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t120948663, ___m_compareInfo_0)); }
	inline CompareInfo_t3802660337 * get_m_compareInfo_0() const { return ___m_compareInfo_0; }
	inline CompareInfo_t3802660337 ** get_address_of_m_compareInfo_0() { return &___m_compareInfo_0; }
	inline void set_m_compareInfo_0(CompareInfo_t3802660337 * value)
	{
		___m_compareInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_compareInfo_0), value);
	}
};

struct CaseInsensitiveComparer_t120948663_StaticFields
{
public:
	// System.Collections.CaseInsensitiveComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.CaseInsensitiveComparer::m_InvariantCaseInsensitiveComparer
	CaseInsensitiveComparer_t120948663 * ___m_InvariantCaseInsensitiveComparer_1;

public:
	inline static int32_t get_offset_of_m_InvariantCaseInsensitiveComparer_1() { return static_cast<int32_t>(offsetof(CaseInsensitiveComparer_t120948663_StaticFields, ___m_InvariantCaseInsensitiveComparer_1)); }
	inline CaseInsensitiveComparer_t120948663 * get_m_InvariantCaseInsensitiveComparer_1() const { return ___m_InvariantCaseInsensitiveComparer_1; }
	inline CaseInsensitiveComparer_t120948663 ** get_address_of_m_InvariantCaseInsensitiveComparer_1() { return &___m_InvariantCaseInsensitiveComparer_1; }
	inline void set_m_InvariantCaseInsensitiveComparer_1(CaseInsensitiveComparer_t120948663 * value)
	{
		___m_InvariantCaseInsensitiveComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvariantCaseInsensitiveComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CASEINSENSITIVECOMPARER_T120948663_H
#ifndef ARRAYLISTDEBUGVIEW_T3771726562_H
#define ARRAYLISTDEBUGVIEW_T3771726562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListDebugView
struct  ArrayListDebugView_t3771726562  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTDEBUGVIEW_T3771726562_H
#ifndef ARRAYLISTENUMERATORSIMPLE_T2443172156_H
#define ARRAYLISTENUMERATORSIMPLE_T2443172156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct  ArrayListEnumeratorSimple_t2443172156  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::list
	ArrayList_t1409763451 * ___list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::index
	int32_t ___index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::version
	int32_t ___version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::currentElement
	RuntimeObject * ___currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::isArrayList
	bool ___isArrayList_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2443172156, ___list_0)); }
	inline ArrayList_t1409763451 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1409763451 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1409763451 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2443172156, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2443172156, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentElement_3() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2443172156, ___currentElement_3)); }
	inline RuntimeObject * get_currentElement_3() const { return ___currentElement_3; }
	inline RuntimeObject ** get_address_of_currentElement_3() { return &___currentElement_3; }
	inline void set_currentElement_3(RuntimeObject * value)
	{
		___currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentElement_3), value);
	}

	inline static int32_t get_offset_of_isArrayList_4() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2443172156, ___isArrayList_4)); }
	inline bool get_isArrayList_4() const { return ___isArrayList_4; }
	inline bool* get_address_of_isArrayList_4() { return &___isArrayList_4; }
	inline void set_isArrayList_4(bool value)
	{
		___isArrayList_4 = value;
	}
};

struct ArrayListEnumeratorSimple_t2443172156_StaticFields
{
public:
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::dummyObject
	RuntimeObject * ___dummyObject_5;

public:
	inline static int32_t get_offset_of_dummyObject_5() { return static_cast<int32_t>(offsetof(ArrayListEnumeratorSimple_t2443172156_StaticFields, ___dummyObject_5)); }
	inline RuntimeObject * get_dummyObject_5() const { return ___dummyObject_5; }
	inline RuntimeObject ** get_address_of_dummyObject_5() { return &___dummyObject_5; }
	inline void set_dummyObject_5(RuntimeObject * value)
	{
		___dummyObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___dummyObject_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLISTENUMERATORSIMPLE_T2443172156_H
#ifndef KEYCOLLECTION_T2085310685_H
#define KEYCOLLECTION_T2085310685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/KeyCollection
struct  KeyCollection_t2085310685  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t3971943106 * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_t2085310685, ____hashtable_0)); }
	inline Hashtable_t3971943106 * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t3971943106 ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t3971943106 * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((&____hashtable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T2085310685_H
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
#ifndef BYTEEQUALITYCOMPARER_T1830833492_H
#define BYTEEQUALITYCOMPARER_T1830833492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.ByteEqualityComparer
struct  ByteEqualityComparer_t1830833492  : public EqualityComparer_1_t3386727020
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEEQUALITYCOMPARER_T1830833492_H
#ifndef ILISTWRAPPER_T1553412127_H
#define ILISTWRAPPER_T1553412127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/IListWrapper
struct  IListWrapper_t1553412127  : public ArrayList_t1409763451
{
public:
	// System.Collections.IList System.Collections.ArrayList/IListWrapper::_list
	RuntimeObject* ____list_6;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(IListWrapper_t1553412127, ____list_6)); }
	inline RuntimeObject* get__list_6() const { return ____list_6; }
	inline RuntimeObject** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(RuntimeObject* value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILISTWRAPPER_T1553412127_H
#ifndef SYNCARRAYLIST_T899389435_H
#define SYNCARRAYLIST_T899389435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/SyncArrayList
struct  SyncArrayList_t899389435  : public ArrayList_t1409763451
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/SyncArrayList::_list
	ArrayList_t1409763451 * ____list_6;
	// System.Object System.Collections.ArrayList/SyncArrayList::_root
	RuntimeObject * ____root_7;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(SyncArrayList_t899389435, ____list_6)); }
	inline ArrayList_t1409763451 * get__list_6() const { return ____list_6; }
	inline ArrayList_t1409763451 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(ArrayList_t1409763451 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}

	inline static int32_t get_offset_of__root_7() { return static_cast<int32_t>(offsetof(SyncArrayList_t899389435, ____root_7)); }
	inline RuntimeObject * get__root_7() const { return ____root_7; }
	inline RuntimeObject ** get_address_of__root_7() { return &____root_7; }
	inline void set__root_7(RuntimeObject * value)
	{
		____root_7 = value;
		Il2CppCodeGenWriteBarrier((&____root_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCARRAYLIST_T899389435_H
#ifndef READONLYARRAYLIST_T882981924_H
#define READONLYARRAYLIST_T882981924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ReadOnlyArrayList
struct  ReadOnlyArrayList_t882981924  : public ArrayList_t1409763451
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t1409763451 * ____list_6;

public:
	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(ReadOnlyArrayList_t882981924, ____list_6)); }
	inline ArrayList_t1409763451 * get__list_6() const { return ____list_6; }
	inline ArrayList_t1409763451 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(ArrayList_t1409763451 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier((&____list_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYARRAYLIST_T882981924_H
#ifndef SYNCSORTEDLIST_T243686350_H
#define SYNCSORTEDLIST_T243686350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.SortedList/SyncSortedList
struct  SyncSortedList_t243686350  : public SortedList_t3305246855
{
public:
	// System.Collections.SortedList System.Collections.SortedList/SyncSortedList::_list
	SortedList_t3305246855 * ____list_9;
	// System.Object System.Collections.SortedList/SyncSortedList::_root
	RuntimeObject * ____root_10;

public:
	inline static int32_t get_offset_of__list_9() { return static_cast<int32_t>(offsetof(SyncSortedList_t243686350, ____list_9)); }
	inline SortedList_t3305246855 * get__list_9() const { return ____list_9; }
	inline SortedList_t3305246855 ** get_address_of__list_9() { return &____list_9; }
	inline void set__list_9(SortedList_t3305246855 * value)
	{
		____list_9 = value;
		Il2CppCodeGenWriteBarrier((&____list_9), value);
	}

	inline static int32_t get_offset_of__root_10() { return static_cast<int32_t>(offsetof(SyncSortedList_t243686350, ____root_10)); }
	inline RuntimeObject * get__root_10() const { return ____root_10; }
	inline RuntimeObject ** get_address_of__root_10() { return &____root_10; }
	inline void set__root_10(RuntimeObject * value)
	{
		____root_10 = value;
		Il2CppCodeGenWriteBarrier((&____root_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCSORTEDLIST_T243686350_H
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
#ifndef DICTIONARYENTRY_T2663557927_H
#define DICTIONARYENTRY_T2663557927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.DictionaryEntry
struct  DictionaryEntry_t2663557927 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_t2663557927, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_t2663557927, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t2663557927_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t2663557927_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
#endif // DICTIONARYENTRY_T2663557927_H
#ifndef BUCKET_T137595746_H
#define BUCKET_T137595746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/bucket
struct  bucket_t137595746 
{
public:
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject * ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(bucket_t137595746, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_val_1() { return static_cast<int32_t>(offsetof(bucket_t137595746, ___val_1)); }
	inline RuntimeObject * get_val_1() const { return ___val_1; }
	inline RuntimeObject ** get_address_of_val_1() { return &___val_1; }
	inline void set_val_1(RuntimeObject * value)
	{
		___val_1 = value;
		Il2CppCodeGenWriteBarrier((&___val_1), value);
	}

	inline static int32_t get_offset_of_hash_coll_2() { return static_cast<int32_t>(offsetof(bucket_t137595746, ___hash_coll_2)); }
	inline int32_t get_hash_coll_2() const { return ___hash_coll_2; }
	inline int32_t* get_address_of_hash_coll_2() { return &___hash_coll_2; }
	inline void set_hash_coll_2(int32_t value)
	{
		___hash_coll_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t137595746_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t137595746_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
#endif // BUCKET_T137595746_H
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
#ifndef KEYNOTFOUNDEXCEPTION_T3040062054_H
#define KEYNOTFOUNDEXCEPTION_T3040062054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t3040062054  : public SystemException_t1971328175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T3040062054_H
#ifndef TOKENTYPE_T1049956842_H
#define TOKENTYPE_T1049956842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t1049956842 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t1049956842, ___value___2)); }
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
#endif // TOKENTYPE_T1049956842_H
#ifndef PARSEFAILUREKIND_T665057432_H
#define PARSEFAILUREKIND_T665057432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFailureKind
struct  ParseFailureKind_t665057432 
{
public:
	// System.Int32 System.ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t665057432, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T665057432_H
#ifndef TM_T3264169720_H
#define TM_T3264169720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/TM
struct  TM_t3264169720 
{
public:
	// System.Int32 System.DateTimeParse/TM::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TM_t3264169720, ___value___2)); }
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
#endif // TM_T3264169720_H
#ifndef HASHTABLE_T3971943106_H
#define HASHTABLE_T3971943106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t3971943106  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t2013282519* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_10;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___buckets_0)); }
	inline bucketU5BU5D_t2013282519* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_t2013282519** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_t2013282519* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ___values_8)); }
	inline RuntimeObject* get_values_8() const { return ___values_8; }
	inline RuntimeObject** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(RuntimeObject* value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__keycomparer_9() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ____keycomparer_9)); }
	inline RuntimeObject* get__keycomparer_9() const { return ____keycomparer_9; }
	inline RuntimeObject** get_address_of__keycomparer_9() { return &____keycomparer_9; }
	inline void set__keycomparer_9(RuntimeObject* value)
	{
		____keycomparer_9 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_9), value);
	}

	inline static int32_t get_offset_of__syncRoot_10() { return static_cast<int32_t>(offsetof(Hashtable_t3971943106, ____syncRoot_10)); }
	inline RuntimeObject * get__syncRoot_10() const { return ____syncRoot_10; }
	inline RuntimeObject ** get_address_of__syncRoot_10() { return &____syncRoot_10; }
	inline void set__syncRoot_10(RuntimeObject * value)
	{
		____syncRoot_10 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T3971943106_H
#ifndef TIMESPAN_T2034903957_H
#define TIMESPAN_T2034903957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2034903957 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t2034903957_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2034903957  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2034903957  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2034903957  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ___Zero_0)); }
	inline TimeSpan_t2034903957  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t2034903957 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t2034903957  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t2034903957  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t2034903957 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t2034903957  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t2034903957  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t2034903957 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t2034903957  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t2034903957_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2034903957_H
#ifndef PARSEFLAGS_T2905443001_H
#define PARSEFLAGS_T2905443001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFlags
struct  ParseFlags_t2905443001 
{
public:
	// System.Int32 System.ParseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFlags_t2905443001, ___value___2)); }
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
#endif // PARSEFLAGS_T2905443001_H
#ifndef SYNCHASHTABLE_T4038339263_H
#define SYNCHASHTABLE_T4038339263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t4038339263  : public Hashtable_t3971943106
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t3971943106 * ____table_11;

public:
	inline static int32_t get_offset_of__table_11() { return static_cast<int32_t>(offsetof(SyncHashtable_t4038339263, ____table_11)); }
	inline Hashtable_t3971943106 * get__table_11() const { return ____table_11; }
	inline Hashtable_t3971943106 ** get_address_of__table_11() { return &____table_11; }
	inline void set__table_11(Hashtable_t3971943106 * value)
	{
		____table_11 = value;
		Il2CppCodeGenWriteBarrier((&____table_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHASHTABLE_T4038339263_H
#ifndef PARSINGINFO_T3937900366_H
#define PARSINGINFO_T3937900366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParsingInfo
struct  ParsingInfo_t3937900366 
{
public:
	// System.Globalization.Calendar System.ParsingInfo::calendar
	Calendar_t571621478 * ___calendar_0;
	// System.Int32 System.ParsingInfo::dayOfWeek
	int32_t ___dayOfWeek_1;
	// System.DateTimeParse/TM System.ParsingInfo::timeMark
	int32_t ___timeMark_2;
	// System.Boolean System.ParsingInfo::fUseHour12
	bool ___fUseHour12_3;
	// System.Boolean System.ParsingInfo::fUseTwoDigitYear
	bool ___fUseTwoDigitYear_4;
	// System.Boolean System.ParsingInfo::fAllowInnerWhite
	bool ___fAllowInnerWhite_5;
	// System.Boolean System.ParsingInfo::fAllowTrailingWhite
	bool ___fAllowTrailingWhite_6;
	// System.Boolean System.ParsingInfo::fCustomNumberParser
	bool ___fCustomNumberParser_7;
	// System.DateTimeParse/MatchNumberDelegate System.ParsingInfo::parseNumberDelegate
	MatchNumberDelegate_t1656009195 * ___parseNumberDelegate_8;

public:
	inline static int32_t get_offset_of_calendar_0() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___calendar_0)); }
	inline Calendar_t571621478 * get_calendar_0() const { return ___calendar_0; }
	inline Calendar_t571621478 ** get_address_of_calendar_0() { return &___calendar_0; }
	inline void set_calendar_0(Calendar_t571621478 * value)
	{
		___calendar_0 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_0), value);
	}

	inline static int32_t get_offset_of_dayOfWeek_1() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___dayOfWeek_1)); }
	inline int32_t get_dayOfWeek_1() const { return ___dayOfWeek_1; }
	inline int32_t* get_address_of_dayOfWeek_1() { return &___dayOfWeek_1; }
	inline void set_dayOfWeek_1(int32_t value)
	{
		___dayOfWeek_1 = value;
	}

	inline static int32_t get_offset_of_timeMark_2() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___timeMark_2)); }
	inline int32_t get_timeMark_2() const { return ___timeMark_2; }
	inline int32_t* get_address_of_timeMark_2() { return &___timeMark_2; }
	inline void set_timeMark_2(int32_t value)
	{
		___timeMark_2 = value;
	}

	inline static int32_t get_offset_of_fUseHour12_3() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___fUseHour12_3)); }
	inline bool get_fUseHour12_3() const { return ___fUseHour12_3; }
	inline bool* get_address_of_fUseHour12_3() { return &___fUseHour12_3; }
	inline void set_fUseHour12_3(bool value)
	{
		___fUseHour12_3 = value;
	}

	inline static int32_t get_offset_of_fUseTwoDigitYear_4() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___fUseTwoDigitYear_4)); }
	inline bool get_fUseTwoDigitYear_4() const { return ___fUseTwoDigitYear_4; }
	inline bool* get_address_of_fUseTwoDigitYear_4() { return &___fUseTwoDigitYear_4; }
	inline void set_fUseTwoDigitYear_4(bool value)
	{
		___fUseTwoDigitYear_4 = value;
	}

	inline static int32_t get_offset_of_fAllowInnerWhite_5() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___fAllowInnerWhite_5)); }
	inline bool get_fAllowInnerWhite_5() const { return ___fAllowInnerWhite_5; }
	inline bool* get_address_of_fAllowInnerWhite_5() { return &___fAllowInnerWhite_5; }
	inline void set_fAllowInnerWhite_5(bool value)
	{
		___fAllowInnerWhite_5 = value;
	}

	inline static int32_t get_offset_of_fAllowTrailingWhite_6() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___fAllowTrailingWhite_6)); }
	inline bool get_fAllowTrailingWhite_6() const { return ___fAllowTrailingWhite_6; }
	inline bool* get_address_of_fAllowTrailingWhite_6() { return &___fAllowTrailingWhite_6; }
	inline void set_fAllowTrailingWhite_6(bool value)
	{
		___fAllowTrailingWhite_6 = value;
	}

	inline static int32_t get_offset_of_fCustomNumberParser_7() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___fCustomNumberParser_7)); }
	inline bool get_fCustomNumberParser_7() const { return ___fCustomNumberParser_7; }
	inline bool* get_address_of_fCustomNumberParser_7() { return &___fCustomNumberParser_7; }
	inline void set_fCustomNumberParser_7(bool value)
	{
		___fCustomNumberParser_7 = value;
	}

	inline static int32_t get_offset_of_parseNumberDelegate_8() { return static_cast<int32_t>(offsetof(ParsingInfo_t3937900366, ___parseNumberDelegate_8)); }
	inline MatchNumberDelegate_t1656009195 * get_parseNumberDelegate_8() const { return ___parseNumberDelegate_8; }
	inline MatchNumberDelegate_t1656009195 ** get_address_of_parseNumberDelegate_8() { return &___parseNumberDelegate_8; }
	inline void set_parseNumberDelegate_8(MatchNumberDelegate_t1656009195 * value)
	{
		___parseNumberDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&___parseNumberDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParsingInfo
struct ParsingInfo_t3937900366_marshaled_pinvoke
{
	Calendar_t571621478 * ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
// Native definition for COM marshalling of System.ParsingInfo
struct ParsingInfo_t3937900366_marshaled_com
{
	Calendar_t571621478 * ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
#endif // PARSINGINFO_T3937900366_H
#ifndef DATETIMERESULT_T3101576099_H
#define DATETIMERESULT_T3101576099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeResult
struct  DateTimeResult_t3101576099 
{
public:
	// System.Int32 System.DateTimeResult::Year
	int32_t ___Year_0;
	// System.Int32 System.DateTimeResult::Month
	int32_t ___Month_1;
	// System.Int32 System.DateTimeResult::Day
	int32_t ___Day_2;
	// System.Int32 System.DateTimeResult::Hour
	int32_t ___Hour_3;
	// System.Int32 System.DateTimeResult::Minute
	int32_t ___Minute_4;
	// System.Int32 System.DateTimeResult::Second
	int32_t ___Second_5;
	// System.Double System.DateTimeResult::fraction
	double ___fraction_6;
	// System.Int32 System.DateTimeResult::era
	int32_t ___era_7;
	// System.ParseFlags System.DateTimeResult::flags
	int32_t ___flags_8;
	// System.TimeSpan System.DateTimeResult::timeZoneOffset
	TimeSpan_t2034903957  ___timeZoneOffset_9;
	// System.Globalization.Calendar System.DateTimeResult::calendar
	Calendar_t571621478 * ___calendar_10;
	// System.DateTime System.DateTimeResult::parsedDate
	DateTime_t1480186961  ___parsedDate_11;
	// System.ParseFailureKind System.DateTimeResult::failure
	int32_t ___failure_12;
	// System.String System.DateTimeResult::failureMessageID
	String_t* ___failureMessageID_13;
	// System.Object System.DateTimeResult::failureMessageFormatArgument
	RuntimeObject * ___failureMessageFormatArgument_14;
	// System.String System.DateTimeResult::failureArgumentName
	String_t* ___failureArgumentName_15;

public:
	inline static int32_t get_offset_of_Year_0() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___Year_0)); }
	inline int32_t get_Year_0() const { return ___Year_0; }
	inline int32_t* get_address_of_Year_0() { return &___Year_0; }
	inline void set_Year_0(int32_t value)
	{
		___Year_0 = value;
	}

	inline static int32_t get_offset_of_Month_1() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___Month_1)); }
	inline int32_t get_Month_1() const { return ___Month_1; }
	inline int32_t* get_address_of_Month_1() { return &___Month_1; }
	inline void set_Month_1(int32_t value)
	{
		___Month_1 = value;
	}

	inline static int32_t get_offset_of_Day_2() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___Day_2)); }
	inline int32_t get_Day_2() const { return ___Day_2; }
	inline int32_t* get_address_of_Day_2() { return &___Day_2; }
	inline void set_Day_2(int32_t value)
	{
		___Day_2 = value;
	}

	inline static int32_t get_offset_of_Hour_3() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___Hour_3)); }
	inline int32_t get_Hour_3() const { return ___Hour_3; }
	inline int32_t* get_address_of_Hour_3() { return &___Hour_3; }
	inline void set_Hour_3(int32_t value)
	{
		___Hour_3 = value;
	}

	inline static int32_t get_offset_of_Minute_4() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___Minute_4)); }
	inline int32_t get_Minute_4() const { return ___Minute_4; }
	inline int32_t* get_address_of_Minute_4() { return &___Minute_4; }
	inline void set_Minute_4(int32_t value)
	{
		___Minute_4 = value;
	}

	inline static int32_t get_offset_of_Second_5() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___Second_5)); }
	inline int32_t get_Second_5() const { return ___Second_5; }
	inline int32_t* get_address_of_Second_5() { return &___Second_5; }
	inline void set_Second_5(int32_t value)
	{
		___Second_5 = value;
	}

	inline static int32_t get_offset_of_fraction_6() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___fraction_6)); }
	inline double get_fraction_6() const { return ___fraction_6; }
	inline double* get_address_of_fraction_6() { return &___fraction_6; }
	inline void set_fraction_6(double value)
	{
		___fraction_6 = value;
	}

	inline static int32_t get_offset_of_era_7() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___era_7)); }
	inline int32_t get_era_7() const { return ___era_7; }
	inline int32_t* get_address_of_era_7() { return &___era_7; }
	inline void set_era_7(int32_t value)
	{
		___era_7 = value;
	}

	inline static int32_t get_offset_of_flags_8() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___flags_8)); }
	inline int32_t get_flags_8() const { return ___flags_8; }
	inline int32_t* get_address_of_flags_8() { return &___flags_8; }
	inline void set_flags_8(int32_t value)
	{
		___flags_8 = value;
	}

	inline static int32_t get_offset_of_timeZoneOffset_9() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___timeZoneOffset_9)); }
	inline TimeSpan_t2034903957  get_timeZoneOffset_9() const { return ___timeZoneOffset_9; }
	inline TimeSpan_t2034903957 * get_address_of_timeZoneOffset_9() { return &___timeZoneOffset_9; }
	inline void set_timeZoneOffset_9(TimeSpan_t2034903957  value)
	{
		___timeZoneOffset_9 = value;
	}

	inline static int32_t get_offset_of_calendar_10() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___calendar_10)); }
	inline Calendar_t571621478 * get_calendar_10() const { return ___calendar_10; }
	inline Calendar_t571621478 ** get_address_of_calendar_10() { return &___calendar_10; }
	inline void set_calendar_10(Calendar_t571621478 * value)
	{
		___calendar_10 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_10), value);
	}

	inline static int32_t get_offset_of_parsedDate_11() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___parsedDate_11)); }
	inline DateTime_t1480186961  get_parsedDate_11() const { return ___parsedDate_11; }
	inline DateTime_t1480186961 * get_address_of_parsedDate_11() { return &___parsedDate_11; }
	inline void set_parsedDate_11(DateTime_t1480186961  value)
	{
		___parsedDate_11 = value;
	}

	inline static int32_t get_offset_of_failure_12() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___failure_12)); }
	inline int32_t get_failure_12() const { return ___failure_12; }
	inline int32_t* get_address_of_failure_12() { return &___failure_12; }
	inline void set_failure_12(int32_t value)
	{
		___failure_12 = value;
	}

	inline static int32_t get_offset_of_failureMessageID_13() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___failureMessageID_13)); }
	inline String_t* get_failureMessageID_13() const { return ___failureMessageID_13; }
	inline String_t** get_address_of_failureMessageID_13() { return &___failureMessageID_13; }
	inline void set_failureMessageID_13(String_t* value)
	{
		___failureMessageID_13 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageID_13), value);
	}

	inline static int32_t get_offset_of_failureMessageFormatArgument_14() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___failureMessageFormatArgument_14)); }
	inline RuntimeObject * get_failureMessageFormatArgument_14() const { return ___failureMessageFormatArgument_14; }
	inline RuntimeObject ** get_address_of_failureMessageFormatArgument_14() { return &___failureMessageFormatArgument_14; }
	inline void set_failureMessageFormatArgument_14(RuntimeObject * value)
	{
		___failureMessageFormatArgument_14 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageFormatArgument_14), value);
	}

	inline static int32_t get_offset_of_failureArgumentName_15() { return static_cast<int32_t>(offsetof(DateTimeResult_t3101576099, ___failureArgumentName_15)); }
	inline String_t* get_failureArgumentName_15() const { return ___failureArgumentName_15; }
	inline String_t** get_address_of_failureArgumentName_15() { return &___failureArgumentName_15; }
	inline void set_failureArgumentName_15(String_t* value)
	{
		___failureArgumentName_15 = value;
		Il2CppCodeGenWriteBarrier((&___failureArgumentName_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DateTimeResult
struct DateTimeResult_t3101576099_marshaled_pinvoke
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t2034903957  ___timeZoneOffset_9;
	Calendar_t571621478 * ___calendar_10;
	DateTime_t1480186961  ___parsedDate_11;
	int32_t ___failure_12;
	char* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	char* ___failureArgumentName_15;
};
// Native definition for COM marshalling of System.DateTimeResult
struct DateTimeResult_t3101576099_marshaled_com
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t2034903957  ___timeZoneOffset_9;
	Calendar_t571621478 * ___calendar_10;
	DateTime_t1480186961  ___parsedDate_11;
	int32_t ___failure_12;
	Il2CppChar* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	Il2CppChar* ___failureArgumentName_15;
};
#endif // DATETIMERESULT_T3101576099_H
#ifndef DATETIMERAWINFO_T3425528322_H
#define DATETIMERAWINFO_T3425528322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeRawInfo
struct  DateTimeRawInfo_t3425528322 
{
public:
	// System.Int32* System.DateTimeRawInfo::num
	int32_t* ___num_0;
	// System.Int32 System.DateTimeRawInfo::numCount
	int32_t ___numCount_1;
	// System.Int32 System.DateTimeRawInfo::month
	int32_t ___month_2;
	// System.Int32 System.DateTimeRawInfo::year
	int32_t ___year_3;
	// System.Int32 System.DateTimeRawInfo::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Int32 System.DateTimeRawInfo::era
	int32_t ___era_5;
	// System.DateTimeParse/TM System.DateTimeRawInfo::timeMark
	int32_t ___timeMark_6;
	// System.Double System.DateTimeRawInfo::fraction
	double ___fraction_7;
	// System.Boolean System.DateTimeRawInfo::hasSameDateAndTimeSeparators
	bool ___hasSameDateAndTimeSeparators_8;
	// System.Boolean System.DateTimeRawInfo::timeZone
	bool ___timeZone_9;

public:
	inline static int32_t get_offset_of_num_0() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___num_0)); }
	inline int32_t* get_num_0() const { return ___num_0; }
	inline int32_t** get_address_of_num_0() { return &___num_0; }
	inline void set_num_0(int32_t* value)
	{
		___num_0 = value;
	}

	inline static int32_t get_offset_of_numCount_1() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___numCount_1)); }
	inline int32_t get_numCount_1() const { return ___numCount_1; }
	inline int32_t* get_address_of_numCount_1() { return &___numCount_1; }
	inline void set_numCount_1(int32_t value)
	{
		___numCount_1 = value;
	}

	inline static int32_t get_offset_of_month_2() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___month_2)); }
	inline int32_t get_month_2() const { return ___month_2; }
	inline int32_t* get_address_of_month_2() { return &___month_2; }
	inline void set_month_2(int32_t value)
	{
		___month_2 = value;
	}

	inline static int32_t get_offset_of_year_3() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___year_3)); }
	inline int32_t get_year_3() const { return ___year_3; }
	inline int32_t* get_address_of_year_3() { return &___year_3; }
	inline void set_year_3(int32_t value)
	{
		___year_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___dayOfWeek_4)); }
	inline int32_t get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline int32_t* get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(int32_t value)
	{
		___dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_era_5() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___era_5)); }
	inline int32_t get_era_5() const { return ___era_5; }
	inline int32_t* get_address_of_era_5() { return &___era_5; }
	inline void set_era_5(int32_t value)
	{
		___era_5 = value;
	}

	inline static int32_t get_offset_of_timeMark_6() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___timeMark_6)); }
	inline int32_t get_timeMark_6() const { return ___timeMark_6; }
	inline int32_t* get_address_of_timeMark_6() { return &___timeMark_6; }
	inline void set_timeMark_6(int32_t value)
	{
		___timeMark_6 = value;
	}

	inline static int32_t get_offset_of_fraction_7() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___fraction_7)); }
	inline double get_fraction_7() const { return ___fraction_7; }
	inline double* get_address_of_fraction_7() { return &___fraction_7; }
	inline void set_fraction_7(double value)
	{
		___fraction_7 = value;
	}

	inline static int32_t get_offset_of_hasSameDateAndTimeSeparators_8() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___hasSameDateAndTimeSeparators_8)); }
	inline bool get_hasSameDateAndTimeSeparators_8() const { return ___hasSameDateAndTimeSeparators_8; }
	inline bool* get_address_of_hasSameDateAndTimeSeparators_8() { return &___hasSameDateAndTimeSeparators_8; }
	inline void set_hasSameDateAndTimeSeparators_8(bool value)
	{
		___hasSameDateAndTimeSeparators_8 = value;
	}

	inline static int32_t get_offset_of_timeZone_9() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t3425528322, ___timeZone_9)); }
	inline bool get_timeZone_9() const { return ___timeZone_9; }
	inline bool* get_address_of_timeZone_9() { return &___timeZone_9; }
	inline void set_timeZone_9(bool value)
	{
		___timeZone_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_t3425528322_marshaled_pinvoke
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
	int32_t ___timeZone_9;
};
// Native definition for COM marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_t3425528322_marshaled_com
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
	int32_t ___timeZone_9;
};
#endif // DATETIMERAWINFO_T3425528322_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (DateTimeRawInfo_t3425528322)+ sizeof (RuntimeObject), sizeof(DateTimeRawInfo_t3425528322_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable300[10] = 
{
	DateTimeRawInfo_t3425528322::get_offset_of_num_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_numCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_month_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_year_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_dayOfWeek_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_era_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_timeMark_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_fraction_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_hasSameDateAndTimeSeparators_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t3425528322::get_offset_of_timeZone_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (ParseFailureKind_t665057432)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable301[6] = 
{
	ParseFailureKind_t665057432::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (ParseFlags_t2905443001)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable302[16] = 
{
	ParseFlags_t2905443001::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (DateTimeResult_t3101576099)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable303[16] = 
{
	DateTimeResult_t3101576099::get_offset_of_Year_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_Month_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_Day_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_Hour_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_Minute_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_Second_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_fraction_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_era_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_flags_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_timeZoneOffset_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_calendar_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_parsedDate_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_failure_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_failureMessageID_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_failureMessageFormatArgument_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t3101576099::get_offset_of_failureArgumentName_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (ParsingInfo_t3937900366)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable304[9] = 
{
	ParsingInfo_t3937900366::get_offset_of_calendar_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3937900366::get_offset_of_dayOfWeek_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3937900366::get_offset_of_timeMark_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3937900366::get_offset_of_fUseHour12_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3937900366::get_offset_of_fUseTwoDigitYear_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3937900366::get_offset_of_fAllowInnerWhite_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3937900366::get_offset_of_fAllowTrailingWhite_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3937900366::get_offset_of_fCustomNumberParser_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t3937900366::get_offset_of_parseNumberDelegate_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (TokenType_t1049956842)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable305[33] = 
{
	TokenType_t1049956842::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (Tuple_t1786198327), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable308[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable309[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable310[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (ArrayList_t1409763451), -1, sizeof(ArrayList_t1409763451_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable311[6] = 
{
	ArrayList_t1409763451::get_offset_of__items_0(),
	ArrayList_t1409763451::get_offset_of__size_1(),
	ArrayList_t1409763451::get_offset_of__version_2(),
	ArrayList_t1409763451::get_offset_of__syncRoot_3(),
	0,
	ArrayList_t1409763451_StaticFields::get_offset_of_emptyArray_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (IListWrapper_t1553412127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[1] = 
{
	IListWrapper_t1553412127::get_offset_of__list_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (SyncArrayList_t899389435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable313[2] = 
{
	SyncArrayList_t899389435::get_offset_of__list_6(),
	SyncArrayList_t899389435::get_offset_of__root_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (ReadOnlyArrayList_t882981924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[1] = 
{
	ReadOnlyArrayList_t882981924::get_offset_of__list_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (ArrayListEnumeratorSimple_t2443172156), -1, sizeof(ArrayListEnumeratorSimple_t2443172156_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable315[6] = 
{
	ArrayListEnumeratorSimple_t2443172156::get_offset_of_list_0(),
	ArrayListEnumeratorSimple_t2443172156::get_offset_of_index_1(),
	ArrayListEnumeratorSimple_t2443172156::get_offset_of_version_2(),
	ArrayListEnumeratorSimple_t2443172156::get_offset_of_currentElement_3(),
	ArrayListEnumeratorSimple_t2443172156::get_offset_of_isArrayList_4(),
	ArrayListEnumeratorSimple_t2443172156_StaticFields::get_offset_of_dummyObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (ArrayListDebugView_t3771726562), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (CaseInsensitiveComparer_t120948663), -1, sizeof(CaseInsensitiveComparer_t120948663_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable317[2] = 
{
	CaseInsensitiveComparer_t120948663::get_offset_of_m_compareInfo_0(),
	CaseInsensitiveComparer_t120948663_StaticFields::get_offset_of_m_InvariantCaseInsensitiveComparer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (CaseInsensitiveHashCodeProvider_t2433738622), -1, sizeof(CaseInsensitiveHashCodeProvider_t2433738622_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable318[2] = 
{
	CaseInsensitiveHashCodeProvider_t2433738622::get_offset_of_m_text_0(),
	CaseInsensitiveHashCodeProvider_t2433738622_StaticFields::get_offset_of_m_InvariantCaseInsensitiveHashCodeProvider_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (CollectionBase_t4101284622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable319[1] = 
{
	CollectionBase_t4101284622::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (Comparer_t2709008246), -1, sizeof(Comparer_t2709008246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable320[3] = 
{
	Comparer_t2709008246::get_offset_of_m_compareInfo_0(),
	Comparer_t2709008246_StaticFields::get_offset_of_Default_1(),
	Comparer_t2709008246_StaticFields::get_offset_of_DefaultInvariant_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (CompatibleComparer_t2594081854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable321[2] = 
{
	CompatibleComparer_t2594081854::get_offset_of__comparer_0(),
	CompatibleComparer_t2594081854::get_offset_of__hcp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (DictionaryEntry_t2663557927)+ sizeof (RuntimeObject), sizeof(DictionaryEntry_t2663557927_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable322[2] = 
{
	DictionaryEntry_t2663557927::get_offset_of__key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DictionaryEntry_t2663557927::get_offset_of__value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (Hashtable_t3971943106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable323[11] = 
{
	Hashtable_t3971943106::get_offset_of_buckets_0(),
	Hashtable_t3971943106::get_offset_of_count_1(),
	Hashtable_t3971943106::get_offset_of_occupancy_2(),
	Hashtable_t3971943106::get_offset_of_loadsize_3(),
	Hashtable_t3971943106::get_offset_of_loadFactor_4(),
	Hashtable_t3971943106::get_offset_of_version_5(),
	Hashtable_t3971943106::get_offset_of_isWriterInProgress_6(),
	Hashtable_t3971943106::get_offset_of_keys_7(),
	Hashtable_t3971943106::get_offset_of_values_8(),
	Hashtable_t3971943106::get_offset_of__keycomparer_9(),
	Hashtable_t3971943106::get_offset_of__syncRoot_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (bucket_t137595746)+ sizeof (RuntimeObject), sizeof(bucket_t137595746_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable324[3] = 
{
	bucket_t137595746::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t137595746::get_offset_of_val_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	bucket_t137595746::get_offset_of_hash_coll_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (KeyCollection_t2085310685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[1] = 
{
	KeyCollection_t2085310685::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (ValueCollection_t3292631783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable326[1] = 
{
	ValueCollection_t3292631783::get_offset_of__hashtable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (SyncHashtable_t4038339263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable327[1] = 
{
	SyncHashtable_t4038339263::get_offset_of__table_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (HashtableEnumerator_t1961498450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable328[7] = 
{
	HashtableEnumerator_t1961498450::get_offset_of_hashtable_0(),
	HashtableEnumerator_t1961498450::get_offset_of_bucket_1(),
	HashtableEnumerator_t1961498450::get_offset_of_version_2(),
	HashtableEnumerator_t1961498450::get_offset_of_current_3(),
	HashtableEnumerator_t1961498450::get_offset_of_getObjectRetType_4(),
	HashtableEnumerator_t1961498450::get_offset_of_currentKey_5(),
	HashtableEnumerator_t1961498450::get_offset_of_currentValue_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (HashtableDebugView_t1804994889), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (HashHelpers_t3924298018), -1, sizeof(HashHelpers_t3924298018_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable330[2] = 
{
	HashHelpers_t3924298018_StaticFields::get_offset_of_primes_0(),
	HashHelpers_t3924298018_StaticFields::get_offset_of_s_SerializationInfoTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (Queue_t2200790801), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable342[7] = 
{
	Queue_t2200790801::get_offset_of__array_0(),
	Queue_t2200790801::get_offset_of__head_1(),
	Queue_t2200790801::get_offset_of__tail_2(),
	Queue_t2200790801::get_offset_of__size_3(),
	Queue_t2200790801::get_offset_of__growFactor_4(),
	Queue_t2200790801::get_offset_of__version_5(),
	Queue_t2200790801::get_offset_of__syncRoot_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (QueueEnumerator_t1004931433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable343[4] = 
{
	QueueEnumerator_t1004931433::get_offset_of__q_0(),
	QueueEnumerator_t1004931433::get_offset_of__index_1(),
	QueueEnumerator_t1004931433::get_offset_of__version_2(),
	QueueEnumerator_t1004931433::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (QueueDebugView_t2667007077), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (ReadOnlyCollectionBase_t3664736666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[1] = 
{
	ReadOnlyCollectionBase_t3664736666::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (SortedList_t3305246855), -1, sizeof(SortedList_t3305246855_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable346[9] = 
{
	SortedList_t3305246855::get_offset_of_keys_0(),
	SortedList_t3305246855::get_offset_of_values_1(),
	SortedList_t3305246855::get_offset_of__size_2(),
	SortedList_t3305246855::get_offset_of_version_3(),
	SortedList_t3305246855::get_offset_of_comparer_4(),
	SortedList_t3305246855::get_offset_of_keyList_5(),
	SortedList_t3305246855::get_offset_of_valueList_6(),
	SortedList_t3305246855::get_offset_of__syncRoot_7(),
	SortedList_t3305246855_StaticFields::get_offset_of_emptyArray_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (SyncSortedList_t243686350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable347[2] = 
{
	SyncSortedList_t243686350::get_offset_of__list_9(),
	SyncSortedList_t243686350::get_offset_of__root_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (SortedListEnumerator_t2810666562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable348[9] = 
{
	SortedListEnumerator_t2810666562::get_offset_of_sortedList_0(),
	SortedListEnumerator_t2810666562::get_offset_of_key_1(),
	SortedListEnumerator_t2810666562::get_offset_of_value_2(),
	SortedListEnumerator_t2810666562::get_offset_of_index_3(),
	SortedListEnumerator_t2810666562::get_offset_of_startIndex_4(),
	SortedListEnumerator_t2810666562::get_offset_of_endIndex_5(),
	SortedListEnumerator_t2810666562::get_offset_of_version_6(),
	SortedListEnumerator_t2810666562::get_offset_of_current_7(),
	SortedListEnumerator_t2810666562::get_offset_of_getObjectRetType_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (KeyList_t3191367262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable349[1] = 
{
	KeyList_t3191367262::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (ValueList_t1844454974), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable350[1] = 
{
	ValueList_t1844454974::get_offset_of_sortedList_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (SortedListDebugView_t3947104721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { sizeof (Stack_t3408888297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable352[4] = 
{
	Stack_t3408888297::get_offset_of__array_0(),
	Stack_t3408888297::get_offset_of__size_1(),
	Stack_t3408888297::get_offset_of__version_2(),
	Stack_t3408888297::get_offset_of__syncRoot_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { sizeof (StackEnumerator_t993024868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable353[4] = 
{
	StackEnumerator_t993024868::get_offset_of__stack_0(),
	StackEnumerator_t993024868::get_offset_of__index_1(),
	StackEnumerator_t993024868::get_offset_of__version_2(),
	StackEnumerator_t993024868::get_offset_of_currentElement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (StackDebugView_t3587433319), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (LowLevelComparer_t3608576024), -1, sizeof(LowLevelComparer_t3608576024_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable355[1] = 
{
	LowLevelComparer_t3608576024_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable356[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable365[14] = 
{
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable366[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable367[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable368[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable369[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable370[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable371[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable372[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (ByteEqualityComparer_t1830833492), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (KeyNotFoundException_t3040062054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable392[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable393[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable394[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (ObjectEqualityComparer_t4274297239), -1, sizeof(ObjectEqualityComparer_t4274297239_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable395[1] = 
{
	ObjectEqualityComparer_t4274297239_StaticFields::get_offset_of_Default_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable396[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable397[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable398[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (HashHelpers_t2577453909), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
