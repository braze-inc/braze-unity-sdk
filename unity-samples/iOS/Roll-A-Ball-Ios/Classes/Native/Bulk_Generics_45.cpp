#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_582.h"
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
extern TypeInfo InternalEnumerator_1_t4744_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_582MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo TableRange_t1788_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1545_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m25963_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6656_MethodInfo;
extern MethodInfo Array_get_Length_m1925_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTableRange_t1788_m34485_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
 TableRange_t1788  Array_InternalArray__get_Item_TisTableRange_t1788_m34485 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25959_MethodInfo;
 void InternalEnumerator_1__ctor_m25959 (InternalEnumerator_1_t4744 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960 (InternalEnumerator_1_t4744 * __this, MethodInfo* method){
	{
		TableRange_t1788  L_0 = InternalEnumerator_1_get_Current_m25963(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25963_MethodInfo);
		TableRange_t1788  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TableRange_t1788_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25961_MethodInfo;
 void InternalEnumerator_1_Dispose_m25961 (InternalEnumerator_1_t4744 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25962_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25962 (InternalEnumerator_1_t4744 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
 TableRange_t1788  InternalEnumerator_1_get_Current_m25963 (InternalEnumerator_1_t4744 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		TableRange_t1788  L_8 = Array_InternalArray__get_Item_TisTableRange_t1788_m34485(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTableRange_t1788_m34485_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4744____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4744, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4744____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4744, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4744_FieldInfos[] =
{
	&InternalEnumerator_1_t4744____array_0_FieldInfo,
	&InternalEnumerator_1_t4744____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4744____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4744_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4744____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4744_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25963_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4744_PropertyInfos[] =
{
	&InternalEnumerator_1_t4744____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4744____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4744_InternalEnumerator_1__ctor_m25959_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25959_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25959_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25959/* method */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4744_InternalEnumerator_1__ctor_m25959_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25959_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960/* method */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25961_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25961_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25961/* method */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m25961_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25962_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25962_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25962/* method */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m25962_GenericMethod/* genericMethod */

};
extern Il2CppType TableRange_t1788_0_0_0;
extern void* RuntimeInvoker_TableRange_t1788 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25963_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25963_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25963/* method */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t1788_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t1788/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25963_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4744_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25959_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960_MethodInfo,
	&InternalEnumerator_1_Dispose_m25961_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25962_MethodInfo,
	&InternalEnumerator_1_get_Current_m25963_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4744_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25960_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25962_MethodInfo,
	&InternalEnumerator_1_Dispose_m25961_MethodInfo,
	&InternalEnumerator_1_get_Current_m25963_MethodInfo,
};
extern TypeInfo IEnumerator_t19_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6694_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t4744_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6694_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4744_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6694_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4744_0_0_0;
extern Il2CppType InternalEnumerator_1_t4744_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4744_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4744_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4744_MethodInfos/* methods */
	, InternalEnumerator_1_t4744_PropertyInfos/* properties */
	, InternalEnumerator_1_t4744_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4744_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4744_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4744_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4744_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4744_1_0_0/* this_arg */
	, InternalEnumerator_1_t4744_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4744_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4744)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8629_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo ICollection_1_get_Count_m44788_MethodInfo;
static PropertyInfo ICollection_1_t8629____Count_PropertyInfo = 
{
	&ICollection_1_t8629_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44788_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44789_MethodInfo;
static PropertyInfo ICollection_1_t8629____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8629_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44789_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8629_PropertyInfos[] =
{
	&ICollection_1_t8629____Count_PropertyInfo,
	&ICollection_1_t8629____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44788_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
MethodInfo ICollection_1_get_Count_m44788_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44788_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44789_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44789_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44789_GenericMethod/* genericMethod */

};
extern Il2CppType TableRange_t1788_0_0_0;
extern Il2CppType TableRange_t1788_0_0_0;
static ParameterInfo ICollection_1_t8629_ICollection_1_Add_m44790_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t1788_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_TableRange_t1788 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44790_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
MethodInfo ICollection_1_Add_m44790_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_TableRange_t1788/* invoker_method */
	, ICollection_1_t8629_ICollection_1_Add_m44790_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44790_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44791_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
MethodInfo ICollection_1_Clear_m44791_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44791_GenericMethod/* genericMethod */

};
extern Il2CppType TableRange_t1788_0_0_0;
static ParameterInfo ICollection_1_t8629_ICollection_1_Contains_m44792_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t1788_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_TableRange_t1788 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44792_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
MethodInfo ICollection_1_Contains_m44792_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_TableRange_t1788/* invoker_method */
	, ICollection_1_t8629_ICollection_1_Contains_m44792_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44792_GenericMethod/* genericMethod */

};
extern Il2CppType TableRangeU5BU5D_t1789_0_0_0;
extern Il2CppType TableRangeU5BU5D_t1789_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8629_ICollection_1_CopyTo_m44793_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TableRangeU5BU5D_t1789_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44793_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44793_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8629_ICollection_1_CopyTo_m44793_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44793_GenericMethod/* genericMethod */

};
extern Il2CppType TableRange_t1788_0_0_0;
static ParameterInfo ICollection_1_t8629_ICollection_1_Remove_m44794_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t1788_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_TableRange_t1788 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44794_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
MethodInfo ICollection_1_Remove_m44794_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_TableRange_t1788/* invoker_method */
	, ICollection_1_t8629_ICollection_1_Remove_m44794_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44794_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8629_MethodInfos[] =
{
	&ICollection_1_get_Count_m44788_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44789_MethodInfo,
	&ICollection_1_Add_m44790_MethodInfo,
	&ICollection_1_Clear_m44791_MethodInfo,
	&ICollection_1_Contains_m44792_MethodInfo,
	&ICollection_1_CopyTo_m44793_MethodInfo,
	&ICollection_1_Remove_m44794_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8631_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8629_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8631_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8629_0_0_0;
extern Il2CppType ICollection_1_t8629_1_0_0;
struct ICollection_1_t8629;
extern Il2CppGenericClass ICollection_1_t8629_GenericClass;
TypeInfo ICollection_1_t8629_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8629_MethodInfos/* methods */
	, ICollection_1_t8629_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8629_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8629_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8629_0_0_0/* byval_arg */
	, &ICollection_1_t8629_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8629_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern Il2CppType IEnumerator_1_t6694_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44795_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44795_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8631_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6694_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44795_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8631_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44795_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8631_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8631_0_0_0;
extern Il2CppType IEnumerable_1_t8631_1_0_0;
struct IEnumerable_1_t8631;
extern Il2CppGenericClass IEnumerable_1_t8631_GenericClass;
TypeInfo IEnumerable_1_t8631_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8631_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8631_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8631_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8631_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8631_0_0_0/* byval_arg */
	, &IEnumerable_1_t8631_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8631_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8630_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo IList_1_get_Item_m44796_MethodInfo;
extern MethodInfo IList_1_set_Item_m44797_MethodInfo;
static PropertyInfo IList_1_t8630____Item_PropertyInfo = 
{
	&IList_1_t8630_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44796_MethodInfo/* get */
	, &IList_1_set_Item_m44797_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8630_PropertyInfos[] =
{
	&IList_1_t8630____Item_PropertyInfo,
	NULL
};
extern Il2CppType TableRange_t1788_0_0_0;
static ParameterInfo IList_1_t8630_IList_1_IndexOf_m44798_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t1788_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_TableRange_t1788 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44798_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44798_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8630_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_TableRange_t1788/* invoker_method */
	, IList_1_t8630_IList_1_IndexOf_m44798_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44798_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TableRange_t1788_0_0_0;
static ParameterInfo IList_1_t8630_IList_1_Insert_m44799_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TableRange_t1788_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_TableRange_t1788 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44799_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44799_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8630_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_TableRange_t1788/* invoker_method */
	, IList_1_t8630_IList_1_Insert_m44799_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44799_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8630_IList_1_RemoveAt_m44800_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44800_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44800_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8630_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8630_IList_1_RemoveAt_m44800_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44800_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8630_IList_1_get_Item_m44796_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType TableRange_t1788_0_0_0;
extern void* RuntimeInvoker_TableRange_t1788_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44796_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44796_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8630_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t1788_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t1788_Int32_t73/* invoker_method */
	, IList_1_t8630_IList_1_get_Item_m44796_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44796_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TableRange_t1788_0_0_0;
static ParameterInfo IList_1_t8630_IList_1_set_Item_m44797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TableRange_t1788_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_TableRange_t1788 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44797_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44797_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8630_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_TableRange_t1788/* invoker_method */
	, IList_1_t8630_IList_1_set_Item_m44797_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44797_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8630_MethodInfos[] =
{
	&IList_1_IndexOf_m44798_MethodInfo,
	&IList_1_Insert_m44799_MethodInfo,
	&IList_1_RemoveAt_m44800_MethodInfo,
	&IList_1_get_Item_m44796_MethodInfo,
	&IList_1_set_Item_m44797_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8630_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8629_il2cpp_TypeInfo,
	&IEnumerable_1_t8631_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8630_0_0_0;
extern Il2CppType IList_1_t8630_1_0_0;
struct IList_1_t8630;
extern Il2CppGenericClass IList_1_t8630_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8630_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8630_MethodInfos/* methods */
	, IList_1_t8630_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8630_il2cpp_TypeInfo/* element_class */
	, IList_1_t8630_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8630_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8630_0_0_0/* byval_arg */
	, &IList_1_t8630_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8630_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6696_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.TailoringInfo
#include "mscorlib_Mono_Globalization_Unicode_TailoringInfo.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo IEnumerator_1_get_Current_m44801_MethodInfo;
static PropertyInfo IEnumerator_1_t6696____Current_PropertyInfo = 
{
	&IEnumerator_1_t6696_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44801_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6696_PropertyInfos[] =
{
	&IEnumerator_1_t6696____Current_PropertyInfo,
	NULL
};
extern Il2CppType TailoringInfo_t1791_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44801_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44801_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6696_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t1791_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44801_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6696_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44801_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6696_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6696_0_0_0;
extern Il2CppType IEnumerator_1_t6696_1_0_0;
struct IEnumerator_1_t6696;
extern Il2CppGenericClass IEnumerator_1_t6696_GenericClass;
TypeInfo IEnumerator_1_t6696_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6696_MethodInfos/* methods */
	, IEnumerator_1_t6696_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6696_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6696_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6696_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6696_0_0_0/* byval_arg */
	, &IEnumerator_1_t6696_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6696_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_583.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4745_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_583MethodDeclarations.h"

extern TypeInfo TailoringInfo_t1791_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25968_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTailoringInfo_t1791_m34496_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26983_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26983(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisTailoringInfo_t1791_m34496(__this, p0, method) (TailoringInfo_t1791 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4745____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4745, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4745____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4745, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4745_FieldInfos[] =
{
	&InternalEnumerator_1_t4745____array_0_FieldInfo,
	&InternalEnumerator_1_t4745____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25965_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4745____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4745_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25965_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4745____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4745_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25968_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4745_PropertyInfos[] =
{
	&InternalEnumerator_1_t4745____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4745____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4745_InternalEnumerator_1__ctor_m25964_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25964_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25964_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4745_InternalEnumerator_1__ctor_m25964_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25964_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25965_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25965_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25965_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25966_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25966_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m25966_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25967_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25967_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m25967_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfo_t1791_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25968_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25968_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t1791_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25968_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4745_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25964_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25965_MethodInfo,
	&InternalEnumerator_1_Dispose_m25966_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25967_MethodInfo,
	&InternalEnumerator_1_get_Current_m25968_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25967_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25966_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4745_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25965_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25967_MethodInfo,
	&InternalEnumerator_1_Dispose_m25966_MethodInfo,
	&InternalEnumerator_1_get_Current_m25968_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4745_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6696_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4745_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6696_il2cpp_TypeInfo, 7},
};
extern TypeInfo TailoringInfo_t1791_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4745_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25968_MethodInfo/* Method Usage */,
	&TailoringInfo_t1791_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisTailoringInfo_t1791_m34496_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4745_0_0_0;
extern Il2CppType InternalEnumerator_1_t4745_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4745_GenericClass;
TypeInfo InternalEnumerator_1_t4745_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4745_MethodInfos/* methods */
	, InternalEnumerator_1_t4745_PropertyInfos/* properties */
	, InternalEnumerator_1_t4745_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4745_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4745_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4745_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4745_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4745_1_0_0/* this_arg */
	, InternalEnumerator_1_t4745_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4745_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4745_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4745)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8632_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo ICollection_1_get_Count_m44802_MethodInfo;
static PropertyInfo ICollection_1_t8632____Count_PropertyInfo = 
{
	&ICollection_1_t8632_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44802_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44803_MethodInfo;
static PropertyInfo ICollection_1_t8632____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8632_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44803_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8632_PropertyInfos[] =
{
	&ICollection_1_t8632____Count_PropertyInfo,
	&ICollection_1_t8632____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44802_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m44802_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44802_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44803_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44803_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44803_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfo_t1791_0_0_0;
extern Il2CppType TailoringInfo_t1791_0_0_0;
static ParameterInfo ICollection_1_t8632_ICollection_1_Add_m44804_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1791_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44804_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Add(T)
MethodInfo ICollection_1_Add_m44804_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8632_ICollection_1_Add_m44804_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44804_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44805_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Clear()
MethodInfo ICollection_1_Clear_m44805_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44805_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfo_t1791_0_0_0;
static ParameterInfo ICollection_1_t8632_ICollection_1_Contains_m44806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1791_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44806_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m44806_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8632_ICollection_1_Contains_m44806_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44806_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfoU5BU5D_t1796_0_0_0;
extern Il2CppType TailoringInfoU5BU5D_t1796_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8632_ICollection_1_CopyTo_m44807_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfoU5BU5D_t1796_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44807_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44807_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8632_ICollection_1_CopyTo_m44807_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44807_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfo_t1791_0_0_0;
static ParameterInfo ICollection_1_t8632_ICollection_1_Remove_m44808_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1791_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44808_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m44808_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8632_ICollection_1_Remove_m44808_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44808_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8632_MethodInfos[] =
{
	&ICollection_1_get_Count_m44802_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44803_MethodInfo,
	&ICollection_1_Add_m44804_MethodInfo,
	&ICollection_1_Clear_m44805_MethodInfo,
	&ICollection_1_Contains_m44806_MethodInfo,
	&ICollection_1_CopyTo_m44807_MethodInfo,
	&ICollection_1_Remove_m44808_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8634_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8632_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8634_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8632_0_0_0;
extern Il2CppType ICollection_1_t8632_1_0_0;
struct ICollection_1_t8632;
extern Il2CppGenericClass ICollection_1_t8632_GenericClass;
TypeInfo ICollection_1_t8632_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8632_MethodInfos/* methods */
	, ICollection_1_t8632_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8632_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8632_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8632_0_0_0/* byval_arg */
	, &ICollection_1_t8632_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8632_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>
extern Il2CppType IEnumerator_1_t6696_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44809_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44809_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8634_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6696_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44809_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8634_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44809_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8634_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8634_0_0_0;
extern Il2CppType IEnumerable_1_t8634_1_0_0;
struct IEnumerable_1_t8634;
extern Il2CppGenericClass IEnumerable_1_t8634_GenericClass;
TypeInfo IEnumerable_1_t8634_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8634_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8634_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8634_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8634_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8634_0_0_0/* byval_arg */
	, &IEnumerable_1_t8634_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8634_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8633_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo IList_1_get_Item_m44810_MethodInfo;
extern MethodInfo IList_1_set_Item_m44811_MethodInfo;
static PropertyInfo IList_1_t8633____Item_PropertyInfo = 
{
	&IList_1_t8633_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44810_MethodInfo/* get */
	, &IList_1_set_Item_m44811_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8633_PropertyInfos[] =
{
	&IList_1_t8633____Item_PropertyInfo,
	NULL
};
extern Il2CppType TailoringInfo_t1791_0_0_0;
static ParameterInfo IList_1_t8633_IList_1_IndexOf_m44812_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1791_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44812_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44812_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8633_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8633_IList_1_IndexOf_m44812_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44812_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TailoringInfo_t1791_0_0_0;
static ParameterInfo IList_1_t8633_IList_1_Insert_m44813_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1791_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44813_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44813_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8633_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8633_IList_1_Insert_m44813_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44813_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8633_IList_1_RemoveAt_m44814_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44814_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44814_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8633_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8633_IList_1_RemoveAt_m44814_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44814_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8633_IList_1_get_Item_m44810_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType TailoringInfo_t1791_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44810_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44810_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8633_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t1791_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8633_IList_1_get_Item_m44810_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44810_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TailoringInfo_t1791_0_0_0;
static ParameterInfo IList_1_t8633_IList_1_set_Item_m44811_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1791_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44811_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44811_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8633_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8633_IList_1_set_Item_m44811_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44811_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8633_MethodInfos[] =
{
	&IList_1_IndexOf_m44812_MethodInfo,
	&IList_1_Insert_m44813_MethodInfo,
	&IList_1_RemoveAt_m44814_MethodInfo,
	&IList_1_get_Item_m44810_MethodInfo,
	&IList_1_set_Item_m44811_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8633_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8632_il2cpp_TypeInfo,
	&IEnumerable_1_t8634_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8633_0_0_0;
extern Il2CppType IList_1_t8633_1_0_0;
struct IList_1_t8633;
extern Il2CppGenericClass IList_1_t8633_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8633_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8633_MethodInfos/* methods */
	, IList_1_t8633_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8633_il2cpp_TypeInfo/* element_class */
	, IList_1_t8633_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8633_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8633_0_0_0/* byval_arg */
	, &IList_1_t8633_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8633_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6697_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Contraction
#include "mscorlib_Mono_Globalization_Unicode_Contraction.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo IEnumerator_1_get_Current_m44815_MethodInfo;
static PropertyInfo IEnumerator_1_t6697____Current_PropertyInfo = 
{
	&IEnumerator_1_t6697_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44815_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6697_PropertyInfos[] =
{
	&IEnumerator_1_t6697____Current_PropertyInfo,
	NULL
};
extern Il2CppType Contraction_t1792_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44815_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44815_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6697_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t1792_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44815_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6697_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44815_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6697_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6697_0_0_0;
extern Il2CppType IEnumerator_1_t6697_1_0_0;
struct IEnumerator_1_t6697;
extern Il2CppGenericClass IEnumerator_1_t6697_GenericClass;
TypeInfo IEnumerator_1_t6697_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6697_MethodInfos/* methods */
	, IEnumerator_1_t6697_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6697_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6697_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6697_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6697_0_0_0/* byval_arg */
	, &IEnumerator_1_t6697_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6697_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_584.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4746_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_584MethodDeclarations.h"

extern TypeInfo Contraction_t1792_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25973_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContraction_t1792_m34507_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
#define Array_InternalArray__get_Item_TisContraction_t1792_m34507(__this, p0, method) (Contraction_t1792 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4746____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4746, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4746____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4746, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4746_FieldInfos[] =
{
	&InternalEnumerator_1_t4746____array_0_FieldInfo,
	&InternalEnumerator_1_t4746____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25970_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4746____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4746_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25970_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4746____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4746_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25973_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4746_PropertyInfos[] =
{
	&InternalEnumerator_1_t4746____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4746____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4746_InternalEnumerator_1__ctor_m25969_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25969_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25969_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4746_InternalEnumerator_1__ctor_m25969_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25969_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25970_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25970_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25970_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25971_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25971_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m25971_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25972_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25972_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m25972_GenericMethod/* genericMethod */

};
extern Il2CppType Contraction_t1792_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25973_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25973_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t1792_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25973_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4746_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25969_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25970_MethodInfo,
	&InternalEnumerator_1_Dispose_m25971_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25972_MethodInfo,
	&InternalEnumerator_1_get_Current_m25973_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25972_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25971_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4746_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25970_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25972_MethodInfo,
	&InternalEnumerator_1_Dispose_m25971_MethodInfo,
	&InternalEnumerator_1_get_Current_m25973_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4746_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6697_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4746_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6697_il2cpp_TypeInfo, 7},
};
extern TypeInfo Contraction_t1792_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4746_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25973_MethodInfo/* Method Usage */,
	&Contraction_t1792_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContraction_t1792_m34507_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4746_0_0_0;
extern Il2CppType InternalEnumerator_1_t4746_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4746_GenericClass;
TypeInfo InternalEnumerator_1_t4746_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4746_MethodInfos/* methods */
	, InternalEnumerator_1_t4746_PropertyInfos/* properties */
	, InternalEnumerator_1_t4746_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4746_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4746_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4746_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4746_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4746_1_0_0/* this_arg */
	, InternalEnumerator_1_t4746_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4746_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4746_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4746)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8635_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo ICollection_1_get_Count_m44816_MethodInfo;
static PropertyInfo ICollection_1_t8635____Count_PropertyInfo = 
{
	&ICollection_1_t8635_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44816_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44817_MethodInfo;
static PropertyInfo ICollection_1_t8635____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8635_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44817_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8635_PropertyInfos[] =
{
	&ICollection_1_t8635____Count_PropertyInfo,
	&ICollection_1_t8635____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44816_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_Count()
MethodInfo ICollection_1_get_Count_m44816_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44816_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44817_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44817_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44817_GenericMethod/* genericMethod */

};
extern Il2CppType Contraction_t1792_0_0_0;
extern Il2CppType Contraction_t1792_0_0_0;
static ParameterInfo ICollection_1_t8635_ICollection_1_Add_m44818_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t1792_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44818_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Add(T)
MethodInfo ICollection_1_Add_m44818_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8635_ICollection_1_Add_m44818_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44818_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44819_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Clear()
MethodInfo ICollection_1_Clear_m44819_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44819_GenericMethod/* genericMethod */

};
extern Il2CppType Contraction_t1792_0_0_0;
static ParameterInfo ICollection_1_t8635_ICollection_1_Contains_m44820_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t1792_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44820_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Contains(T)
MethodInfo ICollection_1_Contains_m44820_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8635_ICollection_1_Contains_m44820_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44820_GenericMethod/* genericMethod */

};
extern Il2CppType ContractionU5BU5D_t1798_0_0_0;
extern Il2CppType ContractionU5BU5D_t1798_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8635_ICollection_1_CopyTo_m44821_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractionU5BU5D_t1798_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44821_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44821_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8635_ICollection_1_CopyTo_m44821_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44821_GenericMethod/* genericMethod */

};
extern Il2CppType Contraction_t1792_0_0_0;
static ParameterInfo ICollection_1_t8635_ICollection_1_Remove_m44822_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t1792_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44822_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Remove(T)
MethodInfo ICollection_1_Remove_m44822_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8635_ICollection_1_Remove_m44822_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44822_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8635_MethodInfos[] =
{
	&ICollection_1_get_Count_m44816_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44817_MethodInfo,
	&ICollection_1_Add_m44818_MethodInfo,
	&ICollection_1_Clear_m44819_MethodInfo,
	&ICollection_1_Contains_m44820_MethodInfo,
	&ICollection_1_CopyTo_m44821_MethodInfo,
	&ICollection_1_Remove_m44822_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8637_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8635_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8637_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8635_0_0_0;
extern Il2CppType ICollection_1_t8635_1_0_0;
struct ICollection_1_t8635;
extern Il2CppGenericClass ICollection_1_t8635_GenericClass;
TypeInfo ICollection_1_t8635_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8635_MethodInfos/* methods */
	, ICollection_1_t8635_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8635_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8635_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8635_0_0_0/* byval_arg */
	, &ICollection_1_t8635_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8635_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>
extern Il2CppType IEnumerator_1_t6697_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44823_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44823_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8637_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6697_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44823_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8637_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44823_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8637_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8637_0_0_0;
extern Il2CppType IEnumerable_1_t8637_1_0_0;
struct IEnumerable_1_t8637;
extern Il2CppGenericClass IEnumerable_1_t8637_GenericClass;
TypeInfo IEnumerable_1_t8637_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8637_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8637_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8637_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8637_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8637_0_0_0/* byval_arg */
	, &IEnumerable_1_t8637_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8637_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8636_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo IList_1_get_Item_m44824_MethodInfo;
extern MethodInfo IList_1_set_Item_m44825_MethodInfo;
static PropertyInfo IList_1_t8636____Item_PropertyInfo = 
{
	&IList_1_t8636_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44824_MethodInfo/* get */
	, &IList_1_set_Item_m44825_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8636_PropertyInfos[] =
{
	&IList_1_t8636____Item_PropertyInfo,
	NULL
};
extern Il2CppType Contraction_t1792_0_0_0;
static ParameterInfo IList_1_t8636_IList_1_IndexOf_m44826_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t1792_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44826_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44826_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8636_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8636_IList_1_IndexOf_m44826_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44826_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Contraction_t1792_0_0_0;
static ParameterInfo IList_1_t8636_IList_1_Insert_m44827_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Contraction_t1792_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44827_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44827_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8636_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8636_IList_1_Insert_m44827_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44827_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8636_IList_1_RemoveAt_m44828_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44828_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44828_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8636_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8636_IList_1_RemoveAt_m44828_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44828_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8636_IList_1_get_Item_m44824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Contraction_t1792_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44824_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44824_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8636_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t1792_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8636_IList_1_get_Item_m44824_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44824_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Contraction_t1792_0_0_0;
static ParameterInfo IList_1_t8636_IList_1_set_Item_m44825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Contraction_t1792_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44825_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44825_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8636_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8636_IList_1_set_Item_m44825_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44825_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8636_MethodInfos[] =
{
	&IList_1_IndexOf_m44826_MethodInfo,
	&IList_1_Insert_m44827_MethodInfo,
	&IList_1_RemoveAt_m44828_MethodInfo,
	&IList_1_get_Item_m44824_MethodInfo,
	&IList_1_set_Item_m44825_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8636_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8635_il2cpp_TypeInfo,
	&IEnumerable_1_t8637_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8636_0_0_0;
extern Il2CppType IList_1_t8636_1_0_0;
struct IList_1_t8636;
extern Il2CppGenericClass IList_1_t8636_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8636_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8636_MethodInfos/* methods */
	, IList_1_t8636_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8636_il2cpp_TypeInfo/* element_class */
	, IList_1_t8636_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8636_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8636_0_0_0/* byval_arg */
	, &IList_1_t8636_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8636_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6699_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Level2Map
#include "mscorlib_Mono_Globalization_Unicode_Level2Map.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo IEnumerator_1_get_Current_m44829_MethodInfo;
static PropertyInfo IEnumerator_1_t6699____Current_PropertyInfo = 
{
	&IEnumerator_1_t6699_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44829_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6699_PropertyInfos[] =
{
	&IEnumerator_1_t6699____Current_PropertyInfo,
	NULL
};
extern Il2CppType Level2Map_t1794_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44829_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44829_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6699_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t1794_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44829_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6699_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44829_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6699_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6699_0_0_0;
extern Il2CppType IEnumerator_1_t6699_1_0_0;
struct IEnumerator_1_t6699;
extern Il2CppGenericClass IEnumerator_1_t6699_GenericClass;
TypeInfo IEnumerator_1_t6699_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6699_MethodInfos/* methods */
	, IEnumerator_1_t6699_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6699_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6699_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6699_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6699_0_0_0/* byval_arg */
	, &IEnumerator_1_t6699_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6699_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_585.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4747_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_585MethodDeclarations.h"

extern TypeInfo Level2Map_t1794_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25978_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLevel2Map_t1794_m34518_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
#define Array_InternalArray__get_Item_TisLevel2Map_t1794_m34518(__this, p0, method) (Level2Map_t1794 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4747____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4747, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4747____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4747, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4747_FieldInfos[] =
{
	&InternalEnumerator_1_t4747____array_0_FieldInfo,
	&InternalEnumerator_1_t4747____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25975_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4747____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4747_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25975_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4747____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4747_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25978_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4747_PropertyInfos[] =
{
	&InternalEnumerator_1_t4747____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4747____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4747_InternalEnumerator_1__ctor_m25974_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25974_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25974_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4747_InternalEnumerator_1__ctor_m25974_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25974_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25975_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25975_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25975_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25976_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25976_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m25976_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25977_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25977_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m25977_GenericMethod/* genericMethod */

};
extern Il2CppType Level2Map_t1794_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25978_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25978_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t1794_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25978_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4747_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25974_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25975_MethodInfo,
	&InternalEnumerator_1_Dispose_m25976_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25977_MethodInfo,
	&InternalEnumerator_1_get_Current_m25978_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25977_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25976_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4747_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25975_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25977_MethodInfo,
	&InternalEnumerator_1_Dispose_m25976_MethodInfo,
	&InternalEnumerator_1_get_Current_m25978_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4747_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6699_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4747_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6699_il2cpp_TypeInfo, 7},
};
extern TypeInfo Level2Map_t1794_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4747_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25978_MethodInfo/* Method Usage */,
	&Level2Map_t1794_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisLevel2Map_t1794_m34518_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4747_0_0_0;
extern Il2CppType InternalEnumerator_1_t4747_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4747_GenericClass;
TypeInfo InternalEnumerator_1_t4747_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4747_MethodInfos/* methods */
	, InternalEnumerator_1_t4747_PropertyInfos/* properties */
	, InternalEnumerator_1_t4747_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4747_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4747_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4747_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4747_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4747_1_0_0/* this_arg */
	, InternalEnumerator_1_t4747_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4747_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4747_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4747)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8638_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo ICollection_1_get_Count_m44830_MethodInfo;
static PropertyInfo ICollection_1_t8638____Count_PropertyInfo = 
{
	&ICollection_1_t8638_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44830_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44831_MethodInfo;
static PropertyInfo ICollection_1_t8638____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8638_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44831_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8638_PropertyInfos[] =
{
	&ICollection_1_t8638____Count_PropertyInfo,
	&ICollection_1_t8638____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44830_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_Count()
MethodInfo ICollection_1_get_Count_m44830_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44830_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44831_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44831_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44831_GenericMethod/* genericMethod */

};
extern Il2CppType Level2Map_t1794_0_0_0;
extern Il2CppType Level2Map_t1794_0_0_0;
static ParameterInfo ICollection_1_t8638_ICollection_1_Add_m44832_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1794_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44832_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Add(T)
MethodInfo ICollection_1_Add_m44832_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8638_ICollection_1_Add_m44832_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44832_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44833_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Clear()
MethodInfo ICollection_1_Clear_m44833_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44833_GenericMethod/* genericMethod */

};
extern Il2CppType Level2Map_t1794_0_0_0;
static ParameterInfo ICollection_1_t8638_ICollection_1_Contains_m44834_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1794_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44834_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Contains(T)
MethodInfo ICollection_1_Contains_m44834_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8638_ICollection_1_Contains_m44834_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44834_GenericMethod/* genericMethod */

};
extern Il2CppType Level2MapU5BU5D_t1799_0_0_0;
extern Il2CppType Level2MapU5BU5D_t1799_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8638_ICollection_1_CopyTo_m44835_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Level2MapU5BU5D_t1799_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44835_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44835_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8638_ICollection_1_CopyTo_m44835_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44835_GenericMethod/* genericMethod */

};
extern Il2CppType Level2Map_t1794_0_0_0;
static ParameterInfo ICollection_1_t8638_ICollection_1_Remove_m44836_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1794_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44836_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Remove(T)
MethodInfo ICollection_1_Remove_m44836_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8638_ICollection_1_Remove_m44836_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44836_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8638_MethodInfos[] =
{
	&ICollection_1_get_Count_m44830_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44831_MethodInfo,
	&ICollection_1_Add_m44832_MethodInfo,
	&ICollection_1_Clear_m44833_MethodInfo,
	&ICollection_1_Contains_m44834_MethodInfo,
	&ICollection_1_CopyTo_m44835_MethodInfo,
	&ICollection_1_Remove_m44836_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8640_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8638_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8640_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8638_0_0_0;
extern Il2CppType ICollection_1_t8638_1_0_0;
struct ICollection_1_t8638;
extern Il2CppGenericClass ICollection_1_t8638_GenericClass;
TypeInfo ICollection_1_t8638_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8638_MethodInfos/* methods */
	, ICollection_1_t8638_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8638_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8638_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8638_0_0_0/* byval_arg */
	, &ICollection_1_t8638_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8638_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>
extern Il2CppType IEnumerator_1_t6699_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44837_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44837_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8640_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6699_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44837_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8640_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44837_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8640_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8640_0_0_0;
extern Il2CppType IEnumerable_1_t8640_1_0_0;
struct IEnumerable_1_t8640;
extern Il2CppGenericClass IEnumerable_1_t8640_GenericClass;
TypeInfo IEnumerable_1_t8640_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8640_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8640_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8640_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8640_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8640_0_0_0/* byval_arg */
	, &IEnumerable_1_t8640_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8640_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8639_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo IList_1_get_Item_m44838_MethodInfo;
extern MethodInfo IList_1_set_Item_m44839_MethodInfo;
static PropertyInfo IList_1_t8639____Item_PropertyInfo = 
{
	&IList_1_t8639_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44838_MethodInfo/* get */
	, &IList_1_set_Item_m44839_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8639_PropertyInfos[] =
{
	&IList_1_t8639____Item_PropertyInfo,
	NULL
};
extern Il2CppType Level2Map_t1794_0_0_0;
static ParameterInfo IList_1_t8639_IList_1_IndexOf_m44840_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1794_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44840_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44840_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8639_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8639_IList_1_IndexOf_m44840_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44840_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Level2Map_t1794_0_0_0;
static ParameterInfo IList_1_t8639_IList_1_Insert_m44841_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1794_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44841_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44841_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8639_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8639_IList_1_Insert_m44841_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44841_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8639_IList_1_RemoveAt_m44842_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44842_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44842_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8639_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8639_IList_1_RemoveAt_m44842_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44842_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8639_IList_1_get_Item_m44838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Level2Map_t1794_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44838_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44838_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8639_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t1794_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8639_IList_1_get_Item_m44838_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44838_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Level2Map_t1794_0_0_0;
static ParameterInfo IList_1_t8639_IList_1_set_Item_m44839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1794_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44839_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44839_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8639_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8639_IList_1_set_Item_m44839_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44839_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8639_MethodInfos[] =
{
	&IList_1_IndexOf_m44840_MethodInfo,
	&IList_1_Insert_m44841_MethodInfo,
	&IList_1_RemoveAt_m44842_MethodInfo,
	&IList_1_get_Item_m44838_MethodInfo,
	&IList_1_set_Item_m44839_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8639_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8638_il2cpp_TypeInfo,
	&IEnumerable_1_t8640_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8639_0_0_0;
extern Il2CppType IList_1_t8639_1_0_0;
struct IList_1_t8639;
extern Il2CppGenericClass IList_1_t8639_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8639_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8639_MethodInfos/* methods */
	, IList_1_t8639_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8639_il2cpp_TypeInfo/* element_class */
	, IList_1_t8639_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8639_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8639_0_0_0/* byval_arg */
	, &IList_1_t8639_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8639_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6701_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_ExtenderT.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo IEnumerator_1_get_Current_m44843_MethodInfo;
static PropertyInfo IEnumerator_1_t6701____Current_PropertyInfo = 
{
	&IEnumerator_1_t6701_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44843_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6701_PropertyInfos[] =
{
	&IEnumerator_1_t6701____Current_PropertyInfo,
	NULL
};
extern Il2CppType ExtenderType_t1804_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t1804 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44843_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44843_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6701_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t1804_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t1804/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44843_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6701_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44843_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6701_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6701_0_0_0;
extern Il2CppType IEnumerator_1_t6701_1_0_0;
struct IEnumerator_1_t6701;
extern Il2CppGenericClass IEnumerator_1_t6701_GenericClass;
TypeInfo IEnumerator_1_t6701_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6701_MethodInfos/* methods */
	, IEnumerator_1_t6701_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6701_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6701_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6701_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6701_0_0_0/* byval_arg */
	, &IEnumerator_1_t6701_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6701_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_586.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4748_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_586MethodDeclarations.h"

extern TypeInfo ExtenderType_t1804_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25983_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisExtenderType_t1804_m34529_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisExtenderType_t1804_m34529 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25979_MethodInfo;
 void InternalEnumerator_1__ctor_m25979 (InternalEnumerator_1_t4748 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980 (InternalEnumerator_1_t4748 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25983(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25983_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ExtenderType_t1804_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25981_MethodInfo;
 void InternalEnumerator_1_Dispose_m25981 (InternalEnumerator_1_t4748 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25982_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25982 (InternalEnumerator_1_t4748 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25983 (InternalEnumerator_1_t4748 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisExtenderType_t1804_m34529(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisExtenderType_t1804_m34529_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4748____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4748, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4748____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4748, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4748_FieldInfos[] =
{
	&InternalEnumerator_1_t4748____array_0_FieldInfo,
	&InternalEnumerator_1_t4748____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4748____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4748_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4748____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4748_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25983_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4748_PropertyInfos[] =
{
	&InternalEnumerator_1_t4748____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4748____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4748_InternalEnumerator_1__ctor_m25979_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25979_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25979_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25979/* method */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4748_InternalEnumerator_1__ctor_m25979_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25979_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980/* method */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25981_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25981_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25981/* method */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m25981_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25982_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25982_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25982/* method */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m25982_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t1804_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t1804 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25983_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25983_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25983/* method */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t1804_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t1804/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25983_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4748_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25979_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980_MethodInfo,
	&InternalEnumerator_1_Dispose_m25981_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25982_MethodInfo,
	&InternalEnumerator_1_get_Current_m25983_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4748_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25980_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25982_MethodInfo,
	&InternalEnumerator_1_Dispose_m25981_MethodInfo,
	&InternalEnumerator_1_get_Current_m25983_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4748_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6701_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4748_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6701_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4748_0_0_0;
extern Il2CppType InternalEnumerator_1_t4748_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4748_GenericClass;
TypeInfo InternalEnumerator_1_t4748_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4748_MethodInfos/* methods */
	, InternalEnumerator_1_t4748_PropertyInfos/* properties */
	, InternalEnumerator_1_t4748_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4748_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4748_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4748_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4748_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4748_1_0_0/* this_arg */
	, InternalEnumerator_1_t4748_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4748_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4748)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8641_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo ICollection_1_get_Count_m44844_MethodInfo;
static PropertyInfo ICollection_1_t8641____Count_PropertyInfo = 
{
	&ICollection_1_t8641_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44844_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44845_MethodInfo;
static PropertyInfo ICollection_1_t8641____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8641_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44845_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8641_PropertyInfos[] =
{
	&ICollection_1_t8641____Count_PropertyInfo,
	&ICollection_1_t8641____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44844_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Count()
MethodInfo ICollection_1_get_Count_m44844_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44844_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44845_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44845_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44845_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t1804_0_0_0;
extern Il2CppType ExtenderType_t1804_0_0_0;
static ParameterInfo ICollection_1_t8641_ICollection_1_Add_m44846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1804_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44846_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Add(T)
MethodInfo ICollection_1_Add_m44846_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8641_ICollection_1_Add_m44846_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44846_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44847_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Clear()
MethodInfo ICollection_1_Clear_m44847_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44847_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t1804_0_0_0;
static ParameterInfo ICollection_1_t8641_ICollection_1_Contains_m44848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1804_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44848_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Contains(T)
MethodInfo ICollection_1_Contains_m44848_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8641_ICollection_1_Contains_m44848_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44848_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderTypeU5BU5D_t5028_0_0_0;
extern Il2CppType ExtenderTypeU5BU5D_t5028_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8641_ICollection_1_CopyTo_m44849_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderTypeU5BU5D_t5028_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44849_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44849_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8641_ICollection_1_CopyTo_m44849_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44849_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t1804_0_0_0;
static ParameterInfo ICollection_1_t8641_ICollection_1_Remove_m44850_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1804_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44850_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Remove(T)
MethodInfo ICollection_1_Remove_m44850_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8641_ICollection_1_Remove_m44850_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44850_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8641_MethodInfos[] =
{
	&ICollection_1_get_Count_m44844_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44845_MethodInfo,
	&ICollection_1_Add_m44846_MethodInfo,
	&ICollection_1_Clear_m44847_MethodInfo,
	&ICollection_1_Contains_m44848_MethodInfo,
	&ICollection_1_CopyTo_m44849_MethodInfo,
	&ICollection_1_Remove_m44850_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8643_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8641_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8643_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8641_0_0_0;
extern Il2CppType ICollection_1_t8641_1_0_0;
struct ICollection_1_t8641;
extern Il2CppGenericClass ICollection_1_t8641_GenericClass;
TypeInfo ICollection_1_t8641_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8641_MethodInfos/* methods */
	, ICollection_1_t8641_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8641_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8641_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8641_0_0_0/* byval_arg */
	, &ICollection_1_t8641_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8641_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern Il2CppType IEnumerator_1_t6701_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44851_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44851_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8643_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6701_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44851_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8643_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44851_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8643_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8643_0_0_0;
extern Il2CppType IEnumerable_1_t8643_1_0_0;
struct IEnumerable_1_t8643;
extern Il2CppGenericClass IEnumerable_1_t8643_GenericClass;
TypeInfo IEnumerable_1_t8643_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8643_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8643_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8643_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8643_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8643_0_0_0/* byval_arg */
	, &IEnumerable_1_t8643_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8643_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8642_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo IList_1_get_Item_m44852_MethodInfo;
extern MethodInfo IList_1_set_Item_m44853_MethodInfo;
static PropertyInfo IList_1_t8642____Item_PropertyInfo = 
{
	&IList_1_t8642_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44852_MethodInfo/* get */
	, &IList_1_set_Item_m44853_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8642_PropertyInfos[] =
{
	&IList_1_t8642____Item_PropertyInfo,
	NULL
};
extern Il2CppType ExtenderType_t1804_0_0_0;
static ParameterInfo IList_1_t8642_IList_1_IndexOf_m44854_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1804_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44854_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44854_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8642_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8642_IList_1_IndexOf_m44854_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44854_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ExtenderType_t1804_0_0_0;
static ParameterInfo IList_1_t8642_IList_1_Insert_m44855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1804_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44855_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44855_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8642_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8642_IList_1_Insert_m44855_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44855_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8642_IList_1_RemoveAt_m44856_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44856_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44856_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8642_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8642_IList_1_RemoveAt_m44856_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44856_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8642_IList_1_get_Item_m44852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ExtenderType_t1804_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t1804_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44852_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44852_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8642_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t1804_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t1804_Int32_t73/* invoker_method */
	, IList_1_t8642_IList_1_get_Item_m44852_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44852_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ExtenderType_t1804_0_0_0;
static ParameterInfo IList_1_t8642_IList_1_set_Item_m44853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1804_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44853_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44853_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8642_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8642_IList_1_set_Item_m44853_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44853_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8642_MethodInfos[] =
{
	&IList_1_IndexOf_m44854_MethodInfo,
	&IList_1_Insert_m44855_MethodInfo,
	&IList_1_RemoveAt_m44856_MethodInfo,
	&IList_1_get_Item_m44852_MethodInfo,
	&IList_1_set_Item_m44853_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8642_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8641_il2cpp_TypeInfo,
	&IEnumerable_1_t8643_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8642_0_0_0;
extern Il2CppType IList_1_t8642_1_0_0;
struct IList_1_t8642;
extern Il2CppGenericClass IList_1_t8642_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8642_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8642_MethodInfos/* methods */
	, IList_1_t8642_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8642_il2cpp_TypeInfo/* element_class */
	, IList_1_t8642_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8642_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8642_0_0_0/* byval_arg */
	, &IList_1_t8642_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8642_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6703_il2cpp_TypeInfo;

// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IEnumerator_1_get_Current_m44857_MethodInfo;
static PropertyInfo IEnumerator_1_t6703____Current_PropertyInfo = 
{
	&IEnumerator_1_t6703_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44857_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6703_PropertyInfos[] =
{
	&IEnumerator_1_t6703____Current_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t1813 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44857_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44857_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6703_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t1813_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t1813/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44857_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6703_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44857_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6703_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6703_0_0_0;
extern Il2CppType IEnumerator_1_t6703_1_0_0;
struct IEnumerator_1_t6703;
extern Il2CppGenericClass IEnumerator_1_t6703_GenericClass;
TypeInfo IEnumerator_1_t6703_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6703_MethodInfos/* methods */
	, IEnumerator_1_t6703_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6703_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6703_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6703_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6703_0_0_0/* byval_arg */
	, &IEnumerator_1_t6703_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6703_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_587.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4749_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_587MethodDeclarations.h"

extern TypeInfo ConfidenceFactor_t1813_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25988_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConfidenceFactor_t1813_m34540_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisConfidenceFactor_t1813_m34540 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25984_MethodInfo;
 void InternalEnumerator_1__ctor_m25984 (InternalEnumerator_1_t4749 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985 (InternalEnumerator_1_t4749 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25988(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25988_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ConfidenceFactor_t1813_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25986_MethodInfo;
 void InternalEnumerator_1_Dispose_m25986 (InternalEnumerator_1_t4749 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25987_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25987 (InternalEnumerator_1_t4749 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25988 (InternalEnumerator_1_t4749 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisConfidenceFactor_t1813_m34540(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisConfidenceFactor_t1813_m34540_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4749____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4749, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4749____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4749, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4749_FieldInfos[] =
{
	&InternalEnumerator_1_t4749____array_0_FieldInfo,
	&InternalEnumerator_1_t4749____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4749____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4749_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4749____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4749_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25988_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4749_PropertyInfos[] =
{
	&InternalEnumerator_1_t4749____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4749____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4749_InternalEnumerator_1__ctor_m25984_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25984_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25984_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25984/* method */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4749_InternalEnumerator_1__ctor_m25984_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25984_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985/* method */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25986_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25986_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25986/* method */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m25986_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25987_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25987_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25987/* method */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m25987_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t1813 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25988_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25988_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25988/* method */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t1813_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t1813/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25988_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4749_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25984_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985_MethodInfo,
	&InternalEnumerator_1_Dispose_m25986_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25987_MethodInfo,
	&InternalEnumerator_1_get_Current_m25988_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4749_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25985_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25987_MethodInfo,
	&InternalEnumerator_1_Dispose_m25986_MethodInfo,
	&InternalEnumerator_1_get_Current_m25988_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4749_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6703_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4749_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6703_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4749_0_0_0;
extern Il2CppType InternalEnumerator_1_t4749_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4749_GenericClass;
TypeInfo InternalEnumerator_1_t4749_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4749_MethodInfos/* methods */
	, InternalEnumerator_1_t4749_PropertyInfos/* properties */
	, InternalEnumerator_1_t4749_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4749_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4749_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4749_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4749_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4749_1_0_0/* this_arg */
	, InternalEnumerator_1_t4749_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4749_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4749)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8644_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo ICollection_1_get_Count_m44858_MethodInfo;
static PropertyInfo ICollection_1_t8644____Count_PropertyInfo = 
{
	&ICollection_1_t8644_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44858_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44859_MethodInfo;
static PropertyInfo ICollection_1_t8644____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8644_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44859_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8644_PropertyInfos[] =
{
	&ICollection_1_t8644____Count_PropertyInfo,
	&ICollection_1_t8644____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44858_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
MethodInfo ICollection_1_get_Count_m44858_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44858_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44859_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44859_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44859_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
static ParameterInfo ICollection_1_t8644_ICollection_1_Add_m44860_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1813_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44860_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
MethodInfo ICollection_1_Add_m44860_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8644_ICollection_1_Add_m44860_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44860_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44861_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
MethodInfo ICollection_1_Clear_m44861_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44861_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
static ParameterInfo ICollection_1_t8644_ICollection_1_Contains_m44862_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1813_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44862_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
MethodInfo ICollection_1_Contains_m44862_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8644_ICollection_1_Contains_m44862_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44862_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactorU5BU5D_t5029_0_0_0;
extern Il2CppType ConfidenceFactorU5BU5D_t5029_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8644_ICollection_1_CopyTo_m44863_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactorU5BU5D_t5029_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44863_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44863_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8644_ICollection_1_CopyTo_m44863_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44863_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
static ParameterInfo ICollection_1_t8644_ICollection_1_Remove_m44864_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1813_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44864_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
MethodInfo ICollection_1_Remove_m44864_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8644_ICollection_1_Remove_m44864_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44864_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8644_MethodInfos[] =
{
	&ICollection_1_get_Count_m44858_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44859_MethodInfo,
	&ICollection_1_Add_m44860_MethodInfo,
	&ICollection_1_Clear_m44861_MethodInfo,
	&ICollection_1_Contains_m44862_MethodInfo,
	&ICollection_1_CopyTo_m44863_MethodInfo,
	&ICollection_1_Remove_m44864_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8646_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8644_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8646_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8644_0_0_0;
extern Il2CppType ICollection_1_t8644_1_0_0;
struct ICollection_1_t8644;
extern Il2CppGenericClass ICollection_1_t8644_GenericClass;
TypeInfo ICollection_1_t8644_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8644_MethodInfos/* methods */
	, ICollection_1_t8644_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8644_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8644_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8644_0_0_0/* byval_arg */
	, &ICollection_1_t8644_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8644_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType IEnumerator_1_t6703_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44865_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44865_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8646_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6703_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44865_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8646_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44865_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8646_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8646_0_0_0;
extern Il2CppType IEnumerable_1_t8646_1_0_0;
struct IEnumerable_1_t8646;
extern Il2CppGenericClass IEnumerable_1_t8646_GenericClass;
TypeInfo IEnumerable_1_t8646_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8646_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8646_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8646_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8646_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8646_0_0_0/* byval_arg */
	, &IEnumerable_1_t8646_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8646_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8645_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IList_1_get_Item_m44866_MethodInfo;
extern MethodInfo IList_1_set_Item_m44867_MethodInfo;
static PropertyInfo IList_1_t8645____Item_PropertyInfo = 
{
	&IList_1_t8645_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44866_MethodInfo/* get */
	, &IList_1_set_Item_m44867_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8645_PropertyInfos[] =
{
	&IList_1_t8645____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
static ParameterInfo IList_1_t8645_IList_1_IndexOf_m44868_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1813_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44868_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44868_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8645_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8645_IList_1_IndexOf_m44868_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44868_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
static ParameterInfo IList_1_t8645_IList_1_Insert_m44869_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1813_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44869_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44869_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8645_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8645_IList_1_Insert_m44869_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44869_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8645_IList_1_RemoveAt_m44870_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44870_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44870_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8645_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8645_IList_1_RemoveAt_m44870_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44870_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8645_IList_1_get_Item_m44866_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t1813_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44866_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44866_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8645_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t1813_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t1813_Int32_t73/* invoker_method */
	, IList_1_t8645_IList_1_get_Item_m44866_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44866_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ConfidenceFactor_t1813_0_0_0;
static ParameterInfo IList_1_t8645_IList_1_set_Item_m44867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1813_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44867_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44867_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8645_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8645_IList_1_set_Item_m44867_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44867_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8645_MethodInfos[] =
{
	&IList_1_IndexOf_m44868_MethodInfo,
	&IList_1_Insert_m44869_MethodInfo,
	&IList_1_RemoveAt_m44870_MethodInfo,
	&IList_1_get_Item_m44866_MethodInfo,
	&IList_1_set_Item_m44867_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8645_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8644_il2cpp_TypeInfo,
	&IEnumerable_1_t8646_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8645_0_0_0;
extern Il2CppType IList_1_t8645_1_0_0;
struct IList_1_t8645;
extern Il2CppGenericClass IList_1_t8645_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8645_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8645_MethodInfos/* methods */
	, IList_1_t8645_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8645_il2cpp_TypeInfo/* element_class */
	, IList_1_t8645_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8645_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8645_0_0_0/* byval_arg */
	, &IList_1_t8645_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8645_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6705_il2cpp_TypeInfo;

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>
extern MethodInfo IEnumerator_1_get_Current_m44871_MethodInfo;
static PropertyInfo IEnumerator_1_t6705____Current_PropertyInfo = 
{
	&IEnumerator_1_t6705_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44871_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6705_PropertyInfos[] =
{
	&IEnumerator_1_t6705____Current_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t1811_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44871_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44871_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6705_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t1811_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44871_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6705_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44871_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6705_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6705_0_0_0;
extern Il2CppType IEnumerator_1_t6705_1_0_0;
struct IEnumerator_1_t6705;
extern Il2CppGenericClass IEnumerator_1_t6705_GenericClass;
TypeInfo IEnumerator_1_t6705_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6705_MethodInfos/* methods */
	, IEnumerator_1_t6705_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6705_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6705_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6705_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6705_0_0_0/* byval_arg */
	, &IEnumerator_1_t6705_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6705_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_588.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4750_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_588MethodDeclarations.h"

extern TypeInfo BigInteger_t1811_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25993_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t1811_m34551_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t1811_m34551(__this, p0, method) (BigInteger_t1811 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4750____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4750, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4750____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4750, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4750_FieldInfos[] =
{
	&InternalEnumerator_1_t4750____array_0_FieldInfo,
	&InternalEnumerator_1_t4750____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25990_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4750____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4750_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25990_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4750____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4750_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25993_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4750_PropertyInfos[] =
{
	&InternalEnumerator_1_t4750____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4750____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4750_InternalEnumerator_1__ctor_m25989_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25989_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25989_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4750_InternalEnumerator_1__ctor_m25989_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25989_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25990_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25990_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25990_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25991_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25991_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m25991_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25992_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25992_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m25992_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t1811_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25993_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25993_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t1811_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25993_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4750_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25989_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25990_MethodInfo,
	&InternalEnumerator_1_Dispose_m25991_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25992_MethodInfo,
	&InternalEnumerator_1_get_Current_m25993_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25992_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25991_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4750_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25990_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25992_MethodInfo,
	&InternalEnumerator_1_Dispose_m25991_MethodInfo,
	&InternalEnumerator_1_get_Current_m25993_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4750_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6705_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4750_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6705_il2cpp_TypeInfo, 7},
};
extern TypeInfo BigInteger_t1811_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4750_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25993_MethodInfo/* Method Usage */,
	&BigInteger_t1811_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBigInteger_t1811_m34551_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4750_0_0_0;
extern Il2CppType InternalEnumerator_1_t4750_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4750_GenericClass;
TypeInfo InternalEnumerator_1_t4750_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4750_MethodInfos/* methods */
	, InternalEnumerator_1_t4750_PropertyInfos/* properties */
	, InternalEnumerator_1_t4750_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4750_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4750_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4750_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4750_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4750_1_0_0/* this_arg */
	, InternalEnumerator_1_t4750_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4750_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4750_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4750)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8647_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>
extern MethodInfo ICollection_1_get_Count_m44872_MethodInfo;
static PropertyInfo ICollection_1_t8647____Count_PropertyInfo = 
{
	&ICollection_1_t8647_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44872_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44873_MethodInfo;
static PropertyInfo ICollection_1_t8647____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8647_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44873_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8647_PropertyInfos[] =
{
	&ICollection_1_t8647____Count_PropertyInfo,
	&ICollection_1_t8647____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44872_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
MethodInfo ICollection_1_get_Count_m44872_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44872_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44873_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44873_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44873_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t1811_0_0_0;
extern Il2CppType BigInteger_t1811_0_0_0;
static ParameterInfo ICollection_1_t8647_ICollection_1_Add_m44874_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1811_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44874_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
MethodInfo ICollection_1_Add_m44874_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8647_ICollection_1_Add_m44874_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44874_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44875_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
MethodInfo ICollection_1_Clear_m44875_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44875_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t1811_0_0_0;
static ParameterInfo ICollection_1_t8647_ICollection_1_Contains_m44876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1811_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44876_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
MethodInfo ICollection_1_Contains_m44876_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8647_ICollection_1_Contains_m44876_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44876_GenericMethod/* genericMethod */

};
extern Il2CppType BigIntegerU5BU5D_t1818_0_0_0;
extern Il2CppType BigIntegerU5BU5D_t1818_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8647_ICollection_1_CopyTo_m44877_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BigIntegerU5BU5D_t1818_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44877_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44877_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8647_ICollection_1_CopyTo_m44877_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44877_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t1811_0_0_0;
static ParameterInfo ICollection_1_t8647_ICollection_1_Remove_m44878_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1811_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44878_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
MethodInfo ICollection_1_Remove_m44878_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8647_ICollection_1_Remove_m44878_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44878_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8647_MethodInfos[] =
{
	&ICollection_1_get_Count_m44872_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44873_MethodInfo,
	&ICollection_1_Add_m44874_MethodInfo,
	&ICollection_1_Clear_m44875_MethodInfo,
	&ICollection_1_Contains_m44876_MethodInfo,
	&ICollection_1_CopyTo_m44877_MethodInfo,
	&ICollection_1_Remove_m44878_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8649_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8647_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8649_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8647_0_0_0;
extern Il2CppType ICollection_1_t8647_1_0_0;
struct ICollection_1_t8647;
extern Il2CppGenericClass ICollection_1_t8647_GenericClass;
TypeInfo ICollection_1_t8647_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8647_MethodInfos/* methods */
	, ICollection_1_t8647_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8647_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8647_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8647_0_0_0/* byval_arg */
	, &ICollection_1_t8647_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8647_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>
extern Il2CppType IEnumerator_1_t6705_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44879_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44879_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8649_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6705_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44879_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8649_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44879_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8649_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8649_0_0_0;
extern Il2CppType IEnumerable_1_t8649_1_0_0;
struct IEnumerable_1_t8649;
extern Il2CppGenericClass IEnumerable_1_t8649_GenericClass;
TypeInfo IEnumerable_1_t8649_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8649_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8649_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8649_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8649_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8649_0_0_0/* byval_arg */
	, &IEnumerable_1_t8649_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8649_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8648_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger>
extern MethodInfo IList_1_get_Item_m44880_MethodInfo;
extern MethodInfo IList_1_set_Item_m44881_MethodInfo;
static PropertyInfo IList_1_t8648____Item_PropertyInfo = 
{
	&IList_1_t8648_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44880_MethodInfo/* get */
	, &IList_1_set_Item_m44881_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8648_PropertyInfos[] =
{
	&IList_1_t8648____Item_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t1811_0_0_0;
static ParameterInfo IList_1_t8648_IList_1_IndexOf_m44882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1811_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44882_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44882_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8648_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8648_IList_1_IndexOf_m44882_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44882_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType BigInteger_t1811_0_0_0;
static ParameterInfo IList_1_t8648_IList_1_Insert_m44883_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1811_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44883_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44883_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8648_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8648_IList_1_Insert_m44883_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44883_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8648_IList_1_RemoveAt_m44884_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44884_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44884_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8648_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8648_IList_1_RemoveAt_m44884_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44884_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8648_IList_1_get_Item_m44880_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType BigInteger_t1811_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44880_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44880_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8648_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t1811_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8648_IList_1_get_Item_m44880_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44880_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType BigInteger_t1811_0_0_0;
static ParameterInfo IList_1_t8648_IList_1_set_Item_m44881_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1811_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44881_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44881_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8648_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8648_IList_1_set_Item_m44881_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44881_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8648_MethodInfos[] =
{
	&IList_1_IndexOf_m44882_MethodInfo,
	&IList_1_Insert_m44883_MethodInfo,
	&IList_1_RemoveAt_m44884_MethodInfo,
	&IList_1_get_Item_m44880_MethodInfo,
	&IList_1_set_Item_m44881_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8648_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8647_il2cpp_TypeInfo,
	&IEnumerable_1_t8649_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8648_0_0_0;
extern Il2CppType IList_1_t8648_1_0_0;
struct IList_1_t8648;
extern Il2CppGenericClass IList_1_t8648_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8648_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8648_MethodInfos/* methods */
	, IList_1_t8648_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8648_il2cpp_TypeInfo/* element_class */
	, IList_1_t8648_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8648_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8648_0_0_0/* byval_arg */
	, &IList_1_t8648_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8648_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6707_il2cpp_TypeInfo;

// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IEnumerator_1_get_Current_m44885_MethodInfo;
static PropertyInfo IEnumerator_1_t6707____Current_PropertyInfo = 
{
	&IEnumerator_1_t6707_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44885_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6707_PropertyInfos[] =
{
	&IEnumerator_1_t6707____Current_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t1815_0_0_0;
extern void* RuntimeInvoker_Sign_t1815 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44885_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44885_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6707_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t1815_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t1815/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44885_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6707_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44885_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6707_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6707_0_0_0;
extern Il2CppType IEnumerator_1_t6707_1_0_0;
struct IEnumerator_1_t6707;
extern Il2CppGenericClass IEnumerator_1_t6707_GenericClass;
TypeInfo IEnumerator_1_t6707_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6707_MethodInfos/* methods */
	, IEnumerator_1_t6707_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6707_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6707_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6707_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6707_0_0_0/* byval_arg */
	, &IEnumerator_1_t6707_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6707_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_589.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4751_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_589MethodDeclarations.h"

extern TypeInfo Sign_t1815_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25998_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSign_t1815_m34562_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSign_t1815_m34562 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25994_MethodInfo;
 void InternalEnumerator_1__ctor_m25994 (InternalEnumerator_1_t4751 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995 (InternalEnumerator_1_t4751 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25998(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25998_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Sign_t1815_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25996_MethodInfo;
 void InternalEnumerator_1_Dispose_m25996 (InternalEnumerator_1_t4751 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25997_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25997 (InternalEnumerator_1_t4751 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25998 (InternalEnumerator_1_t4751 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisSign_t1815_m34562(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSign_t1815_m34562_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4751____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4751, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4751____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4751, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4751_FieldInfos[] =
{
	&InternalEnumerator_1_t4751____array_0_FieldInfo,
	&InternalEnumerator_1_t4751____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4751____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4751_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4751____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4751_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25998_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4751_PropertyInfos[] =
{
	&InternalEnumerator_1_t4751____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4751____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4751_InternalEnumerator_1__ctor_m25994_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25994_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25994_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25994/* method */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4751_InternalEnumerator_1__ctor_m25994_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25994_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995/* method */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25996_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25996_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25996/* method */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m25996_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25997_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25997_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25997/* method */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m25997_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t1815_0_0_0;
extern void* RuntimeInvoker_Sign_t1815 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25998_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25998_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25998/* method */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t1815_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t1815/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25998_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4751_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25994_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995_MethodInfo,
	&InternalEnumerator_1_Dispose_m25996_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25997_MethodInfo,
	&InternalEnumerator_1_get_Current_m25998_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4751_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25995_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25997_MethodInfo,
	&InternalEnumerator_1_Dispose_m25996_MethodInfo,
	&InternalEnumerator_1_get_Current_m25998_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4751_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6707_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4751_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6707_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4751_0_0_0;
extern Il2CppType InternalEnumerator_1_t4751_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4751_GenericClass;
TypeInfo InternalEnumerator_1_t4751_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4751_MethodInfos/* methods */
	, InternalEnumerator_1_t4751_PropertyInfos/* properties */
	, InternalEnumerator_1_t4751_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4751_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4751_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4751_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4751_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4751_1_0_0/* this_arg */
	, InternalEnumerator_1_t4751_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4751_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4751)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8650_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>
extern MethodInfo ICollection_1_get_Count_m44886_MethodInfo;
static PropertyInfo ICollection_1_t8650____Count_PropertyInfo = 
{
	&ICollection_1_t8650_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44886_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44887_MethodInfo;
static PropertyInfo ICollection_1_t8650____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8650_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44887_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8650_PropertyInfos[] =
{
	&ICollection_1_t8650____Count_PropertyInfo,
	&ICollection_1_t8650____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44886_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
MethodInfo ICollection_1_get_Count_m44886_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44886_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44887_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44887_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44887_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t1815_0_0_0;
extern Il2CppType Sign_t1815_0_0_0;
static ParameterInfo ICollection_1_t8650_ICollection_1_Add_m44888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t1815_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44888_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
MethodInfo ICollection_1_Add_m44888_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8650_ICollection_1_Add_m44888_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44888_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44889_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
MethodInfo ICollection_1_Clear_m44889_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44889_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t1815_0_0_0;
static ParameterInfo ICollection_1_t8650_ICollection_1_Contains_m44890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t1815_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44890_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
MethodInfo ICollection_1_Contains_m44890_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8650_ICollection_1_Contains_m44890_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44890_GenericMethod/* genericMethod */

};
extern Il2CppType SignU5BU5D_t5030_0_0_0;
extern Il2CppType SignU5BU5D_t5030_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8650_ICollection_1_CopyTo_m44891_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SignU5BU5D_t5030_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44891_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44891_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8650_ICollection_1_CopyTo_m44891_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44891_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t1815_0_0_0;
static ParameterInfo ICollection_1_t8650_ICollection_1_Remove_m44892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t1815_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44892_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
MethodInfo ICollection_1_Remove_m44892_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8650_ICollection_1_Remove_m44892_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44892_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8650_MethodInfos[] =
{
	&ICollection_1_get_Count_m44886_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44887_MethodInfo,
	&ICollection_1_Add_m44888_MethodInfo,
	&ICollection_1_Clear_m44889_MethodInfo,
	&ICollection_1_Contains_m44890_MethodInfo,
	&ICollection_1_CopyTo_m44891_MethodInfo,
	&ICollection_1_Remove_m44892_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8652_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8650_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8652_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8650_0_0_0;
extern Il2CppType ICollection_1_t8650_1_0_0;
struct ICollection_1_t8650;
extern Il2CppGenericClass ICollection_1_t8650_GenericClass;
TypeInfo ICollection_1_t8650_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8650_MethodInfos/* methods */
	, ICollection_1_t8650_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8650_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8650_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8650_0_0_0/* byval_arg */
	, &ICollection_1_t8650_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8650_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>
extern Il2CppType IEnumerator_1_t6707_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44893_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44893_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8652_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6707_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44893_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8652_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44893_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8652_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8652_0_0_0;
extern Il2CppType IEnumerable_1_t8652_1_0_0;
struct IEnumerable_1_t8652;
extern Il2CppGenericClass IEnumerable_1_t8652_GenericClass;
TypeInfo IEnumerable_1_t8652_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8652_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8652_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8652_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8652_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8652_0_0_0/* byval_arg */
	, &IEnumerable_1_t8652_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8652_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8651_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IList_1_get_Item_m44894_MethodInfo;
extern MethodInfo IList_1_set_Item_m44895_MethodInfo;
static PropertyInfo IList_1_t8651____Item_PropertyInfo = 
{
	&IList_1_t8651_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44894_MethodInfo/* get */
	, &IList_1_set_Item_m44895_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8651_PropertyInfos[] =
{
	&IList_1_t8651____Item_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t1815_0_0_0;
static ParameterInfo IList_1_t8651_IList_1_IndexOf_m44896_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t1815_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44896_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44896_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8651_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8651_IList_1_IndexOf_m44896_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44896_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Sign_t1815_0_0_0;
static ParameterInfo IList_1_t8651_IList_1_Insert_m44897_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t1815_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44897_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44897_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8651_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8651_IList_1_Insert_m44897_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44897_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8651_IList_1_RemoveAt_m44898_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44898_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44898_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8651_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8651_IList_1_RemoveAt_m44898_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44898_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8651_IList_1_get_Item_m44894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Sign_t1815_0_0_0;
extern void* RuntimeInvoker_Sign_t1815_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44894_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44894_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8651_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t1815_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t1815_Int32_t73/* invoker_method */
	, IList_1_t8651_IList_1_get_Item_m44894_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44894_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Sign_t1815_0_0_0;
static ParameterInfo IList_1_t8651_IList_1_set_Item_m44895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t1815_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44895_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44895_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8651_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8651_IList_1_set_Item_m44895_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44895_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8651_MethodInfos[] =
{
	&IList_1_IndexOf_m44896_MethodInfo,
	&IList_1_Insert_m44897_MethodInfo,
	&IList_1_RemoveAt_m44898_MethodInfo,
	&IList_1_get_Item_m44894_MethodInfo,
	&IList_1_set_Item_m44895_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8651_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8650_il2cpp_TypeInfo,
	&IEnumerable_1_t8652_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8651_0_0_0;
extern Il2CppType IList_1_t8651_1_0_0;
struct IList_1_t8651;
extern Il2CppGenericClass IList_1_t8651_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8651_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8651_MethodInfos/* methods */
	, IList_1_t8651_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8651_il2cpp_TypeInfo/* element_class */
	, IList_1_t8651_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8651_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8651_0_0_0/* byval_arg */
	, &IList_1_t8651_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8651_GenericClass/* generic_class */
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
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CollectionDebuggerView_1_t4752_il2cpp_TypeInfo;
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1_0MethodDeclarations.h"



// Metadata Definition System.Collections.Generic.CollectionDebuggerView`1<System.Object>
static MethodInfo* CollectionDebuggerView_1_t4752_MethodInfos[] =
{
	NULL
};
extern MethodInfo Object_Equals_m517_MethodInfo;
extern MethodInfo Object_GetHashCode_m518_MethodInfo;
extern MethodInfo Object_ToString_m498_MethodInfo;
static MethodInfo* CollectionDebuggerView_1_t4752_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType CollectionDebuggerView_1_t4752_0_0_0;
extern Il2CppType CollectionDebuggerView_1_t4752_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CollectionDebuggerView_1_t4752;
extern Il2CppGenericClass CollectionDebuggerView_1_t4752_GenericClass;
TypeInfo CollectionDebuggerView_1_t4752_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CollectionDebuggerView`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, CollectionDebuggerView_1_t4752_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CollectionDebuggerView_1_t4752_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CollectionDebuggerView_1_t4752_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CollectionDebuggerView_1_t4752_il2cpp_TypeInfo/* cast_class */
	, &CollectionDebuggerView_1_t4752_0_0_0/* byval_arg */
	, &CollectionDebuggerView_1_t4752_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CollectionDebuggerView_1_t4752_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CollectionDebuggerView_1_t4752)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048832/* flags */
	, 0/* rank */
	, false/* valuetype */
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
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CollectionDebuggerView_2_t4753_il2cpp_TypeInfo;
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2_0MethodDeclarations.h"



// Metadata Definition System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
static MethodInfo* CollectionDebuggerView_2_t4753_MethodInfos[] =
{
	NULL
};
static MethodInfo* CollectionDebuggerView_2_t4753_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType CollectionDebuggerView_2_t4753_0_0_0;
extern Il2CppType CollectionDebuggerView_2_t4753_1_0_0;
struct CollectionDebuggerView_2_t4753;
extern Il2CppGenericClass CollectionDebuggerView_2_t4753_GenericClass;
TypeInfo CollectionDebuggerView_2_t4753_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CollectionDebuggerView`2"/* name */
	, "System.Collections.Generic"/* namespaze */
	, CollectionDebuggerView_2_t4753_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CollectionDebuggerView_2_t4753_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CollectionDebuggerView_2_t4753_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CollectionDebuggerView_2_t4753_il2cpp_TypeInfo/* cast_class */
	, &CollectionDebuggerView_2_t4753_0_0_0/* byval_arg */
	, &CollectionDebuggerView_2_t4753_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CollectionDebuggerView_2_t4753_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CollectionDebuggerView_2_t4753)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048832/* flags */
	, 0/* rank */
	, false/* valuetype */
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
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6709_il2cpp_TypeInfo;

// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>
extern MethodInfo IEnumerator_1_get_Current_m44899_MethodInfo;
static PropertyInfo IEnumerator_1_t6709____Current_PropertyInfo = 
{
	&IEnumerator_1_t6709_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44899_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6709_PropertyInfos[] =
{
	&IEnumerator_1_t6709____Current_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t1889_0_0_0;
extern void* RuntimeInvoker_Slot_t1889 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44899_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44899_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6709_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1889_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1889/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44899_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6709_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44899_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6709_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6709_0_0_0;
extern Il2CppType IEnumerator_1_t6709_1_0_0;
struct IEnumerator_1_t6709;
extern Il2CppGenericClass IEnumerator_1_t6709_GenericClass;
TypeInfo IEnumerator_1_t6709_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6709_MethodInfos/* methods */
	, IEnumerator_1_t6709_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6709_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6709_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6709_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6709_0_0_0/* byval_arg */
	, &IEnumerator_1_t6709_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6709_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_590.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4754_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_590MethodDeclarations.h"

extern TypeInfo Slot_t1889_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26003_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t1889_m34573_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
 Slot_t1889  Array_InternalArray__get_Item_TisSlot_t1889_m34573 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25999_MethodInfo;
 void InternalEnumerator_1__ctor_m25999 (InternalEnumerator_1_t4754 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000 (InternalEnumerator_1_t4754 * __this, MethodInfo* method){
	{
		Slot_t1889  L_0 = InternalEnumerator_1_get_Current_m26003(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26003_MethodInfo);
		Slot_t1889  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Slot_t1889_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26001_MethodInfo;
 void InternalEnumerator_1_Dispose_m26001 (InternalEnumerator_1_t4754 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26002_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26002 (InternalEnumerator_1_t4754 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
 Slot_t1889  InternalEnumerator_1_get_Current_m26003 (InternalEnumerator_1_t4754 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Slot_t1889  L_8 = Array_InternalArray__get_Item_TisSlot_t1889_m34573(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSlot_t1889_m34573_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4754____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4754, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4754____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4754, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4754_FieldInfos[] =
{
	&InternalEnumerator_1_t4754____array_0_FieldInfo,
	&InternalEnumerator_1_t4754____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4754____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4754_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4754____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4754_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26003_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4754_PropertyInfos[] =
{
	&InternalEnumerator_1_t4754____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4754____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4754_InternalEnumerator_1__ctor_m25999_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25999_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25999_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25999/* method */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4754_InternalEnumerator_1__ctor_m25999_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25999_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000/* method */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26001_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26001_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26001/* method */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26001_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26002_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26002_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26002/* method */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26002_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1889_0_0_0;
extern void* RuntimeInvoker_Slot_t1889 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26003_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26003_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26003/* method */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1889_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1889/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26003_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4754_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25999_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo,
	&InternalEnumerator_1_Dispose_m26001_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26002_MethodInfo,
	&InternalEnumerator_1_get_Current_m26003_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4754_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26000_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26002_MethodInfo,
	&InternalEnumerator_1_Dispose_m26001_MethodInfo,
	&InternalEnumerator_1_get_Current_m26003_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4754_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6709_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4754_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6709_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4754_0_0_0;
extern Il2CppType InternalEnumerator_1_t4754_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4754_GenericClass;
TypeInfo InternalEnumerator_1_t4754_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4754_MethodInfos/* methods */
	, InternalEnumerator_1_t4754_PropertyInfos/* properties */
	, InternalEnumerator_1_t4754_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4754_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4754_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4754_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4754_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4754_1_0_0/* this_arg */
	, InternalEnumerator_1_t4754_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4754_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4754)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8653_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>
extern MethodInfo ICollection_1_get_Count_m44900_MethodInfo;
static PropertyInfo ICollection_1_t8653____Count_PropertyInfo = 
{
	&ICollection_1_t8653_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44901_MethodInfo;
static PropertyInfo ICollection_1_t8653____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8653_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44901_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8653_PropertyInfos[] =
{
	&ICollection_1_t8653____Count_PropertyInfo,
	&ICollection_1_t8653____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44900_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
MethodInfo ICollection_1_get_Count_m44900_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44900_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44901_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44901_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44901_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1889_0_0_0;
extern Il2CppType Slot_t1889_0_0_0;
static ParameterInfo ICollection_1_t8653_ICollection_1_Add_m44902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1889_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Slot_t1889 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44902_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
MethodInfo ICollection_1_Add_m44902_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Slot_t1889/* invoker_method */
	, ICollection_1_t8653_ICollection_1_Add_m44902_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44902_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44903_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
MethodInfo ICollection_1_Clear_m44903_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44903_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1889_0_0_0;
static ParameterInfo ICollection_1_t8653_ICollection_1_Contains_m44904_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1889_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Slot_t1889 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44904_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
MethodInfo ICollection_1_Contains_m44904_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Slot_t1889/* invoker_method */
	, ICollection_1_t8653_ICollection_1_Contains_m44904_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44904_GenericMethod/* genericMethod */

};
extern Il2CppType SlotU5BU5D_t1895_0_0_0;
extern Il2CppType SlotU5BU5D_t1895_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8653_ICollection_1_CopyTo_m44905_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SlotU5BU5D_t1895_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44905_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44905_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8653_ICollection_1_CopyTo_m44905_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44905_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1889_0_0_0;
static ParameterInfo ICollection_1_t8653_ICollection_1_Remove_m44906_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1889_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Slot_t1889 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44906_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
MethodInfo ICollection_1_Remove_m44906_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Slot_t1889/* invoker_method */
	, ICollection_1_t8653_ICollection_1_Remove_m44906_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44906_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8653_MethodInfos[] =
{
	&ICollection_1_get_Count_m44900_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44901_MethodInfo,
	&ICollection_1_Add_m44902_MethodInfo,
	&ICollection_1_Clear_m44903_MethodInfo,
	&ICollection_1_Contains_m44904_MethodInfo,
	&ICollection_1_CopyTo_m44905_MethodInfo,
	&ICollection_1_Remove_m44906_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8655_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8653_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8655_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8653_0_0_0;
extern Il2CppType ICollection_1_t8653_1_0_0;
struct ICollection_1_t8653;
extern Il2CppGenericClass ICollection_1_t8653_GenericClass;
TypeInfo ICollection_1_t8653_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8653_MethodInfos/* methods */
	, ICollection_1_t8653_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8653_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8653_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8653_0_0_0/* byval_arg */
	, &ICollection_1_t8653_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8653_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>
extern Il2CppType IEnumerator_1_t6709_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44907_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44907_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8655_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6709_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44907_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8655_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44907_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8655_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8655_0_0_0;
extern Il2CppType IEnumerable_1_t8655_1_0_0;
struct IEnumerable_1_t8655;
extern Il2CppGenericClass IEnumerable_1_t8655_GenericClass;
TypeInfo IEnumerable_1_t8655_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8655_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8655_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8655_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8655_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8655_0_0_0/* byval_arg */
	, &IEnumerable_1_t8655_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8655_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8654_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>
extern MethodInfo IList_1_get_Item_m44908_MethodInfo;
extern MethodInfo IList_1_set_Item_m44909_MethodInfo;
static PropertyInfo IList_1_t8654____Item_PropertyInfo = 
{
	&IList_1_t8654_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44908_MethodInfo/* get */
	, &IList_1_set_Item_m44909_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8654_PropertyInfos[] =
{
	&IList_1_t8654____Item_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t1889_0_0_0;
static ParameterInfo IList_1_t8654_IList_1_IndexOf_m44910_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1889_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Slot_t1889 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44910_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44910_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8654_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Slot_t1889/* invoker_method */
	, IList_1_t8654_IList_1_IndexOf_m44910_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44910_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Slot_t1889_0_0_0;
static ParameterInfo IList_1_t8654_IList_1_Insert_m44911_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t1889_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Slot_t1889 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44911_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44911_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8654_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Slot_t1889/* invoker_method */
	, IList_1_t8654_IList_1_Insert_m44911_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44911_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8654_IList_1_RemoveAt_m44912_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44912_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44912_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8654_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8654_IList_1_RemoveAt_m44912_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44912_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8654_IList_1_get_Item_m44908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Slot_t1889_0_0_0;
extern void* RuntimeInvoker_Slot_t1889_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44908_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44908_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8654_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1889_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1889_Int32_t73/* invoker_method */
	, IList_1_t8654_IList_1_get_Item_m44908_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44908_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Slot_t1889_0_0_0;
static ParameterInfo IList_1_t8654_IList_1_set_Item_m44909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t1889_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Slot_t1889 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44909_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44909_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8654_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Slot_t1889/* invoker_method */
	, IList_1_t8654_IList_1_set_Item_m44909_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44909_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8654_MethodInfos[] =
{
	&IList_1_IndexOf_m44910_MethodInfo,
	&IList_1_Insert_m44911_MethodInfo,
	&IList_1_RemoveAt_m44912_MethodInfo,
	&IList_1_get_Item_m44908_MethodInfo,
	&IList_1_set_Item_m44909_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8654_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8653_il2cpp_TypeInfo,
	&IEnumerable_1_t8655_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8654_0_0_0;
extern Il2CppType IList_1_t8654_1_0_0;
struct IList_1_t8654;
extern Il2CppGenericClass IList_1_t8654_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8654_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8654_MethodInfos/* methods */
	, IList_1_t8654_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8654_il2cpp_TypeInfo/* element_class */
	, IList_1_t8654_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8654_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8654_0_0_0/* byval_arg */
	, &IList_1_t8654_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8654_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6711_il2cpp_TypeInfo;

// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo IEnumerator_1_get_Current_m44913_MethodInfo;
static PropertyInfo IEnumerator_1_t6711____Current_PropertyInfo = 
{
	&IEnumerator_1_t6711_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44913_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6711_PropertyInfos[] =
{
	&IEnumerator_1_t6711____Current_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t1891_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1891 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44913_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44913_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6711_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1891_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1891/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44913_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6711_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44913_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6711_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6711_0_0_0;
extern Il2CppType IEnumerator_1_t6711_1_0_0;
struct IEnumerator_1_t6711;
extern Il2CppGenericClass IEnumerator_1_t6711_GenericClass;
TypeInfo IEnumerator_1_t6711_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6711_MethodInfos/* methods */
	, IEnumerator_1_t6711_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6711_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6711_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6711_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6711_0_0_0/* byval_arg */
	, &IEnumerator_1_t6711_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6711_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_591.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4755_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_591MethodDeclarations.h"

extern TypeInfo EnumeratorMode_t1891_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26008_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEnumeratorMode_t1891_m34584_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/EnumeratorMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/EnumeratorMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEnumeratorMode_t1891_m34584 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26004_MethodInfo;
 void InternalEnumerator_1__ctor_m26004 (InternalEnumerator_1_t4755 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005 (InternalEnumerator_1_t4755 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26008(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26008_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EnumeratorMode_t1891_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26006_MethodInfo;
 void InternalEnumerator_1_Dispose_m26006 (InternalEnumerator_1_t4755 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26007_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26007 (InternalEnumerator_1_t4755 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26008 (InternalEnumerator_1_t4755 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisEnumeratorMode_t1891_m34584(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEnumeratorMode_t1891_m34584_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4755____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4755, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4755____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4755, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4755_FieldInfos[] =
{
	&InternalEnumerator_1_t4755____array_0_FieldInfo,
	&InternalEnumerator_1_t4755____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4755____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4755_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4755____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4755_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26008_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4755_PropertyInfos[] =
{
	&InternalEnumerator_1_t4755____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4755____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4755_InternalEnumerator_1__ctor_m26004_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26004_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26004_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26004/* method */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4755_InternalEnumerator_1__ctor_m26004_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26004_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005/* method */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26006_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26006_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26006/* method */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26006_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26007_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26007_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26007/* method */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26007_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1891_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1891 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26008_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26008_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26008/* method */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1891_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1891/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26008_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4755_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26004_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005_MethodInfo,
	&InternalEnumerator_1_Dispose_m26006_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26007_MethodInfo,
	&InternalEnumerator_1_get_Current_m26008_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4755_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26005_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26007_MethodInfo,
	&InternalEnumerator_1_Dispose_m26006_MethodInfo,
	&InternalEnumerator_1_get_Current_m26008_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4755_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6711_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4755_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6711_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4755_0_0_0;
extern Il2CppType InternalEnumerator_1_t4755_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4755_GenericClass;
TypeInfo InternalEnumerator_1_t4755_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4755_MethodInfos/* methods */
	, InternalEnumerator_1_t4755_PropertyInfos/* properties */
	, InternalEnumerator_1_t4755_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4755_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4755_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4755_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4755_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4755_1_0_0/* this_arg */
	, InternalEnumerator_1_t4755_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4755_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4755)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8656_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo ICollection_1_get_Count_m44914_MethodInfo;
static PropertyInfo ICollection_1_t8656____Count_PropertyInfo = 
{
	&ICollection_1_t8656_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44914_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44915_MethodInfo;
static PropertyInfo ICollection_1_t8656____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8656_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44915_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8656_PropertyInfos[] =
{
	&ICollection_1_t8656____Count_PropertyInfo,
	&ICollection_1_t8656____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44914_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_Count()
MethodInfo ICollection_1_get_Count_m44914_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44914_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44915_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44915_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44915_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1891_0_0_0;
extern Il2CppType EnumeratorMode_t1891_0_0_0;
static ParameterInfo ICollection_1_t8656_ICollection_1_Add_m44916_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1891_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44916_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Add(T)
MethodInfo ICollection_1_Add_m44916_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8656_ICollection_1_Add_m44916_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44916_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44917_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Clear()
MethodInfo ICollection_1_Clear_m44917_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44917_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1891_0_0_0;
static ParameterInfo ICollection_1_t8656_ICollection_1_Contains_m44918_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1891_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44918_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Contains(T)
MethodInfo ICollection_1_Contains_m44918_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8656_ICollection_1_Contains_m44918_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44918_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorModeU5BU5D_t5031_0_0_0;
extern Il2CppType EnumeratorModeU5BU5D_t5031_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8656_ICollection_1_CopyTo_m44919_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorModeU5BU5D_t5031_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44919_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44919_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8656_ICollection_1_CopyTo_m44919_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44919_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1891_0_0_0;
static ParameterInfo ICollection_1_t8656_ICollection_1_Remove_m44920_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1891_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44920_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Remove(T)
MethodInfo ICollection_1_Remove_m44920_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8656_ICollection_1_Remove_m44920_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44920_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8656_MethodInfos[] =
{
	&ICollection_1_get_Count_m44914_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44915_MethodInfo,
	&ICollection_1_Add_m44916_MethodInfo,
	&ICollection_1_Clear_m44917_MethodInfo,
	&ICollection_1_Contains_m44918_MethodInfo,
	&ICollection_1_CopyTo_m44919_MethodInfo,
	&ICollection_1_Remove_m44920_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8658_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8656_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8658_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8656_0_0_0;
extern Il2CppType ICollection_1_t8656_1_0_0;
struct ICollection_1_t8656;
extern Il2CppGenericClass ICollection_1_t8656_GenericClass;
TypeInfo ICollection_1_t8656_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8656_MethodInfos/* methods */
	, ICollection_1_t8656_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8656_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8656_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8656_0_0_0/* byval_arg */
	, &ICollection_1_t8656_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8656_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>
extern Il2CppType IEnumerator_1_t6711_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44921_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44921_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8658_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6711_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44921_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8658_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44921_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8658_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8658_0_0_0;
extern Il2CppType IEnumerable_1_t8658_1_0_0;
struct IEnumerable_1_t8658;
extern Il2CppGenericClass IEnumerable_1_t8658_GenericClass;
TypeInfo IEnumerable_1_t8658_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8658_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8658_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8658_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8658_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8658_0_0_0/* byval_arg */
	, &IEnumerable_1_t8658_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8658_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8657_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo IList_1_get_Item_m44922_MethodInfo;
extern MethodInfo IList_1_set_Item_m44923_MethodInfo;
static PropertyInfo IList_1_t8657____Item_PropertyInfo = 
{
	&IList_1_t8657_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44922_MethodInfo/* get */
	, &IList_1_set_Item_m44923_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8657_PropertyInfos[] =
{
	&IList_1_t8657____Item_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t1891_0_0_0;
static ParameterInfo IList_1_t8657_IList_1_IndexOf_m44924_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1891_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44924_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44924_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8657_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8657_IList_1_IndexOf_m44924_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44924_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EnumeratorMode_t1891_0_0_0;
static ParameterInfo IList_1_t8657_IList_1_Insert_m44925_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1891_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44925_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44925_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8657_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8657_IList_1_Insert_m44925_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44925_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8657_IList_1_RemoveAt_m44926_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44926_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44926_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8657_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8657_IList_1_RemoveAt_m44926_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44926_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8657_IList_1_get_Item_m44922_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType EnumeratorMode_t1891_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1891_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44922_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44922_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8657_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1891_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1891_Int32_t73/* invoker_method */
	, IList_1_t8657_IList_1_get_Item_m44922_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44922_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EnumeratorMode_t1891_0_0_0;
static ParameterInfo IList_1_t8657_IList_1_set_Item_m44923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1891_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44923_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44923_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8657_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8657_IList_1_set_Item_m44923_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44923_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8657_MethodInfos[] =
{
	&IList_1_IndexOf_m44924_MethodInfo,
	&IList_1_Insert_m44925_MethodInfo,
	&IList_1_RemoveAt_m44926_MethodInfo,
	&IList_1_get_Item_m44922_MethodInfo,
	&IList_1_set_Item_m44923_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8657_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8656_il2cpp_TypeInfo,
	&IEnumerable_1_t8658_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8657_0_0_0;
extern Il2CppType IList_1_t8657_1_0_0;
struct IList_1_t8657;
extern Il2CppGenericClass IList_1_t8657_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8657_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8657_MethodInfos/* methods */
	, IList_1_t8657_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8657_il2cpp_TypeInfo/* element_class */
	, IList_1_t8657_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8657_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8657_0_0_0/* byval_arg */
	, &IList_1_t8657_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8657_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6713_il2cpp_TypeInfo;

// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>
extern MethodInfo IEnumerator_1_get_Current_m44927_MethodInfo;
static PropertyInfo IEnumerator_1_t6713____Current_PropertyInfo = 
{
	&IEnumerator_1_t6713_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44927_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6713_PropertyInfos[] =
{
	&IEnumerator_1_t6713____Current_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t1896_0_0_0;
extern void* RuntimeInvoker_Slot_t1896 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44927_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44927_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6713_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1896_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1896/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44927_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6713_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44927_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6713_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6713_0_0_0;
extern Il2CppType IEnumerator_1_t6713_1_0_0;
struct IEnumerator_1_t6713;
extern Il2CppGenericClass IEnumerator_1_t6713_GenericClass;
TypeInfo IEnumerator_1_t6713_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6713_MethodInfos/* methods */
	, IEnumerator_1_t6713_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6713_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6713_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6713_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6713_0_0_0/* byval_arg */
	, &IEnumerator_1_t6713_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6713_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_592.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4756_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_592MethodDeclarations.h"

extern TypeInfo Slot_t1896_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26013_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t1896_m34595_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
 Slot_t1896  Array_InternalArray__get_Item_TisSlot_t1896_m34595 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26009_MethodInfo;
 void InternalEnumerator_1__ctor_m26009 (InternalEnumerator_1_t4756 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010 (InternalEnumerator_1_t4756 * __this, MethodInfo* method){
	{
		Slot_t1896  L_0 = InternalEnumerator_1_get_Current_m26013(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26013_MethodInfo);
		Slot_t1896  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Slot_t1896_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26011_MethodInfo;
 void InternalEnumerator_1_Dispose_m26011 (InternalEnumerator_1_t4756 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26012_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26012 (InternalEnumerator_1_t4756 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
 Slot_t1896  InternalEnumerator_1_get_Current_m26013 (InternalEnumerator_1_t4756 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		Slot_t1896  L_8 = Array_InternalArray__get_Item_TisSlot_t1896_m34595(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSlot_t1896_m34595_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4756____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4756, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4756____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4756, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4756_FieldInfos[] =
{
	&InternalEnumerator_1_t4756____array_0_FieldInfo,
	&InternalEnumerator_1_t4756____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4756____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4756_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4756____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4756_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26013_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4756_PropertyInfos[] =
{
	&InternalEnumerator_1_t4756____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4756____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4756_InternalEnumerator_1__ctor_m26009_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26009_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26009_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26009/* method */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4756_InternalEnumerator_1__ctor_m26009_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26009_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010/* method */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26011_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26011_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26011/* method */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26011_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26012_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26012_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26012/* method */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26012_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1896_0_0_0;
extern void* RuntimeInvoker_Slot_t1896 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26013_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26013_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26013/* method */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1896_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1896/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26013_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4756_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26009_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010_MethodInfo,
	&InternalEnumerator_1_Dispose_m26011_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26012_MethodInfo,
	&InternalEnumerator_1_get_Current_m26013_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4756_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26010_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26012_MethodInfo,
	&InternalEnumerator_1_Dispose_m26011_MethodInfo,
	&InternalEnumerator_1_get_Current_m26013_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4756_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6713_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4756_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6713_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4756_0_0_0;
extern Il2CppType InternalEnumerator_1_t4756_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4756_GenericClass;
TypeInfo InternalEnumerator_1_t4756_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4756_MethodInfos/* methods */
	, InternalEnumerator_1_t4756_PropertyInfos/* properties */
	, InternalEnumerator_1_t4756_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4756_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4756_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4756_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4756_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4756_1_0_0/* this_arg */
	, InternalEnumerator_1_t4756_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4756_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4756)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8659_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>
extern MethodInfo ICollection_1_get_Count_m44928_MethodInfo;
static PropertyInfo ICollection_1_t8659____Count_PropertyInfo = 
{
	&ICollection_1_t8659_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44928_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44929_MethodInfo;
static PropertyInfo ICollection_1_t8659____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8659_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44929_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8659_PropertyInfos[] =
{
	&ICollection_1_t8659____Count_PropertyInfo,
	&ICollection_1_t8659____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44928_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_Count()
MethodInfo ICollection_1_get_Count_m44928_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44928_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44929_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44929_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44929_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1896_0_0_0;
extern Il2CppType Slot_t1896_0_0_0;
static ParameterInfo ICollection_1_t8659_ICollection_1_Add_m44930_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1896_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Slot_t1896 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44930_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Add(T)
MethodInfo ICollection_1_Add_m44930_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Slot_t1896/* invoker_method */
	, ICollection_1_t8659_ICollection_1_Add_m44930_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44930_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44931_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Clear()
MethodInfo ICollection_1_Clear_m44931_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44931_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1896_0_0_0;
static ParameterInfo ICollection_1_t8659_ICollection_1_Contains_m44932_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1896_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Slot_t1896 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44932_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Contains(T)
MethodInfo ICollection_1_Contains_m44932_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Slot_t1896/* invoker_method */
	, ICollection_1_t8659_ICollection_1_Contains_m44932_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44932_GenericMethod/* genericMethod */

};
extern Il2CppType SlotU5BU5D_t1899_0_0_0;
extern Il2CppType SlotU5BU5D_t1899_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8659_ICollection_1_CopyTo_m44933_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SlotU5BU5D_t1899_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44933_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44933_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8659_ICollection_1_CopyTo_m44933_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44933_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1896_0_0_0;
static ParameterInfo ICollection_1_t8659_ICollection_1_Remove_m44934_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1896_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Slot_t1896 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44934_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Remove(T)
MethodInfo ICollection_1_Remove_m44934_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Slot_t1896/* invoker_method */
	, ICollection_1_t8659_ICollection_1_Remove_m44934_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44934_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8659_MethodInfos[] =
{
	&ICollection_1_get_Count_m44928_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44929_MethodInfo,
	&ICollection_1_Add_m44930_MethodInfo,
	&ICollection_1_Clear_m44931_MethodInfo,
	&ICollection_1_Contains_m44932_MethodInfo,
	&ICollection_1_CopyTo_m44933_MethodInfo,
	&ICollection_1_Remove_m44934_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8661_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8659_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8661_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8659_0_0_0;
extern Il2CppType ICollection_1_t8659_1_0_0;
struct ICollection_1_t8659;
extern Il2CppGenericClass ICollection_1_t8659_GenericClass;
TypeInfo ICollection_1_t8659_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8659_MethodInfos/* methods */
	, ICollection_1_t8659_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8659_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8659_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8659_0_0_0/* byval_arg */
	, &ICollection_1_t8659_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8659_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>
extern Il2CppType IEnumerator_1_t6713_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44935_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44935_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8661_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6713_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44935_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8661_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44935_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8661_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8661_0_0_0;
extern Il2CppType IEnumerable_1_t8661_1_0_0;
struct IEnumerable_1_t8661;
extern Il2CppGenericClass IEnumerable_1_t8661_GenericClass;
TypeInfo IEnumerable_1_t8661_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8661_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8661_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8661_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8661_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8661_0_0_0/* byval_arg */
	, &IEnumerable_1_t8661_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8661_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8660_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>
extern MethodInfo IList_1_get_Item_m44936_MethodInfo;
extern MethodInfo IList_1_set_Item_m44937_MethodInfo;
static PropertyInfo IList_1_t8660____Item_PropertyInfo = 
{
	&IList_1_t8660_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44936_MethodInfo/* get */
	, &IList_1_set_Item_m44937_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8660_PropertyInfos[] =
{
	&IList_1_t8660____Item_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t1896_0_0_0;
static ParameterInfo IList_1_t8660_IList_1_IndexOf_m44938_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1896_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Slot_t1896 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44938_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44938_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8660_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Slot_t1896/* invoker_method */
	, IList_1_t8660_IList_1_IndexOf_m44938_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44938_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Slot_t1896_0_0_0;
static ParameterInfo IList_1_t8660_IList_1_Insert_m44939_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t1896_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Slot_t1896 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44939_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44939_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8660_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Slot_t1896/* invoker_method */
	, IList_1_t8660_IList_1_Insert_m44939_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44939_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8660_IList_1_RemoveAt_m44940_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44940_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44940_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8660_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8660_IList_1_RemoveAt_m44940_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44940_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8660_IList_1_get_Item_m44936_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Slot_t1896_0_0_0;
extern void* RuntimeInvoker_Slot_t1896_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44936_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44936_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8660_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1896_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1896_Int32_t73/* invoker_method */
	, IList_1_t8660_IList_1_get_Item_m44936_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44936_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Slot_t1896_0_0_0;
static ParameterInfo IList_1_t8660_IList_1_set_Item_m44937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t1896_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Slot_t1896 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44937_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44937_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8660_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Slot_t1896/* invoker_method */
	, IList_1_t8660_IList_1_set_Item_m44937_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44937_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8660_MethodInfos[] =
{
	&IList_1_IndexOf_m44938_MethodInfo,
	&IList_1_Insert_m44939_MethodInfo,
	&IList_1_RemoveAt_m44940_MethodInfo,
	&IList_1_get_Item_m44936_MethodInfo,
	&IList_1_set_Item_m44937_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8660_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8659_il2cpp_TypeInfo,
	&IEnumerable_1_t8661_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8660_0_0_0;
extern Il2CppType IList_1_t8660_1_0_0;
struct IList_1_t8660;
extern Il2CppGenericClass IList_1_t8660_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8660_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8660_MethodInfos/* methods */
	, IList_1_t8660_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8660_il2cpp_TypeInfo/* element_class */
	, IList_1_t8660_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8660_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8660_0_0_0/* byval_arg */
	, &IList_1_t8660_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8660_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6715_il2cpp_TypeInfo;

// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo IEnumerator_1_get_Current_m44941_MethodInfo;
static PropertyInfo IEnumerator_1_t6715____Current_PropertyInfo = 
{
	&IEnumerator_1_t6715_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44941_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6715_PropertyInfos[] =
{
	&IEnumerator_1_t6715____Current_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t1897_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1897 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44941_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44941_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6715_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1897_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1897/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44941_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6715_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44941_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6715_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6715_0_0_0;
extern Il2CppType IEnumerator_1_t6715_1_0_0;
struct IEnumerator_1_t6715;
extern Il2CppGenericClass IEnumerator_1_t6715_GenericClass;
TypeInfo IEnumerator_1_t6715_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6715_MethodInfos/* methods */
	, IEnumerator_1_t6715_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6715_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6715_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6715_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6715_0_0_0/* byval_arg */
	, &IEnumerator_1_t6715_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6715_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_593.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4757_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_593MethodDeclarations.h"

extern TypeInfo EnumeratorMode_t1897_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26018_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEnumeratorMode_t1897_m34606_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/EnumeratorMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/EnumeratorMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEnumeratorMode_t1897_m34606 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26014_MethodInfo;
 void InternalEnumerator_1__ctor_m26014 (InternalEnumerator_1_t4757 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015 (InternalEnumerator_1_t4757 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26018(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26018_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EnumeratorMode_t1897_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26016_MethodInfo;
 void InternalEnumerator_1_Dispose_m26016 (InternalEnumerator_1_t4757 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26017_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26017 (InternalEnumerator_1_t4757 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26018 (InternalEnumerator_1_t4757 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisEnumeratorMode_t1897_m34606(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEnumeratorMode_t1897_m34606_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4757____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4757, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4757____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4757, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4757_FieldInfos[] =
{
	&InternalEnumerator_1_t4757____array_0_FieldInfo,
	&InternalEnumerator_1_t4757____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4757____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4757_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4757____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4757_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26018_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4757_PropertyInfos[] =
{
	&InternalEnumerator_1_t4757____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4757____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4757_InternalEnumerator_1__ctor_m26014_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26014_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26014_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26014/* method */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4757_InternalEnumerator_1__ctor_m26014_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26014_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015/* method */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26016_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26016_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26016/* method */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26016_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26017_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26017_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26017/* method */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26017_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1897_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1897 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26018_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26018_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26018/* method */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1897_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1897/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26018_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4757_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26014_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo,
	&InternalEnumerator_1_Dispose_m26016_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26017_MethodInfo,
	&InternalEnumerator_1_get_Current_m26018_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4757_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26015_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26017_MethodInfo,
	&InternalEnumerator_1_Dispose_m26016_MethodInfo,
	&InternalEnumerator_1_get_Current_m26018_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4757_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6715_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4757_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6715_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4757_0_0_0;
extern Il2CppType InternalEnumerator_1_t4757_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4757_GenericClass;
TypeInfo InternalEnumerator_1_t4757_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4757_MethodInfos/* methods */
	, InternalEnumerator_1_t4757_PropertyInfos/* properties */
	, InternalEnumerator_1_t4757_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4757_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4757_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4757_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4757_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4757_1_0_0/* this_arg */
	, InternalEnumerator_1_t4757_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4757_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4757)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8662_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo ICollection_1_get_Count_m44942_MethodInfo;
static PropertyInfo ICollection_1_t8662____Count_PropertyInfo = 
{
	&ICollection_1_t8662_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44942_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44943_MethodInfo;
static PropertyInfo ICollection_1_t8662____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8662_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44943_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8662_PropertyInfos[] =
{
	&ICollection_1_t8662____Count_PropertyInfo,
	&ICollection_1_t8662____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44942_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_Count()
MethodInfo ICollection_1_get_Count_m44942_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44942_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44943_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44943_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44943_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1897_0_0_0;
extern Il2CppType EnumeratorMode_t1897_0_0_0;
static ParameterInfo ICollection_1_t8662_ICollection_1_Add_m44944_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1897_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44944_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Add(T)
MethodInfo ICollection_1_Add_m44944_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8662_ICollection_1_Add_m44944_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44944_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44945_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Clear()
MethodInfo ICollection_1_Clear_m44945_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44945_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1897_0_0_0;
static ParameterInfo ICollection_1_t8662_ICollection_1_Contains_m44946_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1897_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44946_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Contains(T)
MethodInfo ICollection_1_Contains_m44946_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8662_ICollection_1_Contains_m44946_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44946_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorModeU5BU5D_t5032_0_0_0;
extern Il2CppType EnumeratorModeU5BU5D_t5032_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8662_ICollection_1_CopyTo_m44947_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorModeU5BU5D_t5032_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44947_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44947_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8662_ICollection_1_CopyTo_m44947_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44947_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1897_0_0_0;
static ParameterInfo ICollection_1_t8662_ICollection_1_Remove_m44948_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1897_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44948_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Remove(T)
MethodInfo ICollection_1_Remove_m44948_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8662_ICollection_1_Remove_m44948_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44948_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8662_MethodInfos[] =
{
	&ICollection_1_get_Count_m44942_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44943_MethodInfo,
	&ICollection_1_Add_m44944_MethodInfo,
	&ICollection_1_Clear_m44945_MethodInfo,
	&ICollection_1_Contains_m44946_MethodInfo,
	&ICollection_1_CopyTo_m44947_MethodInfo,
	&ICollection_1_Remove_m44948_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8664_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8662_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8664_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8662_0_0_0;
extern Il2CppType ICollection_1_t8662_1_0_0;
struct ICollection_1_t8662;
extern Il2CppGenericClass ICollection_1_t8662_GenericClass;
TypeInfo ICollection_1_t8662_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8662_MethodInfos/* methods */
	, ICollection_1_t8662_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8662_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8662_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8662_0_0_0/* byval_arg */
	, &ICollection_1_t8662_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8662_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>
extern Il2CppType IEnumerator_1_t6715_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44949_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44949_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8664_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6715_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44949_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8664_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44949_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8664_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8664_0_0_0;
extern Il2CppType IEnumerable_1_t8664_1_0_0;
struct IEnumerable_1_t8664;
extern Il2CppGenericClass IEnumerable_1_t8664_GenericClass;
TypeInfo IEnumerable_1_t8664_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8664_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8664_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8664_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8664_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8664_0_0_0/* byval_arg */
	, &IEnumerable_1_t8664_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8664_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8663_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo IList_1_get_Item_m44950_MethodInfo;
extern MethodInfo IList_1_set_Item_m44951_MethodInfo;
static PropertyInfo IList_1_t8663____Item_PropertyInfo = 
{
	&IList_1_t8663_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44950_MethodInfo/* get */
	, &IList_1_set_Item_m44951_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8663_PropertyInfos[] =
{
	&IList_1_t8663____Item_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t1897_0_0_0;
static ParameterInfo IList_1_t8663_IList_1_IndexOf_m44952_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1897_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44952_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44952_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8663_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8663_IList_1_IndexOf_m44952_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44952_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EnumeratorMode_t1897_0_0_0;
static ParameterInfo IList_1_t8663_IList_1_Insert_m44953_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1897_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44953_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44953_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8663_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8663_IList_1_Insert_m44953_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44953_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8663_IList_1_RemoveAt_m44954_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44954_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44954_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8663_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8663_IList_1_RemoveAt_m44954_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44954_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8663_IList_1_get_Item_m44950_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType EnumeratorMode_t1897_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1897_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44950_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44950_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8663_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1897_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1897_Int32_t73/* invoker_method */
	, IList_1_t8663_IList_1_get_Item_m44950_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44950_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EnumeratorMode_t1897_0_0_0;
static ParameterInfo IList_1_t8663_IList_1_set_Item_m44951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1897_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44951_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44951_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8663_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8663_IList_1_set_Item_m44951_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44951_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8663_MethodInfos[] =
{
	&IList_1_IndexOf_m44952_MethodInfo,
	&IList_1_Insert_m44953_MethodInfo,
	&IList_1_RemoveAt_m44954_MethodInfo,
	&IList_1_get_Item_m44950_MethodInfo,
	&IList_1_set_Item_m44951_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8663_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8662_il2cpp_TypeInfo,
	&IEnumerable_1_t8664_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8663_0_0_0;
extern Il2CppType IList_1_t8663_1_0_0;
struct IList_1_t8663;
extern Il2CppGenericClass IList_1_t8663_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8663_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8663_MethodInfos/* methods */
	, IList_1_t8663_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8663_il2cpp_TypeInfo/* element_class */
	, IList_1_t8663_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8663_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8663_0_0_0/* byval_arg */
	, &IList_1_t8663_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8663_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6717_il2cpp_TypeInfo;

// System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorit.h"


// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo IEnumerator_1_get_Current_m44955_MethodInfo;
static PropertyInfo IEnumerator_1_t6717____Current_PropertyInfo = 
{
	&IEnumerator_1_t6717_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44955_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6717_PropertyInfos[] =
{
	&IEnumerator_1_t6717____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
extern void* RuntimeInvoker_AssemblyHashAlgorithm_t1901 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44955_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44955_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6717_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyHashAlgorithm_t1901_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyHashAlgorithm_t1901/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44955_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6717_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44955_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6717_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6717_0_0_0;
extern Il2CppType IEnumerator_1_t6717_1_0_0;
struct IEnumerator_1_t6717;
extern Il2CppGenericClass IEnumerator_1_t6717_GenericClass;
TypeInfo IEnumerator_1_t6717_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6717_MethodInfos/* methods */
	, IEnumerator_1_t6717_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6717_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6717_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6717_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6717_0_0_0/* byval_arg */
	, &IEnumerator_1_t6717_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6717_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_594.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4758_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_594MethodDeclarations.h"

extern TypeInfo AssemblyHashAlgorithm_t1901_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26023_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t1901_m34617_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyHashAlgorithm>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyHashAlgorithm>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t1901_m34617 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26019_MethodInfo;
 void InternalEnumerator_1__ctor_m26019 (InternalEnumerator_1_t4758 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020 (InternalEnumerator_1_t4758 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26023(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26023_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t1901_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26021_MethodInfo;
 void InternalEnumerator_1_Dispose_m26021 (InternalEnumerator_1_t4758 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26022_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26022 (InternalEnumerator_1_t4758 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26023 (InternalEnumerator_1_t4758 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t1901_m34617(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t1901_m34617_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4758____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4758, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4758____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4758, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4758_FieldInfos[] =
{
	&InternalEnumerator_1_t4758____array_0_FieldInfo,
	&InternalEnumerator_1_t4758____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4758____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4758_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4758____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4758_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26023_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4758_PropertyInfos[] =
{
	&InternalEnumerator_1_t4758____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4758____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4758_InternalEnumerator_1__ctor_m26019_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26019_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26019_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26019/* method */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4758_InternalEnumerator_1__ctor_m26019_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26019_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020/* method */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26021_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26021_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26021/* method */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26021_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26022_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26022_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26022/* method */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26022_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
extern void* RuntimeInvoker_AssemblyHashAlgorithm_t1901 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26023_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26023_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26023/* method */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyHashAlgorithm_t1901_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyHashAlgorithm_t1901/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26023_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4758_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26019_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020_MethodInfo,
	&InternalEnumerator_1_Dispose_m26021_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26022_MethodInfo,
	&InternalEnumerator_1_get_Current_m26023_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4758_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26020_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26022_MethodInfo,
	&InternalEnumerator_1_Dispose_m26021_MethodInfo,
	&InternalEnumerator_1_get_Current_m26023_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4758_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6717_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4758_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6717_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4758_0_0_0;
extern Il2CppType InternalEnumerator_1_t4758_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4758_GenericClass;
TypeInfo InternalEnumerator_1_t4758_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4758_MethodInfos/* methods */
	, InternalEnumerator_1_t4758_PropertyInfos/* properties */
	, InternalEnumerator_1_t4758_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4758_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4758_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4758_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4758_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4758_1_0_0/* this_arg */
	, InternalEnumerator_1_t4758_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4758_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4758)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8665_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo ICollection_1_get_Count_m44956_MethodInfo;
static PropertyInfo ICollection_1_t8665____Count_PropertyInfo = 
{
	&ICollection_1_t8665_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44956_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44957_MethodInfo;
static PropertyInfo ICollection_1_t8665____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8665_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44957_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8665_PropertyInfos[] =
{
	&ICollection_1_t8665____Count_PropertyInfo,
	&ICollection_1_t8665____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44956_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Count()
MethodInfo ICollection_1_get_Count_m44956_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44956_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44957_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44957_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44957_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
static ParameterInfo ICollection_1_t8665_ICollection_1_Add_m44958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1901_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44958_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Add(T)
MethodInfo ICollection_1_Add_m44958_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8665_ICollection_1_Add_m44958_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44958_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44959_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Clear()
MethodInfo ICollection_1_Clear_m44959_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44959_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
static ParameterInfo ICollection_1_t8665_ICollection_1_Contains_m44960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1901_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44960_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Contains(T)
MethodInfo ICollection_1_Contains_m44960_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8665_ICollection_1_Contains_m44960_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44960_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithmU5BU5D_t5033_0_0_0;
extern Il2CppType AssemblyHashAlgorithmU5BU5D_t5033_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8665_ICollection_1_CopyTo_m44961_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithmU5BU5D_t5033_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44961_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44961_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8665_ICollection_1_CopyTo_m44961_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44961_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
static ParameterInfo ICollection_1_t8665_ICollection_1_Remove_m44962_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1901_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44962_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Remove(T)
MethodInfo ICollection_1_Remove_m44962_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8665_ICollection_1_Remove_m44962_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44962_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8665_MethodInfos[] =
{
	&ICollection_1_get_Count_m44956_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44957_MethodInfo,
	&ICollection_1_Add_m44958_MethodInfo,
	&ICollection_1_Clear_m44959_MethodInfo,
	&ICollection_1_Contains_m44960_MethodInfo,
	&ICollection_1_CopyTo_m44961_MethodInfo,
	&ICollection_1_Remove_m44962_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8667_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8665_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8667_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8665_0_0_0;
extern Il2CppType ICollection_1_t8665_1_0_0;
struct ICollection_1_t8665;
extern Il2CppGenericClass ICollection_1_t8665_GenericClass;
TypeInfo ICollection_1_t8665_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8665_MethodInfos/* methods */
	, ICollection_1_t8665_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8665_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8665_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8665_0_0_0/* byval_arg */
	, &ICollection_1_t8665_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8665_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern Il2CppType IEnumerator_1_t6717_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44963_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44963_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8667_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6717_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44963_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8667_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44963_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8667_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8667_0_0_0;
extern Il2CppType IEnumerable_1_t8667_1_0_0;
struct IEnumerable_1_t8667;
extern Il2CppGenericClass IEnumerable_1_t8667_GenericClass;
TypeInfo IEnumerable_1_t8667_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8667_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8667_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8667_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8667_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8667_0_0_0/* byval_arg */
	, &IEnumerable_1_t8667_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8667_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8666_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo IList_1_get_Item_m44964_MethodInfo;
extern MethodInfo IList_1_set_Item_m44965_MethodInfo;
static PropertyInfo IList_1_t8666____Item_PropertyInfo = 
{
	&IList_1_t8666_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44964_MethodInfo/* get */
	, &IList_1_set_Item_m44965_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8666_PropertyInfos[] =
{
	&IList_1_t8666____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
static ParameterInfo IList_1_t8666_IList_1_IndexOf_m44966_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1901_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44966_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44966_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8666_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8666_IList_1_IndexOf_m44966_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44966_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
static ParameterInfo IList_1_t8666_IList_1_Insert_m44967_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1901_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44967_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44967_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8666_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8666_IList_1_Insert_m44967_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44967_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8666_IList_1_RemoveAt_m44968_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44968_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44968_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8666_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8666_IList_1_RemoveAt_m44968_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44968_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8666_IList_1_get_Item_m44964_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
extern void* RuntimeInvoker_AssemblyHashAlgorithm_t1901_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44964_GenericMethod;
// T System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44964_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8666_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyHashAlgorithm_t1901_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyHashAlgorithm_t1901_Int32_t73/* invoker_method */
	, IList_1_t8666_IList_1_get_Item_m44964_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44964_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t1901_0_0_0;
static ParameterInfo IList_1_t8666_IList_1_set_Item_m44965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1901_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44965_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44965_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8666_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8666_IList_1_set_Item_m44965_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44965_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8666_MethodInfos[] =
{
	&IList_1_IndexOf_m44966_MethodInfo,
	&IList_1_Insert_m44967_MethodInfo,
	&IList_1_RemoveAt_m44968_MethodInfo,
	&IList_1_get_Item_m44964_MethodInfo,
	&IList_1_set_Item_m44965_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8666_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8665_il2cpp_TypeInfo,
	&IEnumerable_1_t8667_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8666_0_0_0;
extern Il2CppType IList_1_t8666_1_0_0;
struct IList_1_t8666;
extern Il2CppGenericClass IList_1_t8666_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8666_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8666_MethodInfos/* methods */
	, IList_1_t8666_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8666_il2cpp_TypeInfo/* element_class */
	, IList_1_t8666_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8666_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8666_0_0_0/* byval_arg */
	, &IList_1_t8666_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8666_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6719_il2cpp_TypeInfo;

// System.Configuration.Assemblies.AssemblyVersionCompatibility
#include "mscorlib_System_Configuration_Assemblies_AssemblyVersionComp.h"


// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo IEnumerator_1_get_Current_m44969_MethodInfo;
static PropertyInfo IEnumerator_1_t6719____Current_PropertyInfo = 
{
	&IEnumerator_1_t6719_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44969_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6719_PropertyInfos[] =
{
	&IEnumerator_1_t6719____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
extern void* RuntimeInvoker_AssemblyVersionCompatibility_t1902 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44969_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44969_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6719_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionCompatibility_t1902_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyVersionCompatibility_t1902/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44969_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6719_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44969_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6719_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6719_0_0_0;
extern Il2CppType IEnumerator_1_t6719_1_0_0;
struct IEnumerator_1_t6719;
extern Il2CppGenericClass IEnumerator_1_t6719_GenericClass;
TypeInfo IEnumerator_1_t6719_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6719_MethodInfos/* methods */
	, IEnumerator_1_t6719_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6719_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6719_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6719_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6719_0_0_0/* byval_arg */
	, &IEnumerator_1_t6719_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6719_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_595.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4759_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_595MethodDeclarations.h"

extern TypeInfo AssemblyVersionCompatibility_t1902_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26028_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyVersionCompatibility_t1902_m34628_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyVersionCompatibility>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyVersionCompatibility>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAssemblyVersionCompatibility_t1902_m34628 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26024_MethodInfo;
 void InternalEnumerator_1__ctor_m26024 (InternalEnumerator_1_t4759 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025 (InternalEnumerator_1_t4759 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26028(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26028_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AssemblyVersionCompatibility_t1902_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26026_MethodInfo;
 void InternalEnumerator_1_Dispose_m26026 (InternalEnumerator_1_t4759 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26027_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26027 (InternalEnumerator_1_t4759 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26028 (InternalEnumerator_1_t4759 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisAssemblyVersionCompatibility_t1902_m34628(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAssemblyVersionCompatibility_t1902_m34628_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4759____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4759, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4759____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4759, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4759_FieldInfos[] =
{
	&InternalEnumerator_1_t4759____array_0_FieldInfo,
	&InternalEnumerator_1_t4759____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4759____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4759_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4759____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4759_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26028_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4759_PropertyInfos[] =
{
	&InternalEnumerator_1_t4759____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4759____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4759_InternalEnumerator_1__ctor_m26024_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26024_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26024_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26024/* method */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4759_InternalEnumerator_1__ctor_m26024_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26024_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025/* method */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26026_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26026_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26026/* method */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26026_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26027_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26027_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26027/* method */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26027_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
extern void* RuntimeInvoker_AssemblyVersionCompatibility_t1902 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26028_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26028_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26028/* method */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionCompatibility_t1902_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyVersionCompatibility_t1902/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26028_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4759_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26024_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025_MethodInfo,
	&InternalEnumerator_1_Dispose_m26026_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26027_MethodInfo,
	&InternalEnumerator_1_get_Current_m26028_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4759_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26025_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26027_MethodInfo,
	&InternalEnumerator_1_Dispose_m26026_MethodInfo,
	&InternalEnumerator_1_get_Current_m26028_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4759_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6719_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4759_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6719_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4759_0_0_0;
extern Il2CppType InternalEnumerator_1_t4759_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4759_GenericClass;
TypeInfo InternalEnumerator_1_t4759_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4759_MethodInfos/* methods */
	, InternalEnumerator_1_t4759_PropertyInfos/* properties */
	, InternalEnumerator_1_t4759_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4759_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4759_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4759_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4759_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4759_1_0_0/* this_arg */
	, InternalEnumerator_1_t4759_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4759_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4759)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8668_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo ICollection_1_get_Count_m44970_MethodInfo;
static PropertyInfo ICollection_1_t8668____Count_PropertyInfo = 
{
	&ICollection_1_t8668_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44970_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44971_MethodInfo;
static PropertyInfo ICollection_1_t8668____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8668_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44971_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8668_PropertyInfos[] =
{
	&ICollection_1_t8668____Count_PropertyInfo,
	&ICollection_1_t8668____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44970_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Count()
MethodInfo ICollection_1_get_Count_m44970_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44970_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44971_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44971_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44971_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
static ParameterInfo ICollection_1_t8668_ICollection_1_Add_m44972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t1902_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44972_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Add(T)
MethodInfo ICollection_1_Add_m44972_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8668_ICollection_1_Add_m44972_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44972_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44973_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Clear()
MethodInfo ICollection_1_Clear_m44973_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44973_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
static ParameterInfo ICollection_1_t8668_ICollection_1_Contains_m44974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t1902_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44974_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Contains(T)
MethodInfo ICollection_1_Contains_m44974_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8668_ICollection_1_Contains_m44974_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44974_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibilityU5BU5D_t5034_0_0_0;
extern Il2CppType AssemblyVersionCompatibilityU5BU5D_t5034_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8668_ICollection_1_CopyTo_m44975_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibilityU5BU5D_t5034_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44975_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44975_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8668_ICollection_1_CopyTo_m44975_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44975_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
static ParameterInfo ICollection_1_t8668_ICollection_1_Remove_m44976_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t1902_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44976_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Remove(T)
MethodInfo ICollection_1_Remove_m44976_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8668_ICollection_1_Remove_m44976_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44976_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8668_MethodInfos[] =
{
	&ICollection_1_get_Count_m44970_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44971_MethodInfo,
	&ICollection_1_Add_m44972_MethodInfo,
	&ICollection_1_Clear_m44973_MethodInfo,
	&ICollection_1_Contains_m44974_MethodInfo,
	&ICollection_1_CopyTo_m44975_MethodInfo,
	&ICollection_1_Remove_m44976_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8670_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8668_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8670_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8668_0_0_0;
extern Il2CppType ICollection_1_t8668_1_0_0;
struct ICollection_1_t8668;
extern Il2CppGenericClass ICollection_1_t8668_GenericClass;
TypeInfo ICollection_1_t8668_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8668_MethodInfos/* methods */
	, ICollection_1_t8668_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8668_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8668_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8668_0_0_0/* byval_arg */
	, &ICollection_1_t8668_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8668_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern Il2CppType IEnumerator_1_t6719_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44977_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44977_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8670_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6719_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44977_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8670_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44977_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8670_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8670_0_0_0;
extern Il2CppType IEnumerable_1_t8670_1_0_0;
struct IEnumerable_1_t8670;
extern Il2CppGenericClass IEnumerable_1_t8670_GenericClass;
TypeInfo IEnumerable_1_t8670_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8670_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8670_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8670_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8670_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8670_0_0_0/* byval_arg */
	, &IEnumerable_1_t8670_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8670_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8669_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>
extern MethodInfo IList_1_get_Item_m44978_MethodInfo;
extern MethodInfo IList_1_set_Item_m44979_MethodInfo;
static PropertyInfo IList_1_t8669____Item_PropertyInfo = 
{
	&IList_1_t8669_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44978_MethodInfo/* get */
	, &IList_1_set_Item_m44979_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8669_PropertyInfos[] =
{
	&IList_1_t8669____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
static ParameterInfo IList_1_t8669_IList_1_IndexOf_m44980_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t1902_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44980_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44980_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8669_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8669_IList_1_IndexOf_m44980_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44980_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
static ParameterInfo IList_1_t8669_IList_1_Insert_m44981_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t1902_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44981_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44981_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8669_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8669_IList_1_Insert_m44981_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44981_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8669_IList_1_RemoveAt_m44982_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44982_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44982_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8669_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8669_IList_1_RemoveAt_m44982_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44982_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8669_IList_1_get_Item_m44978_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
extern void* RuntimeInvoker_AssemblyVersionCompatibility_t1902_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44978_GenericMethod;
// T System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44978_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8669_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionCompatibility_t1902_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyVersionCompatibility_t1902_Int32_t73/* invoker_method */
	, IList_1_t8669_IList_1_get_Item_m44978_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44978_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t1902_0_0_0;
static ParameterInfo IList_1_t8669_IList_1_set_Item_m44979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionCompatibility_t1902_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44979_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Configuration.Assemblies.AssemblyVersionCompatibility>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44979_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8669_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8669_IList_1_set_Item_m44979_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44979_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8669_MethodInfos[] =
{
	&IList_1_IndexOf_m44980_MethodInfo,
	&IList_1_Insert_m44981_MethodInfo,
	&IList_1_RemoveAt_m44982_MethodInfo,
	&IList_1_get_Item_m44978_MethodInfo,
	&IList_1_set_Item_m44979_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8669_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8668_il2cpp_TypeInfo,
	&IEnumerable_1_t8670_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8669_0_0_0;
extern Il2CppType IList_1_t8669_1_0_0;
struct IList_1_t8669;
extern Il2CppGenericClass IList_1_t8669_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8669_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8669_MethodInfos/* methods */
	, IList_1_t8669_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8669_il2cpp_TypeInfo/* element_class */
	, IList_1_t8669_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8669_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8669_0_0_0/* byval_arg */
	, &IList_1_t8669_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8669_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6721_il2cpp_TypeInfo;

// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44983_MethodInfo;
static PropertyInfo IEnumerator_1_t6721____Current_PropertyInfo = 
{
	&IEnumerator_1_t6721_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44983_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6721_PropertyInfos[] =
{
	&IEnumerator_1_t6721____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggableAttribute_t466_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44983_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44983_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6721_il2cpp_TypeInfo/* declaring_type */
	, &DebuggableAttribute_t466_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44983_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6721_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44983_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6721_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6721_0_0_0;
extern Il2CppType IEnumerator_1_t6721_1_0_0;
struct IEnumerator_1_t6721;
extern Il2CppGenericClass IEnumerator_1_t6721_GenericClass;
TypeInfo IEnumerator_1_t6721_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6721_MethodInfos/* methods */
	, IEnumerator_1_t6721_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6721_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6721_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6721_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6721_0_0_0/* byval_arg */
	, &IEnumerator_1_t6721_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6721_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_596.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4760_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_596MethodDeclarations.h"

extern TypeInfo DebuggableAttribute_t466_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26033_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggableAttribute_t466_m34639_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggableAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggableAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggableAttribute_t466_m34639(__this, p0, method) (DebuggableAttribute_t466 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4760____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4760, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4760____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4760, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4760_FieldInfos[] =
{
	&InternalEnumerator_1_t4760____array_0_FieldInfo,
	&InternalEnumerator_1_t4760____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4760____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4760_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4760____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4760_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26033_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4760_PropertyInfos[] =
{
	&InternalEnumerator_1_t4760____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4760____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4760_InternalEnumerator_1__ctor_m26029_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26029_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26029_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4760_InternalEnumerator_1__ctor_m26029_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26029_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26031_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26031_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26031_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26032_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26032_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26032_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttribute_t466_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26033_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26033_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* declaring_type */
	, &DebuggableAttribute_t466_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26033_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4760_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26029_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo,
	&InternalEnumerator_1_Dispose_m26031_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26032_MethodInfo,
	&InternalEnumerator_1_get_Current_m26033_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26032_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26031_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4760_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26030_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26032_MethodInfo,
	&InternalEnumerator_1_Dispose_m26031_MethodInfo,
	&InternalEnumerator_1_get_Current_m26033_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4760_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6721_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4760_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6721_il2cpp_TypeInfo, 7},
};
extern TypeInfo DebuggableAttribute_t466_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4760_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26033_MethodInfo/* Method Usage */,
	&DebuggableAttribute_t466_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggableAttribute_t466_m34639_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4760_0_0_0;
extern Il2CppType InternalEnumerator_1_t4760_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4760_GenericClass;
TypeInfo InternalEnumerator_1_t4760_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4760_MethodInfos/* methods */
	, InternalEnumerator_1_t4760_PropertyInfos/* properties */
	, InternalEnumerator_1_t4760_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4760_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4760_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4760_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4760_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4760_1_0_0/* this_arg */
	, InternalEnumerator_1_t4760_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4760_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4760_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4760)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8671_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo ICollection_1_get_Count_m44984_MethodInfo;
static PropertyInfo ICollection_1_t8671____Count_PropertyInfo = 
{
	&ICollection_1_t8671_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44984_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44985_MethodInfo;
static PropertyInfo ICollection_1_t8671____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8671_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44985_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8671_PropertyInfos[] =
{
	&ICollection_1_t8671____Count_PropertyInfo,
	&ICollection_1_t8671____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44984_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44984_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44984_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44985_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44985_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44985_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttribute_t466_0_0_0;
extern Il2CppType DebuggableAttribute_t466_0_0_0;
static ParameterInfo ICollection_1_t8671_ICollection_1_Add_m44986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t466_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44986_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44986_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8671_ICollection_1_Add_m44986_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44986_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44987_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44987_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m44987_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttribute_t466_0_0_0;
static ParameterInfo ICollection_1_t8671_ICollection_1_Contains_m44988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t466_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44988_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44988_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8671_ICollection_1_Contains_m44988_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44988_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttributeU5BU5D_t5035_0_0_0;
extern Il2CppType DebuggableAttributeU5BU5D_t5035_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8671_ICollection_1_CopyTo_m44989_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttributeU5BU5D_t5035_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44989_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44989_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8671_ICollection_1_CopyTo_m44989_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44989_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggableAttribute_t466_0_0_0;
static ParameterInfo ICollection_1_t8671_ICollection_1_Remove_m44990_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t466_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44990_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44990_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8671_ICollection_1_Remove_m44990_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44990_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8671_MethodInfos[] =
{
	&ICollection_1_get_Count_m44984_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44985_MethodInfo,
	&ICollection_1_Add_m44986_MethodInfo,
	&ICollection_1_Clear_m44987_MethodInfo,
	&ICollection_1_Contains_m44988_MethodInfo,
	&ICollection_1_CopyTo_m44989_MethodInfo,
	&ICollection_1_Remove_m44990_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8673_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8671_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8673_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8671_0_0_0;
extern Il2CppType ICollection_1_t8671_1_0_0;
struct ICollection_1_t8671;
extern Il2CppGenericClass ICollection_1_t8671_GenericClass;
TypeInfo ICollection_1_t8671_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8671_MethodInfos/* methods */
	, ICollection_1_t8671_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8671_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8671_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8671_0_0_0/* byval_arg */
	, &ICollection_1_t8671_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8671_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute>
extern Il2CppType IEnumerator_1_t6721_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44991_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44991_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8673_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6721_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44991_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8673_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44991_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8673_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8673_0_0_0;
extern Il2CppType IEnumerable_1_t8673_1_0_0;
struct IEnumerable_1_t8673;
extern Il2CppGenericClass IEnumerable_1_t8673_GenericClass;
TypeInfo IEnumerable_1_t8673_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8673_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8673_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8673_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8673_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8673_0_0_0/* byval_arg */
	, &IEnumerable_1_t8673_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8673_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8672_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>
extern MethodInfo IList_1_get_Item_m44992_MethodInfo;
extern MethodInfo IList_1_set_Item_m44993_MethodInfo;
static PropertyInfo IList_1_t8672____Item_PropertyInfo = 
{
	&IList_1_t8672_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44992_MethodInfo/* get */
	, &IList_1_set_Item_m44993_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8672_PropertyInfos[] =
{
	&IList_1_t8672____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggableAttribute_t466_0_0_0;
static ParameterInfo IList_1_t8672_IList_1_IndexOf_m44994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t466_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44994_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44994_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8672_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8672_IList_1_IndexOf_m44994_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44994_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggableAttribute_t466_0_0_0;
static ParameterInfo IList_1_t8672_IList_1_Insert_m44995_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t466_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44995_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44995_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8672_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8672_IList_1_Insert_m44995_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44995_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8672_IList_1_RemoveAt_m44996_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44996_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44996_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8672_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8672_IList_1_RemoveAt_m44996_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44996_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8672_IList_1_get_Item_m44992_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DebuggableAttribute_t466_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44992_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44992_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8672_il2cpp_TypeInfo/* declaring_type */
	, &DebuggableAttribute_t466_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8672_IList_1_get_Item_m44992_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44992_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggableAttribute_t466_0_0_0;
static ParameterInfo IList_1_t8672_IList_1_set_Item_m44993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggableAttribute_t466_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44993_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44993_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8672_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8672_IList_1_set_Item_m44993_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44993_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8672_MethodInfos[] =
{
	&IList_1_IndexOf_m44994_MethodInfo,
	&IList_1_Insert_m44995_MethodInfo,
	&IList_1_RemoveAt_m44996_MethodInfo,
	&IList_1_get_Item_m44992_MethodInfo,
	&IList_1_set_Item_m44993_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8672_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8671_il2cpp_TypeInfo,
	&IEnumerable_1_t8673_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8672_0_0_0;
extern Il2CppType IList_1_t8672_1_0_0;
struct IList_1_t8672;
extern Il2CppGenericClass IList_1_t8672_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8672_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8672_MethodInfos/* methods */
	, IList_1_t8672_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8672_il2cpp_TypeInfo/* element_class */
	, IList_1_t8672_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8672_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8672_0_0_0/* byval_arg */
	, &IList_1_t8672_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8672_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6723_il2cpp_TypeInfo;

// System.Diagnostics.DebuggableAttribute/DebuggingModes
#include "mscorlib_System_Diagnostics_DebuggableAttribute_DebuggingMod.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo IEnumerator_1_get_Current_m44997_MethodInfo;
static PropertyInfo IEnumerator_1_t6723____Current_PropertyInfo = 
{
	&IEnumerator_1_t6723_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44997_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6723_PropertyInfos[] =
{
	&IEnumerator_1_t6723____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggingModes_t1903_0_0_0;
extern void* RuntimeInvoker_DebuggingModes_t1903 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44997_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44997_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6723_il2cpp_TypeInfo/* declaring_type */
	, &DebuggingModes_t1903_0_0_0/* return_type */
	, RuntimeInvoker_DebuggingModes_t1903/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44997_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6723_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44997_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6723_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6723_0_0_0;
extern Il2CppType IEnumerator_1_t6723_1_0_0;
struct IEnumerator_1_t6723;
extern Il2CppGenericClass IEnumerator_1_t6723_GenericClass;
TypeInfo IEnumerator_1_t6723_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6723_MethodInfos/* methods */
	, IEnumerator_1_t6723_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6723_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6723_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6723_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6723_0_0_0/* byval_arg */
	, &IEnumerator_1_t6723_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6723_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_597.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4761_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_597MethodDeclarations.h"

extern TypeInfo DebuggingModes_t1903_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26038_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggingModes_t1903_m34650_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggableAttribute/DebuggingModes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggableAttribute/DebuggingModes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDebuggingModes_t1903_m34650 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26034_MethodInfo;
 void InternalEnumerator_1__ctor_m26034 (InternalEnumerator_1_t4761 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035 (InternalEnumerator_1_t4761 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26038(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26038_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DebuggingModes_t1903_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26036_MethodInfo;
 void InternalEnumerator_1_Dispose_m26036 (InternalEnumerator_1_t4761 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26037_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26037 (InternalEnumerator_1_t4761 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m1925(L_1, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26038 (InternalEnumerator_1_t4761 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t1545 * L_1 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_1, (String_t*) &_stringLiteral1339, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
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
		InvalidOperationException_t1545 * L_3 = (InvalidOperationException_t1545 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1545_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m6656(L_3, (String_t*) &_stringLiteral1340, /*hidden argument*/&InvalidOperationException__ctor_m6656_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m1925(L_5, /*hidden argument*/&Array_get_Length_m1925_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisDebuggingModes_t1903_m34650(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDebuggingModes_t1903_m34650_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4761____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4761, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4761____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4761, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4761_FieldInfos[] =
{
	&InternalEnumerator_1_t4761____array_0_FieldInfo,
	&InternalEnumerator_1_t4761____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4761____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4761_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4761____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4761_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26038_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4761_PropertyInfos[] =
{
	&InternalEnumerator_1_t4761____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4761____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4761_InternalEnumerator_1__ctor_m26034_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26034_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26034_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26034/* method */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4761_InternalEnumerator_1__ctor_m26034_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26034_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035/* method */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26036_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26036_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26036/* method */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26036_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26037_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26037_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26037/* method */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26037_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModes_t1903_0_0_0;
extern void* RuntimeInvoker_DebuggingModes_t1903 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26038_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26038_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26038/* method */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* declaring_type */
	, &DebuggingModes_t1903_0_0_0/* return_type */
	, RuntimeInvoker_DebuggingModes_t1903/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26038_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4761_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26034_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035_MethodInfo,
	&InternalEnumerator_1_Dispose_m26036_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26037_MethodInfo,
	&InternalEnumerator_1_get_Current_m26038_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4761_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26035_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26037_MethodInfo,
	&InternalEnumerator_1_Dispose_m26036_MethodInfo,
	&InternalEnumerator_1_get_Current_m26038_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4761_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6723_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4761_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6723_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4761_0_0_0;
extern Il2CppType InternalEnumerator_1_t4761_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4761_GenericClass;
TypeInfo InternalEnumerator_1_t4761_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4761_MethodInfos/* methods */
	, InternalEnumerator_1_t4761_PropertyInfos/* properties */
	, InternalEnumerator_1_t4761_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4761_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4761_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4761_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4761_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4761_1_0_0/* this_arg */
	, InternalEnumerator_1_t4761_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4761_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4761)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8674_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo ICollection_1_get_Count_m44998_MethodInfo;
static PropertyInfo ICollection_1_t8674____Count_PropertyInfo = 
{
	&ICollection_1_t8674_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44998_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44999_MethodInfo;
static PropertyInfo ICollection_1_t8674____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8674_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44999_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8674_PropertyInfos[] =
{
	&ICollection_1_t8674____Count_PropertyInfo,
	&ICollection_1_t8674____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44998_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Count()
MethodInfo ICollection_1_get_Count_m44998_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m44998_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44999_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44999_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m44999_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModes_t1903_0_0_0;
extern Il2CppType DebuggingModes_t1903_0_0_0;
static ParameterInfo ICollection_1_t8674_ICollection_1_Add_m45000_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t1903_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45000_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Add(T)
MethodInfo ICollection_1_Add_m45000_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8674_ICollection_1_Add_m45000_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45000_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45001_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Clear()
MethodInfo ICollection_1_Clear_m45001_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m45001_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModes_t1903_0_0_0;
static ParameterInfo ICollection_1_t8674_ICollection_1_Contains_m45002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t1903_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45002_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Contains(T)
MethodInfo ICollection_1_Contains_m45002_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8674_ICollection_1_Contains_m45002_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45002_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModesU5BU5D_t5036_0_0_0;
extern Il2CppType DebuggingModesU5BU5D_t5036_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8674_ICollection_1_CopyTo_m45003_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModesU5BU5D_t5036_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45003_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45003_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8674_ICollection_1_CopyTo_m45003_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45003_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggingModes_t1903_0_0_0;
static ParameterInfo ICollection_1_t8674_ICollection_1_Remove_m45004_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t1903_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45004_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Remove(T)
MethodInfo ICollection_1_Remove_m45004_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8674_ICollection_1_Remove_m45004_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45004_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8674_MethodInfos[] =
{
	&ICollection_1_get_Count_m44998_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44999_MethodInfo,
	&ICollection_1_Add_m45000_MethodInfo,
	&ICollection_1_Clear_m45001_MethodInfo,
	&ICollection_1_Contains_m45002_MethodInfo,
	&ICollection_1_CopyTo_m45003_MethodInfo,
	&ICollection_1_Remove_m45004_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8676_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8674_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8676_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8674_0_0_0;
extern Il2CppType ICollection_1_t8674_1_0_0;
struct ICollection_1_t8674;
extern Il2CppGenericClass ICollection_1_t8674_GenericClass;
TypeInfo ICollection_1_t8674_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8674_MethodInfos/* methods */
	, ICollection_1_t8674_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8674_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8674_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8674_0_0_0/* byval_arg */
	, &ICollection_1_t8674_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8674_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern Il2CppType IEnumerator_1_t6723_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45005_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45005_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8676_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6723_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45005_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8676_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45005_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8676_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8676_0_0_0;
extern Il2CppType IEnumerable_1_t8676_1_0_0;
struct IEnumerable_1_t8676;
extern Il2CppGenericClass IEnumerable_1_t8676_GenericClass;
TypeInfo IEnumerable_1_t8676_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8676_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8676_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8676_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8676_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8676_0_0_0/* byval_arg */
	, &IEnumerable_1_t8676_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8676_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8675_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>
extern MethodInfo IList_1_get_Item_m45006_MethodInfo;
extern MethodInfo IList_1_set_Item_m45007_MethodInfo;
static PropertyInfo IList_1_t8675____Item_PropertyInfo = 
{
	&IList_1_t8675_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45006_MethodInfo/* get */
	, &IList_1_set_Item_m45007_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8675_PropertyInfos[] =
{
	&IList_1_t8675____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggingModes_t1903_0_0_0;
static ParameterInfo IList_1_t8675_IList_1_IndexOf_m45008_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t1903_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45008_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45008_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8675_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8675_IList_1_IndexOf_m45008_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45008_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggingModes_t1903_0_0_0;
static ParameterInfo IList_1_t8675_IList_1_Insert_m45009_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t1903_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45009_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45009_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8675_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8675_IList_1_Insert_m45009_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45009_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8675_IList_1_RemoveAt_m45010_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45010_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45010_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8675_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8675_IList_1_RemoveAt_m45010_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45010_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8675_IList_1_get_Item_m45006_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DebuggingModes_t1903_0_0_0;
extern void* RuntimeInvoker_DebuggingModes_t1903_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45006_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45006_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8675_il2cpp_TypeInfo/* declaring_type */
	, &DebuggingModes_t1903_0_0_0/* return_type */
	, RuntimeInvoker_DebuggingModes_t1903_Int32_t73/* invoker_method */
	, IList_1_t8675_IList_1_get_Item_m45006_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45006_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggingModes_t1903_0_0_0;
static ParameterInfo IList_1_t8675_IList_1_set_Item_m45007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggingModes_t1903_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45007_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggableAttribute/DebuggingModes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45007_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8675_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8675_IList_1_set_Item_m45007_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45007_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8675_MethodInfos[] =
{
	&IList_1_IndexOf_m45008_MethodInfo,
	&IList_1_Insert_m45009_MethodInfo,
	&IList_1_RemoveAt_m45010_MethodInfo,
	&IList_1_get_Item_m45006_MethodInfo,
	&IList_1_set_Item_m45007_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8675_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8674_il2cpp_TypeInfo,
	&IEnumerable_1_t8676_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8675_0_0_0;
extern Il2CppType IList_1_t8675_1_0_0;
struct IList_1_t8675;
extern Il2CppGenericClass IList_1_t8675_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8675_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8675_MethodInfos/* methods */
	, IList_1_t8675_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8675_il2cpp_TypeInfo/* element_class */
	, IList_1_t8675_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8675_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8675_0_0_0/* byval_arg */
	, &IList_1_t8675_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8675_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6725_il2cpp_TypeInfo;

// System.Diagnostics.DebuggerDisplayAttribute
#include "mscorlib_System_Diagnostics_DebuggerDisplayAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45011_MethodInfo;
static PropertyInfo IEnumerator_1_t6725____Current_PropertyInfo = 
{
	&IEnumerator_1_t6725_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45011_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6725_PropertyInfos[] =
{
	&IEnumerator_1_t6725____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45011_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45011_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6725_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerDisplayAttribute_t1904_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45011_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6725_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45011_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6725_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6725_0_0_0;
extern Il2CppType IEnumerator_1_t6725_1_0_0;
struct IEnumerator_1_t6725;
extern Il2CppGenericClass IEnumerator_1_t6725_GenericClass;
TypeInfo IEnumerator_1_t6725_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6725_MethodInfos/* methods */
	, IEnumerator_1_t6725_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6725_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6725_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6725_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6725_0_0_0/* byval_arg */
	, &IEnumerator_1_t6725_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6725_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_598.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4762_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_598MethodDeclarations.h"

extern TypeInfo DebuggerDisplayAttribute_t1904_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26043_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerDisplayAttribute_t1904_m34661_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerDisplayAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerDisplayAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerDisplayAttribute_t1904_m34661(__this, p0, method) (DebuggerDisplayAttribute_t1904 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4762____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4762, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4762____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4762, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4762_FieldInfos[] =
{
	&InternalEnumerator_1_t4762____array_0_FieldInfo,
	&InternalEnumerator_1_t4762____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26040_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4762____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4762_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26040_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4762____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4762_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26043_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4762_PropertyInfos[] =
{
	&InternalEnumerator_1_t4762____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4762____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4762_InternalEnumerator_1__ctor_m26039_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26039_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26039_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4762_InternalEnumerator_1__ctor_m26039_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26039_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26040_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26040_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26040_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26041_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26041_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26041_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26042_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26042_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26042_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26043_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26043_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerDisplayAttribute_t1904_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26043_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4762_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26039_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26040_MethodInfo,
	&InternalEnumerator_1_Dispose_m26041_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26042_MethodInfo,
	&InternalEnumerator_1_get_Current_m26043_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26042_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26041_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4762_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26040_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26042_MethodInfo,
	&InternalEnumerator_1_Dispose_m26041_MethodInfo,
	&InternalEnumerator_1_get_Current_m26043_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4762_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6725_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4762_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6725_il2cpp_TypeInfo, 7},
};
extern TypeInfo DebuggerDisplayAttribute_t1904_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4762_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26043_MethodInfo/* Method Usage */,
	&DebuggerDisplayAttribute_t1904_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerDisplayAttribute_t1904_m34661_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4762_0_0_0;
extern Il2CppType InternalEnumerator_1_t4762_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4762_GenericClass;
TypeInfo InternalEnumerator_1_t4762_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4762_MethodInfos/* methods */
	, InternalEnumerator_1_t4762_PropertyInfos/* properties */
	, InternalEnumerator_1_t4762_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4762_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4762_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4762_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4762_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4762_1_0_0/* this_arg */
	, InternalEnumerator_1_t4762_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4762_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4762_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4762)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8677_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo ICollection_1_get_Count_m45012_MethodInfo;
static PropertyInfo ICollection_1_t8677____Count_PropertyInfo = 
{
	&ICollection_1_t8677_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45012_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45013_MethodInfo;
static PropertyInfo ICollection_1_t8677____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8677_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45013_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8677_PropertyInfos[] =
{
	&ICollection_1_t8677____Count_PropertyInfo,
	&ICollection_1_t8677____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45012_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45012_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m45012_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45013_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45013_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m45013_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
static ParameterInfo ICollection_1_t8677_ICollection_1_Add_m45014_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t1904_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45014_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45014_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8677_ICollection_1_Add_m45014_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45014_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45015_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45015_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m45015_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
static ParameterInfo ICollection_1_t8677_ICollection_1_Contains_m45016_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t1904_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45016_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45016_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8677_ICollection_1_Contains_m45016_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45016_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttributeU5BU5D_t5037_0_0_0;
extern Il2CppType DebuggerDisplayAttributeU5BU5D_t5037_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8677_ICollection_1_CopyTo_m45017_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttributeU5BU5D_t5037_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45017_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45017_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8677_ICollection_1_CopyTo_m45017_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45017_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
static ParameterInfo ICollection_1_t8677_ICollection_1_Remove_m45018_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t1904_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45018_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerDisplayAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45018_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8677_ICollection_1_Remove_m45018_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45018_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8677_MethodInfos[] =
{
	&ICollection_1_get_Count_m45012_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45013_MethodInfo,
	&ICollection_1_Add_m45014_MethodInfo,
	&ICollection_1_Clear_m45015_MethodInfo,
	&ICollection_1_Contains_m45016_MethodInfo,
	&ICollection_1_CopyTo_m45017_MethodInfo,
	&ICollection_1_Remove_m45018_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8679_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8677_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8679_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8677_0_0_0;
extern Il2CppType ICollection_1_t8677_1_0_0;
struct ICollection_1_t8677;
extern Il2CppGenericClass ICollection_1_t8677_GenericClass;
TypeInfo ICollection_1_t8677_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8677_MethodInfos/* methods */
	, ICollection_1_t8677_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8677_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8677_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8677_0_0_0/* byval_arg */
	, &ICollection_1_t8677_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8677_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerDisplayAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerDisplayAttribute>
extern Il2CppType IEnumerator_1_t6725_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45019_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerDisplayAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45019_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8679_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6725_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45019_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8679_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45019_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8679_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8679_0_0_0;
extern Il2CppType IEnumerable_1_t8679_1_0_0;
struct IEnumerable_1_t8679;
extern Il2CppGenericClass IEnumerable_1_t8679_GenericClass;
TypeInfo IEnumerable_1_t8679_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8679_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8679_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8679_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8679_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8679_0_0_0/* byval_arg */
	, &IEnumerable_1_t8679_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8679_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8678_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>
extern MethodInfo IList_1_get_Item_m45020_MethodInfo;
extern MethodInfo IList_1_set_Item_m45021_MethodInfo;
static PropertyInfo IList_1_t8678____Item_PropertyInfo = 
{
	&IList_1_t8678_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45020_MethodInfo/* get */
	, &IList_1_set_Item_m45021_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8678_PropertyInfos[] =
{
	&IList_1_t8678____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
static ParameterInfo IList_1_t8678_IList_1_IndexOf_m45022_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t1904_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45022_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45022_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8678_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8678_IList_1_IndexOf_m45022_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45022_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
static ParameterInfo IList_1_t8678_IList_1_Insert_m45023_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t1904_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45023_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45023_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8678_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8678_IList_1_Insert_m45023_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45023_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8678_IList_1_RemoveAt_m45024_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45024_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45024_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8678_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8678_IList_1_RemoveAt_m45024_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45024_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8678_IList_1_get_Item_m45020_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45020_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45020_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8678_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerDisplayAttribute_t1904_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8678_IList_1_get_Item_m45020_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45020_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggerDisplayAttribute_t1904_0_0_0;
static ParameterInfo IList_1_t8678_IList_1_set_Item_m45021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerDisplayAttribute_t1904_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45021_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerDisplayAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45021_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8678_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8678_IList_1_set_Item_m45021_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45021_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8678_MethodInfos[] =
{
	&IList_1_IndexOf_m45022_MethodInfo,
	&IList_1_Insert_m45023_MethodInfo,
	&IList_1_RemoveAt_m45024_MethodInfo,
	&IList_1_get_Item_m45020_MethodInfo,
	&IList_1_set_Item_m45021_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8678_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8677_il2cpp_TypeInfo,
	&IEnumerable_1_t8679_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8678_0_0_0;
extern Il2CppType IList_1_t8678_1_0_0;
struct IList_1_t8678;
extern Il2CppGenericClass IList_1_t8678_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8678_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8678_MethodInfos/* methods */
	, IList_1_t8678_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8678_il2cpp_TypeInfo/* element_class */
	, IList_1_t8678_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8678_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8678_0_0_0/* byval_arg */
	, &IList_1_t8678_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8678_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6727_il2cpp_TypeInfo;

// System.Diagnostics.DebuggerStepThroughAttribute
#include "mscorlib_System_Diagnostics_DebuggerStepThroughAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45025_MethodInfo;
static PropertyInfo IEnumerator_1_t6727____Current_PropertyInfo = 
{
	&IEnumerator_1_t6727_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45025_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6727_PropertyInfos[] =
{
	&IEnumerator_1_t6727____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45025_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45025_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6727_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerStepThroughAttribute_t1905_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45025_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6727_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45025_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6727_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6727_0_0_0;
extern Il2CppType IEnumerator_1_t6727_1_0_0;
struct IEnumerator_1_t6727;
extern Il2CppGenericClass IEnumerator_1_t6727_GenericClass;
TypeInfo IEnumerator_1_t6727_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6727_MethodInfos/* methods */
	, IEnumerator_1_t6727_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6727_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6727_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6727_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6727_0_0_0/* byval_arg */
	, &IEnumerator_1_t6727_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6727_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_599.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4763_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_599MethodDeclarations.h"

extern TypeInfo DebuggerStepThroughAttribute_t1905_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26048_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerStepThroughAttribute_t1905_m34672_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerStepThroughAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerStepThroughAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerStepThroughAttribute_t1905_m34672(__this, p0, method) (DebuggerStepThroughAttribute_t1905 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4763____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4763, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4763____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4763, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4763_FieldInfos[] =
{
	&InternalEnumerator_1_t4763____array_0_FieldInfo,
	&InternalEnumerator_1_t4763____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26045_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4763____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4763_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26045_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4763____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4763_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26048_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4763_PropertyInfos[] =
{
	&InternalEnumerator_1_t4763____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4763____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4763_InternalEnumerator_1__ctor_m26044_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26044_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26044_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4763_InternalEnumerator_1__ctor_m26044_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26044_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26045_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26045_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26045_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26046_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26046_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26046_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26047_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26047_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26047_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26048_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26048_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerStepThroughAttribute_t1905_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26048_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4763_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26044_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26045_MethodInfo,
	&InternalEnumerator_1_Dispose_m26046_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26047_MethodInfo,
	&InternalEnumerator_1_get_Current_m26048_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26047_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26046_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4763_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26045_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26047_MethodInfo,
	&InternalEnumerator_1_Dispose_m26046_MethodInfo,
	&InternalEnumerator_1_get_Current_m26048_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4763_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6727_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4763_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6727_il2cpp_TypeInfo, 7},
};
extern TypeInfo DebuggerStepThroughAttribute_t1905_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4763_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26048_MethodInfo/* Method Usage */,
	&DebuggerStepThroughAttribute_t1905_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerStepThroughAttribute_t1905_m34672_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4763_0_0_0;
extern Il2CppType InternalEnumerator_1_t4763_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4763_GenericClass;
TypeInfo InternalEnumerator_1_t4763_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4763_MethodInfos/* methods */
	, InternalEnumerator_1_t4763_PropertyInfos/* properties */
	, InternalEnumerator_1_t4763_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4763_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4763_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4763_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4763_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4763_1_0_0/* this_arg */
	, InternalEnumerator_1_t4763_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4763_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4763_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4763)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8680_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo ICollection_1_get_Count_m45026_MethodInfo;
static PropertyInfo ICollection_1_t8680____Count_PropertyInfo = 
{
	&ICollection_1_t8680_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45026_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45027_MethodInfo;
static PropertyInfo ICollection_1_t8680____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8680_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45027_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8680_PropertyInfos[] =
{
	&ICollection_1_t8680____Count_PropertyInfo,
	&ICollection_1_t8680____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45026_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45026_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m45026_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45027_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45027_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m45027_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
static ParameterInfo ICollection_1_t8680_ICollection_1_Add_m45028_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t1905_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45028_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45028_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8680_ICollection_1_Add_m45028_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45028_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45029_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45029_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m45029_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
static ParameterInfo ICollection_1_t8680_ICollection_1_Contains_m45030_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t1905_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45030_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45030_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8680_ICollection_1_Contains_m45030_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45030_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttributeU5BU5D_t5038_0_0_0;
extern Il2CppType DebuggerStepThroughAttributeU5BU5D_t5038_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8680_ICollection_1_CopyTo_m45031_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttributeU5BU5D_t5038_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45031_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45031_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8680_ICollection_1_CopyTo_m45031_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45031_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
static ParameterInfo ICollection_1_t8680_ICollection_1_Remove_m45032_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t1905_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45032_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerStepThroughAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45032_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8680_ICollection_1_Remove_m45032_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45032_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8680_MethodInfos[] =
{
	&ICollection_1_get_Count_m45026_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45027_MethodInfo,
	&ICollection_1_Add_m45028_MethodInfo,
	&ICollection_1_Clear_m45029_MethodInfo,
	&ICollection_1_Contains_m45030_MethodInfo,
	&ICollection_1_CopyTo_m45031_MethodInfo,
	&ICollection_1_Remove_m45032_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8682_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8680_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8682_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8680_0_0_0;
extern Il2CppType ICollection_1_t8680_1_0_0;
struct ICollection_1_t8680;
extern Il2CppGenericClass ICollection_1_t8680_GenericClass;
TypeInfo ICollection_1_t8680_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8680_MethodInfos/* methods */
	, ICollection_1_t8680_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8680_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8680_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8680_0_0_0/* byval_arg */
	, &ICollection_1_t8680_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8680_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerStepThroughAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern Il2CppType IEnumerator_1_t6727_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45033_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerStepThroughAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45033_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8682_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6727_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45033_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8682_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45033_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8682_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8682_0_0_0;
extern Il2CppType IEnumerable_1_t8682_1_0_0;
struct IEnumerable_1_t8682;
extern Il2CppGenericClass IEnumerable_1_t8682_GenericClass;
TypeInfo IEnumerable_1_t8682_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8682_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8682_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8682_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8682_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8682_0_0_0/* byval_arg */
	, &IEnumerable_1_t8682_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8682_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8681_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>
extern MethodInfo IList_1_get_Item_m45034_MethodInfo;
extern MethodInfo IList_1_set_Item_m45035_MethodInfo;
static PropertyInfo IList_1_t8681____Item_PropertyInfo = 
{
	&IList_1_t8681_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45034_MethodInfo/* get */
	, &IList_1_set_Item_m45035_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8681_PropertyInfos[] =
{
	&IList_1_t8681____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
static ParameterInfo IList_1_t8681_IList_1_IndexOf_m45036_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t1905_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45036_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45036_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8681_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8681_IList_1_IndexOf_m45036_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45036_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
static ParameterInfo IList_1_t8681_IList_1_Insert_m45037_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t1905_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45037_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45037_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8681_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8681_IList_1_Insert_m45037_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45037_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8681_IList_1_RemoveAt_m45038_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45038_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45038_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8681_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8681_IList_1_RemoveAt_m45038_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45038_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8681_IList_1_get_Item_m45034_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45034_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45034_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8681_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerStepThroughAttribute_t1905_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8681_IList_1_get_Item_m45034_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45034_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggerStepThroughAttribute_t1905_0_0_0;
static ParameterInfo IList_1_t8681_IList_1_set_Item_m45035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerStepThroughAttribute_t1905_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45035_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerStepThroughAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45035_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8681_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8681_IList_1_set_Item_m45035_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45035_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8681_MethodInfos[] =
{
	&IList_1_IndexOf_m45036_MethodInfo,
	&IList_1_Insert_m45037_MethodInfo,
	&IList_1_RemoveAt_m45038_MethodInfo,
	&IList_1_get_Item_m45034_MethodInfo,
	&IList_1_set_Item_m45035_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8681_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8680_il2cpp_TypeInfo,
	&IEnumerable_1_t8682_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8681_0_0_0;
extern Il2CppType IList_1_t8681_1_0_0;
struct IList_1_t8681;
extern Il2CppGenericClass IList_1_t8681_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8681_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8681_MethodInfos/* methods */
	, IList_1_t8681_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8681_il2cpp_TypeInfo/* element_class */
	, IList_1_t8681_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8681_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8681_0_0_0/* byval_arg */
	, &IList_1_t8681_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8681_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6729_il2cpp_TypeInfo;

// System.Diagnostics.DebuggerTypeProxyAttribute
#include "mscorlib_System_Diagnostics_DebuggerTypeProxyAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45039_MethodInfo;
static PropertyInfo IEnumerator_1_t6729____Current_PropertyInfo = 
{
	&IEnumerator_1_t6729_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45039_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6729_PropertyInfos[] =
{
	&IEnumerator_1_t6729____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45039_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45039_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6729_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerTypeProxyAttribute_t1906_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45039_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6729_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45039_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6729_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6729_0_0_0;
extern Il2CppType IEnumerator_1_t6729_1_0_0;
struct IEnumerator_1_t6729;
extern Il2CppGenericClass IEnumerator_1_t6729_GenericClass;
TypeInfo IEnumerator_1_t6729_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6729_MethodInfos/* methods */
	, IEnumerator_1_t6729_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6729_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6729_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6729_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6729_0_0_0/* byval_arg */
	, &IEnumerator_1_t6729_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6729_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_600.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4764_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_600MethodDeclarations.h"

extern TypeInfo DebuggerTypeProxyAttribute_t1906_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26053_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerTypeProxyAttribute_t1906_m34683_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerTypeProxyAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerTypeProxyAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerTypeProxyAttribute_t1906_m34683(__this, p0, method) (DebuggerTypeProxyAttribute_t1906 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4764____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4764, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4764____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4764, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4764_FieldInfos[] =
{
	&InternalEnumerator_1_t4764____array_0_FieldInfo,
	&InternalEnumerator_1_t4764____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26050_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4764____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4764_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26050_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4764____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4764_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26053_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4764_PropertyInfos[] =
{
	&InternalEnumerator_1_t4764____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4764____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4764_InternalEnumerator_1__ctor_m26049_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26049_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26049_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4764_InternalEnumerator_1__ctor_m26049_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26049_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26050_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26050_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26050_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26051_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26051_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26051_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26052_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26052_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26052_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26053_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26053_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerTypeProxyAttribute_t1906_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26053_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4764_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26049_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26050_MethodInfo,
	&InternalEnumerator_1_Dispose_m26051_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26052_MethodInfo,
	&InternalEnumerator_1_get_Current_m26053_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26052_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26051_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4764_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26050_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26052_MethodInfo,
	&InternalEnumerator_1_Dispose_m26051_MethodInfo,
	&InternalEnumerator_1_get_Current_m26053_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4764_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6729_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4764_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6729_il2cpp_TypeInfo, 7},
};
extern TypeInfo DebuggerTypeProxyAttribute_t1906_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4764_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26053_MethodInfo/* Method Usage */,
	&DebuggerTypeProxyAttribute_t1906_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerTypeProxyAttribute_t1906_m34683_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4764_0_0_0;
extern Il2CppType InternalEnumerator_1_t4764_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4764_GenericClass;
TypeInfo InternalEnumerator_1_t4764_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4764_MethodInfos/* methods */
	, InternalEnumerator_1_t4764_PropertyInfos/* properties */
	, InternalEnumerator_1_t4764_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4764_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4764_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4764_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4764_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4764_1_0_0/* this_arg */
	, InternalEnumerator_1_t4764_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4764_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4764_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4764)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8683_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo ICollection_1_get_Count_m45040_MethodInfo;
static PropertyInfo ICollection_1_t8683____Count_PropertyInfo = 
{
	&ICollection_1_t8683_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45040_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45041_MethodInfo;
static PropertyInfo ICollection_1_t8683____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8683_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45041_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8683_PropertyInfos[] =
{
	&ICollection_1_t8683____Count_PropertyInfo,
	&ICollection_1_t8683____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45040_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45040_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m45040_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45041_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45041_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m45041_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
static ParameterInfo ICollection_1_t8683_ICollection_1_Add_m45042_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t1906_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45042_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45042_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8683_ICollection_1_Add_m45042_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45042_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45043_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45043_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m45043_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
static ParameterInfo ICollection_1_t8683_ICollection_1_Contains_m45044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t1906_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45044_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45044_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8683_ICollection_1_Contains_m45044_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45044_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttributeU5BU5D_t5039_0_0_0;
extern Il2CppType DebuggerTypeProxyAttributeU5BU5D_t5039_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8683_ICollection_1_CopyTo_m45045_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttributeU5BU5D_t5039_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45045_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45045_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8683_ICollection_1_CopyTo_m45045_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45045_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
static ParameterInfo ICollection_1_t8683_ICollection_1_Remove_m45046_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t1906_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45046_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45046_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8683_ICollection_1_Remove_m45046_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45046_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8683_MethodInfos[] =
{
	&ICollection_1_get_Count_m45040_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45041_MethodInfo,
	&ICollection_1_Add_m45042_MethodInfo,
	&ICollection_1_Clear_m45043_MethodInfo,
	&ICollection_1_Contains_m45044_MethodInfo,
	&ICollection_1_CopyTo_m45045_MethodInfo,
	&ICollection_1_Remove_m45046_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8685_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8683_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8685_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8683_0_0_0;
extern Il2CppType ICollection_1_t8683_1_0_0;
struct ICollection_1_t8683;
extern Il2CppGenericClass ICollection_1_t8683_GenericClass;
TypeInfo ICollection_1_t8683_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8683_MethodInfos/* methods */
	, ICollection_1_t8683_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8683_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8683_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8683_0_0_0/* byval_arg */
	, &ICollection_1_t8683_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8683_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerTypeProxyAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern Il2CppType IEnumerator_1_t6729_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45047_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerTypeProxyAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45047_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8685_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6729_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45047_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8685_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45047_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8685_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8685_0_0_0;
extern Il2CppType IEnumerable_1_t8685_1_0_0;
struct IEnumerable_1_t8685;
extern Il2CppGenericClass IEnumerable_1_t8685_GenericClass;
TypeInfo IEnumerable_1_t8685_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8685_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8685_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8685_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8685_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8685_0_0_0/* byval_arg */
	, &IEnumerable_1_t8685_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8685_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8684_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>
extern MethodInfo IList_1_get_Item_m45048_MethodInfo;
extern MethodInfo IList_1_set_Item_m45049_MethodInfo;
static PropertyInfo IList_1_t8684____Item_PropertyInfo = 
{
	&IList_1_t8684_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45048_MethodInfo/* get */
	, &IList_1_set_Item_m45049_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8684_PropertyInfos[] =
{
	&IList_1_t8684____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
static ParameterInfo IList_1_t8684_IList_1_IndexOf_m45050_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t1906_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45050_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45050_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8684_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8684_IList_1_IndexOf_m45050_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45050_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
static ParameterInfo IList_1_t8684_IList_1_Insert_m45051_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t1906_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45051_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45051_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8684_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8684_IList_1_Insert_m45051_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45051_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8684_IList_1_RemoveAt_m45052_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45052_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45052_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8684_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8684_IList_1_RemoveAt_m45052_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45052_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8684_IList_1_get_Item_m45048_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45048_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45048_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8684_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerTypeProxyAttribute_t1906_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8684_IList_1_get_Item_m45048_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45048_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggerTypeProxyAttribute_t1906_0_0_0;
static ParameterInfo IList_1_t8684_IList_1_set_Item_m45049_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerTypeProxyAttribute_t1906_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45049_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerTypeProxyAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45049_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8684_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8684_IList_1_set_Item_m45049_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45049_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8684_MethodInfos[] =
{
	&IList_1_IndexOf_m45050_MethodInfo,
	&IList_1_Insert_m45051_MethodInfo,
	&IList_1_RemoveAt_m45052_MethodInfo,
	&IList_1_get_Item_m45048_MethodInfo,
	&IList_1_set_Item_m45049_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8684_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8683_il2cpp_TypeInfo,
	&IEnumerable_1_t8685_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8684_0_0_0;
extern Il2CppType IList_1_t8684_1_0_0;
struct IList_1_t8684;
extern Il2CppGenericClass IList_1_t8684_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8684_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8684_MethodInfos/* methods */
	, IList_1_t8684_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8684_il2cpp_TypeInfo/* element_class */
	, IList_1_t8684_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8684_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8684_0_0_0/* byval_arg */
	, &IList_1_t8684_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8684_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6731_il2cpp_TypeInfo;

// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.StackFrame>
extern MethodInfo IEnumerator_1_get_Current_m45053_MethodInfo;
static PropertyInfo IEnumerator_1_t6731____Current_PropertyInfo = 
{
	&IEnumerator_1_t6731_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45053_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6731_PropertyInfos[] =
{
	&IEnumerator_1_t6731____Current_PropertyInfo,
	NULL
};
extern Il2CppType StackFrame_t1077_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45053_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45053_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6731_il2cpp_TypeInfo/* declaring_type */
	, &StackFrame_t1077_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45053_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6731_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45053_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6731_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6731_0_0_0;
extern Il2CppType IEnumerator_1_t6731_1_0_0;
struct IEnumerator_1_t6731;
extern Il2CppGenericClass IEnumerator_1_t6731_GenericClass;
TypeInfo IEnumerator_1_t6731_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6731_MethodInfos/* methods */
	, IEnumerator_1_t6731_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6731_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6731_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6731_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6731_0_0_0/* byval_arg */
	, &IEnumerator_1_t6731_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6731_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_601.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4765_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_601MethodDeclarations.h"

extern TypeInfo StackFrame_t1077_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26058_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStackFrame_t1077_m34694_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.StackFrame>(System.Int32)
#define Array_InternalArray__get_Item_TisStackFrame_t1077_m34694(__this, p0, method) (StackFrame_t1077 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4765____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4765, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4765____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4765, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4765_FieldInfos[] =
{
	&InternalEnumerator_1_t4765____array_0_FieldInfo,
	&InternalEnumerator_1_t4765____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4765____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4765_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4765____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4765_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26058_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4765_PropertyInfos[] =
{
	&InternalEnumerator_1_t4765____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4765____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4765_InternalEnumerator_1__ctor_m26054_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26054_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26054_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4765_InternalEnumerator_1__ctor_m26054_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26054_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26056_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26056_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &InternalEnumerator_1_Dispose_m26056_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26057_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26057_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &InternalEnumerator_1_MoveNext_m26057_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrame_t1077_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26058_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.StackFrame>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26058_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* declaring_type */
	, &StackFrame_t1077_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26058_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4765_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26054_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo,
	&InternalEnumerator_1_Dispose_m26056_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26057_MethodInfo,
	&InternalEnumerator_1_get_Current_m26058_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26057_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26056_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4765_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26055_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26057_MethodInfo,
	&InternalEnumerator_1_Dispose_m26056_MethodInfo,
	&InternalEnumerator_1_get_Current_m26058_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4765_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6731_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4765_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6731_il2cpp_TypeInfo, 7},
};
extern TypeInfo StackFrame_t1077_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4765_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26058_MethodInfo/* Method Usage */,
	&StackFrame_t1077_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisStackFrame_t1077_m34694_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4765_0_0_0;
extern Il2CppType InternalEnumerator_1_t4765_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4765_GenericClass;
TypeInfo InternalEnumerator_1_t4765_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4765_MethodInfos/* methods */
	, InternalEnumerator_1_t4765_PropertyInfos/* properties */
	, InternalEnumerator_1_t4765_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4765_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4765_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4765_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4765_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4765_1_0_0/* this_arg */
	, InternalEnumerator_1_t4765_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4765_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4765_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4765)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8686_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>
extern MethodInfo ICollection_1_get_Count_m45054_MethodInfo;
static PropertyInfo ICollection_1_t8686____Count_PropertyInfo = 
{
	&ICollection_1_t8686_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45054_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45055_MethodInfo;
static PropertyInfo ICollection_1_t8686____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8686_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45055_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8686_PropertyInfos[] =
{
	&ICollection_1_t8686____Count_PropertyInfo,
	&ICollection_1_t8686____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45054_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_Count()
MethodInfo ICollection_1_get_Count_m45054_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
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
	, &ICollection_1_get_Count_m45054_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45055_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45055_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
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
	, &ICollection_1_get_IsReadOnly_m45055_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrame_t1077_0_0_0;
extern Il2CppType StackFrame_t1077_0_0_0;
static ParameterInfo ICollection_1_t8686_ICollection_1_Add_m45056_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StackFrame_t1077_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45056_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Add(T)
MethodInfo ICollection_1_Add_m45056_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8686_ICollection_1_Add_m45056_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45056_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45057_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Clear()
MethodInfo ICollection_1_Clear_m45057_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
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
	, &ICollection_1_Clear_m45057_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrame_t1077_0_0_0;
static ParameterInfo ICollection_1_t8686_ICollection_1_Contains_m45058_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StackFrame_t1077_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45058_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Contains(T)
MethodInfo ICollection_1_Contains_m45058_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8686_ICollection_1_Contains_m45058_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45058_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrameU5BU5D_t1907_0_0_0;
extern Il2CppType StackFrameU5BU5D_t1907_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8686_ICollection_1_CopyTo_m45059_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StackFrameU5BU5D_t1907_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45059_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45059_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8686_ICollection_1_CopyTo_m45059_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45059_GenericMethod/* genericMethod */

};
extern Il2CppType StackFrame_t1077_0_0_0;
static ParameterInfo ICollection_1_t8686_ICollection_1_Remove_m45060_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StackFrame_t1077_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45060_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.StackFrame>::Remove(T)
MethodInfo ICollection_1_Remove_m45060_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8686_ICollection_1_Remove_m45060_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45060_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8686_MethodInfos[] =
{
	&ICollection_1_get_Count_m45054_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45055_MethodInfo,
	&ICollection_1_Add_m45056_MethodInfo,
	&ICollection_1_Clear_m45057_MethodInfo,
	&ICollection_1_Contains_m45058_MethodInfo,
	&ICollection_1_CopyTo_m45059_MethodInfo,
	&ICollection_1_Remove_m45060_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8688_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8686_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8688_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8686_0_0_0;
extern Il2CppType ICollection_1_t8686_1_0_0;
struct ICollection_1_t8686;
extern Il2CppGenericClass ICollection_1_t8686_GenericClass;
TypeInfo ICollection_1_t8686_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8686_MethodInfos/* methods */
	, ICollection_1_t8686_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8686_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8686_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8686_0_0_0/* byval_arg */
	, &ICollection_1_t8686_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8686_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.StackFrame>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.StackFrame>
extern Il2CppType IEnumerator_1_t6731_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45061_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.StackFrame>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45061_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8688_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6731_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45061_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8688_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45061_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8688_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8688_0_0_0;
extern Il2CppType IEnumerable_1_t8688_1_0_0;
struct IEnumerable_1_t8688;
extern Il2CppGenericClass IEnumerable_1_t8688_GenericClass;
TypeInfo IEnumerable_1_t8688_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8688_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8688_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8688_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8688_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8688_0_0_0/* byval_arg */
	, &IEnumerable_1_t8688_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8688_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
