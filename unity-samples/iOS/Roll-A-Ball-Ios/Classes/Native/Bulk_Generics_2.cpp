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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t3535795091;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2320212868;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "System_Core_System_Collections_Generic_HashSet_1_g3535795091.h"
#include "System_Core_System_Collections_Generic_HashSet_1_g3535795091MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "System_Core_System_Collections_Generic_HashSet_1_E4014815677.h"
#include "System_Core_System_Collections_Generic_HashSet_1_E4014815677MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_ArgumentOutOfRangeException3479058991MethodDeclarations.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_ArgumentOutOfRangeException3479058991.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare271497070MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_EqualityCompare271497070.h"
#include "System.Core_ArrayTypes.h"
#include "System_Core_System_Collections_Generic_HashSet_1_L1745155715.h"
#include "mscorlib_System_ArgumentNullException3214793280MethodDeclarations.h"
#include "mscorlib_System_ArgumentException124305799MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException3214793280.h"
#include "mscorlib_System_ArgumentException124305799.h"
#include "mscorlib_System_Array2840145358MethodDeclarations.h"
#include "System_Core_System_Collections_Generic_HashSet_1_P3153218270MethodDeclarations.h"
#include "mscorlib_System_NotImplementedException1091014741MethodDeclarations.h"
#include "mscorlib_System_NotImplementedException1091014741.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C"  void HashSet_1__ctor_m4183732917_gshared (HashSet_1_t3535795091 * __this, const MethodInfo* method)
{
	{
		NullCheck((Il2CppObject *)__this);
		Object__ctor_m1772956182((Il2CppObject *)__this, /*hidden argument*/NULL);
		NullCheck((HashSet_1_t3535795091 *)__this);
		((  void (*) (HashSet_1_t3535795091 *, int32_t, Il2CppObject*, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0)->method)((HashSet_1_t3535795091 *)__this, (int32_t)((int32_t)10), (Il2CppObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HashSet_1__ctor_m3739212406_gshared (HashSet_1_t3535795091 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method)
{
	{
		NullCheck((Il2CppObject *)__this);
		Object__ctor_m1772956182((Il2CppObject *)__this, /*hidden argument*/NULL);
		SerializationInfo_t2995724695 * L_0 = ___info0;
		__this->set_si_8(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2351046527_gshared (HashSet_1_t3535795091 * __this, const MethodInfo* method)
{
	{
		Enumerator_t4014815679  L_0;
		memset(&L_0, 0, sizeof(L_0));
		((  void (*) (Enumerator_t4014815679 *, HashSet_1_t3535795091 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(&L_0, (HashSet_1_t3535795091 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t4014815679  L_1 = L_0;
		Il2CppObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Il2CppObject*)L_2;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2501283472_gshared (HashSet_1_t3535795091 * __this, const MethodInfo* method)
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C"  void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m1037632730_gshared (HashSet_1_t3535795091 * __this, ObjectU5BU5D_t11523773* ___array0, int32_t ___index1, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t11523773* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck((HashSet_1_t3535795091 *)__this);
		VirtActionInvoker2< ObjectU5BU5D_t11523773*, int32_t >::Invoke(15 /* System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32) */, (HashSet_1_t3535795091 *)__this, (ObjectU5BU5D_t11523773*)L_0, (int32_t)L_1);
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C"  void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4170802026_gshared (HashSet_1_t3535795091 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___item0;
		NullCheck((HashSet_1_t3535795091 *)__this);
		((  bool (*) (HashSet_1_t3535795091 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)((HashSet_1_t3535795091 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m1202823980_gshared (HashSet_1_t3535795091 * __this, const MethodInfo* method)
{
	{
		Enumerator_t4014815679  L_0;
		memset(&L_0, 0, sizeof(L_0));
		((  void (*) (Enumerator_t4014815679 *, HashSet_1_t3535795091 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(&L_0, (HashSet_1_t3535795091 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		Enumerator_t4014815679  L_1 = L_0;
		Il2CppObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1), &L_1);
		return (Il2CppObject *)L_2;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C"  int32_t HashSet_1_get_Count_m3501347367_gshared (HashSet_1_t3535795091 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_count_5();
		return L_0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern Il2CppClass* ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4227142842;
extern const uint32_t HashSet_1_Init_m2856515208_MetadataUsageId;
extern "C"  void HashSet_1_Init_m2856515208_gshared (HashSet_1_t3535795091 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Init_m2856515208_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Il2CppObject* G_B4_0 = NULL;
	HashSet_1_t3535795091 * G_B4_1 = NULL;
	Il2CppObject* G_B3_0 = NULL;
	HashSet_1_t3535795091 * G_B3_1 = NULL;
	{
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t3479058991 * L_1 = (ArgumentOutOfRangeException_t3479058991 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2026296331(L_1, (String_t*)_stringLiteral4227142842, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		Il2CppObject* L_2 = ___comparer1;
		Il2CppObject* L_3 = (Il2CppObject*)L_2;
		G_B3_0 = L_3;
		G_B3_1 = ((HashSet_1_t3535795091 *)(__this));
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = ((HashSet_1_t3535795091 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6));
		EqualityComparer_1_t271497070 * L_4 = ((  EqualityComparer_1_t271497070 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5));
		G_B4_0 = ((Il2CppObject*)(L_4));
		G_B4_1 = ((HashSet_1_t3535795091 *)(G_B3_1));
	}

IL_0020:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_comparer_7(G_B4_0);
		int32_t L_5 = ___capacity0;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		___capacity0 = (int32_t)((int32_t)10);
	}

IL_002f:
	{
		int32_t L_6 = ___capacity0;
		___capacity0 = (int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)((float)((float)(((float)((float)L_6)))/(float)(0.9f))))))+(int32_t)1));
		int32_t L_7 = ___capacity0;
		NullCheck((HashSet_1_t3535795091 *)__this);
		((  void (*) (HashSet_1_t3535795091 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)((HashSet_1_t3535795091 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		__this->set_generation_9(0);
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern Il2CppClass* Int32U5BU5D_t1809983122_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_InitArrays_m523929898_MetadataUsageId;
extern "C"  void HashSet_1_InitArrays_m523929898_gshared (HashSet_1_t3535795091 * __this, int32_t ___size0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_InitArrays_m523929898_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___size0;
		__this->set_table_0(((Int32U5BU5D_t1809983122*)SZArrayNew(Int32U5BU5D_t1809983122_il2cpp_TypeInfo_var, (uint32_t)L_0)));
		int32_t L_1 = ___size0;
		__this->set_links_1(((LinkU5BU5D_t808175634*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (uint32_t)L_1)));
		__this->set_empty_slot_4((-1));
		int32_t L_2 = ___size0;
		__this->set_slots_2(((ObjectU5BU5D_t11523773*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (uint32_t)L_2)));
		__this->set_touched_3(0);
		Int32U5BU5D_t1809983122* L_3 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_3);
		__this->set_threshold_6((((int32_t)((int32_t)((float)((float)(((float)((float)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length)))))))*(float)(0.9f)))))));
		int32_t L_4 = (int32_t)__this->get_threshold_6();
		if (L_4)
		{
			goto IL_0068;
		}
	}
	{
		Int32U5BU5D_t1809983122* L_5 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		__this->set_threshold_6(1);
	}

IL_0068:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C"  bool HashSet_1_SlotsContainsAt_m2666990736_gshared (HashSet_1_t3535795091 * __this, int32_t ___index0, int32_t ___hash1, Il2CppObject * ___item2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Link_t1745155715  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		Int32U5BU5D_t1809983122* L_0 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (int32_t)((int32_t)((int32_t)((L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2)))-(int32_t)1));
		goto IL_00a9;
	}

IL_0010:
	{
		LinkU5BU5D_t808175634* L_3 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		V_1 = (Link_t1745155715 )(*(Link_t1745155715 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))));
		int32_t L_5 = (int32_t)(&V_1)->get_HashCode_0();
		int32_t L_6 = ___hash1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_7 = ___hash1;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0082;
		}
	}
	{
		Il2CppObject * L_8 = ___item2;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t11523773* L_9 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		if (((L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11))))
		{
			goto IL_0082;
		}
	}

IL_005b:
	{
		Il2CppObject * L_12 = ___item2;
		if (L_12)
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t11523773* L_13 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		G_B8_0 = ((((Il2CppObject*)(Il2CppObject *)NULL) == ((Il2CppObject*)(Il2CppObject *)((L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15)))))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = 0;
	}

IL_007d:
	{
		G_B10_0 = G_B8_0;
		goto IL_009a;
	}

IL_0082:
	{
		Il2CppObject* L_16 = (Il2CppObject*)__this->get_comparer_7();
		Il2CppObject * L_17 = ___item2;
		ObjectU5BU5D_t11523773* L_18 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((Il2CppObject*)L_16);
		bool L_21 = InterfaceFuncInvoker2< bool, Il2CppObject *, Il2CppObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), (Il2CppObject*)L_16, (Il2CppObject *)L_17, (Il2CppObject *)((L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20))));
		G_B10_0 = ((int32_t)(L_21));
	}

IL_009a:
	{
		if (!G_B10_0)
		{
			goto IL_00a1;
		}
	}
	{
		return (bool)1;
	}

IL_00a1:
	{
		int32_t L_22 = (int32_t)(&V_1)->get_Next_1();
		V_0 = (int32_t)L_22;
	}

IL_00a9:
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C"  void HashSet_1_CopyTo_m2864960666_gshared (HashSet_1_t3535795091 * __this, ObjectU5BU5D_t11523773* ___array0, int32_t ___index1, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t11523773* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = (int32_t)__this->get_count_5();
		NullCheck((HashSet_1_t3535795091 *)__this);
		((  void (*) (HashSet_1_t3535795091 *, ObjectU5BU5D_t11523773*, int32_t, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12)->method)((HashSet_1_t3535795091 *)__this, (ObjectU5BU5D_t11523773*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 12));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral93090393;
extern Il2CppCodeGenString* _stringLiteral100346066;
extern Il2CppCodeGenString* _stringLiteral1142730282;
extern Il2CppCodeGenString* _stringLiteral2802514764;
extern const uint32_t HashSet_1_CopyTo_m2745373309_MetadataUsageId;
extern "C"  void HashSet_1_CopyTo_m2745373309_gshared (HashSet_1_t3535795091 * __this, ObjectU5BU5D_t11523773* ___array0, int32_t ___index1, int32_t ___count2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_CopyTo_m2745373309_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t11523773* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, (String_t*)_stringLiteral93090393, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t3479058991 * L_3 = (ArgumentOutOfRangeException_t3479058991 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t3479058991_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2026296331(L_3, (String_t*)_stringLiteral100346066, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index1;
		ObjectU5BU5D_t11523773* L_5 = ___array0;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentException_t124305799 * L_6 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_6, (String_t*)_stringLiteral1142730282, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0037:
	{
		ObjectU5BU5D_t11523773* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_7)->max_length))))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_t124305799 * L_10 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_10, (String_t*)_stringLiteral2802514764, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_004d:
	{
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		goto IL_007e;
	}

IL_0056:
	{
		int32_t L_11 = V_0;
		NullCheck((HashSet_1_t3535795091 *)__this);
		int32_t L_12 = ((  int32_t (*) (HashSet_1_t3535795091 *, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13)->method)((HashSet_1_t3535795091 *)__this, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 13));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		ObjectU5BU5D_t11523773* L_13 = ___array0;
		int32_t L_14 = ___index1;
		int32_t L_15 = (int32_t)L_14;
		___index1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
		ObjectU5BU5D_t11523773* L_16 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Il2CppObject *)((L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18))));
	}

IL_007a:
	{
		int32_t L_19 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = (int32_t)__this->get_touched_3();
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_22 = V_1;
		int32_t L_23 = ___count2;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}

IL_0091:
	{
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern Il2CppClass* Int32U5BU5D_t1809983122_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_Resize_m904498211_MetadataUsageId;
extern "C"  void HashSet_1_Resize_m904498211_gshared (HashSet_1_t3535795091 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Resize_m904498211_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1809983122* V_1 = NULL;
	LinkU5BU5D_t808175634* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t11523773* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Int32U5BU5D_t1809983122* L_0 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 15));
		int32_t L_1 = ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14)->method)(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 14));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1809983122*)((Int32U5BU5D_t1809983122*)SZArrayNew(Int32U5BU5D_t1809983122_il2cpp_TypeInfo_var, (uint32_t)L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t808175634*)((LinkU5BU5D_t808175634*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_00a6;
	}

IL_0027:
	{
		Int32U5BU5D_t1809983122* L_4 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_4 = (int32_t)((int32_t)((int32_t)((L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6)))-(int32_t)1));
		goto IL_009a;
	}

IL_0038:
	{
		LinkU5BU5D_t808175634* L_7 = V_2;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ObjectU5BU5D_t11523773* L_9 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_10 = V_4;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((HashSet_1_t3535795091 *)__this);
		int32_t L_12 = ((  int32_t (*) (HashSet_1_t3535795091 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)((HashSet_1_t3535795091 *)__this, (Il2CppObject *)((L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		int32_t L_13 = (int32_t)L_12;
		V_8 = (int32_t)L_13;
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->set_HashCode_0(L_13);
		int32_t L_14 = V_8;
		V_5 = (int32_t)L_14;
		int32_t L_15 = V_5;
		int32_t L_16 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15&(int32_t)((int32_t)2147483647LL)))%(int32_t)L_16));
		LinkU5BU5D_t808175634* L_17 = V_2;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		Int32U5BU5D_t1809983122* L_19 = V_1;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->set_Next_1(((int32_t)((int32_t)((L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21)))-(int32_t)1)));
		Int32U5BU5D_t1809983122* L_22 = V_1;
		int32_t L_23 = V_6;
		int32_t L_24 = V_4;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)((int32_t)((int32_t)L_24+(int32_t)1)));
		LinkU5BU5D_t808175634* L_25 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_26 = V_4;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_Next_1();
		V_4 = (int32_t)L_27;
	}

IL_009a:
	{
		int32_t L_28 = V_4;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_29 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_30 = V_3;
		Int32U5BU5D_t1809983122* L_31 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_31)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1809983122* L_32 = V_1;
		__this->set_table_0(L_32);
		LinkU5BU5D_t808175634* L_33 = V_2;
		__this->set_links_1(L_33);
		int32_t L_34 = V_0;
		V_7 = (ObjectU5BU5D_t11523773*)((ObjectU5BU5D_t11523773*)SZArrayNew(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9), (uint32_t)L_34));
		ObjectU5BU5D_t11523773* L_35 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		ObjectU5BU5D_t11523773* L_36 = V_7;
		int32_t L_37 = (int32_t)__this->get_touched_3();
		Array_Copy_m2598616668(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_35, (int32_t)0, (Il2CppArray *)(Il2CppArray *)L_36, (int32_t)0, (int32_t)L_37, /*hidden argument*/NULL);
		ObjectU5BU5D_t11523773* L_38 = V_7;
		__this->set_slots_2(L_38);
		int32_t L_39 = V_0;
		__this->set_threshold_6((((int32_t)((int32_t)((float)((float)(((float)((float)L_39)))*(float)(0.9f)))))));
		return;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C"  int32_t HashSet_1_GetLinkHashCode_m1128863229_gshared (HashSet_1_t3535795091 * __this, int32_t ___index0, const MethodInfo* method)
{
	{
		LinkU5BU5D_t808175634* L_0 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		return ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C"  int32_t HashSet_1_GetItemHashCode_m416797561_gshared (HashSet_1_t3535795091 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___item0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return ((int32_t)-2147483648LL);
	}

IL_0011:
	{
		Il2CppObject* L_1 = (Il2CppObject*)__this->get_comparer_7();
		Il2CppObject * L_2 = ___item0;
		NullCheck((Il2CppObject*)L_1);
		int32_t L_3 = InterfaceFuncInvoker1< int32_t, Il2CppObject * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), (Il2CppObject*)L_1, (Il2CppObject *)L_2);
		return ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C"  bool HashSet_1_Add_m3739352086_gshared (HashSet_1_t3535795091 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Il2CppObject * L_0 = ___item0;
		NullCheck((HashSet_1_t3535795091 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t3535795091 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)((HashSet_1_t3535795091 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t1809983122* L_3 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Il2CppObject * L_6 = ___item0;
		NullCheck((HashSet_1_t3535795091 *)__this);
		bool L_7 = ((  bool (*) (HashSet_1_t3535795091 *, int32_t, int32_t, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((HashSet_1_t3535795091 *)__this, (int32_t)L_4, (int32_t)L_5, (Il2CppObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		int32_t L_8 = (int32_t)__this->get_count_5();
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
		V_3 = (int32_t)L_9;
		__this->set_count_5(L_9);
		int32_t L_10 = V_3;
		int32_t L_11 = (int32_t)__this->get_threshold_6();
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_005c;
		}
	}
	{
		NullCheck((HashSet_1_t3535795091 *)__this);
		((  void (*) (HashSet_1_t3535795091 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18)->method)((HashSet_1_t3535795091 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 18));
		int32_t L_12 = V_0;
		Int32U5BU5D_t1809983122* L_13 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_13);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_13)->max_length))))));
	}

IL_005c:
	{
		int32_t L_14 = (int32_t)__this->get_empty_slot_4();
		V_2 = (int32_t)L_14;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_16 = (int32_t)__this->get_touched_3();
		int32_t L_17 = (int32_t)L_16;
		V_3 = (int32_t)L_17;
		__this->set_touched_3(((int32_t)((int32_t)L_17+(int32_t)1)));
		int32_t L_18 = V_3;
		V_2 = (int32_t)L_18;
		goto IL_0098;
	}

IL_0081:
	{
		LinkU5BU5D_t808175634* L_19 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_Next_1();
		__this->set_empty_slot_4(L_21);
	}

IL_0098:
	{
		LinkU5BU5D_t808175634* L_22 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = V_0;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->set_HashCode_0(L_24);
		LinkU5BU5D_t808175634* L_25 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_26 = V_2;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		Int32U5BU5D_t1809983122* L_27 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		int32_t L_28 = V_1;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		int32_t L_29 = L_28;
		((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->set_Next_1(((int32_t)((int32_t)((L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29)))-(int32_t)1)));
		Int32U5BU5D_t1809983122* L_30 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)((int32_t)((int32_t)L_32+(int32_t)1)));
		ObjectU5BU5D_t11523773* L_33 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_34 = V_2;
		Il2CppObject * L_35 = ___item0;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Il2CppObject *)L_35);
		int32_t L_36 = (int32_t)__this->get_generation_9();
		__this->set_generation_9(((int32_t)((int32_t)L_36+(int32_t)1)));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C"  void HashSet_1_Clear_m1589866208_gshared (HashSet_1_t3535795091 * __this, const MethodInfo* method)
{
	{
		__this->set_count_5(0);
		Int32U5BU5D_t1809983122* L_0 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		Int32U5BU5D_t1809983122* L_1 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_1);
		Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_0, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t11523773* L_2 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		ObjectU5BU5D_t11523773* L_3 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		NullCheck(L_3);
		Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_2, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length)))), /*hidden argument*/NULL);
		LinkU5BU5D_t808175634* L_4 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		LinkU5BU5D_t808175634* L_5 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		NullCheck(L_5);
		Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_4, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		__this->set_empty_slot_4((-1));
		__this->set_touched_3(0);
		int32_t L_6 = (int32_t)__this->get_generation_9();
		__this->set_generation_9(((int32_t)((int32_t)L_6+(int32_t)1)));
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C"  bool HashSet_1_Contains_m3727111780_gshared (HashSet_1_t3535795091 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Il2CppObject * L_0 = ___item0;
		NullCheck((HashSet_1_t3535795091 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t3535795091 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)((HashSet_1_t3535795091 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t1809983122* L_3 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		Il2CppObject * L_6 = ___item0;
		NullCheck((HashSet_1_t3535795091 *)__this);
		bool L_7 = ((  bool (*) (HashSet_1_t3535795091 *, int32_t, int32_t, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17)->method)((HashSet_1_t3535795091 *)__this, (int32_t)L_4, (int32_t)L_5, (Il2CppObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 17));
		return L_7;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_Remove_m3015589727_MetadataUsageId;
extern "C"  bool HashSet_1_Remove_m3015589727_gshared (HashSet_1_t3535795091 * __this, Il2CppObject * ___item0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Remove_m3015589727_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Link_t1745155715  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Il2CppObject * V_5 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Il2CppObject * L_0 = ___item0;
		NullCheck((HashSet_1_t3535795091 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t3535795091 *, Il2CppObject *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16)->method)((HashSet_1_t3535795091 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 16));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t1809983122* L_3 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_3)->max_length))))));
		Int32U5BU5D_t1809983122* L_4 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_2 = (int32_t)((int32_t)((int32_t)((L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6)))-(int32_t)1));
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}

IL_002d:
	{
		V_3 = (int32_t)(-1);
	}

IL_002f:
	{
		LinkU5BU5D_t808175634* L_8 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		V_4 = (Link_t1745155715 )(*(Link_t1745155715 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))));
		int32_t L_10 = (int32_t)(&V_4)->get_HashCode_0();
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_00a2;
		}
	}
	{
		Il2CppObject * L_13 = ___item0;
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		ObjectU5BU5D_t11523773* L_14 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		if (((L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16))))
		{
			goto IL_00a2;
		}
	}

IL_007b:
	{
		Il2CppObject * L_17 = ___item0;
		if (L_17)
		{
			goto IL_009c;
		}
	}
	{
		ObjectU5BU5D_t11523773* L_18 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		G_B10_0 = ((((Il2CppObject*)(Il2CppObject *)NULL) == ((Il2CppObject*)(Il2CppObject *)((L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20)))))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B10_0 = 0;
	}

IL_009d:
	{
		G_B12_0 = G_B10_0;
		goto IL_00ba;
	}

IL_00a2:
	{
		Il2CppObject* L_21 = (Il2CppObject*)__this->get_comparer_7();
		ObjectU5BU5D_t11523773* L_22 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		int32_t L_24 = L_23;
		Il2CppObject * L_25 = ___item0;
		NullCheck((Il2CppObject*)L_21);
		bool L_26 = InterfaceFuncInvoker2< bool, Il2CppObject *, Il2CppObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 11), (Il2CppObject*)L_21, (Il2CppObject *)((L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppObject *)L_25);
		G_B12_0 = ((int32_t)(L_26));
	}

IL_00ba:
	{
		if (!G_B12_0)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c4:
	{
		int32_t L_27 = V_2;
		V_3 = (int32_t)L_27;
		int32_t L_28 = (int32_t)(&V_4)->get_Next_1();
		V_2 = (int32_t)L_28;
		int32_t L_29 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}

IL_00d5:
	{
		int32_t L_30 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_00de;
		}
	}
	{
		return (bool)0;
	}

IL_00de:
	{
		int32_t L_31 = (int32_t)__this->get_count_5();
		__this->set_count_5(((int32_t)((int32_t)L_31-(int32_t)1)));
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
		{
			goto IL_0113;
		}
	}
	{
		Int32U5BU5D_t1809983122* L_33 = (Int32U5BU5D_t1809983122*)__this->get_table_0();
		int32_t L_34 = V_1;
		LinkU5BU5D_t808175634* L_35 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		int32_t L_37 = (int32_t)((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->get_Next_1();
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (int32_t)((int32_t)((int32_t)L_37+(int32_t)1)));
		goto IL_0135;
	}

IL_0113:
	{
		LinkU5BU5D_t808175634* L_38 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_39 = V_3;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		LinkU5BU5D_t808175634* L_40 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_41 = V_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, L_41);
		int32_t L_42 = (int32_t)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_Next_1();
		((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->set_Next_1(L_42);
	}

IL_0135:
	{
		LinkU5BU5D_t808175634* L_43 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_44 = V_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		int32_t L_45 = (int32_t)__this->get_empty_slot_4();
		((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->set_Next_1(L_45);
		int32_t L_46 = V_2;
		__this->set_empty_slot_4(L_46);
		LinkU5BU5D_t808175634* L_47 = (LinkU5BU5D_t808175634*)__this->get_links_1();
		int32_t L_48 = V_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->set_HashCode_0(0);
		ObjectU5BU5D_t11523773* L_49 = (ObjectU5BU5D_t11523773*)__this->get_slots_2();
		int32_t L_50 = V_2;
		Initobj (Il2CppObject_il2cpp_TypeInfo_var, (&V_5));
		Il2CppObject * L_51 = V_5;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Il2CppObject *)L_51);
		int32_t L_52 = (int32_t)__this->get_generation_9();
		__this->set_generation_9(((int32_t)((int32_t)L_52+(int32_t)1)));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppClass* NotImplementedException_t1091014741_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_GetObjectData_m2922531795_MetadataUsageId;
extern "C"  void HashSet_1_GetObjectData_m2922531795_gshared (HashSet_1_t3535795091 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_GetObjectData_m2922531795_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1091014741 * L_0 = (NotImplementedException_t1091014741 *)il2cpp_codegen_object_new(NotImplementedException_t1091014741_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m2063223793(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern Il2CppClass* NotImplementedException_t1091014741_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_OnDeserialization_m3000579185_MetadataUsageId;
extern "C"  void HashSet_1_OnDeserialization_m3000579185_gshared (HashSet_1_t3535795091 * __this, Il2CppObject * ___sender0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_OnDeserialization_m3000579185_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2995724695 * L_0 = (SerializationInfo_t2995724695 *)__this->get_si_8();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		NotImplementedException_t1091014741 * L_1 = (NotImplementedException_t1091014741 *)il2cpp_codegen_object_new(NotImplementedException_t1091014741_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m2063223793(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t4014815679  HashSet_1_GetEnumerator_m2905523585_gshared (HashSet_1_t3535795091 * __this, const MethodInfo* method)
{
	{
		Enumerator_t4014815679  L_0;
		memset(&L_0, 0, sizeof(L_0));
		((  void (*) (Enumerator_t4014815679 *, HashSet_1_t3535795091 *, const MethodInfo*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(&L_0, (HashSet_1_t3535795091 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
