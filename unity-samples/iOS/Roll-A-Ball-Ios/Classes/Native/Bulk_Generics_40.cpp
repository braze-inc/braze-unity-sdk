#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_489.h"
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
extern TypeInfo InternalEnumerator_1_t4629_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_489MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
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
extern TypeInfo AlertDescription_t1442_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1545_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m25335_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6656_MethodInfo;
extern MethodInfo Array_get_Length_m1925_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAlertDescription_t1442_m33422_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.AlertDescription>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.AlertDescription>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisAlertDescription_t1442_m33422 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25331_MethodInfo;
 void InternalEnumerator_1__ctor_m25331 (InternalEnumerator_1_t4629 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332 (InternalEnumerator_1_t4629 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m25335(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25335_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AlertDescription_t1442_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25333_MethodInfo;
 void InternalEnumerator_1_Dispose_m25333 (InternalEnumerator_1_t4629 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25334_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25334 (InternalEnumerator_1_t4629 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m25335 (InternalEnumerator_1_t4629 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisAlertDescription_t1442_m33422(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAlertDescription_t1442_m33422_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4629____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4629, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4629____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4629, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4629_FieldInfos[] =
{
	&InternalEnumerator_1_t4629____array_0_FieldInfo,
	&InternalEnumerator_1_t4629____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4629____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4629_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4629____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4629_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25335_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4629_PropertyInfos[] =
{
	&InternalEnumerator_1_t4629____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4629____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4629_InternalEnumerator_1__ctor_m25331_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25331_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25331_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25331/* method */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4629_InternalEnumerator_1__ctor_m25331_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25331_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332/* method */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25333_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25333_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25333/* method */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25333_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25334_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25334_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25334/* method */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25334_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescription_t1442_0_0_0;
extern void* RuntimeInvoker_AlertDescription_t1442 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25335_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25335_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25335/* method */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* declaring_type */
	, &AlertDescription_t1442_0_0_0/* return_type */
	, RuntimeInvoker_AlertDescription_t1442/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25335_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4629_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25331_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332_MethodInfo,
	&InternalEnumerator_1_Dispose_m25333_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25334_MethodInfo,
	&InternalEnumerator_1_get_Current_m25335_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4629_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25332_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25334_MethodInfo,
	&InternalEnumerator_1_Dispose_m25333_MethodInfo,
	&InternalEnumerator_1_get_Current_m25335_MethodInfo,
};
extern TypeInfo IEnumerator_t19_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6516_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t4629_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6516_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4629_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6516_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4629_0_0_0;
extern Il2CppType InternalEnumerator_1_t4629_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4629_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4629_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4629_MethodInfos/* methods */
	, InternalEnumerator_1_t4629_PropertyInfos/* properties */
	, InternalEnumerator_1_t4629_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4629_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4629_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4629_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4629_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4629_1_0_0/* this_arg */
	, InternalEnumerator_1_t4629_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4629_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4629)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8350_il2cpp_TypeInfo;

#include "Mono.Security_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>
extern MethodInfo ICollection_1_get_Count_m43463_MethodInfo;
static PropertyInfo ICollection_1_t8350____Count_PropertyInfo = 
{
	&ICollection_1_t8350_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43463_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43464_MethodInfo;
static PropertyInfo ICollection_1_t8350____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8350_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43464_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8350_PropertyInfos[] =
{
	&ICollection_1_t8350____Count_PropertyInfo,
	&ICollection_1_t8350____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43463_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Count()
MethodInfo ICollection_1_get_Count_m43463_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43463_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43464_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43464_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43464_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescription_t1442_0_0_0;
extern Il2CppType AlertDescription_t1442_0_0_0;
static ParameterInfo ICollection_1_t8350_ICollection_1_Add_m43465_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t1442_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43465_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Add(T)
MethodInfo ICollection_1_Add_m43465_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Byte_t97/* invoker_method */
	, ICollection_1_t8350_ICollection_1_Add_m43465_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43465_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43466_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Clear()
MethodInfo ICollection_1_Clear_m43466_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43466_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescription_t1442_0_0_0;
static ParameterInfo ICollection_1_t8350_ICollection_1_Contains_m43467_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t1442_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43467_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Contains(T)
MethodInfo ICollection_1_Contains_m43467_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Byte_t97/* invoker_method */
	, ICollection_1_t8350_ICollection_1_Contains_m43467_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43467_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescriptionU5BU5D_t5469_0_0_0;
extern Il2CppType AlertDescriptionU5BU5D_t5469_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8350_ICollection_1_CopyTo_m43468_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescriptionU5BU5D_t5469_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43468_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43468_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8350_ICollection_1_CopyTo_m43468_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43468_GenericMethod/* genericMethod */

};
extern Il2CppType AlertDescription_t1442_0_0_0;
static ParameterInfo ICollection_1_t8350_ICollection_1_Remove_m43469_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t1442_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43469_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.AlertDescription>::Remove(T)
MethodInfo ICollection_1_Remove_m43469_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Byte_t97/* invoker_method */
	, ICollection_1_t8350_ICollection_1_Remove_m43469_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43469_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8350_MethodInfos[] =
{
	&ICollection_1_get_Count_m43463_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43464_MethodInfo,
	&ICollection_1_Add_m43465_MethodInfo,
	&ICollection_1_Clear_m43466_MethodInfo,
	&ICollection_1_Contains_m43467_MethodInfo,
	&ICollection_1_CopyTo_m43468_MethodInfo,
	&ICollection_1_Remove_m43469_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8352_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8350_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8352_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8350_0_0_0;
extern Il2CppType ICollection_1_t8350_1_0_0;
struct ICollection_1_t8350;
extern Il2CppGenericClass ICollection_1_t8350_GenericClass;
TypeInfo ICollection_1_t8350_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8350_MethodInfos/* methods */
	, ICollection_1_t8350_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8350_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8350_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8350_0_0_0/* byval_arg */
	, &ICollection_1_t8350_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8350_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertDescription>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertDescription>
extern Il2CppType IEnumerator_1_t6516_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43470_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.AlertDescription>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43470_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8352_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6516_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43470_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8352_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43470_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8352_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8352_0_0_0;
extern Il2CppType IEnumerable_1_t8352_1_0_0;
struct IEnumerable_1_t8352;
extern Il2CppGenericClass IEnumerable_1_t8352_GenericClass;
TypeInfo IEnumerable_1_t8352_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8352_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8352_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8352_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8352_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8352_0_0_0/* byval_arg */
	, &IEnumerable_1_t8352_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8352_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8351_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>
extern MethodInfo IList_1_get_Item_m43471_MethodInfo;
extern MethodInfo IList_1_set_Item_m43472_MethodInfo;
static PropertyInfo IList_1_t8351____Item_PropertyInfo = 
{
	&IList_1_t8351_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43471_MethodInfo/* get */
	, &IList_1_set_Item_m43472_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8351_PropertyInfos[] =
{
	&IList_1_t8351____Item_PropertyInfo,
	NULL
};
extern Il2CppType AlertDescription_t1442_0_0_0;
static ParameterInfo IList_1_t8351_IList_1_IndexOf_m43473_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t1442_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43473_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43473_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8351_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8351_IList_1_IndexOf_m43473_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43473_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AlertDescription_t1442_0_0_0;
static ParameterInfo IList_1_t8351_IList_1_Insert_m43474_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t1442_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43474_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43474_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8351_IList_1_Insert_m43474_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43474_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8351_IList_1_RemoveAt_m43475_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43475_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43475_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8351_IList_1_RemoveAt_m43475_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43475_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8351_IList_1_get_Item_m43471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AlertDescription_t1442_0_0_0;
extern void* RuntimeInvoker_AlertDescription_t1442_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43471_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43471_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8351_il2cpp_TypeInfo/* declaring_type */
	, &AlertDescription_t1442_0_0_0/* return_type */
	, RuntimeInvoker_AlertDescription_t1442_Int32_t73/* invoker_method */
	, IList_1_t8351_IList_1_get_Item_m43471_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43471_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AlertDescription_t1442_0_0_0;
static ParameterInfo IList_1_t8351_IList_1_set_Item_m43472_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AlertDescription_t1442_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43472_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.AlertDescription>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43472_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8351_IList_1_set_Item_m43472_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43472_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8351_MethodInfos[] =
{
	&IList_1_IndexOf_m43473_MethodInfo,
	&IList_1_Insert_m43474_MethodInfo,
	&IList_1_RemoveAt_m43475_MethodInfo,
	&IList_1_get_Item_m43471_MethodInfo,
	&IList_1_set_Item_m43472_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8351_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8350_il2cpp_TypeInfo,
	&IEnumerable_1_t8352_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8351_0_0_0;
extern Il2CppType IList_1_t8351_1_0_0;
struct IList_1_t8351;
extern Il2CppGenericClass IList_1_t8351_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8351_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8351_MethodInfos/* methods */
	, IList_1_t8351_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8351_il2cpp_TypeInfo/* element_class */
	, IList_1_t8351_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8351_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8351_0_0_0/* byval_arg */
	, &IList_1_t8351_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8351_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6518_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo IEnumerator_1_get_Current_m43476_MethodInfo;
static PropertyInfo IEnumerator_1_t6518____Current_PropertyInfo = 
{
	&IEnumerator_1_t6518_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43476_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6518_PropertyInfos[] =
{
	&IEnumerator_1_t6518____Current_PropertyInfo,
	NULL
};
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
extern void* RuntimeInvoker_CipherAlgorithmType_t1444 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43476_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43476_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6518_il2cpp_TypeInfo/* declaring_type */
	, &CipherAlgorithmType_t1444_0_0_0/* return_type */
	, RuntimeInvoker_CipherAlgorithmType_t1444/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43476_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6518_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43476_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6518_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6518_0_0_0;
extern Il2CppType IEnumerator_1_t6518_1_0_0;
struct IEnumerator_1_t6518;
extern Il2CppGenericClass IEnumerator_1_t6518_GenericClass;
TypeInfo IEnumerator_1_t6518_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6518_MethodInfos/* methods */
	, IEnumerator_1_t6518_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6518_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6518_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6518_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6518_0_0_0/* byval_arg */
	, &IEnumerator_1_t6518_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6518_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_490.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4630_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_490MethodDeclarations.h"

extern TypeInfo CipherAlgorithmType_t1444_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25340_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCipherAlgorithmType_t1444_m33433_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.CipherAlgorithmType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.CipherAlgorithmType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCipherAlgorithmType_t1444_m33433 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25336_MethodInfo;
 void InternalEnumerator_1__ctor_m25336 (InternalEnumerator_1_t4630 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337 (InternalEnumerator_1_t4630 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25340(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25340_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CipherAlgorithmType_t1444_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25338_MethodInfo;
 void InternalEnumerator_1_Dispose_m25338 (InternalEnumerator_1_t4630 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25339_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25339 (InternalEnumerator_1_t4630 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25340 (InternalEnumerator_1_t4630 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCipherAlgorithmType_t1444_m33433(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCipherAlgorithmType_t1444_m33433_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4630____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4630, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4630____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4630, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4630_FieldInfos[] =
{
	&InternalEnumerator_1_t4630____array_0_FieldInfo,
	&InternalEnumerator_1_t4630____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4630____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4630_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4630____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4630_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25340_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4630_PropertyInfos[] =
{
	&InternalEnumerator_1_t4630____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4630____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4630_InternalEnumerator_1__ctor_m25336_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25336_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25336_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25336/* method */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4630_InternalEnumerator_1__ctor_m25336_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25336_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337/* method */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25338_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25338_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25338/* method */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25338_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25339_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25339_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25339/* method */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25339_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
extern void* RuntimeInvoker_CipherAlgorithmType_t1444 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25340_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25340_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25340/* method */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* declaring_type */
	, &CipherAlgorithmType_t1444_0_0_0/* return_type */
	, RuntimeInvoker_CipherAlgorithmType_t1444/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25340_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4630_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25336_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337_MethodInfo,
	&InternalEnumerator_1_Dispose_m25338_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25339_MethodInfo,
	&InternalEnumerator_1_get_Current_m25340_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4630_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25337_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25339_MethodInfo,
	&InternalEnumerator_1_Dispose_m25338_MethodInfo,
	&InternalEnumerator_1_get_Current_m25340_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4630_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6518_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4630_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6518_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4630_0_0_0;
extern Il2CppType InternalEnumerator_1_t4630_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4630_GenericClass;
TypeInfo InternalEnumerator_1_t4630_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4630_MethodInfos/* methods */
	, InternalEnumerator_1_t4630_PropertyInfos/* properties */
	, InternalEnumerator_1_t4630_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4630_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4630_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4630_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4630_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4630_1_0_0/* this_arg */
	, InternalEnumerator_1_t4630_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4630_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4630)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8353_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo ICollection_1_get_Count_m43477_MethodInfo;
static PropertyInfo ICollection_1_t8353____Count_PropertyInfo = 
{
	&ICollection_1_t8353_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43477_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43478_MethodInfo;
static PropertyInfo ICollection_1_t8353____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8353_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43478_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8353_PropertyInfos[] =
{
	&ICollection_1_t8353____Count_PropertyInfo,
	&ICollection_1_t8353____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43477_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Count()
MethodInfo ICollection_1_get_Count_m43477_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43477_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43478_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43478_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43478_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
static ParameterInfo ICollection_1_t8353_ICollection_1_Add_m43479_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t1444_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43479_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Add(T)
MethodInfo ICollection_1_Add_m43479_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8353_ICollection_1_Add_m43479_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43479_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43480_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Clear()
MethodInfo ICollection_1_Clear_m43480_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43480_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
static ParameterInfo ICollection_1_t8353_ICollection_1_Contains_m43481_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t1444_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43481_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Contains(T)
MethodInfo ICollection_1_Contains_m43481_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8353_ICollection_1_Contains_m43481_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43481_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmTypeU5BU5D_t5470_0_0_0;
extern Il2CppType CipherAlgorithmTypeU5BU5D_t5470_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8353_ICollection_1_CopyTo_m43482_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmTypeU5BU5D_t5470_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43482_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43482_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8353_ICollection_1_CopyTo_m43482_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43482_GenericMethod/* genericMethod */

};
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
static ParameterInfo ICollection_1_t8353_ICollection_1_Remove_m43483_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t1444_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43483_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Remove(T)
MethodInfo ICollection_1_Remove_m43483_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8353_ICollection_1_Remove_m43483_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43483_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8353_MethodInfos[] =
{
	&ICollection_1_get_Count_m43477_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43478_MethodInfo,
	&ICollection_1_Add_m43479_MethodInfo,
	&ICollection_1_Clear_m43480_MethodInfo,
	&ICollection_1_Contains_m43481_MethodInfo,
	&ICollection_1_CopyTo_m43482_MethodInfo,
	&ICollection_1_Remove_m43483_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8355_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8353_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8355_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8353_0_0_0;
extern Il2CppType ICollection_1_t8353_1_0_0;
struct ICollection_1_t8353;
extern Il2CppGenericClass ICollection_1_t8353_GenericClass;
TypeInfo ICollection_1_t8353_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8353_MethodInfos/* methods */
	, ICollection_1_t8353_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8353_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8353_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8353_0_0_0/* byval_arg */
	, &ICollection_1_t8353_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8353_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern Il2CppType IEnumerator_1_t6518_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43484_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43484_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8355_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6518_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43484_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8355_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43484_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8355_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8355_0_0_0;
extern Il2CppType IEnumerable_1_t8355_1_0_0;
struct IEnumerable_1_t8355;
extern Il2CppGenericClass IEnumerable_1_t8355_GenericClass;
TypeInfo IEnumerable_1_t8355_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8355_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8355_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8355_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8355_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8355_0_0_0/* byval_arg */
	, &IEnumerable_1_t8355_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8355_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8354_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>
extern MethodInfo IList_1_get_Item_m43485_MethodInfo;
extern MethodInfo IList_1_set_Item_m43486_MethodInfo;
static PropertyInfo IList_1_t8354____Item_PropertyInfo = 
{
	&IList_1_t8354_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43485_MethodInfo/* get */
	, &IList_1_set_Item_m43486_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8354_PropertyInfos[] =
{
	&IList_1_t8354____Item_PropertyInfo,
	NULL
};
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
static ParameterInfo IList_1_t8354_IList_1_IndexOf_m43487_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t1444_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43487_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43487_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8354_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8354_IList_1_IndexOf_m43487_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43487_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
static ParameterInfo IList_1_t8354_IList_1_Insert_m43488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t1444_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43488_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43488_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8354_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8354_IList_1_Insert_m43488_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43488_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8354_IList_1_RemoveAt_m43489_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43489_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43489_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8354_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8354_IList_1_RemoveAt_m43489_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43489_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8354_IList_1_get_Item_m43485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
extern void* RuntimeInvoker_CipherAlgorithmType_t1444_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43485_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43485_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8354_il2cpp_TypeInfo/* declaring_type */
	, &CipherAlgorithmType_t1444_0_0_0/* return_type */
	, RuntimeInvoker_CipherAlgorithmType_t1444_Int32_t73/* invoker_method */
	, IList_1_t8354_IList_1_get_Item_m43485_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43485_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CipherAlgorithmType_t1444_0_0_0;
static ParameterInfo IList_1_t8354_IList_1_set_Item_m43486_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CipherAlgorithmType_t1444_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43486_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.CipherAlgorithmType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43486_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8354_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8354_IList_1_set_Item_m43486_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43486_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8354_MethodInfos[] =
{
	&IList_1_IndexOf_m43487_MethodInfo,
	&IList_1_Insert_m43488_MethodInfo,
	&IList_1_RemoveAt_m43489_MethodInfo,
	&IList_1_get_Item_m43485_MethodInfo,
	&IList_1_set_Item_m43486_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8354_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8353_il2cpp_TypeInfo,
	&IEnumerable_1_t8355_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8354_0_0_0;
extern Il2CppType IList_1_t8354_1_0_0;
struct IList_1_t8354;
extern Il2CppGenericClass IList_1_t8354_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8354_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8354_MethodInfos/* methods */
	, IList_1_t8354_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8354_il2cpp_TypeInfo/* element_class */
	, IList_1_t8354_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8354_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8354_0_0_0/* byval_arg */
	, &IList_1_t8354_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8354_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6519_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"


// T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Byte[]>
extern MethodInfo IEnumerator_1_get_Current_m43490_MethodInfo;
static PropertyInfo IEnumerator_1_t6519____Current_PropertyInfo = 
{
	&IEnumerator_1_t6519_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43490_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6519_PropertyInfos[] =
{
	&IEnumerator_1_t6519____Current_PropertyInfo,
	NULL
};
extern Il2CppType ByteU5BU5D_t112_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43490_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Byte[]>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43490_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6519_il2cpp_TypeInfo/* declaring_type */
	, &ByteU5BU5D_t112_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43490_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6519_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43490_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6519_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6519_0_0_0;
extern Il2CppType IEnumerator_1_t6519_1_0_0;
struct IEnumerator_1_t6519;
extern Il2CppGenericClass IEnumerator_1_t6519_GenericClass;
TypeInfo IEnumerator_1_t6519_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6519_MethodInfos/* methods */
	, IEnumerator_1_t6519_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6519_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6519_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6519_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6519_0_0_0/* byval_arg */
	, &IEnumerator_1_t6519_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6519_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Byte[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_491.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4631_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Byte[]>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_491MethodDeclarations.h"

extern TypeInfo ByteU5BU5D_t112_il2cpp_TypeInfo;
extern TypeInfo Byte_t97_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25345_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisByteU5BU5D_t112_m33444_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26983_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26983(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Byte[]>(System.Int32)
#define Array_InternalArray__get_Item_TisByteU5BU5D_t112_m33444(__this, p0, method) (ByteU5BU5D_t112*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Byte[]>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Byte[]>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Byte[]>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4631____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4631, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4631____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4631, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4631_FieldInfos[] =
{
	&InternalEnumerator_1_t4631____array_0_FieldInfo,
	&InternalEnumerator_1_t4631____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25342_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4631____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4631_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25342_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4631____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4631_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25345_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4631_PropertyInfos[] =
{
	&InternalEnumerator_1_t4631____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4631____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4631_InternalEnumerator_1__ctor_m25341_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25341_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25341_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4631_InternalEnumerator_1__ctor_m25341_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25341_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25342_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Byte[]>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25342_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25342_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25343_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Byte[]>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25343_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25343_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25344_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Byte[]>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25344_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25344_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5D_t112_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25345_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Byte[]>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25345_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* declaring_type */
	, &ByteU5BU5D_t112_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25345_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4631_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25341_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25342_MethodInfo,
	&InternalEnumerator_1_Dispose_m25343_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25344_MethodInfo,
	&InternalEnumerator_1_get_Current_m25345_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25344_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25343_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4631_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25342_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25344_MethodInfo,
	&InternalEnumerator_1_Dispose_m25343_MethodInfo,
	&InternalEnumerator_1_get_Current_m25345_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4631_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6519_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4631_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6519_il2cpp_TypeInfo, 7},
};
extern TypeInfo ByteU5BU5D_t112_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4631_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25345_MethodInfo/* Method Usage */,
	&ByteU5BU5D_t112_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisByteU5BU5D_t112_m33444_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4631_0_0_0;
extern Il2CppType InternalEnumerator_1_t4631_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4631_GenericClass;
TypeInfo InternalEnumerator_1_t4631_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4631_MethodInfos/* methods */
	, InternalEnumerator_1_t4631_PropertyInfos/* properties */
	, InternalEnumerator_1_t4631_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4631_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4631_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4631_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4631_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4631_1_0_0/* this_arg */
	, InternalEnumerator_1_t4631_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4631_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4631_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4631)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8356_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Byte[]>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Byte[]>
extern MethodInfo ICollection_1_get_Count_m43491_MethodInfo;
static PropertyInfo ICollection_1_t8356____Count_PropertyInfo = 
{
	&ICollection_1_t8356_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43491_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43492_MethodInfo;
static PropertyInfo ICollection_1_t8356____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8356_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43492_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8356_PropertyInfos[] =
{
	&ICollection_1_t8356____Count_PropertyInfo,
	&ICollection_1_t8356____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43491_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Byte[]>::get_Count()
MethodInfo ICollection_1_get_Count_m43491_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43491_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43492_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43492_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43492_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5D_t112_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo ICollection_1_t8356_ICollection_1_Add_m43493_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43493_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Add(T)
MethodInfo ICollection_1_Add_m43493_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8356_ICollection_1_Add_m43493_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43493_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43494_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::Clear()
MethodInfo ICollection_1_Clear_m43494_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43494_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo ICollection_1_t8356_ICollection_1_Contains_m43495_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43495_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Contains(T)
MethodInfo ICollection_1_Contains_m43495_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8356_ICollection_1_Contains_m43495_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43495_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5DU5BU5D_t1537_0_0_0;
extern Il2CppType ByteU5BU5DU5BU5D_t1537_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8356_ICollection_1_CopyTo_m43496_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5DU5BU5D_t1537_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43496_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Byte[]>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43496_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8356_ICollection_1_CopyTo_m43496_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43496_GenericMethod/* genericMethod */

};
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo ICollection_1_t8356_ICollection_1_Remove_m43497_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43497_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Byte[]>::Remove(T)
MethodInfo ICollection_1_Remove_m43497_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8356_ICollection_1_Remove_m43497_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43497_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8356_MethodInfos[] =
{
	&ICollection_1_get_Count_m43491_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43492_MethodInfo,
	&ICollection_1_Add_m43493_MethodInfo,
	&ICollection_1_Clear_m43494_MethodInfo,
	&ICollection_1_Contains_m43495_MethodInfo,
	&ICollection_1_CopyTo_m43496_MethodInfo,
	&ICollection_1_Remove_m43497_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8358_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8356_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8358_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8356_0_0_0;
extern Il2CppType ICollection_1_t8356_1_0_0;
struct ICollection_1_t8356;
extern Il2CppGenericClass ICollection_1_t8356_GenericClass;
TypeInfo ICollection_1_t8356_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8356_MethodInfos/* methods */
	, ICollection_1_t8356_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8356_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8356_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8356_0_0_0/* byval_arg */
	, &ICollection_1_t8356_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8356_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Byte[]>
extern Il2CppType IEnumerator_1_t6519_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43498_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Byte[]>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43498_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8358_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6519_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43498_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8358_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43498_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8358_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8358_0_0_0;
extern Il2CppType IEnumerable_1_t8358_1_0_0;
struct IEnumerable_1_t8358;
extern Il2CppGenericClass IEnumerable_1_t8358_GenericClass;
TypeInfo IEnumerable_1_t8358_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8358_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8358_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8358_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8358_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8358_0_0_0/* byval_arg */
	, &IEnumerable_1_t8358_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8358_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8357_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Byte[]>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Byte[]>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Byte[]>
extern MethodInfo IList_1_get_Item_m43499_MethodInfo;
extern MethodInfo IList_1_set_Item_m43500_MethodInfo;
static PropertyInfo IList_1_t8357____Item_PropertyInfo = 
{
	&IList_1_t8357_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43499_MethodInfo/* get */
	, &IList_1_set_Item_m43500_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8357_PropertyInfos[] =
{
	&IList_1_t8357____Item_PropertyInfo,
	NULL
};
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo IList_1_t8357_IList_1_IndexOf_m43501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43501_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Byte[]>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43501_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8357_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8357_IList_1_IndexOf_m43501_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43501_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo IList_1_t8357_IList_1_Insert_m43502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43502_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43502_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8357_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8357_IList_1_Insert_m43502_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43502_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8357_IList_1_RemoveAt_m43503_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43503_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43503_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8357_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8357_IList_1_RemoveAt_m43503_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43503_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8357_IList_1_get_Item_m43499_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ByteU5BU5D_t112_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43499_GenericMethod;
// T System.Collections.Generic.IList`1<System.Byte[]>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43499_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8357_il2cpp_TypeInfo/* declaring_type */
	, &ByteU5BU5D_t112_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8357_IList_1_get_Item_m43499_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43499_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo IList_1_t8357_IList_1_set_Item_m43500_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43500_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Byte[]>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43500_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8357_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8357_IList_1_set_Item_m43500_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43500_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8357_MethodInfos[] =
{
	&IList_1_IndexOf_m43501_MethodInfo,
	&IList_1_Insert_m43502_MethodInfo,
	&IList_1_RemoveAt_m43503_MethodInfo,
	&IList_1_get_Item_m43499_MethodInfo,
	&IList_1_set_Item_m43500_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8357_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8356_il2cpp_TypeInfo,
	&IEnumerable_1_t8358_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8357_0_0_0;
extern Il2CppType IList_1_t8357_1_0_0;
struct IList_1_t8357;
extern Il2CppGenericClass IList_1_t8357_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8357_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8357_MethodInfos/* methods */
	, IList_1_t8357_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8357_il2cpp_TypeInfo/* element_class */
	, IList_1_t8357_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8357_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8357_0_0_0/* byval_arg */
	, &IList_1_t8357_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8357_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6521_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo IEnumerator_1_get_Current_m43504_MethodInfo;
static PropertyInfo IEnumerator_1_t6521____Current_PropertyInfo = 
{
	&IEnumerator_1_t6521_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43504_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6521_PropertyInfos[] =
{
	&IEnumerator_1_t6521____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContentType_t1460_0_0_0;
extern void* RuntimeInvoker_ContentType_t1460 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43504_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43504_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6521_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t1460_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t1460/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43504_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6521_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43504_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6521_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6521_0_0_0;
extern Il2CppType IEnumerator_1_t6521_1_0_0;
struct IEnumerator_1_t6521;
extern Il2CppGenericClass IEnumerator_1_t6521_GenericClass;
TypeInfo IEnumerator_1_t6521_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6521_MethodInfos/* methods */
	, IEnumerator_1_t6521_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6521_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6521_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6521_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6521_0_0_0/* byval_arg */
	, &IEnumerator_1_t6521_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6521_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_492.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4632_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_492MethodDeclarations.h"

extern TypeInfo ContentType_t1460_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25350_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContentType_t1460_m33455_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.ContentType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.ContentType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisContentType_t1460_m33455 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25346_MethodInfo;
 void InternalEnumerator_1__ctor_m25346 (InternalEnumerator_1_t4632 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347 (InternalEnumerator_1_t4632 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m25350(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25350_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ContentType_t1460_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25348_MethodInfo;
 void InternalEnumerator_1_Dispose_m25348 (InternalEnumerator_1_t4632 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25349_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25349 (InternalEnumerator_1_t4632 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m25350 (InternalEnumerator_1_t4632 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisContentType_t1460_m33455(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisContentType_t1460_m33455_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4632____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4632, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4632____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4632, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4632_FieldInfos[] =
{
	&InternalEnumerator_1_t4632____array_0_FieldInfo,
	&InternalEnumerator_1_t4632____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4632____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4632_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4632____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4632_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25350_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4632_PropertyInfos[] =
{
	&InternalEnumerator_1_t4632____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4632____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4632_InternalEnumerator_1__ctor_m25346_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25346_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25346_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25346/* method */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4632_InternalEnumerator_1__ctor_m25346_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25346_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347/* method */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25348_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25348_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25348/* method */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25348_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25349_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25349_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25349/* method */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25349_GenericMethod/* genericMethod */

};
extern Il2CppType ContentType_t1460_0_0_0;
extern void* RuntimeInvoker_ContentType_t1460 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25350_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ContentType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25350_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25350/* method */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t1460_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t1460/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25350_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4632_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25346_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347_MethodInfo,
	&InternalEnumerator_1_Dispose_m25348_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25349_MethodInfo,
	&InternalEnumerator_1_get_Current_m25350_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4632_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25347_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25349_MethodInfo,
	&InternalEnumerator_1_Dispose_m25348_MethodInfo,
	&InternalEnumerator_1_get_Current_m25350_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4632_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6521_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4632_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6521_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4632_0_0_0;
extern Il2CppType InternalEnumerator_1_t4632_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4632_GenericClass;
TypeInfo InternalEnumerator_1_t4632_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4632_MethodInfos/* methods */
	, InternalEnumerator_1_t4632_PropertyInfos/* properties */
	, InternalEnumerator_1_t4632_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4632_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4632_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4632_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4632_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4632_1_0_0/* this_arg */
	, InternalEnumerator_1_t4632_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4632_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4632)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8359_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo ICollection_1_get_Count_m43505_MethodInfo;
static PropertyInfo ICollection_1_t8359____Count_PropertyInfo = 
{
	&ICollection_1_t8359_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43505_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43506_MethodInfo;
static PropertyInfo ICollection_1_t8359____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8359_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43506_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8359_PropertyInfos[] =
{
	&ICollection_1_t8359____Count_PropertyInfo,
	&ICollection_1_t8359____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43505_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::get_Count()
MethodInfo ICollection_1_get_Count_m43505_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43505_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43506_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43506_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43506_GenericMethod/* genericMethod */

};
extern Il2CppType ContentType_t1460_0_0_0;
extern Il2CppType ContentType_t1460_0_0_0;
static ParameterInfo ICollection_1_t8359_ICollection_1_Add_m43507_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t1460_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43507_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Add(T)
MethodInfo ICollection_1_Add_m43507_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Byte_t97/* invoker_method */
	, ICollection_1_t8359_ICollection_1_Add_m43507_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43507_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43508_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Clear()
MethodInfo ICollection_1_Clear_m43508_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43508_GenericMethod/* genericMethod */

};
extern Il2CppType ContentType_t1460_0_0_0;
static ParameterInfo ICollection_1_t8359_ICollection_1_Contains_m43509_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t1460_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43509_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Contains(T)
MethodInfo ICollection_1_Contains_m43509_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Byte_t97/* invoker_method */
	, ICollection_1_t8359_ICollection_1_Contains_m43509_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43509_GenericMethod/* genericMethod */

};
extern Il2CppType ContentTypeU5BU5D_t5471_0_0_0;
extern Il2CppType ContentTypeU5BU5D_t5471_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8359_ICollection_1_CopyTo_m43510_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContentTypeU5BU5D_t5471_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43510_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43510_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8359_ICollection_1_CopyTo_m43510_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43510_GenericMethod/* genericMethod */

};
extern Il2CppType ContentType_t1460_0_0_0;
static ParameterInfo ICollection_1_t8359_ICollection_1_Remove_m43511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t1460_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43511_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ContentType>::Remove(T)
MethodInfo ICollection_1_Remove_m43511_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Byte_t97/* invoker_method */
	, ICollection_1_t8359_ICollection_1_Remove_m43511_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43511_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8359_MethodInfos[] =
{
	&ICollection_1_get_Count_m43505_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43506_MethodInfo,
	&ICollection_1_Add_m43507_MethodInfo,
	&ICollection_1_Clear_m43508_MethodInfo,
	&ICollection_1_Contains_m43509_MethodInfo,
	&ICollection_1_CopyTo_m43510_MethodInfo,
	&ICollection_1_Remove_m43511_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8361_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8359_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8361_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8359_0_0_0;
extern Il2CppType ICollection_1_t8359_1_0_0;
struct ICollection_1_t8359;
extern Il2CppGenericClass ICollection_1_t8359_GenericClass;
TypeInfo ICollection_1_t8359_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8359_MethodInfos/* methods */
	, ICollection_1_t8359_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8359_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8359_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8359_0_0_0/* byval_arg */
	, &ICollection_1_t8359_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8359_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ContentType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ContentType>
extern Il2CppType IEnumerator_1_t6521_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43512_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ContentType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43512_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8361_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6521_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43512_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8361_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43512_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8361_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8361_0_0_0;
extern Il2CppType IEnumerable_1_t8361_1_0_0;
struct IEnumerable_1_t8361;
extern Il2CppGenericClass IEnumerable_1_t8361_GenericClass;
TypeInfo IEnumerable_1_t8361_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8361_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8361_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8361_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8361_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8361_0_0_0/* byval_arg */
	, &IEnumerable_1_t8361_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8361_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8360_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>
extern MethodInfo IList_1_get_Item_m43513_MethodInfo;
extern MethodInfo IList_1_set_Item_m43514_MethodInfo;
static PropertyInfo IList_1_t8360____Item_PropertyInfo = 
{
	&IList_1_t8360_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43513_MethodInfo/* get */
	, &IList_1_set_Item_m43514_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8360_PropertyInfos[] =
{
	&IList_1_t8360____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContentType_t1460_0_0_0;
static ParameterInfo IList_1_t8360_IList_1_IndexOf_m43515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContentType_t1460_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43515_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43515_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8360_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8360_IList_1_IndexOf_m43515_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43515_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ContentType_t1460_0_0_0;
static ParameterInfo IList_1_t8360_IList_1_Insert_m43516_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContentType_t1460_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43516_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43516_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8360_IList_1_Insert_m43516_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43516_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8360_IList_1_RemoveAt_m43517_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43517_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43517_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8360_IList_1_RemoveAt_m43517_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43517_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8360_IList_1_get_Item_m43513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ContentType_t1460_0_0_0;
extern void* RuntimeInvoker_ContentType_t1460_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43513_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43513_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8360_il2cpp_TypeInfo/* declaring_type */
	, &ContentType_t1460_0_0_0/* return_type */
	, RuntimeInvoker_ContentType_t1460_Int32_t73/* invoker_method */
	, IList_1_t8360_IList_1_get_Item_m43513_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43513_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ContentType_t1460_0_0_0;
static ParameterInfo IList_1_t8360_IList_1_set_Item_m43514_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContentType_t1460_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43514_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ContentType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43514_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8360_IList_1_set_Item_m43514_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43514_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8360_MethodInfos[] =
{
	&IList_1_IndexOf_m43515_MethodInfo,
	&IList_1_Insert_m43516_MethodInfo,
	&IList_1_RemoveAt_m43517_MethodInfo,
	&IList_1_get_Item_m43513_MethodInfo,
	&IList_1_set_Item_m43514_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8360_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8359_il2cpp_TypeInfo,
	&IEnumerable_1_t8361_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8360_0_0_0;
extern Il2CppType IList_1_t8360_1_0_0;
struct IList_1_t8360;
extern Il2CppGenericClass IList_1_t8360_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8360_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8360_MethodInfos/* methods */
	, IList_1_t8360_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8360_il2cpp_TypeInfo/* element_class */
	, IList_1_t8360_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8360_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8360_0_0_0/* byval_arg */
	, &IList_1_t8360_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8360_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6523_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo IEnumerator_1_get_Current_m43518_MethodInfo;
static PropertyInfo IEnumerator_1_t6523____Current_PropertyInfo = 
{
	&IEnumerator_1_t6523_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43518_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6523_PropertyInfos[] =
{
	&IEnumerator_1_t6523____Current_PropertyInfo,
	NULL
};
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
extern void* RuntimeInvoker_ExchangeAlgorithmType_t1464 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43518_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43518_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6523_il2cpp_TypeInfo/* declaring_type */
	, &ExchangeAlgorithmType_t1464_0_0_0/* return_type */
	, RuntimeInvoker_ExchangeAlgorithmType_t1464/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43518_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6523_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43518_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6523_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6523_0_0_0;
extern Il2CppType IEnumerator_1_t6523_1_0_0;
struct IEnumerator_1_t6523;
extern Il2CppGenericClass IEnumerator_1_t6523_GenericClass;
TypeInfo IEnumerator_1_t6523_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6523_MethodInfos/* methods */
	, IEnumerator_1_t6523_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6523_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6523_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6523_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6523_0_0_0/* byval_arg */
	, &IEnumerator_1_t6523_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6523_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_493.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4633_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_493MethodDeclarations.h"

extern TypeInfo ExchangeAlgorithmType_t1464_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25355_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisExchangeAlgorithmType_t1464_m33466_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisExchangeAlgorithmType_t1464_m33466 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25351_MethodInfo;
 void InternalEnumerator_1__ctor_m25351 (InternalEnumerator_1_t4633 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352 (InternalEnumerator_1_t4633 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25355(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25355_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ExchangeAlgorithmType_t1464_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25353_MethodInfo;
 void InternalEnumerator_1_Dispose_m25353 (InternalEnumerator_1_t4633 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25354_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25354 (InternalEnumerator_1_t4633 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25355 (InternalEnumerator_1_t4633 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisExchangeAlgorithmType_t1464_m33466(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisExchangeAlgorithmType_t1464_m33466_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4633____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4633, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4633____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4633, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4633_FieldInfos[] =
{
	&InternalEnumerator_1_t4633____array_0_FieldInfo,
	&InternalEnumerator_1_t4633____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4633____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4633_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4633____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4633_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25355_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4633_PropertyInfos[] =
{
	&InternalEnumerator_1_t4633____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4633____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4633_InternalEnumerator_1__ctor_m25351_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25351_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25351_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25351/* method */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4633_InternalEnumerator_1__ctor_m25351_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25351_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352/* method */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25353_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25353_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25353/* method */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25353_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25354_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25354_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25354/* method */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25354_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
extern void* RuntimeInvoker_ExchangeAlgorithmType_t1464 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25355_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25355_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25355/* method */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* declaring_type */
	, &ExchangeAlgorithmType_t1464_0_0_0/* return_type */
	, RuntimeInvoker_ExchangeAlgorithmType_t1464/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25355_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4633_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25351_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352_MethodInfo,
	&InternalEnumerator_1_Dispose_m25353_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25354_MethodInfo,
	&InternalEnumerator_1_get_Current_m25355_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4633_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25352_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25354_MethodInfo,
	&InternalEnumerator_1_Dispose_m25353_MethodInfo,
	&InternalEnumerator_1_get_Current_m25355_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4633_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6523_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4633_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6523_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4633_0_0_0;
extern Il2CppType InternalEnumerator_1_t4633_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4633_GenericClass;
TypeInfo InternalEnumerator_1_t4633_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4633_MethodInfos/* methods */
	, InternalEnumerator_1_t4633_PropertyInfos/* properties */
	, InternalEnumerator_1_t4633_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4633_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4633_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4633_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4633_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4633_1_0_0/* this_arg */
	, InternalEnumerator_1_t4633_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4633_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4633)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8362_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo ICollection_1_get_Count_m43519_MethodInfo;
static PropertyInfo ICollection_1_t8362____Count_PropertyInfo = 
{
	&ICollection_1_t8362_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43519_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43520_MethodInfo;
static PropertyInfo ICollection_1_t8362____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8362_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43520_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8362_PropertyInfos[] =
{
	&ICollection_1_t8362____Count_PropertyInfo,
	&ICollection_1_t8362____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43519_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Count()
MethodInfo ICollection_1_get_Count_m43519_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43519_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43520_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43520_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43520_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
static ParameterInfo ICollection_1_t8362_ICollection_1_Add_m43521_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t1464_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43521_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Add(T)
MethodInfo ICollection_1_Add_m43521_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8362_ICollection_1_Add_m43521_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43521_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43522_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Clear()
MethodInfo ICollection_1_Clear_m43522_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43522_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
static ParameterInfo ICollection_1_t8362_ICollection_1_Contains_m43523_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t1464_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43523_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Contains(T)
MethodInfo ICollection_1_Contains_m43523_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8362_ICollection_1_Contains_m43523_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43523_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmTypeU5BU5D_t5472_0_0_0;
extern Il2CppType ExchangeAlgorithmTypeU5BU5D_t5472_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8362_ICollection_1_CopyTo_m43524_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmTypeU5BU5D_t5472_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43524_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43524_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8362_ICollection_1_CopyTo_m43524_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43524_GenericMethod/* genericMethod */

};
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
static ParameterInfo ICollection_1_t8362_ICollection_1_Remove_m43525_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t1464_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43525_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Remove(T)
MethodInfo ICollection_1_Remove_m43525_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8362_ICollection_1_Remove_m43525_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43525_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8362_MethodInfos[] =
{
	&ICollection_1_get_Count_m43519_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43520_MethodInfo,
	&ICollection_1_Add_m43521_MethodInfo,
	&ICollection_1_Clear_m43522_MethodInfo,
	&ICollection_1_Contains_m43523_MethodInfo,
	&ICollection_1_CopyTo_m43524_MethodInfo,
	&ICollection_1_Remove_m43525_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8364_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8362_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8364_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8362_0_0_0;
extern Il2CppType ICollection_1_t8362_1_0_0;
struct ICollection_1_t8362;
extern Il2CppGenericClass ICollection_1_t8362_GenericClass;
TypeInfo ICollection_1_t8362_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8362_MethodInfos/* methods */
	, ICollection_1_t8362_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8362_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8362_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8362_0_0_0/* byval_arg */
	, &ICollection_1_t8362_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8362_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern Il2CppType IEnumerator_1_t6523_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43526_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43526_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8364_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6523_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43526_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8364_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43526_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8364_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8364_0_0_0;
extern Il2CppType IEnumerable_1_t8364_1_0_0;
struct IEnumerable_1_t8364;
extern Il2CppGenericClass IEnumerable_1_t8364_GenericClass;
TypeInfo IEnumerable_1_t8364_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8364_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8364_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8364_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8364_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8364_0_0_0/* byval_arg */
	, &IEnumerable_1_t8364_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8364_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8363_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>
extern MethodInfo IList_1_get_Item_m43527_MethodInfo;
extern MethodInfo IList_1_set_Item_m43528_MethodInfo;
static PropertyInfo IList_1_t8363____Item_PropertyInfo = 
{
	&IList_1_t8363_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43527_MethodInfo/* get */
	, &IList_1_set_Item_m43528_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8363_PropertyInfos[] =
{
	&IList_1_t8363____Item_PropertyInfo,
	NULL
};
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
static ParameterInfo IList_1_t8363_IList_1_IndexOf_m43529_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t1464_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43529_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43529_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8363_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8363_IList_1_IndexOf_m43529_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43529_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
static ParameterInfo IList_1_t8363_IList_1_Insert_m43530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t1464_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43530_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43530_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8363_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8363_IList_1_Insert_m43530_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43530_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8363_IList_1_RemoveAt_m43531_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43531_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43531_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8363_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8363_IList_1_RemoveAt_m43531_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43531_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8363_IList_1_get_Item_m43527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
extern void* RuntimeInvoker_ExchangeAlgorithmType_t1464_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43527_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43527_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8363_il2cpp_TypeInfo/* declaring_type */
	, &ExchangeAlgorithmType_t1464_0_0_0/* return_type */
	, RuntimeInvoker_ExchangeAlgorithmType_t1464_Int32_t73/* invoker_method */
	, IList_1_t8363_IList_1_get_Item_m43527_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43527_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ExchangeAlgorithmType_t1464_0_0_0;
static ParameterInfo IList_1_t8363_IList_1_set_Item_m43528_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ExchangeAlgorithmType_t1464_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43528_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.ExchangeAlgorithmType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43528_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8363_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8363_IList_1_set_Item_m43528_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43528_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8363_MethodInfos[] =
{
	&IList_1_IndexOf_m43529_MethodInfo,
	&IList_1_Insert_m43530_MethodInfo,
	&IList_1_RemoveAt_m43531_MethodInfo,
	&IList_1_get_Item_m43527_MethodInfo,
	&IList_1_set_Item_m43528_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8363_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8362_il2cpp_TypeInfo,
	&IEnumerable_1_t8364_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8363_0_0_0;
extern Il2CppType IList_1_t8363_1_0_0;
struct IList_1_t8363;
extern Il2CppGenericClass IList_1_t8363_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8363_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8363_MethodInfos/* methods */
	, IList_1_t8363_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8363_il2cpp_TypeInfo/* element_class */
	, IList_1_t8363_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8363_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8363_0_0_0/* byval_arg */
	, &IList_1_t8363_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8363_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6525_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo IEnumerator_1_get_Current_m43532_MethodInfo;
static PropertyInfo IEnumerator_1_t6525____Current_PropertyInfo = 
{
	&IEnumerator_1_t6525_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43532_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6525_PropertyInfos[] =
{
	&IEnumerator_1_t6525____Current_PropertyInfo,
	NULL
};
extern Il2CppType HandshakeState_t1465_0_0_0;
extern void* RuntimeInvoker_HandshakeState_t1465 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43532_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43532_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6525_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeState_t1465_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeState_t1465/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43532_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6525_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43532_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6525_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6525_0_0_0;
extern Il2CppType IEnumerator_1_t6525_1_0_0;
struct IEnumerator_1_t6525;
extern Il2CppGenericClass IEnumerator_1_t6525_GenericClass;
TypeInfo IEnumerator_1_t6525_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6525_MethodInfos/* methods */
	, IEnumerator_1_t6525_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6525_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6525_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6525_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6525_0_0_0/* byval_arg */
	, &IEnumerator_1_t6525_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6525_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_494.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4634_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_494MethodDeclarations.h"

extern TypeInfo HandshakeState_t1465_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25360_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHandshakeState_t1465_m33477_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.HandshakeState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.HandshakeState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisHandshakeState_t1465_m33477 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25356_MethodInfo;
 void InternalEnumerator_1__ctor_m25356 (InternalEnumerator_1_t4634 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357 (InternalEnumerator_1_t4634 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25360(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25360_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HandshakeState_t1465_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25358_MethodInfo;
 void InternalEnumerator_1_Dispose_m25358 (InternalEnumerator_1_t4634 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25359_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25359 (InternalEnumerator_1_t4634 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25360 (InternalEnumerator_1_t4634 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisHandshakeState_t1465_m33477(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHandshakeState_t1465_m33477_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4634____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4634, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4634____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4634, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4634_FieldInfos[] =
{
	&InternalEnumerator_1_t4634____array_0_FieldInfo,
	&InternalEnumerator_1_t4634____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4634____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4634_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4634____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4634_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25360_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4634_PropertyInfos[] =
{
	&InternalEnumerator_1_t4634____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4634____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4634_InternalEnumerator_1__ctor_m25356_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25356_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25356_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25356/* method */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4634_InternalEnumerator_1__ctor_m25356_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25356_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357/* method */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25358_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25358_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25358/* method */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25358_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25359_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25359_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25359/* method */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25359_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeState_t1465_0_0_0;
extern void* RuntimeInvoker_HandshakeState_t1465 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25360_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25360_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25360/* method */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeState_t1465_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeState_t1465/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25360_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4634_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25356_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357_MethodInfo,
	&InternalEnumerator_1_Dispose_m25358_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25359_MethodInfo,
	&InternalEnumerator_1_get_Current_m25360_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4634_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25357_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25359_MethodInfo,
	&InternalEnumerator_1_Dispose_m25358_MethodInfo,
	&InternalEnumerator_1_get_Current_m25360_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4634_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6525_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4634_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6525_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4634_0_0_0;
extern Il2CppType InternalEnumerator_1_t4634_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4634_GenericClass;
TypeInfo InternalEnumerator_1_t4634_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4634_MethodInfos/* methods */
	, InternalEnumerator_1_t4634_PropertyInfos/* properties */
	, InternalEnumerator_1_t4634_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4634_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4634_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4634_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4634_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4634_1_0_0/* this_arg */
	, InternalEnumerator_1_t4634_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4634_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4634)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8365_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo ICollection_1_get_Count_m43533_MethodInfo;
static PropertyInfo ICollection_1_t8365____Count_PropertyInfo = 
{
	&ICollection_1_t8365_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43533_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43534_MethodInfo;
static PropertyInfo ICollection_1_t8365____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8365_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43534_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8365_PropertyInfos[] =
{
	&ICollection_1_t8365____Count_PropertyInfo,
	&ICollection_1_t8365____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43533_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Count()
MethodInfo ICollection_1_get_Count_m43533_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43533_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43534_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43534_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43534_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeState_t1465_0_0_0;
extern Il2CppType HandshakeState_t1465_0_0_0;
static ParameterInfo ICollection_1_t8365_ICollection_1_Add_m43535_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t1465_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43535_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Add(T)
MethodInfo ICollection_1_Add_m43535_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8365_ICollection_1_Add_m43535_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43535_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43536_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Clear()
MethodInfo ICollection_1_Clear_m43536_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43536_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeState_t1465_0_0_0;
static ParameterInfo ICollection_1_t8365_ICollection_1_Contains_m43537_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t1465_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43537_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Contains(T)
MethodInfo ICollection_1_Contains_m43537_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8365_ICollection_1_Contains_m43537_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43537_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeStateU5BU5D_t5473_0_0_0;
extern Il2CppType HandshakeStateU5BU5D_t5473_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8365_ICollection_1_CopyTo_m43538_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeStateU5BU5D_t5473_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43538_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43538_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8365_ICollection_1_CopyTo_m43538_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43538_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeState_t1465_0_0_0;
static ParameterInfo ICollection_1_t8365_ICollection_1_Remove_m43539_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t1465_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43539_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HandshakeState>::Remove(T)
MethodInfo ICollection_1_Remove_m43539_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8365_ICollection_1_Remove_m43539_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43539_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8365_MethodInfos[] =
{
	&ICollection_1_get_Count_m43533_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43534_MethodInfo,
	&ICollection_1_Add_m43535_MethodInfo,
	&ICollection_1_Clear_m43536_MethodInfo,
	&ICollection_1_Contains_m43537_MethodInfo,
	&ICollection_1_CopyTo_m43538_MethodInfo,
	&ICollection_1_Remove_m43539_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8367_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8365_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8367_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8365_0_0_0;
extern Il2CppType ICollection_1_t8365_1_0_0;
struct ICollection_1_t8365;
extern Il2CppGenericClass ICollection_1_t8365_GenericClass;
TypeInfo ICollection_1_t8365_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8365_MethodInfos/* methods */
	, ICollection_1_t8365_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8365_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8365_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8365_0_0_0/* byval_arg */
	, &ICollection_1_t8365_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8365_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HandshakeState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HandshakeState>
extern Il2CppType IEnumerator_1_t6525_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43540_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HandshakeState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43540_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8367_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6525_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43540_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8367_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43540_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8367_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8367_0_0_0;
extern Il2CppType IEnumerable_1_t8367_1_0_0;
struct IEnumerable_1_t8367;
extern Il2CppGenericClass IEnumerable_1_t8367_GenericClass;
TypeInfo IEnumerable_1_t8367_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8367_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8367_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8367_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8367_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8367_0_0_0/* byval_arg */
	, &IEnumerable_1_t8367_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8367_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8366_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>
extern MethodInfo IList_1_get_Item_m43541_MethodInfo;
extern MethodInfo IList_1_set_Item_m43542_MethodInfo;
static PropertyInfo IList_1_t8366____Item_PropertyInfo = 
{
	&IList_1_t8366_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43541_MethodInfo/* get */
	, &IList_1_set_Item_m43542_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8366_PropertyInfos[] =
{
	&IList_1_t8366____Item_PropertyInfo,
	NULL
};
extern Il2CppType HandshakeState_t1465_0_0_0;
static ParameterInfo IList_1_t8366_IList_1_IndexOf_m43543_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t1465_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43543_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43543_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8366_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8366_IList_1_IndexOf_m43543_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43543_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType HandshakeState_t1465_0_0_0;
static ParameterInfo IList_1_t8366_IList_1_Insert_m43544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t1465_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43544_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43544_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8366_IList_1_Insert_m43544_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43544_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8366_IList_1_RemoveAt_m43545_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43545_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43545_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8366_IList_1_RemoveAt_m43545_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43545_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8366_IList_1_get_Item_m43541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType HandshakeState_t1465_0_0_0;
extern void* RuntimeInvoker_HandshakeState_t1465_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43541_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43541_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8366_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeState_t1465_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeState_t1465_Int32_t73/* invoker_method */
	, IList_1_t8366_IList_1_get_Item_m43541_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43541_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType HandshakeState_t1465_0_0_0;
static ParameterInfo IList_1_t8366_IList_1_set_Item_m43542_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HandshakeState_t1465_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43542_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HandshakeState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43542_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8366_IList_1_set_Item_m43542_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43542_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8366_MethodInfos[] =
{
	&IList_1_IndexOf_m43543_MethodInfo,
	&IList_1_Insert_m43544_MethodInfo,
	&IList_1_RemoveAt_m43545_MethodInfo,
	&IList_1_get_Item_m43541_MethodInfo,
	&IList_1_set_Item_m43542_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8366_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8365_il2cpp_TypeInfo,
	&IEnumerable_1_t8367_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8366_0_0_0;
extern Il2CppType IList_1_t8366_1_0_0;
struct IList_1_t8366;
extern Il2CppGenericClass IList_1_t8366_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8366_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8366_MethodInfos/* methods */
	, IList_1_t8366_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8366_il2cpp_TypeInfo/* element_class */
	, IList_1_t8366_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8366_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8366_0_0_0/* byval_arg */
	, &IList_1_t8366_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8366_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6527_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo IEnumerator_1_get_Current_m43546_MethodInfo;
static PropertyInfo IEnumerator_1_t6527____Current_PropertyInfo = 
{
	&IEnumerator_1_t6527_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43546_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6527_PropertyInfos[] =
{
	&IEnumerator_1_t6527____Current_PropertyInfo,
	NULL
};
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
extern void* RuntimeInvoker_HashAlgorithmType_t1466 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43546_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43546_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6527_il2cpp_TypeInfo/* declaring_type */
	, &HashAlgorithmType_t1466_0_0_0/* return_type */
	, RuntimeInvoker_HashAlgorithmType_t1466/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43546_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6527_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43546_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6527_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6527_0_0_0;
extern Il2CppType IEnumerator_1_t6527_1_0_0;
struct IEnumerator_1_t6527;
extern Il2CppGenericClass IEnumerator_1_t6527_GenericClass;
TypeInfo IEnumerator_1_t6527_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6527_MethodInfos/* methods */
	, IEnumerator_1_t6527_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6527_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6527_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6527_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6527_0_0_0/* byval_arg */
	, &IEnumerator_1_t6527_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6527_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_495.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4635_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_495MethodDeclarations.h"

extern TypeInfo HashAlgorithmType_t1466_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25365_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHashAlgorithmType_t1466_m33488_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.HashAlgorithmType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.HashAlgorithmType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisHashAlgorithmType_t1466_m33488 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25361_MethodInfo;
 void InternalEnumerator_1__ctor_m25361 (InternalEnumerator_1_t4635 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362 (InternalEnumerator_1_t4635 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25365(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25365_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HashAlgorithmType_t1466_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25363_MethodInfo;
 void InternalEnumerator_1_Dispose_m25363 (InternalEnumerator_1_t4635 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25364_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25364 (InternalEnumerator_1_t4635 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25365 (InternalEnumerator_1_t4635 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisHashAlgorithmType_t1466_m33488(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHashAlgorithmType_t1466_m33488_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4635____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4635, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4635____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4635, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4635_FieldInfos[] =
{
	&InternalEnumerator_1_t4635____array_0_FieldInfo,
	&InternalEnumerator_1_t4635____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4635____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4635_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4635____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4635_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25365_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4635_PropertyInfos[] =
{
	&InternalEnumerator_1_t4635____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4635____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4635_InternalEnumerator_1__ctor_m25361_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25361_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25361_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25361/* method */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4635_InternalEnumerator_1__ctor_m25361_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25361_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362/* method */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25363_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25363_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25363/* method */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25363_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25364_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25364_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25364/* method */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25364_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
extern void* RuntimeInvoker_HashAlgorithmType_t1466 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25365_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25365_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25365/* method */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* declaring_type */
	, &HashAlgorithmType_t1466_0_0_0/* return_type */
	, RuntimeInvoker_HashAlgorithmType_t1466/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25365_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4635_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25361_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362_MethodInfo,
	&InternalEnumerator_1_Dispose_m25363_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25364_MethodInfo,
	&InternalEnumerator_1_get_Current_m25365_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4635_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25362_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25364_MethodInfo,
	&InternalEnumerator_1_Dispose_m25363_MethodInfo,
	&InternalEnumerator_1_get_Current_m25365_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4635_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6527_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4635_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6527_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4635_0_0_0;
extern Il2CppType InternalEnumerator_1_t4635_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4635_GenericClass;
TypeInfo InternalEnumerator_1_t4635_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4635_MethodInfos/* methods */
	, InternalEnumerator_1_t4635_PropertyInfos/* properties */
	, InternalEnumerator_1_t4635_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4635_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4635_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4635_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4635_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4635_1_0_0/* this_arg */
	, InternalEnumerator_1_t4635_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4635_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4635)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8368_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo ICollection_1_get_Count_m43547_MethodInfo;
static PropertyInfo ICollection_1_t8368____Count_PropertyInfo = 
{
	&ICollection_1_t8368_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43547_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43548_MethodInfo;
static PropertyInfo ICollection_1_t8368____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8368_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43548_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8368_PropertyInfos[] =
{
	&ICollection_1_t8368____Count_PropertyInfo,
	&ICollection_1_t8368____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43547_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Count()
MethodInfo ICollection_1_get_Count_m43547_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43547_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43548_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43548_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43548_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
static ParameterInfo ICollection_1_t8368_ICollection_1_Add_m43549_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t1466_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43549_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Add(T)
MethodInfo ICollection_1_Add_m43549_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8368_ICollection_1_Add_m43549_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43549_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43550_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Clear()
MethodInfo ICollection_1_Clear_m43550_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43550_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
static ParameterInfo ICollection_1_t8368_ICollection_1_Contains_m43551_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t1466_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43551_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Contains(T)
MethodInfo ICollection_1_Contains_m43551_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8368_ICollection_1_Contains_m43551_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43551_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmTypeU5BU5D_t5474_0_0_0;
extern Il2CppType HashAlgorithmTypeU5BU5D_t5474_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8368_ICollection_1_CopyTo_m43552_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmTypeU5BU5D_t5474_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43552_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43552_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8368_ICollection_1_CopyTo_m43552_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43552_GenericMethod/* genericMethod */

};
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
static ParameterInfo ICollection_1_t8368_ICollection_1_Remove_m43553_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t1466_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43553_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Remove(T)
MethodInfo ICollection_1_Remove_m43553_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8368_ICollection_1_Remove_m43553_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43553_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8368_MethodInfos[] =
{
	&ICollection_1_get_Count_m43547_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43548_MethodInfo,
	&ICollection_1_Add_m43549_MethodInfo,
	&ICollection_1_Clear_m43550_MethodInfo,
	&ICollection_1_Contains_m43551_MethodInfo,
	&ICollection_1_CopyTo_m43552_MethodInfo,
	&ICollection_1_Remove_m43553_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8370_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8368_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8370_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8368_0_0_0;
extern Il2CppType ICollection_1_t8368_1_0_0;
struct ICollection_1_t8368;
extern Il2CppGenericClass ICollection_1_t8368_GenericClass;
TypeInfo ICollection_1_t8368_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8368_MethodInfos/* methods */
	, ICollection_1_t8368_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8368_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8368_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8368_0_0_0/* byval_arg */
	, &ICollection_1_t8368_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8368_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern Il2CppType IEnumerator_1_t6527_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43554_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43554_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8370_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6527_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43554_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8370_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43554_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8370_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8370_0_0_0;
extern Il2CppType IEnumerable_1_t8370_1_0_0;
struct IEnumerable_1_t8370;
extern Il2CppGenericClass IEnumerable_1_t8370_GenericClass;
TypeInfo IEnumerable_1_t8370_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8370_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8370_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8370_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8370_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8370_0_0_0/* byval_arg */
	, &IEnumerable_1_t8370_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8370_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8369_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>
extern MethodInfo IList_1_get_Item_m43555_MethodInfo;
extern MethodInfo IList_1_set_Item_m43556_MethodInfo;
static PropertyInfo IList_1_t8369____Item_PropertyInfo = 
{
	&IList_1_t8369_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43555_MethodInfo/* get */
	, &IList_1_set_Item_m43556_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8369_PropertyInfos[] =
{
	&IList_1_t8369____Item_PropertyInfo,
	NULL
};
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
static ParameterInfo IList_1_t8369_IList_1_IndexOf_m43557_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t1466_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43557_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43557_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8369_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8369_IList_1_IndexOf_m43557_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43557_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
static ParameterInfo IList_1_t8369_IList_1_Insert_m43558_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t1466_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43558_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43558_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8369_IList_1_Insert_m43558_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43558_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8369_IList_1_RemoveAt_m43559_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43559_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43559_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8369_IList_1_RemoveAt_m43559_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43559_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8369_IList_1_get_Item_m43555_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
extern void* RuntimeInvoker_HashAlgorithmType_t1466_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43555_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43555_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8369_il2cpp_TypeInfo/* declaring_type */
	, &HashAlgorithmType_t1466_0_0_0/* return_type */
	, RuntimeInvoker_HashAlgorithmType_t1466_Int32_t73/* invoker_method */
	, IList_1_t8369_IList_1_get_Item_m43555_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43555_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType HashAlgorithmType_t1466_0_0_0;
static ParameterInfo IList_1_t8369_IList_1_set_Item_m43556_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HashAlgorithmType_t1466_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43556_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.HashAlgorithmType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43556_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8369_IList_1_set_Item_m43556_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43556_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8369_MethodInfos[] =
{
	&IList_1_IndexOf_m43557_MethodInfo,
	&IList_1_Insert_m43558_MethodInfo,
	&IList_1_RemoveAt_m43559_MethodInfo,
	&IList_1_get_Item_m43555_MethodInfo,
	&IList_1_set_Item_m43556_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8369_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8368_il2cpp_TypeInfo,
	&IEnumerable_1_t8370_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8369_0_0_0;
extern Il2CppType IList_1_t8369_1_0_0;
struct IList_1_t8369;
extern Il2CppGenericClass IList_1_t8369_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8369_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8369_MethodInfos/* methods */
	, IList_1_t8369_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8369_il2cpp_TypeInfo/* element_class */
	, IList_1_t8369_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8369_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8369_0_0_0/* byval_arg */
	, &IList_1_t8369_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8369_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6529_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo IEnumerator_1_get_Current_m43560_MethodInfo;
static PropertyInfo IEnumerator_1_t6529____Current_PropertyInfo = 
{
	&IEnumerator_1_t6529_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43560_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6529_PropertyInfos[] =
{
	&IEnumerator_1_t6529____Current_PropertyInfo,
	NULL
};
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
extern void* RuntimeInvoker_SecurityCompressionType_t1480 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43560_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43560_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6529_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCompressionType_t1480_0_0_0/* return_type */
	, RuntimeInvoker_SecurityCompressionType_t1480/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43560_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6529_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43560_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6529_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6529_0_0_0;
extern Il2CppType IEnumerator_1_t6529_1_0_0;
struct IEnumerator_1_t6529;
extern Il2CppGenericClass IEnumerator_1_t6529_GenericClass;
TypeInfo IEnumerator_1_t6529_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6529_MethodInfos/* methods */
	, IEnumerator_1_t6529_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6529_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6529_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6529_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6529_0_0_0/* byval_arg */
	, &IEnumerator_1_t6529_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6529_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_496.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4636_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_496MethodDeclarations.h"

extern TypeInfo SecurityCompressionType_t1480_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25370_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecurityCompressionType_t1480_m33499_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.SecurityCompressionType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.SecurityCompressionType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSecurityCompressionType_t1480_m33499 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25366_MethodInfo;
 void InternalEnumerator_1__ctor_m25366 (InternalEnumerator_1_t4636 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367 (InternalEnumerator_1_t4636 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25370(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25370_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SecurityCompressionType_t1480_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25368_MethodInfo;
 void InternalEnumerator_1_Dispose_m25368 (InternalEnumerator_1_t4636 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25369_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25369 (InternalEnumerator_1_t4636 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25370 (InternalEnumerator_1_t4636 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSecurityCompressionType_t1480_m33499(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSecurityCompressionType_t1480_m33499_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4636____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4636, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4636____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4636, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4636_FieldInfos[] =
{
	&InternalEnumerator_1_t4636____array_0_FieldInfo,
	&InternalEnumerator_1_t4636____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4636____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4636_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4636____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4636_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25370_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4636_PropertyInfos[] =
{
	&InternalEnumerator_1_t4636____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4636____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4636_InternalEnumerator_1__ctor_m25366_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25366_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25366_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25366/* method */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4636_InternalEnumerator_1__ctor_m25366_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25366_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367/* method */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25368_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25368_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25368/* method */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25368_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25369_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25369_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25369/* method */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25369_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
extern void* RuntimeInvoker_SecurityCompressionType_t1480 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25370_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25370_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25370/* method */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCompressionType_t1480_0_0_0/* return_type */
	, RuntimeInvoker_SecurityCompressionType_t1480/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25370_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4636_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25366_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367_MethodInfo,
	&InternalEnumerator_1_Dispose_m25368_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25369_MethodInfo,
	&InternalEnumerator_1_get_Current_m25370_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4636_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25367_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25369_MethodInfo,
	&InternalEnumerator_1_Dispose_m25368_MethodInfo,
	&InternalEnumerator_1_get_Current_m25370_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4636_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6529_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4636_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6529_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4636_0_0_0;
extern Il2CppType InternalEnumerator_1_t4636_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4636_GenericClass;
TypeInfo InternalEnumerator_1_t4636_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4636_MethodInfos/* methods */
	, InternalEnumerator_1_t4636_PropertyInfos/* properties */
	, InternalEnumerator_1_t4636_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4636_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4636_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4636_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4636_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4636_1_0_0/* this_arg */
	, InternalEnumerator_1_t4636_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4636_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4636)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8371_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo ICollection_1_get_Count_m43561_MethodInfo;
static PropertyInfo ICollection_1_t8371____Count_PropertyInfo = 
{
	&ICollection_1_t8371_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43561_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43562_MethodInfo;
static PropertyInfo ICollection_1_t8371____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8371_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43562_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8371_PropertyInfos[] =
{
	&ICollection_1_t8371____Count_PropertyInfo,
	&ICollection_1_t8371____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43561_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Count()
MethodInfo ICollection_1_get_Count_m43561_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43561_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43562_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43562_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43562_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
static ParameterInfo ICollection_1_t8371_ICollection_1_Add_m43563_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t1480_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43563_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Add(T)
MethodInfo ICollection_1_Add_m43563_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8371_ICollection_1_Add_m43563_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43563_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43564_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Clear()
MethodInfo ICollection_1_Clear_m43564_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43564_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
static ParameterInfo ICollection_1_t8371_ICollection_1_Contains_m43565_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t1480_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43565_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Contains(T)
MethodInfo ICollection_1_Contains_m43565_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8371_ICollection_1_Contains_m43565_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43565_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionTypeU5BU5D_t5475_0_0_0;
extern Il2CppType SecurityCompressionTypeU5BU5D_t5475_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8371_ICollection_1_CopyTo_m43566_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionTypeU5BU5D_t5475_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43566_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43566_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8371_ICollection_1_CopyTo_m43566_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43566_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
static ParameterInfo ICollection_1_t8371_ICollection_1_Remove_m43567_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t1480_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43567_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Remove(T)
MethodInfo ICollection_1_Remove_m43567_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8371_ICollection_1_Remove_m43567_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43567_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8371_MethodInfos[] =
{
	&ICollection_1_get_Count_m43561_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43562_MethodInfo,
	&ICollection_1_Add_m43563_MethodInfo,
	&ICollection_1_Clear_m43564_MethodInfo,
	&ICollection_1_Contains_m43565_MethodInfo,
	&ICollection_1_CopyTo_m43566_MethodInfo,
	&ICollection_1_Remove_m43567_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8373_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8371_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8373_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8371_0_0_0;
extern Il2CppType ICollection_1_t8371_1_0_0;
struct ICollection_1_t8371;
extern Il2CppGenericClass ICollection_1_t8371_GenericClass;
TypeInfo ICollection_1_t8371_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8371_MethodInfos/* methods */
	, ICollection_1_t8371_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8371_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8371_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8371_0_0_0/* byval_arg */
	, &ICollection_1_t8371_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8371_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern Il2CppType IEnumerator_1_t6529_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43568_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43568_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8373_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6529_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43568_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8373_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43568_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8373_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8373_0_0_0;
extern Il2CppType IEnumerable_1_t8373_1_0_0;
struct IEnumerable_1_t8373;
extern Il2CppGenericClass IEnumerable_1_t8373_GenericClass;
TypeInfo IEnumerable_1_t8373_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8373_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8373_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8373_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8373_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8373_0_0_0/* byval_arg */
	, &IEnumerable_1_t8373_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8373_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8372_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>
extern MethodInfo IList_1_get_Item_m43569_MethodInfo;
extern MethodInfo IList_1_set_Item_m43570_MethodInfo;
static PropertyInfo IList_1_t8372____Item_PropertyInfo = 
{
	&IList_1_t8372_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43569_MethodInfo/* get */
	, &IList_1_set_Item_m43570_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8372_PropertyInfos[] =
{
	&IList_1_t8372____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
static ParameterInfo IList_1_t8372_IList_1_IndexOf_m43571_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t1480_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43571_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43571_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8372_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8372_IList_1_IndexOf_m43571_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43571_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
static ParameterInfo IList_1_t8372_IList_1_Insert_m43572_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t1480_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43572_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43572_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8372_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8372_IList_1_Insert_m43572_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43572_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8372_IList_1_RemoveAt_m43573_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43573_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43573_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8372_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8372_IList_1_RemoveAt_m43573_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43573_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8372_IList_1_get_Item_m43569_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
extern void* RuntimeInvoker_SecurityCompressionType_t1480_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43569_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43569_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8372_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCompressionType_t1480_0_0_0/* return_type */
	, RuntimeInvoker_SecurityCompressionType_t1480_Int32_t73/* invoker_method */
	, IList_1_t8372_IList_1_get_Item_m43569_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43569_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SecurityCompressionType_t1480_0_0_0;
static ParameterInfo IList_1_t8372_IList_1_set_Item_m43570_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecurityCompressionType_t1480_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43570_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityCompressionType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43570_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8372_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8372_IList_1_set_Item_m43570_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43570_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8372_MethodInfos[] =
{
	&IList_1_IndexOf_m43571_MethodInfo,
	&IList_1_Insert_m43572_MethodInfo,
	&IList_1_RemoveAt_m43573_MethodInfo,
	&IList_1_get_Item_m43569_MethodInfo,
	&IList_1_set_Item_m43570_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8372_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8371_il2cpp_TypeInfo,
	&IEnumerable_1_t8373_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8372_0_0_0;
extern Il2CppType IList_1_t8372_1_0_0;
struct IList_1_t8372;
extern Il2CppGenericClass IList_1_t8372_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8372_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8372_MethodInfos/* methods */
	, IList_1_t8372_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8372_il2cpp_TypeInfo/* element_class */
	, IList_1_t8372_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8372_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8372_0_0_0/* byval_arg */
	, &IList_1_t8372_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8372_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6531_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo IEnumerator_1_get_Current_m43574_MethodInfo;
static PropertyInfo IEnumerator_1_t6531____Current_PropertyInfo = 
{
	&IEnumerator_1_t6531_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43574_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6531_PropertyInfos[] =
{
	&IEnumerator_1_t6531____Current_PropertyInfo,
	NULL
};
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t1481 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43574_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43574_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6531_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t1481_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t1481/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43574_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6531_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43574_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6531_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6531_0_0_0;
extern Il2CppType IEnumerator_1_t6531_1_0_0;
struct IEnumerator_1_t6531;
extern Il2CppGenericClass IEnumerator_1_t6531_GenericClass;
TypeInfo IEnumerator_1_t6531_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6531_MethodInfos/* methods */
	, IEnumerator_1_t6531_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6531_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6531_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6531_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6531_0_0_0/* byval_arg */
	, &IEnumerator_1_t6531_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6531_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_497.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4637_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_497MethodDeclarations.h"

extern TypeInfo SecurityProtocolType_t1481_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25375_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecurityProtocolType_t1481_m33510_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.SecurityProtocolType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.SecurityProtocolType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSecurityProtocolType_t1481_m33510 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25371_MethodInfo;
 void InternalEnumerator_1__ctor_m25371 (InternalEnumerator_1_t4637 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372 (InternalEnumerator_1_t4637 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25375(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25375_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SecurityProtocolType_t1481_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25373_MethodInfo;
 void InternalEnumerator_1_Dispose_m25373 (InternalEnumerator_1_t4637 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25374_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25374 (InternalEnumerator_1_t4637 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25375 (InternalEnumerator_1_t4637 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSecurityProtocolType_t1481_m33510(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSecurityProtocolType_t1481_m33510_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4637____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4637, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4637____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4637, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4637_FieldInfos[] =
{
	&InternalEnumerator_1_t4637____array_0_FieldInfo,
	&InternalEnumerator_1_t4637____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4637____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4637_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4637____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4637_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25375_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4637_PropertyInfos[] =
{
	&InternalEnumerator_1_t4637____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4637____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4637_InternalEnumerator_1__ctor_m25371_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25371_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25371_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25371/* method */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4637_InternalEnumerator_1__ctor_m25371_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25371_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372/* method */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25373_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25373_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25373/* method */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25373_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25374_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25374_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25374/* method */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25374_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t1481 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25375_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25375_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25375/* method */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t1481_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t1481/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25375_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4637_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25371_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372_MethodInfo,
	&InternalEnumerator_1_Dispose_m25373_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25374_MethodInfo,
	&InternalEnumerator_1_get_Current_m25375_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4637_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25372_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25374_MethodInfo,
	&InternalEnumerator_1_Dispose_m25373_MethodInfo,
	&InternalEnumerator_1_get_Current_m25375_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4637_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6531_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4637_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6531_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4637_0_0_0;
extern Il2CppType InternalEnumerator_1_t4637_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4637_GenericClass;
TypeInfo InternalEnumerator_1_t4637_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4637_MethodInfos/* methods */
	, InternalEnumerator_1_t4637_PropertyInfos/* properties */
	, InternalEnumerator_1_t4637_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4637_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4637_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4637_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4637_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4637_1_0_0/* this_arg */
	, InternalEnumerator_1_t4637_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4637_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4637)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8374_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo ICollection_1_get_Count_m43575_MethodInfo;
static PropertyInfo ICollection_1_t8374____Count_PropertyInfo = 
{
	&ICollection_1_t8374_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43575_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43576_MethodInfo;
static PropertyInfo ICollection_1_t8374____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8374_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43576_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8374_PropertyInfos[] =
{
	&ICollection_1_t8374____Count_PropertyInfo,
	&ICollection_1_t8374____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43575_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Count()
MethodInfo ICollection_1_get_Count_m43575_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43575_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43576_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43576_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43576_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
static ParameterInfo ICollection_1_t8374_ICollection_1_Add_m43577_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t1481_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43577_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Add(T)
MethodInfo ICollection_1_Add_m43577_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8374_ICollection_1_Add_m43577_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43577_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43578_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Clear()
MethodInfo ICollection_1_Clear_m43578_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43578_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
static ParameterInfo ICollection_1_t8374_ICollection_1_Contains_m43579_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t1481_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43579_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Contains(T)
MethodInfo ICollection_1_Contains_m43579_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8374_ICollection_1_Contains_m43579_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43579_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolTypeU5BU5D_t5476_0_0_0;
extern Il2CppType SecurityProtocolTypeU5BU5D_t5476_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8374_ICollection_1_CopyTo_m43580_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolTypeU5BU5D_t5476_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43580_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43580_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8374_ICollection_1_CopyTo_m43580_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43580_GenericMethod/* genericMethod */

};
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
static ParameterInfo ICollection_1_t8374_ICollection_1_Remove_m43581_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t1481_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43581_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Remove(T)
MethodInfo ICollection_1_Remove_m43581_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8374_ICollection_1_Remove_m43581_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43581_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8374_MethodInfos[] =
{
	&ICollection_1_get_Count_m43575_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43576_MethodInfo,
	&ICollection_1_Add_m43577_MethodInfo,
	&ICollection_1_Clear_m43578_MethodInfo,
	&ICollection_1_Contains_m43579_MethodInfo,
	&ICollection_1_CopyTo_m43580_MethodInfo,
	&ICollection_1_Remove_m43581_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8376_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8374_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8376_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8374_0_0_0;
extern Il2CppType ICollection_1_t8374_1_0_0;
struct ICollection_1_t8374;
extern Il2CppGenericClass ICollection_1_t8374_GenericClass;
TypeInfo ICollection_1_t8374_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8374_MethodInfos/* methods */
	, ICollection_1_t8374_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8374_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8374_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8374_0_0_0/* byval_arg */
	, &ICollection_1_t8374_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8374_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern Il2CppType IEnumerator_1_t6531_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43582_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43582_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8376_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6531_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43582_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8376_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43582_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8376_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8376_0_0_0;
extern Il2CppType IEnumerable_1_t8376_1_0_0;
struct IEnumerable_1_t8376;
extern Il2CppGenericClass IEnumerable_1_t8376_GenericClass;
TypeInfo IEnumerable_1_t8376_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8376_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8376_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8376_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8376_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8376_0_0_0/* byval_arg */
	, &IEnumerable_1_t8376_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8376_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8375_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>
extern MethodInfo IList_1_get_Item_m43583_MethodInfo;
extern MethodInfo IList_1_set_Item_m43584_MethodInfo;
static PropertyInfo IList_1_t8375____Item_PropertyInfo = 
{
	&IList_1_t8375_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43583_MethodInfo/* get */
	, &IList_1_set_Item_m43584_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8375_PropertyInfos[] =
{
	&IList_1_t8375____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
static ParameterInfo IList_1_t8375_IList_1_IndexOf_m43585_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t1481_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43585_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43585_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8375_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8375_IList_1_IndexOf_m43585_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43585_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
static ParameterInfo IList_1_t8375_IList_1_Insert_m43586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t1481_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43586_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43586_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8375_IList_1_Insert_m43586_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43586_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8375_IList_1_RemoveAt_m43587_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43587_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43587_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8375_IList_1_RemoveAt_m43587_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43587_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8375_IList_1_get_Item_m43583_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
extern void* RuntimeInvoker_SecurityProtocolType_t1481_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43583_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43583_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8375_il2cpp_TypeInfo/* declaring_type */
	, &SecurityProtocolType_t1481_0_0_0/* return_type */
	, RuntimeInvoker_SecurityProtocolType_t1481_Int32_t73/* invoker_method */
	, IList_1_t8375_IList_1_get_Item_m43583_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43583_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SecurityProtocolType_t1481_0_0_0;
static ParameterInfo IList_1_t8375_IList_1_set_Item_m43584_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecurityProtocolType_t1481_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43584_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.SecurityProtocolType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43584_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8375_IList_1_set_Item_m43584_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43584_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8375_MethodInfos[] =
{
	&IList_1_IndexOf_m43585_MethodInfo,
	&IList_1_Insert_m43586_MethodInfo,
	&IList_1_RemoveAt_m43587_MethodInfo,
	&IList_1_get_Item_m43583_MethodInfo,
	&IList_1_set_Item_m43584_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8375_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8374_il2cpp_TypeInfo,
	&IEnumerable_1_t8376_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8375_0_0_0;
extern Il2CppType IList_1_t8375_1_0_0;
struct IList_1_t8375;
extern Il2CppGenericClass IList_1_t8375_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8375_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8375_MethodInfos/* methods */
	, IList_1_t8375_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8375_il2cpp_TypeInfo/* element_class */
	, IList_1_t8375_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8375_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8375_0_0_0/* byval_arg */
	, &IList_1_t8375_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8375_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6533_il2cpp_TypeInfo;

// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo IEnumerator_1_get_Current_m43588_MethodInfo;
static PropertyInfo IEnumerator_1_t6533____Current_PropertyInfo = 
{
	&IEnumerator_1_t6533_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43588_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6533_PropertyInfos[] =
{
	&IEnumerator_1_t6533____Current_PropertyInfo,
	NULL
};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43588_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43588_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6533_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t1471_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43588_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6533_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43588_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6533_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6533_0_0_0;
extern Il2CppType IEnumerator_1_t6533_1_0_0;
struct IEnumerator_1_t6533;
extern Il2CppGenericClass IEnumerator_1_t6533_GenericClass;
TypeInfo IEnumerator_1_t6533_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6533_MethodInfos/* methods */
	, IEnumerator_1_t6533_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6533_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6533_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6533_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6533_0_0_0/* byval_arg */
	, &IEnumerator_1_t6533_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6533_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_498.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4638_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_498MethodDeclarations.h"

extern TypeInfo X509Certificate_t1471_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25380_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisX509Certificate_t1471_m33521_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509Certificate>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Cryptography.X509Certificates.X509Certificate>(System.Int32)
#define Array_InternalArray__get_Item_TisX509Certificate_t1471_m33521(__this, p0, method) (X509Certificate_t1471 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4638____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4638, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4638____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4638, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4638_FieldInfos[] =
{
	&InternalEnumerator_1_t4638____array_0_FieldInfo,
	&InternalEnumerator_1_t4638____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25377_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4638____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4638_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25377_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4638____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4638_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25380_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4638_PropertyInfos[] =
{
	&InternalEnumerator_1_t4638____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4638____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4638_InternalEnumerator_1__ctor_m25376_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25376_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25376_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4638_InternalEnumerator_1__ctor_m25376_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25376_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25377_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25377_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25377_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25378_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25378_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25378_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25379_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25379_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25379_GenericMethod/* genericMethod */

};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25380_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25380_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t1471_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25380_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4638_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25376_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25377_MethodInfo,
	&InternalEnumerator_1_Dispose_m25378_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25379_MethodInfo,
	&InternalEnumerator_1_get_Current_m25380_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25379_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25378_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4638_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25377_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25379_MethodInfo,
	&InternalEnumerator_1_Dispose_m25378_MethodInfo,
	&InternalEnumerator_1_get_Current_m25380_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4638_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6533_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4638_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6533_il2cpp_TypeInfo, 7},
};
extern TypeInfo X509Certificate_t1471_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4638_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25380_MethodInfo/* Method Usage */,
	&X509Certificate_t1471_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisX509Certificate_t1471_m33521_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4638_0_0_0;
extern Il2CppType InternalEnumerator_1_t4638_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4638_GenericClass;
TypeInfo InternalEnumerator_1_t4638_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4638_MethodInfos/* methods */
	, InternalEnumerator_1_t4638_PropertyInfos/* properties */
	, InternalEnumerator_1_t4638_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4638_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4638_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4638_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4638_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4638_1_0_0/* this_arg */
	, InternalEnumerator_1_t4638_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4638_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4638_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4638)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8377_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo ICollection_1_get_Count_m43589_MethodInfo;
static PropertyInfo ICollection_1_t8377____Count_PropertyInfo = 
{
	&ICollection_1_t8377_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43589_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43590_MethodInfo;
static PropertyInfo ICollection_1_t8377____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8377_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43590_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8377_PropertyInfos[] =
{
	&ICollection_1_t8377____Count_PropertyInfo,
	&ICollection_1_t8377____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43589_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Count()
MethodInfo ICollection_1_get_Count_m43589_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43589_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43590_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43590_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43590_GenericMethod/* genericMethod */

};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern Il2CppType X509Certificate_t1471_0_0_0;
static ParameterInfo ICollection_1_t8377_ICollection_1_Add_m43591_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43591_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Add(T)
MethodInfo ICollection_1_Add_m43591_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8377_ICollection_1_Add_m43591_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43591_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43592_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Clear()
MethodInfo ICollection_1_Clear_m43592_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43592_GenericMethod/* genericMethod */

};
extern Il2CppType X509Certificate_t1471_0_0_0;
static ParameterInfo ICollection_1_t8377_ICollection_1_Contains_m43593_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43593_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Contains(T)
MethodInfo ICollection_1_Contains_m43593_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8377_ICollection_1_Contains_m43593_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43593_GenericMethod/* genericMethod */

};
extern Il2CppType X509CertificateU5BU5D_t1554_0_0_0;
extern Il2CppType X509CertificateU5BU5D_t1554_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8377_ICollection_1_CopyTo_m43594_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &X509CertificateU5BU5D_t1554_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43594_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43594_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8377_ICollection_1_CopyTo_m43594_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43594_GenericMethod/* genericMethod */

};
extern Il2CppType X509Certificate_t1471_0_0_0;
static ParameterInfo ICollection_1_t8377_ICollection_1_Remove_m43595_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43595_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Remove(T)
MethodInfo ICollection_1_Remove_m43595_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8377_ICollection_1_Remove_m43595_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43595_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8377_MethodInfos[] =
{
	&ICollection_1_get_Count_m43589_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43590_MethodInfo,
	&ICollection_1_Add_m43591_MethodInfo,
	&ICollection_1_Clear_m43592_MethodInfo,
	&ICollection_1_Contains_m43593_MethodInfo,
	&ICollection_1_CopyTo_m43594_MethodInfo,
	&ICollection_1_Remove_m43595_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8379_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8377_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8379_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8377_0_0_0;
extern Il2CppType ICollection_1_t8377_1_0_0;
struct ICollection_1_t8377;
extern Il2CppGenericClass ICollection_1_t8377_GenericClass;
TypeInfo ICollection_1_t8377_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8377_MethodInfos/* methods */
	, ICollection_1_t8377_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8377_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8377_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8377_0_0_0/* byval_arg */
	, &ICollection_1_t8377_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8377_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern Il2CppType IEnumerator_1_t6533_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43596_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Certificate>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43596_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8379_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6533_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43596_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8379_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43596_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8379_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8379_0_0_0;
extern Il2CppType IEnumerable_1_t8379_1_0_0;
struct IEnumerable_1_t8379;
extern Il2CppGenericClass IEnumerable_1_t8379_GenericClass;
TypeInfo IEnumerable_1_t8379_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8379_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8379_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8379_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8379_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8379_0_0_0/* byval_arg */
	, &IEnumerable_1_t8379_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8379_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8378_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>
extern MethodInfo IList_1_get_Item_m43597_MethodInfo;
extern MethodInfo IList_1_set_Item_m43598_MethodInfo;
static PropertyInfo IList_1_t8378____Item_PropertyInfo = 
{
	&IList_1_t8378_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43597_MethodInfo/* get */
	, &IList_1_set_Item_m43598_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8378_PropertyInfos[] =
{
	&IList_1_t8378____Item_PropertyInfo,
	NULL
};
extern Il2CppType X509Certificate_t1471_0_0_0;
static ParameterInfo IList_1_t8378_IList_1_IndexOf_m43599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43599_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43599_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8378_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8378_IList_1_IndexOf_m43599_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43599_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType X509Certificate_t1471_0_0_0;
static ParameterInfo IList_1_t8378_IList_1_Insert_m43600_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43600_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43600_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8378_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8378_IList_1_Insert_m43600_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43600_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8378_IList_1_RemoveAt_m43601_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43601_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43601_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8378_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8378_IList_1_RemoveAt_m43601_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43601_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8378_IList_1_get_Item_m43597_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43597_GenericMethod;
// T System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43597_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8378_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t1471_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8378_IList_1_get_Item_m43597_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43597_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType X509Certificate_t1471_0_0_0;
static ParameterInfo IList_1_t8378_IList_1_set_Item_m43598_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43598_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Security.Cryptography.X509Certificates.X509Certificate>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43598_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8378_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8378_IList_1_set_Item_m43598_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43598_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8378_MethodInfos[] =
{
	&IList_1_IndexOf_m43599_MethodInfo,
	&IList_1_Insert_m43600_MethodInfo,
	&IList_1_RemoveAt_m43601_MethodInfo,
	&IList_1_get_Item_m43597_MethodInfo,
	&IList_1_set_Item_m43598_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8378_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8377_il2cpp_TypeInfo,
	&IEnumerable_1_t8379_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8378_0_0_0;
extern Il2CppType IList_1_t8378_1_0_0;
struct IList_1_t8378;
extern Il2CppGenericClass IList_1_t8378_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8378_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8378_MethodInfos/* methods */
	, IList_1_t8378_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8378_il2cpp_TypeInfo/* element_class */
	, IList_1_t8378_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8378_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8378_0_0_0/* byval_arg */
	, &IList_1_t8378_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8378_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6535_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo IEnumerator_1_get_Current_m43602_MethodInfo;
static PropertyInfo IEnumerator_1_t6535____Current_PropertyInfo = 
{
	&IEnumerator_1_t6535_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43602_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6535_PropertyInfos[] =
{
	&IEnumerator_1_t6535____Current_PropertyInfo,
	NULL
};
extern Il2CppType ClientCertificateType_t1491_0_0_0;
extern void* RuntimeInvoker_ClientCertificateType_t1491 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43602_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43602_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6535_il2cpp_TypeInfo/* declaring_type */
	, &ClientCertificateType_t1491_0_0_0/* return_type */
	, RuntimeInvoker_ClientCertificateType_t1491/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43602_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6535_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43602_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6535_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6535_0_0_0;
extern Il2CppType IEnumerator_1_t6535_1_0_0;
struct IEnumerator_1_t6535;
extern Il2CppGenericClass IEnumerator_1_t6535_GenericClass;
TypeInfo IEnumerator_1_t6535_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6535_MethodInfos/* methods */
	, IEnumerator_1_t6535_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6535_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6535_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6535_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6535_0_0_0/* byval_arg */
	, &IEnumerator_1_t6535_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6535_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_499.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4639_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_499MethodDeclarations.h"

extern TypeInfo ClientCertificateType_t1491_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25385_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClientCertificateType_t1491_m33532_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisClientCertificateType_t1491_m33532 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25381_MethodInfo;
 void InternalEnumerator_1__ctor_m25381 (InternalEnumerator_1_t4639 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382 (InternalEnumerator_1_t4639 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25385(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25385_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ClientCertificateType_t1491_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25383_MethodInfo;
 void InternalEnumerator_1_Dispose_m25383 (InternalEnumerator_1_t4639 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25384_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25384 (InternalEnumerator_1_t4639 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25385 (InternalEnumerator_1_t4639 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisClientCertificateType_t1491_m33532(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisClientCertificateType_t1491_m33532_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4639____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4639, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4639____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4639, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4639_FieldInfos[] =
{
	&InternalEnumerator_1_t4639____array_0_FieldInfo,
	&InternalEnumerator_1_t4639____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4639____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4639_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4639____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4639_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25385_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4639_PropertyInfos[] =
{
	&InternalEnumerator_1_t4639____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4639____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4639_InternalEnumerator_1__ctor_m25381_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25381_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25381_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25381/* method */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4639_InternalEnumerator_1__ctor_m25381_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25381_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382/* method */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25383_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25383_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25383/* method */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25383_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25384_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25384_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25384/* method */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25384_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateType_t1491_0_0_0;
extern void* RuntimeInvoker_ClientCertificateType_t1491 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25385_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25385_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25385/* method */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* declaring_type */
	, &ClientCertificateType_t1491_0_0_0/* return_type */
	, RuntimeInvoker_ClientCertificateType_t1491/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25385_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4639_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25381_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382_MethodInfo,
	&InternalEnumerator_1_Dispose_m25383_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25384_MethodInfo,
	&InternalEnumerator_1_get_Current_m25385_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4639_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25382_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25384_MethodInfo,
	&InternalEnumerator_1_Dispose_m25383_MethodInfo,
	&InternalEnumerator_1_get_Current_m25385_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4639_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6535_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4639_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6535_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4639_0_0_0;
extern Il2CppType InternalEnumerator_1_t4639_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4639_GenericClass;
TypeInfo InternalEnumerator_1_t4639_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4639_MethodInfos/* methods */
	, InternalEnumerator_1_t4639_PropertyInfos/* properties */
	, InternalEnumerator_1_t4639_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4639_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4639_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4639_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4639_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4639_1_0_0/* this_arg */
	, InternalEnumerator_1_t4639_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4639_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4639)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8380_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo ICollection_1_get_Count_m43603_MethodInfo;
static PropertyInfo ICollection_1_t8380____Count_PropertyInfo = 
{
	&ICollection_1_t8380_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43603_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43604_MethodInfo;
static PropertyInfo ICollection_1_t8380____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8380_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43604_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8380_PropertyInfos[] =
{
	&ICollection_1_t8380____Count_PropertyInfo,
	&ICollection_1_t8380____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43603_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Count()
MethodInfo ICollection_1_get_Count_m43603_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43603_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43604_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43604_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43604_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateType_t1491_0_0_0;
extern Il2CppType ClientCertificateType_t1491_0_0_0;
static ParameterInfo ICollection_1_t8380_ICollection_1_Add_m43605_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t1491_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43605_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Add(T)
MethodInfo ICollection_1_Add_m43605_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8380_ICollection_1_Add_m43605_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43605_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43606_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Clear()
MethodInfo ICollection_1_Clear_m43606_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43606_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateType_t1491_0_0_0;
static ParameterInfo ICollection_1_t8380_ICollection_1_Contains_m43607_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t1491_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43607_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Contains(T)
MethodInfo ICollection_1_Contains_m43607_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8380_ICollection_1_Contains_m43607_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43607_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateTypeU5BU5D_t1490_0_0_0;
extern Il2CppType ClientCertificateTypeU5BU5D_t1490_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8380_ICollection_1_CopyTo_m43608_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateTypeU5BU5D_t1490_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43608_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43608_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8380_ICollection_1_CopyTo_m43608_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43608_GenericMethod/* genericMethod */

};
extern Il2CppType ClientCertificateType_t1491_0_0_0;
static ParameterInfo ICollection_1_t8380_ICollection_1_Remove_m43609_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t1491_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43609_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Remove(T)
MethodInfo ICollection_1_Remove_m43609_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8380_ICollection_1_Remove_m43609_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43609_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8380_MethodInfos[] =
{
	&ICollection_1_get_Count_m43603_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43604_MethodInfo,
	&ICollection_1_Add_m43605_MethodInfo,
	&ICollection_1_Clear_m43606_MethodInfo,
	&ICollection_1_Contains_m43607_MethodInfo,
	&ICollection_1_CopyTo_m43608_MethodInfo,
	&ICollection_1_Remove_m43609_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8382_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8380_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8382_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8380_0_0_0;
extern Il2CppType ICollection_1_t8380_1_0_0;
struct ICollection_1_t8380;
extern Il2CppGenericClass ICollection_1_t8380_GenericClass;
TypeInfo ICollection_1_t8380_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8380_MethodInfos/* methods */
	, ICollection_1_t8380_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8380_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8380_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8380_0_0_0/* byval_arg */
	, &ICollection_1_t8380_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8380_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern Il2CppType IEnumerator_1_t6535_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43610_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43610_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8382_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6535_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43610_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8382_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43610_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8382_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8382_0_0_0;
extern Il2CppType IEnumerable_1_t8382_1_0_0;
struct IEnumerable_1_t8382;
extern Il2CppGenericClass IEnumerable_1_t8382_GenericClass;
TypeInfo IEnumerable_1_t8382_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8382_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8382_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8382_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8382_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8382_0_0_0/* byval_arg */
	, &IEnumerable_1_t8382_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8382_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8381_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>
extern MethodInfo IList_1_get_Item_m43611_MethodInfo;
extern MethodInfo IList_1_set_Item_m43612_MethodInfo;
static PropertyInfo IList_1_t8381____Item_PropertyInfo = 
{
	&IList_1_t8381_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43611_MethodInfo/* get */
	, &IList_1_set_Item_m43612_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8381_PropertyInfos[] =
{
	&IList_1_t8381____Item_PropertyInfo,
	NULL
};
extern Il2CppType ClientCertificateType_t1491_0_0_0;
static ParameterInfo IList_1_t8381_IList_1_IndexOf_m43613_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t1491_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43613_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43613_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8381_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8381_IList_1_IndexOf_m43613_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43613_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ClientCertificateType_t1491_0_0_0;
static ParameterInfo IList_1_t8381_IList_1_Insert_m43614_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t1491_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43614_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43614_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8381_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8381_IList_1_Insert_m43614_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43614_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8381_IList_1_RemoveAt_m43615_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43615_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43615_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8381_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8381_IList_1_RemoveAt_m43615_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43615_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8381_IList_1_get_Item_m43611_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ClientCertificateType_t1491_0_0_0;
extern void* RuntimeInvoker_ClientCertificateType_t1491_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43611_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43611_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8381_il2cpp_TypeInfo/* declaring_type */
	, &ClientCertificateType_t1491_0_0_0/* return_type */
	, RuntimeInvoker_ClientCertificateType_t1491_Int32_t73/* invoker_method */
	, IList_1_t8381_IList_1_get_Item_m43611_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43611_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ClientCertificateType_t1491_0_0_0;
static ParameterInfo IList_1_t8381_IList_1_set_Item_m43612_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ClientCertificateType_t1491_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43612_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.ClientCertificateType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43612_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8381_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8381_IList_1_set_Item_m43612_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43612_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8381_MethodInfos[] =
{
	&IList_1_IndexOf_m43613_MethodInfo,
	&IList_1_Insert_m43614_MethodInfo,
	&IList_1_RemoveAt_m43615_MethodInfo,
	&IList_1_get_Item_m43611_MethodInfo,
	&IList_1_set_Item_m43612_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8381_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8380_il2cpp_TypeInfo,
	&IEnumerable_1_t8382_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8381_0_0_0;
extern Il2CppType IList_1_t8381_1_0_0;
struct IList_1_t8381;
extern Il2CppGenericClass IList_1_t8381_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8381_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8381_MethodInfos/* methods */
	, IList_1_t8381_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8381_il2cpp_TypeInfo/* element_class */
	, IList_1_t8381_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8381_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8381_0_0_0/* byval_arg */
	, &IList_1_t8381_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8381_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6537_il2cpp_TypeInfo;

// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo IEnumerator_1_get_Current_m43616_MethodInfo;
static PropertyInfo IEnumerator_1_t6537____Current_PropertyInfo = 
{
	&IEnumerator_1_t6537_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43616_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6537_PropertyInfos[] =
{
	&IEnumerator_1_t6537____Current_PropertyInfo,
	NULL
};
extern Il2CppType HandshakeType_t1492_0_0_0;
extern void* RuntimeInvoker_HandshakeType_t1492 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43616_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43616_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6537_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeType_t1492_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeType_t1492/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43616_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6537_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43616_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6537_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6537_0_0_0;
extern Il2CppType IEnumerator_1_t6537_1_0_0;
struct IEnumerator_1_t6537;
extern Il2CppGenericClass IEnumerator_1_t6537_GenericClass;
TypeInfo IEnumerator_1_t6537_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6537_MethodInfos/* methods */
	, IEnumerator_1_t6537_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6537_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6537_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6537_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6537_0_0_0/* byval_arg */
	, &IEnumerator_1_t6537_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6537_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_500.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4640_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_500MethodDeclarations.h"

extern TypeInfo HandshakeType_t1492_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25390_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHandshakeType_t1492_m33543_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.HandshakeType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Security.Protocol.Tls.Handshake.HandshakeType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisHandshakeType_t1492_m33543 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25386_MethodInfo;
 void InternalEnumerator_1__ctor_m25386 (InternalEnumerator_1_t4640 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387 (InternalEnumerator_1_t4640 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m25390(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25390_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HandshakeType_t1492_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25388_MethodInfo;
 void InternalEnumerator_1_Dispose_m25388 (InternalEnumerator_1_t4640 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25389_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25389 (InternalEnumerator_1_t4640 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m25390 (InternalEnumerator_1_t4640 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisHandshakeType_t1492_m33543(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHandshakeType_t1492_m33543_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4640____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4640, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4640____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4640, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4640_FieldInfos[] =
{
	&InternalEnumerator_1_t4640____array_0_FieldInfo,
	&InternalEnumerator_1_t4640____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4640____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4640_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4640____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4640_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25390_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4640_PropertyInfos[] =
{
	&InternalEnumerator_1_t4640____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4640____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4640_InternalEnumerator_1__ctor_m25386_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25386_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25386_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25386/* method */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4640_InternalEnumerator_1__ctor_m25386_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25386_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387/* method */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25388_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25388_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25388/* method */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25388_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25389_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25389_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25389/* method */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25389_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeType_t1492_0_0_0;
extern void* RuntimeInvoker_HandshakeType_t1492 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25390_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25390_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25390/* method */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeType_t1492_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeType_t1492/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25390_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4640_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25386_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387_MethodInfo,
	&InternalEnumerator_1_Dispose_m25388_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25389_MethodInfo,
	&InternalEnumerator_1_get_Current_m25390_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4640_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25387_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25389_MethodInfo,
	&InternalEnumerator_1_Dispose_m25388_MethodInfo,
	&InternalEnumerator_1_get_Current_m25390_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4640_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6537_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4640_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6537_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4640_0_0_0;
extern Il2CppType InternalEnumerator_1_t4640_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4640_GenericClass;
TypeInfo InternalEnumerator_1_t4640_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4640_MethodInfos/* methods */
	, InternalEnumerator_1_t4640_PropertyInfos/* properties */
	, InternalEnumerator_1_t4640_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4640_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4640_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4640_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4640_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4640_1_0_0/* this_arg */
	, InternalEnumerator_1_t4640_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4640_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4640)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8383_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo ICollection_1_get_Count_m43617_MethodInfo;
static PropertyInfo ICollection_1_t8383____Count_PropertyInfo = 
{
	&ICollection_1_t8383_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43617_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43618_MethodInfo;
static PropertyInfo ICollection_1_t8383____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8383_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43618_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8383_PropertyInfos[] =
{
	&ICollection_1_t8383____Count_PropertyInfo,
	&ICollection_1_t8383____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43617_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Count()
MethodInfo ICollection_1_get_Count_m43617_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43617_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43618_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43618_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43618_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeType_t1492_0_0_0;
extern Il2CppType HandshakeType_t1492_0_0_0;
static ParameterInfo ICollection_1_t8383_ICollection_1_Add_m43619_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t1492_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43619_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Add(T)
MethodInfo ICollection_1_Add_m43619_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Byte_t97/* invoker_method */
	, ICollection_1_t8383_ICollection_1_Add_m43619_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43619_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43620_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Clear()
MethodInfo ICollection_1_Clear_m43620_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43620_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeType_t1492_0_0_0;
static ParameterInfo ICollection_1_t8383_ICollection_1_Contains_m43621_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t1492_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43621_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Contains(T)
MethodInfo ICollection_1_Contains_m43621_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Byte_t97/* invoker_method */
	, ICollection_1_t8383_ICollection_1_Contains_m43621_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43621_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeTypeU5BU5D_t5477_0_0_0;
extern Il2CppType HandshakeTypeU5BU5D_t5477_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8383_ICollection_1_CopyTo_m43622_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeTypeU5BU5D_t5477_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43622_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43622_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8383_ICollection_1_CopyTo_m43622_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43622_GenericMethod/* genericMethod */

};
extern Il2CppType HandshakeType_t1492_0_0_0;
static ParameterInfo ICollection_1_t8383_ICollection_1_Remove_m43623_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t1492_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43623_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Remove(T)
MethodInfo ICollection_1_Remove_m43623_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Byte_t97/* invoker_method */
	, ICollection_1_t8383_ICollection_1_Remove_m43623_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43623_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8383_MethodInfos[] =
{
	&ICollection_1_get_Count_m43617_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43618_MethodInfo,
	&ICollection_1_Add_m43619_MethodInfo,
	&ICollection_1_Clear_m43620_MethodInfo,
	&ICollection_1_Contains_m43621_MethodInfo,
	&ICollection_1_CopyTo_m43622_MethodInfo,
	&ICollection_1_Remove_m43623_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8385_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8383_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8385_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8383_0_0_0;
extern Il2CppType ICollection_1_t8383_1_0_0;
struct ICollection_1_t8383;
extern Il2CppGenericClass ICollection_1_t8383_GenericClass;
TypeInfo ICollection_1_t8383_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8383_MethodInfos/* methods */
	, ICollection_1_t8383_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8383_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8383_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8383_0_0_0/* byval_arg */
	, &ICollection_1_t8383_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8383_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern Il2CppType IEnumerator_1_t6537_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43624_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43624_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8385_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6537_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43624_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8385_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43624_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8385_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8385_0_0_0;
extern Il2CppType IEnumerable_1_t8385_1_0_0;
struct IEnumerable_1_t8385;
extern Il2CppGenericClass IEnumerable_1_t8385_GenericClass;
TypeInfo IEnumerable_1_t8385_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8385_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8385_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8385_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8385_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8385_0_0_0/* byval_arg */
	, &IEnumerable_1_t8385_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8385_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8384_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>
extern MethodInfo IList_1_get_Item_m43625_MethodInfo;
extern MethodInfo IList_1_set_Item_m43626_MethodInfo;
static PropertyInfo IList_1_t8384____Item_PropertyInfo = 
{
	&IList_1_t8384_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43625_MethodInfo/* get */
	, &IList_1_set_Item_m43626_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8384_PropertyInfos[] =
{
	&IList_1_t8384____Item_PropertyInfo,
	NULL
};
extern Il2CppType HandshakeType_t1492_0_0_0;
static ParameterInfo IList_1_t8384_IList_1_IndexOf_m43627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t1492_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43627_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43627_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8384_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8384_IList_1_IndexOf_m43627_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43627_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType HandshakeType_t1492_0_0_0;
static ParameterInfo IList_1_t8384_IList_1_Insert_m43628_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t1492_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43628_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43628_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8384_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8384_IList_1_Insert_m43628_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43628_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8384_IList_1_RemoveAt_m43629_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43629_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43629_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8384_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8384_IList_1_RemoveAt_m43629_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43629_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8384_IList_1_get_Item_m43625_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType HandshakeType_t1492_0_0_0;
extern void* RuntimeInvoker_HandshakeType_t1492_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43625_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43625_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8384_il2cpp_TypeInfo/* declaring_type */
	, &HandshakeType_t1492_0_0_0/* return_type */
	, RuntimeInvoker_HandshakeType_t1492_Int32_t73/* invoker_method */
	, IList_1_t8384_IList_1_get_Item_m43625_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43625_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType HandshakeType_t1492_0_0_0;
static ParameterInfo IList_1_t8384_IList_1_set_Item_m43626_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HandshakeType_t1492_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Byte_t97 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43626_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Security.Protocol.Tls.Handshake.HandshakeType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43626_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8384_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Byte_t97/* invoker_method */
	, IList_1_t8384_IList_1_set_Item_m43626_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43626_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8384_MethodInfos[] =
{
	&IList_1_IndexOf_m43627_MethodInfo,
	&IList_1_Insert_m43628_MethodInfo,
	&IList_1_RemoveAt_m43629_MethodInfo,
	&IList_1_get_Item_m43625_MethodInfo,
	&IList_1_set_Item_m43626_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8384_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8383_il2cpp_TypeInfo,
	&IEnumerable_1_t8385_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8384_0_0_0;
extern Il2CppType IList_1_t8384_1_0_0;
struct IList_1_t8384;
extern Il2CppGenericClass IList_1_t8384_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8384_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8384_MethodInfos/* methods */
	, IList_1_t8384_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8384_il2cpp_TypeInfo/* element_class */
	, IList_1_t8384_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8384_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8384_0_0_0/* byval_arg */
	, &IList_1_t8384_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8384_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6539_il2cpp_TypeInfo;

// System.MonoTODOAttribute
#include "System_System_MonoTODOAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43630_MethodInfo;
static PropertyInfo IEnumerator_1_t6539____Current_PropertyInfo = 
{
	&IEnumerator_1_t6539_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43630_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6539_PropertyInfos[] =
{
	&IEnumerator_1_t6539____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43630_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43630_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6539_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1565_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43630_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6539_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43630_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6539_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6539_0_0_0;
extern Il2CppType IEnumerator_1_t6539_1_0_0;
struct IEnumerator_1_t6539;
extern Il2CppGenericClass IEnumerator_1_t6539_GenericClass;
TypeInfo IEnumerator_1_t6539_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6539_MethodInfos/* methods */
	, IEnumerator_1_t6539_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6539_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6539_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6539_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6539_0_0_0/* byval_arg */
	, &IEnumerator_1_t6539_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6539_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_501.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4641_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_501MethodDeclarations.h"

extern TypeInfo MonoTODOAttribute_t1565_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25395_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoTODOAttribute_t1565_m33554_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoTODOAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoTODOAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoTODOAttribute_t1565_m33554(__this, p0, method) (MonoTODOAttribute_t1565 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4641____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4641, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4641____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4641, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4641_FieldInfos[] =
{
	&InternalEnumerator_1_t4641____array_0_FieldInfo,
	&InternalEnumerator_1_t4641____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25392_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4641____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4641_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25392_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4641____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4641_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25395_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4641_PropertyInfos[] =
{
	&InternalEnumerator_1_t4641____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4641____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4641_InternalEnumerator_1__ctor_m25391_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25391_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25391_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4641_InternalEnumerator_1__ctor_m25391_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25391_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25392_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25392_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25392_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25393_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25393_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25393_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25394_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25394_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25394_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25395_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25395_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1565_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25395_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4641_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25391_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25392_MethodInfo,
	&InternalEnumerator_1_Dispose_m25393_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25394_MethodInfo,
	&InternalEnumerator_1_get_Current_m25395_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25394_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25393_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4641_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25392_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25394_MethodInfo,
	&InternalEnumerator_1_Dispose_m25393_MethodInfo,
	&InternalEnumerator_1_get_Current_m25395_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4641_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6539_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4641_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6539_il2cpp_TypeInfo, 7},
};
extern TypeInfo MonoTODOAttribute_t1565_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4641_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25395_MethodInfo/* Method Usage */,
	&MonoTODOAttribute_t1565_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoTODOAttribute_t1565_m33554_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4641_0_0_0;
extern Il2CppType InternalEnumerator_1_t4641_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4641_GenericClass;
TypeInfo InternalEnumerator_1_t4641_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4641_MethodInfos/* methods */
	, InternalEnumerator_1_t4641_PropertyInfos/* properties */
	, InternalEnumerator_1_t4641_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4641_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4641_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4641_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4641_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4641_1_0_0/* this_arg */
	, InternalEnumerator_1_t4641_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4641_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4641_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4641)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8386_il2cpp_TypeInfo;

#include "System_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>
extern MethodInfo ICollection_1_get_Count_m43631_MethodInfo;
static PropertyInfo ICollection_1_t8386____Count_PropertyInfo = 
{
	&ICollection_1_t8386_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43631_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43632_MethodInfo;
static PropertyInfo ICollection_1_t8386____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8386_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43632_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8386_PropertyInfos[] =
{
	&ICollection_1_t8386____Count_PropertyInfo,
	&ICollection_1_t8386____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43631_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43631_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43631_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43632_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43632_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43632_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
static ParameterInfo ICollection_1_t8386_ICollection_1_Add_m43633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1565_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43633_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43633_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8386_ICollection_1_Add_m43633_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43633_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43634_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43634_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43634_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
static ParameterInfo ICollection_1_t8386_ICollection_1_Contains_m43635_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1565_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43635_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43635_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8386_ICollection_1_Contains_m43635_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43635_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttributeU5BU5D_t5478_0_0_0;
extern Il2CppType MonoTODOAttributeU5BU5D_t5478_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8386_ICollection_1_CopyTo_m43636_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttributeU5BU5D_t5478_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43636_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43636_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8386_ICollection_1_CopyTo_m43636_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43636_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
static ParameterInfo ICollection_1_t8386_ICollection_1_Remove_m43637_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1565_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43637_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43637_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8386_ICollection_1_Remove_m43637_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43637_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8386_MethodInfos[] =
{
	&ICollection_1_get_Count_m43631_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43632_MethodInfo,
	&ICollection_1_Add_m43633_MethodInfo,
	&ICollection_1_Clear_m43634_MethodInfo,
	&ICollection_1_Contains_m43635_MethodInfo,
	&ICollection_1_CopyTo_m43636_MethodInfo,
	&ICollection_1_Remove_m43637_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8388_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8386_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8388_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8386_0_0_0;
extern Il2CppType ICollection_1_t8386_1_0_0;
struct ICollection_1_t8386;
extern Il2CppGenericClass ICollection_1_t8386_GenericClass;
TypeInfo ICollection_1_t8386_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8386_MethodInfos/* methods */
	, ICollection_1_t8386_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8386_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8386_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8386_0_0_0/* byval_arg */
	, &ICollection_1_t8386_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8386_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>
extern Il2CppType IEnumerator_1_t6539_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43638_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43638_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8388_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6539_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43638_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8388_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43638_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8388_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8388_0_0_0;
extern Il2CppType IEnumerable_1_t8388_1_0_0;
struct IEnumerable_1_t8388;
extern Il2CppGenericClass IEnumerable_1_t8388_GenericClass;
TypeInfo IEnumerable_1_t8388_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8388_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8388_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8388_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8388_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8388_0_0_0/* byval_arg */
	, &IEnumerable_1_t8388_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8388_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8387_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoTODOAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoTODOAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoTODOAttribute>
extern MethodInfo IList_1_get_Item_m43639_MethodInfo;
extern MethodInfo IList_1_set_Item_m43640_MethodInfo;
static PropertyInfo IList_1_t8387____Item_PropertyInfo = 
{
	&IList_1_t8387_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43639_MethodInfo/* get */
	, &IList_1_set_Item_m43640_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8387_PropertyInfos[] =
{
	&IList_1_t8387____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
static ParameterInfo IList_1_t8387_IList_1_IndexOf_m43641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1565_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43641_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoTODOAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43641_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8387_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8387_IList_1_IndexOf_m43641_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43641_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
static ParameterInfo IList_1_t8387_IList_1_Insert_m43642_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1565_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43642_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43642_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8387_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8387_IList_1_Insert_m43642_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43642_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8387_IList_1_RemoveAt_m43643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43643_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43643_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8387_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8387_IList_1_RemoveAt_m43643_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43643_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8387_IList_1_get_Item_m43639_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43639_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoTODOAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43639_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8387_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1565_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8387_IList_1_get_Item_m43639_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43639_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoTODOAttribute_t1565_0_0_0;
static ParameterInfo IList_1_t8387_IList_1_set_Item_m43640_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1565_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43640_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43640_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8387_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8387_IList_1_set_Item_m43640_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43640_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8387_MethodInfos[] =
{
	&IList_1_IndexOf_m43641_MethodInfo,
	&IList_1_Insert_m43642_MethodInfo,
	&IList_1_RemoveAt_m43643_MethodInfo,
	&IList_1_get_Item_m43639_MethodInfo,
	&IList_1_set_Item_m43640_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8387_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8386_il2cpp_TypeInfo,
	&IEnumerable_1_t8388_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8387_0_0_0;
extern Il2CppType IList_1_t8387_1_0_0;
struct IList_1_t8387;
extern Il2CppGenericClass IList_1_t8387_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8387_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8387_MethodInfos/* methods */
	, IList_1_t8387_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8387_il2cpp_TypeInfo/* element_class */
	, IList_1_t8387_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8387_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8387_0_0_0/* byval_arg */
	, &IList_1_t8387_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8387_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6541_il2cpp_TypeInfo;

// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43644_MethodInfo;
static PropertyInfo IEnumerator_1_t6541____Current_PropertyInfo = 
{
	&IEnumerator_1_t6541_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43644_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6541_PropertyInfos[] =
{
	&IEnumerator_1_t6541____Current_PropertyInfo,
	NULL
};
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43644_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43644_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6541_il2cpp_TypeInfo/* declaring_type */
	, &EditorBrowsableAttribute_t1037_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43644_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6541_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43644_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6541_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6541_0_0_0;
extern Il2CppType IEnumerator_1_t6541_1_0_0;
struct IEnumerator_1_t6541;
extern Il2CppGenericClass IEnumerator_1_t6541_GenericClass;
TypeInfo IEnumerator_1_t6541_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6541_MethodInfos/* methods */
	, IEnumerator_1_t6541_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6541_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6541_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6541_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6541_0_0_0/* byval_arg */
	, &IEnumerator_1_t6541_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6541_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_502.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4642_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_502MethodDeclarations.h"

extern TypeInfo EditorBrowsableAttribute_t1037_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25400_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEditorBrowsableAttribute_t1037_m33565_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ComponentModel.EditorBrowsableAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ComponentModel.EditorBrowsableAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisEditorBrowsableAttribute_t1037_m33565(__this, p0, method) (EditorBrowsableAttribute_t1037 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4642____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4642, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4642____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4642, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4642_FieldInfos[] =
{
	&InternalEnumerator_1_t4642____array_0_FieldInfo,
	&InternalEnumerator_1_t4642____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25397_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4642____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4642_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25397_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4642____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4642_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25400_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4642_PropertyInfos[] =
{
	&InternalEnumerator_1_t4642____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4642____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4642_InternalEnumerator_1__ctor_m25396_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25396_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25396_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4642_InternalEnumerator_1__ctor_m25396_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25396_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25397_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25397_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25397_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25398_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25398_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25398_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25399_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25399_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25399_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25400_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25400_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* declaring_type */
	, &EditorBrowsableAttribute_t1037_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25400_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4642_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25396_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25397_MethodInfo,
	&InternalEnumerator_1_Dispose_m25398_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25399_MethodInfo,
	&InternalEnumerator_1_get_Current_m25400_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25399_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25398_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4642_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25397_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25399_MethodInfo,
	&InternalEnumerator_1_Dispose_m25398_MethodInfo,
	&InternalEnumerator_1_get_Current_m25400_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4642_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6541_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4642_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6541_il2cpp_TypeInfo, 7},
};
extern TypeInfo EditorBrowsableAttribute_t1037_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4642_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25400_MethodInfo/* Method Usage */,
	&EditorBrowsableAttribute_t1037_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisEditorBrowsableAttribute_t1037_m33565_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4642_0_0_0;
extern Il2CppType InternalEnumerator_1_t4642_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4642_GenericClass;
TypeInfo InternalEnumerator_1_t4642_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4642_MethodInfos/* methods */
	, InternalEnumerator_1_t4642_PropertyInfos/* properties */
	, InternalEnumerator_1_t4642_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4642_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4642_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4642_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4642_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4642_1_0_0/* this_arg */
	, InternalEnumerator_1_t4642_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4642_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4642_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4642)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8389_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>
extern MethodInfo ICollection_1_get_Count_m43645_MethodInfo;
static PropertyInfo ICollection_1_t8389____Count_PropertyInfo = 
{
	&ICollection_1_t8389_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43645_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43646_MethodInfo;
static PropertyInfo ICollection_1_t8389____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8389_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43646_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8389_PropertyInfos[] =
{
	&ICollection_1_t8389____Count_PropertyInfo,
	&ICollection_1_t8389____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43645_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43645_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43645_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43646_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43646_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43646_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
static ParameterInfo ICollection_1_t8389_ICollection_1_Add_m43647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableAttribute_t1037_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43647_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43647_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8389_ICollection_1_Add_m43647_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43647_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43648_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43648_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43648_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
static ParameterInfo ICollection_1_t8389_ICollection_1_Contains_m43649_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableAttribute_t1037_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43649_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43649_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8389_ICollection_1_Contains_m43649_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43649_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableAttributeU5BU5D_t5479_0_0_0;
extern Il2CppType EditorBrowsableAttributeU5BU5D_t5479_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8389_ICollection_1_CopyTo_m43650_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableAttributeU5BU5D_t5479_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43650_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43650_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8389_ICollection_1_CopyTo_m43650_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43650_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
static ParameterInfo ICollection_1_t8389_ICollection_1_Remove_m43651_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableAttribute_t1037_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43651_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43651_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8389_ICollection_1_Remove_m43651_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43651_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8389_MethodInfos[] =
{
	&ICollection_1_get_Count_m43645_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43646_MethodInfo,
	&ICollection_1_Add_m43647_MethodInfo,
	&ICollection_1_Clear_m43648_MethodInfo,
	&ICollection_1_Contains_m43649_MethodInfo,
	&ICollection_1_CopyTo_m43650_MethodInfo,
	&ICollection_1_Remove_m43651_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8391_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8389_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8391_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8389_0_0_0;
extern Il2CppType ICollection_1_t8389_1_0_0;
struct ICollection_1_t8389;
extern Il2CppGenericClass ICollection_1_t8389_GenericClass;
TypeInfo ICollection_1_t8389_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8389_MethodInfos/* methods */
	, ICollection_1_t8389_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8389_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8389_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8389_0_0_0/* byval_arg */
	, &ICollection_1_t8389_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8389_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ComponentModel.EditorBrowsableAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ComponentModel.EditorBrowsableAttribute>
extern Il2CppType IEnumerator_1_t6541_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43652_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ComponentModel.EditorBrowsableAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43652_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8391_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6541_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43652_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8391_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43652_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8391_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8391_0_0_0;
extern Il2CppType IEnumerable_1_t8391_1_0_0;
struct IEnumerable_1_t8391;
extern Il2CppGenericClass IEnumerable_1_t8391_GenericClass;
TypeInfo IEnumerable_1_t8391_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8391_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8391_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8391_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8391_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8391_0_0_0/* byval_arg */
	, &IEnumerable_1_t8391_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8391_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8390_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>
extern MethodInfo IList_1_get_Item_m43653_MethodInfo;
extern MethodInfo IList_1_set_Item_m43654_MethodInfo;
static PropertyInfo IList_1_t8390____Item_PropertyInfo = 
{
	&IList_1_t8390_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43653_MethodInfo/* get */
	, &IList_1_set_Item_m43654_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8390_PropertyInfos[] =
{
	&IList_1_t8390____Item_PropertyInfo,
	NULL
};
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
static ParameterInfo IList_1_t8390_IList_1_IndexOf_m43655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableAttribute_t1037_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43655_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43655_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8390_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8390_IList_1_IndexOf_m43655_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43655_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
static ParameterInfo IList_1_t8390_IList_1_Insert_m43656_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableAttribute_t1037_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43656_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43656_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8390_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8390_IList_1_Insert_m43656_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43656_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8390_IList_1_RemoveAt_m43657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43657_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43657_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8390_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8390_IList_1_RemoveAt_m43657_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43657_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8390_IList_1_get_Item_m43653_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43653_GenericMethod;
// T System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43653_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8390_il2cpp_TypeInfo/* declaring_type */
	, &EditorBrowsableAttribute_t1037_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8390_IList_1_get_Item_m43653_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43653_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EditorBrowsableAttribute_t1037_0_0_0;
static ParameterInfo IList_1_t8390_IList_1_set_Item_m43654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableAttribute_t1037_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43654_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43654_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8390_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8390_IList_1_set_Item_m43654_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43654_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8390_MethodInfos[] =
{
	&IList_1_IndexOf_m43655_MethodInfo,
	&IList_1_Insert_m43656_MethodInfo,
	&IList_1_RemoveAt_m43657_MethodInfo,
	&IList_1_get_Item_m43653_MethodInfo,
	&IList_1_set_Item_m43654_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8390_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8389_il2cpp_TypeInfo,
	&IEnumerable_1_t8391_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8390_0_0_0;
extern Il2CppType IList_1_t8390_1_0_0;
struct IList_1_t8390;
extern Il2CppGenericClass IList_1_t8390_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8390_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8390_MethodInfos/* methods */
	, IList_1_t8390_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8390_il2cpp_TypeInfo/* element_class */
	, IList_1_t8390_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8390_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8390_0_0_0/* byval_arg */
	, &IList_1_t8390_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8390_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6543_il2cpp_TypeInfo;

// System.ComponentModel.EditorBrowsableState
#include "System_System_ComponentModel_EditorBrowsableState.h"


// T System.Collections.Generic.IEnumerator`1<System.ComponentModel.EditorBrowsableState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ComponentModel.EditorBrowsableState>
extern MethodInfo IEnumerator_1_get_Current_m43658_MethodInfo;
static PropertyInfo IEnumerator_1_t6543____Current_PropertyInfo = 
{
	&IEnumerator_1_t6543_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43658_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6543_PropertyInfos[] =
{
	&IEnumerator_1_t6543____Current_PropertyInfo,
	NULL
};
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
extern void* RuntimeInvoker_EditorBrowsableState_t1585 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43658_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ComponentModel.EditorBrowsableState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43658_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6543_il2cpp_TypeInfo/* declaring_type */
	, &EditorBrowsableState_t1585_0_0_0/* return_type */
	, RuntimeInvoker_EditorBrowsableState_t1585/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43658_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6543_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43658_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6543_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6543_0_0_0;
extern Il2CppType IEnumerator_1_t6543_1_0_0;
struct IEnumerator_1_t6543;
extern Il2CppGenericClass IEnumerator_1_t6543_GenericClass;
TypeInfo IEnumerator_1_t6543_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6543_MethodInfos/* methods */
	, IEnumerator_1_t6543_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6543_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6543_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6543_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6543_0_0_0/* byval_arg */
	, &IEnumerator_1_t6543_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6543_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_503.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4643_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_503MethodDeclarations.h"

extern TypeInfo EditorBrowsableState_t1585_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25405_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEditorBrowsableState_t1585_m33576_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ComponentModel.EditorBrowsableState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ComponentModel.EditorBrowsableState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEditorBrowsableState_t1585_m33576 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25401_MethodInfo;
 void InternalEnumerator_1__ctor_m25401 (InternalEnumerator_1_t4643 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402 (InternalEnumerator_1_t4643 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25405(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25405_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EditorBrowsableState_t1585_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25403_MethodInfo;
 void InternalEnumerator_1_Dispose_m25403 (InternalEnumerator_1_t4643 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25404_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25404 (InternalEnumerator_1_t4643 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25405 (InternalEnumerator_1_t4643 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEditorBrowsableState_t1585_m33576(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEditorBrowsableState_t1585_m33576_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4643____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4643, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4643____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4643, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4643_FieldInfos[] =
{
	&InternalEnumerator_1_t4643____array_0_FieldInfo,
	&InternalEnumerator_1_t4643____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4643____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4643_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4643____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4643_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25405_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4643_PropertyInfos[] =
{
	&InternalEnumerator_1_t4643____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4643____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4643_InternalEnumerator_1__ctor_m25401_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25401_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25401_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25401/* method */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4643_InternalEnumerator_1__ctor_m25401_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25401_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402/* method */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25403_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25403_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25403/* method */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25403_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25404_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25404_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25404/* method */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25404_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
extern void* RuntimeInvoker_EditorBrowsableState_t1585 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25405_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ComponentModel.EditorBrowsableState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25405_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25405/* method */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* declaring_type */
	, &EditorBrowsableState_t1585_0_0_0/* return_type */
	, RuntimeInvoker_EditorBrowsableState_t1585/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25405_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4643_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25401_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402_MethodInfo,
	&InternalEnumerator_1_Dispose_m25403_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25404_MethodInfo,
	&InternalEnumerator_1_get_Current_m25405_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4643_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25402_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25404_MethodInfo,
	&InternalEnumerator_1_Dispose_m25403_MethodInfo,
	&InternalEnumerator_1_get_Current_m25405_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4643_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6543_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4643_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6543_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4643_0_0_0;
extern Il2CppType InternalEnumerator_1_t4643_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4643_GenericClass;
TypeInfo InternalEnumerator_1_t4643_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4643_MethodInfos/* methods */
	, InternalEnumerator_1_t4643_PropertyInfos/* properties */
	, InternalEnumerator_1_t4643_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4643_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4643_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4643_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4643_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4643_1_0_0/* this_arg */
	, InternalEnumerator_1_t4643_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4643_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4643)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8392_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>
extern MethodInfo ICollection_1_get_Count_m43659_MethodInfo;
static PropertyInfo ICollection_1_t8392____Count_PropertyInfo = 
{
	&ICollection_1_t8392_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43659_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43660_MethodInfo;
static PropertyInfo ICollection_1_t8392____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8392_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43660_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8392_PropertyInfos[] =
{
	&ICollection_1_t8392____Count_PropertyInfo,
	&ICollection_1_t8392____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43659_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::get_Count()
MethodInfo ICollection_1_get_Count_m43659_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43659_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43660_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43660_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43660_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
static ParameterInfo ICollection_1_t8392_ICollection_1_Add_m43661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableState_t1585_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43661_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::Add(T)
MethodInfo ICollection_1_Add_m43661_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8392_ICollection_1_Add_m43661_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43661_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43662_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::Clear()
MethodInfo ICollection_1_Clear_m43662_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43662_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
static ParameterInfo ICollection_1_t8392_ICollection_1_Contains_m43663_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableState_t1585_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43663_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::Contains(T)
MethodInfo ICollection_1_Contains_m43663_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8392_ICollection_1_Contains_m43663_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43663_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableStateU5BU5D_t5480_0_0_0;
extern Il2CppType EditorBrowsableStateU5BU5D_t5480_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8392_ICollection_1_CopyTo_m43664_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableStateU5BU5D_t5480_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43664_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43664_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8392_ICollection_1_CopyTo_m43664_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43664_GenericMethod/* genericMethod */

};
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
static ParameterInfo ICollection_1_t8392_ICollection_1_Remove_m43665_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableState_t1585_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43665_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.EditorBrowsableState>::Remove(T)
MethodInfo ICollection_1_Remove_m43665_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8392_ICollection_1_Remove_m43665_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43665_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8392_MethodInfos[] =
{
	&ICollection_1_get_Count_m43659_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43660_MethodInfo,
	&ICollection_1_Add_m43661_MethodInfo,
	&ICollection_1_Clear_m43662_MethodInfo,
	&ICollection_1_Contains_m43663_MethodInfo,
	&ICollection_1_CopyTo_m43664_MethodInfo,
	&ICollection_1_Remove_m43665_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8394_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8392_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8394_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8392_0_0_0;
extern Il2CppType ICollection_1_t8392_1_0_0;
struct ICollection_1_t8392;
extern Il2CppGenericClass ICollection_1_t8392_GenericClass;
TypeInfo ICollection_1_t8392_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8392_MethodInfos/* methods */
	, ICollection_1_t8392_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8392_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8392_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8392_0_0_0/* byval_arg */
	, &ICollection_1_t8392_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8392_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ComponentModel.EditorBrowsableState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ComponentModel.EditorBrowsableState>
extern Il2CppType IEnumerator_1_t6543_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43666_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ComponentModel.EditorBrowsableState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43666_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8394_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6543_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43666_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8394_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43666_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8394_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8394_0_0_0;
extern Il2CppType IEnumerable_1_t8394_1_0_0;
struct IEnumerable_1_t8394;
extern Il2CppGenericClass IEnumerable_1_t8394_GenericClass;
TypeInfo IEnumerable_1_t8394_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8394_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8394_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8394_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8394_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8394_0_0_0/* byval_arg */
	, &IEnumerable_1_t8394_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8394_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8393_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>
extern MethodInfo IList_1_get_Item_m43667_MethodInfo;
extern MethodInfo IList_1_set_Item_m43668_MethodInfo;
static PropertyInfo IList_1_t8393____Item_PropertyInfo = 
{
	&IList_1_t8393_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43667_MethodInfo/* get */
	, &IList_1_set_Item_m43668_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8393_PropertyInfos[] =
{
	&IList_1_t8393____Item_PropertyInfo,
	NULL
};
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
static ParameterInfo IList_1_t8393_IList_1_IndexOf_m43669_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableState_t1585_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43669_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43669_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8393_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8393_IList_1_IndexOf_m43669_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43669_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
static ParameterInfo IList_1_t8393_IList_1_Insert_m43670_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableState_t1585_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43670_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43670_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8393_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8393_IList_1_Insert_m43670_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43670_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8393_IList_1_RemoveAt_m43671_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43671_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43671_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8393_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8393_IList_1_RemoveAt_m43671_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43671_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8393_IList_1_get_Item_m43667_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
extern void* RuntimeInvoker_EditorBrowsableState_t1585_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43667_GenericMethod;
// T System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43667_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8393_il2cpp_TypeInfo/* declaring_type */
	, &EditorBrowsableState_t1585_0_0_0/* return_type */
	, RuntimeInvoker_EditorBrowsableState_t1585_Int32_t73/* invoker_method */
	, IList_1_t8393_IList_1_get_Item_m43667_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43667_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EditorBrowsableState_t1585_0_0_0;
static ParameterInfo IList_1_t8393_IList_1_set_Item_m43668_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EditorBrowsableState_t1585_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43668_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.EditorBrowsableState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43668_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8393_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8393_IList_1_set_Item_m43668_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43668_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8393_MethodInfos[] =
{
	&IList_1_IndexOf_m43669_MethodInfo,
	&IList_1_Insert_m43670_MethodInfo,
	&IList_1_RemoveAt_m43671_MethodInfo,
	&IList_1_get_Item_m43667_MethodInfo,
	&IList_1_set_Item_m43668_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8393_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8392_il2cpp_TypeInfo,
	&IEnumerable_1_t8394_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8393_0_0_0;
extern Il2CppType IList_1_t8393_1_0_0;
struct IList_1_t8393;
extern Il2CppGenericClass IList_1_t8393_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8393_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8393_MethodInfos/* methods */
	, IList_1_t8393_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8393_il2cpp_TypeInfo/* element_class */
	, IList_1_t8393_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8393_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8393_0_0_0/* byval_arg */
	, &IList_1_t8393_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8393_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6545_il2cpp_TypeInfo;

// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ComponentModel.TypeConverterAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ComponentModel.TypeConverterAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43672_MethodInfo;
static PropertyInfo IEnumerator_1_t6545____Current_PropertyInfo = 
{
	&IEnumerator_1_t6545_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43672_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6545_PropertyInfos[] =
{
	&IEnumerator_1_t6545____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43672_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ComponentModel.TypeConverterAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43672_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6545_il2cpp_TypeInfo/* declaring_type */
	, &TypeConverterAttribute_t1587_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43672_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6545_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43672_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6545_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6545_0_0_0;
extern Il2CppType IEnumerator_1_t6545_1_0_0;
struct IEnumerator_1_t6545;
extern Il2CppGenericClass IEnumerator_1_t6545_GenericClass;
TypeInfo IEnumerator_1_t6545_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6545_MethodInfos/* methods */
	, IEnumerator_1_t6545_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6545_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6545_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6545_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6545_0_0_0/* byval_arg */
	, &IEnumerator_1_t6545_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6545_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_504.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4644_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_504MethodDeclarations.h"

extern TypeInfo TypeConverterAttribute_t1587_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25410_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeConverterAttribute_t1587_m33587_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ComponentModel.TypeConverterAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ComponentModel.TypeConverterAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeConverterAttribute_t1587_m33587(__this, p0, method) (TypeConverterAttribute_t1587 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4644____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4644, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4644____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4644, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4644_FieldInfos[] =
{
	&InternalEnumerator_1_t4644____array_0_FieldInfo,
	&InternalEnumerator_1_t4644____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25407_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4644____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4644_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25407_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4644____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4644_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25410_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4644_PropertyInfos[] =
{
	&InternalEnumerator_1_t4644____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4644____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4644_InternalEnumerator_1__ctor_m25406_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25406_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25406_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4644_InternalEnumerator_1__ctor_m25406_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25406_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25407_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25407_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25407_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25408_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25408_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25408_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25409_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25409_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25409_GenericMethod/* genericMethod */

};
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25410_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ComponentModel.TypeConverterAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25410_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* declaring_type */
	, &TypeConverterAttribute_t1587_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25410_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4644_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25406_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25407_MethodInfo,
	&InternalEnumerator_1_Dispose_m25408_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25409_MethodInfo,
	&InternalEnumerator_1_get_Current_m25410_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25409_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25408_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4644_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25407_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25409_MethodInfo,
	&InternalEnumerator_1_Dispose_m25408_MethodInfo,
	&InternalEnumerator_1_get_Current_m25410_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4644_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6545_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4644_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6545_il2cpp_TypeInfo, 7},
};
extern TypeInfo TypeConverterAttribute_t1587_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4644_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25410_MethodInfo/* Method Usage */,
	&TypeConverterAttribute_t1587_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisTypeConverterAttribute_t1587_m33587_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4644_0_0_0;
extern Il2CppType InternalEnumerator_1_t4644_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4644_GenericClass;
TypeInfo InternalEnumerator_1_t4644_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4644_MethodInfos/* methods */
	, InternalEnumerator_1_t4644_PropertyInfos/* properties */
	, InternalEnumerator_1_t4644_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4644_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4644_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4644_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4644_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4644_1_0_0/* this_arg */
	, InternalEnumerator_1_t4644_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4644_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4644_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4644)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8395_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>
extern MethodInfo ICollection_1_get_Count_m43673_MethodInfo;
static PropertyInfo ICollection_1_t8395____Count_PropertyInfo = 
{
	&ICollection_1_t8395_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43673_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43674_MethodInfo;
static PropertyInfo ICollection_1_t8395____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8395_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43674_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8395_PropertyInfos[] =
{
	&ICollection_1_t8395____Count_PropertyInfo,
	&ICollection_1_t8395____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43673_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43673_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43673_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43674_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43674_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43674_GenericMethod/* genericMethod */

};
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
static ParameterInfo ICollection_1_t8395_ICollection_1_Add_m43675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeConverterAttribute_t1587_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43675_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43675_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8395_ICollection_1_Add_m43675_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43675_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43676_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43676_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43676_GenericMethod/* genericMethod */

};
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
static ParameterInfo ICollection_1_t8395_ICollection_1_Contains_m43677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeConverterAttribute_t1587_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43677_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43677_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8395_ICollection_1_Contains_m43677_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43677_GenericMethod/* genericMethod */

};
extern Il2CppType TypeConverterAttributeU5BU5D_t5481_0_0_0;
extern Il2CppType TypeConverterAttributeU5BU5D_t5481_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8395_ICollection_1_CopyTo_m43678_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeConverterAttributeU5BU5D_t5481_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43678_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43678_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8395_ICollection_1_CopyTo_m43678_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43678_GenericMethod/* genericMethod */

};
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
static ParameterInfo ICollection_1_t8395_ICollection_1_Remove_m43679_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeConverterAttribute_t1587_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43679_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ComponentModel.TypeConverterAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43679_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8395_ICollection_1_Remove_m43679_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43679_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8395_MethodInfos[] =
{
	&ICollection_1_get_Count_m43673_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43674_MethodInfo,
	&ICollection_1_Add_m43675_MethodInfo,
	&ICollection_1_Clear_m43676_MethodInfo,
	&ICollection_1_Contains_m43677_MethodInfo,
	&ICollection_1_CopyTo_m43678_MethodInfo,
	&ICollection_1_Remove_m43679_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8397_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8395_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8397_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8395_0_0_0;
extern Il2CppType ICollection_1_t8395_1_0_0;
struct ICollection_1_t8395;
extern Il2CppGenericClass ICollection_1_t8395_GenericClass;
TypeInfo ICollection_1_t8395_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8395_MethodInfos/* methods */
	, ICollection_1_t8395_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8395_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8395_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8395_0_0_0/* byval_arg */
	, &ICollection_1_t8395_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8395_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ComponentModel.TypeConverterAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ComponentModel.TypeConverterAttribute>
extern Il2CppType IEnumerator_1_t6545_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43680_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ComponentModel.TypeConverterAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43680_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8397_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6545_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43680_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8397_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43680_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8397_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8397_0_0_0;
extern Il2CppType IEnumerable_1_t8397_1_0_0;
struct IEnumerable_1_t8397;
extern Il2CppGenericClass IEnumerable_1_t8397_GenericClass;
TypeInfo IEnumerable_1_t8397_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8397_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8397_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8397_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8397_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8397_0_0_0/* byval_arg */
	, &IEnumerable_1_t8397_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8397_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8396_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>
extern MethodInfo IList_1_get_Item_m43681_MethodInfo;
extern MethodInfo IList_1_set_Item_m43682_MethodInfo;
static PropertyInfo IList_1_t8396____Item_PropertyInfo = 
{
	&IList_1_t8396_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43681_MethodInfo/* get */
	, &IList_1_set_Item_m43682_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8396_PropertyInfos[] =
{
	&IList_1_t8396____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
static ParameterInfo IList_1_t8396_IList_1_IndexOf_m43683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeConverterAttribute_t1587_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43683_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43683_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8396_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8396_IList_1_IndexOf_m43683_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43683_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
static ParameterInfo IList_1_t8396_IList_1_Insert_m43684_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeConverterAttribute_t1587_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43684_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43684_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8396_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8396_IList_1_Insert_m43684_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43684_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8396_IList_1_RemoveAt_m43685_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43685_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43685_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8396_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8396_IList_1_RemoveAt_m43685_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43685_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8396_IList_1_get_Item_m43681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43681_GenericMethod;
// T System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43681_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8396_il2cpp_TypeInfo/* declaring_type */
	, &TypeConverterAttribute_t1587_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8396_IList_1_get_Item_m43681_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43681_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TypeConverterAttribute_t1587_0_0_0;
static ParameterInfo IList_1_t8396_IList_1_set_Item_m43682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeConverterAttribute_t1587_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43682_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ComponentModel.TypeConverterAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43682_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8396_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8396_IList_1_set_Item_m43682_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43682_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8396_MethodInfos[] =
{
	&IList_1_IndexOf_m43683_MethodInfo,
	&IList_1_Insert_m43684_MethodInfo,
	&IList_1_RemoveAt_m43685_MethodInfo,
	&IList_1_get_Item_m43681_MethodInfo,
	&IList_1_set_Item_m43682_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8396_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8395_il2cpp_TypeInfo,
	&IEnumerable_1_t8397_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8396_0_0_0;
extern Il2CppType IList_1_t8396_1_0_0;
struct IList_1_t8396;
extern Il2CppGenericClass IList_1_t8396_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8396_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8396_MethodInfos/* methods */
	, IList_1_t8396_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8396_il2cpp_TypeInfo/* element_class */
	, IList_1_t8396_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8396_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8396_0_0_0/* byval_arg */
	, &IList_1_t8396_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8396_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6547_il2cpp_TypeInfo;

// System.Net.Security.AuthenticationLevel
#include "System_System_Net_Security_AuthenticationLevel.h"


// T System.Collections.Generic.IEnumerator`1<System.Net.Security.AuthenticationLevel>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.Security.AuthenticationLevel>
extern MethodInfo IEnumerator_1_get_Current_m43686_MethodInfo;
static PropertyInfo IEnumerator_1_t6547____Current_PropertyInfo = 
{
	&IEnumerator_1_t6547_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43686_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6547_PropertyInfos[] =
{
	&IEnumerator_1_t6547____Current_PropertyInfo,
	NULL
};
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
extern void* RuntimeInvoker_AuthenticationLevel_t1588 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43686_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Net.Security.AuthenticationLevel>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43686_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6547_il2cpp_TypeInfo/* declaring_type */
	, &AuthenticationLevel_t1588_0_0_0/* return_type */
	, RuntimeInvoker_AuthenticationLevel_t1588/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43686_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6547_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43686_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6547_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6547_0_0_0;
extern Il2CppType IEnumerator_1_t6547_1_0_0;
struct IEnumerator_1_t6547;
extern Il2CppGenericClass IEnumerator_1_t6547_GenericClass;
TypeInfo IEnumerator_1_t6547_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6547_MethodInfos/* methods */
	, IEnumerator_1_t6547_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6547_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6547_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6547_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6547_0_0_0/* byval_arg */
	, &IEnumerator_1_t6547_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6547_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_505.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4645_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_505MethodDeclarations.h"

extern TypeInfo AuthenticationLevel_t1588_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25415_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAuthenticationLevel_t1588_m33598_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Net.Security.AuthenticationLevel>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Net.Security.AuthenticationLevel>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAuthenticationLevel_t1588_m33598 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25411_MethodInfo;
 void InternalEnumerator_1__ctor_m25411 (InternalEnumerator_1_t4645 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412 (InternalEnumerator_1_t4645 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25415(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25415_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AuthenticationLevel_t1588_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25413_MethodInfo;
 void InternalEnumerator_1_Dispose_m25413 (InternalEnumerator_1_t4645 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25414_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25414 (InternalEnumerator_1_t4645 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25415 (InternalEnumerator_1_t4645 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAuthenticationLevel_t1588_m33598(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAuthenticationLevel_t1588_m33598_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4645____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4645, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4645____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4645, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4645_FieldInfos[] =
{
	&InternalEnumerator_1_t4645____array_0_FieldInfo,
	&InternalEnumerator_1_t4645____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4645____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4645_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4645____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4645_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25415_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4645_PropertyInfos[] =
{
	&InternalEnumerator_1_t4645____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4645____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4645_InternalEnumerator_1__ctor_m25411_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25411_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25411_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25411/* method */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4645_InternalEnumerator_1__ctor_m25411_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25411_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412/* method */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25413_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25413_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25413/* method */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25413_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25414_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25414_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25414/* method */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25414_GenericMethod/* genericMethod */

};
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
extern void* RuntimeInvoker_AuthenticationLevel_t1588 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25415_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Net.Security.AuthenticationLevel>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25415_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25415/* method */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* declaring_type */
	, &AuthenticationLevel_t1588_0_0_0/* return_type */
	, RuntimeInvoker_AuthenticationLevel_t1588/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25415_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4645_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25411_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412_MethodInfo,
	&InternalEnumerator_1_Dispose_m25413_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25414_MethodInfo,
	&InternalEnumerator_1_get_Current_m25415_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4645_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25412_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25414_MethodInfo,
	&InternalEnumerator_1_Dispose_m25413_MethodInfo,
	&InternalEnumerator_1_get_Current_m25415_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4645_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6547_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4645_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6547_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4645_0_0_0;
extern Il2CppType InternalEnumerator_1_t4645_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4645_GenericClass;
TypeInfo InternalEnumerator_1_t4645_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4645_MethodInfos/* methods */
	, InternalEnumerator_1_t4645_PropertyInfos/* properties */
	, InternalEnumerator_1_t4645_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4645_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4645_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4645_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4645_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4645_1_0_0/* this_arg */
	, InternalEnumerator_1_t4645_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4645_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4645)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8398_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>
extern MethodInfo ICollection_1_get_Count_m43687_MethodInfo;
static PropertyInfo ICollection_1_t8398____Count_PropertyInfo = 
{
	&ICollection_1_t8398_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43687_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43688_MethodInfo;
static PropertyInfo ICollection_1_t8398____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8398_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43688_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8398_PropertyInfos[] =
{
	&ICollection_1_t8398____Count_PropertyInfo,
	&ICollection_1_t8398____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43687_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::get_Count()
MethodInfo ICollection_1_get_Count_m43687_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43687_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43688_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43688_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43688_GenericMethod/* genericMethod */

};
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
static ParameterInfo ICollection_1_t8398_ICollection_1_Add_m43689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AuthenticationLevel_t1588_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43689_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::Add(T)
MethodInfo ICollection_1_Add_m43689_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8398_ICollection_1_Add_m43689_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43689_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43690_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::Clear()
MethodInfo ICollection_1_Clear_m43690_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43690_GenericMethod/* genericMethod */

};
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
static ParameterInfo ICollection_1_t8398_ICollection_1_Contains_m43691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AuthenticationLevel_t1588_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43691_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::Contains(T)
MethodInfo ICollection_1_Contains_m43691_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8398_ICollection_1_Contains_m43691_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43691_GenericMethod/* genericMethod */

};
extern Il2CppType AuthenticationLevelU5BU5D_t5482_0_0_0;
extern Il2CppType AuthenticationLevelU5BU5D_t5482_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8398_ICollection_1_CopyTo_m43692_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AuthenticationLevelU5BU5D_t5482_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43692_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43692_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8398_ICollection_1_CopyTo_m43692_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43692_GenericMethod/* genericMethod */

};
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
static ParameterInfo ICollection_1_t8398_ICollection_1_Remove_m43693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AuthenticationLevel_t1588_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43693_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.AuthenticationLevel>::Remove(T)
MethodInfo ICollection_1_Remove_m43693_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8398_ICollection_1_Remove_m43693_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43693_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8398_MethodInfos[] =
{
	&ICollection_1_get_Count_m43687_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43688_MethodInfo,
	&ICollection_1_Add_m43689_MethodInfo,
	&ICollection_1_Clear_m43690_MethodInfo,
	&ICollection_1_Contains_m43691_MethodInfo,
	&ICollection_1_CopyTo_m43692_MethodInfo,
	&ICollection_1_Remove_m43693_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8400_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8398_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8400_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8398_0_0_0;
extern Il2CppType ICollection_1_t8398_1_0_0;
struct ICollection_1_t8398;
extern Il2CppGenericClass ICollection_1_t8398_GenericClass;
TypeInfo ICollection_1_t8398_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8398_MethodInfos/* methods */
	, ICollection_1_t8398_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8398_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8398_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8398_0_0_0/* byval_arg */
	, &ICollection_1_t8398_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8398_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.Security.AuthenticationLevel>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.Security.AuthenticationLevel>
extern Il2CppType IEnumerator_1_t6547_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43694_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.Security.AuthenticationLevel>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43694_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8400_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6547_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43694_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8400_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43694_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8400_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8400_0_0_0;
extern Il2CppType IEnumerable_1_t8400_1_0_0;
struct IEnumerable_1_t8400;
extern Il2CppGenericClass IEnumerable_1_t8400_GenericClass;
TypeInfo IEnumerable_1_t8400_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8400_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8400_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8400_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8400_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8400_0_0_0/* byval_arg */
	, &IEnumerable_1_t8400_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8400_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8399_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>
extern MethodInfo IList_1_get_Item_m43695_MethodInfo;
extern MethodInfo IList_1_set_Item_m43696_MethodInfo;
static PropertyInfo IList_1_t8399____Item_PropertyInfo = 
{
	&IList_1_t8399_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43695_MethodInfo/* get */
	, &IList_1_set_Item_m43696_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8399_PropertyInfos[] =
{
	&IList_1_t8399____Item_PropertyInfo,
	NULL
};
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
static ParameterInfo IList_1_t8399_IList_1_IndexOf_m43697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AuthenticationLevel_t1588_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43697_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43697_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8399_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8399_IList_1_IndexOf_m43697_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43697_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
static ParameterInfo IList_1_t8399_IList_1_Insert_m43698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AuthenticationLevel_t1588_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43698_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43698_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8399_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8399_IList_1_Insert_m43698_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43698_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8399_IList_1_RemoveAt_m43699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43699_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43699_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8399_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8399_IList_1_RemoveAt_m43699_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43699_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8399_IList_1_get_Item_m43695_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
extern void* RuntimeInvoker_AuthenticationLevel_t1588_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43695_GenericMethod;
// T System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43695_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8399_il2cpp_TypeInfo/* declaring_type */
	, &AuthenticationLevel_t1588_0_0_0/* return_type */
	, RuntimeInvoker_AuthenticationLevel_t1588_Int32_t73/* invoker_method */
	, IList_1_t8399_IList_1_get_Item_m43695_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43695_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AuthenticationLevel_t1588_0_0_0;
static ParameterInfo IList_1_t8399_IList_1_set_Item_m43696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AuthenticationLevel_t1588_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43696_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Security.AuthenticationLevel>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43696_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8399_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8399_IList_1_set_Item_m43696_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43696_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8399_MethodInfos[] =
{
	&IList_1_IndexOf_m43697_MethodInfo,
	&IList_1_Insert_m43698_MethodInfo,
	&IList_1_RemoveAt_m43699_MethodInfo,
	&IList_1_get_Item_m43695_MethodInfo,
	&IList_1_set_Item_m43696_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8399_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8398_il2cpp_TypeInfo,
	&IEnumerable_1_t8400_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8399_0_0_0;
extern Il2CppType IList_1_t8399_1_0_0;
struct IList_1_t8399;
extern Il2CppGenericClass IList_1_t8399_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8399_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8399_MethodInfos/* methods */
	, IList_1_t8399_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8399_il2cpp_TypeInfo/* element_class */
	, IList_1_t8399_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8399_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8399_0_0_0/* byval_arg */
	, &IList_1_t8399_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8399_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6549_il2cpp_TypeInfo;

// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"


// T System.Collections.Generic.IEnumerator`1<System.Net.Security.SslPolicyErrors>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.Security.SslPolicyErrors>
extern MethodInfo IEnumerator_1_get_Current_m43700_MethodInfo;
static PropertyInfo IEnumerator_1_t6549____Current_PropertyInfo = 
{
	&IEnumerator_1_t6549_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43700_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6549_PropertyInfos[] =
{
	&IEnumerator_1_t6549____Current_PropertyInfo,
	NULL
};
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
extern void* RuntimeInvoker_SslPolicyErrors_t1552 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43700_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Net.Security.SslPolicyErrors>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43700_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6549_il2cpp_TypeInfo/* declaring_type */
	, &SslPolicyErrors_t1552_0_0_0/* return_type */
	, RuntimeInvoker_SslPolicyErrors_t1552/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43700_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6549_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43700_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6549_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6549_0_0_0;
extern Il2CppType IEnumerator_1_t6549_1_0_0;
struct IEnumerator_1_t6549;
extern Il2CppGenericClass IEnumerator_1_t6549_GenericClass;
TypeInfo IEnumerator_1_t6549_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6549_MethodInfos/* methods */
	, IEnumerator_1_t6549_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6549_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6549_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6549_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6549_0_0_0/* byval_arg */
	, &IEnumerator_1_t6549_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6549_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_506.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4646_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_506MethodDeclarations.h"

extern TypeInfo SslPolicyErrors_t1552_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25420_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSslPolicyErrors_t1552_m33609_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Net.Security.SslPolicyErrors>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Net.Security.SslPolicyErrors>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSslPolicyErrors_t1552_m33609 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25416_MethodInfo;
 void InternalEnumerator_1__ctor_m25416 (InternalEnumerator_1_t4646 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417 (InternalEnumerator_1_t4646 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25420(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25420_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SslPolicyErrors_t1552_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25418_MethodInfo;
 void InternalEnumerator_1_Dispose_m25418 (InternalEnumerator_1_t4646 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25419_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25419 (InternalEnumerator_1_t4646 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25420 (InternalEnumerator_1_t4646 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSslPolicyErrors_t1552_m33609(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSslPolicyErrors_t1552_m33609_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4646____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4646, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4646____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4646, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4646_FieldInfos[] =
{
	&InternalEnumerator_1_t4646____array_0_FieldInfo,
	&InternalEnumerator_1_t4646____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4646____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4646_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4646____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4646_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25420_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4646_PropertyInfos[] =
{
	&InternalEnumerator_1_t4646____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4646____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4646_InternalEnumerator_1__ctor_m25416_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25416_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25416_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25416/* method */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4646_InternalEnumerator_1__ctor_m25416_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25416_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417/* method */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25418_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25418_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25418/* method */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25418_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25419_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25419_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25419/* method */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25419_GenericMethod/* genericMethod */

};
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
extern void* RuntimeInvoker_SslPolicyErrors_t1552 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25420_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Net.Security.SslPolicyErrors>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25420_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25420/* method */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* declaring_type */
	, &SslPolicyErrors_t1552_0_0_0/* return_type */
	, RuntimeInvoker_SslPolicyErrors_t1552/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25420_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4646_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25416_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417_MethodInfo,
	&InternalEnumerator_1_Dispose_m25418_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25419_MethodInfo,
	&InternalEnumerator_1_get_Current_m25420_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4646_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25417_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25419_MethodInfo,
	&InternalEnumerator_1_Dispose_m25418_MethodInfo,
	&InternalEnumerator_1_get_Current_m25420_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4646_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6549_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4646_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6549_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4646_0_0_0;
extern Il2CppType InternalEnumerator_1_t4646_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4646_GenericClass;
TypeInfo InternalEnumerator_1_t4646_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4646_MethodInfos/* methods */
	, InternalEnumerator_1_t4646_PropertyInfos/* properties */
	, InternalEnumerator_1_t4646_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4646_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4646_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4646_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4646_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4646_1_0_0/* this_arg */
	, InternalEnumerator_1_t4646_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4646_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4646)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8401_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>
extern MethodInfo ICollection_1_get_Count_m43701_MethodInfo;
static PropertyInfo ICollection_1_t8401____Count_PropertyInfo = 
{
	&ICollection_1_t8401_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43701_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43702_MethodInfo;
static PropertyInfo ICollection_1_t8401____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8401_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8401_PropertyInfos[] =
{
	&ICollection_1_t8401____Count_PropertyInfo,
	&ICollection_1_t8401____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43701_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::get_Count()
MethodInfo ICollection_1_get_Count_m43701_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43701_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43702_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43702_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43702_GenericMethod/* genericMethod */

};
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
static ParameterInfo ICollection_1_t8401_ICollection_1_Add_m43703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SslPolicyErrors_t1552_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43703_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::Add(T)
MethodInfo ICollection_1_Add_m43703_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8401_ICollection_1_Add_m43703_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43703_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43704_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::Clear()
MethodInfo ICollection_1_Clear_m43704_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43704_GenericMethod/* genericMethod */

};
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
static ParameterInfo ICollection_1_t8401_ICollection_1_Contains_m43705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SslPolicyErrors_t1552_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43705_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::Contains(T)
MethodInfo ICollection_1_Contains_m43705_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8401_ICollection_1_Contains_m43705_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43705_GenericMethod/* genericMethod */

};
extern Il2CppType SslPolicyErrorsU5BU5D_t5483_0_0_0;
extern Il2CppType SslPolicyErrorsU5BU5D_t5483_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8401_ICollection_1_CopyTo_m43706_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SslPolicyErrorsU5BU5D_t5483_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43706_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43706_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8401_ICollection_1_CopyTo_m43706_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43706_GenericMethod/* genericMethod */

};
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
static ParameterInfo ICollection_1_t8401_ICollection_1_Remove_m43707_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SslPolicyErrors_t1552_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43707_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Security.SslPolicyErrors>::Remove(T)
MethodInfo ICollection_1_Remove_m43707_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8401_ICollection_1_Remove_m43707_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43707_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8401_MethodInfos[] =
{
	&ICollection_1_get_Count_m43701_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43702_MethodInfo,
	&ICollection_1_Add_m43703_MethodInfo,
	&ICollection_1_Clear_m43704_MethodInfo,
	&ICollection_1_Contains_m43705_MethodInfo,
	&ICollection_1_CopyTo_m43706_MethodInfo,
	&ICollection_1_Remove_m43707_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8403_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8401_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8403_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8401_0_0_0;
extern Il2CppType ICollection_1_t8401_1_0_0;
struct ICollection_1_t8401;
extern Il2CppGenericClass ICollection_1_t8401_GenericClass;
TypeInfo ICollection_1_t8401_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8401_MethodInfos/* methods */
	, ICollection_1_t8401_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8401_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8401_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8401_0_0_0/* byval_arg */
	, &ICollection_1_t8401_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8401_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.Security.SslPolicyErrors>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.Security.SslPolicyErrors>
extern Il2CppType IEnumerator_1_t6549_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43708_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.Security.SslPolicyErrors>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43708_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8403_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6549_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43708_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8403_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43708_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8403_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8403_0_0_0;
extern Il2CppType IEnumerable_1_t8403_1_0_0;
struct IEnumerable_1_t8403;
extern Il2CppGenericClass IEnumerable_1_t8403_GenericClass;
TypeInfo IEnumerable_1_t8403_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8403_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8403_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8403_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8403_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8403_0_0_0/* byval_arg */
	, &IEnumerable_1_t8403_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8403_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8402_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>
extern MethodInfo IList_1_get_Item_m43709_MethodInfo;
extern MethodInfo IList_1_set_Item_m43710_MethodInfo;
static PropertyInfo IList_1_t8402____Item_PropertyInfo = 
{
	&IList_1_t8402_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43709_MethodInfo/* get */
	, &IList_1_set_Item_m43710_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8402_PropertyInfos[] =
{
	&IList_1_t8402____Item_PropertyInfo,
	NULL
};
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
static ParameterInfo IList_1_t8402_IList_1_IndexOf_m43711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SslPolicyErrors_t1552_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43711_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43711_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8402_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8402_IList_1_IndexOf_m43711_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43711_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
static ParameterInfo IList_1_t8402_IList_1_Insert_m43712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SslPolicyErrors_t1552_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43712_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43712_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8402_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8402_IList_1_Insert_m43712_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43712_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8402_IList_1_RemoveAt_m43713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43713_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43713_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8402_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8402_IList_1_RemoveAt_m43713_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43713_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8402_IList_1_get_Item_m43709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
extern void* RuntimeInvoker_SslPolicyErrors_t1552_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43709_GenericMethod;
// T System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43709_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8402_il2cpp_TypeInfo/* declaring_type */
	, &SslPolicyErrors_t1552_0_0_0/* return_type */
	, RuntimeInvoker_SslPolicyErrors_t1552_Int32_t73/* invoker_method */
	, IList_1_t8402_IList_1_get_Item_m43709_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43709_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SslPolicyErrors_t1552_0_0_0;
static ParameterInfo IList_1_t8402_IList_1_set_Item_m43710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SslPolicyErrors_t1552_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43710_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Security.SslPolicyErrors>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43710_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8402_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8402_IList_1_set_Item_m43710_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43710_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8402_MethodInfos[] =
{
	&IList_1_IndexOf_m43711_MethodInfo,
	&IList_1_Insert_m43712_MethodInfo,
	&IList_1_RemoveAt_m43713_MethodInfo,
	&IList_1_get_Item_m43709_MethodInfo,
	&IList_1_set_Item_m43710_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8402_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8401_il2cpp_TypeInfo,
	&IEnumerable_1_t8403_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8402_0_0_0;
extern Il2CppType IList_1_t8402_1_0_0;
struct IList_1_t8402;
extern Il2CppGenericClass IList_1_t8402_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8402_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8402_MethodInfos/* methods */
	, IList_1_t8402_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8402_il2cpp_TypeInfo/* element_class */
	, IList_1_t8402_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8402_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8402_0_0_0/* byval_arg */
	, &IList_1_t8402_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8402_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6551_il2cpp_TypeInfo;

// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"


// T System.Collections.Generic.IEnumerator`1<System.Net.Sockets.AddressFamily>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Net.Sockets.AddressFamily>
extern MethodInfo IEnumerator_1_get_Current_m43714_MethodInfo;
static PropertyInfo IEnumerator_1_t6551____Current_PropertyInfo = 
{
	&IEnumerator_1_t6551_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43714_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6551_PropertyInfos[] =
{
	&IEnumerator_1_t6551____Current_PropertyInfo,
	NULL
};
extern Il2CppType AddressFamily_t1589_0_0_0;
extern void* RuntimeInvoker_AddressFamily_t1589 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43714_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Net.Sockets.AddressFamily>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43714_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6551_il2cpp_TypeInfo/* declaring_type */
	, &AddressFamily_t1589_0_0_0/* return_type */
	, RuntimeInvoker_AddressFamily_t1589/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43714_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6551_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43714_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6551_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6551_0_0_0;
extern Il2CppType IEnumerator_1_t6551_1_0_0;
struct IEnumerator_1_t6551;
extern Il2CppGenericClass IEnumerator_1_t6551_GenericClass;
TypeInfo IEnumerator_1_t6551_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6551_MethodInfos/* methods */
	, IEnumerator_1_t6551_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6551_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6551_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6551_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6551_0_0_0/* byval_arg */
	, &IEnumerator_1_t6551_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6551_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_507.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4647_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_507MethodDeclarations.h"

extern TypeInfo AddressFamily_t1589_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25425_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAddressFamily_t1589_m33620_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Net.Sockets.AddressFamily>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Net.Sockets.AddressFamily>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAddressFamily_t1589_m33620 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25421_MethodInfo;
 void InternalEnumerator_1__ctor_m25421 (InternalEnumerator_1_t4647 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422 (InternalEnumerator_1_t4647 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25425(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25425_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AddressFamily_t1589_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25423_MethodInfo;
 void InternalEnumerator_1_Dispose_m25423 (InternalEnumerator_1_t4647 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25424_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25424 (InternalEnumerator_1_t4647 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25425 (InternalEnumerator_1_t4647 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAddressFamily_t1589_m33620(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAddressFamily_t1589_m33620_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4647____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4647, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4647____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4647, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4647_FieldInfos[] =
{
	&InternalEnumerator_1_t4647____array_0_FieldInfo,
	&InternalEnumerator_1_t4647____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4647____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4647_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4647____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4647_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25425_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4647_PropertyInfos[] =
{
	&InternalEnumerator_1_t4647____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4647____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4647_InternalEnumerator_1__ctor_m25421_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25421_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25421_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25421/* method */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4647_InternalEnumerator_1__ctor_m25421_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25421_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422/* method */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25423_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25423_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25423/* method */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25423_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25424_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25424_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25424/* method */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25424_GenericMethod/* genericMethod */

};
extern Il2CppType AddressFamily_t1589_0_0_0;
extern void* RuntimeInvoker_AddressFamily_t1589 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25425_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Net.Sockets.AddressFamily>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25425_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25425/* method */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* declaring_type */
	, &AddressFamily_t1589_0_0_0/* return_type */
	, RuntimeInvoker_AddressFamily_t1589/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25425_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4647_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25421_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422_MethodInfo,
	&InternalEnumerator_1_Dispose_m25423_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25424_MethodInfo,
	&InternalEnumerator_1_get_Current_m25425_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4647_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25422_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25424_MethodInfo,
	&InternalEnumerator_1_Dispose_m25423_MethodInfo,
	&InternalEnumerator_1_get_Current_m25425_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4647_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6551_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4647_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6551_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4647_0_0_0;
extern Il2CppType InternalEnumerator_1_t4647_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4647_GenericClass;
TypeInfo InternalEnumerator_1_t4647_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4647_MethodInfos/* methods */
	, InternalEnumerator_1_t4647_PropertyInfos/* properties */
	, InternalEnumerator_1_t4647_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4647_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4647_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4647_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4647_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4647_1_0_0/* this_arg */
	, InternalEnumerator_1_t4647_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4647_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4647)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8404_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>
extern MethodInfo ICollection_1_get_Count_m43715_MethodInfo;
static PropertyInfo ICollection_1_t8404____Count_PropertyInfo = 
{
	&ICollection_1_t8404_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43715_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43716_MethodInfo;
static PropertyInfo ICollection_1_t8404____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8404_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43716_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8404_PropertyInfos[] =
{
	&ICollection_1_t8404____Count_PropertyInfo,
	&ICollection_1_t8404____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43715_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::get_Count()
MethodInfo ICollection_1_get_Count_m43715_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43715_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43716_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43716_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43716_GenericMethod/* genericMethod */

};
extern Il2CppType AddressFamily_t1589_0_0_0;
extern Il2CppType AddressFamily_t1589_0_0_0;
static ParameterInfo ICollection_1_t8404_ICollection_1_Add_m43717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AddressFamily_t1589_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43717_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::Add(T)
MethodInfo ICollection_1_Add_m43717_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8404_ICollection_1_Add_m43717_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43717_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43718_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::Clear()
MethodInfo ICollection_1_Clear_m43718_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43718_GenericMethod/* genericMethod */

};
extern Il2CppType AddressFamily_t1589_0_0_0;
static ParameterInfo ICollection_1_t8404_ICollection_1_Contains_m43719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AddressFamily_t1589_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43719_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::Contains(T)
MethodInfo ICollection_1_Contains_m43719_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8404_ICollection_1_Contains_m43719_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43719_GenericMethod/* genericMethod */

};
extern Il2CppType AddressFamilyU5BU5D_t5484_0_0_0;
extern Il2CppType AddressFamilyU5BU5D_t5484_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8404_ICollection_1_CopyTo_m43720_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AddressFamilyU5BU5D_t5484_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43720_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43720_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8404_ICollection_1_CopyTo_m43720_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43720_GenericMethod/* genericMethod */

};
extern Il2CppType AddressFamily_t1589_0_0_0;
static ParameterInfo ICollection_1_t8404_ICollection_1_Remove_m43721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AddressFamily_t1589_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43721_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Net.Sockets.AddressFamily>::Remove(T)
MethodInfo ICollection_1_Remove_m43721_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8404_ICollection_1_Remove_m43721_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43721_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8404_MethodInfos[] =
{
	&ICollection_1_get_Count_m43715_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43716_MethodInfo,
	&ICollection_1_Add_m43717_MethodInfo,
	&ICollection_1_Clear_m43718_MethodInfo,
	&ICollection_1_Contains_m43719_MethodInfo,
	&ICollection_1_CopyTo_m43720_MethodInfo,
	&ICollection_1_Remove_m43721_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8406_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8404_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8406_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8404_0_0_0;
extern Il2CppType ICollection_1_t8404_1_0_0;
struct ICollection_1_t8404;
extern Il2CppGenericClass ICollection_1_t8404_GenericClass;
TypeInfo ICollection_1_t8404_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8404_MethodInfos/* methods */
	, ICollection_1_t8404_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8404_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8404_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8404_0_0_0/* byval_arg */
	, &ICollection_1_t8404_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8404_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.Sockets.AddressFamily>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Net.Sockets.AddressFamily>
extern Il2CppType IEnumerator_1_t6551_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43722_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Net.Sockets.AddressFamily>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43722_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8406_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6551_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43722_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8406_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43722_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8406_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8406_0_0_0;
extern Il2CppType IEnumerable_1_t8406_1_0_0;
struct IEnumerable_1_t8406;
extern Il2CppGenericClass IEnumerable_1_t8406_GenericClass;
TypeInfo IEnumerable_1_t8406_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8406_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8406_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8406_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8406_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8406_0_0_0/* byval_arg */
	, &IEnumerable_1_t8406_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8406_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8405_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>
extern MethodInfo IList_1_get_Item_m43723_MethodInfo;
extern MethodInfo IList_1_set_Item_m43724_MethodInfo;
static PropertyInfo IList_1_t8405____Item_PropertyInfo = 
{
	&IList_1_t8405_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43723_MethodInfo/* get */
	, &IList_1_set_Item_m43724_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8405_PropertyInfos[] =
{
	&IList_1_t8405____Item_PropertyInfo,
	NULL
};
extern Il2CppType AddressFamily_t1589_0_0_0;
static ParameterInfo IList_1_t8405_IList_1_IndexOf_m43725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AddressFamily_t1589_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43725_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43725_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8405_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8405_IList_1_IndexOf_m43725_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43725_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AddressFamily_t1589_0_0_0;
static ParameterInfo IList_1_t8405_IList_1_Insert_m43726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AddressFamily_t1589_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43726_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43726_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8405_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8405_IList_1_Insert_m43726_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43726_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8405_IList_1_RemoveAt_m43727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43727_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43727_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8405_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8405_IList_1_RemoveAt_m43727_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43727_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8405_IList_1_get_Item_m43723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AddressFamily_t1589_0_0_0;
extern void* RuntimeInvoker_AddressFamily_t1589_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43723_GenericMethod;
// T System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43723_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8405_il2cpp_TypeInfo/* declaring_type */
	, &AddressFamily_t1589_0_0_0/* return_type */
	, RuntimeInvoker_AddressFamily_t1589_Int32_t73/* invoker_method */
	, IList_1_t8405_IList_1_get_Item_m43723_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43723_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AddressFamily_t1589_0_0_0;
static ParameterInfo IList_1_t8405_IList_1_set_Item_m43724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AddressFamily_t1589_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43724_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Net.Sockets.AddressFamily>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43724_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8405_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8405_IList_1_set_Item_m43724_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43724_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8405_MethodInfos[] =
{
	&IList_1_IndexOf_m43725_MethodInfo,
	&IList_1_Insert_m43726_MethodInfo,
	&IList_1_RemoveAt_m43727_MethodInfo,
	&IList_1_get_Item_m43723_MethodInfo,
	&IList_1_set_Item_m43724_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8405_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8404_il2cpp_TypeInfo,
	&IEnumerable_1_t8406_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8405_0_0_0;
extern Il2CppType IList_1_t8405_1_0_0;
struct IList_1_t8405;
extern Il2CppGenericClass IList_1_t8405_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8405_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8405_MethodInfos/* methods */
	, IList_1_t8405_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8405_il2cpp_TypeInfo/* element_class */
	, IList_1_t8405_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8405_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8405_0_0_0/* byval_arg */
	, &IList_1_t8405_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8405_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6553_il2cpp_TypeInfo;

// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"


// T System.Collections.Generic.IEnumerator`1<System.IO.FileAccess>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileAccess>
extern MethodInfo IEnumerator_1_get_Current_m43728_MethodInfo;
static PropertyInfo IEnumerator_1_t6553____Current_PropertyInfo = 
{
	&IEnumerator_1_t6553_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43728_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6553_PropertyInfos[] =
{
	&IEnumerator_1_t6553____Current_PropertyInfo,
	NULL
};
extern Il2CppType FileAccess_t1735_0_0_0;
extern void* RuntimeInvoker_FileAccess_t1735 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43728_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IO.FileAccess>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43728_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6553_il2cpp_TypeInfo/* declaring_type */
	, &FileAccess_t1735_0_0_0/* return_type */
	, RuntimeInvoker_FileAccess_t1735/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43728_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6553_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43728_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6553_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6553_0_0_0;
extern Il2CppType IEnumerator_1_t6553_1_0_0;
struct IEnumerator_1_t6553;
extern Il2CppGenericClass IEnumerator_1_t6553_GenericClass;
TypeInfo IEnumerator_1_t6553_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6553_MethodInfos/* methods */
	, IEnumerator_1_t6553_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6553_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6553_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6553_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6553_0_0_0/* byval_arg */
	, &IEnumerator_1_t6553_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6553_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.IO.FileAccess>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_508.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4648_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IO.FileAccess>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_508MethodDeclarations.h"

extern TypeInfo FileAccess_t1735_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25430_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFileAccess_t1735_m33631_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.FileAccess>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.FileAccess>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFileAccess_t1735_m33631 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25426_MethodInfo;
 void InternalEnumerator_1__ctor_m25426 (InternalEnumerator_1_t4648 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.FileAccess>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427 (InternalEnumerator_1_t4648 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25430(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25430_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FileAccess_t1735_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25428_MethodInfo;
 void InternalEnumerator_1_Dispose_m25428 (InternalEnumerator_1_t4648 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileAccess>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25429_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25429 (InternalEnumerator_1_t4648 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.FileAccess>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25430 (InternalEnumerator_1_t4648 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFileAccess_t1735_m33631(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFileAccess_t1735_m33631_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileAccess>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4648____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4648, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4648____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4648, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4648_FieldInfos[] =
{
	&InternalEnumerator_1_t4648____array_0_FieldInfo,
	&InternalEnumerator_1_t4648____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4648____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4648_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4648____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4648_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25430_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4648_PropertyInfos[] =
{
	&InternalEnumerator_1_t4648____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4648____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4648_InternalEnumerator_1__ctor_m25426_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25426_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25426_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25426/* method */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4648_InternalEnumerator_1__ctor_m25426_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25426_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.FileAccess>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427/* method */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25428_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAccess>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25428_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25428/* method */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25428_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25429_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileAccess>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25429_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25429/* method */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25429_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccess_t1735_0_0_0;
extern void* RuntimeInvoker_FileAccess_t1735 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25430_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.FileAccess>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25430_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25430/* method */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* declaring_type */
	, &FileAccess_t1735_0_0_0/* return_type */
	, RuntimeInvoker_FileAccess_t1735/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25430_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4648_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25426_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427_MethodInfo,
	&InternalEnumerator_1_Dispose_m25428_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25429_MethodInfo,
	&InternalEnumerator_1_get_Current_m25430_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4648_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25427_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25429_MethodInfo,
	&InternalEnumerator_1_Dispose_m25428_MethodInfo,
	&InternalEnumerator_1_get_Current_m25430_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4648_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6553_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4648_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6553_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4648_0_0_0;
extern Il2CppType InternalEnumerator_1_t4648_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4648_GenericClass;
TypeInfo InternalEnumerator_1_t4648_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4648_MethodInfos/* methods */
	, InternalEnumerator_1_t4648_PropertyInfos/* properties */
	, InternalEnumerator_1_t4648_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4648_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4648_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4648_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4648_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4648_1_0_0/* this_arg */
	, InternalEnumerator_1_t4648_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4648_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4648)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8407_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileAccess>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileAccess>
extern MethodInfo ICollection_1_get_Count_m43729_MethodInfo;
static PropertyInfo ICollection_1_t8407____Count_PropertyInfo = 
{
	&ICollection_1_t8407_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43729_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43730_MethodInfo;
static PropertyInfo ICollection_1_t8407____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8407_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43730_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8407_PropertyInfos[] =
{
	&ICollection_1_t8407____Count_PropertyInfo,
	&ICollection_1_t8407____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43729_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileAccess>::get_Count()
MethodInfo ICollection_1_get_Count_m43729_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43729_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43730_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43730_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43730_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccess_t1735_0_0_0;
extern Il2CppType FileAccess_t1735_0_0_0;
static ParameterInfo ICollection_1_t8407_ICollection_1_Add_m43731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAccess_t1735_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43731_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Add(T)
MethodInfo ICollection_1_Add_m43731_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8407_ICollection_1_Add_m43731_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43731_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43732_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Clear()
MethodInfo ICollection_1_Clear_m43732_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43732_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccess_t1735_0_0_0;
static ParameterInfo ICollection_1_t8407_ICollection_1_Contains_m43733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAccess_t1735_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43733_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Contains(T)
MethodInfo ICollection_1_Contains_m43733_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8407_ICollection_1_Contains_m43733_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43733_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccessU5BU5D_t4989_0_0_0;
extern Il2CppType FileAccessU5BU5D_t4989_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8407_ICollection_1_CopyTo_m43734_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FileAccessU5BU5D_t4989_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43734_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAccess>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43734_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8407_ICollection_1_CopyTo_m43734_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43734_GenericMethod/* genericMethod */

};
extern Il2CppType FileAccess_t1735_0_0_0;
static ParameterInfo ICollection_1_t8407_ICollection_1_Remove_m43735_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAccess_t1735_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43735_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAccess>::Remove(T)
MethodInfo ICollection_1_Remove_m43735_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8407_ICollection_1_Remove_m43735_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43735_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8407_MethodInfos[] =
{
	&ICollection_1_get_Count_m43729_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43730_MethodInfo,
	&ICollection_1_Add_m43731_MethodInfo,
	&ICollection_1_Clear_m43732_MethodInfo,
	&ICollection_1_Contains_m43733_MethodInfo,
	&ICollection_1_CopyTo_m43734_MethodInfo,
	&ICollection_1_Remove_m43735_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8409_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8407_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8409_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8407_0_0_0;
extern Il2CppType ICollection_1_t8407_1_0_0;
struct ICollection_1_t8407;
extern Il2CppGenericClass ICollection_1_t8407_GenericClass;
TypeInfo ICollection_1_t8407_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8407_MethodInfos/* methods */
	, ICollection_1_t8407_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8407_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8407_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8407_0_0_0/* byval_arg */
	, &ICollection_1_t8407_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8407_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>
extern Il2CppType IEnumerator_1_t6553_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43736_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileAccess>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43736_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8409_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6553_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43736_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8409_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43736_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8409_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8409_0_0_0;
extern Il2CppType IEnumerable_1_t8409_1_0_0;
struct IEnumerable_1_t8409;
extern Il2CppGenericClass IEnumerable_1_t8409_GenericClass;
TypeInfo IEnumerable_1_t8409_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8409_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8409_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8409_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8409_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8409_0_0_0/* byval_arg */
	, &IEnumerable_1_t8409_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8409_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8408_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.FileAccess>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.FileAccess>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileAccess>
extern MethodInfo IList_1_get_Item_m43737_MethodInfo;
extern MethodInfo IList_1_set_Item_m43738_MethodInfo;
static PropertyInfo IList_1_t8408____Item_PropertyInfo = 
{
	&IList_1_t8408_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43737_MethodInfo/* get */
	, &IList_1_set_Item_m43738_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8408_PropertyInfos[] =
{
	&IList_1_t8408____Item_PropertyInfo,
	NULL
};
extern Il2CppType FileAccess_t1735_0_0_0;
static ParameterInfo IList_1_t8408_IList_1_IndexOf_m43739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAccess_t1735_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43739_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.FileAccess>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43739_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8408_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8408_IList_1_IndexOf_m43739_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43739_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileAccess_t1735_0_0_0;
static ParameterInfo IList_1_t8408_IList_1_Insert_m43740_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FileAccess_t1735_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43740_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43740_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8408_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8408_IList_1_Insert_m43740_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43740_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8408_IList_1_RemoveAt_m43741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43741_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43741_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8408_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8408_IList_1_RemoveAt_m43741_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43741_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8408_IList_1_get_Item_m43737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FileAccess_t1735_0_0_0;
extern void* RuntimeInvoker_FileAccess_t1735_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43737_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.FileAccess>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43737_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8408_il2cpp_TypeInfo/* declaring_type */
	, &FileAccess_t1735_0_0_0/* return_type */
	, RuntimeInvoker_FileAccess_t1735_Int32_t73/* invoker_method */
	, IList_1_t8408_IList_1_get_Item_m43737_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43737_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileAccess_t1735_0_0_0;
static ParameterInfo IList_1_t8408_IList_1_set_Item_m43738_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FileAccess_t1735_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43738_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAccess>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43738_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8408_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8408_IList_1_set_Item_m43738_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43738_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8408_MethodInfos[] =
{
	&IList_1_IndexOf_m43739_MethodInfo,
	&IList_1_Insert_m43740_MethodInfo,
	&IList_1_RemoveAt_m43741_MethodInfo,
	&IList_1_get_Item_m43737_MethodInfo,
	&IList_1_set_Item_m43738_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8408_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8407_il2cpp_TypeInfo,
	&IEnumerable_1_t8409_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8408_0_0_0;
extern Il2CppType IList_1_t8408_1_0_0;
struct IList_1_t8408;
extern Il2CppGenericClass IList_1_t8408_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8408_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8408_MethodInfos/* methods */
	, IList_1_t8408_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8408_il2cpp_TypeInfo/* element_class */
	, IList_1_t8408_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8408_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8408_0_0_0/* byval_arg */
	, &IList_1_t8408_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8408_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6554_il2cpp_TypeInfo;

// System.UInt16
#include "mscorlib_System_UInt16.h"


// T System.Collections.Generic.IEnumerator`1<System.UInt16>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UInt16>
extern MethodInfo IEnumerator_1_get_Current_m43742_MethodInfo;
static PropertyInfo IEnumerator_1_t6554____Current_PropertyInfo = 
{
	&IEnumerator_1_t6554_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43742_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6554_PropertyInfos[] =
{
	&IEnumerator_1_t6554____Current_PropertyInfo,
	NULL
};
extern Il2CppType UInt16_t1069_0_0_0;
extern void* RuntimeInvoker_UInt16_t1069 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43742_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UInt16>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43742_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6554_il2cpp_TypeInfo/* declaring_type */
	, &UInt16_t1069_0_0_0/* return_type */
	, RuntimeInvoker_UInt16_t1069/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43742_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6554_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43742_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6554_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6554_0_0_0;
extern Il2CppType IEnumerator_1_t6554_1_0_0;
struct IEnumerator_1_t6554;
extern Il2CppGenericClass IEnumerator_1_t6554_GenericClass;
TypeInfo IEnumerator_1_t6554_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6554_MethodInfos/* methods */
	, IEnumerator_1_t6554_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6554_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6554_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6554_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6554_0_0_0/* byval_arg */
	, &IEnumerator_1_t6554_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6554_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
