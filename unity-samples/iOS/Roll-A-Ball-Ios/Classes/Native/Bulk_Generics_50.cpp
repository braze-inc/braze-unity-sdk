#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_683.h"
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
extern TypeInfo InternalEnumerator_1_t4829_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_683MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
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
extern TypeInfo UnmanagedType_t2026_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1534_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m26256_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6562_MethodInfo;
extern MethodInfo Array_get_Length_m1819_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnmanagedType_t2026_m35375_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.UnmanagedType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.UnmanagedType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUnmanagedType_t2026_m35375 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26252_MethodInfo;
 void InternalEnumerator_1__ctor_m26252 (InternalEnumerator_1_t4829 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253 (InternalEnumerator_1_t4829 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26256(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26256_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UnmanagedType_t2026_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26254_MethodInfo;
 void InternalEnumerator_1_Dispose_m26254 (InternalEnumerator_1_t4829 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26255_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26255 (InternalEnumerator_1_t4829 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26256 (InternalEnumerator_1_t4829 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUnmanagedType_t2026_m35375(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUnmanagedType_t2026_m35375_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4829____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4829, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4829____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4829, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4829_FieldInfos[] =
{
	&InternalEnumerator_1_t4829____array_0_FieldInfo,
	&InternalEnumerator_1_t4829____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4829____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4829_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4829____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4829_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26256_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4829_PropertyInfos[] =
{
	&InternalEnumerator_1_t4829____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4829____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4829_InternalEnumerator_1__ctor_m26252_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26252_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26252_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26252/* method */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4829_InternalEnumerator_1__ctor_m26252_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26252_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253/* method */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26254_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26254_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26254/* method */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26254_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26255_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26255_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26255/* method */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26255_GenericMethod/* genericMethod */

};
extern Il2CppType UnmanagedType_t2026_0_0_0;
extern void* RuntimeInvoker_UnmanagedType_t2026 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26256_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26256_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26256/* method */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedType_t2026_0_0_0/* return_type */
	, RuntimeInvoker_UnmanagedType_t2026/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26256_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4829_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26252_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253_MethodInfo,
	&InternalEnumerator_1_Dispose_m26254_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26255_MethodInfo,
	&InternalEnumerator_1_get_Current_m26256_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3280_MethodInfo;
extern MethodInfo Object_Finalize_m416_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3281_MethodInfo;
extern MethodInfo ValueType_ToString_m3369_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4829_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26253_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26255_MethodInfo,
	&InternalEnumerator_1_Dispose_m26254_MethodInfo,
	&InternalEnumerator_1_get_Current_m26256_MethodInfo,
};
extern TypeInfo IEnumerator_t21_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t69_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6873_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t4829_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6873_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4829_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6873_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4829_0_0_0;
extern Il2CppType InternalEnumerator_1_t4829_1_0_0;
extern TypeInfo ValueType_t700_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4829_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4829_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4829_MethodInfos/* methods */
	, InternalEnumerator_1_t4829_PropertyInfos/* properties */
	, InternalEnumerator_1_t4829_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4829_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4829_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4829_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4829_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4829_1_0_0/* this_arg */
	, InternalEnumerator_1_t4829_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4829_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4829)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8919_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo ICollection_1_get_Count_m45996_MethodInfo;
static PropertyInfo ICollection_1_t8919____Count_PropertyInfo = 
{
	&ICollection_1_t8919_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45996_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45997_MethodInfo;
static PropertyInfo ICollection_1_t8919____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8919_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45997_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8919_PropertyInfos[] =
{
	&ICollection_1_t8919____Count_PropertyInfo,
	&ICollection_1_t8919____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45996_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::get_Count()
MethodInfo ICollection_1_get_Count_m45996_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45996_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45997_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45997_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45997_GenericMethod/* genericMethod */

};
extern Il2CppType UnmanagedType_t2026_0_0_0;
extern Il2CppType UnmanagedType_t2026_0_0_0;
static ParameterInfo ICollection_1_t8919_ICollection_1_Add_m45998_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t2026_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45998_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Add(T)
MethodInfo ICollection_1_Add_m45998_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8919_ICollection_1_Add_m45998_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45998_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45999_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Clear()
MethodInfo ICollection_1_Clear_m45999_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45999_GenericMethod/* genericMethod */

};
extern Il2CppType UnmanagedType_t2026_0_0_0;
static ParameterInfo ICollection_1_t8919_ICollection_1_Contains_m46000_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t2026_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46000_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Contains(T)
MethodInfo ICollection_1_Contains_m46000_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8919_ICollection_1_Contains_m46000_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46000_GenericMethod/* genericMethod */

};
extern Il2CppType UnmanagedTypeU5BU5D_t5092_0_0_0;
extern Il2CppType UnmanagedTypeU5BU5D_t5092_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8919_ICollection_1_CopyTo_m46001_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedTypeU5BU5D_t5092_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46001_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46001_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8919_ICollection_1_CopyTo_m46001_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46001_GenericMethod/* genericMethod */

};
extern Il2CppType UnmanagedType_t2026_0_0_0;
static ParameterInfo ICollection_1_t8919_ICollection_1_Remove_m46002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t2026_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46002_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Remove(T)
MethodInfo ICollection_1_Remove_m46002_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8919_ICollection_1_Remove_m46002_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46002_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8919_MethodInfos[] =
{
	&ICollection_1_get_Count_m45996_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45997_MethodInfo,
	&ICollection_1_Add_m45998_MethodInfo,
	&ICollection_1_Clear_m45999_MethodInfo,
	&ICollection_1_Contains_m46000_MethodInfo,
	&ICollection_1_CopyTo_m46001_MethodInfo,
	&ICollection_1_Remove_m46002_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t88_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8921_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8919_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8921_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8919_0_0_0;
extern Il2CppType ICollection_1_t8919_1_0_0;
struct ICollection_1_t8919;
extern Il2CppGenericClass ICollection_1_t8919_GenericClass;
TypeInfo ICollection_1_t8919_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8919_MethodInfos/* methods */
	, ICollection_1_t8919_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8919_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8919_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8919_0_0_0/* byval_arg */
	, &ICollection_1_t8919_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8919_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>
extern Il2CppType IEnumerator_1_t6873_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46003_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46003_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8921_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6873_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46003_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8921_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46003_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8921_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8921_0_0_0;
extern Il2CppType IEnumerable_1_t8921_1_0_0;
struct IEnumerable_1_t8921;
extern Il2CppGenericClass IEnumerable_1_t8921_GenericClass;
TypeInfo IEnumerable_1_t8921_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8921_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8921_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8921_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8921_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8921_0_0_0/* byval_arg */
	, &IEnumerable_1_t8921_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8921_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8920_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo IList_1_get_Item_m46004_MethodInfo;
extern MethodInfo IList_1_set_Item_m46005_MethodInfo;
static PropertyInfo IList_1_t8920____Item_PropertyInfo = 
{
	&IList_1_t8920_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46004_MethodInfo/* get */
	, &IList_1_set_Item_m46005_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8920_PropertyInfos[] =
{
	&IList_1_t8920____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnmanagedType_t2026_0_0_0;
static ParameterInfo IList_1_t8920_IList_1_IndexOf_m46006_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t2026_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46006_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46006_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8920_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8920_IList_1_IndexOf_m46006_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46006_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UnmanagedType_t2026_0_0_0;
static ParameterInfo IList_1_t8920_IList_1_Insert_m46007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t2026_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46007_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46007_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8920_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8920_IList_1_Insert_m46007_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46007_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8920_IList_1_RemoveAt_m46008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46008_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46008_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8920_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8920_IList_1_RemoveAt_m46008_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46008_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8920_IList_1_get_Item_m46004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType UnmanagedType_t2026_0_0_0;
extern void* RuntimeInvoker_UnmanagedType_t2026_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46004_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46004_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8920_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedType_t2026_0_0_0/* return_type */
	, RuntimeInvoker_UnmanagedType_t2026_Int32_t63/* invoker_method */
	, IList_1_t8920_IList_1_get_Item_m46004_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46004_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UnmanagedType_t2026_0_0_0;
static ParameterInfo IList_1_t8920_IList_1_set_Item_m46005_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t2026_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46005_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46005_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8920_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8920_IList_1_set_Item_m46005_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46005_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8920_MethodInfos[] =
{
	&IList_1_IndexOf_m46006_MethodInfo,
	&IList_1_Insert_m46007_MethodInfo,
	&IList_1_RemoveAt_m46008_MethodInfo,
	&IList_1_get_Item_m46004_MethodInfo,
	&IList_1_set_Item_m46005_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8920_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8919_il2cpp_TypeInfo,
	&IEnumerable_1_t8921_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8920_0_0_0;
extern Il2CppType IList_1_t8920_1_0_0;
struct IList_1_t8920;
extern Il2CppGenericClass IList_1_t8920_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8920_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8920_MethodInfos/* methods */
	, IList_1_t8920_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8920_il2cpp_TypeInfo/* element_class */
	, IList_1_t8920_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8920_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8920_0_0_0/* byval_arg */
	, &IList_1_t8920_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8920_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6875_il2cpp_TypeInfo;

// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46009_MethodInfo;
static PropertyInfo IEnumerator_1_t6875____Current_PropertyInfo = 
{
	&IEnumerator_1_t6875_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46009_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6875_PropertyInfos[] =
{
	&IEnumerator_1_t6875____Current_PropertyInfo,
	NULL
};
extern Il2CppType UrlAttribute_t2034_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46009_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46009_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6875_il2cpp_TypeInfo/* declaring_type */
	, &UrlAttribute_t2034_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46009_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6875_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46009_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6875_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6875_0_0_0;
extern Il2CppType IEnumerator_1_t6875_1_0_0;
struct IEnumerator_1_t6875;
extern Il2CppGenericClass IEnumerator_1_t6875_GenericClass;
TypeInfo IEnumerator_1_t6875_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6875_MethodInfos/* methods */
	, IEnumerator_1_t6875_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6875_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6875_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6875_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6875_0_0_0/* byval_arg */
	, &IEnumerator_1_t6875_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6875_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_684.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4830_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_684MethodDeclarations.h"

extern TypeInfo UrlAttribute_t2034_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26261_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUrlAttribute_t2034_m35386_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26773_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26773(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Activation.UrlAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Activation.UrlAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisUrlAttribute_t2034_m35386(__this, p0, method) (UrlAttribute_t2034 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4830____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4830, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4830____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4830, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4830_FieldInfos[] =
{
	&InternalEnumerator_1_t4830____array_0_FieldInfo,
	&InternalEnumerator_1_t4830____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26258_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4830____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4830_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26258_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4830____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4830_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26261_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4830_PropertyInfos[] =
{
	&InternalEnumerator_1_t4830____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4830____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4830_InternalEnumerator_1__ctor_m26257_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26257_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26257_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4830_InternalEnumerator_1__ctor_m26257_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26257_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26258_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26258_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26258_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26259_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26259_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26259_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26260_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26260_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26260_GenericMethod/* genericMethod */

};
extern Il2CppType UrlAttribute_t2034_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26261_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26261_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* declaring_type */
	, &UrlAttribute_t2034_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26261_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4830_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26257_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26258_MethodInfo,
	&InternalEnumerator_1_Dispose_m26259_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26260_MethodInfo,
	&InternalEnumerator_1_get_Current_m26261_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26260_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26259_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4830_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26258_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26260_MethodInfo,
	&InternalEnumerator_1_Dispose_m26259_MethodInfo,
	&InternalEnumerator_1_get_Current_m26261_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4830_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6875_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4830_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6875_il2cpp_TypeInfo, 7},
};
extern TypeInfo UrlAttribute_t2034_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4830_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26261_MethodInfo/* Method Usage */,
	&UrlAttribute_t2034_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisUrlAttribute_t2034_m35386_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4830_0_0_0;
extern Il2CppType InternalEnumerator_1_t4830_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4830_GenericClass;
TypeInfo InternalEnumerator_1_t4830_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4830_MethodInfos/* methods */
	, InternalEnumerator_1_t4830_PropertyInfos/* properties */
	, InternalEnumerator_1_t4830_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4830_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4830_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4830_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4830_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4830_1_0_0/* this_arg */
	, InternalEnumerator_1_t4830_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4830_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4830_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4830)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8922_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo ICollection_1_get_Count_m46010_MethodInfo;
static PropertyInfo ICollection_1_t8922____Count_PropertyInfo = 
{
	&ICollection_1_t8922_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46010_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46011_MethodInfo;
static PropertyInfo ICollection_1_t8922____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8922_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46011_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8922_PropertyInfos[] =
{
	&ICollection_1_t8922____Count_PropertyInfo,
	&ICollection_1_t8922____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46010_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46010_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46010_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46011_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46011_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46011_GenericMethod/* genericMethod */

};
extern Il2CppType UrlAttribute_t2034_0_0_0;
extern Il2CppType UrlAttribute_t2034_0_0_0;
static ParameterInfo ICollection_1_t8922_ICollection_1_Add_m46012_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t2034_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46012_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46012_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8922_ICollection_1_Add_m46012_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46012_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46013_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46013_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46013_GenericMethod/* genericMethod */

};
extern Il2CppType UrlAttribute_t2034_0_0_0;
static ParameterInfo ICollection_1_t8922_ICollection_1_Contains_m46014_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t2034_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46014_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46014_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8922_ICollection_1_Contains_m46014_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46014_GenericMethod/* genericMethod */

};
extern Il2CppType UrlAttributeU5BU5D_t5093_0_0_0;
extern Il2CppType UrlAttributeU5BU5D_t5093_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8922_ICollection_1_CopyTo_m46015_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttributeU5BU5D_t5093_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46015_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46015_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8922_ICollection_1_CopyTo_m46015_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46015_GenericMethod/* genericMethod */

};
extern Il2CppType UrlAttribute_t2034_0_0_0;
static ParameterInfo ICollection_1_t8922_ICollection_1_Remove_m46016_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t2034_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46016_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46016_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8922_ICollection_1_Remove_m46016_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46016_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8922_MethodInfos[] =
{
	&ICollection_1_get_Count_m46010_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46011_MethodInfo,
	&ICollection_1_Add_m46012_MethodInfo,
	&ICollection_1_Clear_m46013_MethodInfo,
	&ICollection_1_Contains_m46014_MethodInfo,
	&ICollection_1_CopyTo_m46015_MethodInfo,
	&ICollection_1_Remove_m46016_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8924_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8922_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8924_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8922_0_0_0;
extern Il2CppType ICollection_1_t8922_1_0_0;
struct ICollection_1_t8922;
extern Il2CppGenericClass ICollection_1_t8922_GenericClass;
TypeInfo ICollection_1_t8922_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8922_MethodInfos/* methods */
	, ICollection_1_t8922_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8922_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8922_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8922_0_0_0/* byval_arg */
	, &ICollection_1_t8922_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8922_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern Il2CppType IEnumerator_1_t6875_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46017_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46017_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8924_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6875_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46017_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8924_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46017_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8924_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8924_0_0_0;
extern Il2CppType IEnumerable_1_t8924_1_0_0;
struct IEnumerable_1_t8924;
extern Il2CppGenericClass IEnumerable_1_t8924_GenericClass;
TypeInfo IEnumerable_1_t8924_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8924_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8924_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8924_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8924_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8924_0_0_0/* byval_arg */
	, &IEnumerable_1_t8924_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8924_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8923_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo IList_1_get_Item_m46018_MethodInfo;
extern MethodInfo IList_1_set_Item_m46019_MethodInfo;
static PropertyInfo IList_1_t8923____Item_PropertyInfo = 
{
	&IList_1_t8923_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46018_MethodInfo/* get */
	, &IList_1_set_Item_m46019_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8923_PropertyInfos[] =
{
	&IList_1_t8923____Item_PropertyInfo,
	NULL
};
extern Il2CppType UrlAttribute_t2034_0_0_0;
static ParameterInfo IList_1_t8923_IList_1_IndexOf_m46020_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t2034_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46020_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46020_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8923_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8923_IList_1_IndexOf_m46020_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46020_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UrlAttribute_t2034_0_0_0;
static ParameterInfo IList_1_t8923_IList_1_Insert_m46021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t2034_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46021_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46021_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8923_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8923_IList_1_Insert_m46021_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46021_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8923_IList_1_RemoveAt_m46022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46022_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46022_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8923_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8923_IList_1_RemoveAt_m46022_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46022_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8923_IList_1_get_Item_m46018_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType UrlAttribute_t2034_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46018_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46018_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8923_il2cpp_TypeInfo/* declaring_type */
	, &UrlAttribute_t2034_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8923_IList_1_get_Item_m46018_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46018_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType UrlAttribute_t2034_0_0_0;
static ParameterInfo IList_1_t8923_IList_1_set_Item_m46019_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t2034_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46019_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46019_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8923_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8923_IList_1_set_Item_m46019_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46019_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8923_MethodInfos[] =
{
	&IList_1_IndexOf_m46020_MethodInfo,
	&IList_1_Insert_m46021_MethodInfo,
	&IList_1_RemoveAt_m46022_MethodInfo,
	&IList_1_get_Item_m46018_MethodInfo,
	&IList_1_set_Item_m46019_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8923_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8922_il2cpp_TypeInfo,
	&IEnumerable_1_t8924_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8923_0_0_0;
extern Il2CppType IList_1_t8923_1_0_0;
struct IList_1_t8923;
extern Il2CppGenericClass IList_1_t8923_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8923_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8923_MethodInfos/* methods */
	, IList_1_t8923_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8923_il2cpp_TypeInfo/* element_class */
	, IList_1_t8923_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8923_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8923_0_0_0/* byval_arg */
	, &IList_1_t8923_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8923_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t8925_il2cpp_TypeInfo;

// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo ICollection_1_get_Count_m46023_MethodInfo;
static PropertyInfo ICollection_1_t8925____Count_PropertyInfo = 
{
	&ICollection_1_t8925_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46023_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46024_MethodInfo;
static PropertyInfo ICollection_1_t8925____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8925_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46024_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8925_PropertyInfos[] =
{
	&ICollection_1_t8925____Count_PropertyInfo,
	&ICollection_1_t8925____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46023_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46023_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46023_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46024_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46024_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46024_GenericMethod/* genericMethod */

};
extern Il2CppType ContextAttribute_t2035_0_0_0;
extern Il2CppType ContextAttribute_t2035_0_0_0;
static ParameterInfo ICollection_1_t8925_ICollection_1_Add_m46025_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t2035_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46025_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46025_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8925_ICollection_1_Add_m46025_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46025_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46026_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46026_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46026_GenericMethod/* genericMethod */

};
extern Il2CppType ContextAttribute_t2035_0_0_0;
static ParameterInfo ICollection_1_t8925_ICollection_1_Contains_m46027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t2035_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46027_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46027_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8925_ICollection_1_Contains_m46027_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46027_GenericMethod/* genericMethod */

};
extern Il2CppType ContextAttributeU5BU5D_t5094_0_0_0;
extern Il2CppType ContextAttributeU5BU5D_t5094_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8925_ICollection_1_CopyTo_m46028_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttributeU5BU5D_t5094_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46028_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46028_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8925_ICollection_1_CopyTo_m46028_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46028_GenericMethod/* genericMethod */

};
extern Il2CppType ContextAttribute_t2035_0_0_0;
static ParameterInfo ICollection_1_t8925_ICollection_1_Remove_m46029_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t2035_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46029_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46029_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8925_ICollection_1_Remove_m46029_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46029_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8925_MethodInfos[] =
{
	&ICollection_1_get_Count_m46023_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46024_MethodInfo,
	&ICollection_1_Add_m46025_MethodInfo,
	&ICollection_1_Clear_m46026_MethodInfo,
	&ICollection_1_Contains_m46027_MethodInfo,
	&ICollection_1_CopyTo_m46028_MethodInfo,
	&ICollection_1_Remove_m46029_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8927_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8925_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8927_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8925_0_0_0;
extern Il2CppType ICollection_1_t8925_1_0_0;
struct ICollection_1_t8925;
extern Il2CppGenericClass ICollection_1_t8925_GenericClass;
TypeInfo ICollection_1_t8925_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8925_MethodInfos/* methods */
	, ICollection_1_t8925_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8925_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8925_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8925_0_0_0/* byval_arg */
	, &ICollection_1_t8925_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8925_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern Il2CppType IEnumerator_1_t6877_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46030_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46030_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8927_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6877_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46030_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8927_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46030_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8927_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8927_0_0_0;
extern Il2CppType IEnumerable_1_t8927_1_0_0;
struct IEnumerable_1_t8927;
extern Il2CppGenericClass IEnumerable_1_t8927_GenericClass;
TypeInfo IEnumerable_1_t8927_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8927_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8927_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8927_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8927_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8927_0_0_0/* byval_arg */
	, &IEnumerable_1_t8927_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8927_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6877_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46031_MethodInfo;
static PropertyInfo IEnumerator_1_t6877____Current_PropertyInfo = 
{
	&IEnumerator_1_t6877_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46031_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6877_PropertyInfos[] =
{
	&IEnumerator_1_t6877____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContextAttribute_t2035_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46031_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46031_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6877_il2cpp_TypeInfo/* declaring_type */
	, &ContextAttribute_t2035_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46031_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6877_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46031_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6877_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6877_0_0_0;
extern Il2CppType IEnumerator_1_t6877_1_0_0;
struct IEnumerator_1_t6877;
extern Il2CppGenericClass IEnumerator_1_t6877_GenericClass;
TypeInfo IEnumerator_1_t6877_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6877_MethodInfos/* methods */
	, IEnumerator_1_t6877_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6877_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6877_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6877_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6877_0_0_0/* byval_arg */
	, &IEnumerator_1_t6877_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6877_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_685.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4831_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_685MethodDeclarations.h"

extern TypeInfo ContextAttribute_t2035_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26266_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContextAttribute_t2035_m35397_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.ContextAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.ContextAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContextAttribute_t2035_m35397(__this, p0, method) (ContextAttribute_t2035 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4831____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4831, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4831____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4831, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4831_FieldInfos[] =
{
	&InternalEnumerator_1_t4831____array_0_FieldInfo,
	&InternalEnumerator_1_t4831____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4831____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4831_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4831____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4831_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26266_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4831_PropertyInfos[] =
{
	&InternalEnumerator_1_t4831____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4831____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4831_InternalEnumerator_1__ctor_m26262_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26262_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26262_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4831_InternalEnumerator_1__ctor_m26262_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26262_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26264_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26264_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26264_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26265_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26265_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26265_GenericMethod/* genericMethod */

};
extern Il2CppType ContextAttribute_t2035_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26266_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26266_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* declaring_type */
	, &ContextAttribute_t2035_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26266_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4831_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26262_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_MethodInfo,
	&InternalEnumerator_1_Dispose_m26264_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26265_MethodInfo,
	&InternalEnumerator_1_get_Current_m26266_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26265_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26264_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4831_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26263_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26265_MethodInfo,
	&InternalEnumerator_1_Dispose_m26264_MethodInfo,
	&InternalEnumerator_1_get_Current_m26266_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4831_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6877_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4831_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6877_il2cpp_TypeInfo, 7},
};
extern TypeInfo ContextAttribute_t2035_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4831_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26266_MethodInfo/* Method Usage */,
	&ContextAttribute_t2035_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContextAttribute_t2035_m35397_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4831_0_0_0;
extern Il2CppType InternalEnumerator_1_t4831_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4831_GenericClass;
TypeInfo InternalEnumerator_1_t4831_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4831_MethodInfos/* methods */
	, InternalEnumerator_1_t4831_PropertyInfos/* properties */
	, InternalEnumerator_1_t4831_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4831_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4831_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4831_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4831_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4831_1_0_0/* this_arg */
	, InternalEnumerator_1_t4831_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4831_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4831_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4831)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8926_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo IList_1_get_Item_m46032_MethodInfo;
extern MethodInfo IList_1_set_Item_m46033_MethodInfo;
static PropertyInfo IList_1_t8926____Item_PropertyInfo = 
{
	&IList_1_t8926_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46032_MethodInfo/* get */
	, &IList_1_set_Item_m46033_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8926_PropertyInfos[] =
{
	&IList_1_t8926____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContextAttribute_t2035_0_0_0;
static ParameterInfo IList_1_t8926_IList_1_IndexOf_m46034_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t2035_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46034_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46034_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8926_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8926_IList_1_IndexOf_m46034_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46034_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ContextAttribute_t2035_0_0_0;
static ParameterInfo IList_1_t8926_IList_1_Insert_m46035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t2035_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46035_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46035_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8926_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8926_IList_1_Insert_m46035_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46035_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8926_IList_1_RemoveAt_m46036_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46036_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46036_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8926_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8926_IList_1_RemoveAt_m46036_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46036_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8926_IList_1_get_Item_m46032_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ContextAttribute_t2035_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46032_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46032_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8926_il2cpp_TypeInfo/* declaring_type */
	, &ContextAttribute_t2035_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8926_IList_1_get_Item_m46032_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46032_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ContextAttribute_t2035_0_0_0;
static ParameterInfo IList_1_t8926_IList_1_set_Item_m46033_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t2035_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46033_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46033_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8926_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8926_IList_1_set_Item_m46033_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46033_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8926_MethodInfos[] =
{
	&IList_1_IndexOf_m46034_MethodInfo,
	&IList_1_Insert_m46035_MethodInfo,
	&IList_1_RemoveAt_m46036_MethodInfo,
	&IList_1_get_Item_m46032_MethodInfo,
	&IList_1_set_Item_m46033_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8926_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8925_il2cpp_TypeInfo,
	&IEnumerable_1_t8927_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8926_0_0_0;
extern Il2CppType IList_1_t8926_1_0_0;
struct IList_1_t8926;
extern Il2CppGenericClass IList_1_t8926_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8926_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8926_MethodInfos/* methods */
	, IList_1_t8926_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8926_il2cpp_TypeInfo/* element_class */
	, IList_1_t8926_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8926_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8926_0_0_0/* byval_arg */
	, &IList_1_t8926_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8926_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t8928_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo ICollection_1_get_Count_m46037_MethodInfo;
static PropertyInfo ICollection_1_t8928____Count_PropertyInfo = 
{
	&ICollection_1_t8928_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46037_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46038_MethodInfo;
static PropertyInfo ICollection_1_t8928____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8928_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46038_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8928_PropertyInfos[] =
{
	&ICollection_1_t8928____Count_PropertyInfo,
	&ICollection_1_t8928____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46037_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46037_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46037_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46038_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46038_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46038_GenericMethod/* genericMethod */

};
extern Il2CppType IContextAttribute_t2667_0_0_0;
extern Il2CppType IContextAttribute_t2667_0_0_0;
static ParameterInfo ICollection_1_t8928_ICollection_1_Add_m46039_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t2667_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46039_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46039_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8928_ICollection_1_Add_m46039_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46039_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46040_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46040_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46040_GenericMethod/* genericMethod */

};
extern Il2CppType IContextAttribute_t2667_0_0_0;
static ParameterInfo ICollection_1_t8928_ICollection_1_Contains_m46041_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t2667_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46041_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46041_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8928_ICollection_1_Contains_m46041_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46041_GenericMethod/* genericMethod */

};
extern Il2CppType IContextAttributeU5BU5D_t2086_0_0_0;
extern Il2CppType IContextAttributeU5BU5D_t2086_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8928_ICollection_1_CopyTo_m46042_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttributeU5BU5D_t2086_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46042_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46042_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8928_ICollection_1_CopyTo_m46042_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46042_GenericMethod/* genericMethod */

};
extern Il2CppType IContextAttribute_t2667_0_0_0;
static ParameterInfo ICollection_1_t8928_ICollection_1_Remove_m46043_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t2667_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46043_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46043_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8928_ICollection_1_Remove_m46043_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46043_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8928_MethodInfos[] =
{
	&ICollection_1_get_Count_m46037_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46038_MethodInfo,
	&ICollection_1_Add_m46039_MethodInfo,
	&ICollection_1_Clear_m46040_MethodInfo,
	&ICollection_1_Contains_m46041_MethodInfo,
	&ICollection_1_CopyTo_m46042_MethodInfo,
	&ICollection_1_Remove_m46043_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8930_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8928_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8930_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8928_0_0_0;
extern Il2CppType ICollection_1_t8928_1_0_0;
struct ICollection_1_t8928;
extern Il2CppGenericClass ICollection_1_t8928_GenericClass;
TypeInfo ICollection_1_t8928_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8928_MethodInfos/* methods */
	, ICollection_1_t8928_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8928_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8928_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8928_0_0_0/* byval_arg */
	, &ICollection_1_t8928_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8928_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern Il2CppType IEnumerator_1_t6879_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46044_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46044_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8930_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6879_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46044_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8930_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46044_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8930_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8930_0_0_0;
extern Il2CppType IEnumerable_1_t8930_1_0_0;
struct IEnumerable_1_t8930;
extern Il2CppGenericClass IEnumerable_1_t8930_GenericClass;
TypeInfo IEnumerable_1_t8930_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8930_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8930_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8930_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8930_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8930_0_0_0/* byval_arg */
	, &IEnumerable_1_t8930_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8930_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6879_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46045_MethodInfo;
static PropertyInfo IEnumerator_1_t6879____Current_PropertyInfo = 
{
	&IEnumerator_1_t6879_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46045_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6879_PropertyInfos[] =
{
	&IEnumerator_1_t6879____Current_PropertyInfo,
	NULL
};
extern Il2CppType IContextAttribute_t2667_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46045_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46045_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6879_il2cpp_TypeInfo/* declaring_type */
	, &IContextAttribute_t2667_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46045_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6879_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46045_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6879_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6879_0_0_0;
extern Il2CppType IEnumerator_1_t6879_1_0_0;
struct IEnumerator_1_t6879;
extern Il2CppGenericClass IEnumerator_1_t6879_GenericClass;
TypeInfo IEnumerator_1_t6879_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6879_MethodInfos/* methods */
	, IEnumerator_1_t6879_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6879_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6879_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6879_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6879_0_0_0/* byval_arg */
	, &IEnumerator_1_t6879_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6879_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_686.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4832_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_686MethodDeclarations.h"

extern TypeInfo IContextAttribute_t2667_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26271_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContextAttribute_t2667_m35408_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisIContextAttribute_t2667_m35408(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4832____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4832, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4832____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4832, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4832_FieldInfos[] =
{
	&InternalEnumerator_1_t4832____array_0_FieldInfo,
	&InternalEnumerator_1_t4832____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26268_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4832____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4832_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26268_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4832____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4832_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26271_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4832_PropertyInfos[] =
{
	&InternalEnumerator_1_t4832____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4832____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4832_InternalEnumerator_1__ctor_m26267_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26267_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26267_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4832_InternalEnumerator_1__ctor_m26267_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26267_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26268_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26268_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26268_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26269_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26269_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26269_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26270_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26270_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26270_GenericMethod/* genericMethod */

};
extern Il2CppType IContextAttribute_t2667_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26271_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26271_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* declaring_type */
	, &IContextAttribute_t2667_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26271_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4832_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26267_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26268_MethodInfo,
	&InternalEnumerator_1_Dispose_m26269_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26270_MethodInfo,
	&InternalEnumerator_1_get_Current_m26271_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26270_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26269_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4832_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26268_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26270_MethodInfo,
	&InternalEnumerator_1_Dispose_m26269_MethodInfo,
	&InternalEnumerator_1_get_Current_m26271_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4832_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6879_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4832_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6879_il2cpp_TypeInfo, 7},
};
extern TypeInfo IContextAttribute_t2667_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4832_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26271_MethodInfo/* Method Usage */,
	&IContextAttribute_t2667_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIContextAttribute_t2667_m35408_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4832_0_0_0;
extern Il2CppType InternalEnumerator_1_t4832_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4832_GenericClass;
TypeInfo InternalEnumerator_1_t4832_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4832_MethodInfos/* methods */
	, InternalEnumerator_1_t4832_PropertyInfos/* properties */
	, InternalEnumerator_1_t4832_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4832_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4832_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4832_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4832_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4832_1_0_0/* this_arg */
	, InternalEnumerator_1_t4832_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4832_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4832_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4832)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8929_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo IList_1_get_Item_m46046_MethodInfo;
extern MethodInfo IList_1_set_Item_m46047_MethodInfo;
static PropertyInfo IList_1_t8929____Item_PropertyInfo = 
{
	&IList_1_t8929_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46046_MethodInfo/* get */
	, &IList_1_set_Item_m46047_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8929_PropertyInfos[] =
{
	&IList_1_t8929____Item_PropertyInfo,
	NULL
};
extern Il2CppType IContextAttribute_t2667_0_0_0;
static ParameterInfo IList_1_t8929_IList_1_IndexOf_m46048_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t2667_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46048_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46048_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8929_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8929_IList_1_IndexOf_m46048_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46048_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IContextAttribute_t2667_0_0_0;
static ParameterInfo IList_1_t8929_IList_1_Insert_m46049_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t2667_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46049_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46049_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8929_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8929_IList_1_Insert_m46049_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46049_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8929_IList_1_RemoveAt_m46050_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46050_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46050_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8929_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8929_IList_1_RemoveAt_m46050_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46050_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8929_IList_1_get_Item_m46046_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IContextAttribute_t2667_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46046_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46046_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8929_il2cpp_TypeInfo/* declaring_type */
	, &IContextAttribute_t2667_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8929_IList_1_get_Item_m46046_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46046_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IContextAttribute_t2667_0_0_0;
static ParameterInfo IList_1_t8929_IList_1_set_Item_m46047_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t2667_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46047_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46047_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8929_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8929_IList_1_set_Item_m46047_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46047_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8929_MethodInfos[] =
{
	&IList_1_IndexOf_m46048_MethodInfo,
	&IList_1_Insert_m46049_MethodInfo,
	&IList_1_RemoveAt_m46050_MethodInfo,
	&IList_1_get_Item_m46046_MethodInfo,
	&IList_1_set_Item_m46047_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8929_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8928_il2cpp_TypeInfo,
	&IEnumerable_1_t8930_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8929_0_0_0;
extern Il2CppType IList_1_t8929_1_0_0;
struct IList_1_t8929;
extern Il2CppGenericClass IList_1_t8929_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8929_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8929_MethodInfos/* methods */
	, IList_1_t8929_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8929_il2cpp_TypeInfo/* element_class */
	, IList_1_t8929_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8929_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8929_0_0_0/* byval_arg */
	, &IList_1_t8929_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8929_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t8931_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo ICollection_1_get_Count_m46051_MethodInfo;
static PropertyInfo ICollection_1_t8931____Count_PropertyInfo = 
{
	&ICollection_1_t8931_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46051_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46052_MethodInfo;
static PropertyInfo ICollection_1_t8931____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8931_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46052_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8931_PropertyInfos[] =
{
	&ICollection_1_t8931____Count_PropertyInfo,
	&ICollection_1_t8931____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46051_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Count()
MethodInfo ICollection_1_get_Count_m46051_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46051_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46052_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46052_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46052_GenericMethod/* genericMethod */

};
extern Il2CppType IContextProperty_t2045_0_0_0;
extern Il2CppType IContextProperty_t2045_0_0_0;
static ParameterInfo ICollection_1_t8931_ICollection_1_Add_m46053_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t2045_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46053_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Add(T)
MethodInfo ICollection_1_Add_m46053_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8931_ICollection_1_Add_m46053_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46053_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46054_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Clear()
MethodInfo ICollection_1_Clear_m46054_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46054_GenericMethod/* genericMethod */

};
extern Il2CppType IContextProperty_t2045_0_0_0;
static ParameterInfo ICollection_1_t8931_ICollection_1_Contains_m46055_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t2045_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46055_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Contains(T)
MethodInfo ICollection_1_Contains_m46055_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8931_ICollection_1_Contains_m46055_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46055_GenericMethod/* genericMethod */

};
extern Il2CppType IContextPropertyU5BU5D_t5095_0_0_0;
extern Il2CppType IContextPropertyU5BU5D_t5095_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8931_ICollection_1_CopyTo_m46056_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IContextPropertyU5BU5D_t5095_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46056_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46056_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8931_ICollection_1_CopyTo_m46056_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46056_GenericMethod/* genericMethod */

};
extern Il2CppType IContextProperty_t2045_0_0_0;
static ParameterInfo ICollection_1_t8931_ICollection_1_Remove_m46057_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t2045_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46057_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Remove(T)
MethodInfo ICollection_1_Remove_m46057_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8931_ICollection_1_Remove_m46057_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46057_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8931_MethodInfos[] =
{
	&ICollection_1_get_Count_m46051_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46052_MethodInfo,
	&ICollection_1_Add_m46053_MethodInfo,
	&ICollection_1_Clear_m46054_MethodInfo,
	&ICollection_1_Contains_m46055_MethodInfo,
	&ICollection_1_CopyTo_m46056_MethodInfo,
	&ICollection_1_Remove_m46057_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8933_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8931_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8933_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8931_0_0_0;
extern Il2CppType ICollection_1_t8931_1_0_0;
struct ICollection_1_t8931;
extern Il2CppGenericClass ICollection_1_t8931_GenericClass;
TypeInfo ICollection_1_t8931_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8931_MethodInfos/* methods */
	, ICollection_1_t8931_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8931_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8931_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8931_0_0_0/* byval_arg */
	, &ICollection_1_t8931_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8931_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextProperty>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern Il2CppType IEnumerator_1_t6881_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46058_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextProperty>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46058_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8933_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6881_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46058_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8933_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46058_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8933_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8933_0_0_0;
extern Il2CppType IEnumerable_1_t8933_1_0_0;
struct IEnumerable_1_t8933;
extern Il2CppGenericClass IEnumerable_1_t8933_GenericClass;
TypeInfo IEnumerable_1_t8933_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8933_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8933_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8933_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8933_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8933_0_0_0/* byval_arg */
	, &IEnumerable_1_t8933_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8933_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6881_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo IEnumerator_1_get_Current_m46059_MethodInfo;
static PropertyInfo IEnumerator_1_t6881____Current_PropertyInfo = 
{
	&IEnumerator_1_t6881_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46059_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6881_PropertyInfos[] =
{
	&IEnumerator_1_t6881____Current_PropertyInfo,
	NULL
};
extern Il2CppType IContextProperty_t2045_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46059_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46059_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6881_il2cpp_TypeInfo/* declaring_type */
	, &IContextProperty_t2045_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46059_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6881_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46059_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6881_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6881_0_0_0;
extern Il2CppType IEnumerator_1_t6881_1_0_0;
struct IEnumerator_1_t6881;
extern Il2CppGenericClass IEnumerator_1_t6881_GenericClass;
TypeInfo IEnumerator_1_t6881_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6881_MethodInfos/* methods */
	, IEnumerator_1_t6881_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6881_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6881_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6881_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6881_0_0_0/* byval_arg */
	, &IEnumerator_1_t6881_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6881_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_687.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4833_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_687MethodDeclarations.h"

extern TypeInfo IContextProperty_t2045_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26276_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContextProperty_t2045_m35419_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextProperty>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextProperty>(System.Int32)
#define Array_InternalArray__get_Item_TisIContextProperty_t2045_m35419(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4833____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4833, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4833____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4833, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4833_FieldInfos[] =
{
	&InternalEnumerator_1_t4833____array_0_FieldInfo,
	&InternalEnumerator_1_t4833____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26273_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4833____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4833_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26273_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4833____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4833_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26276_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4833_PropertyInfos[] =
{
	&InternalEnumerator_1_t4833____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4833____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4833_InternalEnumerator_1__ctor_m26272_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26272_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26272_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4833_InternalEnumerator_1__ctor_m26272_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26272_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26273_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26273_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26273_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26274_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26274_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26274_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26275_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26275_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26275_GenericMethod/* genericMethod */

};
extern Il2CppType IContextProperty_t2045_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26276_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26276_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* declaring_type */
	, &IContextProperty_t2045_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26276_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4833_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26272_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26273_MethodInfo,
	&InternalEnumerator_1_Dispose_m26274_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26275_MethodInfo,
	&InternalEnumerator_1_get_Current_m26276_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26275_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26274_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4833_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26273_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26275_MethodInfo,
	&InternalEnumerator_1_Dispose_m26274_MethodInfo,
	&InternalEnumerator_1_get_Current_m26276_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4833_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6881_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4833_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6881_il2cpp_TypeInfo, 7},
};
extern TypeInfo IContextProperty_t2045_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4833_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26276_MethodInfo/* Method Usage */,
	&IContextProperty_t2045_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIContextProperty_t2045_m35419_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4833_0_0_0;
extern Il2CppType InternalEnumerator_1_t4833_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4833_GenericClass;
TypeInfo InternalEnumerator_1_t4833_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4833_MethodInfos/* methods */
	, InternalEnumerator_1_t4833_PropertyInfos/* properties */
	, InternalEnumerator_1_t4833_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4833_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4833_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4833_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4833_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4833_1_0_0/* this_arg */
	, InternalEnumerator_1_t4833_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4833_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4833_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4833)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8932_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo IList_1_get_Item_m46060_MethodInfo;
extern MethodInfo IList_1_set_Item_m46061_MethodInfo;
static PropertyInfo IList_1_t8932____Item_PropertyInfo = 
{
	&IList_1_t8932_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46060_MethodInfo/* get */
	, &IList_1_set_Item_m46061_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8932_PropertyInfos[] =
{
	&IList_1_t8932____Item_PropertyInfo,
	NULL
};
extern Il2CppType IContextProperty_t2045_0_0_0;
static ParameterInfo IList_1_t8932_IList_1_IndexOf_m46062_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t2045_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46062_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46062_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8932_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8932_IList_1_IndexOf_m46062_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46062_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IContextProperty_t2045_0_0_0;
static ParameterInfo IList_1_t8932_IList_1_Insert_m46063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t2045_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46063_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46063_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8932_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8932_IList_1_Insert_m46063_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46063_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8932_IList_1_RemoveAt_m46064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46064_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46064_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8932_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8932_IList_1_RemoveAt_m46064_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46064_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8932_IList_1_get_Item_m46060_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IContextProperty_t2045_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46060_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46060_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8932_il2cpp_TypeInfo/* declaring_type */
	, &IContextProperty_t2045_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8932_IList_1_get_Item_m46060_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46060_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IContextProperty_t2045_0_0_0;
static ParameterInfo IList_1_t8932_IList_1_set_Item_m46061_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t2045_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46061_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46061_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8932_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8932_IList_1_set_Item_m46061_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46061_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8932_MethodInfos[] =
{
	&IList_1_IndexOf_m46062_MethodInfo,
	&IList_1_Insert_m46063_MethodInfo,
	&IList_1_RemoveAt_m46064_MethodInfo,
	&IList_1_get_Item_m46060_MethodInfo,
	&IList_1_set_Item_m46061_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8932_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8931_il2cpp_TypeInfo,
	&IEnumerable_1_t8933_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8932_0_0_0;
extern Il2CppType IList_1_t8932_1_0_0;
struct IList_1_t8932;
extern Il2CppGenericClass IList_1_t8932_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8932_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8932_MethodInfos/* methods */
	, IList_1_t8932_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8932_il2cpp_TypeInfo/* element_class */
	, IList_1_t8932_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8932_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8932_0_0_0/* byval_arg */
	, &IList_1_t8932_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8932_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6883_il2cpp_TypeInfo;

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46065_MethodInfo;
static PropertyInfo IEnumerator_1_t6883____Current_PropertyInfo = 
{
	&IEnumerator_1_t6883_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6883_PropertyInfos[] =
{
	&IEnumerator_1_t6883____Current_PropertyInfo,
	NULL
};
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46065_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46065_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6883_il2cpp_TypeInfo/* declaring_type */
	, &SynchronizationAttribute_t2048_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46065_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6883_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46065_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6883_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6883_0_0_0;
extern Il2CppType IEnumerator_1_t6883_1_0_0;
struct IEnumerator_1_t6883;
extern Il2CppGenericClass IEnumerator_1_t6883_GenericClass;
TypeInfo IEnumerator_1_t6883_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6883_MethodInfos/* methods */
	, IEnumerator_1_t6883_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6883_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6883_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6883_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6883_0_0_0/* byval_arg */
	, &IEnumerator_1_t6883_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6883_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_688.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4834_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_688MethodDeclarations.h"

extern TypeInfo SynchronizationAttribute_t2048_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26281_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSynchronizationAttribute_t2048_m35430_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.SynchronizationAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.SynchronizationAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSynchronizationAttribute_t2048_m35430(__this, p0, method) (SynchronizationAttribute_t2048 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4834____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4834, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4834____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4834, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4834_FieldInfos[] =
{
	&InternalEnumerator_1_t4834____array_0_FieldInfo,
	&InternalEnumerator_1_t4834____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26278_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4834____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4834_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4834____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4834_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26281_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4834_PropertyInfos[] =
{
	&InternalEnumerator_1_t4834____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4834____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4834_InternalEnumerator_1__ctor_m26277_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26277_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26277_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4834_InternalEnumerator_1__ctor_m26277_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26277_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26278_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26278_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26278_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26279_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26279_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26279_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26280_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26280_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26280_GenericMethod/* genericMethod */

};
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26281_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26281_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* declaring_type */
	, &SynchronizationAttribute_t2048_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26281_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4834_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26277_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26278_MethodInfo,
	&InternalEnumerator_1_Dispose_m26279_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26280_MethodInfo,
	&InternalEnumerator_1_get_Current_m26281_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26280_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26279_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4834_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26278_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26280_MethodInfo,
	&InternalEnumerator_1_Dispose_m26279_MethodInfo,
	&InternalEnumerator_1_get_Current_m26281_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4834_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6883_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4834_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6883_il2cpp_TypeInfo, 7},
};
extern TypeInfo SynchronizationAttribute_t2048_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4834_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26281_MethodInfo/* Method Usage */,
	&SynchronizationAttribute_t2048_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSynchronizationAttribute_t2048_m35430_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4834_0_0_0;
extern Il2CppType InternalEnumerator_1_t4834_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4834_GenericClass;
TypeInfo InternalEnumerator_1_t4834_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4834_MethodInfos/* methods */
	, InternalEnumerator_1_t4834_PropertyInfos/* properties */
	, InternalEnumerator_1_t4834_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4834_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4834_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4834_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4834_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4834_1_0_0/* this_arg */
	, InternalEnumerator_1_t4834_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4834_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4834_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4834)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8934_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern MethodInfo ICollection_1_get_Count_m46066_MethodInfo;
static PropertyInfo ICollection_1_t8934____Count_PropertyInfo = 
{
	&ICollection_1_t8934_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46066_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46067_MethodInfo;
static PropertyInfo ICollection_1_t8934____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8934_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8934_PropertyInfos[] =
{
	&ICollection_1_t8934____Count_PropertyInfo,
	&ICollection_1_t8934____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46066_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46066_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46066_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46067_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46067_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46067_GenericMethod/* genericMethod */

};
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
static ParameterInfo ICollection_1_t8934_ICollection_1_Add_m46068_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t2048_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46068_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46068_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8934_ICollection_1_Add_m46068_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46068_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46069_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46069_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46069_GenericMethod/* genericMethod */

};
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
static ParameterInfo ICollection_1_t8934_ICollection_1_Contains_m46070_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t2048_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46070_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46070_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8934_ICollection_1_Contains_m46070_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46070_GenericMethod/* genericMethod */

};
extern Il2CppType SynchronizationAttributeU5BU5D_t5096_0_0_0;
extern Il2CppType SynchronizationAttributeU5BU5D_t5096_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8934_ICollection_1_CopyTo_m46071_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttributeU5BU5D_t5096_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46071_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46071_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8934_ICollection_1_CopyTo_m46071_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46071_GenericMethod/* genericMethod */

};
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
static ParameterInfo ICollection_1_t8934_ICollection_1_Remove_m46072_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t2048_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46072_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46072_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8934_ICollection_1_Remove_m46072_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46072_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8934_MethodInfos[] =
{
	&ICollection_1_get_Count_m46066_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46067_MethodInfo,
	&ICollection_1_Add_m46068_MethodInfo,
	&ICollection_1_Clear_m46069_MethodInfo,
	&ICollection_1_Contains_m46070_MethodInfo,
	&ICollection_1_CopyTo_m46071_MethodInfo,
	&ICollection_1_Remove_m46072_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8936_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8934_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8936_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8934_0_0_0;
extern Il2CppType ICollection_1_t8934_1_0_0;
struct ICollection_1_t8934;
extern Il2CppGenericClass ICollection_1_t8934_GenericClass;
TypeInfo ICollection_1_t8934_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8934_MethodInfos/* methods */
	, ICollection_1_t8934_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8934_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8934_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8934_0_0_0/* byval_arg */
	, &ICollection_1_t8934_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8934_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern Il2CppType IEnumerator_1_t6883_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46073_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46073_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8936_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6883_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46073_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8936_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46073_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8936_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8936_0_0_0;
extern Il2CppType IEnumerable_1_t8936_1_0_0;
struct IEnumerable_1_t8936;
extern Il2CppGenericClass IEnumerable_1_t8936_GenericClass;
TypeInfo IEnumerable_1_t8936_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8936_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8936_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8936_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8936_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8936_0_0_0/* byval_arg */
	, &IEnumerable_1_t8936_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8936_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8935_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern MethodInfo IList_1_get_Item_m46074_MethodInfo;
extern MethodInfo IList_1_set_Item_m46075_MethodInfo;
static PropertyInfo IList_1_t8935____Item_PropertyInfo = 
{
	&IList_1_t8935_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46074_MethodInfo/* get */
	, &IList_1_set_Item_m46075_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8935_PropertyInfos[] =
{
	&IList_1_t8935____Item_PropertyInfo,
	NULL
};
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
static ParameterInfo IList_1_t8935_IList_1_IndexOf_m46076_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t2048_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46076_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46076_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8935_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8935_IList_1_IndexOf_m46076_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46076_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
static ParameterInfo IList_1_t8935_IList_1_Insert_m46077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t2048_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46077_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46077_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8935_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8935_IList_1_Insert_m46077_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46077_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8935_IList_1_RemoveAt_m46078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46078_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46078_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8935_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8935_IList_1_RemoveAt_m46078_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46078_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8935_IList_1_get_Item_m46074_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46074_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46074_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8935_il2cpp_TypeInfo/* declaring_type */
	, &SynchronizationAttribute_t2048_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8935_IList_1_get_Item_m46074_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46074_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType SynchronizationAttribute_t2048_0_0_0;
static ParameterInfo IList_1_t8935_IList_1_set_Item_m46075_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t2048_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46075_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46075_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8935_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8935_IList_1_set_Item_m46075_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46075_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8935_MethodInfos[] =
{
	&IList_1_IndexOf_m46076_MethodInfo,
	&IList_1_Insert_m46077_MethodInfo,
	&IList_1_RemoveAt_m46078_MethodInfo,
	&IList_1_get_Item_m46074_MethodInfo,
	&IList_1_set_Item_m46075_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8935_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8934_il2cpp_TypeInfo,
	&IEnumerable_1_t8936_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8935_0_0_0;
extern Il2CppType IList_1_t8935_1_0_0;
struct IList_1_t8935;
extern Il2CppGenericClass IList_1_t8935_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8935_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8935_MethodInfos/* methods */
	, IList_1_t8935_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8935_il2cpp_TypeInfo/* element_class */
	, IList_1_t8935_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8935_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8935_0_0_0/* byval_arg */
	, &IList_1_t8935_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8935_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t8937_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern MethodInfo ICollection_1_get_Count_m46079_MethodInfo;
static PropertyInfo ICollection_1_t8937____Count_PropertyInfo = 
{
	&ICollection_1_t8937_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46079_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46080_MethodInfo;
static PropertyInfo ICollection_1_t8937____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8937_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46080_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8937_PropertyInfos[] =
{
	&ICollection_1_t8937____Count_PropertyInfo,
	&ICollection_1_t8937____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46079_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Count()
MethodInfo ICollection_1_get_Count_m46079_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46079_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46080_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46080_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46080_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
static ParameterInfo ICollection_1_t8937_ICollection_1_Add_m46081_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t2671_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46081_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Add(T)
MethodInfo ICollection_1_Add_m46081_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8937_ICollection_1_Add_m46081_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46081_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46082_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Clear()
MethodInfo ICollection_1_Clear_m46082_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46082_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
static ParameterInfo ICollection_1_t8937_ICollection_1_Contains_m46083_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t2671_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46083_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Contains(T)
MethodInfo ICollection_1_Contains_m46083_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8937_ICollection_1_Contains_m46083_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46083_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeClientContextSinkU5BU5D_t5097_0_0_0;
extern Il2CppType IContributeClientContextSinkU5BU5D_t5097_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8937_ICollection_1_CopyTo_m46084_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSinkU5BU5D_t5097_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46084_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46084_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8937_ICollection_1_CopyTo_m46084_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46084_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
static ParameterInfo ICollection_1_t8937_ICollection_1_Remove_m46085_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t2671_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46085_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Remove(T)
MethodInfo ICollection_1_Remove_m46085_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8937_ICollection_1_Remove_m46085_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46085_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8937_MethodInfos[] =
{
	&ICollection_1_get_Count_m46079_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46080_MethodInfo,
	&ICollection_1_Add_m46081_MethodInfo,
	&ICollection_1_Clear_m46082_MethodInfo,
	&ICollection_1_Contains_m46083_MethodInfo,
	&ICollection_1_CopyTo_m46084_MethodInfo,
	&ICollection_1_Remove_m46085_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8939_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8937_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8939_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8937_0_0_0;
extern Il2CppType ICollection_1_t8937_1_0_0;
struct ICollection_1_t8937;
extern Il2CppGenericClass ICollection_1_t8937_GenericClass;
TypeInfo ICollection_1_t8937_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8937_MethodInfos/* methods */
	, ICollection_1_t8937_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8937_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8937_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8937_0_0_0/* byval_arg */
	, &ICollection_1_t8937_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8937_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern Il2CppType IEnumerator_1_t6885_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46086_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46086_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8939_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6885_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46086_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8939_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46086_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8939_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8939_0_0_0;
extern Il2CppType IEnumerable_1_t8939_1_0_0;
struct IEnumerable_1_t8939;
extern Il2CppGenericClass IEnumerable_1_t8939_GenericClass;
TypeInfo IEnumerable_1_t8939_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8939_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8939_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8939_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8939_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8939_0_0_0/* byval_arg */
	, &IEnumerable_1_t8939_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8939_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6885_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern MethodInfo IEnumerator_1_get_Current_m46087_MethodInfo;
static PropertyInfo IEnumerator_1_t6885____Current_PropertyInfo = 
{
	&IEnumerator_1_t6885_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46087_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6885_PropertyInfos[] =
{
	&IEnumerator_1_t6885____Current_PropertyInfo,
	NULL
};
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46087_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46087_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6885_il2cpp_TypeInfo/* declaring_type */
	, &IContributeClientContextSink_t2671_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46087_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6885_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46087_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6885_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6885_0_0_0;
extern Il2CppType IEnumerator_1_t6885_1_0_0;
struct IEnumerator_1_t6885;
extern Il2CppGenericClass IEnumerator_1_t6885_GenericClass;
TypeInfo IEnumerator_1_t6885_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6885_MethodInfos/* methods */
	, IEnumerator_1_t6885_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6885_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6885_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6885_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6885_0_0_0/* byval_arg */
	, &IEnumerator_1_t6885_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6885_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_689.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4835_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_689MethodDeclarations.h"

extern TypeInfo IContributeClientContextSink_t2671_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26286_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContributeClientContextSink_t2671_m35441_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContributeClientContextSink>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContributeClientContextSink>(System.Int32)
#define Array_InternalArray__get_Item_TisIContributeClientContextSink_t2671_m35441(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4835____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4835, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4835____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4835, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4835_FieldInfos[] =
{
	&InternalEnumerator_1_t4835____array_0_FieldInfo,
	&InternalEnumerator_1_t4835____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26283_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4835____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4835_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26283_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4835____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4835_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26286_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4835_PropertyInfos[] =
{
	&InternalEnumerator_1_t4835____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4835____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4835_InternalEnumerator_1__ctor_m26282_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26282_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26282_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4835_InternalEnumerator_1__ctor_m26282_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26282_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26283_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26283_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26283_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26284_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26284_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26284_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26285_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26285_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26285_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26286_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26286_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* declaring_type */
	, &IContributeClientContextSink_t2671_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26286_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4835_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26282_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26283_MethodInfo,
	&InternalEnumerator_1_Dispose_m26284_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26285_MethodInfo,
	&InternalEnumerator_1_get_Current_m26286_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26285_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26284_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4835_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26283_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26285_MethodInfo,
	&InternalEnumerator_1_Dispose_m26284_MethodInfo,
	&InternalEnumerator_1_get_Current_m26286_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4835_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6885_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4835_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6885_il2cpp_TypeInfo, 7},
};
extern TypeInfo IContributeClientContextSink_t2671_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4835_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26286_MethodInfo/* Method Usage */,
	&IContributeClientContextSink_t2671_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIContributeClientContextSink_t2671_m35441_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4835_0_0_0;
extern Il2CppType InternalEnumerator_1_t4835_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4835_GenericClass;
TypeInfo InternalEnumerator_1_t4835_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4835_MethodInfos/* methods */
	, InternalEnumerator_1_t4835_PropertyInfos/* properties */
	, InternalEnumerator_1_t4835_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4835_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4835_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4835_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4835_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4835_1_0_0/* this_arg */
	, InternalEnumerator_1_t4835_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4835_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4835_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4835)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8938_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern MethodInfo IList_1_get_Item_m46088_MethodInfo;
extern MethodInfo IList_1_set_Item_m46089_MethodInfo;
static PropertyInfo IList_1_t8938____Item_PropertyInfo = 
{
	&IList_1_t8938_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46088_MethodInfo/* get */
	, &IList_1_set_Item_m46089_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8938_PropertyInfos[] =
{
	&IList_1_t8938____Item_PropertyInfo,
	NULL
};
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
static ParameterInfo IList_1_t8938_IList_1_IndexOf_m46090_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t2671_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46090_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46090_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8938_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8938_IList_1_IndexOf_m46090_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46090_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
static ParameterInfo IList_1_t8938_IList_1_Insert_m46091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t2671_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46091_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46091_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8938_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8938_IList_1_Insert_m46091_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46091_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8938_IList_1_RemoveAt_m46092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46092_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46092_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8938_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8938_IList_1_RemoveAt_m46092_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46092_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8938_IList_1_get_Item_m46088_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46088_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46088_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8938_il2cpp_TypeInfo/* declaring_type */
	, &IContributeClientContextSink_t2671_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8938_IList_1_get_Item_m46088_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46088_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IContributeClientContextSink_t2671_0_0_0;
static ParameterInfo IList_1_t8938_IList_1_set_Item_m46089_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t2671_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46089_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46089_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8938_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8938_IList_1_set_Item_m46089_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46089_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8938_MethodInfos[] =
{
	&IList_1_IndexOf_m46090_MethodInfo,
	&IList_1_Insert_m46091_MethodInfo,
	&IList_1_RemoveAt_m46092_MethodInfo,
	&IList_1_get_Item_m46088_MethodInfo,
	&IList_1_set_Item_m46089_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8938_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8937_il2cpp_TypeInfo,
	&IEnumerable_1_t8939_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8938_0_0_0;
extern Il2CppType IList_1_t8938_1_0_0;
struct IList_1_t8938;
extern Il2CppGenericClass IList_1_t8938_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8938_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8938_MethodInfos/* methods */
	, IList_1_t8938_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8938_il2cpp_TypeInfo/* element_class */
	, IList_1_t8938_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8938_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8938_0_0_0/* byval_arg */
	, &IList_1_t8938_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8938_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t8940_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern MethodInfo ICollection_1_get_Count_m46093_MethodInfo;
static PropertyInfo ICollection_1_t8940____Count_PropertyInfo = 
{
	&ICollection_1_t8940_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46093_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46094_MethodInfo;
static PropertyInfo ICollection_1_t8940____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8940_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46094_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8940_PropertyInfos[] =
{
	&ICollection_1_t8940____Count_PropertyInfo,
	&ICollection_1_t8940____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46093_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Count()
MethodInfo ICollection_1_get_Count_m46093_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46093_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46094_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46094_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46094_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
static ParameterInfo ICollection_1_t8940_ICollection_1_Add_m46095_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t2672_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46095_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Add(T)
MethodInfo ICollection_1_Add_m46095_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8940_ICollection_1_Add_m46095_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46095_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46096_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Clear()
MethodInfo ICollection_1_Clear_m46096_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46096_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
static ParameterInfo ICollection_1_t8940_ICollection_1_Contains_m46097_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t2672_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46097_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Contains(T)
MethodInfo ICollection_1_Contains_m46097_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8940_ICollection_1_Contains_m46097_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46097_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeServerContextSinkU5BU5D_t5098_0_0_0;
extern Il2CppType IContributeServerContextSinkU5BU5D_t5098_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8940_ICollection_1_CopyTo_m46098_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSinkU5BU5D_t5098_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46098_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46098_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8940_ICollection_1_CopyTo_m46098_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46098_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
static ParameterInfo ICollection_1_t8940_ICollection_1_Remove_m46099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t2672_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46099_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Remove(T)
MethodInfo ICollection_1_Remove_m46099_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8940_ICollection_1_Remove_m46099_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46099_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8940_MethodInfos[] =
{
	&ICollection_1_get_Count_m46093_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46094_MethodInfo,
	&ICollection_1_Add_m46095_MethodInfo,
	&ICollection_1_Clear_m46096_MethodInfo,
	&ICollection_1_Contains_m46097_MethodInfo,
	&ICollection_1_CopyTo_m46098_MethodInfo,
	&ICollection_1_Remove_m46099_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8942_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8940_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8942_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8940_0_0_0;
extern Il2CppType ICollection_1_t8940_1_0_0;
struct ICollection_1_t8940;
extern Il2CppGenericClass ICollection_1_t8940_GenericClass;
TypeInfo ICollection_1_t8940_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8940_MethodInfos/* methods */
	, ICollection_1_t8940_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8940_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8940_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8940_0_0_0/* byval_arg */
	, &ICollection_1_t8940_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8940_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern Il2CppType IEnumerator_1_t6887_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46100_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46100_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8942_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6887_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46100_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8942_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46100_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8942_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8942_0_0_0;
extern Il2CppType IEnumerable_1_t8942_1_0_0;
struct IEnumerable_1_t8942;
extern Il2CppGenericClass IEnumerable_1_t8942_GenericClass;
TypeInfo IEnumerable_1_t8942_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8942_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8942_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8942_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8942_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8942_0_0_0/* byval_arg */
	, &IEnumerable_1_t8942_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8942_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6887_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern MethodInfo IEnumerator_1_get_Current_m46101_MethodInfo;
static PropertyInfo IEnumerator_1_t6887____Current_PropertyInfo = 
{
	&IEnumerator_1_t6887_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46101_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6887_PropertyInfos[] =
{
	&IEnumerator_1_t6887____Current_PropertyInfo,
	NULL
};
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46101_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46101_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6887_il2cpp_TypeInfo/* declaring_type */
	, &IContributeServerContextSink_t2672_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46101_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6887_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46101_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6887_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6887_0_0_0;
extern Il2CppType IEnumerator_1_t6887_1_0_0;
struct IEnumerator_1_t6887;
extern Il2CppGenericClass IEnumerator_1_t6887_GenericClass;
TypeInfo IEnumerator_1_t6887_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6887_MethodInfos/* methods */
	, IEnumerator_1_t6887_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6887_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6887_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6887_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6887_0_0_0/* byval_arg */
	, &IEnumerator_1_t6887_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6887_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_690.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4836_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_690MethodDeclarations.h"

extern TypeInfo IContributeServerContextSink_t2672_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26291_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContributeServerContextSink_t2672_m35452_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContributeServerContextSink>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContributeServerContextSink>(System.Int32)
#define Array_InternalArray__get_Item_TisIContributeServerContextSink_t2672_m35452(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4836____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4836, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4836____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4836, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4836_FieldInfos[] =
{
	&InternalEnumerator_1_t4836____array_0_FieldInfo,
	&InternalEnumerator_1_t4836____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26288_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4836____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4836_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26288_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4836____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4836_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4836_PropertyInfos[] =
{
	&InternalEnumerator_1_t4836____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4836____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4836_InternalEnumerator_1__ctor_m26287_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26287_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26287_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4836_InternalEnumerator_1__ctor_m26287_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26287_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26288_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26288_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26288_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26289_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26289_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26289_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26290_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26290_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26290_GenericMethod/* genericMethod */

};
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26291_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26291_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* declaring_type */
	, &IContributeServerContextSink_t2672_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26291_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4836_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26287_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26288_MethodInfo,
	&InternalEnumerator_1_Dispose_m26289_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26290_MethodInfo,
	&InternalEnumerator_1_get_Current_m26291_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26290_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26289_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4836_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26288_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26290_MethodInfo,
	&InternalEnumerator_1_Dispose_m26289_MethodInfo,
	&InternalEnumerator_1_get_Current_m26291_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4836_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6887_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4836_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6887_il2cpp_TypeInfo, 7},
};
extern TypeInfo IContributeServerContextSink_t2672_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4836_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26291_MethodInfo/* Method Usage */,
	&IContributeServerContextSink_t2672_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIContributeServerContextSink_t2672_m35452_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4836_0_0_0;
extern Il2CppType InternalEnumerator_1_t4836_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4836_GenericClass;
TypeInfo InternalEnumerator_1_t4836_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4836_MethodInfos/* methods */
	, InternalEnumerator_1_t4836_PropertyInfos/* properties */
	, InternalEnumerator_1_t4836_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4836_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4836_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4836_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4836_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4836_1_0_0/* this_arg */
	, InternalEnumerator_1_t4836_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4836_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4836_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4836)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8941_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern MethodInfo IList_1_get_Item_m46102_MethodInfo;
extern MethodInfo IList_1_set_Item_m46103_MethodInfo;
static PropertyInfo IList_1_t8941____Item_PropertyInfo = 
{
	&IList_1_t8941_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46102_MethodInfo/* get */
	, &IList_1_set_Item_m46103_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8941_PropertyInfos[] =
{
	&IList_1_t8941____Item_PropertyInfo,
	NULL
};
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
static ParameterInfo IList_1_t8941_IList_1_IndexOf_m46104_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t2672_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46104_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46104_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8941_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8941_IList_1_IndexOf_m46104_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46104_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
static ParameterInfo IList_1_t8941_IList_1_Insert_m46105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t2672_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46105_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46105_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8941_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8941_IList_1_Insert_m46105_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46105_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8941_IList_1_RemoveAt_m46106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46106_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46106_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8941_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8941_IList_1_RemoveAt_m46106_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46106_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8941_IList_1_get_Item_m46102_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46102_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46102_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8941_il2cpp_TypeInfo/* declaring_type */
	, &IContributeServerContextSink_t2672_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8941_IList_1_get_Item_m46102_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46102_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IContributeServerContextSink_t2672_0_0_0;
static ParameterInfo IList_1_t8941_IList_1_set_Item_m46103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t2672_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46103_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46103_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8941_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8941_IList_1_set_Item_m46103_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46103_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8941_MethodInfos[] =
{
	&IList_1_IndexOf_m46104_MethodInfo,
	&IList_1_Insert_m46105_MethodInfo,
	&IList_1_RemoveAt_m46106_MethodInfo,
	&IList_1_get_Item_m46102_MethodInfo,
	&IList_1_set_Item_m46103_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8941_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8940_il2cpp_TypeInfo,
	&IEnumerable_1_t8942_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8941_0_0_0;
extern Il2CppType IList_1_t8941_1_0_0;
struct IList_1_t8941;
extern Il2CppGenericClass IList_1_t8941_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8941_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8941_MethodInfos/* methods */
	, IList_1_t8941_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8941_il2cpp_TypeInfo/* element_class */
	, IList_1_t8941_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8941_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8941_0_0_0/* byval_arg */
	, &IList_1_t8941_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8941_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6889_il2cpp_TypeInfo;

// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo IEnumerator_1_get_Current_m46107_MethodInfo;
static PropertyInfo IEnumerator_1_t6889____Current_PropertyInfo = 
{
	&IEnumerator_1_t6889_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46107_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6889_PropertyInfos[] =
{
	&IEnumerator_1_t6889____Current_PropertyInfo,
	NULL
};
extern Il2CppType ArgInfoType_t2049_0_0_0;
extern void* RuntimeInvoker_ArgInfoType_t2049 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46107_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46107_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6889_il2cpp_TypeInfo/* declaring_type */
	, &ArgInfoType_t2049_0_0_0/* return_type */
	, RuntimeInvoker_ArgInfoType_t2049/* invoker_method */
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
	, &IEnumerator_1_get_Current_m46107_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6889_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46107_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6889_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6889_0_0_0;
extern Il2CppType IEnumerator_1_t6889_1_0_0;
struct IEnumerator_1_t6889;
extern Il2CppGenericClass IEnumerator_1_t6889_GenericClass;
TypeInfo IEnumerator_1_t6889_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6889_MethodInfos/* methods */
	, IEnumerator_1_t6889_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6889_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6889_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6889_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6889_0_0_0/* byval_arg */
	, &IEnumerator_1_t6889_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6889_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_691.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4837_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_691MethodDeclarations.h"

extern TypeInfo ArgInfoType_t2049_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26296_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisArgInfoType_t2049_m35463_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.ArgInfoType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.ArgInfoType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisArgInfoType_t2049_m35463 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26292_MethodInfo;
 void InternalEnumerator_1__ctor_m26292 (InternalEnumerator_1_t4837 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293 (InternalEnumerator_1_t4837 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m26296(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26296_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ArgInfoType_t2049_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26294_MethodInfo;
 void InternalEnumerator_1_Dispose_m26294 (InternalEnumerator_1_t4837 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26295_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26295 (InternalEnumerator_1_t4837 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m26296 (InternalEnumerator_1_t4837 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisArgInfoType_t2049_m35463(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisArgInfoType_t2049_m35463_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4837____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4837, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4837____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4837, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4837_FieldInfos[] =
{
	&InternalEnumerator_1_t4837____array_0_FieldInfo,
	&InternalEnumerator_1_t4837____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4837____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4837_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4837____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4837_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26296_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4837_PropertyInfos[] =
{
	&InternalEnumerator_1_t4837____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4837____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4837_InternalEnumerator_1__ctor_m26292_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26292_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26292_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26292/* method */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4837_InternalEnumerator_1__ctor_m26292_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26292_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293/* method */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26294_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26294_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26294/* method */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26294_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26295_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26295_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26295/* method */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26295_GenericMethod/* genericMethod */

};
extern Il2CppType ArgInfoType_t2049_0_0_0;
extern void* RuntimeInvoker_ArgInfoType_t2049 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26296_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26296_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26296/* method */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* declaring_type */
	, &ArgInfoType_t2049_0_0_0/* return_type */
	, RuntimeInvoker_ArgInfoType_t2049/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26296_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4837_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26292_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293_MethodInfo,
	&InternalEnumerator_1_Dispose_m26294_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26295_MethodInfo,
	&InternalEnumerator_1_get_Current_m26296_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4837_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26293_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26295_MethodInfo,
	&InternalEnumerator_1_Dispose_m26294_MethodInfo,
	&InternalEnumerator_1_get_Current_m26296_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4837_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6889_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4837_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6889_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4837_0_0_0;
extern Il2CppType InternalEnumerator_1_t4837_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4837_GenericClass;
TypeInfo InternalEnumerator_1_t4837_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4837_MethodInfos/* methods */
	, InternalEnumerator_1_t4837_PropertyInfos/* properties */
	, InternalEnumerator_1_t4837_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4837_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4837_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4837_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4837_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4837_1_0_0/* this_arg */
	, InternalEnumerator_1_t4837_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4837_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4837)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8943_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo ICollection_1_get_Count_m46108_MethodInfo;
static PropertyInfo ICollection_1_t8943____Count_PropertyInfo = 
{
	&ICollection_1_t8943_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46108_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46109_MethodInfo;
static PropertyInfo ICollection_1_t8943____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8943_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46109_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8943_PropertyInfos[] =
{
	&ICollection_1_t8943____Count_PropertyInfo,
	&ICollection_1_t8943____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46108_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Count()
MethodInfo ICollection_1_get_Count_m46108_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46108_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46109_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46109_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46109_GenericMethod/* genericMethod */

};
extern Il2CppType ArgInfoType_t2049_0_0_0;
extern Il2CppType ArgInfoType_t2049_0_0_0;
static ParameterInfo ICollection_1_t8943_ICollection_1_Add_m46110_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t2049_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46110_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Add(T)
MethodInfo ICollection_1_Add_m46110_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Byte_t98/* invoker_method */
	, ICollection_1_t8943_ICollection_1_Add_m46110_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46110_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46111_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Clear()
MethodInfo ICollection_1_Clear_m46111_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46111_GenericMethod/* genericMethod */

};
extern Il2CppType ArgInfoType_t2049_0_0_0;
static ParameterInfo ICollection_1_t8943_ICollection_1_Contains_m46112_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t2049_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46112_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Contains(T)
MethodInfo ICollection_1_Contains_m46112_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t8943_ICollection_1_Contains_m46112_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46112_GenericMethod/* genericMethod */

};
extern Il2CppType ArgInfoTypeU5BU5D_t5099_0_0_0;
extern Il2CppType ArgInfoTypeU5BU5D_t5099_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8943_ICollection_1_CopyTo_m46113_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoTypeU5BU5D_t5099_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46113_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46113_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8943_ICollection_1_CopyTo_m46113_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46113_GenericMethod/* genericMethod */

};
extern Il2CppType ArgInfoType_t2049_0_0_0;
static ParameterInfo ICollection_1_t8943_ICollection_1_Remove_m46114_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t2049_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46114_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Remove(T)
MethodInfo ICollection_1_Remove_m46114_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t8943_ICollection_1_Remove_m46114_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46114_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8943_MethodInfos[] =
{
	&ICollection_1_get_Count_m46108_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46109_MethodInfo,
	&ICollection_1_Add_m46110_MethodInfo,
	&ICollection_1_Clear_m46111_MethodInfo,
	&ICollection_1_Contains_m46112_MethodInfo,
	&ICollection_1_CopyTo_m46113_MethodInfo,
	&ICollection_1_Remove_m46114_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8945_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8943_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8945_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8943_0_0_0;
extern Il2CppType ICollection_1_t8943_1_0_0;
struct ICollection_1_t8943;
extern Il2CppGenericClass ICollection_1_t8943_GenericClass;
TypeInfo ICollection_1_t8943_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8943_MethodInfos/* methods */
	, ICollection_1_t8943_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8943_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8943_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8943_0_0_0/* byval_arg */
	, &ICollection_1_t8943_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8943_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.ArgInfoType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern Il2CppType IEnumerator_1_t6889_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46115_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.ArgInfoType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46115_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8945_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6889_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46115_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8945_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46115_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8945_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8945_0_0_0;
extern Il2CppType IEnumerable_1_t8945_1_0_0;
struct IEnumerable_1_t8945;
extern Il2CppGenericClass IEnumerable_1_t8945_GenericClass;
TypeInfo IEnumerable_1_t8945_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8945_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8945_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8945_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8945_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8945_0_0_0/* byval_arg */
	, &IEnumerable_1_t8945_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8945_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8944_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo IList_1_get_Item_m46116_MethodInfo;
extern MethodInfo IList_1_set_Item_m46117_MethodInfo;
static PropertyInfo IList_1_t8944____Item_PropertyInfo = 
{
	&IList_1_t8944_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46116_MethodInfo/* get */
	, &IList_1_set_Item_m46117_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8944_PropertyInfos[] =
{
	&IList_1_t8944____Item_PropertyInfo,
	NULL
};
extern Il2CppType ArgInfoType_t2049_0_0_0;
static ParameterInfo IList_1_t8944_IList_1_IndexOf_m46118_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t2049_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46118_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46118_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8944_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8944_IList_1_IndexOf_m46118_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46118_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ArgInfoType_t2049_0_0_0;
static ParameterInfo IList_1_t8944_IList_1_Insert_m46119_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t2049_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46119_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46119_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8944_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8944_IList_1_Insert_m46119_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46119_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8944_IList_1_RemoveAt_m46120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46120_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46120_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8944_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8944_IList_1_RemoveAt_m46120_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46120_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8944_IList_1_get_Item_m46116_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ArgInfoType_t2049_0_0_0;
extern void* RuntimeInvoker_ArgInfoType_t2049_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46116_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46116_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8944_il2cpp_TypeInfo/* declaring_type */
	, &ArgInfoType_t2049_0_0_0/* return_type */
	, RuntimeInvoker_ArgInfoType_t2049_Int32_t63/* invoker_method */
	, IList_1_t8944_IList_1_get_Item_m46116_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46116_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ArgInfoType_t2049_0_0_0;
static ParameterInfo IList_1_t8944_IList_1_set_Item_m46117_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t2049_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46117_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.ArgInfoType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46117_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8944_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8944_IList_1_set_Item_m46117_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46117_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8944_MethodInfos[] =
{
	&IList_1_IndexOf_m46118_MethodInfo,
	&IList_1_Insert_m46119_MethodInfo,
	&IList_1_RemoveAt_m46120_MethodInfo,
	&IList_1_get_Item_m46116_MethodInfo,
	&IList_1_set_Item_m46117_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8944_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8943_il2cpp_TypeInfo,
	&IEnumerable_1_t8945_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8944_0_0_0;
extern Il2CppType IList_1_t8944_1_0_0;
struct IList_1_t8944;
extern Il2CppGenericClass IList_1_t8944_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8944_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8944_MethodInfos/* methods */
	, IList_1_t8944_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8944_il2cpp_TypeInfo/* element_class */
	, IList_1_t8944_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8944_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8944_0_0_0/* byval_arg */
	, &IList_1_t8944_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8944_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6891_il2cpp_TypeInfo;

// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.Header>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo IEnumerator_1_get_Current_m46121_MethodInfo;
static PropertyInfo IEnumerator_1_t6891____Current_PropertyInfo = 
{
	&IEnumerator_1_t6891_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46121_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6891_PropertyInfos[] =
{
	&IEnumerator_1_t6891____Current_PropertyInfo,
	NULL
};
extern Il2CppType Header_t2060_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46121_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.Header>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46121_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6891_il2cpp_TypeInfo/* declaring_type */
	, &Header_t2060_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46121_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6891_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46121_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6891_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6891_0_0_0;
extern Il2CppType IEnumerator_1_t6891_1_0_0;
struct IEnumerator_1_t6891;
extern Il2CppGenericClass IEnumerator_1_t6891_GenericClass;
TypeInfo IEnumerator_1_t6891_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6891_MethodInfos/* methods */
	, IEnumerator_1_t6891_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6891_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6891_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6891_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6891_0_0_0/* byval_arg */
	, &IEnumerator_1_t6891_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6891_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_692.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4838_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_692MethodDeclarations.h"

extern TypeInfo Header_t2060_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26301_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHeader_t2060_m35474_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.Header>(System.Int32)
#define Array_InternalArray__get_Item_TisHeader_t2060_m35474(__this, p0, method) (Header_t2060 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4838____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4838, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4838____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4838, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4838_FieldInfos[] =
{
	&InternalEnumerator_1_t4838____array_0_FieldInfo,
	&InternalEnumerator_1_t4838____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26298_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4838____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4838_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26298_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4838____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4838_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26301_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4838_PropertyInfos[] =
{
	&InternalEnumerator_1_t4838____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4838____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4838_InternalEnumerator_1__ctor_m26297_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26297_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26297_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4838_InternalEnumerator_1__ctor_m26297_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26297_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26298_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26298_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26298_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26299_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26299_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26299_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26300_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26300_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26300_GenericMethod/* genericMethod */

};
extern Il2CppType Header_t2060_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26301_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.Header>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26301_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* declaring_type */
	, &Header_t2060_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26301_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4838_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26297_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26298_MethodInfo,
	&InternalEnumerator_1_Dispose_m26299_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26300_MethodInfo,
	&InternalEnumerator_1_get_Current_m26301_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26300_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26299_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4838_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26298_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26300_MethodInfo,
	&InternalEnumerator_1_Dispose_m26299_MethodInfo,
	&InternalEnumerator_1_get_Current_m26301_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4838_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6891_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4838_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6891_il2cpp_TypeInfo, 7},
};
extern TypeInfo Header_t2060_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4838_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26301_MethodInfo/* Method Usage */,
	&Header_t2060_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisHeader_t2060_m35474_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4838_0_0_0;
extern Il2CppType InternalEnumerator_1_t4838_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4838_GenericClass;
TypeInfo InternalEnumerator_1_t4838_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4838_MethodInfos/* methods */
	, InternalEnumerator_1_t4838_PropertyInfos/* properties */
	, InternalEnumerator_1_t4838_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4838_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4838_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4838_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4838_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4838_1_0_0/* this_arg */
	, InternalEnumerator_1_t4838_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4838_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4838_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4838)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8946_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo ICollection_1_get_Count_m46122_MethodInfo;
static PropertyInfo ICollection_1_t8946____Count_PropertyInfo = 
{
	&ICollection_1_t8946_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46122_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46123_MethodInfo;
static PropertyInfo ICollection_1_t8946____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8946_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46123_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8946_PropertyInfos[] =
{
	&ICollection_1_t8946____Count_PropertyInfo,
	&ICollection_1_t8946____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46122_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::get_Count()
MethodInfo ICollection_1_get_Count_m46122_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46122_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46123_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46123_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46123_GenericMethod/* genericMethod */

};
extern Il2CppType Header_t2060_0_0_0;
extern Il2CppType Header_t2060_0_0_0;
static ParameterInfo ICollection_1_t8946_ICollection_1_Add_m46124_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Header_t2060_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46124_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Add(T)
MethodInfo ICollection_1_Add_m46124_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8946_ICollection_1_Add_m46124_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46124_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46125_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Clear()
MethodInfo ICollection_1_Clear_m46125_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46125_GenericMethod/* genericMethod */

};
extern Il2CppType Header_t2060_0_0_0;
static ParameterInfo ICollection_1_t8946_ICollection_1_Contains_m46126_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Header_t2060_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46126_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Contains(T)
MethodInfo ICollection_1_Contains_m46126_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8946_ICollection_1_Contains_m46126_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46126_GenericMethod/* genericMethod */

};
extern Il2CppType HeaderU5BU5D_t2063_0_0_0;
extern Il2CppType HeaderU5BU5D_t2063_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8946_ICollection_1_CopyTo_m46127_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HeaderU5BU5D_t2063_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46127_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46127_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8946_ICollection_1_CopyTo_m46127_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46127_GenericMethod/* genericMethod */

};
extern Il2CppType Header_t2060_0_0_0;
static ParameterInfo ICollection_1_t8946_ICollection_1_Remove_m46128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Header_t2060_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46128_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.Header>::Remove(T)
MethodInfo ICollection_1_Remove_m46128_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8946_ICollection_1_Remove_m46128_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46128_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8946_MethodInfos[] =
{
	&ICollection_1_get_Count_m46122_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46123_MethodInfo,
	&ICollection_1_Add_m46124_MethodInfo,
	&ICollection_1_Clear_m46125_MethodInfo,
	&ICollection_1_Contains_m46126_MethodInfo,
	&ICollection_1_CopyTo_m46127_MethodInfo,
	&ICollection_1_Remove_m46128_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8948_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8946_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8948_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8946_0_0_0;
extern Il2CppType ICollection_1_t8946_1_0_0;
struct ICollection_1_t8946;
extern Il2CppGenericClass ICollection_1_t8946_GenericClass;
TypeInfo ICollection_1_t8946_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8946_MethodInfos/* methods */
	, ICollection_1_t8946_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8946_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8946_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8946_0_0_0/* byval_arg */
	, &ICollection_1_t8946_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8946_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.Header>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.Header>
extern Il2CppType IEnumerator_1_t6891_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46129_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.Header>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46129_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8948_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6891_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46129_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8948_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46129_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8948_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8948_0_0_0;
extern Il2CppType IEnumerable_1_t8948_1_0_0;
struct IEnumerable_1_t8948;
extern Il2CppGenericClass IEnumerable_1_t8948_GenericClass;
TypeInfo IEnumerable_1_t8948_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8948_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8948_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8948_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8948_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8948_0_0_0/* byval_arg */
	, &IEnumerable_1_t8948_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8948_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8947_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>
extern MethodInfo IList_1_get_Item_m46130_MethodInfo;
extern MethodInfo IList_1_set_Item_m46131_MethodInfo;
static PropertyInfo IList_1_t8947____Item_PropertyInfo = 
{
	&IList_1_t8947_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46130_MethodInfo/* get */
	, &IList_1_set_Item_m46131_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8947_PropertyInfos[] =
{
	&IList_1_t8947____Item_PropertyInfo,
	NULL
};
extern Il2CppType Header_t2060_0_0_0;
static ParameterInfo IList_1_t8947_IList_1_IndexOf_m46132_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Header_t2060_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46132_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46132_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8947_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8947_IList_1_IndexOf_m46132_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46132_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Header_t2060_0_0_0;
static ParameterInfo IList_1_t8947_IList_1_Insert_m46133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Header_t2060_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46133_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46133_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8947_IList_1_Insert_m46133_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46133_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8947_IList_1_RemoveAt_m46134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46134_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46134_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8947_IList_1_RemoveAt_m46134_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46134_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8947_IList_1_get_Item_m46130_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Header_t2060_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46130_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46130_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8947_il2cpp_TypeInfo/* declaring_type */
	, &Header_t2060_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8947_IList_1_get_Item_m46130_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46130_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType Header_t2060_0_0_0;
static ParameterInfo IList_1_t8947_IList_1_set_Item_m46131_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Header_t2060_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46131_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Messaging.Header>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46131_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8947_IList_1_set_Item_m46131_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46131_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8947_MethodInfos[] =
{
	&IList_1_IndexOf_m46132_MethodInfo,
	&IList_1_Insert_m46133_MethodInfo,
	&IList_1_RemoveAt_m46134_MethodInfo,
	&IList_1_get_Item_m46130_MethodInfo,
	&IList_1_set_Item_m46131_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8947_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8946_il2cpp_TypeInfo,
	&IEnumerable_1_t8948_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8947_0_0_0;
extern Il2CppType IList_1_t8947_1_0_0;
struct IList_1_t8947;
extern Il2CppGenericClass IList_1_t8947_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8947_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8947_MethodInfos/* methods */
	, IList_1_t8947_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8947_il2cpp_TypeInfo/* element_class */
	, IList_1_t8947_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8947_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8947_0_0_0/* byval_arg */
	, &IList_1_t8947_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8947_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6893_il2cpp_TypeInfo;

// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46135_MethodInfo;
static PropertyInfo IEnumerator_1_t6893____Current_PropertyInfo = 
{
	&IEnumerator_1_t6893_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46135_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6893_PropertyInfos[] =
{
	&IEnumerator_1_t6893____Current_PropertyInfo,
	NULL
};
extern Il2CppType ProxyAttribute_t2076_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46135_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46135_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6893_il2cpp_TypeInfo/* declaring_type */
	, &ProxyAttribute_t2076_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46135_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6893_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46135_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6893_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6893_0_0_0;
extern Il2CppType IEnumerator_1_t6893_1_0_0;
struct IEnumerator_1_t6893;
extern Il2CppGenericClass IEnumerator_1_t6893_GenericClass;
TypeInfo IEnumerator_1_t6893_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6893_MethodInfos/* methods */
	, IEnumerator_1_t6893_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6893_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6893_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6893_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6893_0_0_0/* byval_arg */
	, &IEnumerator_1_t6893_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6893_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_693.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4839_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_693MethodDeclarations.h"

extern TypeInfo ProxyAttribute_t2076_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26306_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisProxyAttribute_t2076_m35485_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Proxies.ProxyAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Proxies.ProxyAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisProxyAttribute_t2076_m35485(__this, p0, method) (ProxyAttribute_t2076 *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4839____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4839, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4839____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4839, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4839_FieldInfos[] =
{
	&InternalEnumerator_1_t4839____array_0_FieldInfo,
	&InternalEnumerator_1_t4839____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26303_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4839____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4839_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26303_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4839____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4839_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26306_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4839_PropertyInfos[] =
{
	&InternalEnumerator_1_t4839____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4839____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4839_InternalEnumerator_1__ctor_m26302_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26302_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26302_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4839_InternalEnumerator_1__ctor_m26302_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26302_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26303_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26303_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26303_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26304_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26304_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26304_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26305_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26305_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26305_GenericMethod/* genericMethod */

};
extern Il2CppType ProxyAttribute_t2076_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26306_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26306_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* declaring_type */
	, &ProxyAttribute_t2076_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26306_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4839_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26302_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26303_MethodInfo,
	&InternalEnumerator_1_Dispose_m26304_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26305_MethodInfo,
	&InternalEnumerator_1_get_Current_m26306_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26305_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26304_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4839_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26303_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26305_MethodInfo,
	&InternalEnumerator_1_Dispose_m26304_MethodInfo,
	&InternalEnumerator_1_get_Current_m26306_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4839_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6893_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4839_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6893_il2cpp_TypeInfo, 7},
};
extern TypeInfo ProxyAttribute_t2076_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4839_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26306_MethodInfo/* Method Usage */,
	&ProxyAttribute_t2076_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisProxyAttribute_t2076_m35485_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4839_0_0_0;
extern Il2CppType InternalEnumerator_1_t4839_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4839_GenericClass;
TypeInfo InternalEnumerator_1_t4839_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4839_MethodInfos/* methods */
	, InternalEnumerator_1_t4839_PropertyInfos/* properties */
	, InternalEnumerator_1_t4839_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4839_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4839_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4839_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4839_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4839_1_0_0/* this_arg */
	, InternalEnumerator_1_t4839_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4839_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4839_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4839)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8949_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo ICollection_1_get_Count_m46136_MethodInfo;
static PropertyInfo ICollection_1_t8949____Count_PropertyInfo = 
{
	&ICollection_1_t8949_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46136_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46137_MethodInfo;
static PropertyInfo ICollection_1_t8949____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8949_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46137_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8949_PropertyInfos[] =
{
	&ICollection_1_t8949____Count_PropertyInfo,
	&ICollection_1_t8949____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46136_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46136_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46136_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46137_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46137_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46137_GenericMethod/* genericMethod */

};
extern Il2CppType ProxyAttribute_t2076_0_0_0;
extern Il2CppType ProxyAttribute_t2076_0_0_0;
static ParameterInfo ICollection_1_t8949_ICollection_1_Add_m46138_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProxyAttribute_t2076_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46138_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46138_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8949_ICollection_1_Add_m46138_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46138_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46139_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46139_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46139_GenericMethod/* genericMethod */

};
extern Il2CppType ProxyAttribute_t2076_0_0_0;
static ParameterInfo ICollection_1_t8949_ICollection_1_Contains_m46140_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProxyAttribute_t2076_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46140_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46140_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8949_ICollection_1_Contains_m46140_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46140_GenericMethod/* genericMethod */

};
extern Il2CppType ProxyAttributeU5BU5D_t5100_0_0_0;
extern Il2CppType ProxyAttributeU5BU5D_t5100_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8949_ICollection_1_CopyTo_m46141_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ProxyAttributeU5BU5D_t5100_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46141_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46141_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8949_ICollection_1_CopyTo_m46141_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46141_GenericMethod/* genericMethod */

};
extern Il2CppType ProxyAttribute_t2076_0_0_0;
static ParameterInfo ICollection_1_t8949_ICollection_1_Remove_m46142_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProxyAttribute_t2076_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46142_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46142_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8949_ICollection_1_Remove_m46142_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46142_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8949_MethodInfos[] =
{
	&ICollection_1_get_Count_m46136_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46137_MethodInfo,
	&ICollection_1_Add_m46138_MethodInfo,
	&ICollection_1_Clear_m46139_MethodInfo,
	&ICollection_1_Contains_m46140_MethodInfo,
	&ICollection_1_CopyTo_m46141_MethodInfo,
	&ICollection_1_Remove_m46142_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8951_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8949_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8951_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8949_0_0_0;
extern Il2CppType ICollection_1_t8949_1_0_0;
struct ICollection_1_t8949;
extern Il2CppGenericClass ICollection_1_t8949_GenericClass;
TypeInfo ICollection_1_t8949_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8949_MethodInfos/* methods */
	, ICollection_1_t8949_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8949_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8949_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8949_0_0_0/* byval_arg */
	, &ICollection_1_t8949_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8949_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern Il2CppType IEnumerator_1_t6893_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46143_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46143_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8951_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6893_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46143_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8951_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46143_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8951_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8951_0_0_0;
extern Il2CppType IEnumerable_1_t8951_1_0_0;
struct IEnumerable_1_t8951;
extern Il2CppGenericClass IEnumerable_1_t8951_GenericClass;
TypeInfo IEnumerable_1_t8951_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8951_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8951_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8951_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8951_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8951_0_0_0/* byval_arg */
	, &IEnumerable_1_t8951_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8951_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8950_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>
extern MethodInfo IList_1_get_Item_m46144_MethodInfo;
extern MethodInfo IList_1_set_Item_m46145_MethodInfo;
static PropertyInfo IList_1_t8950____Item_PropertyInfo = 
{
	&IList_1_t8950_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46144_MethodInfo/* get */
	, &IList_1_set_Item_m46145_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8950_PropertyInfos[] =
{
	&IList_1_t8950____Item_PropertyInfo,
	NULL
};
extern Il2CppType ProxyAttribute_t2076_0_0_0;
static ParameterInfo IList_1_t8950_IList_1_IndexOf_m46146_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProxyAttribute_t2076_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46146_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46146_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8950_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8950_IList_1_IndexOf_m46146_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46146_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ProxyAttribute_t2076_0_0_0;
static ParameterInfo IList_1_t8950_IList_1_Insert_m46147_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ProxyAttribute_t2076_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46147_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46147_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8950_IList_1_Insert_m46147_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46147_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8950_IList_1_RemoveAt_m46148_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46148_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46148_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8950_IList_1_RemoveAt_m46148_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46148_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8950_IList_1_get_Item_m46144_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ProxyAttribute_t2076_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46144_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46144_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8950_il2cpp_TypeInfo/* declaring_type */
	, &ProxyAttribute_t2076_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8950_IList_1_get_Item_m46144_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46144_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ProxyAttribute_t2076_0_0_0;
static ParameterInfo IList_1_t8950_IList_1_set_Item_m46145_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ProxyAttribute_t2076_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46145_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Proxies.ProxyAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46145_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8950_IList_1_set_Item_m46145_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46145_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8950_MethodInfos[] =
{
	&IList_1_IndexOf_m46146_MethodInfo,
	&IList_1_Insert_m46147_MethodInfo,
	&IList_1_RemoveAt_m46148_MethodInfo,
	&IList_1_get_Item_m46144_MethodInfo,
	&IList_1_set_Item_m46145_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8950_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8949_il2cpp_TypeInfo,
	&IEnumerable_1_t8951_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8950_0_0_0;
extern Il2CppType IList_1_t8950_1_0_0;
struct IList_1_t8950;
extern Il2CppGenericClass IList_1_t8950_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8950_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8950_MethodInfos/* methods */
	, IList_1_t8950_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8950_il2cpp_TypeInfo/* element_class */
	, IList_1_t8950_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8950_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8950_0_0_0/* byval_arg */
	, &IList_1_t8950_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8950_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6895_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo IEnumerator_1_get_Current_m46149_MethodInfo;
static PropertyInfo IEnumerator_1_t6895____Current_PropertyInfo = 
{
	&IEnumerator_1_t6895_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46149_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6895_PropertyInfos[] =
{
	&IEnumerator_1_t6895____Current_PropertyInfo,
	NULL
};
extern Il2CppType ITrackingHandler_t2678_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46149_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46149_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6895_il2cpp_TypeInfo/* declaring_type */
	, &ITrackingHandler_t2678_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46149_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6895_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46149_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6895_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6895_0_0_0;
extern Il2CppType IEnumerator_1_t6895_1_0_0;
struct IEnumerator_1_t6895;
extern Il2CppGenericClass IEnumerator_1_t6895_GenericClass;
TypeInfo IEnumerator_1_t6895_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6895_MethodInfos/* methods */
	, IEnumerator_1_t6895_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6895_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6895_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6895_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6895_0_0_0/* byval_arg */
	, &IEnumerator_1_t6895_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6895_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_694.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4840_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_694MethodDeclarations.h"

extern TypeInfo ITrackingHandler_t2678_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26311_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisITrackingHandler_t2678_m35496_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Services.ITrackingHandler>(System.Int32)
#define Array_InternalArray__get_Item_TisITrackingHandler_t2678_m35496(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4840____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4840, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4840____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4840, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4840_FieldInfos[] =
{
	&InternalEnumerator_1_t4840____array_0_FieldInfo,
	&InternalEnumerator_1_t4840____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26308_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4840____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4840_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26308_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4840____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4840_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26311_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4840_PropertyInfos[] =
{
	&InternalEnumerator_1_t4840____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4840____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4840_InternalEnumerator_1__ctor_m26307_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26307_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26307_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4840_InternalEnumerator_1__ctor_m26307_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26307_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26308_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26308_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26308_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26309_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26309_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26309_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26310_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26310_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26310_GenericMethod/* genericMethod */

};
extern Il2CppType ITrackingHandler_t2678_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26311_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26311_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* declaring_type */
	, &ITrackingHandler_t2678_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26311_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4840_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26307_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26308_MethodInfo,
	&InternalEnumerator_1_Dispose_m26309_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26310_MethodInfo,
	&InternalEnumerator_1_get_Current_m26311_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26310_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26309_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4840_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26308_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26310_MethodInfo,
	&InternalEnumerator_1_Dispose_m26309_MethodInfo,
	&InternalEnumerator_1_get_Current_m26311_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4840_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6895_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4840_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6895_il2cpp_TypeInfo, 7},
};
extern TypeInfo ITrackingHandler_t2678_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4840_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26311_MethodInfo/* Method Usage */,
	&ITrackingHandler_t2678_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisITrackingHandler_t2678_m35496_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4840_0_0_0;
extern Il2CppType InternalEnumerator_1_t4840_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4840_GenericClass;
TypeInfo InternalEnumerator_1_t4840_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4840_MethodInfos/* methods */
	, InternalEnumerator_1_t4840_PropertyInfos/* properties */
	, InternalEnumerator_1_t4840_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4840_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4840_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4840_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4840_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4840_1_0_0/* this_arg */
	, InternalEnumerator_1_t4840_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4840_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4840_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4840)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8952_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo ICollection_1_get_Count_m46150_MethodInfo;
static PropertyInfo ICollection_1_t8952____Count_PropertyInfo = 
{
	&ICollection_1_t8952_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46150_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46151_MethodInfo;
static PropertyInfo ICollection_1_t8952____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8952_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46151_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8952_PropertyInfos[] =
{
	&ICollection_1_t8952____Count_PropertyInfo,
	&ICollection_1_t8952____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46150_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Count()
MethodInfo ICollection_1_get_Count_m46150_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46150_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46151_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46151_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46151_GenericMethod/* genericMethod */

};
extern Il2CppType ITrackingHandler_t2678_0_0_0;
extern Il2CppType ITrackingHandler_t2678_0_0_0;
static ParameterInfo ICollection_1_t8952_ICollection_1_Add_m46152_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITrackingHandler_t2678_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46152_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Add(T)
MethodInfo ICollection_1_Add_m46152_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8952_ICollection_1_Add_m46152_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46152_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46153_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Clear()
MethodInfo ICollection_1_Clear_m46153_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46153_GenericMethod/* genericMethod */

};
extern Il2CppType ITrackingHandler_t2678_0_0_0;
static ParameterInfo ICollection_1_t8952_ICollection_1_Contains_m46154_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITrackingHandler_t2678_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46154_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Contains(T)
MethodInfo ICollection_1_Contains_m46154_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8952_ICollection_1_Contains_m46154_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46154_GenericMethod/* genericMethod */

};
extern Il2CppType ITrackingHandlerU5BU5D_t2679_0_0_0;
extern Il2CppType ITrackingHandlerU5BU5D_t2679_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8952_ICollection_1_CopyTo_m46155_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ITrackingHandlerU5BU5D_t2679_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46155_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46155_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8952_ICollection_1_CopyTo_m46155_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46155_GenericMethod/* genericMethod */

};
extern Il2CppType ITrackingHandler_t2678_0_0_0;
static ParameterInfo ICollection_1_t8952_ICollection_1_Remove_m46156_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITrackingHandler_t2678_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46156_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Services.ITrackingHandler>::Remove(T)
MethodInfo ICollection_1_Remove_m46156_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8952_ICollection_1_Remove_m46156_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46156_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8952_MethodInfos[] =
{
	&ICollection_1_get_Count_m46150_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46151_MethodInfo,
	&ICollection_1_Add_m46152_MethodInfo,
	&ICollection_1_Clear_m46153_MethodInfo,
	&ICollection_1_Contains_m46154_MethodInfo,
	&ICollection_1_CopyTo_m46155_MethodInfo,
	&ICollection_1_Remove_m46156_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8954_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8952_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8954_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8952_0_0_0;
extern Il2CppType ICollection_1_t8952_1_0_0;
struct ICollection_1_t8952;
extern Il2CppGenericClass ICollection_1_t8952_GenericClass;
TypeInfo ICollection_1_t8952_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8952_MethodInfos/* methods */
	, ICollection_1_t8952_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8952_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8952_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8952_0_0_0/* byval_arg */
	, &ICollection_1_t8952_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8952_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Services.ITrackingHandler>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern Il2CppType IEnumerator_1_t6895_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46157_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Services.ITrackingHandler>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46157_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8954_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6895_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46157_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8954_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46157_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8954_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8954_0_0_0;
extern Il2CppType IEnumerable_1_t8954_1_0_0;
struct IEnumerable_1_t8954;
extern Il2CppGenericClass IEnumerable_1_t8954_GenericClass;
TypeInfo IEnumerable_1_t8954_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8954_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8954_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8954_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8954_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8954_0_0_0/* byval_arg */
	, &IEnumerable_1_t8954_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8954_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8953_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>
extern MethodInfo IList_1_get_Item_m46158_MethodInfo;
extern MethodInfo IList_1_set_Item_m46159_MethodInfo;
static PropertyInfo IList_1_t8953____Item_PropertyInfo = 
{
	&IList_1_t8953_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46158_MethodInfo/* get */
	, &IList_1_set_Item_m46159_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8953_PropertyInfos[] =
{
	&IList_1_t8953____Item_PropertyInfo,
	NULL
};
extern Il2CppType ITrackingHandler_t2678_0_0_0;
static ParameterInfo IList_1_t8953_IList_1_IndexOf_m46160_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ITrackingHandler_t2678_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46160_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46160_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8953_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8953_IList_1_IndexOf_m46160_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46160_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ITrackingHandler_t2678_0_0_0;
static ParameterInfo IList_1_t8953_IList_1_Insert_m46161_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ITrackingHandler_t2678_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46161_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46161_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8953_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8953_IList_1_Insert_m46161_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46161_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8953_IList_1_RemoveAt_m46162_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46162_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46162_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8953_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8953_IList_1_RemoveAt_m46162_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46162_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8953_IList_1_get_Item_m46158_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ITrackingHandler_t2678_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46158_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46158_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8953_il2cpp_TypeInfo/* declaring_type */
	, &ITrackingHandler_t2678_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8953_IList_1_get_Item_m46158_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46158_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ITrackingHandler_t2678_0_0_0;
static ParameterInfo IList_1_t8953_IList_1_set_Item_m46159_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ITrackingHandler_t2678_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46159_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Services.ITrackingHandler>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46159_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8953_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8953_IList_1_set_Item_m46159_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46159_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8953_MethodInfos[] =
{
	&IList_1_IndexOf_m46160_MethodInfo,
	&IList_1_Insert_m46161_MethodInfo,
	&IList_1_RemoveAt_m46162_MethodInfo,
	&IList_1_get_Item_m46158_MethodInfo,
	&IList_1_set_Item_m46159_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8953_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8952_il2cpp_TypeInfo,
	&IEnumerable_1_t8954_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8953_0_0_0;
extern Il2CppType IList_1_t8953_1_0_0;
struct IList_1_t8953;
extern Il2CppGenericClass IList_1_t8953_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8953_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8953_MethodInfos/* methods */
	, IList_1_t8953_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8953_il2cpp_TypeInfo/* element_class */
	, IList_1_t8953_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8953_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8953_0_0_0/* byval_arg */
	, &IList_1_t8953_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8953_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6897_il2cpp_TypeInfo;

// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo IEnumerator_1_get_Current_m46163_MethodInfo;
static PropertyInfo IEnumerator_1_t6897____Current_PropertyInfo = 
{
	&IEnumerator_1_t6897_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46163_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6897_PropertyInfos[] =
{
	&IEnumerator_1_t6897____Current_PropertyInfo,
	NULL
};
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
extern void* RuntimeInvoker_WellKnownObjectMode_t2100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46163_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46163_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6897_il2cpp_TypeInfo/* declaring_type */
	, &WellKnownObjectMode_t2100_0_0_0/* return_type */
	, RuntimeInvoker_WellKnownObjectMode_t2100/* invoker_method */
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
	, &IEnumerator_1_get_Current_m46163_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6897_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46163_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6897_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6897_0_0_0;
extern Il2CppType IEnumerator_1_t6897_1_0_0;
struct IEnumerator_1_t6897;
extern Il2CppGenericClass IEnumerator_1_t6897_GenericClass;
TypeInfo IEnumerator_1_t6897_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6897_MethodInfos/* methods */
	, IEnumerator_1_t6897_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6897_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6897_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6897_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6897_0_0_0/* byval_arg */
	, &IEnumerator_1_t6897_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6897_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_695.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4841_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_695MethodDeclarations.h"

extern TypeInfo WellKnownObjectMode_t2100_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26316_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWellKnownObjectMode_t2100_m35507_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.WellKnownObjectMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.WellKnownObjectMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWellKnownObjectMode_t2100_m35507 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26312_MethodInfo;
 void InternalEnumerator_1__ctor_m26312 (InternalEnumerator_1_t4841 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313 (InternalEnumerator_1_t4841 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26316(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26316_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&WellKnownObjectMode_t2100_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26314_MethodInfo;
 void InternalEnumerator_1_Dispose_m26314 (InternalEnumerator_1_t4841 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26315_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26315 (InternalEnumerator_1_t4841 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26316 (InternalEnumerator_1_t4841 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWellKnownObjectMode_t2100_m35507(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWellKnownObjectMode_t2100_m35507_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4841____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4841, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4841____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4841, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4841_FieldInfos[] =
{
	&InternalEnumerator_1_t4841____array_0_FieldInfo,
	&InternalEnumerator_1_t4841____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4841____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4841_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4841____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4841_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26316_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4841_PropertyInfos[] =
{
	&InternalEnumerator_1_t4841____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4841____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4841_InternalEnumerator_1__ctor_m26312_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26312_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26312_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26312/* method */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4841_InternalEnumerator_1__ctor_m26312_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26312_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313/* method */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26314_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26314_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26314/* method */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26314_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26315_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26315_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26315/* method */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26315_GenericMethod/* genericMethod */

};
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
extern void* RuntimeInvoker_WellKnownObjectMode_t2100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26316_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.WellKnownObjectMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26316_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26316/* method */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* declaring_type */
	, &WellKnownObjectMode_t2100_0_0_0/* return_type */
	, RuntimeInvoker_WellKnownObjectMode_t2100/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26316_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4841_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26312_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313_MethodInfo,
	&InternalEnumerator_1_Dispose_m26314_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26315_MethodInfo,
	&InternalEnumerator_1_get_Current_m26316_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4841_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26313_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26315_MethodInfo,
	&InternalEnumerator_1_Dispose_m26314_MethodInfo,
	&InternalEnumerator_1_get_Current_m26316_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4841_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6897_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4841_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6897_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4841_0_0_0;
extern Il2CppType InternalEnumerator_1_t4841_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4841_GenericClass;
TypeInfo InternalEnumerator_1_t4841_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4841_MethodInfos/* methods */
	, InternalEnumerator_1_t4841_PropertyInfos/* properties */
	, InternalEnumerator_1_t4841_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4841_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4841_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4841_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4841_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4841_1_0_0/* this_arg */
	, InternalEnumerator_1_t4841_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4841_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4841)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8955_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo ICollection_1_get_Count_m46164_MethodInfo;
static PropertyInfo ICollection_1_t8955____Count_PropertyInfo = 
{
	&ICollection_1_t8955_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46164_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46165_MethodInfo;
static PropertyInfo ICollection_1_t8955____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8955_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46165_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8955_PropertyInfos[] =
{
	&ICollection_1_t8955____Count_PropertyInfo,
	&ICollection_1_t8955____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46164_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::get_Count()
MethodInfo ICollection_1_get_Count_m46164_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46164_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46165_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46165_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46165_GenericMethod/* genericMethod */

};
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
static ParameterInfo ICollection_1_t8955_ICollection_1_Add_m46166_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WellKnownObjectMode_t2100_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46166_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::Add(T)
MethodInfo ICollection_1_Add_m46166_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8955_ICollection_1_Add_m46166_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46166_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46167_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::Clear()
MethodInfo ICollection_1_Clear_m46167_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46167_GenericMethod/* genericMethod */

};
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
static ParameterInfo ICollection_1_t8955_ICollection_1_Contains_m46168_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WellKnownObjectMode_t2100_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46168_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::Contains(T)
MethodInfo ICollection_1_Contains_m46168_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8955_ICollection_1_Contains_m46168_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46168_GenericMethod/* genericMethod */

};
extern Il2CppType WellKnownObjectModeU5BU5D_t5101_0_0_0;
extern Il2CppType WellKnownObjectModeU5BU5D_t5101_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8955_ICollection_1_CopyTo_m46169_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WellKnownObjectModeU5BU5D_t5101_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46169_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46169_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8955_ICollection_1_CopyTo_m46169_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46169_GenericMethod/* genericMethod */

};
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
static ParameterInfo ICollection_1_t8955_ICollection_1_Remove_m46170_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WellKnownObjectMode_t2100_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46170_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.WellKnownObjectMode>::Remove(T)
MethodInfo ICollection_1_Remove_m46170_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8955_ICollection_1_Remove_m46170_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46170_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8955_MethodInfos[] =
{
	&ICollection_1_get_Count_m46164_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46165_MethodInfo,
	&ICollection_1_Add_m46166_MethodInfo,
	&ICollection_1_Clear_m46167_MethodInfo,
	&ICollection_1_Contains_m46168_MethodInfo,
	&ICollection_1_CopyTo_m46169_MethodInfo,
	&ICollection_1_Remove_m46170_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8957_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8955_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8957_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8955_0_0_0;
extern Il2CppType ICollection_1_t8955_1_0_0;
struct ICollection_1_t8955;
extern Il2CppGenericClass ICollection_1_t8955_GenericClass;
TypeInfo ICollection_1_t8955_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8955_MethodInfos/* methods */
	, ICollection_1_t8955_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8955_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8955_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8955_0_0_0/* byval_arg */
	, &ICollection_1_t8955_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8955_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.WellKnownObjectMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.WellKnownObjectMode>
extern Il2CppType IEnumerator_1_t6897_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46171_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.WellKnownObjectMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46171_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8957_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6897_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46171_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8957_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46171_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8957_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8957_0_0_0;
extern Il2CppType IEnumerable_1_t8957_1_0_0;
struct IEnumerable_1_t8957;
extern Il2CppGenericClass IEnumerable_1_t8957_GenericClass;
TypeInfo IEnumerable_1_t8957_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8957_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8957_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8957_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8957_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8957_0_0_0/* byval_arg */
	, &IEnumerable_1_t8957_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8957_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8956_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>
extern MethodInfo IList_1_get_Item_m46172_MethodInfo;
extern MethodInfo IList_1_set_Item_m46173_MethodInfo;
static PropertyInfo IList_1_t8956____Item_PropertyInfo = 
{
	&IList_1_t8956_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46172_MethodInfo/* get */
	, &IList_1_set_Item_m46173_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8956_PropertyInfos[] =
{
	&IList_1_t8956____Item_PropertyInfo,
	NULL
};
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
static ParameterInfo IList_1_t8956_IList_1_IndexOf_m46174_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WellKnownObjectMode_t2100_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46174_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46174_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8956_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8956_IList_1_IndexOf_m46174_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46174_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
static ParameterInfo IList_1_t8956_IList_1_Insert_m46175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WellKnownObjectMode_t2100_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46175_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46175_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8956_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8956_IList_1_Insert_m46175_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46175_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8956_IList_1_RemoveAt_m46176_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46176_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46176_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8956_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8956_IList_1_RemoveAt_m46176_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46176_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8956_IList_1_get_Item_m46172_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
extern void* RuntimeInvoker_WellKnownObjectMode_t2100_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46172_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46172_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8956_il2cpp_TypeInfo/* declaring_type */
	, &WellKnownObjectMode_t2100_0_0_0/* return_type */
	, RuntimeInvoker_WellKnownObjectMode_t2100_Int32_t63/* invoker_method */
	, IList_1_t8956_IList_1_get_Item_m46172_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46172_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType WellKnownObjectMode_t2100_0_0_0;
static ParameterInfo IList_1_t8956_IList_1_set_Item_m46173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WellKnownObjectMode_t2100_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46173_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.WellKnownObjectMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46173_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8956_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8956_IList_1_set_Item_m46173_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46173_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8956_MethodInfos[] =
{
	&IList_1_IndexOf_m46174_MethodInfo,
	&IList_1_Insert_m46175_MethodInfo,
	&IList_1_RemoveAt_m46176_MethodInfo,
	&IList_1_get_Item_m46172_MethodInfo,
	&IList_1_set_Item_m46173_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8956_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8955_il2cpp_TypeInfo,
	&IEnumerable_1_t8957_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8956_0_0_0;
extern Il2CppType IList_1_t8956_1_0_0;
struct IList_1_t8956;
extern Il2CppGenericClass IList_1_t8956_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8956_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8956_MethodInfos/* methods */
	, IList_1_t8956_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8956_il2cpp_TypeInfo/* element_class */
	, IList_1_t8956_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8956_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8956_0_0_0/* byval_arg */
	, &IList_1_t8956_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8956_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6899_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo IEnumerator_1_get_Current_m46177_MethodInfo;
static PropertyInfo IEnumerator_1_t6899____Current_PropertyInfo = 
{
	&IEnumerator_1_t6899_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46177_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6899_PropertyInfos[] =
{
	&IEnumerator_1_t6899____Current_PropertyInfo,
	NULL
};
extern Il2CppType BinaryElement_t2102_0_0_0;
extern void* RuntimeInvoker_BinaryElement_t2102 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46177_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46177_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6899_il2cpp_TypeInfo/* declaring_type */
	, &BinaryElement_t2102_0_0_0/* return_type */
	, RuntimeInvoker_BinaryElement_t2102/* invoker_method */
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
	, &IEnumerator_1_get_Current_m46177_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6899_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46177_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6899_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6899_0_0_0;
extern Il2CppType IEnumerator_1_t6899_1_0_0;
struct IEnumerator_1_t6899;
extern Il2CppGenericClass IEnumerator_1_t6899_GenericClass;
TypeInfo IEnumerator_1_t6899_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6899_MethodInfos/* methods */
	, IEnumerator_1_t6899_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6899_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6899_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6899_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6899_0_0_0/* byval_arg */
	, &IEnumerator_1_t6899_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6899_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_696.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4842_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_696MethodDeclarations.h"

extern TypeInfo BinaryElement_t2102_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26321_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBinaryElement_t2102_m35518_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.BinaryElement>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.BinaryElement>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisBinaryElement_t2102_m35518 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26317_MethodInfo;
 void InternalEnumerator_1__ctor_m26317 (InternalEnumerator_1_t4842 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318 (InternalEnumerator_1_t4842 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m26321(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26321_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&BinaryElement_t2102_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26319_MethodInfo;
 void InternalEnumerator_1_Dispose_m26319 (InternalEnumerator_1_t4842 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26320_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26320 (InternalEnumerator_1_t4842 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m26321 (InternalEnumerator_1_t4842 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisBinaryElement_t2102_m35518(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisBinaryElement_t2102_m35518_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4842____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4842, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4842____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4842, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4842_FieldInfos[] =
{
	&InternalEnumerator_1_t4842____array_0_FieldInfo,
	&InternalEnumerator_1_t4842____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4842____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4842_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4842____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4842_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26321_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4842_PropertyInfos[] =
{
	&InternalEnumerator_1_t4842____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4842____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4842_InternalEnumerator_1__ctor_m26317_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26317_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26317_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26317/* method */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4842_InternalEnumerator_1__ctor_m26317_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26317_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318/* method */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26319_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26319_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26319/* method */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26319_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26320_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26320_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26320/* method */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26320_GenericMethod/* genericMethod */

};
extern Il2CppType BinaryElement_t2102_0_0_0;
extern void* RuntimeInvoker_BinaryElement_t2102 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26321_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26321_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26321/* method */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* declaring_type */
	, &BinaryElement_t2102_0_0_0/* return_type */
	, RuntimeInvoker_BinaryElement_t2102/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26321_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4842_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26317_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318_MethodInfo,
	&InternalEnumerator_1_Dispose_m26319_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26320_MethodInfo,
	&InternalEnumerator_1_get_Current_m26321_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4842_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26318_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26320_MethodInfo,
	&InternalEnumerator_1_Dispose_m26319_MethodInfo,
	&InternalEnumerator_1_get_Current_m26321_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4842_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6899_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4842_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6899_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4842_0_0_0;
extern Il2CppType InternalEnumerator_1_t4842_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4842_GenericClass;
TypeInfo InternalEnumerator_1_t4842_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4842_MethodInfos/* methods */
	, InternalEnumerator_1_t4842_PropertyInfos/* properties */
	, InternalEnumerator_1_t4842_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4842_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4842_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4842_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4842_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4842_1_0_0/* this_arg */
	, InternalEnumerator_1_t4842_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4842_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4842)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8958_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo ICollection_1_get_Count_m46178_MethodInfo;
static PropertyInfo ICollection_1_t8958____Count_PropertyInfo = 
{
	&ICollection_1_t8958_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46178_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46179_MethodInfo;
static PropertyInfo ICollection_1_t8958____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8958_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46179_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8958_PropertyInfos[] =
{
	&ICollection_1_t8958____Count_PropertyInfo,
	&ICollection_1_t8958____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46178_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_Count()
MethodInfo ICollection_1_get_Count_m46178_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46178_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46179_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46179_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46179_GenericMethod/* genericMethod */

};
extern Il2CppType BinaryElement_t2102_0_0_0;
extern Il2CppType BinaryElement_t2102_0_0_0;
static ParameterInfo ICollection_1_t8958_ICollection_1_Add_m46180_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BinaryElement_t2102_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46180_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Add(T)
MethodInfo ICollection_1_Add_m46180_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Byte_t98/* invoker_method */
	, ICollection_1_t8958_ICollection_1_Add_m46180_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46180_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46181_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Clear()
MethodInfo ICollection_1_Clear_m46181_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46181_GenericMethod/* genericMethod */

};
extern Il2CppType BinaryElement_t2102_0_0_0;
static ParameterInfo ICollection_1_t8958_ICollection_1_Contains_m46182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BinaryElement_t2102_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46182_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Contains(T)
MethodInfo ICollection_1_Contains_m46182_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t8958_ICollection_1_Contains_m46182_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46182_GenericMethod/* genericMethod */

};
extern Il2CppType BinaryElementU5BU5D_t5102_0_0_0;
extern Il2CppType BinaryElementU5BU5D_t5102_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8958_ICollection_1_CopyTo_m46183_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BinaryElementU5BU5D_t5102_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46183_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46183_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8958_ICollection_1_CopyTo_m46183_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46183_GenericMethod/* genericMethod */

};
extern Il2CppType BinaryElement_t2102_0_0_0;
static ParameterInfo ICollection_1_t8958_ICollection_1_Remove_m46184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BinaryElement_t2102_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46184_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Remove(T)
MethodInfo ICollection_1_Remove_m46184_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t8958_ICollection_1_Remove_m46184_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46184_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8958_MethodInfos[] =
{
	&ICollection_1_get_Count_m46178_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46179_MethodInfo,
	&ICollection_1_Add_m46180_MethodInfo,
	&ICollection_1_Clear_m46181_MethodInfo,
	&ICollection_1_Contains_m46182_MethodInfo,
	&ICollection_1_CopyTo_m46183_MethodInfo,
	&ICollection_1_Remove_m46184_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8960_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8958_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8960_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8958_0_0_0;
extern Il2CppType ICollection_1_t8958_1_0_0;
struct ICollection_1_t8958;
extern Il2CppGenericClass ICollection_1_t8958_GenericClass;
TypeInfo ICollection_1_t8958_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8958_MethodInfos/* methods */
	, ICollection_1_t8958_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8958_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8958_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8958_0_0_0/* byval_arg */
	, &ICollection_1_t8958_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8958_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern Il2CppType IEnumerator_1_t6899_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46185_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46185_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8960_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6899_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46185_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8960_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46185_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8960_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8960_0_0_0;
extern Il2CppType IEnumerable_1_t8960_1_0_0;
struct IEnumerable_1_t8960;
extern Il2CppGenericClass IEnumerable_1_t8960_GenericClass;
TypeInfo IEnumerable_1_t8960_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8960_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8960_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8960_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8960_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8960_0_0_0/* byval_arg */
	, &IEnumerable_1_t8960_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8960_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8959_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>
extern MethodInfo IList_1_get_Item_m46186_MethodInfo;
extern MethodInfo IList_1_set_Item_m46187_MethodInfo;
static PropertyInfo IList_1_t8959____Item_PropertyInfo = 
{
	&IList_1_t8959_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46186_MethodInfo/* get */
	, &IList_1_set_Item_m46187_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8959_PropertyInfos[] =
{
	&IList_1_t8959____Item_PropertyInfo,
	NULL
};
extern Il2CppType BinaryElement_t2102_0_0_0;
static ParameterInfo IList_1_t8959_IList_1_IndexOf_m46188_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BinaryElement_t2102_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46188_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46188_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8959_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8959_IList_1_IndexOf_m46188_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46188_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType BinaryElement_t2102_0_0_0;
static ParameterInfo IList_1_t8959_IList_1_Insert_m46189_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BinaryElement_t2102_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46189_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46189_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8959_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8959_IList_1_Insert_m46189_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46189_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8959_IList_1_RemoveAt_m46190_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46190_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46190_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8959_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8959_IList_1_RemoveAt_m46190_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46190_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8959_IList_1_get_Item_m46186_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType BinaryElement_t2102_0_0_0;
extern void* RuntimeInvoker_BinaryElement_t2102_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46186_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46186_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8959_il2cpp_TypeInfo/* declaring_type */
	, &BinaryElement_t2102_0_0_0/* return_type */
	, RuntimeInvoker_BinaryElement_t2102_Int32_t63/* invoker_method */
	, IList_1_t8959_IList_1_get_Item_m46186_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46186_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType BinaryElement_t2102_0_0_0;
static ParameterInfo IList_1_t8959_IList_1_set_Item_m46187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BinaryElement_t2102_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46187_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.BinaryElement>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46187_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8959_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8959_IList_1_set_Item_m46187_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46187_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8959_MethodInfos[] =
{
	&IList_1_IndexOf_m46188_MethodInfo,
	&IList_1_Insert_m46189_MethodInfo,
	&IList_1_RemoveAt_m46190_MethodInfo,
	&IList_1_get_Item_m46186_MethodInfo,
	&IList_1_set_Item_m46187_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8959_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8958_il2cpp_TypeInfo,
	&IEnumerable_1_t8960_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8959_0_0_0;
extern Il2CppType IList_1_t8959_1_0_0;
struct IList_1_t8959;
extern Il2CppGenericClass IList_1_t8959_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8959_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8959_MethodInfos/* methods */
	, IList_1_t8959_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8959_il2cpp_TypeInfo/* element_class */
	, IList_1_t8959_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8959_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8959_0_0_0/* byval_arg */
	, &IList_1_t8959_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8959_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6901_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo IEnumerator_1_get_Current_m46191_MethodInfo;
static PropertyInfo IEnumerator_1_t6901____Current_PropertyInfo = 
{
	&IEnumerator_1_t6901_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46191_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6901_PropertyInfos[] =
{
	&IEnumerator_1_t6901____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeTag_t2103_0_0_0;
extern void* RuntimeInvoker_TypeTag_t2103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46191_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46191_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6901_il2cpp_TypeInfo/* declaring_type */
	, &TypeTag_t2103_0_0_0/* return_type */
	, RuntimeInvoker_TypeTag_t2103/* invoker_method */
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
	, &IEnumerator_1_get_Current_m46191_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6901_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46191_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6901_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6901_0_0_0;
extern Il2CppType IEnumerator_1_t6901_1_0_0;
struct IEnumerator_1_t6901;
extern Il2CppGenericClass IEnumerator_1_t6901_GenericClass;
TypeInfo IEnumerator_1_t6901_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6901_MethodInfos/* methods */
	, IEnumerator_1_t6901_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6901_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6901_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6901_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6901_0_0_0/* byval_arg */
	, &IEnumerator_1_t6901_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6901_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_697.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4843_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_697MethodDeclarations.h"

extern TypeInfo TypeTag_t2103_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26326_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeTag_t2103_m35529_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisTypeTag_t2103_m35529 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26322_MethodInfo;
 void InternalEnumerator_1__ctor_m26322 (InternalEnumerator_1_t4843 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323 (InternalEnumerator_1_t4843 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m26326(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26326_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeTag_t2103_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26324_MethodInfo;
 void InternalEnumerator_1_Dispose_m26324 (InternalEnumerator_1_t4843 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26325_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26325 (InternalEnumerator_1_t4843 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m26326 (InternalEnumerator_1_t4843 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisTypeTag_t2103_m35529(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeTag_t2103_m35529_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4843____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4843, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4843____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4843, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4843_FieldInfos[] =
{
	&InternalEnumerator_1_t4843____array_0_FieldInfo,
	&InternalEnumerator_1_t4843____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4843____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4843_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4843____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4843_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26326_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4843_PropertyInfos[] =
{
	&InternalEnumerator_1_t4843____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4843____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4843_InternalEnumerator_1__ctor_m26322_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26322_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26322_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26322/* method */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4843_InternalEnumerator_1__ctor_m26322_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26322_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323/* method */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26324_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26324_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26324/* method */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26324_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26325_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26325_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26325/* method */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26325_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTag_t2103_0_0_0;
extern void* RuntimeInvoker_TypeTag_t2103 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26326_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26326_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26326/* method */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* declaring_type */
	, &TypeTag_t2103_0_0_0/* return_type */
	, RuntimeInvoker_TypeTag_t2103/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26326_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4843_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26322_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323_MethodInfo,
	&InternalEnumerator_1_Dispose_m26324_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26325_MethodInfo,
	&InternalEnumerator_1_get_Current_m26326_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4843_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26323_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26325_MethodInfo,
	&InternalEnumerator_1_Dispose_m26324_MethodInfo,
	&InternalEnumerator_1_get_Current_m26326_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4843_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6901_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4843_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6901_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4843_0_0_0;
extern Il2CppType InternalEnumerator_1_t4843_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4843_GenericClass;
TypeInfo InternalEnumerator_1_t4843_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4843_MethodInfos/* methods */
	, InternalEnumerator_1_t4843_PropertyInfos/* properties */
	, InternalEnumerator_1_t4843_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4843_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4843_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4843_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4843_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4843_1_0_0/* this_arg */
	, InternalEnumerator_1_t4843_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4843_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4843)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8961_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo ICollection_1_get_Count_m46192_MethodInfo;
static PropertyInfo ICollection_1_t8961____Count_PropertyInfo = 
{
	&ICollection_1_t8961_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46192_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46193_MethodInfo;
static PropertyInfo ICollection_1_t8961____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8961_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46193_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8961_PropertyInfos[] =
{
	&ICollection_1_t8961____Count_PropertyInfo,
	&ICollection_1_t8961____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46192_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Count()
MethodInfo ICollection_1_get_Count_m46192_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46192_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46193_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46193_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46193_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTag_t2103_0_0_0;
extern Il2CppType TypeTag_t2103_0_0_0;
static ParameterInfo ICollection_1_t8961_ICollection_1_Add_m46194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeTag_t2103_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46194_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Add(T)
MethodInfo ICollection_1_Add_m46194_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Byte_t98/* invoker_method */
	, ICollection_1_t8961_ICollection_1_Add_m46194_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46194_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46195_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Clear()
MethodInfo ICollection_1_Clear_m46195_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46195_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTag_t2103_0_0_0;
static ParameterInfo ICollection_1_t8961_ICollection_1_Contains_m46196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeTag_t2103_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46196_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Contains(T)
MethodInfo ICollection_1_Contains_m46196_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t8961_ICollection_1_Contains_m46196_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46196_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTagU5BU5D_t2683_0_0_0;
extern Il2CppType TypeTagU5BU5D_t2683_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8961_ICollection_1_CopyTo_m46197_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeTagU5BU5D_t2683_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46197_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46197_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8961_ICollection_1_CopyTo_m46197_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46197_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTag_t2103_0_0_0;
static ParameterInfo ICollection_1_t8961_ICollection_1_Remove_m46198_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeTag_t2103_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46198_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Remove(T)
MethodInfo ICollection_1_Remove_m46198_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t8961_ICollection_1_Remove_m46198_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46198_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8961_MethodInfos[] =
{
	&ICollection_1_get_Count_m46192_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46193_MethodInfo,
	&ICollection_1_Add_m46194_MethodInfo,
	&ICollection_1_Clear_m46195_MethodInfo,
	&ICollection_1_Contains_m46196_MethodInfo,
	&ICollection_1_CopyTo_m46197_MethodInfo,
	&ICollection_1_Remove_m46198_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8963_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8961_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8963_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8961_0_0_0;
extern Il2CppType ICollection_1_t8961_1_0_0;
struct ICollection_1_t8961;
extern Il2CppGenericClass ICollection_1_t8961_GenericClass;
TypeInfo ICollection_1_t8961_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8961_MethodInfos/* methods */
	, ICollection_1_t8961_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8961_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8961_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8961_0_0_0/* byval_arg */
	, &ICollection_1_t8961_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8961_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern Il2CppType IEnumerator_1_t6901_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46199_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46199_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8963_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6901_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46199_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8963_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46199_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8963_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8963_0_0_0;
extern Il2CppType IEnumerable_1_t8963_1_0_0;
struct IEnumerable_1_t8963;
extern Il2CppGenericClass IEnumerable_1_t8963_GenericClass;
TypeInfo IEnumerable_1_t8963_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8963_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8963_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8963_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8963_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8963_0_0_0/* byval_arg */
	, &IEnumerable_1_t8963_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8963_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8962_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo IList_1_get_Item_m46200_MethodInfo;
extern MethodInfo IList_1_set_Item_m46201_MethodInfo;
static PropertyInfo IList_1_t8962____Item_PropertyInfo = 
{
	&IList_1_t8962_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46200_MethodInfo/* get */
	, &IList_1_set_Item_m46201_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8962_PropertyInfos[] =
{
	&IList_1_t8962____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeTag_t2103_0_0_0;
static ParameterInfo IList_1_t8962_IList_1_IndexOf_m46202_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeTag_t2103_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46202_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46202_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8962_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8962_IList_1_IndexOf_m46202_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46202_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeTag_t2103_0_0_0;
static ParameterInfo IList_1_t8962_IList_1_Insert_m46203_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeTag_t2103_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46203_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46203_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8962_IList_1_Insert_m46203_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46203_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8962_IList_1_RemoveAt_m46204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46204_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46204_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8962_IList_1_RemoveAt_m46204_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46204_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8962_IList_1_get_Item_m46200_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType TypeTag_t2103_0_0_0;
extern void* RuntimeInvoker_TypeTag_t2103_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46200_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46200_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8962_il2cpp_TypeInfo/* declaring_type */
	, &TypeTag_t2103_0_0_0/* return_type */
	, RuntimeInvoker_TypeTag_t2103_Int32_t63/* invoker_method */
	, IList_1_t8962_IList_1_get_Item_m46200_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46200_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType TypeTag_t2103_0_0_0;
static ParameterInfo IList_1_t8962_IList_1_set_Item_m46201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeTag_t2103_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46201_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46201_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8962_IList_1_set_Item_m46201_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46201_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8962_MethodInfos[] =
{
	&IList_1_IndexOf_m46202_MethodInfo,
	&IList_1_Insert_m46203_MethodInfo,
	&IList_1_RemoveAt_m46204_MethodInfo,
	&IList_1_get_Item_m46200_MethodInfo,
	&IList_1_set_Item_m46201_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8962_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8961_il2cpp_TypeInfo,
	&IEnumerable_1_t8963_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8962_0_0_0;
extern Il2CppType IList_1_t8962_1_0_0;
struct IList_1_t8962;
extern Il2CppGenericClass IList_1_t8962_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8962_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8962_MethodInfos/* methods */
	, IList_1_t8962_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8962_il2cpp_TypeInfo/* element_class */
	, IList_1_t8962_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8962_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8962_0_0_0/* byval_arg */
	, &IList_1_t8962_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8962_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6903_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Meth.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo IEnumerator_1_get_Current_m46205_MethodInfo;
static PropertyInfo IEnumerator_1_t6903____Current_PropertyInfo = 
{
	&IEnumerator_1_t6903_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46205_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6903_PropertyInfos[] =
{
	&IEnumerator_1_t6903____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodFlags_t2104_0_0_0;
extern void* RuntimeInvoker_MethodFlags_t2104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46205_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46205_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6903_il2cpp_TypeInfo/* declaring_type */
	, &MethodFlags_t2104_0_0_0/* return_type */
	, RuntimeInvoker_MethodFlags_t2104/* invoker_method */
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
	, &IEnumerator_1_get_Current_m46205_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6903_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46205_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6903_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6903_0_0_0;
extern Il2CppType IEnumerator_1_t6903_1_0_0;
struct IEnumerator_1_t6903;
extern Il2CppGenericClass IEnumerator_1_t6903_GenericClass;
TypeInfo IEnumerator_1_t6903_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6903_MethodInfos/* methods */
	, IEnumerator_1_t6903_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6903_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6903_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6903_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6903_0_0_0/* byval_arg */
	, &IEnumerator_1_t6903_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6903_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_698.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4844_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_698MethodDeclarations.h"

extern TypeInfo MethodFlags_t2104_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26331_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodFlags_t2104_m35540_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMethodFlags_t2104_m35540 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26327_MethodInfo;
 void InternalEnumerator_1__ctor_m26327 (InternalEnumerator_1_t4844 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328 (InternalEnumerator_1_t4844 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26331(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26331_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MethodFlags_t2104_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26329_MethodInfo;
 void InternalEnumerator_1_Dispose_m26329 (InternalEnumerator_1_t4844 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26330_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26330 (InternalEnumerator_1_t4844 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26331 (InternalEnumerator_1_t4844 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMethodFlags_t2104_m35540(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMethodFlags_t2104_m35540_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4844____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4844, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4844____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4844, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4844_FieldInfos[] =
{
	&InternalEnumerator_1_t4844____array_0_FieldInfo,
	&InternalEnumerator_1_t4844____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4844____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4844_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4844____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4844_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26331_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4844_PropertyInfos[] =
{
	&InternalEnumerator_1_t4844____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4844____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4844_InternalEnumerator_1__ctor_m26327_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26327_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26327_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26327/* method */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4844_InternalEnumerator_1__ctor_m26327_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26327_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328/* method */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26329_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26329_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26329/* method */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26329_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26330_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26330_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26330/* method */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26330_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlags_t2104_0_0_0;
extern void* RuntimeInvoker_MethodFlags_t2104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26331_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26331_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26331/* method */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* declaring_type */
	, &MethodFlags_t2104_0_0_0/* return_type */
	, RuntimeInvoker_MethodFlags_t2104/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26331_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4844_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26327_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328_MethodInfo,
	&InternalEnumerator_1_Dispose_m26329_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26330_MethodInfo,
	&InternalEnumerator_1_get_Current_m26331_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4844_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26328_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26330_MethodInfo,
	&InternalEnumerator_1_Dispose_m26329_MethodInfo,
	&InternalEnumerator_1_get_Current_m26331_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4844_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6903_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4844_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6903_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4844_0_0_0;
extern Il2CppType InternalEnumerator_1_t4844_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4844_GenericClass;
TypeInfo InternalEnumerator_1_t4844_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4844_MethodInfos/* methods */
	, InternalEnumerator_1_t4844_PropertyInfos/* properties */
	, InternalEnumerator_1_t4844_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4844_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4844_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4844_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4844_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4844_1_0_0/* this_arg */
	, InternalEnumerator_1_t4844_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4844_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4844)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8964_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo ICollection_1_get_Count_m46206_MethodInfo;
static PropertyInfo ICollection_1_t8964____Count_PropertyInfo = 
{
	&ICollection_1_t8964_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46206_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46207_MethodInfo;
static PropertyInfo ICollection_1_t8964____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8964_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46207_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8964_PropertyInfos[] =
{
	&ICollection_1_t8964____Count_PropertyInfo,
	&ICollection_1_t8964____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46206_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m46206_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46206_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46207_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46207_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46207_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlags_t2104_0_0_0;
extern Il2CppType MethodFlags_t2104_0_0_0;
static ParameterInfo ICollection_1_t8964_ICollection_1_Add_m46208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t2104_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46208_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Add(T)
MethodInfo ICollection_1_Add_m46208_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, ICollection_1_t8964_ICollection_1_Add_m46208_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46208_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46209_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Clear()
MethodInfo ICollection_1_Clear_m46209_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46209_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlags_t2104_0_0_0;
static ParameterInfo ICollection_1_t8964_ICollection_1_Contains_m46210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t2104_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46210_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m46210_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8964_ICollection_1_Contains_m46210_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46210_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlagsU5BU5D_t5103_0_0_0;
extern Il2CppType MethodFlagsU5BU5D_t5103_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8964_ICollection_1_CopyTo_m46211_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlagsU5BU5D_t5103_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46211_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46211_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8964_ICollection_1_CopyTo_m46211_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46211_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlags_t2104_0_0_0;
static ParameterInfo ICollection_1_t8964_ICollection_1_Remove_m46212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t2104_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46212_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m46212_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Int32_t63/* invoker_method */
	, ICollection_1_t8964_ICollection_1_Remove_m46212_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46212_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8964_MethodInfos[] =
{
	&ICollection_1_get_Count_m46206_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46207_MethodInfo,
	&ICollection_1_Add_m46208_MethodInfo,
	&ICollection_1_Clear_m46209_MethodInfo,
	&ICollection_1_Contains_m46210_MethodInfo,
	&ICollection_1_CopyTo_m46211_MethodInfo,
	&ICollection_1_Remove_m46212_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8966_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8964_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8966_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8964_0_0_0;
extern Il2CppType ICollection_1_t8964_1_0_0;
struct ICollection_1_t8964;
extern Il2CppGenericClass ICollection_1_t8964_GenericClass;
TypeInfo ICollection_1_t8964_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8964_MethodInfos/* methods */
	, ICollection_1_t8964_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8964_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8964_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8964_0_0_0/* byval_arg */
	, &ICollection_1_t8964_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8964_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern Il2CppType IEnumerator_1_t6903_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46213_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46213_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8966_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6903_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46213_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8966_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46213_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8966_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8966_0_0_0;
extern Il2CppType IEnumerable_1_t8966_1_0_0;
struct IEnumerable_1_t8966;
extern Il2CppGenericClass IEnumerable_1_t8966_GenericClass;
TypeInfo IEnumerable_1_t8966_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8966_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8966_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8966_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8966_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8966_0_0_0/* byval_arg */
	, &IEnumerable_1_t8966_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8966_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8965_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo IList_1_get_Item_m46214_MethodInfo;
extern MethodInfo IList_1_set_Item_m46215_MethodInfo;
static PropertyInfo IList_1_t8965____Item_PropertyInfo = 
{
	&IList_1_t8965_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46214_MethodInfo/* get */
	, &IList_1_set_Item_m46215_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8965_PropertyInfos[] =
{
	&IList_1_t8965____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodFlags_t2104_0_0_0;
static ParameterInfo IList_1_t8965_IList_1_IndexOf_m46216_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t2104_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46216_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46216_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8965_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8965_IList_1_IndexOf_m46216_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46216_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType MethodFlags_t2104_0_0_0;
static ParameterInfo IList_1_t8965_IList_1_Insert_m46217_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t2104_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46217_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46217_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8965_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8965_IList_1_Insert_m46217_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46217_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8965_IList_1_RemoveAt_m46218_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46218_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46218_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8965_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8965_IList_1_RemoveAt_m46218_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46218_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8965_IList_1_get_Item_m46214_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType MethodFlags_t2104_0_0_0;
extern void* RuntimeInvoker_MethodFlags_t2104_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46214_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46214_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8965_il2cpp_TypeInfo/* declaring_type */
	, &MethodFlags_t2104_0_0_0/* return_type */
	, RuntimeInvoker_MethodFlags_t2104_Int32_t63/* invoker_method */
	, IList_1_t8965_IList_1_get_Item_m46214_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46214_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType MethodFlags_t2104_0_0_0;
static ParameterInfo IList_1_t8965_IList_1_set_Item_m46215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t2104_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46215_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46215_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8965_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Int32_t63/* invoker_method */
	, IList_1_t8965_IList_1_set_Item_m46215_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46215_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8965_MethodInfos[] =
{
	&IList_1_IndexOf_m46216_MethodInfo,
	&IList_1_Insert_m46217_MethodInfo,
	&IList_1_RemoveAt_m46218_MethodInfo,
	&IList_1_get_Item_m46214_MethodInfo,
	&IList_1_set_Item_m46215_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8965_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8964_il2cpp_TypeInfo,
	&IEnumerable_1_t8966_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8965_0_0_0;
extern Il2CppType IList_1_t8965_1_0_0;
struct IList_1_t8965;
extern Il2CppGenericClass IList_1_t8965_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8965_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8965_MethodInfos/* methods */
	, IList_1_t8965_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8965_il2cpp_TypeInfo/* element_class */
	, IList_1_t8965_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8965_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8965_0_0_0/* byval_arg */
	, &IList_1_t8965_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8965_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6905_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Retu.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo IEnumerator_1_get_Current_m46219_MethodInfo;
static PropertyInfo IEnumerator_1_t6905____Current_PropertyInfo = 
{
	&IEnumerator_1_t6905_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46219_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6905_PropertyInfos[] =
{
	&IEnumerator_1_t6905____Current_PropertyInfo,
	NULL
};
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
extern void* RuntimeInvoker_ReturnTypeTag_t2105 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46219_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46219_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6905_il2cpp_TypeInfo/* declaring_type */
	, &ReturnTypeTag_t2105_0_0_0/* return_type */
	, RuntimeInvoker_ReturnTypeTag_t2105/* invoker_method */
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
	, &IEnumerator_1_get_Current_m46219_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6905_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46219_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6905_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6905_0_0_0;
extern Il2CppType IEnumerator_1_t6905_1_0_0;
struct IEnumerator_1_t6905;
extern Il2CppGenericClass IEnumerator_1_t6905_GenericClass;
TypeInfo IEnumerator_1_t6905_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6905_MethodInfos/* methods */
	, IEnumerator_1_t6905_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6905_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6905_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6905_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6905_0_0_0/* byval_arg */
	, &IEnumerator_1_t6905_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6905_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_699.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4845_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_699MethodDeclarations.h"

extern TypeInfo ReturnTypeTag_t2105_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26336_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisReturnTypeTag_t2105_m35551_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisReturnTypeTag_t2105_m35551 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26332_MethodInfo;
 void InternalEnumerator_1__ctor_m26332 (InternalEnumerator_1_t4845 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333 (InternalEnumerator_1_t4845 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m26336(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26336_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ReturnTypeTag_t2105_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26334_MethodInfo;
 void InternalEnumerator_1_Dispose_m26334 (InternalEnumerator_1_t4845 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26335_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26335 (InternalEnumerator_1_t4845 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m26336 (InternalEnumerator_1_t4845 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisReturnTypeTag_t2105_m35551(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisReturnTypeTag_t2105_m35551_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4845____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4845, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4845____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4845, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4845_FieldInfos[] =
{
	&InternalEnumerator_1_t4845____array_0_FieldInfo,
	&InternalEnumerator_1_t4845____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4845____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4845_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4845____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4845_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26336_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4845_PropertyInfos[] =
{
	&InternalEnumerator_1_t4845____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4845____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4845_InternalEnumerator_1__ctor_m26332_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26332_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26332_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26332/* method */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4845_InternalEnumerator_1__ctor_m26332_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26332_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333/* method */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26334_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26334_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26334/* method */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26334_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26335_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26335_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26335/* method */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26335_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
extern void* RuntimeInvoker_ReturnTypeTag_t2105 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26336_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26336_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26336/* method */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* declaring_type */
	, &ReturnTypeTag_t2105_0_0_0/* return_type */
	, RuntimeInvoker_ReturnTypeTag_t2105/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26336_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4845_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26332_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo,
	&InternalEnumerator_1_Dispose_m26334_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26335_MethodInfo,
	&InternalEnumerator_1_get_Current_m26336_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4845_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26335_MethodInfo,
	&InternalEnumerator_1_Dispose_m26334_MethodInfo,
	&InternalEnumerator_1_get_Current_m26336_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4845_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6905_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4845_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6905_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4845_0_0_0;
extern Il2CppType InternalEnumerator_1_t4845_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4845_GenericClass;
TypeInfo InternalEnumerator_1_t4845_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4845_MethodInfos/* methods */
	, InternalEnumerator_1_t4845_PropertyInfos/* properties */
	, InternalEnumerator_1_t4845_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4845_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4845_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4845_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4845_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4845_1_0_0/* this_arg */
	, InternalEnumerator_1_t4845_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4845_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4845)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8967_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo ICollection_1_get_Count_m46220_MethodInfo;
static PropertyInfo ICollection_1_t8967____Count_PropertyInfo = 
{
	&ICollection_1_t8967_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46220_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46221_MethodInfo;
static PropertyInfo ICollection_1_t8967____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8967_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46221_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8967_PropertyInfos[] =
{
	&ICollection_1_t8967____Count_PropertyInfo,
	&ICollection_1_t8967____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46220_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Count()
MethodInfo ICollection_1_get_Count_m46220_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46220_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46221_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46221_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46221_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
static ParameterInfo ICollection_1_t8967_ICollection_1_Add_m46222_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t2105_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46222_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Add(T)
MethodInfo ICollection_1_Add_m46222_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Byte_t98/* invoker_method */
	, ICollection_1_t8967_ICollection_1_Add_m46222_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46222_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46223_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Clear()
MethodInfo ICollection_1_Clear_m46223_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46223_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
static ParameterInfo ICollection_1_t8967_ICollection_1_Contains_m46224_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t2105_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46224_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Contains(T)
MethodInfo ICollection_1_Contains_m46224_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t8967_ICollection_1_Contains_m46224_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46224_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTagU5BU5D_t5104_0_0_0;
extern Il2CppType ReturnTypeTagU5BU5D_t5104_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8967_ICollection_1_CopyTo_m46225_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTagU5BU5D_t5104_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46225_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46225_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8967_ICollection_1_CopyTo_m46225_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46225_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
static ParameterInfo ICollection_1_t8967_ICollection_1_Remove_m46226_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t2105_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46226_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Remove(T)
MethodInfo ICollection_1_Remove_m46226_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Byte_t98/* invoker_method */
	, ICollection_1_t8967_ICollection_1_Remove_m46226_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46226_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8967_MethodInfos[] =
{
	&ICollection_1_get_Count_m46220_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46221_MethodInfo,
	&ICollection_1_Add_m46222_MethodInfo,
	&ICollection_1_Clear_m46223_MethodInfo,
	&ICollection_1_Contains_m46224_MethodInfo,
	&ICollection_1_CopyTo_m46225_MethodInfo,
	&ICollection_1_Remove_m46226_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8969_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8967_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8969_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8967_0_0_0;
extern Il2CppType ICollection_1_t8967_1_0_0;
struct ICollection_1_t8967;
extern Il2CppGenericClass ICollection_1_t8967_GenericClass;
TypeInfo ICollection_1_t8967_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8967_MethodInfos/* methods */
	, ICollection_1_t8967_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8967_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8967_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8967_0_0_0/* byval_arg */
	, &ICollection_1_t8967_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8967_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern Il2CppType IEnumerator_1_t6905_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46227_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46227_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8969_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6905_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46227_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8969_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46227_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8969_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8969_0_0_0;
extern Il2CppType IEnumerable_1_t8969_1_0_0;
struct IEnumerable_1_t8969;
extern Il2CppGenericClass IEnumerable_1_t8969_GenericClass;
TypeInfo IEnumerable_1_t8969_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8969_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8969_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8969_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8969_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8969_0_0_0/* byval_arg */
	, &IEnumerable_1_t8969_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8969_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8968_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo IList_1_get_Item_m46228_MethodInfo;
extern MethodInfo IList_1_set_Item_m46229_MethodInfo;
static PropertyInfo IList_1_t8968____Item_PropertyInfo = 
{
	&IList_1_t8968_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46228_MethodInfo/* get */
	, &IList_1_set_Item_m46229_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8968_PropertyInfos[] =
{
	&IList_1_t8968____Item_PropertyInfo,
	NULL
};
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
static ParameterInfo IList_1_t8968_IList_1_IndexOf_m46230_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t2105_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46230_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46230_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8968_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8968_IList_1_IndexOf_m46230_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46230_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
static ParameterInfo IList_1_t8968_IList_1_Insert_m46231_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t2105_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46231_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46231_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8968_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8968_IList_1_Insert_m46231_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46231_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8968_IList_1_RemoveAt_m46232_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46232_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46232_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8968_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8968_IList_1_RemoveAt_m46232_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46232_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8968_IList_1_get_Item_m46228_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
extern void* RuntimeInvoker_ReturnTypeTag_t2105_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46228_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46228_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8968_il2cpp_TypeInfo/* declaring_type */
	, &ReturnTypeTag_t2105_0_0_0/* return_type */
	, RuntimeInvoker_ReturnTypeTag_t2105_Int32_t63/* invoker_method */
	, IList_1_t8968_IList_1_get_Item_m46228_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46228_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType ReturnTypeTag_t2105_0_0_0;
static ParameterInfo IList_1_t8968_IList_1_set_Item_m46229_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t2105_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Byte_t98 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46229_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46229_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8968_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Byte_t98/* invoker_method */
	, IList_1_t8968_IList_1_set_Item_m46229_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46229_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8968_MethodInfos[] =
{
	&IList_1_IndexOf_m46230_MethodInfo,
	&IList_1_Insert_m46231_MethodInfo,
	&IList_1_RemoveAt_m46232_MethodInfo,
	&IList_1_get_Item_m46228_MethodInfo,
	&IList_1_set_Item_m46229_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8968_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8967_il2cpp_TypeInfo,
	&IEnumerable_1_t8969_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8968_0_0_0;
extern Il2CppType IList_1_t8968_1_0_0;
struct IList_1_t8968;
extern Il2CppGenericClass IList_1_t8968_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8968_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8968_MethodInfos/* methods */
	, IList_1_t8968_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8968_il2cpp_TypeInfo/* element_class */
	, IList_1_t8968_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8968_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8968_0_0_0/* byval_arg */
	, &IList_1_t8968_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8968_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6906_il2cpp_TypeInfo;

// System.DateTime
#include "mscorlib_System_DateTime.h"


// T System.Collections.Generic.IEnumerator`1<System.DateTime>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime>
extern MethodInfo IEnumerator_1_get_Current_m46233_MethodInfo;
static PropertyInfo IEnumerator_1_t6906____Current_PropertyInfo = 
{
	&IEnumerator_1_t6906_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46233_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6906_PropertyInfos[] =
{
	&IEnumerator_1_t6906____Current_PropertyInfo,
	NULL
};
extern Il2CppType DateTime_t837_0_0_0;
extern void* RuntimeInvoker_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46233_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.DateTime>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46233_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6906_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t837_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t837/* invoker_method */
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
	, &IEnumerator_1_get_Current_m46233_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6906_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46233_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6906_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6906_0_0_0;
extern Il2CppType IEnumerator_1_t6906_1_0_0;
struct IEnumerator_1_t6906;
extern Il2CppGenericClass IEnumerator_1_t6906_GenericClass;
TypeInfo IEnumerator_1_t6906_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6906_MethodInfos/* methods */
	, IEnumerator_1_t6906_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6906_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6906_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6906_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6906_0_0_0/* byval_arg */
	, &IEnumerator_1_t6906_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6906_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_700.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4846_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_700MethodDeclarations.h"

extern TypeInfo DateTime_t837_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26341_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDateTime_t837_m35562_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
 DateTime_t837  Array_InternalArray__get_Item_TisDateTime_t837_m35562 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26337_MethodInfo;
 void InternalEnumerator_1__ctor_m26337 (InternalEnumerator_1_t4846 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338 (InternalEnumerator_1_t4846 * __this, MethodInfo* method){
	{
		DateTime_t837  L_0 = InternalEnumerator_1_get_Current_m26341(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26341_MethodInfo);
		DateTime_t837  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DateTime_t837_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26339_MethodInfo;
 void InternalEnumerator_1_Dispose_m26339 (InternalEnumerator_1_t4846 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26340_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26340 (InternalEnumerator_1_t4846 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
 DateTime_t837  InternalEnumerator_1_get_Current_m26341 (InternalEnumerator_1_t4846 * __this, MethodInfo* method){
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
		DateTime_t837  L_8 = Array_InternalArray__get_Item_TisDateTime_t837_m35562(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDateTime_t837_m35562_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4846____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4846, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4846____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4846, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4846_FieldInfos[] =
{
	&InternalEnumerator_1_t4846____array_0_FieldInfo,
	&InternalEnumerator_1_t4846____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4846____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4846_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4846____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4846_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26341_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4846_PropertyInfos[] =
{
	&InternalEnumerator_1_t4846____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4846____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4846_InternalEnumerator_1__ctor_m26337_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26337_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26337_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26337/* method */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4846_InternalEnumerator_1__ctor_m26337_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26337_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338/* method */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26339_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26339_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26339/* method */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26339_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26340_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26340_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26340/* method */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26340_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t837_0_0_0;
extern void* RuntimeInvoker_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26341_GenericMethod;
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26341_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26341/* method */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t837_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t837/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26341_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4846_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26337_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo,
	&InternalEnumerator_1_Dispose_m26339_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26340_MethodInfo,
	&InternalEnumerator_1_get_Current_m26341_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4846_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26340_MethodInfo,
	&InternalEnumerator_1_Dispose_m26339_MethodInfo,
	&InternalEnumerator_1_get_Current_m26341_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4846_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6906_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4846_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6906_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4846_0_0_0;
extern Il2CppType InternalEnumerator_1_t4846_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4846_GenericClass;
TypeInfo InternalEnumerator_1_t4846_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4846_MethodInfos/* methods */
	, InternalEnumerator_1_t4846_PropertyInfos/* properties */
	, InternalEnumerator_1_t4846_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4846_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4846_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4846_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4846_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4846_1_0_0/* this_arg */
	, InternalEnumerator_1_t4846_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4846_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4846)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8970_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime>
extern MethodInfo ICollection_1_get_Count_m46234_MethodInfo;
static PropertyInfo ICollection_1_t8970____Count_PropertyInfo = 
{
	&ICollection_1_t8970_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46234_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46235_MethodInfo;
static PropertyInfo ICollection_1_t8970____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8970_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46235_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8970_PropertyInfos[] =
{
	&ICollection_1_t8970____Count_PropertyInfo,
	&ICollection_1_t8970____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46234_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count()
MethodInfo ICollection_1_get_Count_m46234_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46234_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46235_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46235_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46235_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t837_0_0_0;
extern Il2CppType DateTime_t837_0_0_0;
static ParameterInfo ICollection_1_t8970_ICollection_1_Add_m46236_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t837_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46236_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Add(T)
MethodInfo ICollection_1_Add_m46236_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_DateTime_t837/* invoker_method */
	, ICollection_1_t8970_ICollection_1_Add_m46236_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46236_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46237_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Clear()
MethodInfo ICollection_1_Clear_m46237_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46237_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t837_0_0_0;
static ParameterInfo ICollection_1_t8970_ICollection_1_Contains_m46238_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t837_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46238_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Contains(T)
MethodInfo ICollection_1_Contains_m46238_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_DateTime_t837/* invoker_method */
	, ICollection_1_t8970_ICollection_1_Contains_m46238_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46238_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeU5BU5D_t2680_0_0_0;
extern Il2CppType DateTimeU5BU5D_t2680_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8970_ICollection_1_CopyTo_m46239_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeU5BU5D_t2680_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46239_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46239_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8970_ICollection_1_CopyTo_m46239_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46239_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t837_0_0_0;
static ParameterInfo ICollection_1_t8970_ICollection_1_Remove_m46240_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t837_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46240_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Remove(T)
MethodInfo ICollection_1_Remove_m46240_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_DateTime_t837/* invoker_method */
	, ICollection_1_t8970_ICollection_1_Remove_m46240_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46240_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8970_MethodInfos[] =
{
	&ICollection_1_get_Count_m46234_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46235_MethodInfo,
	&ICollection_1_Add_m46236_MethodInfo,
	&ICollection_1_Clear_m46237_MethodInfo,
	&ICollection_1_Contains_m46238_MethodInfo,
	&ICollection_1_CopyTo_m46239_MethodInfo,
	&ICollection_1_Remove_m46240_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8972_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8970_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8972_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8970_0_0_0;
extern Il2CppType ICollection_1_t8970_1_0_0;
struct ICollection_1_t8970;
extern Il2CppGenericClass ICollection_1_t8970_GenericClass;
TypeInfo ICollection_1_t8970_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8970_MethodInfos/* methods */
	, ICollection_1_t8970_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8970_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8970_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8970_0_0_0/* byval_arg */
	, &ICollection_1_t8970_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8970_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime>
extern Il2CppType IEnumerator_1_t6906_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46241_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46241_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8972_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6906_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46241_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8972_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46241_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8972_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8972_0_0_0;
extern Il2CppType IEnumerable_1_t8972_1_0_0;
struct IEnumerable_1_t8972;
extern Il2CppGenericClass IEnumerable_1_t8972_GenericClass;
TypeInfo IEnumerable_1_t8972_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8972_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8972_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8972_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8972_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8972_0_0_0/* byval_arg */
	, &IEnumerable_1_t8972_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8972_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t8971_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTime>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTime>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DateTime>
extern MethodInfo IList_1_get_Item_m46242_MethodInfo;
extern MethodInfo IList_1_set_Item_m46243_MethodInfo;
static PropertyInfo IList_1_t8971____Item_PropertyInfo = 
{
	&IList_1_t8971_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46242_MethodInfo/* get */
	, &IList_1_set_Item_m46243_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8971_PropertyInfos[] =
{
	&IList_1_t8971____Item_PropertyInfo,
	NULL
};
extern Il2CppType DateTime_t837_0_0_0;
static ParameterInfo IList_1_t8971_IList_1_IndexOf_m46244_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t837_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46244_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.DateTime>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46244_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8971_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_DateTime_t837/* invoker_method */
	, IList_1_t8971_IList_1_IndexOf_m46244_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46244_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType DateTime_t837_0_0_0;
static ParameterInfo IList_1_t8971_IList_1_Insert_m46245_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t837_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46245_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46245_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8971_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_DateTime_t837/* invoker_method */
	, IList_1_t8971_IList_1_Insert_m46245_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46245_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8971_IList_1_RemoveAt_m46246_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46246_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46246_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8971_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8971_IList_1_RemoveAt_m46246_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46246_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8971_IList_1_get_Item_m46242_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType DateTime_t837_0_0_0;
extern void* RuntimeInvoker_DateTime_t837_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46242_GenericMethod;
// T System.Collections.Generic.IList`1<System.DateTime>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46242_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8971_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t837_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t837_Int32_t63/* invoker_method */
	, IList_1_t8971_IList_1_get_Item_m46242_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46242_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType DateTime_t837_0_0_0;
static ParameterInfo IList_1_t8971_IList_1_set_Item_m46243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t837_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46243_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46243_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8971_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_DateTime_t837/* invoker_method */
	, IList_1_t8971_IList_1_set_Item_m46243_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46243_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8971_MethodInfos[] =
{
	&IList_1_IndexOf_m46244_MethodInfo,
	&IList_1_Insert_m46245_MethodInfo,
	&IList_1_RemoveAt_m46246_MethodInfo,
	&IList_1_get_Item_m46242_MethodInfo,
	&IList_1_set_Item_m46243_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8971_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8970_il2cpp_TypeInfo,
	&IEnumerable_1_t8972_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8971_0_0_0;
extern Il2CppType IList_1_t8971_1_0_0;
struct IList_1_t8971;
extern Il2CppGenericClass IList_1_t8971_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8971_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8971_MethodInfos/* methods */
	, IList_1_t8971_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8971_il2cpp_TypeInfo/* element_class */
	, IList_1_t8971_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8971_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8971_0_0_0/* byval_arg */
	, &IList_1_t8971_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8971_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t8973_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>
extern MethodInfo ICollection_1_get_Count_m46247_MethodInfo;
static PropertyInfo ICollection_1_t8973____Count_PropertyInfo = 
{
	&ICollection_1_t8973_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46247_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46248_MethodInfo;
static PropertyInfo ICollection_1_t8973____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8973_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46248_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8973_PropertyInfos[] =
{
	&ICollection_1_t8973____Count_PropertyInfo,
	&ICollection_1_t8973____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46247_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_Count()
MethodInfo ICollection_1_get_Count_m46247_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46247_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46248_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46248_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46248_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2701_0_0_0;
extern Il2CppType IComparable_1_t2701_0_0_0;
static ParameterInfo ICollection_1_t8973_ICollection_1_Add_m46249_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2701_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46249_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Add(T)
MethodInfo ICollection_1_Add_m46249_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8973_ICollection_1_Add_m46249_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46249_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46250_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Clear()
MethodInfo ICollection_1_Clear_m46250_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46250_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2701_0_0_0;
static ParameterInfo ICollection_1_t8973_ICollection_1_Contains_m46251_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2701_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46251_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Contains(T)
MethodInfo ICollection_1_Contains_m46251_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8973_ICollection_1_Contains_m46251_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46251_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t5105_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t5105_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8973_ICollection_1_CopyTo_m46252_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t5105_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46252_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46252_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8973_ICollection_1_CopyTo_m46252_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46252_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2701_0_0_0;
static ParameterInfo ICollection_1_t8973_ICollection_1_Remove_m46253_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2701_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46253_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Remove(T)
MethodInfo ICollection_1_Remove_m46253_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8973_ICollection_1_Remove_m46253_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46253_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8973_MethodInfos[] =
{
	&ICollection_1_get_Count_m46247_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46248_MethodInfo,
	&ICollection_1_Add_m46249_MethodInfo,
	&ICollection_1_Clear_m46250_MethodInfo,
	&ICollection_1_Contains_m46251_MethodInfo,
	&ICollection_1_CopyTo_m46252_MethodInfo,
	&ICollection_1_Remove_m46253_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8975_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8973_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8975_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8973_0_0_0;
extern Il2CppType ICollection_1_t8973_1_0_0;
struct ICollection_1_t8973;
extern Il2CppGenericClass ICollection_1_t8973_GenericClass;
TypeInfo ICollection_1_t8973_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8973_MethodInfos/* methods */
	, ICollection_1_t8973_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8973_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8973_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8973_0_0_0/* byval_arg */
	, &ICollection_1_t8973_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8973_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>
extern Il2CppType IEnumerator_1_t6908_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46254_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46254_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8975_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6908_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46254_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8975_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46254_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8975_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8975_0_0_0;
extern Il2CppType IEnumerable_1_t8975_1_0_0;
struct IEnumerable_1_t8975;
extern Il2CppGenericClass IEnumerable_1_t8975_GenericClass;
TypeInfo IEnumerable_1_t8975_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8975_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8975_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8975_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8975_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8975_0_0_0/* byval_arg */
	, &IEnumerable_1_t8975_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8975_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6908_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>
extern MethodInfo IEnumerator_1_get_Current_m46255_MethodInfo;
static PropertyInfo IEnumerator_1_t6908____Current_PropertyInfo = 
{
	&IEnumerator_1_t6908_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46255_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6908_PropertyInfos[] =
{
	&IEnumerator_1_t6908____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2701_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46255_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46255_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6908_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2701_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46255_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6908_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46255_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6908_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6908_0_0_0;
extern Il2CppType IEnumerator_1_t6908_1_0_0;
struct IEnumerator_1_t6908;
extern Il2CppGenericClass IEnumerator_1_t6908_GenericClass;
TypeInfo IEnumerator_1_t6908_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6908_MethodInfos/* methods */
	, IEnumerator_1_t6908_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6908_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6908_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6908_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6908_0_0_0/* byval_arg */
	, &IEnumerator_1_t6908_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6908_GenericClass/* generic_class */
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
extern TypeInfo IComparable_1_t2701_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.DateTime>
extern Il2CppType DateTime_t837_0_0_0;
static ParameterInfo IComparable_1_t2701_IComparable_1_CompareTo_m46256_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t837_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m46256_GenericMethod;
// System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m46256_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2701_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_DateTime_t837/* invoker_method */
	, IComparable_1_t2701_IComparable_1_CompareTo_m46256_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m46256_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2701_MethodInfos[] =
{
	&IComparable_1_CompareTo_m46256_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2701_1_0_0;
struct IComparable_1_t2701;
extern Il2CppGenericClass IComparable_1_t2701_GenericClass;
TypeInfo IComparable_1_t2701_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2701_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2701_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2701_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2701_0_0_0/* byval_arg */
	, &IComparable_1_t2701_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2701_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_701.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4847_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_701MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m26346_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2701_m35573_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2701_m35573(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4847____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4847, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4847____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4847, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4847_FieldInfos[] =
{
	&InternalEnumerator_1_t4847____array_0_FieldInfo,
	&InternalEnumerator_1_t4847____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4847____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4847_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4847____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4847_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26346_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4847_PropertyInfos[] =
{
	&InternalEnumerator_1_t4847____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4847____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4847_InternalEnumerator_1__ctor_m26342_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26342_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26342_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4847_InternalEnumerator_1__ctor_m26342_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26342_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26344_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26344_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26344_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26345_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26345_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26345_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2701_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26346_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26346_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2701_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26346_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4847_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26342_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo,
	&InternalEnumerator_1_Dispose_m26344_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26345_MethodInfo,
	&InternalEnumerator_1_get_Current_m26346_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26345_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26344_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4847_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26345_MethodInfo,
	&InternalEnumerator_1_Dispose_m26344_MethodInfo,
	&InternalEnumerator_1_get_Current_m26346_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4847_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6908_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4847_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6908_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2701_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4847_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26346_MethodInfo/* Method Usage */,
	&IComparable_1_t2701_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2701_m35573_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4847_0_0_0;
extern Il2CppType InternalEnumerator_1_t4847_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4847_GenericClass;
TypeInfo InternalEnumerator_1_t4847_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4847_MethodInfos/* methods */
	, InternalEnumerator_1_t4847_PropertyInfos/* properties */
	, InternalEnumerator_1_t4847_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4847_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4847_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4847_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4847_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4847_1_0_0/* this_arg */
	, InternalEnumerator_1_t4847_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4847_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4847_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4847)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8974_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>
extern MethodInfo IList_1_get_Item_m46257_MethodInfo;
extern MethodInfo IList_1_set_Item_m46258_MethodInfo;
static PropertyInfo IList_1_t8974____Item_PropertyInfo = 
{
	&IList_1_t8974_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46257_MethodInfo/* get */
	, &IList_1_set_Item_m46258_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8974_PropertyInfos[] =
{
	&IList_1_t8974____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2701_0_0_0;
static ParameterInfo IList_1_t8974_IList_1_IndexOf_m46259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2701_0_0_0},
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46259_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46259_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8974_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t63_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8974_IList_1_IndexOf_m46259_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m46259_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IComparable_1_t2701_0_0_0;
static ParameterInfo IList_1_t8974_IList_1_Insert_m46260_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2701_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46260_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46260_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8974_IList_1_Insert_m46260_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m46260_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8974_IList_1_RemoveAt_m46261_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46261_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46261_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63/* invoker_method */
	, IList_1_t8974_IList_1_RemoveAt_m46261_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m46261_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo IList_1_t8974_IList_1_get_Item_m46257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType IComparable_1_t2701_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46257_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46257_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8974_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2701_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t63/* invoker_method */
	, IList_1_t8974_IList_1_get_Item_m46257_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m46257_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t63_0_0_0;
extern Il2CppType IComparable_1_t2701_0_0_0;
static ParameterInfo IList_1_t8974_IList_1_set_Item_m46258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2701_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Int32_t63_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46258_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46258_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8974_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Int32_t63_Object_t/* invoker_method */
	, IList_1_t8974_IList_1_set_Item_m46258_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m46258_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8974_MethodInfos[] =
{
	&IList_1_IndexOf_m46259_MethodInfo,
	&IList_1_Insert_m46260_MethodInfo,
	&IList_1_RemoveAt_m46261_MethodInfo,
	&IList_1_get_Item_m46257_MethodInfo,
	&IList_1_set_Item_m46258_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8974_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&ICollection_1_t8973_il2cpp_TypeInfo,
	&IEnumerable_1_t8975_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8974_0_0_0;
extern Il2CppType IList_1_t8974_1_0_0;
struct IList_1_t8974;
extern Il2CppGenericClass IList_1_t8974_GenericClass;
extern CustomAttributesCache IList_1_t2526__CustomAttributeCache;
TypeInfo IList_1_t8974_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8974_MethodInfos/* methods */
	, IList_1_t8974_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8974_il2cpp_TypeInfo/* element_class */
	, IList_1_t8974_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2526__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8974_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8974_0_0_0/* byval_arg */
	, &IList_1_t8974_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8974_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t8976_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo ICollection_1_get_Count_m46262_MethodInfo;
static PropertyInfo ICollection_1_t8976____Count_PropertyInfo = 
{
	&ICollection_1_t8976_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46262_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46263_MethodInfo;
static PropertyInfo ICollection_1_t8976____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8976_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46263_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8976_PropertyInfos[] =
{
	&ICollection_1_t8976____Count_PropertyInfo,
	&ICollection_1_t8976____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t63_0_0_0;
extern void* RuntimeInvoker_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46262_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_Count()
MethodInfo ICollection_1_get_Count_m46262_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m46262_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46263_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46263_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m46263_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2702_0_0_0;
extern Il2CppType IEquatable_1_t2702_0_0_0;
static ParameterInfo ICollection_1_t8976_ICollection_1_Add_m46264_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2702_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46264_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Add(T)
MethodInfo ICollection_1_Add_m46264_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, ICollection_1_t8976_ICollection_1_Add_m46264_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m46264_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46265_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Clear()
MethodInfo ICollection_1_Clear_m46265_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m46265_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2702_0_0_0;
static ParameterInfo ICollection_1_t8976_ICollection_1_Contains_m46266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2702_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46266_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Contains(T)
MethodInfo ICollection_1_Contains_m46266_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8976_ICollection_1_Contains_m46266_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m46266_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t5106_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t5106_0_0_0;
extern Il2CppType Int32_t63_0_0_0;
static ParameterInfo ICollection_1_t8976_ICollection_1_CopyTo_m46267_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t5106_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t63_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t_Int32_t63 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46267_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46267_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t_Int32_t63/* invoker_method */
	, ICollection_1_t8976_ICollection_1_CopyTo_m46267_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m46267_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2702_0_0_0;
static ParameterInfo ICollection_1_t8976_ICollection_1_Remove_m46268_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2702_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46268_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Remove(T)
MethodInfo ICollection_1_Remove_m46268_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_Object_t/* invoker_method */
	, ICollection_1_t8976_ICollection_1_Remove_m46268_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m46268_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8976_MethodInfos[] =
{
	&ICollection_1_get_Count_m46262_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46263_MethodInfo,
	&ICollection_1_Add_m46264_MethodInfo,
	&ICollection_1_Clear_m46265_MethodInfo,
	&ICollection_1_Contains_m46266_MethodInfo,
	&ICollection_1_CopyTo_m46267_MethodInfo,
	&ICollection_1_Remove_m46268_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8978_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8976_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
	&IEnumerable_1_t8978_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8976_0_0_0;
extern Il2CppType ICollection_1_t8976_1_0_0;
struct ICollection_1_t8976;
extern Il2CppGenericClass ICollection_1_t8976_GenericClass;
TypeInfo ICollection_1_t8976_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8976_MethodInfos/* methods */
	, ICollection_1_t8976_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8976_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8976_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8976_0_0_0/* byval_arg */
	, &ICollection_1_t8976_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8976_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>
extern Il2CppType IEnumerator_1_t6910_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46269_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46269_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8978_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6910_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m46269_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8978_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46269_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8978_InterfacesTypeInfos[] = 
{
	&IEnumerable_t88_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8978_0_0_0;
extern Il2CppType IEnumerable_1_t8978_1_0_0;
struct IEnumerable_1_t8978;
extern Il2CppGenericClass IEnumerable_1_t8978_GenericClass;
TypeInfo IEnumerable_1_t8978_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8978_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8978_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8978_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8978_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8978_0_0_0/* byval_arg */
	, &IEnumerable_1_t8978_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8978_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t6910_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo IEnumerator_1_get_Current_m46270_MethodInfo;
static PropertyInfo IEnumerator_1_t6910____Current_PropertyInfo = 
{
	&IEnumerator_1_t6910_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46270_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6910_PropertyInfos[] =
{
	&IEnumerator_1_t6910____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2702_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46270_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46270_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6910_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2702_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m46270_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6910_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46270_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6910_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6910_0_0_0;
extern Il2CppType IEnumerator_1_t6910_1_0_0;
struct IEnumerator_1_t6910;
extern Il2CppGenericClass IEnumerator_1_t6910_GenericClass;
TypeInfo IEnumerator_1_t6910_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6910_MethodInfos/* methods */
	, IEnumerator_1_t6910_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6910_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6910_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6910_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6910_0_0_0/* byval_arg */
	, &IEnumerator_1_t6910_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6910_GenericClass/* generic_class */
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
extern TypeInfo IEquatable_1_t2702_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.DateTime>::Equals(T)
// Metadata Definition System.IEquatable`1<System.DateTime>
extern Il2CppType DateTime_t837_0_0_0;
static ParameterInfo IEquatable_1_t2702_IEquatable_1_Equals_m46271_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t837_0_0_0},
};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64_DateTime_t837 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m46271_GenericMethod;
// System.Boolean System.IEquatable`1<System.DateTime>::Equals(T)
MethodInfo IEquatable_1_Equals_m46271_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2702_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t64_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t64_DateTime_t837/* invoker_method */
	, IEquatable_1_t2702_IEquatable_1_Equals_m46271_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m46271_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2702_MethodInfos[] =
{
	&IEquatable_1_Equals_m46271_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2702_1_0_0;
struct IEquatable_1_t2702;
extern Il2CppGenericClass IEquatable_1_t2702_GenericClass;
TypeInfo IEquatable_1_t2702_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2702_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2702_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2702_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2702_0_0_0/* byval_arg */
	, &IEquatable_1_t2702_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2702_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_702.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4848_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_702MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m26351_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2702_m35584_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2702_m35584(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26773_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4848____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4848, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t63_0_0_1;
FieldInfo InternalEnumerator_1_t4848____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t63_0_0_1/* type */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4848, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4848_FieldInfos[] =
{
	&InternalEnumerator_1_t4848____array_0_FieldInfo,
	&InternalEnumerator_1_t4848____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4848____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4848_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4848____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4848_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26351_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4848_PropertyInfos[] =
{
	&InternalEnumerator_1_t4848____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4848____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4848_InternalEnumerator_1__ctor_m26347_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26347_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26347_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12702_gshared/* method */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t62_0_0_0/* return_type */
	, RuntimeInvoker_Void_t62_Object_t/* invoker_method */
	, InternalEnumerator_1_t4848_InternalEnumerator_1__ctor_m26347_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26347_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12704_gshared/* method */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t62_0_0_0;
extern void* RuntimeInvoker_Void_t62 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26349_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26349_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12706_gshared/* method */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26349_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t64_0_0_0;
extern void* RuntimeInvoker_Boolean_t64 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26350_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26350_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12708_gshared/* method */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26350_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2702_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26351_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26351_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12710_gshared/* method */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2702_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26351_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4848_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26347_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo,
	&InternalEnumerator_1_Dispose_m26349_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26350_MethodInfo,
	&InternalEnumerator_1_get_Current_m26351_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26350_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26349_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4848_VTable[] =
{
	&ValueType_Equals_m3280_MethodInfo,
	&Object_Finalize_m416_MethodInfo,
	&ValueType_GetHashCode_m3281_MethodInfo,
	&ValueType_ToString_m3369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26350_MethodInfo,
	&InternalEnumerator_1_Dispose_m26349_MethodInfo,
	&InternalEnumerator_1_get_Current_m26351_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4848_InterfacesTypeInfos[] = 
{
	&IEnumerator_t21_il2cpp_TypeInfo,
	&IDisposable_t69_il2cpp_TypeInfo,
	&IEnumerator_1_t6910_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4848_InterfacesOffsets[] = 
{
	{ &IEnumerator_t21_il2cpp_TypeInfo, 4},
	{ &IDisposable_t69_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6910_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2702_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4848_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26351_MethodInfo/* Method Usage */,
	&IEquatable_1_t2702_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2702_m35584_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4848_0_0_0;
extern Il2CppType InternalEnumerator_1_t4848_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4848_GenericClass;
TypeInfo InternalEnumerator_1_t4848_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4848_MethodInfos/* methods */
	, InternalEnumerator_1_t4848_PropertyInfos/* properties */
	, InternalEnumerator_1_t4848_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t700_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4848_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4848_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4848_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4848_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4848_1_0_0/* this_arg */
	, InternalEnumerator_1_t4848_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4848_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4848_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4848)+ sizeof (Il2CppObject)/* instance_size */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
