#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo IList_1_t8977_il2cpp_TypeInfo;

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo IList_1_get_Item_m46272_MethodInfo;
extern MethodInfo IList_1_set_Item_m46273_MethodInfo;
static PropertyInfo IList_1_t8977____Item_PropertyInfo = 
{
	&IList_1_t8977_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46272_MethodInfo/* get */
	, &IList_1_set_Item_m46273_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8977_PropertyInfos[] =
{
	&IList_1_t8977____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2702_0_0_0;
extern Il2CppType IEquatable_1_t2702_0_0_0;
static ParameterInfo IList_1_t8977_IList_1_IndexOf_m46274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2702_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46274_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46274_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8977_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8977_IList_1_IndexOf_m46274_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46274_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IEquatable_1_t2702_0_0_0;
static ParameterInfo IList_1_t8977_IList_1_Insert_m46275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2702_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46275_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46275_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8977_IList_1_Insert_m46275_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46275_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8977_IList_1_RemoveAt_m46276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46276_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46276_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8977_IList_1_RemoveAt_m46276_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46276_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8977_IList_1_get_Item_m46272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IEquatable_1_t2702_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46272_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46272_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8977_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2702_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8977_IList_1_get_Item_m46272_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46272_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IEquatable_1_t2702_0_0_0;
static ParameterInfo IList_1_t8977_IList_1_set_Item_m46273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2702_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46273_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46273_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8977_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8977_IList_1_set_Item_m46273_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46273_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8977_MethodInfos[] =
{
	&IList_1_IndexOf_m46274_MethodInfo,
	&IList_1_Insert_m46275_MethodInfo,
	&IList_1_RemoveAt_m46276_MethodInfo,
	&IList_1_get_Item_m46272_MethodInfo,
	&IList_1_set_Item_m46273_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t88_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t8976_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8978_il2cpp_TypeInfo;
static TypeInfo* IList_1_t8977_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8976_il2cpp_TypeInfo,
	&IEnumerable_1_t8978_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8977_0_0_0;
extern Il2CppType IList_1_t8977_1_0_0;
struct IList_1_t8977;
extern Il2CppGenericClass IList_1_t8977_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8977_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8977_MethodInfos/* methods */
	, IList_1_t8977_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8977_il2cpp_TypeInfo/* element_class */
	, IList_1_t8977_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8977_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8977_0_0_0/* byval_arg */
	, &IList_1_t8977_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8977_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6911_il2cpp_TypeInfo;

// System.Decimal
#include "mscorlib_System_Decimal.h"


// T System.Collections.Generic.IEnumerator`1<System.Decimal>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Decimal>
extern MethodInfo IEnumerator_1_get_Current_m46277_MethodInfo;
static PropertyInfo IEnumerator_1_t6911____Current_PropertyInfo = 
{
	&IEnumerator_1_t6911_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46277_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6911_PropertyInfos[] =
{
	&IEnumerator_1_t6911____Current_PropertyInfo,
	NULL
};
extern Il2CppType Decimal_t5_0_0_0;
extern void* RuntimeInvoker_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46277_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Decimal>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46277_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6911_il2cpp_TypeInfo/* declaring_type */
	, &Decimal_t5_0_0_0/* return_type */
	, RuntimeInvoker_Decimal_t5/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46277_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6911_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46277_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t21_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t69_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t6911_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6911_0_0_0;
extern Il2CppType IEnumerator_1_t6911_1_0_0;
struct IEnumerator_1_t6911;
extern Il2CppGenericClass IEnumerator_1_t6911_GenericClass;
TypeInfo IEnumerator_1_t6911_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6911_MethodInfos/* methods */
	, IEnumerator_1_t6911_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6911_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6911_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6911_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6911_0_0_0/* byval_arg */
	, &IEnumerator_1_t6911_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6911_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_703.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4849_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_703MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Decimal_t5_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1534_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m26356_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6562_MethodInfo;
extern MethodInfo Array_get_Length_m1819_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDecimal_t5_m35595_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
 Decimal_t5  Array_InternalArray__get_Item_TisDecimal_t5_m35595 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26352_MethodInfo;
 void InternalEnumerator_1__ctor_m26352 (InternalEnumerator_1_t4849 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353 (InternalEnumerator_1_t4849 * __this, MethodInfo* method){
	{
		Decimal_t5  L_0 = InternalEnumerator_1_get_Current_m26356(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26356_MethodInfo);
		Decimal_t5  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Decimal_t5_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26354_MethodInfo;
 void InternalEnumerator_1_Dispose_m26354 (InternalEnumerator_1_t4849 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26355_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26355 (InternalEnumerator_1_t4849 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
 Decimal_t5  InternalEnumerator_1_get_Current_m26356 (InternalEnumerator_1_t4849 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Decimal_t5  L_8 = Array_InternalArray__get_Item_TisDecimal_t5_m35595(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDecimal_t5_m35595_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Decimal>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4849____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4849, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4849____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4849, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4849_FieldInfos[] =
{
	&InternalEnumerator_1_t4849____array_0_FieldInfo,
	&InternalEnumerator_1_t4849____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4849____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4849_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4849____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4849_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26356_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4849_PropertyInfos[] =
{
	&InternalEnumerator_1_t4849____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4849____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4849_InternalEnumerator_1__ctor_m26352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26352_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26352_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26352/* method */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4849_InternalEnumerator_1__ctor_m26352_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26352_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353/* method */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26354_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26354_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26354/* method */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26354_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26355_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26355_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26355/* method */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26355_GenericMethod/* genericMethod */

};
extern Il2CppType Decimal_t5_0_0_0;
extern void* RuntimeInvoker_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26356_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26356_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26356/* method */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* declaring_type */
	, &Decimal_t5_0_0_0/* return_type */
	, RuntimeInvoker_Decimal_t5/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26356_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4849_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26352_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo,
	&InternalEnumerator_1_Dispose_m26354_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26355_MethodInfo,
	&InternalEnumerator_1_get_Current_m26356_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3280_MethodInfo;
extern MethodInfo Object_Finalize_m416_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3281_MethodInfo;
extern MethodInfo ValueType_ToString_m3369_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4849_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26355_MethodInfo,
	&InternalEnumerator_1_Dispose_m26354_MethodInfo,
	&InternalEnumerator_1_get_Current_m26356_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4849_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6911_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4849_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6911_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4849_0_0_0;
extern Il2CppType InternalEnumerator_1_t4849_1_0_0;
extern TypeInfo ValueType_t700_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4849_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4849_MethodInfos/* methods */
	, InternalEnumerator_1_t4849_PropertyInfos/* properties */
	, InternalEnumerator_1_t4849_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4849_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4849_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4849_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4849_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4849_1_0_0/* this_arg */
	, InternalEnumerator_1_t4849_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4849_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4849)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t8979_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Decimal>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Decimal>
extern MethodInfo ICollection_1_get_Count_m46278_MethodInfo;
static PropertyInfo ICollection_1_t8979____Count_PropertyInfo = 
{
	&ICollection_1_t8979_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46279_MethodInfo;
static PropertyInfo ICollection_1_t8979____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8979_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46279_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8979_PropertyInfos[] =
{
	&ICollection_1_t8979____Count_PropertyInfo,
	&ICollection_1_t8979____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46278_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Decimal>::get_Count()
MethodInfo ICollection_1_get_Count_m46278_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46278_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46279_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46279_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46279_GenericMethod/* genericMethod */

};
extern Il2CppType Decimal_t5_0_0_0;
extern Il2CppType Decimal_t5_0_0_0;
static ParameterInfo ICollection_1_t8979_ICollection_1_Add_m46280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t5_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46280_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Add(T)
MethodInfo ICollection_1_Add_m46280_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Decimal_t5/* invoker_method */
	, ICollection_1_t8979_ICollection_1_Add_m46280_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46280_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46281_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Clear()
MethodInfo ICollection_1_Clear_m46281_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46281_GenericMethod/* genericMethod */

};
extern Il2CppType Decimal_t5_0_0_0;
static ParameterInfo ICollection_1_t8979_ICollection_1_Contains_m46282_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t5_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46282_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Contains(T)
MethodInfo ICollection_1_Contains_m46282_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Decimal_t5/* invoker_method */
	, ICollection_1_t8979_ICollection_1_Contains_m46282_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46282_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalU5BU5D_t2681_0_0_0;
extern Il2CppType DecimalU5BU5D_t2681_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8979_ICollection_1_CopyTo_m46283_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DecimalU5BU5D_t2681_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46283_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46283_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8979_ICollection_1_CopyTo_m46283_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46283_GenericMethod/* genericMethod */

};
extern Il2CppType Decimal_t5_0_0_0;
static ParameterInfo ICollection_1_t8979_ICollection_1_Remove_m46284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t5_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46284_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Remove(T)
MethodInfo ICollection_1_Remove_m46284_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Decimal_t5/* invoker_method */
	, ICollection_1_t8979_ICollection_1_Remove_m46284_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46284_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8979_MethodInfos[] =
{
	&ICollection_1_get_Count_m46278_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46279_MethodInfo,
	&ICollection_1_Add_m46280_MethodInfo,
	&ICollection_1_Clear_m46281_MethodInfo,
	&ICollection_1_Contains_m46282_MethodInfo,
	&ICollection_1_CopyTo_m46283_MethodInfo,
	&ICollection_1_Remove_m46284_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8981_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8979_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8981_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8979_0_0_0;
extern Il2CppType ICollection_1_t8979_1_0_0;
struct ICollection_1_t8979;
extern Il2CppGenericClass ICollection_1_t8979_GenericClass;
TypeInfo ICollection_1_t8979_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8979_MethodInfos/* methods */
	, ICollection_1_t8979_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8979_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8979_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8979_0_0_0/* byval_arg */
	, &ICollection_1_t8979_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8979_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Decimal>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Decimal>
extern Il2CppType IEnumerator_1_t6911_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46285_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Decimal>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46285_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8981_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6911_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46285_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8981_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46285_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8981_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8981_0_0_0;
extern Il2CppType IEnumerable_1_t8981_1_0_0;
struct IEnumerable_1_t8981;
extern Il2CppGenericClass IEnumerable_1_t8981_GenericClass;
TypeInfo IEnumerable_1_t8981_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8981_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8981_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8981_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8981_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8981_0_0_0/* byval_arg */
	, &IEnumerable_1_t8981_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8981_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t8980_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Decimal>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Decimal>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Decimal>
extern MethodInfo IList_1_get_Item_m46286_MethodInfo;
extern MethodInfo IList_1_set_Item_m46287_MethodInfo;
static PropertyInfo IList_1_t8980____Item_PropertyInfo = 
{
	&IList_1_t8980_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46286_MethodInfo/* get */
	, &IList_1_set_Item_m46287_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8980_PropertyInfos[] =
{
	&IList_1_t8980____Item_PropertyInfo,
	NULL
};
extern Il2CppType Decimal_t5_0_0_0;
static ParameterInfo IList_1_t8980_IList_1_IndexOf_m46288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t5_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46288_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Decimal>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46288_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8980_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Decimal_t5/* invoker_method */
	, IList_1_t8980_IList_1_IndexOf_m46288_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46288_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Decimal_t5_0_0_0;
static ParameterInfo IList_1_t8980_IList_1_Insert_m46289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Decimal_t5_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46289_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Decimal>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46289_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Decimal_t5/* invoker_method */
	, IList_1_t8980_IList_1_Insert_m46289_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46289_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8980_IList_1_RemoveAt_m46290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46290_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Decimal>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46290_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8980_IList_1_RemoveAt_m46290_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46290_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8980_IList_1_get_Item_m46286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Decimal_t5_0_0_0;
extern void* RuntimeInvoker_Decimal_t5_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46286_GenericMethod;
// T System.Collections.Generic.IList`1<System.Decimal>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46286_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8980_il2cpp_TypeInfo/* declaring_type */
	, &Decimal_t5_0_0_0/* return_type */
	, RuntimeInvoker_Decimal_t5_Int32_t63/* invoker_method */
	, IList_1_t8980_IList_1_get_Item_m46286_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46286_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Decimal_t5_0_0_0;
static ParameterInfo IList_1_t8980_IList_1_set_Item_m46287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Decimal_t5_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46287_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Decimal>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46287_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8980_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Decimal_t5/* invoker_method */
	, IList_1_t8980_IList_1_set_Item_m46287_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46287_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8980_MethodInfos[] =
{
	&IList_1_IndexOf_m46288_MethodInfo,
	&IList_1_Insert_m46289_MethodInfo,
	&IList_1_RemoveAt_m46290_MethodInfo,
	&IList_1_get_Item_m46286_MethodInfo,
	&IList_1_set_Item_m46287_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8980_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8979_il2cpp_TypeInfo,
	&IEnumerable_1_t8981_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8980_0_0_0;
extern Il2CppType IList_1_t8980_1_0_0;
struct IList_1_t8980;
extern Il2CppGenericClass IList_1_t8980_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8980_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8980_MethodInfos/* methods */
	, IList_1_t8980_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8980_il2cpp_TypeInfo/* element_class */
	, IList_1_t8980_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8980_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8980_0_0_0/* byval_arg */
	, &IList_1_t8980_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8980_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t8982_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>
extern MethodInfo ICollection_1_get_Count_m46291_MethodInfo;
static PropertyInfo ICollection_1_t8982____Count_PropertyInfo = 
{
	&ICollection_1_t8982_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46292_MethodInfo;
static PropertyInfo ICollection_1_t8982____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8982_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46292_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8982_PropertyInfos[] =
{
	&ICollection_1_t8982____Count_PropertyInfo,
	&ICollection_1_t8982____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46291_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_Count()
MethodInfo ICollection_1_get_Count_m46291_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46291_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46292_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46292_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46292_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2375_0_0_0;
extern Il2CppType IComparable_1_t2375_0_0_0;
static ParameterInfo ICollection_1_t8982_ICollection_1_Add_m46293_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2375_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46293_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Add(T)
MethodInfo ICollection_1_Add_m46293_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8982_ICollection_1_Add_m46293_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46293_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46294_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Clear()
MethodInfo ICollection_1_Clear_m46294_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46294_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2375_0_0_0;
static ParameterInfo ICollection_1_t8982_ICollection_1_Contains_m46295_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2375_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46295_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Contains(T)
MethodInfo ICollection_1_Contains_m46295_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8982_ICollection_1_Contains_m46295_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46295_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t5107_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t5107_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8982_ICollection_1_CopyTo_m46296_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t5107_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46296_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46296_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8982_ICollection_1_CopyTo_m46296_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46296_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2375_0_0_0;
static ParameterInfo ICollection_1_t8982_ICollection_1_Remove_m46297_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2375_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46297_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Remove(T)
MethodInfo ICollection_1_Remove_m46297_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8982_ICollection_1_Remove_m46297_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46297_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8982_MethodInfos[] =
{
	&ICollection_1_get_Count_m46291_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46292_MethodInfo,
	&ICollection_1_Add_m46293_MethodInfo,
	&ICollection_1_Clear_m46294_MethodInfo,
	&ICollection_1_Contains_m46295_MethodInfo,
	&ICollection_1_CopyTo_m46296_MethodInfo,
	&ICollection_1_Remove_m46297_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8984_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8982_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8984_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8982_0_0_0;
extern Il2CppType ICollection_1_t8982_1_0_0;
struct ICollection_1_t8982;
extern Il2CppGenericClass ICollection_1_t8982_GenericClass;
TypeInfo ICollection_1_t8982_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8982_MethodInfos/* methods */
	, ICollection_1_t8982_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8982_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8982_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8982_0_0_0/* byval_arg */
	, &ICollection_1_t8982_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8982_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>
extern Il2CppType IEnumerator_1_t6913_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46298_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46298_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8984_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6913_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46298_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8984_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46298_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8984_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8984_0_0_0;
extern Il2CppType IEnumerable_1_t8984_1_0_0;
struct IEnumerable_1_t8984;
extern Il2CppGenericClass IEnumerable_1_t8984_GenericClass;
TypeInfo IEnumerable_1_t8984_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8984_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8984_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8984_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8984_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8984_0_0_0/* byval_arg */
	, &IEnumerable_1_t8984_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8984_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6913_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>
extern MethodInfo IEnumerator_1_get_Current_m46299_MethodInfo;
static PropertyInfo IEnumerator_1_t6913____Current_PropertyInfo = 
{
	&IEnumerator_1_t6913_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46299_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6913_PropertyInfos[] =
{
	&IEnumerator_1_t6913____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2375_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46299_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46299_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6913_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2375_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46299_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6913_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46299_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6913_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6913_0_0_0;
extern Il2CppType IEnumerator_1_t6913_1_0_0;
struct IEnumerator_1_t6913;
extern Il2CppGenericClass IEnumerator_1_t6913_GenericClass;
TypeInfo IEnumerator_1_t6913_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6913_MethodInfos/* methods */
	, IEnumerator_1_t6913_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6913_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6913_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6913_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6913_0_0_0/* byval_arg */
	, &IEnumerator_1_t6913_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6913_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_704.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4850_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_704MethodDeclarations.h"

extern TypeInfo IComparable_1_t2375_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26361_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2375_m35606_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26773_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26773(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2375_m35606(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4850____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4850, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4850____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4850, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4850_FieldInfos[] =
{
	&InternalEnumerator_1_t4850____array_0_FieldInfo,
	&InternalEnumerator_1_t4850____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4850____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4850_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4850____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4850_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26361_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4850_PropertyInfos[] =
{
	&InternalEnumerator_1_t4850____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4850____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4850_InternalEnumerator_1__ctor_m26357_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26357_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26357_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4850_InternalEnumerator_1__ctor_m26357_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26357_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26359_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26359_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26359_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26360_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26360_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26360_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2375_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26361_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26361_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2375_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26361_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4850_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26357_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo,
	&InternalEnumerator_1_Dispose_m26359_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26360_MethodInfo,
	&InternalEnumerator_1_get_Current_m26361_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26360_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26359_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4850_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26360_MethodInfo,
	&InternalEnumerator_1_Dispose_m26359_MethodInfo,
	&InternalEnumerator_1_get_Current_m26361_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4850_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6913_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4850_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6913_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2375_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4850_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26361_MethodInfo/* Method Usage */,
	&IComparable_1_t2375_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2375_m35606_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4850_0_0_0;
extern Il2CppType InternalEnumerator_1_t4850_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4850_GenericClass;
TypeInfo InternalEnumerator_1_t4850_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4850_MethodInfos/* methods */
	, InternalEnumerator_1_t4850_PropertyInfos/* properties */
	, InternalEnumerator_1_t4850_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4850_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4850_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4850_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4850_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4850_1_0_0/* this_arg */
	, InternalEnumerator_1_t4850_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4850_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4850_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4850)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t8983_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>
extern MethodInfo IList_1_get_Item_m46300_MethodInfo;
extern MethodInfo IList_1_set_Item_m46301_MethodInfo;
static PropertyInfo IList_1_t8983____Item_PropertyInfo = 
{
	&IList_1_t8983_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46300_MethodInfo/* get */
	, &IList_1_set_Item_m46301_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8983_PropertyInfos[] =
{
	&IList_1_t8983____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2375_0_0_0;
static ParameterInfo IList_1_t8983_IList_1_IndexOf_m46302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2375_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46302_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46302_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8983_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8983_IList_1_IndexOf_m46302_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46302_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IComparable_1_t2375_0_0_0;
static ParameterInfo IList_1_t8983_IList_1_Insert_m46303_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2375_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46303_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46303_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8983_IList_1_Insert_m46303_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46303_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8983_IList_1_RemoveAt_m46304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46304_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46304_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8983_IList_1_RemoveAt_m46304_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46304_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8983_IList_1_get_Item_m46300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IComparable_1_t2375_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46300_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46300_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8983_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2375_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8983_IList_1_get_Item_m46300_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46300_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IComparable_1_t2375_0_0_0;
static ParameterInfo IList_1_t8983_IList_1_set_Item_m46301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2375_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46301_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46301_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8983_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8983_IList_1_set_Item_m46301_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46301_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8983_MethodInfos[] =
{
	&IList_1_IndexOf_m46302_MethodInfo,
	&IList_1_Insert_m46303_MethodInfo,
	&IList_1_RemoveAt_m46304_MethodInfo,
	&IList_1_get_Item_m46300_MethodInfo,
	&IList_1_set_Item_m46301_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8983_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8982_il2cpp_TypeInfo,
	&IEnumerable_1_t8984_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8983_0_0_0;
extern Il2CppType IList_1_t8983_1_0_0;
struct IList_1_t8983;
extern Il2CppGenericClass IList_1_t8983_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8983_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8983_MethodInfos/* methods */
	, IList_1_t8983_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8983_il2cpp_TypeInfo/* element_class */
	, IList_1_t8983_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8983_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8983_0_0_0/* byval_arg */
	, &IList_1_t8983_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8983_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t8985_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo ICollection_1_get_Count_m46305_MethodInfo;
static PropertyInfo ICollection_1_t8985____Count_PropertyInfo = 
{
	&ICollection_1_t8985_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46305_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46306_MethodInfo;
static PropertyInfo ICollection_1_t8985____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8985_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46306_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8985_PropertyInfos[] =
{
	&ICollection_1_t8985____Count_PropertyInfo,
	&ICollection_1_t8985____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46305_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_Count()
MethodInfo ICollection_1_get_Count_m46305_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46305_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46306_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46306_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46306_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2376_0_0_0;
extern Il2CppType IEquatable_1_t2376_0_0_0;
static ParameterInfo ICollection_1_t8985_ICollection_1_Add_m46307_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2376_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46307_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Add(T)
MethodInfo ICollection_1_Add_m46307_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8985_ICollection_1_Add_m46307_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46307_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46308_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Clear()
MethodInfo ICollection_1_Clear_m46308_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46308_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2376_0_0_0;
static ParameterInfo ICollection_1_t8985_ICollection_1_Contains_m46309_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2376_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46309_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Contains(T)
MethodInfo ICollection_1_Contains_m46309_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8985_ICollection_1_Contains_m46309_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46309_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t5108_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t5108_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8985_ICollection_1_CopyTo_m46310_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t5108_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46310_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46310_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8985_ICollection_1_CopyTo_m46310_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46310_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2376_0_0_0;
static ParameterInfo ICollection_1_t8985_ICollection_1_Remove_m46311_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2376_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46311_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Remove(T)
MethodInfo ICollection_1_Remove_m46311_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8985_ICollection_1_Remove_m46311_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46311_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8985_MethodInfos[] =
{
	&ICollection_1_get_Count_m46305_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46306_MethodInfo,
	&ICollection_1_Add_m46307_MethodInfo,
	&ICollection_1_Clear_m46308_MethodInfo,
	&ICollection_1_Contains_m46309_MethodInfo,
	&ICollection_1_CopyTo_m46310_MethodInfo,
	&ICollection_1_Remove_m46311_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8987_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8985_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8987_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8985_0_0_0;
extern Il2CppType ICollection_1_t8985_1_0_0;
struct ICollection_1_t8985;
extern Il2CppGenericClass ICollection_1_t8985_GenericClass;
TypeInfo ICollection_1_t8985_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8985_MethodInfos/* methods */
	, ICollection_1_t8985_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8985_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8985_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8985_0_0_0/* byval_arg */
	, &ICollection_1_t8985_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8985_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>
extern Il2CppType IEnumerator_1_t6915_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46312_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46312_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8987_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6915_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46312_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8987_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46312_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8987_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8987_0_0_0;
extern Il2CppType IEnumerable_1_t8987_1_0_0;
struct IEnumerable_1_t8987;
extern Il2CppGenericClass IEnumerable_1_t8987_GenericClass;
TypeInfo IEnumerable_1_t8987_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8987_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8987_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8987_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8987_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8987_0_0_0/* byval_arg */
	, &IEnumerable_1_t8987_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8987_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6915_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo IEnumerator_1_get_Current_m46313_MethodInfo;
static PropertyInfo IEnumerator_1_t6915____Current_PropertyInfo = 
{
	&IEnumerator_1_t6915_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46313_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6915_PropertyInfos[] =
{
	&IEnumerator_1_t6915____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2376_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46313_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46313_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6915_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2376_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46313_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6915_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46313_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6915_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6915_0_0_0;
extern Il2CppType IEnumerator_1_t6915_1_0_0;
struct IEnumerator_1_t6915;
extern Il2CppGenericClass IEnumerator_1_t6915_GenericClass;
TypeInfo IEnumerator_1_t6915_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6915_MethodInfos/* methods */
	, IEnumerator_1_t6915_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6915_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6915_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6915_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6915_0_0_0/* byval_arg */
	, &IEnumerator_1_t6915_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6915_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_705.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4851_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_705MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2376_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26366_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2376_m35617_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2376_m35617(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4851____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4851, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4851____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4851, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4851_FieldInfos[] =
{
	&InternalEnumerator_1_t4851____array_0_FieldInfo,
	&InternalEnumerator_1_t4851____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4851____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4851_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4851____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4851_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4851_PropertyInfos[] =
{
	&InternalEnumerator_1_t4851____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4851____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4851_InternalEnumerator_1__ctor_m26362_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26362_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26362_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4851_InternalEnumerator_1__ctor_m26362_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26362_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26364_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26364_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26364_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26365_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26365_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26365_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2376_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26366_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26366_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2376_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26366_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4851_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26362_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo,
	&InternalEnumerator_1_Dispose_m26364_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26365_MethodInfo,
	&InternalEnumerator_1_get_Current_m26366_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26365_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26364_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4851_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26365_MethodInfo,
	&InternalEnumerator_1_Dispose_m26364_MethodInfo,
	&InternalEnumerator_1_get_Current_m26366_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4851_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6915_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4851_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6915_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2376_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4851_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26366_MethodInfo/* Method Usage */,
	&IEquatable_1_t2376_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2376_m35617_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4851_0_0_0;
extern Il2CppType InternalEnumerator_1_t4851_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4851_GenericClass;
TypeInfo InternalEnumerator_1_t4851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4851_MethodInfos/* methods */
	, InternalEnumerator_1_t4851_PropertyInfos/* properties */
	, InternalEnumerator_1_t4851_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4851_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4851_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4851_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4851_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4851_1_0_0/* this_arg */
	, InternalEnumerator_1_t4851_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4851_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4851_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4851)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t8986_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo IList_1_get_Item_m46314_MethodInfo;
extern MethodInfo IList_1_set_Item_m46315_MethodInfo;
static PropertyInfo IList_1_t8986____Item_PropertyInfo = 
{
	&IList_1_t8986_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46314_MethodInfo/* get */
	, &IList_1_set_Item_m46315_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8986_PropertyInfos[] =
{
	&IList_1_t8986____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2376_0_0_0;
static ParameterInfo IList_1_t8986_IList_1_IndexOf_m46316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2376_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46316_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46316_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8986_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8986_IList_1_IndexOf_m46316_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46316_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IEquatable_1_t2376_0_0_0;
static ParameterInfo IList_1_t8986_IList_1_Insert_m46317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2376_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46317_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46317_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8986_IList_1_Insert_m46317_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46317_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8986_IList_1_RemoveAt_m46318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46318_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46318_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8986_IList_1_RemoveAt_m46318_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46318_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8986_IList_1_get_Item_m46314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IEquatable_1_t2376_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46314_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46314_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8986_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2376_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8986_IList_1_get_Item_m46314_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46314_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IEquatable_1_t2376_0_0_0;
static ParameterInfo IList_1_t8986_IList_1_set_Item_m46315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2376_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46315_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46315_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8986_IList_1_set_Item_m46315_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46315_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8986_MethodInfos[] =
{
	&IList_1_IndexOf_m46316_MethodInfo,
	&IList_1_Insert_m46317_MethodInfo,
	&IList_1_RemoveAt_m46318_MethodInfo,
	&IList_1_get_Item_m46314_MethodInfo,
	&IList_1_set_Item_m46315_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8986_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8985_il2cpp_TypeInfo,
	&IEnumerable_1_t8987_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8986_0_0_0;
extern Il2CppType IList_1_t8986_1_0_0;
struct IList_1_t8986;
extern Il2CppGenericClass IList_1_t8986_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8986_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8986_MethodInfos/* methods */
	, IList_1_t8986_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8986_il2cpp_TypeInfo/* element_class */
	, IList_1_t8986_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8986_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8986_0_0_0/* byval_arg */
	, &IList_1_t8986_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8986_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6917_il2cpp_TypeInfo;

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"


// T System.Collections.Generic.IEnumerator`1<System.TimeSpan>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TimeSpan>
extern MethodInfo IEnumerator_1_get_Current_m46319_MethodInfo;
static PropertyInfo IEnumerator_1_t6917____Current_PropertyInfo = 
{
	&IEnumerator_1_t6917_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46319_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6917_PropertyInfos[] =
{
	&IEnumerator_1_t6917____Current_PropertyInfo,
	NULL
};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern void* RuntimeInvoker_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46319_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.TimeSpan>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46319_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6917_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1620_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1620/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46319_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6917_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46319_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6917_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6917_0_0_0;
extern Il2CppType IEnumerator_1_t6917_1_0_0;
struct IEnumerator_1_t6917;
extern Il2CppGenericClass IEnumerator_1_t6917_GenericClass;
TypeInfo IEnumerator_1_t6917_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6917_MethodInfos/* methods */
	, IEnumerator_1_t6917_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6917_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6917_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6917_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6917_0_0_0/* byval_arg */
	, &IEnumerator_1_t6917_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6917_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_706.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4852_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_706MethodDeclarations.h"

extern TypeInfo TimeSpan_t1620_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26371_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTimeSpan_t1620_m35628_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
 TimeSpan_t1620  Array_InternalArray__get_Item_TisTimeSpan_t1620_m35628 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26367_MethodInfo;
 void InternalEnumerator_1__ctor_m26367 (InternalEnumerator_1_t4852 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368 (InternalEnumerator_1_t4852 * __this, MethodInfo* method){
	{
		TimeSpan_t1620  L_0 = InternalEnumerator_1_get_Current_m26371(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26371_MethodInfo);
		TimeSpan_t1620  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TimeSpan_t1620_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26369_MethodInfo;
 void InternalEnumerator_1_Dispose_m26369 (InternalEnumerator_1_t4852 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26370_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26370 (InternalEnumerator_1_t4852 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
 TimeSpan_t1620  InternalEnumerator_1_get_Current_m26371 (InternalEnumerator_1_t4852 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		TimeSpan_t1620  L_8 = Array_InternalArray__get_Item_TisTimeSpan_t1620_m35628(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTimeSpan_t1620_m35628_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TimeSpan>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4852____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4852, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4852____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4852, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4852_FieldInfos[] =
{
	&InternalEnumerator_1_t4852____array_0_FieldInfo,
	&InternalEnumerator_1_t4852____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4852____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4852_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4852____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4852_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26371_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4852_PropertyInfos[] =
{
	&InternalEnumerator_1_t4852____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4852____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4852_InternalEnumerator_1__ctor_m26367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26367_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26367_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26367/* method */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4852_InternalEnumerator_1__ctor_m26367_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26367_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368/* method */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26369_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26369_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26369/* method */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26369_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26370_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26370_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26370/* method */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26370_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern void* RuntimeInvoker_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26371_GenericMethod;
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26371_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26371/* method */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1620_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1620/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26371_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4852_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26367_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368_MethodInfo,
	&InternalEnumerator_1_Dispose_m26369_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26370_MethodInfo,
	&InternalEnumerator_1_get_Current_m26371_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4852_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26368_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26370_MethodInfo,
	&InternalEnumerator_1_Dispose_m26369_MethodInfo,
	&InternalEnumerator_1_get_Current_m26371_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4852_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6917_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4852_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6917_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4852_0_0_0;
extern Il2CppType InternalEnumerator_1_t4852_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4852_GenericClass;
TypeInfo InternalEnumerator_1_t4852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4852_MethodInfos/* methods */
	, InternalEnumerator_1_t4852_PropertyInfos/* properties */
	, InternalEnumerator_1_t4852_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4852_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4852_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4852_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4852_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4852_1_0_0/* this_arg */
	, InternalEnumerator_1_t4852_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4852_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4852)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t8988_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.TimeSpan>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.TimeSpan>
extern MethodInfo ICollection_1_get_Count_m46320_MethodInfo;
static PropertyInfo ICollection_1_t8988____Count_PropertyInfo = 
{
	&ICollection_1_t8988_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46320_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46321_MethodInfo;
static PropertyInfo ICollection_1_t8988____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8988_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46321_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8988_PropertyInfos[] =
{
	&ICollection_1_t8988____Count_PropertyInfo,
	&ICollection_1_t8988____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46320_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.TimeSpan>::get_Count()
MethodInfo ICollection_1_get_Count_m46320_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46320_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46321_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46321_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46321_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo ICollection_1_t8988_ICollection_1_Add_m46322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46322_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Add(T)
MethodInfo ICollection_1_Add_m46322_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_TimeSpan_t1620/* invoker_method */
	, ICollection_1_t8988_ICollection_1_Add_m46322_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46322_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46323_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Clear()
MethodInfo ICollection_1_Clear_m46323_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46323_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo ICollection_1_t8988_ICollection_1_Contains_m46324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46324_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Contains(T)
MethodInfo ICollection_1_Contains_m46324_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_TimeSpan_t1620/* invoker_method */
	, ICollection_1_t8988_ICollection_1_Contains_m46324_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46324_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpanU5BU5D_t2682_0_0_0;
extern Il2CppType TimeSpanU5BU5D_t2682_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8988_ICollection_1_CopyTo_m46325_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpanU5BU5D_t2682_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46325_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46325_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8988_ICollection_1_CopyTo_m46325_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46325_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo ICollection_1_t8988_ICollection_1_Remove_m46326_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46326_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Remove(T)
MethodInfo ICollection_1_Remove_m46326_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_TimeSpan_t1620/* invoker_method */
	, ICollection_1_t8988_ICollection_1_Remove_m46326_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46326_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8988_MethodInfos[] =
{
	&ICollection_1_get_Count_m46320_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46321_MethodInfo,
	&ICollection_1_Add_m46322_MethodInfo,
	&ICollection_1_Clear_m46323_MethodInfo,
	&ICollection_1_Contains_m46324_MethodInfo,
	&ICollection_1_CopyTo_m46325_MethodInfo,
	&ICollection_1_Remove_m46326_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8990_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8988_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8990_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8988_0_0_0;
extern Il2CppType ICollection_1_t8988_1_0_0;
struct ICollection_1_t8988;
extern Il2CppGenericClass ICollection_1_t8988_GenericClass;
TypeInfo ICollection_1_t8988_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8988_MethodInfos/* methods */
	, ICollection_1_t8988_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8988_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8988_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8988_0_0_0/* byval_arg */
	, &ICollection_1_t8988_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8988_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TimeSpan>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TimeSpan>
extern Il2CppType IEnumerator_1_t6917_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46327_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TimeSpan>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46327_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8990_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6917_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46327_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8990_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46327_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8990_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8990_0_0_0;
extern Il2CppType IEnumerable_1_t8990_1_0_0;
struct IEnumerable_1_t8990;
extern Il2CppGenericClass IEnumerable_1_t8990_GenericClass;
TypeInfo IEnumerable_1_t8990_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8990_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8990_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8990_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8990_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8990_0_0_0/* byval_arg */
	, &IEnumerable_1_t8990_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8990_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t8989_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.TimeSpan>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TimeSpan>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.TimeSpan>
extern MethodInfo IList_1_get_Item_m46328_MethodInfo;
extern MethodInfo IList_1_set_Item_m46329_MethodInfo;
static PropertyInfo IList_1_t8989____Item_PropertyInfo = 
{
	&IList_1_t8989_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46328_MethodInfo/* get */
	, &IList_1_set_Item_m46329_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8989_PropertyInfos[] =
{
	&IList_1_t8989____Item_PropertyInfo,
	NULL
};
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo IList_1_t8989_IList_1_IndexOf_m46330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46330_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.TimeSpan>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46330_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8989_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620/* invoker_method */
	, IList_1_t8989_IList_1_IndexOf_m46330_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46330_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo IList_1_t8989_IList_1_Insert_m46331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46331_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46331_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_TimeSpan_t1620/* invoker_method */
	, IList_1_t8989_IList_1_Insert_m46331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46331_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8989_IList_1_RemoveAt_m46332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46332_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46332_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8989_IList_1_RemoveAt_m46332_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46332_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8989_IList_1_get_Item_m46328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType TimeSpan_t1620_0_0_0;
extern void* RuntimeInvoker_TimeSpan_t1620_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46328_GenericMethod;
// T System.Collections.Generic.IList`1<System.TimeSpan>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46328_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8989_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t1620_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t1620_Int32_t63/* invoker_method */
	, IList_1_t8989_IList_1_get_Item_m46328_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46328_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo IList_1_t8989_IList_1_set_Item_m46329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46329_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46329_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_TimeSpan_t1620/* invoker_method */
	, IList_1_t8989_IList_1_set_Item_m46329_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46329_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8989_MethodInfos[] =
{
	&IList_1_IndexOf_m46330_MethodInfo,
	&IList_1_Insert_m46331_MethodInfo,
	&IList_1_RemoveAt_m46332_MethodInfo,
	&IList_1_get_Item_m46328_MethodInfo,
	&IList_1_set_Item_m46329_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8989_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8988_il2cpp_TypeInfo,
	&IEnumerable_1_t8990_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8989_0_0_0;
extern Il2CppType IList_1_t8989_1_0_0;
struct IList_1_t8989;
extern Il2CppGenericClass IList_1_t8989_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8989_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8989_MethodInfos/* methods */
	, IList_1_t8989_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8989_il2cpp_TypeInfo/* element_class */
	, IList_1_t8989_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8989_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8989_0_0_0/* byval_arg */
	, &IList_1_t8989_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8989_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t8991_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo ICollection_1_get_Count_m46333_MethodInfo;
static PropertyInfo ICollection_1_t8991____Count_PropertyInfo = 
{
	&ICollection_1_t8991_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46334_MethodInfo;
static PropertyInfo ICollection_1_t8991____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8991_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46334_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8991_PropertyInfos[] =
{
	&ICollection_1_t8991____Count_PropertyInfo,
	&ICollection_1_t8991____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46333_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_Count()
MethodInfo ICollection_1_get_Count_m46333_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46333_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46334_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46334_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46334_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2726_0_0_0;
extern Il2CppType IComparable_1_t2726_0_0_0;
static ParameterInfo ICollection_1_t8991_ICollection_1_Add_m46335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2726_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46335_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Add(T)
MethodInfo ICollection_1_Add_m46335_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8991_ICollection_1_Add_m46335_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46335_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46336_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Clear()
MethodInfo ICollection_1_Clear_m46336_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46336_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2726_0_0_0;
static ParameterInfo ICollection_1_t8991_ICollection_1_Contains_m46337_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2726_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46337_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Contains(T)
MethodInfo ICollection_1_Contains_m46337_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8991_ICollection_1_Contains_m46337_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46337_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t5109_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t5109_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8991_ICollection_1_CopyTo_m46338_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t5109_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46338_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46338_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8991_ICollection_1_CopyTo_m46338_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46338_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2726_0_0_0;
static ParameterInfo ICollection_1_t8991_ICollection_1_Remove_m46339_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2726_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46339_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Remove(T)
MethodInfo ICollection_1_Remove_m46339_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8991_ICollection_1_Remove_m46339_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46339_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8991_MethodInfos[] =
{
	&ICollection_1_get_Count_m46333_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46334_MethodInfo,
	&ICollection_1_Add_m46335_MethodInfo,
	&ICollection_1_Clear_m46336_MethodInfo,
	&ICollection_1_Contains_m46337_MethodInfo,
	&ICollection_1_CopyTo_m46338_MethodInfo,
	&ICollection_1_Remove_m46339_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8993_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8991_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8993_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8991_0_0_0;
extern Il2CppType ICollection_1_t8991_1_0_0;
struct ICollection_1_t8991;
extern Il2CppGenericClass ICollection_1_t8991_GenericClass;
TypeInfo ICollection_1_t8991_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8991_MethodInfos/* methods */
	, ICollection_1_t8991_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8991_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8991_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8991_0_0_0/* byval_arg */
	, &ICollection_1_t8991_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8991_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>
extern Il2CppType IEnumerator_1_t6919_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46340_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46340_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8993_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6919_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46340_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8993_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46340_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8993_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8993_0_0_0;
extern Il2CppType IEnumerable_1_t8993_1_0_0;
struct IEnumerable_1_t8993;
extern Il2CppGenericClass IEnumerable_1_t8993_GenericClass;
TypeInfo IEnumerable_1_t8993_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8993_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8993_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8993_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8993_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8993_0_0_0/* byval_arg */
	, &IEnumerable_1_t8993_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8993_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6919_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo IEnumerator_1_get_Current_m46341_MethodInfo;
static PropertyInfo IEnumerator_1_t6919____Current_PropertyInfo = 
{
	&IEnumerator_1_t6919_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46341_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6919_PropertyInfos[] =
{
	&IEnumerator_1_t6919____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2726_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46341_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46341_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6919_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2726_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46341_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6919_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46341_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6919_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6919_0_0_0;
extern Il2CppType IEnumerator_1_t6919_1_0_0;
struct IEnumerator_1_t6919;
extern Il2CppGenericClass IEnumerator_1_t6919_GenericClass;
TypeInfo IEnumerator_1_t6919_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6919_MethodInfos/* methods */
	, IEnumerator_1_t6919_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6919_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6919_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6919_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6919_0_0_0/* byval_arg */
	, &IEnumerator_1_t6919_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6919_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2726_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.TimeSpan>
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo IComparable_1_t2726_IComparable_1_CompareTo_m46342_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m46342_GenericMethod;
// System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m46342_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2726_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_TimeSpan_t1620/* invoker_method */
	, IComparable_1_t2726_IComparable_1_CompareTo_m46342_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparable_1_CompareTo_m46342_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2726_MethodInfos[] =
{
	&IComparable_1_CompareTo_m46342_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2726_1_0_0;
struct IComparable_1_t2726;
extern Il2CppGenericClass IComparable_1_t2726_GenericClass;
TypeInfo IComparable_1_t2726_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2726_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2726_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2726_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2726_0_0_0/* byval_arg */
	, &IComparable_1_t2726_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2726_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_707.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4853_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_707MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m26376_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2726_m35639_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2726_m35639(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4853____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4853, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4853____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4853, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4853_FieldInfos[] =
{
	&InternalEnumerator_1_t4853____array_0_FieldInfo,
	&InternalEnumerator_1_t4853____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26373_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4853____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4853_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26373_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4853____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4853_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26376_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4853_PropertyInfos[] =
{
	&InternalEnumerator_1_t4853____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4853____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4853_InternalEnumerator_1__ctor_m26372_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26372_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26372_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4853_InternalEnumerator_1__ctor_m26372_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26372_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26373_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26373_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26373_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26374_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26374_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26374_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26375_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26375_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26375_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2726_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26376_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26376_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2726_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26376_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4853_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26372_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26373_MethodInfo,
	&InternalEnumerator_1_Dispose_m26374_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26375_MethodInfo,
	&InternalEnumerator_1_get_Current_m26376_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26375_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26374_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4853_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26373_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26375_MethodInfo,
	&InternalEnumerator_1_Dispose_m26374_MethodInfo,
	&InternalEnumerator_1_get_Current_m26376_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4853_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6919_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4853_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6919_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2726_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4853_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26376_MethodInfo/* Method Usage */,
	&IComparable_1_t2726_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2726_m35639_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4853_0_0_0;
extern Il2CppType InternalEnumerator_1_t4853_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4853_GenericClass;
TypeInfo InternalEnumerator_1_t4853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4853_MethodInfos/* methods */
	, InternalEnumerator_1_t4853_PropertyInfos/* properties */
	, InternalEnumerator_1_t4853_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4853_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4853_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4853_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4853_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4853_1_0_0/* this_arg */
	, InternalEnumerator_1_t4853_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4853_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4853_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4853)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t8992_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo IList_1_get_Item_m46343_MethodInfo;
extern MethodInfo IList_1_set_Item_m46344_MethodInfo;
static PropertyInfo IList_1_t8992____Item_PropertyInfo = 
{
	&IList_1_t8992_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46343_MethodInfo/* get */
	, &IList_1_set_Item_m46344_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8992_PropertyInfos[] =
{
	&IList_1_t8992____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2726_0_0_0;
static ParameterInfo IList_1_t8992_IList_1_IndexOf_m46345_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2726_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46345_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46345_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8992_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8992_IList_1_IndexOf_m46345_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46345_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IComparable_1_t2726_0_0_0;
static ParameterInfo IList_1_t8992_IList_1_Insert_m46346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2726_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46346_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46346_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8992_IList_1_Insert_m46346_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46346_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8992_IList_1_RemoveAt_m46347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46347_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46347_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8992_IList_1_RemoveAt_m46347_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46347_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8992_IList_1_get_Item_m46343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IComparable_1_t2726_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46343_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46343_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8992_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2726_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8992_IList_1_get_Item_m46343_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46343_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IComparable_1_t2726_0_0_0;
static ParameterInfo IList_1_t8992_IList_1_set_Item_m46344_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2726_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46344_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46344_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8992_IList_1_set_Item_m46344_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46344_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8992_MethodInfos[] =
{
	&IList_1_IndexOf_m46345_MethodInfo,
	&IList_1_Insert_m46346_MethodInfo,
	&IList_1_RemoveAt_m46347_MethodInfo,
	&IList_1_get_Item_m46343_MethodInfo,
	&IList_1_set_Item_m46344_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8992_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8991_il2cpp_TypeInfo,
	&IEnumerable_1_t8993_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8992_0_0_0;
extern Il2CppType IList_1_t8992_1_0_0;
struct IList_1_t8992;
extern Il2CppGenericClass IList_1_t8992_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8992_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8992_MethodInfos/* methods */
	, IList_1_t8992_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8992_il2cpp_TypeInfo/* element_class */
	, IList_1_t8992_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8992_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8992_0_0_0/* byval_arg */
	, &IList_1_t8992_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8992_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t8994_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo ICollection_1_get_Count_m46348_MethodInfo;
static PropertyInfo ICollection_1_t8994____Count_PropertyInfo = 
{
	&ICollection_1_t8994_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46349_MethodInfo;
static PropertyInfo ICollection_1_t8994____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8994_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46349_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8994_PropertyInfos[] =
{
	&ICollection_1_t8994____Count_PropertyInfo,
	&ICollection_1_t8994____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46348_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_Count()
MethodInfo ICollection_1_get_Count_m46348_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46348_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46349_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46349_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46349_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2727_0_0_0;
extern Il2CppType IEquatable_1_t2727_0_0_0;
static ParameterInfo ICollection_1_t8994_ICollection_1_Add_m46350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2727_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46350_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Add(T)
MethodInfo ICollection_1_Add_m46350_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8994_ICollection_1_Add_m46350_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46350_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46351_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Clear()
MethodInfo ICollection_1_Clear_m46351_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46351_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2727_0_0_0;
static ParameterInfo ICollection_1_t8994_ICollection_1_Contains_m46352_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2727_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46352_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Contains(T)
MethodInfo ICollection_1_Contains_m46352_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8994_ICollection_1_Contains_m46352_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46352_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t5110_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t5110_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8994_ICollection_1_CopyTo_m46353_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t5110_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46353_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46353_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8994_ICollection_1_CopyTo_m46353_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46353_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2727_0_0_0;
static ParameterInfo ICollection_1_t8994_ICollection_1_Remove_m46354_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2727_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46354_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Remove(T)
MethodInfo ICollection_1_Remove_m46354_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8994_ICollection_1_Remove_m46354_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46354_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8994_MethodInfos[] =
{
	&ICollection_1_get_Count_m46348_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46349_MethodInfo,
	&ICollection_1_Add_m46350_MethodInfo,
	&ICollection_1_Clear_m46351_MethodInfo,
	&ICollection_1_Contains_m46352_MethodInfo,
	&ICollection_1_CopyTo_m46353_MethodInfo,
	&ICollection_1_Remove_m46354_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8996_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8994_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8996_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8994_0_0_0;
extern Il2CppType ICollection_1_t8994_1_0_0;
struct ICollection_1_t8994;
extern Il2CppGenericClass ICollection_1_t8994_GenericClass;
TypeInfo ICollection_1_t8994_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8994_MethodInfos/* methods */
	, ICollection_1_t8994_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8994_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8994_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8994_0_0_0/* byval_arg */
	, &ICollection_1_t8994_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8994_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>
extern Il2CppType IEnumerator_1_t6921_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46355_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46355_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8996_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6921_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46355_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8996_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46355_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8996_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8996_0_0_0;
extern Il2CppType IEnumerable_1_t8996_1_0_0;
struct IEnumerable_1_t8996;
extern Il2CppGenericClass IEnumerable_1_t8996_GenericClass;
TypeInfo IEnumerable_1_t8996_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8996_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8996_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8996_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8996_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8996_0_0_0/* byval_arg */
	, &IEnumerable_1_t8996_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8996_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6921_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo IEnumerator_1_get_Current_m46356_MethodInfo;
static PropertyInfo IEnumerator_1_t6921____Current_PropertyInfo = 
{
	&IEnumerator_1_t6921_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46356_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6921_PropertyInfos[] =
{
	&IEnumerator_1_t6921____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2727_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46356_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46356_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6921_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2727_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46356_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6921_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46356_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6921_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6921_0_0_0;
extern Il2CppType IEnumerator_1_t6921_1_0_0;
struct IEnumerator_1_t6921;
extern Il2CppGenericClass IEnumerator_1_t6921_GenericClass;
TypeInfo IEnumerator_1_t6921_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6921_MethodInfos/* methods */
	, IEnumerator_1_t6921_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6921_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6921_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6921_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6921_0_0_0/* byval_arg */
	, &IEnumerator_1_t6921_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6921_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2727_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T)
// Metadata Definition System.IEquatable`1<System.TimeSpan>
extern Il2CppType TimeSpan_t1620_0_0_0;
static ParameterInfo IEquatable_1_t2727_IEquatable_1_Equals_m46357_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t1620_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_TimeSpan_t1620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m46357_GenericMethod;
// System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T)
MethodInfo IEquatable_1_Equals_m46357_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2727_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_TimeSpan_t1620/* invoker_method */
	, IEquatable_1_t2727_IEquatable_1_Equals_m46357_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEquatable_1_Equals_m46357_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2727_MethodInfos[] =
{
	&IEquatable_1_Equals_m46357_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2727_1_0_0;
struct IEquatable_1_t2727;
extern Il2CppGenericClass IEquatable_1_t2727_GenericClass;
TypeInfo IEquatable_1_t2727_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2727_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2727_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2727_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2727_0_0_0/* byval_arg */
	, &IEquatable_1_t2727_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2727_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_708.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4854_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_708MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m26381_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2727_m35650_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2727_m35650(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4854____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4854, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4854____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4854, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4854_FieldInfos[] =
{
	&InternalEnumerator_1_t4854____array_0_FieldInfo,
	&InternalEnumerator_1_t4854____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26378_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4854____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4854_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26378_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4854____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4854_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4854_PropertyInfos[] =
{
	&InternalEnumerator_1_t4854____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4854____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4854_InternalEnumerator_1__ctor_m26377_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26377_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26377_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4854_InternalEnumerator_1__ctor_m26377_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26377_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26378_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26378_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26378_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26379_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26379_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26379_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26380_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26380_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26380_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2727_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26381_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26381_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2727_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26381_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4854_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26377_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26378_MethodInfo,
	&InternalEnumerator_1_Dispose_m26379_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26380_MethodInfo,
	&InternalEnumerator_1_get_Current_m26381_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26380_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26379_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4854_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26378_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26380_MethodInfo,
	&InternalEnumerator_1_Dispose_m26379_MethodInfo,
	&InternalEnumerator_1_get_Current_m26381_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4854_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6921_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4854_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6921_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2727_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4854_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26381_MethodInfo/* Method Usage */,
	&IEquatable_1_t2727_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2727_m35650_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4854_0_0_0;
extern Il2CppType InternalEnumerator_1_t4854_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4854_GenericClass;
TypeInfo InternalEnumerator_1_t4854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4854_MethodInfos/* methods */
	, InternalEnumerator_1_t4854_PropertyInfos/* properties */
	, InternalEnumerator_1_t4854_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4854_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4854_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4854_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4854_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4854_1_0_0/* this_arg */
	, InternalEnumerator_1_t4854_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4854_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4854_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4854)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t8995_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo IList_1_get_Item_m46358_MethodInfo;
extern MethodInfo IList_1_set_Item_m46359_MethodInfo;
static PropertyInfo IList_1_t8995____Item_PropertyInfo = 
{
	&IList_1_t8995_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46358_MethodInfo/* get */
	, &IList_1_set_Item_m46359_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8995_PropertyInfos[] =
{
	&IList_1_t8995____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2727_0_0_0;
static ParameterInfo IList_1_t8995_IList_1_IndexOf_m46360_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2727_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46360_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46360_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8995_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8995_IList_1_IndexOf_m46360_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46360_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IEquatable_1_t2727_0_0_0;
static ParameterInfo IList_1_t8995_IList_1_Insert_m46361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2727_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46361_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46361_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8995_IList_1_Insert_m46361_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46361_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8995_IList_1_RemoveAt_m46362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46362_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46362_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8995_IList_1_RemoveAt_m46362_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46362_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8995_IList_1_get_Item_m46358_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IEquatable_1_t2727_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46358_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46358_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8995_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2727_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8995_IList_1_get_Item_m46358_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46358_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IEquatable_1_t2727_0_0_0;
static ParameterInfo IList_1_t8995_IList_1_set_Item_m46359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2727_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46359_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46359_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8995_IList_1_set_Item_m46359_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46359_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8995_MethodInfos[] =
{
	&IList_1_IndexOf_m46360_MethodInfo,
	&IList_1_Insert_m46361_MethodInfo,
	&IList_1_RemoveAt_m46362_MethodInfo,
	&IList_1_get_Item_m46358_MethodInfo,
	&IList_1_set_Item_m46359_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8995_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8994_il2cpp_TypeInfo,
	&IEnumerable_1_t8996_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8995_0_0_0;
extern Il2CppType IList_1_t8995_1_0_0;
struct IList_1_t8995;
extern Il2CppGenericClass IList_1_t8995_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8995_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8995_MethodInfos/* methods */
	, IList_1_t8995_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8995_il2cpp_TypeInfo/* element_class */
	, IList_1_t8995_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8995_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8995_0_0_0/* byval_arg */
	, &IList_1_t8995_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8995_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6923_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo IEnumerator_1_get_Current_m46363_MethodInfo;
static PropertyInfo IEnumerator_1_t6923____Current_PropertyInfo = 
{
	&IEnumerator_1_t6923_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6923_PropertyInfos[] =
{
	&IEnumerator_1_t6923____Current_PropertyInfo,
	NULL
};
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
extern void* RuntimeInvoker_FormatterAssemblyStyle_t2113 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46363_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46363_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6923_il2cpp_TypeInfo/* declaring_type */
	, &FormatterAssemblyStyle_t2113_0_0_0/* return_type */
	, RuntimeInvoker_FormatterAssemblyStyle_t2113/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46363_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6923_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46363_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6923_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6923_0_0_0;
extern Il2CppType IEnumerator_1_t6923_1_0_0;
struct IEnumerator_1_t6923;
extern Il2CppGenericClass IEnumerator_1_t6923_GenericClass;
TypeInfo IEnumerator_1_t6923_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6923_MethodInfos/* methods */
	, IEnumerator_1_t6923_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6923_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6923_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6923_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6923_0_0_0/* byval_arg */
	, &IEnumerator_1_t6923_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6923_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_709.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4855_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_709MethodDeclarations.h"

extern TypeInfo FormatterAssemblyStyle_t2113_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26386_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFormatterAssemblyStyle_t2113_m35661_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFormatterAssemblyStyle_t2113_m35661 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26382_MethodInfo;
 void InternalEnumerator_1__ctor_m26382 (InternalEnumerator_1_t4855 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383 (InternalEnumerator_1_t4855 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26386(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26386_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FormatterAssemblyStyle_t2113_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26384_MethodInfo;
 void InternalEnumerator_1_Dispose_m26384 (InternalEnumerator_1_t4855 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26385_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26385 (InternalEnumerator_1_t4855 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26386 (InternalEnumerator_1_t4855 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisFormatterAssemblyStyle_t2113_m35661(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFormatterAssemblyStyle_t2113_m35661_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4855____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4855, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4855____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4855, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4855_FieldInfos[] =
{
	&InternalEnumerator_1_t4855____array_0_FieldInfo,
	&InternalEnumerator_1_t4855____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4855____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4855_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4855____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4855_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26386_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4855_PropertyInfos[] =
{
	&InternalEnumerator_1_t4855____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4855____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4855_InternalEnumerator_1__ctor_m26382_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26382_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26382_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26382/* method */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4855_InternalEnumerator_1__ctor_m26382_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26382_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383/* method */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26384_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26384_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26384/* method */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26384_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26385_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26385_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26385/* method */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26385_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
extern void* RuntimeInvoker_FormatterAssemblyStyle_t2113 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26386_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26386_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26386/* method */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* declaring_type */
	, &FormatterAssemblyStyle_t2113_0_0_0/* return_type */
	, RuntimeInvoker_FormatterAssemblyStyle_t2113/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26386_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4855_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26382_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383_MethodInfo,
	&InternalEnumerator_1_Dispose_m26384_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26385_MethodInfo,
	&InternalEnumerator_1_get_Current_m26386_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4855_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26383_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26385_MethodInfo,
	&InternalEnumerator_1_Dispose_m26384_MethodInfo,
	&InternalEnumerator_1_get_Current_m26386_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4855_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6923_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4855_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6923_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4855_0_0_0;
extern Il2CppType InternalEnumerator_1_t4855_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4855_GenericClass;
TypeInfo InternalEnumerator_1_t4855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4855_MethodInfos/* methods */
	, InternalEnumerator_1_t4855_PropertyInfos/* properties */
	, InternalEnumerator_1_t4855_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4855_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4855_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4855_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4855_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4855_1_0_0/* this_arg */
	, InternalEnumerator_1_t4855_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4855_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4855)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t8997_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo ICollection_1_get_Count_m46364_MethodInfo;
static PropertyInfo ICollection_1_t8997____Count_PropertyInfo = 
{
	&ICollection_1_t8997_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46364_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46365_MethodInfo;
static PropertyInfo ICollection_1_t8997____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8997_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46365_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8997_PropertyInfos[] =
{
	&ICollection_1_t8997____Count_PropertyInfo,
	&ICollection_1_t8997____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46364_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Count()
MethodInfo ICollection_1_get_Count_m46364_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46364_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46365_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46365_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46365_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
static ParameterInfo ICollection_1_t8997_ICollection_1_Add_m46366_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t2113_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46366_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Add(T)
MethodInfo ICollection_1_Add_m46366_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8997_ICollection_1_Add_m46366_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46366_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46367_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Clear()
MethodInfo ICollection_1_Clear_m46367_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46367_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
static ParameterInfo ICollection_1_t8997_ICollection_1_Contains_m46368_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t2113_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46368_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Contains(T)
MethodInfo ICollection_1_Contains_m46368_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8997_ICollection_1_Contains_m46368_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46368_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyleU5BU5D_t5111_0_0_0;
extern Il2CppType FormatterAssemblyStyleU5BU5D_t5111_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8997_ICollection_1_CopyTo_m46369_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyleU5BU5D_t5111_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46369_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46369_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8997_ICollection_1_CopyTo_m46369_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46369_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
static ParameterInfo ICollection_1_t8997_ICollection_1_Remove_m46370_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t2113_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46370_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Remove(T)
MethodInfo ICollection_1_Remove_m46370_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8997_ICollection_1_Remove_m46370_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46370_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8997_MethodInfos[] =
{
	&ICollection_1_get_Count_m46364_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46365_MethodInfo,
	&ICollection_1_Add_m46366_MethodInfo,
	&ICollection_1_Clear_m46367_MethodInfo,
	&ICollection_1_Contains_m46368_MethodInfo,
	&ICollection_1_CopyTo_m46369_MethodInfo,
	&ICollection_1_Remove_m46370_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8999_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8997_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8999_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8997_0_0_0;
extern Il2CppType ICollection_1_t8997_1_0_0;
struct ICollection_1_t8997;
extern Il2CppGenericClass ICollection_1_t8997_GenericClass;
TypeInfo ICollection_1_t8997_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8997_MethodInfos/* methods */
	, ICollection_1_t8997_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8997_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8997_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8997_0_0_0/* byval_arg */
	, &ICollection_1_t8997_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8997_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern Il2CppType IEnumerator_1_t6923_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46371_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46371_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8999_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6923_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46371_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8999_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46371_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8999_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8999_0_0_0;
extern Il2CppType IEnumerable_1_t8999_1_0_0;
struct IEnumerable_1_t8999;
extern Il2CppGenericClass IEnumerable_1_t8999_GenericClass;
TypeInfo IEnumerable_1_t8999_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8999_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8999_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8999_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8999_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8999_0_0_0/* byval_arg */
	, &IEnumerable_1_t8999_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8999_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t8998_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo IList_1_get_Item_m46372_MethodInfo;
extern MethodInfo IList_1_set_Item_m46373_MethodInfo;
static PropertyInfo IList_1_t8998____Item_PropertyInfo = 
{
	&IList_1_t8998_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46372_MethodInfo/* get */
	, &IList_1_set_Item_m46373_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8998_PropertyInfos[] =
{
	&IList_1_t8998____Item_PropertyInfo,
	NULL
};
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
static ParameterInfo IList_1_t8998_IList_1_IndexOf_m46374_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t2113_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46374_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46374_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8998_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8998_IList_1_IndexOf_m46374_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46374_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
static ParameterInfo IList_1_t8998_IList_1_Insert_m46375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t2113_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46375_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46375_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8998_IList_1_Insert_m46375_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46375_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8998_IList_1_RemoveAt_m46376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46376_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46376_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8998_IList_1_RemoveAt_m46376_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46376_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8998_IList_1_get_Item_m46372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
extern void* RuntimeInvoker_FormatterAssemblyStyle_t2113_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46372_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46372_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8998_il2cpp_TypeInfo/* declaring_type */
	, &FormatterAssemblyStyle_t2113_0_0_0/* return_type */
	, RuntimeInvoker_FormatterAssemblyStyle_t2113_Int32_t63/* invoker_method */
	, IList_1_t8998_IList_1_get_Item_m46372_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46372_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType FormatterAssemblyStyle_t2113_0_0_0;
static ParameterInfo IList_1_t8998_IList_1_set_Item_m46373_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t2113_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46373_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46373_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8998_IList_1_set_Item_m46373_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46373_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8998_MethodInfos[] =
{
	&IList_1_IndexOf_m46374_MethodInfo,
	&IList_1_Insert_m46375_MethodInfo,
	&IList_1_RemoveAt_m46376_MethodInfo,
	&IList_1_get_Item_m46372_MethodInfo,
	&IList_1_set_Item_m46373_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8998_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8997_il2cpp_TypeInfo,
	&IEnumerable_1_t8999_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8998_0_0_0;
extern Il2CppType IList_1_t8998_1_0_0;
struct IList_1_t8998;
extern Il2CppGenericClass IList_1_t8998_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8998_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8998_MethodInfos/* methods */
	, IList_1_t8998_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8998_il2cpp_TypeInfo/* element_class */
	, IList_1_t8998_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8998_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8998_0_0_0/* byval_arg */
	, &IList_1_t8998_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8998_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6925_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo IEnumerator_1_get_Current_m46377_MethodInfo;
static PropertyInfo IEnumerator_1_t6925____Current_PropertyInfo = 
{
	&IEnumerator_1_t6925_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46377_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6925_PropertyInfos[] =
{
	&IEnumerator_1_t6925____Current_PropertyInfo,
	NULL
};
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
extern void* RuntimeInvoker_FormatterTypeStyle_t2114 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46377_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46377_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6925_il2cpp_TypeInfo/* declaring_type */
	, &FormatterTypeStyle_t2114_0_0_0/* return_type */
	, RuntimeInvoker_FormatterTypeStyle_t2114/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46377_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6925_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46377_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6925_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6925_0_0_0;
extern Il2CppType IEnumerator_1_t6925_1_0_0;
struct IEnumerator_1_t6925;
extern Il2CppGenericClass IEnumerator_1_t6925_GenericClass;
TypeInfo IEnumerator_1_t6925_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6925_MethodInfos/* methods */
	, IEnumerator_1_t6925_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6925_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6925_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6925_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6925_0_0_0/* byval_arg */
	, &IEnumerator_1_t6925_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6925_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_710.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4856_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_710MethodDeclarations.h"

extern TypeInfo FormatterTypeStyle_t2114_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26391_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFormatterTypeStyle_t2114_m35672_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFormatterTypeStyle_t2114_m35672 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26387_MethodInfo;
 void InternalEnumerator_1__ctor_m26387 (InternalEnumerator_1_t4856 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388 (InternalEnumerator_1_t4856 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26391(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26391_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FormatterTypeStyle_t2114_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26389_MethodInfo;
 void InternalEnumerator_1_Dispose_m26389 (InternalEnumerator_1_t4856 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26390_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26390 (InternalEnumerator_1_t4856 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26391 (InternalEnumerator_1_t4856 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisFormatterTypeStyle_t2114_m35672(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFormatterTypeStyle_t2114_m35672_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4856____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4856, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4856____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4856, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4856_FieldInfos[] =
{
	&InternalEnumerator_1_t4856____array_0_FieldInfo,
	&InternalEnumerator_1_t4856____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4856____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4856_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4856____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4856_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26391_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4856_PropertyInfos[] =
{
	&InternalEnumerator_1_t4856____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4856____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4856_InternalEnumerator_1__ctor_m26387_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26387_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26387_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26387/* method */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4856_InternalEnumerator_1__ctor_m26387_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26387_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388/* method */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26389_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26389_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26389/* method */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26389_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26390_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26390_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26390/* method */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26390_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
extern void* RuntimeInvoker_FormatterTypeStyle_t2114 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26391_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26391_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26391/* method */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* declaring_type */
	, &FormatterTypeStyle_t2114_0_0_0/* return_type */
	, RuntimeInvoker_FormatterTypeStyle_t2114/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26391_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4856_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26387_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388_MethodInfo,
	&InternalEnumerator_1_Dispose_m26389_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26390_MethodInfo,
	&InternalEnumerator_1_get_Current_m26391_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4856_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26388_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26390_MethodInfo,
	&InternalEnumerator_1_Dispose_m26389_MethodInfo,
	&InternalEnumerator_1_get_Current_m26391_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4856_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6925_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4856_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6925_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4856_0_0_0;
extern Il2CppType InternalEnumerator_1_t4856_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4856_GenericClass;
TypeInfo InternalEnumerator_1_t4856_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4856_MethodInfos/* methods */
	, InternalEnumerator_1_t4856_PropertyInfos/* properties */
	, InternalEnumerator_1_t4856_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4856_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4856_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4856_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4856_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4856_1_0_0/* this_arg */
	, InternalEnumerator_1_t4856_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4856_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4856)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9000_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo ICollection_1_get_Count_m46378_MethodInfo;
static PropertyInfo ICollection_1_t9000____Count_PropertyInfo = 
{
	&ICollection_1_t9000_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46378_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46379_MethodInfo;
static PropertyInfo ICollection_1_t9000____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9000_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46379_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9000_PropertyInfos[] =
{
	&ICollection_1_t9000____Count_PropertyInfo,
	&ICollection_1_t9000____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46378_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Count()
MethodInfo ICollection_1_get_Count_m46378_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46378_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46379_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46379_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46379_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
static ParameterInfo ICollection_1_t9000_ICollection_1_Add_m46380_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t2114_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46380_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Add(T)
MethodInfo ICollection_1_Add_m46380_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9000_ICollection_1_Add_m46380_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46380_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46381_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Clear()
MethodInfo ICollection_1_Clear_m46381_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46381_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
static ParameterInfo ICollection_1_t9000_ICollection_1_Contains_m46382_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t2114_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46382_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Contains(T)
MethodInfo ICollection_1_Contains_m46382_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9000_ICollection_1_Contains_m46382_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46382_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyleU5BU5D_t5112_0_0_0;
extern Il2CppType FormatterTypeStyleU5BU5D_t5112_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9000_ICollection_1_CopyTo_m46383_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyleU5BU5D_t5112_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46383_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46383_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9000_ICollection_1_CopyTo_m46383_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46383_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
static ParameterInfo ICollection_1_t9000_ICollection_1_Remove_m46384_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t2114_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46384_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Remove(T)
MethodInfo ICollection_1_Remove_m46384_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9000_ICollection_1_Remove_m46384_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46384_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9000_MethodInfos[] =
{
	&ICollection_1_get_Count_m46378_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46379_MethodInfo,
	&ICollection_1_Add_m46380_MethodInfo,
	&ICollection_1_Clear_m46381_MethodInfo,
	&ICollection_1_Contains_m46382_MethodInfo,
	&ICollection_1_CopyTo_m46383_MethodInfo,
	&ICollection_1_Remove_m46384_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9002_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9000_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9002_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9000_0_0_0;
extern Il2CppType ICollection_1_t9000_1_0_0;
struct ICollection_1_t9000;
extern Il2CppGenericClass ICollection_1_t9000_GenericClass;
TypeInfo ICollection_1_t9000_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9000_MethodInfos/* methods */
	, ICollection_1_t9000_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9000_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9000_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9000_0_0_0/* byval_arg */
	, &ICollection_1_t9000_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9000_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern Il2CppType IEnumerator_1_t6925_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46385_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46385_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9002_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6925_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46385_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9002_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46385_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9002_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9002_0_0_0;
extern Il2CppType IEnumerable_1_t9002_1_0_0;
struct IEnumerable_1_t9002;
extern Il2CppGenericClass IEnumerable_1_t9002_GenericClass;
TypeInfo IEnumerable_1_t9002_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9002_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9002_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9002_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9002_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9002_0_0_0/* byval_arg */
	, &IEnumerable_1_t9002_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9002_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9001_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo IList_1_get_Item_m46386_MethodInfo;
extern MethodInfo IList_1_set_Item_m46387_MethodInfo;
static PropertyInfo IList_1_t9001____Item_PropertyInfo = 
{
	&IList_1_t9001_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46386_MethodInfo/* get */
	, &IList_1_set_Item_m46387_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9001_PropertyInfos[] =
{
	&IList_1_t9001____Item_PropertyInfo,
	NULL
};
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
static ParameterInfo IList_1_t9001_IList_1_IndexOf_m46388_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t2114_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46388_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46388_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9001_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9001_IList_1_IndexOf_m46388_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46388_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
static ParameterInfo IList_1_t9001_IList_1_Insert_m46389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t2114_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46389_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46389_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9001_IList_1_Insert_m46389_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46389_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9001_IList_1_RemoveAt_m46390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46390_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46390_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9001_IList_1_RemoveAt_m46390_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46390_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9001_IList_1_get_Item_m46386_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
extern void* RuntimeInvoker_FormatterTypeStyle_t2114_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46386_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46386_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9001_il2cpp_TypeInfo/* declaring_type */
	, &FormatterTypeStyle_t2114_0_0_0/* return_type */
	, RuntimeInvoker_FormatterTypeStyle_t2114_Int32_t63/* invoker_method */
	, IList_1_t9001_IList_1_get_Item_m46386_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46386_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType FormatterTypeStyle_t2114_0_0_0;
static ParameterInfo IList_1_t9001_IList_1_set_Item_m46387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t2114_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46387_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46387_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9001_IList_1_set_Item_m46387_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46387_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9001_MethodInfos[] =
{
	&IList_1_IndexOf_m46388_MethodInfo,
	&IList_1_Insert_m46389_MethodInfo,
	&IList_1_RemoveAt_m46390_MethodInfo,
	&IList_1_get_Item_m46386_MethodInfo,
	&IList_1_set_Item_m46387_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9001_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9000_il2cpp_TypeInfo,
	&IEnumerable_1_t9002_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9001_0_0_0;
extern Il2CppType IList_1_t9001_1_0_0;
struct IList_1_t9001;
extern Il2CppGenericClass IList_1_t9001_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9001_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9001_MethodInfos/* methods */
	, IList_1_t9001_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9001_il2cpp_TypeInfo/* element_class */
	, IList_1_t9001_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9001_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9001_0_0_0/* byval_arg */
	, &IList_1_t9001_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9001_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6927_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo IEnumerator_1_get_Current_m46391_MethodInfo;
static PropertyInfo IEnumerator_1_t6927____Current_PropertyInfo = 
{
	&IEnumerator_1_t6927_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46391_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6927_PropertyInfos[] =
{
	&IEnumerator_1_t6927____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
extern void* RuntimeInvoker_TypeFilterLevel_t2115 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46391_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46391_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6927_il2cpp_TypeInfo/* declaring_type */
	, &TypeFilterLevel_t2115_0_0_0/* return_type */
	, RuntimeInvoker_TypeFilterLevel_t2115/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46391_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6927_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46391_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6927_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6927_0_0_0;
extern Il2CppType IEnumerator_1_t6927_1_0_0;
struct IEnumerator_1_t6927;
extern Il2CppGenericClass IEnumerator_1_t6927_GenericClass;
TypeInfo IEnumerator_1_t6927_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6927_MethodInfos/* methods */
	, IEnumerator_1_t6927_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6927_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6927_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6927_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6927_0_0_0/* byval_arg */
	, &IEnumerator_1_t6927_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6927_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_711.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4857_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_711MethodDeclarations.h"

extern TypeInfo TypeFilterLevel_t2115_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26396_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeFilterLevel_t2115_m35683_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTypeFilterLevel_t2115_m35683 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26392_MethodInfo;
 void InternalEnumerator_1__ctor_m26392 (InternalEnumerator_1_t4857 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393 (InternalEnumerator_1_t4857 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26396(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26396_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeFilterLevel_t2115_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26394_MethodInfo;
 void InternalEnumerator_1_Dispose_m26394 (InternalEnumerator_1_t4857 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26395_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26395 (InternalEnumerator_1_t4857 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26396 (InternalEnumerator_1_t4857 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisTypeFilterLevel_t2115_m35683(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeFilterLevel_t2115_m35683_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4857____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4857, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4857____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4857, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4857_FieldInfos[] =
{
	&InternalEnumerator_1_t4857____array_0_FieldInfo,
	&InternalEnumerator_1_t4857____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4857____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4857_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4857____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4857_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26396_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4857_PropertyInfos[] =
{
	&InternalEnumerator_1_t4857____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4857____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4857_InternalEnumerator_1__ctor_m26392_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26392_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26392_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26392/* method */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4857_InternalEnumerator_1__ctor_m26392_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26392_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393/* method */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26394_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26394_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26394/* method */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26394_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26395_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26395_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26395/* method */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26395_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
extern void* RuntimeInvoker_TypeFilterLevel_t2115 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26396_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26396_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26396/* method */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* declaring_type */
	, &TypeFilterLevel_t2115_0_0_0/* return_type */
	, RuntimeInvoker_TypeFilterLevel_t2115/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26396_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4857_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26392_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393_MethodInfo,
	&InternalEnumerator_1_Dispose_m26394_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26395_MethodInfo,
	&InternalEnumerator_1_get_Current_m26396_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4857_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26393_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26395_MethodInfo,
	&InternalEnumerator_1_Dispose_m26394_MethodInfo,
	&InternalEnumerator_1_get_Current_m26396_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4857_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6927_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4857_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6927_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4857_0_0_0;
extern Il2CppType InternalEnumerator_1_t4857_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4857_GenericClass;
TypeInfo InternalEnumerator_1_t4857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4857_MethodInfos/* methods */
	, InternalEnumerator_1_t4857_PropertyInfos/* properties */
	, InternalEnumerator_1_t4857_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4857_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4857_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4857_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4857_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4857_1_0_0/* this_arg */
	, InternalEnumerator_1_t4857_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4857_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4857)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9003_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo ICollection_1_get_Count_m46392_MethodInfo;
static PropertyInfo ICollection_1_t9003____Count_PropertyInfo = 
{
	&ICollection_1_t9003_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46392_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46393_MethodInfo;
static PropertyInfo ICollection_1_t9003____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9003_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46393_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9003_PropertyInfos[] =
{
	&ICollection_1_t9003____Count_PropertyInfo,
	&ICollection_1_t9003____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46392_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Count()
MethodInfo ICollection_1_get_Count_m46392_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46392_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46393_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46393_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46393_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
static ParameterInfo ICollection_1_t9003_ICollection_1_Add_m46394_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t2115_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46394_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Add(T)
MethodInfo ICollection_1_Add_m46394_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9003_ICollection_1_Add_m46394_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46394_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46395_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Clear()
MethodInfo ICollection_1_Clear_m46395_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46395_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
static ParameterInfo ICollection_1_t9003_ICollection_1_Contains_m46396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t2115_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46396_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Contains(T)
MethodInfo ICollection_1_Contains_m46396_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9003_ICollection_1_Contains_m46396_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46396_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevelU5BU5D_t5113_0_0_0;
extern Il2CppType TypeFilterLevelU5BU5D_t5113_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9003_ICollection_1_CopyTo_m46397_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevelU5BU5D_t5113_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46397_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46397_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9003_ICollection_1_CopyTo_m46397_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46397_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
static ParameterInfo ICollection_1_t9003_ICollection_1_Remove_m46398_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t2115_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46398_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Remove(T)
MethodInfo ICollection_1_Remove_m46398_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9003_ICollection_1_Remove_m46398_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46398_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9003_MethodInfos[] =
{
	&ICollection_1_get_Count_m46392_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46393_MethodInfo,
	&ICollection_1_Add_m46394_MethodInfo,
	&ICollection_1_Clear_m46395_MethodInfo,
	&ICollection_1_Contains_m46396_MethodInfo,
	&ICollection_1_CopyTo_m46397_MethodInfo,
	&ICollection_1_Remove_m46398_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9005_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9003_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9005_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9003_0_0_0;
extern Il2CppType ICollection_1_t9003_1_0_0;
struct ICollection_1_t9003;
extern Il2CppGenericClass ICollection_1_t9003_GenericClass;
TypeInfo ICollection_1_t9003_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9003_MethodInfos/* methods */
	, ICollection_1_t9003_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9003_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9003_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9003_0_0_0/* byval_arg */
	, &ICollection_1_t9003_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9003_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern Il2CppType IEnumerator_1_t6927_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46399_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46399_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9005_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6927_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46399_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9005_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46399_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9005_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9005_0_0_0;
extern Il2CppType IEnumerable_1_t9005_1_0_0;
struct IEnumerable_1_t9005;
extern Il2CppGenericClass IEnumerable_1_t9005_GenericClass;
TypeInfo IEnumerable_1_t9005_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9005_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9005_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9005_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9005_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9005_0_0_0/* byval_arg */
	, &IEnumerable_1_t9005_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9005_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9004_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo IList_1_get_Item_m46400_MethodInfo;
extern MethodInfo IList_1_set_Item_m46401_MethodInfo;
static PropertyInfo IList_1_t9004____Item_PropertyInfo = 
{
	&IList_1_t9004_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46400_MethodInfo/* get */
	, &IList_1_set_Item_m46401_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9004_PropertyInfos[] =
{
	&IList_1_t9004____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
static ParameterInfo IList_1_t9004_IList_1_IndexOf_m46402_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t2115_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46402_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46402_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9004_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9004_IList_1_IndexOf_m46402_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46402_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
static ParameterInfo IList_1_t9004_IList_1_Insert_m46403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t2115_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46403_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46403_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9004_IList_1_Insert_m46403_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46403_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9004_IList_1_RemoveAt_m46404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46404_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46404_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9004_IList_1_RemoveAt_m46404_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46404_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9004_IList_1_get_Item_m46400_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
extern void* RuntimeInvoker_TypeFilterLevel_t2115_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46400_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46400_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9004_il2cpp_TypeInfo/* declaring_type */
	, &TypeFilterLevel_t2115_0_0_0/* return_type */
	, RuntimeInvoker_TypeFilterLevel_t2115_Int32_t63/* invoker_method */
	, IList_1_t9004_IList_1_get_Item_m46400_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46400_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeFilterLevel_t2115_0_0_0;
static ParameterInfo IList_1_t9004_IList_1_set_Item_m46401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t2115_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46401_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46401_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9004_IList_1_set_Item_m46401_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46401_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9004_MethodInfos[] =
{
	&IList_1_IndexOf_m46402_MethodInfo,
	&IList_1_Insert_m46403_MethodInfo,
	&IList_1_RemoveAt_m46404_MethodInfo,
	&IList_1_get_Item_m46400_MethodInfo,
	&IList_1_set_Item_m46401_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9004_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9003_il2cpp_TypeInfo,
	&IEnumerable_1_t9005_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9004_0_0_0;
extern Il2CppType IList_1_t9004_1_0_0;
struct IList_1_t9004;
extern Il2CppGenericClass IList_1_t9004_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9004_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9004_MethodInfos/* methods */
	, IList_1_t9004_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9004_il2cpp_TypeInfo/* element_class */
	, IList_1_t9004_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9004_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9004_0_0_0/* byval_arg */
	, &IList_1_t9004_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9004_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6929_il2cpp_TypeInfo;

// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatus.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo IEnumerator_1_get_Current_m46405_MethodInfo;
static PropertyInfo IEnumerator_1_t6929____Current_PropertyInfo = 
{
	&IEnumerator_1_t6929_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46405_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6929_PropertyInfos[] =
{
	&IEnumerator_1_t6929____Current_PropertyInfo,
	NULL
};
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
extern void* RuntimeInvoker_ObjectRecordStatus_t2124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46405_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46405_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6929_il2cpp_TypeInfo/* declaring_type */
	, &ObjectRecordStatus_t2124_0_0_0/* return_type */
	, RuntimeInvoker_ObjectRecordStatus_t2124/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46405_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6929_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46405_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6929_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6929_0_0_0;
extern Il2CppType IEnumerator_1_t6929_1_0_0;
struct IEnumerator_1_t6929;
extern Il2CppGenericClass IEnumerator_1_t6929_GenericClass;
TypeInfo IEnumerator_1_t6929_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6929_MethodInfos/* methods */
	, IEnumerator_1_t6929_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6929_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6929_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6929_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6929_0_0_0/* byval_arg */
	, &IEnumerator_1_t6929_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6929_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_712.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4858_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_712MethodDeclarations.h"

extern TypeInfo ObjectRecordStatus_t2124_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26401_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisObjectRecordStatus_t2124_m35694_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisObjectRecordStatus_t2124_m35694 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26397_MethodInfo;
 void InternalEnumerator_1__ctor_m26397 (InternalEnumerator_1_t4858 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398 (InternalEnumerator_1_t4858 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m26401(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26401_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ObjectRecordStatus_t2124_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26399_MethodInfo;
 void InternalEnumerator_1_Dispose_m26399 (InternalEnumerator_1_t4858 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26400_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26400 (InternalEnumerator_1_t4858 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m26401 (InternalEnumerator_1_t4858 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		uint8_t L_8 = Array_InternalArray__get_Item_TisObjectRecordStatus_t2124_m35694(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisObjectRecordStatus_t2124_m35694_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4858____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4858, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4858____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4858, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4858_FieldInfos[] =
{
	&InternalEnumerator_1_t4858____array_0_FieldInfo,
	&InternalEnumerator_1_t4858____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4858____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4858_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4858____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4858_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26401_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4858_PropertyInfos[] =
{
	&InternalEnumerator_1_t4858____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4858____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4858_InternalEnumerator_1__ctor_m26397_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26397_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26397_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26397/* method */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4858_InternalEnumerator_1__ctor_m26397_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26397_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398/* method */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26399_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26399_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26399/* method */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26399_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26400_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26400_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26400/* method */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26400_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
extern void* RuntimeInvoker_ObjectRecordStatus_t2124 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26401_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26401_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26401/* method */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* declaring_type */
	, &ObjectRecordStatus_t2124_0_0_0/* return_type */
	, RuntimeInvoker_ObjectRecordStatus_t2124/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26401_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4858_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26397_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398_MethodInfo,
	&InternalEnumerator_1_Dispose_m26399_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26400_MethodInfo,
	&InternalEnumerator_1_get_Current_m26401_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4858_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26398_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26400_MethodInfo,
	&InternalEnumerator_1_Dispose_m26399_MethodInfo,
	&InternalEnumerator_1_get_Current_m26401_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4858_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6929_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4858_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6929_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4858_0_0_0;
extern Il2CppType InternalEnumerator_1_t4858_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4858_GenericClass;
TypeInfo InternalEnumerator_1_t4858_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4858_MethodInfos/* methods */
	, InternalEnumerator_1_t4858_PropertyInfos/* properties */
	, InternalEnumerator_1_t4858_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4858_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4858_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4858_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4858_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4858_1_0_0/* this_arg */
	, InternalEnumerator_1_t4858_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4858_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4858)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9006_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo ICollection_1_get_Count_m46406_MethodInfo;
static PropertyInfo ICollection_1_t9006____Count_PropertyInfo = 
{
	&ICollection_1_t9006_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46406_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46407_MethodInfo;
static PropertyInfo ICollection_1_t9006____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9006_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46407_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9006_PropertyInfos[] =
{
	&ICollection_1_t9006____Count_PropertyInfo,
	&ICollection_1_t9006____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46406_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Count()
MethodInfo ICollection_1_get_Count_m46406_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46406_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46407_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46407_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46407_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
static ParameterInfo ICollection_1_t9006_ICollection_1_Add_m46408_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t2124_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46408_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Add(T)
MethodInfo ICollection_1_Add_m46408_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Byte_t98/* invoker_method */
	, ICollection_1_t9006_ICollection_1_Add_m46408_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46408_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46409_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Clear()
MethodInfo ICollection_1_Clear_m46409_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46409_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
static ParameterInfo ICollection_1_t9006_ICollection_1_Contains_m46410_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t2124_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46410_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Contains(T)
MethodInfo ICollection_1_Contains_m46410_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t9006_ICollection_1_Contains_m46410_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46410_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatusU5BU5D_t5114_0_0_0;
extern Il2CppType ObjectRecordStatusU5BU5D_t5114_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9006_ICollection_1_CopyTo_m46411_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatusU5BU5D_t5114_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46411_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46411_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9006_ICollection_1_CopyTo_m46411_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46411_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
static ParameterInfo ICollection_1_t9006_ICollection_1_Remove_m46412_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t2124_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46412_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Remove(T)
MethodInfo ICollection_1_Remove_m46412_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t9006_ICollection_1_Remove_m46412_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46412_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9006_MethodInfos[] =
{
	&ICollection_1_get_Count_m46406_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46407_MethodInfo,
	&ICollection_1_Add_m46408_MethodInfo,
	&ICollection_1_Clear_m46409_MethodInfo,
	&ICollection_1_Contains_m46410_MethodInfo,
	&ICollection_1_CopyTo_m46411_MethodInfo,
	&ICollection_1_Remove_m46412_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9008_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9006_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9008_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9006_0_0_0;
extern Il2CppType ICollection_1_t9006_1_0_0;
struct ICollection_1_t9006;
extern Il2CppGenericClass ICollection_1_t9006_GenericClass;
TypeInfo ICollection_1_t9006_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9006_MethodInfos/* methods */
	, ICollection_1_t9006_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9006_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9006_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9006_0_0_0/* byval_arg */
	, &ICollection_1_t9006_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9006_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ObjectRecordStatus>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ObjectRecordStatus>
extern Il2CppType IEnumerator_1_t6929_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46413_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ObjectRecordStatus>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46413_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9008_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6929_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46413_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9008_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46413_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9008_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9008_0_0_0;
extern Il2CppType IEnumerable_1_t9008_1_0_0;
struct IEnumerable_1_t9008;
extern Il2CppGenericClass IEnumerable_1_t9008_GenericClass;
TypeInfo IEnumerable_1_t9008_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9008_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9008_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9008_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9008_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9008_0_0_0/* byval_arg */
	, &IEnumerable_1_t9008_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9008_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9007_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo IList_1_get_Item_m46414_MethodInfo;
extern MethodInfo IList_1_set_Item_m46415_MethodInfo;
static PropertyInfo IList_1_t9007____Item_PropertyInfo = 
{
	&IList_1_t9007_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46414_MethodInfo/* get */
	, &IList_1_set_Item_m46415_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9007_PropertyInfos[] =
{
	&IList_1_t9007____Item_PropertyInfo,
	NULL
};
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
static ParameterInfo IList_1_t9007_IList_1_IndexOf_m46416_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t2124_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46416_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46416_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9007_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t9007_IList_1_IndexOf_m46416_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46416_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
static ParameterInfo IList_1_t9007_IList_1_Insert_m46417_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t2124_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46417_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46417_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t9007_IList_1_Insert_m46417_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46417_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9007_IList_1_RemoveAt_m46418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46418_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46418_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9007_IList_1_RemoveAt_m46418_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46418_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9007_IList_1_get_Item_m46414_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
extern void* RuntimeInvoker_ObjectRecordStatus_t2124_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46414_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46414_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9007_il2cpp_TypeInfo/* declaring_type */
	, &ObjectRecordStatus_t2124_0_0_0/* return_type */
	, RuntimeInvoker_ObjectRecordStatus_t2124_Int32_t63/* invoker_method */
	, IList_1_t9007_IList_1_get_Item_m46414_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46414_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ObjectRecordStatus_t2124_0_0_0;
static ParameterInfo IList_1_t9007_IList_1_set_Item_m46415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t2124_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46415_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46415_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t9007_IList_1_set_Item_m46415_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46415_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9007_MethodInfos[] =
{
	&IList_1_IndexOf_m46416_MethodInfo,
	&IList_1_Insert_m46417_MethodInfo,
	&IList_1_RemoveAt_m46418_MethodInfo,
	&IList_1_get_Item_m46414_MethodInfo,
	&IList_1_set_Item_m46415_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9007_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9006_il2cpp_TypeInfo,
	&IEnumerable_1_t9008_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9007_0_0_0;
extern Il2CppType IList_1_t9007_1_0_0;
struct IList_1_t9007;
extern Il2CppGenericClass IList_1_t9007_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9007_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9007_MethodInfos/* methods */
	, IList_1_t9007_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9007_il2cpp_TypeInfo/* element_class */
	, IList_1_t9007_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9007_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9007_0_0_0/* byval_arg */
	, &IList_1_t9007_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9007_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6931_il2cpp_TypeInfo;

// System.Runtime.Serialization.OnDeserializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializedAttribut.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46419_MethodInfo;
static PropertyInfo IEnumerator_1_t6931____Current_PropertyInfo = 
{
	&IEnumerator_1_t6931_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46419_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6931_PropertyInfos[] =
{
	&IEnumerator_1_t6931____Current_PropertyInfo,
	NULL
};
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46419_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46419_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6931_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializedAttribute_t2125_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46419_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6931_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46419_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6931_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6931_0_0_0;
extern Il2CppType IEnumerator_1_t6931_1_0_0;
struct IEnumerator_1_t6931;
extern Il2CppGenericClass IEnumerator_1_t6931_GenericClass;
TypeInfo IEnumerator_1_t6931_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6931_MethodInfos/* methods */
	, IEnumerator_1_t6931_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6931_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6931_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6931_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6931_0_0_0/* byval_arg */
	, &IEnumerator_1_t6931_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6931_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_713.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4859_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_713MethodDeclarations.h"

extern TypeInfo OnDeserializedAttribute_t2125_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26406_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOnDeserializedAttribute_t2125_m35705_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOnDeserializedAttribute_t2125_m35705(__this, p0, method) (OnDeserializedAttribute_t2125 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4859____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4859, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4859____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4859, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4859_FieldInfos[] =
{
	&InternalEnumerator_1_t4859____array_0_FieldInfo,
	&InternalEnumerator_1_t4859____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26403_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4859____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4859_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26403_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4859____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4859_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26406_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4859_PropertyInfos[] =
{
	&InternalEnumerator_1_t4859____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4859____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4859_InternalEnumerator_1__ctor_m26402_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26402_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26402_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4859_InternalEnumerator_1__ctor_m26402_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26402_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26403_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26403_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26403_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26404_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26404_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26404_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26405_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26405_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26405_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26406_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26406_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializedAttribute_t2125_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26406_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4859_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26402_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26403_MethodInfo,
	&InternalEnumerator_1_Dispose_m26404_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26405_MethodInfo,
	&InternalEnumerator_1_get_Current_m26406_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26405_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26404_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4859_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26403_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26405_MethodInfo,
	&InternalEnumerator_1_Dispose_m26404_MethodInfo,
	&InternalEnumerator_1_get_Current_m26406_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4859_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6931_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4859_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6931_il2cpp_TypeInfo, 7},
};
extern TypeInfo OnDeserializedAttribute_t2125_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4859_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26406_MethodInfo/* Method Usage */,
	&OnDeserializedAttribute_t2125_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOnDeserializedAttribute_t2125_m35705_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4859_0_0_0;
extern Il2CppType InternalEnumerator_1_t4859_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4859_GenericClass;
TypeInfo InternalEnumerator_1_t4859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4859_MethodInfos/* methods */
	, InternalEnumerator_1_t4859_PropertyInfos/* properties */
	, InternalEnumerator_1_t4859_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4859_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4859_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4859_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4859_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4859_1_0_0/* this_arg */
	, InternalEnumerator_1_t4859_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4859_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4859_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4859)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9009_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo ICollection_1_get_Count_m46420_MethodInfo;
static PropertyInfo ICollection_1_t9009____Count_PropertyInfo = 
{
	&ICollection_1_t9009_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46420_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46421_MethodInfo;
static PropertyInfo ICollection_1_t9009____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9009_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46421_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9009_PropertyInfos[] =
{
	&ICollection_1_t9009____Count_PropertyInfo,
	&ICollection_1_t9009____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46420_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46420_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46420_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46421_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46421_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46421_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
static ParameterInfo ICollection_1_t9009_ICollection_1_Add_m46422_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t2125_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46422_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46422_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t9009_ICollection_1_Add_m46422_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46422_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46423_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46423_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46423_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
static ParameterInfo ICollection_1_t9009_ICollection_1_Contains_m46424_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t2125_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46424_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46424_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9009_ICollection_1_Contains_m46424_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46424_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttributeU5BU5D_t5115_0_0_0;
extern Il2CppType OnDeserializedAttributeU5BU5D_t5115_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9009_ICollection_1_CopyTo_m46425_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttributeU5BU5D_t5115_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46425_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46425_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9009_ICollection_1_CopyTo_m46425_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46425_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
static ParameterInfo ICollection_1_t9009_ICollection_1_Remove_m46426_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t2125_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46426_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46426_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9009_ICollection_1_Remove_m46426_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46426_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9009_MethodInfos[] =
{
	&ICollection_1_get_Count_m46420_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46421_MethodInfo,
	&ICollection_1_Add_m46422_MethodInfo,
	&ICollection_1_Clear_m46423_MethodInfo,
	&ICollection_1_Contains_m46424_MethodInfo,
	&ICollection_1_CopyTo_m46425_MethodInfo,
	&ICollection_1_Remove_m46426_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9011_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9009_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9011_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9009_0_0_0;
extern Il2CppType ICollection_1_t9009_1_0_0;
struct ICollection_1_t9009;
extern Il2CppGenericClass ICollection_1_t9009_GenericClass;
TypeInfo ICollection_1_t9009_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9009_MethodInfos/* methods */
	, ICollection_1_t9009_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9009_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9009_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9009_0_0_0/* byval_arg */
	, &ICollection_1_t9009_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9009_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern Il2CppType IEnumerator_1_t6931_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46427_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46427_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9011_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6931_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46427_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9011_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46427_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9011_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9011_0_0_0;
extern Il2CppType IEnumerable_1_t9011_1_0_0;
struct IEnumerable_1_t9011;
extern Il2CppGenericClass IEnumerable_1_t9011_GenericClass;
TypeInfo IEnumerable_1_t9011_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9011_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9011_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9011_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9011_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9011_0_0_0/* byval_arg */
	, &IEnumerable_1_t9011_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9011_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9010_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo IList_1_get_Item_m46428_MethodInfo;
extern MethodInfo IList_1_set_Item_m46429_MethodInfo;
static PropertyInfo IList_1_t9010____Item_PropertyInfo = 
{
	&IList_1_t9010_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46428_MethodInfo/* get */
	, &IList_1_set_Item_m46429_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9010_PropertyInfos[] =
{
	&IList_1_t9010____Item_PropertyInfo,
	NULL
};
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
static ParameterInfo IList_1_t9010_IList_1_IndexOf_m46430_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t2125_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46430_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46430_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9010_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9010_IList_1_IndexOf_m46430_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46430_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
static ParameterInfo IList_1_t9010_IList_1_Insert_m46431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t2125_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46431_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46431_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9010_IList_1_Insert_m46431_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46431_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9010_IList_1_RemoveAt_m46432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46432_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46432_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9010_IList_1_RemoveAt_m46432_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46432_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9010_IList_1_get_Item_m46428_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46428_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46428_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9010_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializedAttribute_t2125_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t9010_IList_1_get_Item_m46428_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46428_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OnDeserializedAttribute_t2125_0_0_0;
static ParameterInfo IList_1_t9010_IList_1_set_Item_m46429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t2125_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46429_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46429_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9010_IList_1_set_Item_m46429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46429_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9010_MethodInfos[] =
{
	&IList_1_IndexOf_m46430_MethodInfo,
	&IList_1_Insert_m46431_MethodInfo,
	&IList_1_RemoveAt_m46432_MethodInfo,
	&IList_1_get_Item_m46428_MethodInfo,
	&IList_1_set_Item_m46429_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9010_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9009_il2cpp_TypeInfo,
	&IEnumerable_1_t9011_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9010_0_0_0;
extern Il2CppType IList_1_t9010_1_0_0;
struct IList_1_t9010;
extern Il2CppGenericClass IList_1_t9010_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9010_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9010_MethodInfos/* methods */
	, IList_1_t9010_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9010_il2cpp_TypeInfo/* element_class */
	, IList_1_t9010_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9010_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9010_0_0_0/* byval_arg */
	, &IList_1_t9010_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9010_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6933_il2cpp_TypeInfo;

// System.Runtime.Serialization.OnDeserializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializingAttribu.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46433_MethodInfo;
static PropertyInfo IEnumerator_1_t6933____Current_PropertyInfo = 
{
	&IEnumerator_1_t6933_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46433_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6933_PropertyInfos[] =
{
	&IEnumerator_1_t6933____Current_PropertyInfo,
	NULL
};
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46433_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46433_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6933_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializingAttribute_t2126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46433_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6933_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46433_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6933_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6933_0_0_0;
extern Il2CppType IEnumerator_1_t6933_1_0_0;
struct IEnumerator_1_t6933;
extern Il2CppGenericClass IEnumerator_1_t6933_GenericClass;
TypeInfo IEnumerator_1_t6933_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6933_MethodInfos/* methods */
	, IEnumerator_1_t6933_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6933_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6933_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6933_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6933_0_0_0/* byval_arg */
	, &IEnumerator_1_t6933_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6933_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_714.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4860_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_714MethodDeclarations.h"

extern TypeInfo OnDeserializingAttribute_t2126_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26411_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOnDeserializingAttribute_t2126_m35716_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOnDeserializingAttribute_t2126_m35716(__this, p0, method) (OnDeserializingAttribute_t2126 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4860____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4860, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4860____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4860, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4860_FieldInfos[] =
{
	&InternalEnumerator_1_t4860____array_0_FieldInfo,
	&InternalEnumerator_1_t4860____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26408_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4860____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4860_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26408_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4860____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4860_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26411_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4860_PropertyInfos[] =
{
	&InternalEnumerator_1_t4860____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4860____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4860_InternalEnumerator_1__ctor_m26407_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26407_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26407_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4860_InternalEnumerator_1__ctor_m26407_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26407_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26408_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26408_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26408_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26409_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26409_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26409_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26410_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26410_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26410_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26411_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26411_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializingAttribute_t2126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26411_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4860_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26407_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26408_MethodInfo,
	&InternalEnumerator_1_Dispose_m26409_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26410_MethodInfo,
	&InternalEnumerator_1_get_Current_m26411_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26410_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26409_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4860_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26408_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26410_MethodInfo,
	&InternalEnumerator_1_Dispose_m26409_MethodInfo,
	&InternalEnumerator_1_get_Current_m26411_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4860_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6933_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4860_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6933_il2cpp_TypeInfo, 7},
};
extern TypeInfo OnDeserializingAttribute_t2126_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4860_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26411_MethodInfo/* Method Usage */,
	&OnDeserializingAttribute_t2126_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOnDeserializingAttribute_t2126_m35716_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4860_0_0_0;
extern Il2CppType InternalEnumerator_1_t4860_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4860_GenericClass;
TypeInfo InternalEnumerator_1_t4860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4860_MethodInfos/* methods */
	, InternalEnumerator_1_t4860_PropertyInfos/* properties */
	, InternalEnumerator_1_t4860_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4860_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4860_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4860_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4860_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4860_1_0_0/* this_arg */
	, InternalEnumerator_1_t4860_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4860_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4860_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4860)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9012_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo ICollection_1_get_Count_m46434_MethodInfo;
static PropertyInfo ICollection_1_t9012____Count_PropertyInfo = 
{
	&ICollection_1_t9012_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46434_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46435_MethodInfo;
static PropertyInfo ICollection_1_t9012____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9012_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46435_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9012_PropertyInfos[] =
{
	&ICollection_1_t9012____Count_PropertyInfo,
	&ICollection_1_t9012____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46434_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46434_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46434_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46435_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46435_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46435_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
static ParameterInfo ICollection_1_t9012_ICollection_1_Add_m46436_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t2126_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46436_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46436_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t9012_ICollection_1_Add_m46436_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46436_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46437_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46437_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46437_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
static ParameterInfo ICollection_1_t9012_ICollection_1_Contains_m46438_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t2126_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46438_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46438_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9012_ICollection_1_Contains_m46438_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46438_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttributeU5BU5D_t5116_0_0_0;
extern Il2CppType OnDeserializingAttributeU5BU5D_t5116_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9012_ICollection_1_CopyTo_m46439_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttributeU5BU5D_t5116_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46439_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46439_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9012_ICollection_1_CopyTo_m46439_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46439_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
static ParameterInfo ICollection_1_t9012_ICollection_1_Remove_m46440_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t2126_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46440_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46440_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9012_ICollection_1_Remove_m46440_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46440_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9012_MethodInfos[] =
{
	&ICollection_1_get_Count_m46434_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46435_MethodInfo,
	&ICollection_1_Add_m46436_MethodInfo,
	&ICollection_1_Clear_m46437_MethodInfo,
	&ICollection_1_Contains_m46438_MethodInfo,
	&ICollection_1_CopyTo_m46439_MethodInfo,
	&ICollection_1_Remove_m46440_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9014_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9012_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9014_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9012_0_0_0;
extern Il2CppType ICollection_1_t9012_1_0_0;
struct ICollection_1_t9012;
extern Il2CppGenericClass ICollection_1_t9012_GenericClass;
TypeInfo ICollection_1_t9012_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9012_MethodInfos/* methods */
	, ICollection_1_t9012_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9012_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9012_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9012_0_0_0/* byval_arg */
	, &ICollection_1_t9012_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9012_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializingAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern Il2CppType IEnumerator_1_t6933_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46441_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializingAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46441_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9014_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6933_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46441_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9014_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46441_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9014_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9014_0_0_0;
extern Il2CppType IEnumerable_1_t9014_1_0_0;
struct IEnumerable_1_t9014;
extern Il2CppGenericClass IEnumerable_1_t9014_GenericClass;
TypeInfo IEnumerable_1_t9014_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9014_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9014_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9014_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9014_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9014_0_0_0/* byval_arg */
	, &IEnumerable_1_t9014_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9014_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9013_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo IList_1_get_Item_m46442_MethodInfo;
extern MethodInfo IList_1_set_Item_m46443_MethodInfo;
static PropertyInfo IList_1_t9013____Item_PropertyInfo = 
{
	&IList_1_t9013_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46442_MethodInfo/* get */
	, &IList_1_set_Item_m46443_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9013_PropertyInfos[] =
{
	&IList_1_t9013____Item_PropertyInfo,
	NULL
};
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
static ParameterInfo IList_1_t9013_IList_1_IndexOf_m46444_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t2126_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46444_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46444_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9013_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9013_IList_1_IndexOf_m46444_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46444_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
static ParameterInfo IList_1_t9013_IList_1_Insert_m46445_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t2126_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46445_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46445_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9013_IList_1_Insert_m46445_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46445_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9013_IList_1_RemoveAt_m46446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46446_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46446_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9013_IList_1_RemoveAt_m46446_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46446_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9013_IList_1_get_Item_m46442_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46442_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46442_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9013_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializingAttribute_t2126_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t9013_IList_1_get_Item_m46442_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46442_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OnDeserializingAttribute_t2126_0_0_0;
static ParameterInfo IList_1_t9013_IList_1_set_Item_m46443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t2126_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46443_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46443_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9013_IList_1_set_Item_m46443_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46443_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9013_MethodInfos[] =
{
	&IList_1_IndexOf_m46444_MethodInfo,
	&IList_1_Insert_m46445_MethodInfo,
	&IList_1_RemoveAt_m46446_MethodInfo,
	&IList_1_get_Item_m46442_MethodInfo,
	&IList_1_set_Item_m46443_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9013_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9012_il2cpp_TypeInfo,
	&IEnumerable_1_t9014_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9013_0_0_0;
extern Il2CppType IList_1_t9013_1_0_0;
struct IList_1_t9013;
extern Il2CppGenericClass IList_1_t9013_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9013_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9013_MethodInfos/* methods */
	, IList_1_t9013_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9013_il2cpp_TypeInfo/* element_class */
	, IList_1_t9013_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9013_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9013_0_0_0/* byval_arg */
	, &IList_1_t9013_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9013_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6935_il2cpp_TypeInfo;

// System.Runtime.Serialization.OnSerializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializedAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46447_MethodInfo;
static PropertyInfo IEnumerator_1_t6935____Current_PropertyInfo = 
{
	&IEnumerator_1_t6935_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46447_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6935_PropertyInfos[] =
{
	&IEnumerator_1_t6935____Current_PropertyInfo,
	NULL
};
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46447_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46447_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6935_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializedAttribute_t2127_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46447_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6935_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46447_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6935_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6935_0_0_0;
extern Il2CppType IEnumerator_1_t6935_1_0_0;
struct IEnumerator_1_t6935;
extern Il2CppGenericClass IEnumerator_1_t6935_GenericClass;
TypeInfo IEnumerator_1_t6935_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6935_MethodInfos/* methods */
	, IEnumerator_1_t6935_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6935_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6935_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6935_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6935_0_0_0/* byval_arg */
	, &IEnumerator_1_t6935_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6935_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_715.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4861_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_715MethodDeclarations.h"

extern TypeInfo OnSerializedAttribute_t2127_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26416_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOnSerializedAttribute_t2127_m35727_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOnSerializedAttribute_t2127_m35727(__this, p0, method) (OnSerializedAttribute_t2127 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4861____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4861, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4861____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4861, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4861_FieldInfos[] =
{
	&InternalEnumerator_1_t4861____array_0_FieldInfo,
	&InternalEnumerator_1_t4861____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26413_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4861____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4861_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26413_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4861____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4861_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26416_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4861_PropertyInfos[] =
{
	&InternalEnumerator_1_t4861____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4861____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4861_InternalEnumerator_1__ctor_m26412_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26412_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26412_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4861_InternalEnumerator_1__ctor_m26412_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26412_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26413_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26413_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26413_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26414_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26414_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26414_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26415_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26415_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26415_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26416_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26416_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializedAttribute_t2127_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26416_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4861_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26412_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26413_MethodInfo,
	&InternalEnumerator_1_Dispose_m26414_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26415_MethodInfo,
	&InternalEnumerator_1_get_Current_m26416_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26415_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26414_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4861_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26413_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26415_MethodInfo,
	&InternalEnumerator_1_Dispose_m26414_MethodInfo,
	&InternalEnumerator_1_get_Current_m26416_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4861_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6935_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4861_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6935_il2cpp_TypeInfo, 7},
};
extern TypeInfo OnSerializedAttribute_t2127_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4861_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26416_MethodInfo/* Method Usage */,
	&OnSerializedAttribute_t2127_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOnSerializedAttribute_t2127_m35727_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4861_0_0_0;
extern Il2CppType InternalEnumerator_1_t4861_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4861_GenericClass;
TypeInfo InternalEnumerator_1_t4861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4861_MethodInfos/* methods */
	, InternalEnumerator_1_t4861_PropertyInfos/* properties */
	, InternalEnumerator_1_t4861_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4861_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4861_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4861_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4861_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4861_1_0_0/* this_arg */
	, InternalEnumerator_1_t4861_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4861_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4861_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4861)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9015_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo ICollection_1_get_Count_m46448_MethodInfo;
static PropertyInfo ICollection_1_t9015____Count_PropertyInfo = 
{
	&ICollection_1_t9015_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46448_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46449_MethodInfo;
static PropertyInfo ICollection_1_t9015____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9015_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46449_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9015_PropertyInfos[] =
{
	&ICollection_1_t9015____Count_PropertyInfo,
	&ICollection_1_t9015____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46448_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46448_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46448_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46449_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46449_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46449_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
static ParameterInfo ICollection_1_t9015_ICollection_1_Add_m46450_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t2127_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46450_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46450_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t9015_ICollection_1_Add_m46450_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46450_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46451_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46451_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46451_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
static ParameterInfo ICollection_1_t9015_ICollection_1_Contains_m46452_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t2127_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46452_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46452_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9015_ICollection_1_Contains_m46452_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46452_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttributeU5BU5D_t5117_0_0_0;
extern Il2CppType OnSerializedAttributeU5BU5D_t5117_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9015_ICollection_1_CopyTo_m46453_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttributeU5BU5D_t5117_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46453_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46453_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9015_ICollection_1_CopyTo_m46453_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46453_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
static ParameterInfo ICollection_1_t9015_ICollection_1_Remove_m46454_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t2127_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46454_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46454_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9015_ICollection_1_Remove_m46454_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46454_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9015_MethodInfos[] =
{
	&ICollection_1_get_Count_m46448_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46449_MethodInfo,
	&ICollection_1_Add_m46450_MethodInfo,
	&ICollection_1_Clear_m46451_MethodInfo,
	&ICollection_1_Contains_m46452_MethodInfo,
	&ICollection_1_CopyTo_m46453_MethodInfo,
	&ICollection_1_Remove_m46454_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9017_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9015_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9017_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9015_0_0_0;
extern Il2CppType ICollection_1_t9015_1_0_0;
struct ICollection_1_t9015;
extern Il2CppGenericClass ICollection_1_t9015_GenericClass;
TypeInfo ICollection_1_t9015_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9015_MethodInfos/* methods */
	, ICollection_1_t9015_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9015_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9015_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9015_0_0_0/* byval_arg */
	, &ICollection_1_t9015_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9015_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializedAttribute>
extern Il2CppType IEnumerator_1_t6935_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46455_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46455_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9017_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6935_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46455_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9017_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46455_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9017_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9017_0_0_0;
extern Il2CppType IEnumerable_1_t9017_1_0_0;
struct IEnumerable_1_t9017;
extern Il2CppGenericClass IEnumerable_1_t9017_GenericClass;
TypeInfo IEnumerable_1_t9017_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9017_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9017_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9017_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9017_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9017_0_0_0/* byval_arg */
	, &IEnumerable_1_t9017_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9017_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9016_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo IList_1_get_Item_m46456_MethodInfo;
extern MethodInfo IList_1_set_Item_m46457_MethodInfo;
static PropertyInfo IList_1_t9016____Item_PropertyInfo = 
{
	&IList_1_t9016_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46456_MethodInfo/* get */
	, &IList_1_set_Item_m46457_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9016_PropertyInfos[] =
{
	&IList_1_t9016____Item_PropertyInfo,
	NULL
};
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
static ParameterInfo IList_1_t9016_IList_1_IndexOf_m46458_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t2127_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46458_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46458_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9016_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9016_IList_1_IndexOf_m46458_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46458_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
static ParameterInfo IList_1_t9016_IList_1_Insert_m46459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t2127_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46459_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46459_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9016_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9016_IList_1_Insert_m46459_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46459_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9016_IList_1_RemoveAt_m46460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46460_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46460_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9016_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9016_IList_1_RemoveAt_m46460_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46460_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9016_IList_1_get_Item_m46456_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46456_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46456_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9016_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializedAttribute_t2127_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t9016_IList_1_get_Item_m46456_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46456_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OnSerializedAttribute_t2127_0_0_0;
static ParameterInfo IList_1_t9016_IList_1_set_Item_m46457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t2127_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46457_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46457_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9016_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9016_IList_1_set_Item_m46457_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46457_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9016_MethodInfos[] =
{
	&IList_1_IndexOf_m46458_MethodInfo,
	&IList_1_Insert_m46459_MethodInfo,
	&IList_1_RemoveAt_m46460_MethodInfo,
	&IList_1_get_Item_m46456_MethodInfo,
	&IList_1_set_Item_m46457_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9016_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9015_il2cpp_TypeInfo,
	&IEnumerable_1_t9017_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9016_0_0_0;
extern Il2CppType IList_1_t9016_1_0_0;
struct IList_1_t9016;
extern Il2CppGenericClass IList_1_t9016_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9016_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9016_MethodInfos/* methods */
	, IList_1_t9016_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9016_il2cpp_TypeInfo/* element_class */
	, IList_1_t9016_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9016_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9016_0_0_0/* byval_arg */
	, &IList_1_t9016_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9016_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6937_il2cpp_TypeInfo;

// System.Runtime.Serialization.OnSerializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializingAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46461_MethodInfo;
static PropertyInfo IEnumerator_1_t6937____Current_PropertyInfo = 
{
	&IEnumerator_1_t6937_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46461_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6937_PropertyInfos[] =
{
	&IEnumerator_1_t6937____Current_PropertyInfo,
	NULL
};
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46461_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46461_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6937_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializingAttribute_t2128_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46461_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6937_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46461_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6937_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6937_0_0_0;
extern Il2CppType IEnumerator_1_t6937_1_0_0;
struct IEnumerator_1_t6937;
extern Il2CppGenericClass IEnumerator_1_t6937_GenericClass;
TypeInfo IEnumerator_1_t6937_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6937_MethodInfos/* methods */
	, IEnumerator_1_t6937_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6937_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6937_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6937_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6937_0_0_0/* byval_arg */
	, &IEnumerator_1_t6937_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6937_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_716.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4862_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_716MethodDeclarations.h"

extern TypeInfo OnSerializingAttribute_t2128_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26421_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOnSerializingAttribute_t2128_m35738_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOnSerializingAttribute_t2128_m35738(__this, p0, method) (OnSerializingAttribute_t2128 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4862____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4862, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4862____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4862, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4862_FieldInfos[] =
{
	&InternalEnumerator_1_t4862____array_0_FieldInfo,
	&InternalEnumerator_1_t4862____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26418_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4862____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4862_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26418_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4862____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4862_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26421_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4862_PropertyInfos[] =
{
	&InternalEnumerator_1_t4862____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4862____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4862_InternalEnumerator_1__ctor_m26417_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26417_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26417_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4862_InternalEnumerator_1__ctor_m26417_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26417_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26418_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26418_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26418_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26419_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26419_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26419_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26420_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26420_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26420_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26421_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26421_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializingAttribute_t2128_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26421_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4862_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26417_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26418_MethodInfo,
	&InternalEnumerator_1_Dispose_m26419_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26420_MethodInfo,
	&InternalEnumerator_1_get_Current_m26421_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26420_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26419_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4862_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26418_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26420_MethodInfo,
	&InternalEnumerator_1_Dispose_m26419_MethodInfo,
	&InternalEnumerator_1_get_Current_m26421_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4862_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6937_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4862_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6937_il2cpp_TypeInfo, 7},
};
extern TypeInfo OnSerializingAttribute_t2128_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4862_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26421_MethodInfo/* Method Usage */,
	&OnSerializingAttribute_t2128_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOnSerializingAttribute_t2128_m35738_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4862_0_0_0;
extern Il2CppType InternalEnumerator_1_t4862_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4862_GenericClass;
TypeInfo InternalEnumerator_1_t4862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4862_MethodInfos/* methods */
	, InternalEnumerator_1_t4862_PropertyInfos/* properties */
	, InternalEnumerator_1_t4862_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4862_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4862_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4862_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4862_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4862_1_0_0/* this_arg */
	, InternalEnumerator_1_t4862_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4862_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4862_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4862)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9018_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo ICollection_1_get_Count_m46462_MethodInfo;
static PropertyInfo ICollection_1_t9018____Count_PropertyInfo = 
{
	&ICollection_1_t9018_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46462_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46463_MethodInfo;
static PropertyInfo ICollection_1_t9018____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9018_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46463_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9018_PropertyInfos[] =
{
	&ICollection_1_t9018____Count_PropertyInfo,
	&ICollection_1_t9018____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46462_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46462_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46462_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46463_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46463_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46463_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
static ParameterInfo ICollection_1_t9018_ICollection_1_Add_m46464_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializingAttribute_t2128_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46464_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46464_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t9018_ICollection_1_Add_m46464_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46464_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46465_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46465_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46465_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
static ParameterInfo ICollection_1_t9018_ICollection_1_Contains_m46466_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializingAttribute_t2128_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46466_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46466_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9018_ICollection_1_Contains_m46466_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46466_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializingAttributeU5BU5D_t5118_0_0_0;
extern Il2CppType OnSerializingAttributeU5BU5D_t5118_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9018_ICollection_1_CopyTo_m46467_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializingAttributeU5BU5D_t5118_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46467_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46467_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9018_ICollection_1_CopyTo_m46467_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46467_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
static ParameterInfo ICollection_1_t9018_ICollection_1_Remove_m46468_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializingAttribute_t2128_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46468_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializingAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46468_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t9018_ICollection_1_Remove_m46468_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46468_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9018_MethodInfos[] =
{
	&ICollection_1_get_Count_m46462_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46463_MethodInfo,
	&ICollection_1_Add_m46464_MethodInfo,
	&ICollection_1_Clear_m46465_MethodInfo,
	&ICollection_1_Contains_m46466_MethodInfo,
	&ICollection_1_CopyTo_m46467_MethodInfo,
	&ICollection_1_Remove_m46468_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9020_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9018_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9020_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9018_0_0_0;
extern Il2CppType ICollection_1_t9018_1_0_0;
struct ICollection_1_t9018;
extern Il2CppGenericClass ICollection_1_t9018_GenericClass;
TypeInfo ICollection_1_t9018_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9018_MethodInfos/* methods */
	, ICollection_1_t9018_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9018_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9018_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9018_0_0_0/* byval_arg */
	, &ICollection_1_t9018_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9018_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializingAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializingAttribute>
extern Il2CppType IEnumerator_1_t6937_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46469_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializingAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46469_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9020_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6937_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46469_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9020_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46469_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9020_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9020_0_0_0;
extern Il2CppType IEnumerable_1_t9020_1_0_0;
struct IEnumerable_1_t9020;
extern Il2CppGenericClass IEnumerable_1_t9020_GenericClass;
TypeInfo IEnumerable_1_t9020_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9020_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9020_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9020_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9020_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9020_0_0_0/* byval_arg */
	, &IEnumerable_1_t9020_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9020_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9019_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo IList_1_get_Item_m46470_MethodInfo;
extern MethodInfo IList_1_set_Item_m46471_MethodInfo;
static PropertyInfo IList_1_t9019____Item_PropertyInfo = 
{
	&IList_1_t9019_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46470_MethodInfo/* get */
	, &IList_1_set_Item_m46471_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9019_PropertyInfos[] =
{
	&IList_1_t9019____Item_PropertyInfo,
	NULL
};
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
static ParameterInfo IList_1_t9019_IList_1_IndexOf_m46472_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializingAttribute_t2128_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46472_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46472_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9019_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9019_IList_1_IndexOf_m46472_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46472_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
static ParameterInfo IList_1_t9019_IList_1_Insert_m46473_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OnSerializingAttribute_t2128_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46473_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46473_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9019_IList_1_Insert_m46473_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46473_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9019_IList_1_RemoveAt_m46474_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46474_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46474_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9019_IList_1_RemoveAt_m46474_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46474_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9019_IList_1_get_Item_m46470_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46470_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46470_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9019_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializingAttribute_t2128_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t9019_IList_1_get_Item_m46470_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46470_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType OnSerializingAttribute_t2128_0_0_0;
static ParameterInfo IList_1_t9019_IList_1_set_Item_m46471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OnSerializingAttribute_t2128_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46471_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializingAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46471_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t9019_IList_1_set_Item_m46471_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46471_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9019_MethodInfos[] =
{
	&IList_1_IndexOf_m46472_MethodInfo,
	&IList_1_Insert_m46473_MethodInfo,
	&IList_1_RemoveAt_m46474_MethodInfo,
	&IList_1_get_Item_m46470_MethodInfo,
	&IList_1_set_Item_m46471_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9019_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9018_il2cpp_TypeInfo,
	&IEnumerable_1_t9020_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9019_0_0_0;
extern Il2CppType IList_1_t9019_1_0_0;
struct IList_1_t9019;
extern Il2CppGenericClass IList_1_t9019_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9019_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9019_MethodInfos/* methods */
	, IList_1_t9019_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9019_il2cpp_TypeInfo/* element_class */
	, IList_1_t9019_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9019_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9019_0_0_0/* byval_arg */
	, &IList_1_t9019_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9019_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6939_il2cpp_TypeInfo;

// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo IEnumerator_1_get_Current_m46475_MethodInfo;
static PropertyInfo IEnumerator_1_t6939____Current_PropertyInfo = 
{
	&IEnumerator_1_t6939_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46475_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6939_PropertyInfos[] =
{
	&IEnumerator_1_t6939____Current_PropertyInfo,
	NULL
};
extern Il2CppType StreamingContextStates_t2134_0_0_0;
extern void* RuntimeInvoker_StreamingContextStates_t2134 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46475_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46475_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6939_il2cpp_TypeInfo/* declaring_type */
	, &StreamingContextStates_t2134_0_0_0/* return_type */
	, RuntimeInvoker_StreamingContextStates_t2134/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46475_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6939_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46475_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6939_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6939_0_0_0;
extern Il2CppType IEnumerator_1_t6939_1_0_0;
struct IEnumerator_1_t6939;
extern Il2CppGenericClass IEnumerator_1_t6939_GenericClass;
TypeInfo IEnumerator_1_t6939_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6939_MethodInfos/* methods */
	, IEnumerator_1_t6939_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6939_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6939_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6939_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6939_0_0_0/* byval_arg */
	, &IEnumerator_1_t6939_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6939_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_717.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4863_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_717MethodDeclarations.h"

extern TypeInfo StreamingContextStates_t2134_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26426_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStreamingContextStates_t2134_m35749_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.StreamingContextStates>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.StreamingContextStates>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStreamingContextStates_t2134_m35749 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26422_MethodInfo;
 void InternalEnumerator_1__ctor_m26422 (InternalEnumerator_1_t4863 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423 (InternalEnumerator_1_t4863 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26426(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26426_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StreamingContextStates_t2134_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26424_MethodInfo;
 void InternalEnumerator_1_Dispose_m26424 (InternalEnumerator_1_t4863 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26425_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26425 (InternalEnumerator_1_t4863 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26426 (InternalEnumerator_1_t4863 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisStreamingContextStates_t2134_m35749(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStreamingContextStates_t2134_m35749_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4863____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4863, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4863____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4863, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4863_FieldInfos[] =
{
	&InternalEnumerator_1_t4863____array_0_FieldInfo,
	&InternalEnumerator_1_t4863____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4863____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4863_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4863____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4863_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26426_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4863_PropertyInfos[] =
{
	&InternalEnumerator_1_t4863____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4863____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4863_InternalEnumerator_1__ctor_m26422_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26422_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26422_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26422/* method */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4863_InternalEnumerator_1__ctor_m26422_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26422_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423/* method */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26424_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26424_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26424/* method */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26424_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26425_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26425_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26425/* method */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26425_GenericMethod/* genericMethod */

};
extern Il2CppType StreamingContextStates_t2134_0_0_0;
extern void* RuntimeInvoker_StreamingContextStates_t2134 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26426_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.StreamingContextStates>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26426_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26426/* method */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* declaring_type */
	, &StreamingContextStates_t2134_0_0_0/* return_type */
	, RuntimeInvoker_StreamingContextStates_t2134/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26426_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4863_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26422_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423_MethodInfo,
	&InternalEnumerator_1_Dispose_m26424_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26425_MethodInfo,
	&InternalEnumerator_1_get_Current_m26426_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4863_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26423_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26425_MethodInfo,
	&InternalEnumerator_1_Dispose_m26424_MethodInfo,
	&InternalEnumerator_1_get_Current_m26426_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4863_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6939_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4863_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6939_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4863_0_0_0;
extern Il2CppType InternalEnumerator_1_t4863_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4863_GenericClass;
TypeInfo InternalEnumerator_1_t4863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4863_MethodInfos/* methods */
	, InternalEnumerator_1_t4863_PropertyInfos/* properties */
	, InternalEnumerator_1_t4863_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4863_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4863_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4863_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4863_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4863_1_0_0/* this_arg */
	, InternalEnumerator_1_t4863_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4863_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4863)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9021_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo ICollection_1_get_Count_m46476_MethodInfo;
static PropertyInfo ICollection_1_t9021____Count_PropertyInfo = 
{
	&ICollection_1_t9021_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46476_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46477_MethodInfo;
static PropertyInfo ICollection_1_t9021____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9021_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46477_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9021_PropertyInfos[] =
{
	&ICollection_1_t9021____Count_PropertyInfo,
	&ICollection_1_t9021____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46476_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::get_Count()
MethodInfo ICollection_1_get_Count_m46476_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46476_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46477_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46477_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46477_GenericMethod/* genericMethod */

};
extern Il2CppType StreamingContextStates_t2134_0_0_0;
extern Il2CppType StreamingContextStates_t2134_0_0_0;
static ParameterInfo ICollection_1_t9021_ICollection_1_Add_m46478_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StreamingContextStates_t2134_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46478_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::Add(T)
MethodInfo ICollection_1_Add_m46478_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9021_ICollection_1_Add_m46478_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46478_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46479_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::Clear()
MethodInfo ICollection_1_Clear_m46479_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46479_GenericMethod/* genericMethod */

};
extern Il2CppType StreamingContextStates_t2134_0_0_0;
static ParameterInfo ICollection_1_t9021_ICollection_1_Contains_m46480_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StreamingContextStates_t2134_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46480_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::Contains(T)
MethodInfo ICollection_1_Contains_m46480_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9021_ICollection_1_Contains_m46480_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46480_GenericMethod/* genericMethod */

};
extern Il2CppType StreamingContextStatesU5BU5D_t5119_0_0_0;
extern Il2CppType StreamingContextStatesU5BU5D_t5119_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9021_ICollection_1_CopyTo_m46481_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StreamingContextStatesU5BU5D_t5119_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46481_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46481_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9021_ICollection_1_CopyTo_m46481_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46481_GenericMethod/* genericMethod */

};
extern Il2CppType StreamingContextStates_t2134_0_0_0;
static ParameterInfo ICollection_1_t9021_ICollection_1_Remove_m46482_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StreamingContextStates_t2134_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46482_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.StreamingContextStates>::Remove(T)
MethodInfo ICollection_1_Remove_m46482_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9021_ICollection_1_Remove_m46482_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46482_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9021_MethodInfos[] =
{
	&ICollection_1_get_Count_m46476_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46477_MethodInfo,
	&ICollection_1_Add_m46478_MethodInfo,
	&ICollection_1_Clear_m46479_MethodInfo,
	&ICollection_1_Contains_m46480_MethodInfo,
	&ICollection_1_CopyTo_m46481_MethodInfo,
	&ICollection_1_Remove_m46482_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9023_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9021_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9023_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9021_0_0_0;
extern Il2CppType ICollection_1_t9021_1_0_0;
struct ICollection_1_t9021;
extern Il2CppGenericClass ICollection_1_t9021_GenericClass;
TypeInfo ICollection_1_t9021_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9021_MethodInfos/* methods */
	, ICollection_1_t9021_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9021_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9021_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9021_0_0_0/* byval_arg */
	, &ICollection_1_t9021_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9021_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.StreamingContextStates>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.StreamingContextStates>
extern Il2CppType IEnumerator_1_t6939_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46483_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.StreamingContextStates>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46483_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9023_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6939_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46483_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9023_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46483_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9023_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9023_0_0_0;
extern Il2CppType IEnumerable_1_t9023_1_0_0;
struct IEnumerable_1_t9023;
extern Il2CppGenericClass IEnumerable_1_t9023_GenericClass;
TypeInfo IEnumerable_1_t9023_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9023_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9023_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9023_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9023_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9023_0_0_0/* byval_arg */
	, &IEnumerable_1_t9023_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9023_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9022_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>
extern MethodInfo IList_1_get_Item_m46484_MethodInfo;
extern MethodInfo IList_1_set_Item_m46485_MethodInfo;
static PropertyInfo IList_1_t9022____Item_PropertyInfo = 
{
	&IList_1_t9022_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46484_MethodInfo/* get */
	, &IList_1_set_Item_m46485_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9022_PropertyInfos[] =
{
	&IList_1_t9022____Item_PropertyInfo,
	NULL
};
extern Il2CppType StreamingContextStates_t2134_0_0_0;
static ParameterInfo IList_1_t9022_IList_1_IndexOf_m46486_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StreamingContextStates_t2134_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46486_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46486_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9022_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9022_IList_1_IndexOf_m46486_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46486_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StreamingContextStates_t2134_0_0_0;
static ParameterInfo IList_1_t9022_IList_1_Insert_m46487_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StreamingContextStates_t2134_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46487_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46487_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9022_IList_1_Insert_m46487_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46487_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9022_IList_1_RemoveAt_m46488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46488_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46488_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9022_IList_1_RemoveAt_m46488_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46488_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9022_IList_1_get_Item_m46484_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType StreamingContextStates_t2134_0_0_0;
extern void* RuntimeInvoker_StreamingContextStates_t2134_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46484_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46484_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9022_il2cpp_TypeInfo/* declaring_type */
	, &StreamingContextStates_t2134_0_0_0/* return_type */
	, RuntimeInvoker_StreamingContextStates_t2134_Int32_t63/* invoker_method */
	, IList_1_t9022_IList_1_get_Item_m46484_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46484_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StreamingContextStates_t2134_0_0_0;
static ParameterInfo IList_1_t9022_IList_1_set_Item_m46485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StreamingContextStates_t2134_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46485_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.StreamingContextStates>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46485_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9022_IList_1_set_Item_m46485_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46485_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9022_MethodInfos[] =
{
	&IList_1_IndexOf_m46486_MethodInfo,
	&IList_1_Insert_m46487_MethodInfo,
	&IList_1_RemoveAt_m46488_MethodInfo,
	&IList_1_get_Item_m46484_MethodInfo,
	&IList_1_set_Item_m46485_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9022_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9021_il2cpp_TypeInfo,
	&IEnumerable_1_t9023_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9022_0_0_0;
extern Il2CppType IList_1_t9022_1_0_0;
struct IList_1_t9022;
extern Il2CppGenericClass IList_1_t9022_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9022_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9022_MethodInfos/* methods */
	, IList_1_t9022_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9022_il2cpp_TypeInfo/* element_class */
	, IList_1_t9022_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9022_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9022_0_0_0/* byval_arg */
	, &IList_1_t9022_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9022_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6941_il2cpp_TypeInfo;

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>
extern MethodInfo IEnumerator_1_get_Current_m46489_MethodInfo;
static PropertyInfo IEnumerator_1_t6941____Current_PropertyInfo = 
{
	&IEnumerator_1_t6941_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46489_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6941_PropertyInfos[] =
{
	&IEnumerator_1_t6941____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
extern void* RuntimeInvoker_X509KeyStorageFlags_t1728 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46489_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46489_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6941_il2cpp_TypeInfo/* declaring_type */
	, &X509KeyStorageFlags_t1728_0_0_0/* return_type */
	, RuntimeInvoker_X509KeyStorageFlags_t1728/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46489_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6941_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46489_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6941_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6941_0_0_0;
extern Il2CppType IEnumerator_1_t6941_1_0_0;
struct IEnumerator_1_t6941;
extern Il2CppGenericClass IEnumerator_1_t6941_GenericClass;
TypeInfo IEnumerator_1_t6941_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6941_MethodInfos/* methods */
	, IEnumerator_1_t6941_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6941_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6941_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6941_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6941_0_0_0/* byval_arg */
	, &IEnumerator_1_t6941_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6941_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_718.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4864_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_718MethodDeclarations.h"

extern TypeInfo X509KeyStorageFlags_t1728_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26431_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509KeyStorageFlags_t1728_m35760_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisX509KeyStorageFlags_t1728_m35760 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26427_MethodInfo;
 void InternalEnumerator_1__ctor_m26427 (InternalEnumerator_1_t4864 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428 (InternalEnumerator_1_t4864 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26431(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26431_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&X509KeyStorageFlags_t1728_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26429_MethodInfo;
 void InternalEnumerator_1_Dispose_m26429 (InternalEnumerator_1_t4864 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26430_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26430 (InternalEnumerator_1_t4864 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26431 (InternalEnumerator_1_t4864 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisX509KeyStorageFlags_t1728_m35760(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisX509KeyStorageFlags_t1728_m35760_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4864____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4864, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4864____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4864, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4864_FieldInfos[] =
{
	&InternalEnumerator_1_t4864____array_0_FieldInfo,
	&InternalEnumerator_1_t4864____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4864____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4864_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4864____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4864_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26431_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4864_PropertyInfos[] =
{
	&InternalEnumerator_1_t4864____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4864____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4864_InternalEnumerator_1__ctor_m26427_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26427_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26427_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26427/* method */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4864_InternalEnumerator_1__ctor_m26427_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26427_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428/* method */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26429_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26429_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26429/* method */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26429_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26430_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26430_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26430/* method */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26430_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
extern void* RuntimeInvoker_X509KeyStorageFlags_t1728 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26431_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26431_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26431/* method */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* declaring_type */
	, &X509KeyStorageFlags_t1728_0_0_0/* return_type */
	, RuntimeInvoker_X509KeyStorageFlags_t1728/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26431_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4864_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26427_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428_MethodInfo,
	&InternalEnumerator_1_Dispose_m26429_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26430_MethodInfo,
	&InternalEnumerator_1_get_Current_m26431_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4864_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26428_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26430_MethodInfo,
	&InternalEnumerator_1_Dispose_m26429_MethodInfo,
	&InternalEnumerator_1_get_Current_m26431_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4864_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6941_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4864_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6941_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4864_0_0_0;
extern Il2CppType InternalEnumerator_1_t4864_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4864_GenericClass;
TypeInfo InternalEnumerator_1_t4864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4864_MethodInfos/* methods */
	, InternalEnumerator_1_t4864_PropertyInfos/* properties */
	, InternalEnumerator_1_t4864_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4864_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4864_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4864_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4864_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4864_1_0_0/* this_arg */
	, InternalEnumerator_1_t4864_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4864_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4864)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9024_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>
extern MethodInfo ICollection_1_get_Count_m46490_MethodInfo;
static PropertyInfo ICollection_1_t9024____Count_PropertyInfo = 
{
	&ICollection_1_t9024_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46490_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46491_MethodInfo;
static PropertyInfo ICollection_1_t9024____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9024_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46491_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9024_PropertyInfos[] =
{
	&ICollection_1_t9024____Count_PropertyInfo,
	&ICollection_1_t9024____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46490_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m46490_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46490_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46491_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46491_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46491_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
static ParameterInfo ICollection_1_t9024_ICollection_1_Add_m46492_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyStorageFlags_t1728_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46492_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Add(T)
MethodInfo ICollection_1_Add_m46492_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9024_ICollection_1_Add_m46492_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46492_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46493_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Clear()
MethodInfo ICollection_1_Clear_m46493_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46493_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
static ParameterInfo ICollection_1_t9024_ICollection_1_Contains_m46494_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyStorageFlags_t1728_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46494_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m46494_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9024_ICollection_1_Contains_m46494_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46494_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyStorageFlagsU5BU5D_t5120_0_0_0;
extern Il2CppType X509KeyStorageFlagsU5BU5D_t5120_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9024_ICollection_1_CopyTo_m46495_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyStorageFlagsU5BU5D_t5120_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46495_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46495_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9024_ICollection_1_CopyTo_m46495_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46495_GenericMethod/* genericMethod */

};
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
static ParameterInfo ICollection_1_t9024_ICollection_1_Remove_m46496_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyStorageFlags_t1728_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46496_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m46496_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9024_ICollection_1_Remove_m46496_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46496_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9024_MethodInfos[] =
{
	&ICollection_1_get_Count_m46490_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46491_MethodInfo,
	&ICollection_1_Add_m46492_MethodInfo,
	&ICollection_1_Clear_m46493_MethodInfo,
	&ICollection_1_Contains_m46494_MethodInfo,
	&ICollection_1_CopyTo_m46495_MethodInfo,
	&ICollection_1_Remove_m46496_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9026_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9024_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9026_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9024_0_0_0;
extern Il2CppType ICollection_1_t9024_1_0_0;
struct ICollection_1_t9024;
extern Il2CppGenericClass ICollection_1_t9024_GenericClass;
TypeInfo ICollection_1_t9024_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9024_MethodInfos/* methods */
	, ICollection_1_t9024_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9024_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9024_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9024_0_0_0/* byval_arg */
	, &ICollection_1_t9024_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9024_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>
extern Il2CppType IEnumerator_1_t6941_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46497_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46497_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9026_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6941_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46497_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9026_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46497_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9026_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9026_0_0_0;
extern Il2CppType IEnumerable_1_t9026_1_0_0;
struct IEnumerable_1_t9026;
extern Il2CppGenericClass IEnumerable_1_t9026_GenericClass;
TypeInfo IEnumerable_1_t9026_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9026_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9026_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9026_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9026_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9026_0_0_0/* byval_arg */
	, &IEnumerable_1_t9026_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9026_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9025_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>
extern MethodInfo IList_1_get_Item_m46498_MethodInfo;
extern MethodInfo IList_1_set_Item_m46499_MethodInfo;
static PropertyInfo IList_1_t9025____Item_PropertyInfo = 
{
	&IList_1_t9025_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46498_MethodInfo/* get */
	, &IList_1_set_Item_m46499_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9025_PropertyInfos[] =
{
	&IList_1_t9025____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
static ParameterInfo IList_1_t9025_IList_1_IndexOf_m46500_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509KeyStorageFlags_t1728_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46500_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46500_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9025_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9025_IList_1_IndexOf_m46500_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46500_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
static ParameterInfo IList_1_t9025_IList_1_Insert_m46501_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509KeyStorageFlags_t1728_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46501_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46501_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9025_IList_1_Insert_m46501_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46501_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9025_IList_1_RemoveAt_m46502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46502_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46502_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9025_IList_1_RemoveAt_m46502_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46502_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9025_IList_1_get_Item_m46498_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
extern void* RuntimeInvoker_X509KeyStorageFlags_t1728_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46498_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46498_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9025_il2cpp_TypeInfo/* declaring_type */
	, &X509KeyStorageFlags_t1728_0_0_0/* return_type */
	, RuntimeInvoker_X509KeyStorageFlags_t1728_Int32_t63/* invoker_method */
	, IList_1_t9025_IList_1_get_Item_m46498_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46498_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType X509KeyStorageFlags_t1728_0_0_0;
static ParameterInfo IList_1_t9025_IList_1_set_Item_m46499_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509KeyStorageFlags_t1728_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46499_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509KeyStorageFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46499_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9025_IList_1_set_Item_m46499_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46499_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9025_MethodInfos[] =
{
	&IList_1_IndexOf_m46500_MethodInfo,
	&IList_1_Insert_m46501_MethodInfo,
	&IList_1_RemoveAt_m46502_MethodInfo,
	&IList_1_get_Item_m46498_MethodInfo,
	&IList_1_set_Item_m46499_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9025_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9024_il2cpp_TypeInfo,
	&IEnumerable_1_t9026_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9025_0_0_0;
extern Il2CppType IList_1_t9025_1_0_0;
struct IList_1_t9025;
extern Il2CppGenericClass IList_1_t9025_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9025_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9025_MethodInfos/* methods */
	, IList_1_t9025_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9025_il2cpp_TypeInfo/* element_class */
	, IList_1_t9025_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9025_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9025_0_0_0/* byval_arg */
	, &IList_1_t9025_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9025_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6943_il2cpp_TypeInfo;

// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CipherMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CipherMode>
extern MethodInfo IEnumerator_1_get_Current_m46503_MethodInfo;
static PropertyInfo IEnumerator_1_t6943____Current_PropertyInfo = 
{
	&IEnumerator_1_t6943_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46503_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6943_PropertyInfos[] =
{
	&IEnumerator_1_t6943____Current_PropertyInfo,
	NULL
};
extern Il2CppType CipherMode_t1514_0_0_0;
extern void* RuntimeInvoker_CipherMode_t1514 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46503_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CipherMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46503_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6943_il2cpp_TypeInfo/* declaring_type */
	, &CipherMode_t1514_0_0_0/* return_type */
	, RuntimeInvoker_CipherMode_t1514/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46503_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6943_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46503_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6943_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6943_0_0_0;
extern Il2CppType IEnumerator_1_t6943_1_0_0;
struct IEnumerator_1_t6943;
extern Il2CppGenericClass IEnumerator_1_t6943_GenericClass;
TypeInfo IEnumerator_1_t6943_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6943_MethodInfos/* methods */
	, IEnumerator_1_t6943_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6943_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6943_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6943_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6943_0_0_0/* byval_arg */
	, &IEnumerator_1_t6943_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6943_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_719.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4865_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_719MethodDeclarations.h"

extern TypeInfo CipherMode_t1514_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26436_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCipherMode_t1514_m35771_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.CipherMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.CipherMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCipherMode_t1514_m35771 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26432_MethodInfo;
 void InternalEnumerator_1__ctor_m26432 (InternalEnumerator_1_t4865 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433 (InternalEnumerator_1_t4865 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26436(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26436_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CipherMode_t1514_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26434_MethodInfo;
 void InternalEnumerator_1_Dispose_m26434 (InternalEnumerator_1_t4865 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26435_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26435 (InternalEnumerator_1_t4865 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26436 (InternalEnumerator_1_t4865 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisCipherMode_t1514_m35771(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCipherMode_t1514_m35771_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4865____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4865, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4865____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4865, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4865_FieldInfos[] =
{
	&InternalEnumerator_1_t4865____array_0_FieldInfo,
	&InternalEnumerator_1_t4865____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4865____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4865_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4865____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4865_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26436_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4865_PropertyInfos[] =
{
	&InternalEnumerator_1_t4865____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4865____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4865_InternalEnumerator_1__ctor_m26432_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26432_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26432_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26432/* method */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4865_InternalEnumerator_1__ctor_m26432_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26432_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433/* method */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26434_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26434_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26434/* method */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26434_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26435_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26435_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26435/* method */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26435_GenericMethod/* genericMethod */

};
extern Il2CppType CipherMode_t1514_0_0_0;
extern void* RuntimeInvoker_CipherMode_t1514 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26436_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.CipherMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26436_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26436/* method */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* declaring_type */
	, &CipherMode_t1514_0_0_0/* return_type */
	, RuntimeInvoker_CipherMode_t1514/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26436_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4865_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26432_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433_MethodInfo,
	&InternalEnumerator_1_Dispose_m26434_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26435_MethodInfo,
	&InternalEnumerator_1_get_Current_m26436_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4865_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26433_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26435_MethodInfo,
	&InternalEnumerator_1_Dispose_m26434_MethodInfo,
	&InternalEnumerator_1_get_Current_m26436_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4865_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6943_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4865_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6943_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4865_0_0_0;
extern Il2CppType InternalEnumerator_1_t4865_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4865_GenericClass;
TypeInfo InternalEnumerator_1_t4865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4865_MethodInfos/* methods */
	, InternalEnumerator_1_t4865_PropertyInfos/* properties */
	, InternalEnumerator_1_t4865_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4865_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4865_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4865_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4865_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4865_1_0_0/* this_arg */
	, InternalEnumerator_1_t4865_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4865_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4865)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9027_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>
extern MethodInfo ICollection_1_get_Count_m46504_MethodInfo;
static PropertyInfo ICollection_1_t9027____Count_PropertyInfo = 
{
	&ICollection_1_t9027_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46504_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46505_MethodInfo;
static PropertyInfo ICollection_1_t9027____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9027_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46505_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9027_PropertyInfos[] =
{
	&ICollection_1_t9027____Count_PropertyInfo,
	&ICollection_1_t9027____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46504_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::get_Count()
MethodInfo ICollection_1_get_Count_m46504_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46504_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46505_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46505_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46505_GenericMethod/* genericMethod */

};
extern Il2CppType CipherMode_t1514_0_0_0;
extern Il2CppType CipherMode_t1514_0_0_0;
static ParameterInfo ICollection_1_t9027_ICollection_1_Add_m46506_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherMode_t1514_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46506_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::Add(T)
MethodInfo ICollection_1_Add_m46506_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9027_ICollection_1_Add_m46506_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46506_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46507_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::Clear()
MethodInfo ICollection_1_Clear_m46507_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46507_GenericMethod/* genericMethod */

};
extern Il2CppType CipherMode_t1514_0_0_0;
static ParameterInfo ICollection_1_t9027_ICollection_1_Contains_m46508_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherMode_t1514_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46508_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::Contains(T)
MethodInfo ICollection_1_Contains_m46508_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9027_ICollection_1_Contains_m46508_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46508_GenericMethod/* genericMethod */

};
extern Il2CppType CipherModeU5BU5D_t5121_0_0_0;
extern Il2CppType CipherModeU5BU5D_t5121_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9027_ICollection_1_CopyTo_m46509_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CipherModeU5BU5D_t5121_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46509_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46509_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9027_ICollection_1_CopyTo_m46509_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46509_GenericMethod/* genericMethod */

};
extern Il2CppType CipherMode_t1514_0_0_0;
static ParameterInfo ICollection_1_t9027_ICollection_1_Remove_m46510_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherMode_t1514_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46510_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CipherMode>::Remove(T)
MethodInfo ICollection_1_Remove_m46510_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9027_ICollection_1_Remove_m46510_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46510_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9027_MethodInfos[] =
{
	&ICollection_1_get_Count_m46504_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46505_MethodInfo,
	&ICollection_1_Add_m46506_MethodInfo,
	&ICollection_1_Clear_m46507_MethodInfo,
	&ICollection_1_Contains_m46508_MethodInfo,
	&ICollection_1_CopyTo_m46509_MethodInfo,
	&ICollection_1_Remove_m46510_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9029_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9027_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9029_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9027_0_0_0;
extern Il2CppType ICollection_1_t9027_1_0_0;
struct ICollection_1_t9027;
extern Il2CppGenericClass ICollection_1_t9027_GenericClass;
TypeInfo ICollection_1_t9027_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9027_MethodInfos/* methods */
	, ICollection_1_t9027_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9027_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9027_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9027_0_0_0/* byval_arg */
	, &ICollection_1_t9027_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9027_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CipherMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CipherMode>
extern Il2CppType IEnumerator_1_t6943_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46511_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CipherMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46511_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9029_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6943_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46511_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9029_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46511_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9029_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9029_0_0_0;
extern Il2CppType IEnumerable_1_t9029_1_0_0;
struct IEnumerable_1_t9029;
extern Il2CppGenericClass IEnumerable_1_t9029_GenericClass;
TypeInfo IEnumerable_1_t9029_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9029_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9029_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9029_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9029_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9029_0_0_0/* byval_arg */
	, &IEnumerable_1_t9029_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9029_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9028_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>
extern MethodInfo IList_1_get_Item_m46512_MethodInfo;
extern MethodInfo IList_1_set_Item_m46513_MethodInfo;
static PropertyInfo IList_1_t9028____Item_PropertyInfo = 
{
	&IList_1_t9028_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46512_MethodInfo/* get */
	, &IList_1_set_Item_m46513_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9028_PropertyInfos[] =
{
	&IList_1_t9028____Item_PropertyInfo,
	NULL
};
extern Il2CppType CipherMode_t1514_0_0_0;
static ParameterInfo IList_1_t9028_IList_1_IndexOf_m46514_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherMode_t1514_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46514_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46514_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9028_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9028_IList_1_IndexOf_m46514_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46514_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CipherMode_t1514_0_0_0;
static ParameterInfo IList_1_t9028_IList_1_Insert_m46515_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CipherMode_t1514_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46515_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46515_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9028_IList_1_Insert_m46515_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46515_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9028_IList_1_RemoveAt_m46516_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46516_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46516_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9028_IList_1_RemoveAt_m46516_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46516_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9028_IList_1_get_Item_m46512_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType CipherMode_t1514_0_0_0;
extern void* RuntimeInvoker_CipherMode_t1514_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46512_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46512_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9028_il2cpp_TypeInfo/* declaring_type */
	, &CipherMode_t1514_0_0_0/* return_type */
	, RuntimeInvoker_CipherMode_t1514_Int32_t63/* invoker_method */
	, IList_1_t9028_IList_1_get_Item_m46512_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46512_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CipherMode_t1514_0_0_0;
static ParameterInfo IList_1_t9028_IList_1_set_Item_m46513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CipherMode_t1514_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46513_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CipherMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46513_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9028_IList_1_set_Item_m46513_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46513_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9028_MethodInfos[] =
{
	&IList_1_IndexOf_m46514_MethodInfo,
	&IList_1_Insert_m46515_MethodInfo,
	&IList_1_RemoveAt_m46516_MethodInfo,
	&IList_1_get_Item_m46512_MethodInfo,
	&IList_1_set_Item_m46513_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9028_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9027_il2cpp_TypeInfo,
	&IEnumerable_1_t9029_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9028_0_0_0;
extern Il2CppType IList_1_t9028_1_0_0;
struct IList_1_t9028;
extern Il2CppGenericClass IList_1_t9028_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9028_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9028_MethodInfos/* methods */
	, IList_1_t9028_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9028_il2cpp_TypeInfo/* element_class */
	, IList_1_t9028_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9028_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9028_0_0_0/* byval_arg */
	, &IList_1_t9028_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9028_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6945_il2cpp_TypeInfo;

// System.Security.Cryptography.CspProviderFlags
#include "mscorlib_System_Security_Cryptography_CspProviderFlags.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CspProviderFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo IEnumerator_1_get_Current_m46517_MethodInfo;
static PropertyInfo IEnumerator_1_t6945____Current_PropertyInfo = 
{
	&IEnumerator_1_t6945_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46517_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6945_PropertyInfos[] =
{
	&IEnumerator_1_t6945____Current_PropertyInfo,
	NULL
};
extern Il2CppType CspProviderFlags_t2137_0_0_0;
extern void* RuntimeInvoker_CspProviderFlags_t2137 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46517_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.CspProviderFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46517_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6945_il2cpp_TypeInfo/* declaring_type */
	, &CspProviderFlags_t2137_0_0_0/* return_type */
	, RuntimeInvoker_CspProviderFlags_t2137/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46517_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6945_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46517_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6945_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6945_0_0_0;
extern Il2CppType IEnumerator_1_t6945_1_0_0;
struct IEnumerator_1_t6945;
extern Il2CppGenericClass IEnumerator_1_t6945_GenericClass;
TypeInfo IEnumerator_1_t6945_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6945_MethodInfos/* methods */
	, IEnumerator_1_t6945_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6945_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6945_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6945_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6945_0_0_0/* byval_arg */
	, &IEnumerator_1_t6945_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6945_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_720.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4866_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_720MethodDeclarations.h"

extern TypeInfo CspProviderFlags_t2137_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26441_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCspProviderFlags_t2137_m35782_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.CspProviderFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.CspProviderFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCspProviderFlags_t2137_m35782 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26437_MethodInfo;
 void InternalEnumerator_1__ctor_m26437 (InternalEnumerator_1_t4866 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438 (InternalEnumerator_1_t4866 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26441(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26441_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CspProviderFlags_t2137_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26439_MethodInfo;
 void InternalEnumerator_1_Dispose_m26439 (InternalEnumerator_1_t4866 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26440_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26440 (InternalEnumerator_1_t4866 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26441 (InternalEnumerator_1_t4866 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisCspProviderFlags_t2137_m35782(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCspProviderFlags_t2137_m35782_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4866____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4866, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4866____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4866, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4866_FieldInfos[] =
{
	&InternalEnumerator_1_t4866____array_0_FieldInfo,
	&InternalEnumerator_1_t4866____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4866____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4866_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4866____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4866_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26441_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4866_PropertyInfos[] =
{
	&InternalEnumerator_1_t4866____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4866____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4866_InternalEnumerator_1__ctor_m26437_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26437_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26437_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26437/* method */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4866_InternalEnumerator_1__ctor_m26437_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26437_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438/* method */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26439_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26439_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26439/* method */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26439_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26440_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26440_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26440/* method */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26440_GenericMethod/* genericMethod */

};
extern Il2CppType CspProviderFlags_t2137_0_0_0;
extern void* RuntimeInvoker_CspProviderFlags_t2137 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26441_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.CspProviderFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26441_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26441/* method */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* declaring_type */
	, &CspProviderFlags_t2137_0_0_0/* return_type */
	, RuntimeInvoker_CspProviderFlags_t2137/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26441_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4866_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26437_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438_MethodInfo,
	&InternalEnumerator_1_Dispose_m26439_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26440_MethodInfo,
	&InternalEnumerator_1_get_Current_m26441_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4866_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26438_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26440_MethodInfo,
	&InternalEnumerator_1_Dispose_m26439_MethodInfo,
	&InternalEnumerator_1_get_Current_m26441_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4866_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6945_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4866_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6945_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4866_0_0_0;
extern Il2CppType InternalEnumerator_1_t4866_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4866_GenericClass;
TypeInfo InternalEnumerator_1_t4866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4866_MethodInfos/* methods */
	, InternalEnumerator_1_t4866_PropertyInfos/* properties */
	, InternalEnumerator_1_t4866_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4866_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4866_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4866_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4866_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4866_1_0_0/* this_arg */
	, InternalEnumerator_1_t4866_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4866_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4866)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9030_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo ICollection_1_get_Count_m46518_MethodInfo;
static PropertyInfo ICollection_1_t9030____Count_PropertyInfo = 
{
	&ICollection_1_t9030_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46518_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46519_MethodInfo;
static PropertyInfo ICollection_1_t9030____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9030_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46519_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9030_PropertyInfos[] =
{
	&ICollection_1_t9030____Count_PropertyInfo,
	&ICollection_1_t9030____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46518_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m46518_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46518_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46519_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46519_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46519_GenericMethod/* genericMethod */

};
extern Il2CppType CspProviderFlags_t2137_0_0_0;
extern Il2CppType CspProviderFlags_t2137_0_0_0;
static ParameterInfo ICollection_1_t9030_ICollection_1_Add_m46520_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CspProviderFlags_t2137_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46520_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::Add(T)
MethodInfo ICollection_1_Add_m46520_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9030_ICollection_1_Add_m46520_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46520_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46521_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::Clear()
MethodInfo ICollection_1_Clear_m46521_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46521_GenericMethod/* genericMethod */

};
extern Il2CppType CspProviderFlags_t2137_0_0_0;
static ParameterInfo ICollection_1_t9030_ICollection_1_Contains_m46522_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CspProviderFlags_t2137_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46522_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m46522_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9030_ICollection_1_Contains_m46522_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46522_GenericMethod/* genericMethod */

};
extern Il2CppType CspProviderFlagsU5BU5D_t5122_0_0_0;
extern Il2CppType CspProviderFlagsU5BU5D_t5122_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9030_ICollection_1_CopyTo_m46523_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CspProviderFlagsU5BU5D_t5122_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46523_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46523_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9030_ICollection_1_CopyTo_m46523_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46523_GenericMethod/* genericMethod */

};
extern Il2CppType CspProviderFlags_t2137_0_0_0;
static ParameterInfo ICollection_1_t9030_ICollection_1_Remove_m46524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CspProviderFlags_t2137_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46524_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.CspProviderFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m46524_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9030_ICollection_1_Remove_m46524_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46524_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9030_MethodInfos[] =
{
	&ICollection_1_get_Count_m46518_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46519_MethodInfo,
	&ICollection_1_Add_m46520_MethodInfo,
	&ICollection_1_Clear_m46521_MethodInfo,
	&ICollection_1_Contains_m46522_MethodInfo,
	&ICollection_1_CopyTo_m46523_MethodInfo,
	&ICollection_1_Remove_m46524_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9032_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9030_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9032_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9030_0_0_0;
extern Il2CppType ICollection_1_t9030_1_0_0;
struct ICollection_1_t9030;
extern Il2CppGenericClass ICollection_1_t9030_GenericClass;
TypeInfo ICollection_1_t9030_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9030_MethodInfos/* methods */
	, ICollection_1_t9030_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9030_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9030_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9030_0_0_0/* byval_arg */
	, &ICollection_1_t9030_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9030_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CspProviderFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CspProviderFlags>
extern Il2CppType IEnumerator_1_t6945_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46525_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.CspProviderFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46525_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9032_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6945_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46525_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9032_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46525_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9032_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9032_0_0_0;
extern Il2CppType IEnumerable_1_t9032_1_0_0;
struct IEnumerable_1_t9032;
extern Il2CppGenericClass IEnumerable_1_t9032_GenericClass;
TypeInfo IEnumerable_1_t9032_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9032_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9032_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9032_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9032_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9032_0_0_0/* byval_arg */
	, &IEnumerable_1_t9032_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9032_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9031_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>
extern MethodInfo IList_1_get_Item_m46526_MethodInfo;
extern MethodInfo IList_1_set_Item_m46527_MethodInfo;
static PropertyInfo IList_1_t9031____Item_PropertyInfo = 
{
	&IList_1_t9031_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46526_MethodInfo/* get */
	, &IList_1_set_Item_m46527_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9031_PropertyInfos[] =
{
	&IList_1_t9031____Item_PropertyInfo,
	NULL
};
extern Il2CppType CspProviderFlags_t2137_0_0_0;
static ParameterInfo IList_1_t9031_IList_1_IndexOf_m46528_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CspProviderFlags_t2137_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46528_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46528_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9031_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9031_IList_1_IndexOf_m46528_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46528_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CspProviderFlags_t2137_0_0_0;
static ParameterInfo IList_1_t9031_IList_1_Insert_m46529_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CspProviderFlags_t2137_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46529_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46529_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9031_IList_1_Insert_m46529_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46529_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9031_IList_1_RemoveAt_m46530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46530_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46530_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9031_IList_1_RemoveAt_m46530_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46530_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9031_IList_1_get_Item_m46526_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType CspProviderFlags_t2137_0_0_0;
extern void* RuntimeInvoker_CspProviderFlags_t2137_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46526_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46526_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9031_il2cpp_TypeInfo/* declaring_type */
	, &CspProviderFlags_t2137_0_0_0/* return_type */
	, RuntimeInvoker_CspProviderFlags_t2137_Int32_t63/* invoker_method */
	, IList_1_t9031_IList_1_get_Item_m46526_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46526_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType CspProviderFlags_t2137_0_0_0;
static ParameterInfo IList_1_t9031_IList_1_set_Item_m46527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CspProviderFlags_t2137_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46527_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.CspProviderFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46527_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9031_IList_1_set_Item_m46527_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46527_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9031_MethodInfos[] =
{
	&IList_1_IndexOf_m46528_MethodInfo,
	&IList_1_Insert_m46529_MethodInfo,
	&IList_1_RemoveAt_m46530_MethodInfo,
	&IList_1_get_Item_m46526_MethodInfo,
	&IList_1_set_Item_m46527_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9031_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9030_il2cpp_TypeInfo,
	&IEnumerable_1_t9032_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9031_0_0_0;
extern Il2CppType IList_1_t9031_1_0_0;
struct IList_1_t9031;
extern Il2CppGenericClass IList_1_t9031_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9031_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9031_MethodInfos/* methods */
	, IList_1_t9031_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9031_il2cpp_TypeInfo/* element_class */
	, IList_1_t9031_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9031_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9031_0_0_0/* byval_arg */
	, &IList_1_t9031_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9031_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6947_il2cpp_TypeInfo;

// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.PaddingMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo IEnumerator_1_get_Current_m46531_MethodInfo;
static PropertyInfo IEnumerator_1_t6947____Current_PropertyInfo = 
{
	&IEnumerator_1_t6947_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46531_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6947_PropertyInfos[] =
{
	&IEnumerator_1_t6947____Current_PropertyInfo,
	NULL
};
extern Il2CppType PaddingMode_t1528_0_0_0;
extern void* RuntimeInvoker_PaddingMode_t1528 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46531_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.PaddingMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46531_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6947_il2cpp_TypeInfo/* declaring_type */
	, &PaddingMode_t1528_0_0_0/* return_type */
	, RuntimeInvoker_PaddingMode_t1528/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46531_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6947_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46531_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6947_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6947_0_0_0;
extern Il2CppType IEnumerator_1_t6947_1_0_0;
struct IEnumerator_1_t6947;
extern Il2CppGenericClass IEnumerator_1_t6947_GenericClass;
TypeInfo IEnumerator_1_t6947_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6947_MethodInfos/* methods */
	, IEnumerator_1_t6947_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6947_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6947_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6947_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6947_0_0_0/* byval_arg */
	, &IEnumerator_1_t6947_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6947_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_721.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4867_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_721MethodDeclarations.h"

extern TypeInfo PaddingMode_t1528_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26446_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPaddingMode_t1528_m35793_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.PaddingMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.PaddingMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPaddingMode_t1528_m35793 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26442_MethodInfo;
 void InternalEnumerator_1__ctor_m26442 (InternalEnumerator_1_t4867 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443 (InternalEnumerator_1_t4867 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26446(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26446_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PaddingMode_t1528_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26444_MethodInfo;
 void InternalEnumerator_1_Dispose_m26444 (InternalEnumerator_1_t4867 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26445_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26445 (InternalEnumerator_1_t4867 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m1819(L_1, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26446 (InternalEnumerator_1_t4867 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1534 * L_1 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_1, (String_t*) &_stringLiteral1330, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t1534 * L_3 = (InvalidOperationException_t1534 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1534_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6562(L_3, (String_t*) &_stringLiteral1331, /*hidden argument*/&InvalidOperationException__ctor_m6562_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1819(L_5, /*hidden argument*/&Array_get_Length_m1819_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisPaddingMode_t1528_m35793(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPaddingMode_t1528_m35793_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4867____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4867, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4867____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4867, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4867_FieldInfos[] =
{
	&InternalEnumerator_1_t4867____array_0_FieldInfo,
	&InternalEnumerator_1_t4867____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4867____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4867_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4867____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4867_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26446_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4867_PropertyInfos[] =
{
	&InternalEnumerator_1_t4867____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4867____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4867_InternalEnumerator_1__ctor_m26442_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26442_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26442_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26442/* method */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4867_InternalEnumerator_1__ctor_m26442_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m26442_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443/* method */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26444_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26444_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26444/* method */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m26444_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26445_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26445_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26445/* method */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m26445_GenericMethod/* genericMethod */

};
extern Il2CppType PaddingMode_t1528_0_0_0;
extern void* RuntimeInvoker_PaddingMode_t1528 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26446_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.PaddingMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26446_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26446/* method */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* declaring_type */
	, &PaddingMode_t1528_0_0_0/* return_type */
	, RuntimeInvoker_PaddingMode_t1528/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m26446_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4867_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26442_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443_MethodInfo,
	&InternalEnumerator_1_Dispose_m26444_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26445_MethodInfo,
	&InternalEnumerator_1_get_Current_m26446_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4867_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26443_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26445_MethodInfo,
	&InternalEnumerator_1_Dispose_m26444_MethodInfo,
	&InternalEnumerator_1_get_Current_m26446_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4867_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6947_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4867_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6947_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4867_0_0_0;
extern Il2CppType InternalEnumerator_1_t4867_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4867_GenericClass;
TypeInfo InternalEnumerator_1_t4867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4867_MethodInfos/* methods */
	, InternalEnumerator_1_t4867_PropertyInfos/* properties */
	, InternalEnumerator_1_t4867_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4867_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4867_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4867_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4867_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4867_1_0_0/* this_arg */
	, InternalEnumerator_1_t4867_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4867_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4867)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9033_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo ICollection_1_get_Count_m46532_MethodInfo;
static PropertyInfo ICollection_1_t9033____Count_PropertyInfo = 
{
	&ICollection_1_t9033_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46532_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46533_MethodInfo;
static PropertyInfo ICollection_1_t9033____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9033_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46533_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9033_PropertyInfos[] =
{
	&ICollection_1_t9033____Count_PropertyInfo,
	&ICollection_1_t9033____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46532_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::get_Count()
MethodInfo ICollection_1_get_Count_m46532_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46532_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46533_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46533_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46533_GenericMethod/* genericMethod */

};
extern Il2CppType PaddingMode_t1528_0_0_0;
extern Il2CppType PaddingMode_t1528_0_0_0;
static ParameterInfo ICollection_1_t9033_ICollection_1_Add_m46534_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PaddingMode_t1528_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46534_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::Add(T)
MethodInfo ICollection_1_Add_m46534_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t9033_ICollection_1_Add_m46534_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46534_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46535_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::Clear()
MethodInfo ICollection_1_Clear_m46535_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46535_GenericMethod/* genericMethod */

};
extern Il2CppType PaddingMode_t1528_0_0_0;
static ParameterInfo ICollection_1_t9033_ICollection_1_Contains_m46536_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PaddingMode_t1528_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46536_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::Contains(T)
MethodInfo ICollection_1_Contains_m46536_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9033_ICollection_1_Contains_m46536_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46536_GenericMethod/* genericMethod */

};
extern Il2CppType PaddingModeU5BU5D_t5123_0_0_0;
extern Il2CppType PaddingModeU5BU5D_t5123_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t9033_ICollection_1_CopyTo_m46537_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PaddingModeU5BU5D_t5123_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46537_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46537_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t9033_ICollection_1_CopyTo_m46537_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46537_GenericMethod/* genericMethod */

};
extern Il2CppType PaddingMode_t1528_0_0_0;
static ParameterInfo ICollection_1_t9033_ICollection_1_Remove_m46538_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PaddingMode_t1528_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46538_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.PaddingMode>::Remove(T)
MethodInfo ICollection_1_Remove_m46538_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t9033_ICollection_1_Remove_m46538_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46538_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9033_MethodInfos[] =
{
	&ICollection_1_get_Count_m46532_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46533_MethodInfo,
	&ICollection_1_Add_m46534_MethodInfo,
	&ICollection_1_Clear_m46535_MethodInfo,
	&ICollection_1_Contains_m46536_MethodInfo,
	&ICollection_1_CopyTo_m46537_MethodInfo,
	&ICollection_1_Remove_m46538_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9035_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9033_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t9035_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9033_0_0_0;
extern Il2CppType ICollection_1_t9033_1_0_0;
struct ICollection_1_t9033;
extern Il2CppGenericClass ICollection_1_t9033_GenericClass;
TypeInfo ICollection_1_t9033_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9033_MethodInfos/* methods */
	, ICollection_1_t9033_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9033_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9033_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9033_0_0_0/* byval_arg */
	, &ICollection_1_t9033_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9033_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.PaddingMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.PaddingMode>
extern Il2CppType IEnumerator_1_t6947_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46539_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.PaddingMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46539_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9035_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6947_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46539_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9035_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46539_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9035_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9035_0_0_0;
extern Il2CppType IEnumerable_1_t9035_1_0_0;
struct IEnumerable_1_t9035;
extern Il2CppGenericClass IEnumerable_1_t9035_GenericClass;
TypeInfo IEnumerable_1_t9035_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9035_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9035_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9035_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9035_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9035_0_0_0/* byval_arg */
	, &IEnumerable_1_t9035_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9035_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9034_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>
extern MethodInfo IList_1_get_Item_m46540_MethodInfo;
extern MethodInfo IList_1_set_Item_m46541_MethodInfo;
static PropertyInfo IList_1_t9034____Item_PropertyInfo = 
{
	&IList_1_t9034_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46540_MethodInfo/* get */
	, &IList_1_set_Item_m46541_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9034_PropertyInfos[] =
{
	&IList_1_t9034____Item_PropertyInfo,
	NULL
};
extern Il2CppType PaddingMode_t1528_0_0_0;
static ParameterInfo IList_1_t9034_IList_1_IndexOf_m46542_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PaddingMode_t1528_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46542_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46542_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9034_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9034_IList_1_IndexOf_m46542_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46542_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType PaddingMode_t1528_0_0_0;
static ParameterInfo IList_1_t9034_IList_1_Insert_m46543_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PaddingMode_t1528_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46543_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46543_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9034_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9034_IList_1_Insert_m46543_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46543_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9034_IList_1_RemoveAt_m46544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46544_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46544_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9034_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t9034_IList_1_RemoveAt_m46544_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46544_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t9034_IList_1_get_Item_m46540_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType PaddingMode_t1528_0_0_0;
extern void* RuntimeInvoker_PaddingMode_t1528_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46540_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46540_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9034_il2cpp_TypeInfo/* declaring_type */
	, &PaddingMode_t1528_0_0_0/* return_type */
	, RuntimeInvoker_PaddingMode_t1528_Int32_t63/* invoker_method */
	, IList_1_t9034_IList_1_get_Item_m46540_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46540_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType PaddingMode_t1528_0_0_0;
static ParameterInfo IList_1_t9034_IList_1_set_Item_m46541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PaddingMode_t1528_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46541_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.PaddingMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46541_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9034_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t9034_IList_1_set_Item_m46541_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46541_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9034_MethodInfos[] =
{
	&IList_1_IndexOf_m46542_MethodInfo,
	&IList_1_Insert_m46543_MethodInfo,
	&IList_1_RemoveAt_m46544_MethodInfo,
	&IList_1_get_Item_m46540_MethodInfo,
	&IList_1_set_Item_m46541_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9034_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t9033_il2cpp_TypeInfo,
	&IEnumerable_1_t9035_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9034_0_0_0;
extern Il2CppType IList_1_t9034_1_0_0;
struct IList_1_t9034;
extern Il2CppGenericClass IList_1_t9034_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t9034_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9034_MethodInfos/* methods */
	, IList_1_t9034_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9034_il2cpp_TypeInfo/* element_class */
	, IList_1_t9034_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9034_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9034_0_0_0/* byval_arg */
	, &IList_1_t9034_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9034_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t2175_il2cpp_TypeInfo;

// System.Security.Policy.StrongName
#include "mscorlib_System_Security_Policy_StrongName.h"


// System.Int32 System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
extern MethodInfo IList_1_get_Item_m46545_MethodInfo;
extern MethodInfo IList_1_set_Item_m46546_MethodInfo;
static PropertyInfo IList_1_t2175____Item_PropertyInfo = 
{
	&IList_1_t2175_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46545_MethodInfo/* get */
	, &IList_1_set_Item_m46546_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t2175_PropertyInfos[] =
{
	&IList_1_t2175____Item_PropertyInfo,
	NULL
};
extern Il2CppType StrongName_t2179_0_0_0;
extern Il2CppType StrongName_t2179_0_0_0;
static ParameterInfo IList_1_t2175_IList_1_IndexOf_m46547_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StrongName_t2179_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46547_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46547_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t2175_IList_1_IndexOf_m46547_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46547_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StrongName_t2179_0_0_0;
static ParameterInfo IList_1_t2175_IList_1_Insert_m46548_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StrongName_t2179_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46548_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46548_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t2175_IList_1_Insert_m46548_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46548_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t2175_IList_1_RemoveAt_m46549_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46549_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46549_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t2175_IList_1_RemoveAt_m46549_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46549_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t2175_IList_1_get_Item_m46545_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType StrongName_t2179_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46545_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46545_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t2175_il2cpp_TypeInfo/* declaring_type */
	, &StrongName_t2179_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t2175_IList_1_get_Item_m46545_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46545_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType StrongName_t2179_0_0_0;
static ParameterInfo IList_1_t2175_IList_1_set_Item_m46546_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StrongName_t2179_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46546_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46546_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t2175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t2175_IList_1_set_Item_m46546_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46546_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t2175_MethodInfos[] =
{
	&IList_1_IndexOf_m46547_MethodInfo,
	&IList_1_Insert_m46548_MethodInfo,
	&IList_1_RemoveAt_m46549_MethodInfo,
	&IList_1_get_Item_m46545_MethodInfo,
	&IList_1_set_Item_m46546_MethodInfo,
	NULL
};
extern TypeInfo ICollection_1_t4874_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4872_il2cpp_TypeInfo;
static TypeInfo* IList_1_t2175_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t4874_il2cpp_TypeInfo,
	&IEnumerable_1_t4872_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t2175_0_0_0;
extern Il2CppType IList_1_t2175_1_0_0;
struct IList_1_t2175;
extern Il2CppGenericClass IList_1_t2175_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t2175_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t2175_MethodInfos/* methods */
	, IList_1_t2175_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t2175_il2cpp_TypeInfo/* element_class */
	, IList_1_t2175_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t2175_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t2175_0_0_0/* byval_arg */
	, &IList_1_t2175_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t2175_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
extern MethodInfo ICollection_1_get_Count_m46550_MethodInfo;
static PropertyInfo ICollection_1_t4874____Count_PropertyInfo = 
{
	&ICollection_1_t4874_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46550_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46551_MethodInfo;
static PropertyInfo ICollection_1_t4874____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t4874_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46551_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t4874_PropertyInfos[] =
{
	&ICollection_1_t4874____Count_PropertyInfo,
	&ICollection_1_t4874____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46550_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::get_Count()
MethodInfo ICollection_1_get_Count_m46550_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46550_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46551_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46551_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46551_GenericMethod/* genericMethod */

};
extern Il2CppType StrongName_t2179_0_0_0;
static ParameterInfo ICollection_1_t4874_ICollection_1_Add_m46552_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StrongName_t2179_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46552_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Add(T)
MethodInfo ICollection_1_Add_m46552_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t4874_ICollection_1_Add_m46552_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46552_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46553_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Clear()
MethodInfo ICollection_1_Clear_m46553_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46553_GenericMethod/* genericMethod */

};
extern Il2CppType StrongName_t2179_0_0_0;
static ParameterInfo ICollection_1_t4874_ICollection_1_Contains_m46554_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StrongName_t2179_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46554_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Contains(T)
MethodInfo ICollection_1_Contains_m46554_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t4874_ICollection_1_Contains_m46554_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46554_GenericMethod/* genericMethod */

};
extern Il2CppType StrongNameU5BU5D_t4871_0_0_0;
extern Il2CppType StrongNameU5BU5D_t4871_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t4874_ICollection_1_CopyTo_m46555_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StrongNameU5BU5D_t4871_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46555_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46555_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t4874_ICollection_1_CopyTo_m46555_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46555_GenericMethod/* genericMethod */

};
extern Il2CppType StrongName_t2179_0_0_0;
static ParameterInfo ICollection_1_t4874_ICollection_1_Remove_m46556_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StrongName_t2179_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46556_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>::Remove(T)
MethodInfo ICollection_1_Remove_m46556_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t4874_ICollection_1_Remove_m46556_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46556_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t4874_MethodInfos[] =
{
	&ICollection_1_get_Count_m46550_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46551_MethodInfo,
	&ICollection_1_Add_m46552_MethodInfo,
	&ICollection_1_Clear_m46553_MethodInfo,
	&ICollection_1_Contains_m46554_MethodInfo,
	&ICollection_1_CopyTo_m46555_MethodInfo,
	&ICollection_1_Remove_m46556_MethodInfo,
	NULL
};
static TypeInfo* ICollection_1_t4874_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t4872_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t4874_0_0_0;
extern Il2CppType ICollection_1_t4874_1_0_0;
struct ICollection_1_t4874;
extern Il2CppGenericClass ICollection_1_t4874_GenericClass;
TypeInfo ICollection_1_t4874_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t4874_MethodInfos/* methods */
	, ICollection_1_t4874_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t4874_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t4874_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t4874_0_0_0/* byval_arg */
	, &ICollection_1_t4874_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t4874_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
