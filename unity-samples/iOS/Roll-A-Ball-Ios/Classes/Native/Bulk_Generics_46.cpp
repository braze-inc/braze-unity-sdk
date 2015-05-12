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
extern TypeInfo IList_1_t8687_il2cpp_TypeInfo;

// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>
extern MethodInfo IList_1_get_Item_m45062_MethodInfo;
extern MethodInfo IList_1_set_Item_m45063_MethodInfo;
static PropertyInfo IList_1_t8687____Item_PropertyInfo = 
{
	&IList_1_t8687_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45062_MethodInfo/* get */
	, &IList_1_set_Item_m45063_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8687_PropertyInfos[] =
{
	&IList_1_t8687____Item_PropertyInfo,
	NULL
};
extern Il2CppType StackFrame_t1077_0_0_0;
extern Il2CppType StackFrame_t1077_0_0_0;
static ParameterInfo IList_1_t8687_IList_1_IndexOf_m45064_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StackFrame_t1077_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45064_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45064_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8687_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8687_IList_1_IndexOf_m45064_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45064_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType StackFrame_t1077_0_0_0;
static ParameterInfo IList_1_t8687_IList_1_Insert_m45065_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StackFrame_t1077_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45065_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45065_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8687_IList_1_Insert_m45065_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45065_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8687_IList_1_RemoveAt_m45066_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45066_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45066_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8687_IList_1_RemoveAt_m45066_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45066_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8687_IList_1_get_Item_m45062_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType StackFrame_t1077_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45062_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45062_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8687_il2cpp_TypeInfo/* declaring_type */
	, &StackFrame_t1077_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8687_IList_1_get_Item_m45062_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45062_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType StackFrame_t1077_0_0_0;
static ParameterInfo IList_1_t8687_IList_1_set_Item_m45063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StackFrame_t1077_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45063_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.StackFrame>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45063_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8687_IList_1_set_Item_m45063_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45063_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8687_MethodInfos[] =
{
	&IList_1_IndexOf_m45064_MethodInfo,
	&IList_1_Insert_m45065_MethodInfo,
	&IList_1_RemoveAt_m45066_MethodInfo,
	&IList_1_get_Item_m45062_MethodInfo,
	&IList_1_set_Item_m45063_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t8686_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8688_il2cpp_TypeInfo;
static TypeInfo* IList_1_t8687_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8686_il2cpp_TypeInfo,
	&IEnumerable_1_t8688_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8687_0_0_0;
extern Il2CppType IList_1_t8687_1_0_0;
struct IList_1_t8687;
extern Il2CppGenericClass IList_1_t8687_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8687_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8687_MethodInfos/* methods */
	, IList_1_t8687_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8687_il2cpp_TypeInfo/* element_class */
	, IList_1_t8687_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8687_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8687_0_0_0/* byval_arg */
	, &IList_1_t8687_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8687_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6733_il2cpp_TypeInfo;

// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"


// T System.Collections.Generic.IEnumerator`1<System.Globalization.CompareOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.CompareOptions>
extern MethodInfo IEnumerator_1_get_Current_m45067_MethodInfo;
static PropertyInfo IEnumerator_1_t6733____Current_PropertyInfo = 
{
	&IEnumerator_1_t6733_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6733_PropertyInfos[] =
{
	&IEnumerator_1_t6733____Current_PropertyInfo,
	NULL
};
extern Il2CppType CompareOptions_t1544_0_0_0;
extern void* RuntimeInvoker_CompareOptions_t1544 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45067_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.CompareOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45067_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6733_il2cpp_TypeInfo/* declaring_type */
	, &CompareOptions_t1544_0_0_0/* return_type */
	, RuntimeInvoker_CompareOptions_t1544/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45067_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6733_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45067_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t19_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t6733_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6733_0_0_0;
extern Il2CppType IEnumerator_1_t6733_1_0_0;
struct IEnumerator_1_t6733;
extern Il2CppGenericClass IEnumerator_1_t6733_GenericClass;
TypeInfo IEnumerator_1_t6733_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6733_MethodInfos/* methods */
	, IEnumerator_1_t6733_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6733_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6733_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6733_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6733_0_0_0/* byval_arg */
	, &IEnumerator_1_t6733_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6733_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_602.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4766_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_602MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo CompareOptions_t1544_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1545_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m26063_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6656_MethodInfo;
extern MethodInfo Array_get_Length_m1925_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompareOptions_t1544_m34705_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.CompareOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.CompareOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCompareOptions_t1544_m34705 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26059_MethodInfo;
 void InternalEnumerator_1__ctor_m26059 (InternalEnumerator_1_t4766 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060 (InternalEnumerator_1_t4766 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26063(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26063_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CompareOptions_t1544_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26061_MethodInfo;
 void InternalEnumerator_1_Dispose_m26061 (InternalEnumerator_1_t4766 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26062_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26062 (InternalEnumerator_1_t4766 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26063 (InternalEnumerator_1_t4766 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCompareOptions_t1544_m34705(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCompareOptions_t1544_m34705_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4766____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4766, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4766____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4766, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4766_FieldInfos[] =
{
	&InternalEnumerator_1_t4766____array_0_FieldInfo,
	&InternalEnumerator_1_t4766____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4766____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4766_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4766____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4766_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26063_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4766_PropertyInfos[] =
{
	&InternalEnumerator_1_t4766____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4766____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4766_InternalEnumerator_1__ctor_m26059_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26059_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26059_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26059/* method */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4766_InternalEnumerator_1__ctor_m26059_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26059_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060/* method */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26061_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26061_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26061/* method */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26061_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26062_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26062_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26062/* method */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26062_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptions_t1544_0_0_0;
extern void* RuntimeInvoker_CompareOptions_t1544 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26063_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.CompareOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26063_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26063/* method */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* declaring_type */
	, &CompareOptions_t1544_0_0_0/* return_type */
	, RuntimeInvoker_CompareOptions_t1544/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26063_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4766_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26059_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060_MethodInfo,
	&InternalEnumerator_1_Dispose_m26061_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26062_MethodInfo,
	&InternalEnumerator_1_get_Current_m26063_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4766_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26060_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26062_MethodInfo,
	&InternalEnumerator_1_Dispose_m26061_MethodInfo,
	&InternalEnumerator_1_get_Current_m26063_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4766_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6733_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4766_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6733_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4766_0_0_0;
extern Il2CppType InternalEnumerator_1_t4766_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4766_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4766_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4766_MethodInfos/* methods */
	, InternalEnumerator_1_t4766_PropertyInfos/* properties */
	, InternalEnumerator_1_t4766_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4766_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4766_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4766_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4766_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4766_1_0_0/* this_arg */
	, InternalEnumerator_1_t4766_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4766_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4766)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8689_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>
extern MethodInfo ICollection_1_get_Count_m45068_MethodInfo;
static PropertyInfo ICollection_1_t8689____Count_PropertyInfo = 
{
	&ICollection_1_t8689_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45068_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45069_MethodInfo;
static PropertyInfo ICollection_1_t8689____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8689_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45069_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8689_PropertyInfos[] =
{
	&ICollection_1_t8689____Count_PropertyInfo,
	&ICollection_1_t8689____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45068_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m45068_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45068_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45069_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45069_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45069_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptions_t1544_0_0_0;
extern Il2CppType CompareOptions_t1544_0_0_0;
static ParameterInfo ICollection_1_t8689_ICollection_1_Add_m45070_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t1544_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45070_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Add(T)
MethodInfo ICollection_1_Add_m45070_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8689_ICollection_1_Add_m45070_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45070_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45071_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Clear()
MethodInfo ICollection_1_Clear_m45071_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45071_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptions_t1544_0_0_0;
static ParameterInfo ICollection_1_t8689_ICollection_1_Contains_m45072_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t1544_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45072_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m45072_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8689_ICollection_1_Contains_m45072_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45072_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptionsU5BU5D_t5040_0_0_0;
extern Il2CppType CompareOptionsU5BU5D_t5040_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8689_ICollection_1_CopyTo_m45073_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptionsU5BU5D_t5040_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45073_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45073_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8689_ICollection_1_CopyTo_m45073_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45073_GenericMethod/* genericMethod */

};
extern Il2CppType CompareOptions_t1544_0_0_0;
static ParameterInfo ICollection_1_t8689_ICollection_1_Remove_m45074_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t1544_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45074_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.CompareOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m45074_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8689_ICollection_1_Remove_m45074_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45074_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8689_MethodInfos[] =
{
	&ICollection_1_get_Count_m45068_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45069_MethodInfo,
	&ICollection_1_Add_m45070_MethodInfo,
	&ICollection_1_Clear_m45071_MethodInfo,
	&ICollection_1_Contains_m45072_MethodInfo,
	&ICollection_1_CopyTo_m45073_MethodInfo,
	&ICollection_1_Remove_m45074_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8691_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8689_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8691_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8689_0_0_0;
extern Il2CppType ICollection_1_t8689_1_0_0;
struct ICollection_1_t8689;
extern Il2CppGenericClass ICollection_1_t8689_GenericClass;
TypeInfo ICollection_1_t8689_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8689_MethodInfos/* methods */
	, ICollection_1_t8689_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8689_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8689_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8689_0_0_0/* byval_arg */
	, &ICollection_1_t8689_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8689_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.CompareOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.CompareOptions>
extern Il2CppType IEnumerator_1_t6733_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45075_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.CompareOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45075_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8691_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6733_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45075_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8691_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45075_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8691_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8691_0_0_0;
extern Il2CppType IEnumerable_1_t8691_1_0_0;
struct IEnumerable_1_t8691;
extern Il2CppGenericClass IEnumerable_1_t8691_GenericClass;
TypeInfo IEnumerable_1_t8691_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8691_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8691_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8691_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8691_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8691_0_0_0/* byval_arg */
	, &IEnumerable_1_t8691_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8691_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8690_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.CompareOptions>
extern MethodInfo IList_1_get_Item_m45076_MethodInfo;
extern MethodInfo IList_1_set_Item_m45077_MethodInfo;
static PropertyInfo IList_1_t8690____Item_PropertyInfo = 
{
	&IList_1_t8690_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45076_MethodInfo/* get */
	, &IList_1_set_Item_m45077_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8690_PropertyInfos[] =
{
	&IList_1_t8690____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompareOptions_t1544_0_0_0;
static ParameterInfo IList_1_t8690_IList_1_IndexOf_m45078_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t1544_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45078_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45078_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8690_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8690_IList_1_IndexOf_m45078_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45078_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CompareOptions_t1544_0_0_0;
static ParameterInfo IList_1_t8690_IList_1_Insert_m45079_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t1544_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45079_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45079_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8690_IList_1_Insert_m45079_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45079_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8690_IList_1_RemoveAt_m45080_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45080_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45080_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8690_IList_1_RemoveAt_m45080_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45080_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8690_IList_1_get_Item_m45076_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType CompareOptions_t1544_0_0_0;
extern void* RuntimeInvoker_CompareOptions_t1544_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45076_GenericMethod;
// T System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45076_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8690_il2cpp_TypeInfo/* declaring_type */
	, &CompareOptions_t1544_0_0_0/* return_type */
	, RuntimeInvoker_CompareOptions_t1544_Int32_t73/* invoker_method */
	, IList_1_t8690_IList_1_get_Item_m45076_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45076_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CompareOptions_t1544_0_0_0;
static ParameterInfo IList_1_t8690_IList_1_set_Item_m45077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompareOptions_t1544_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45077_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.CompareOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45077_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8690_IList_1_set_Item_m45077_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45077_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8690_MethodInfos[] =
{
	&IList_1_IndexOf_m45078_MethodInfo,
	&IList_1_Insert_m45079_MethodInfo,
	&IList_1_RemoveAt_m45080_MethodInfo,
	&IList_1_get_Item_m45076_MethodInfo,
	&IList_1_set_Item_m45077_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8690_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8689_il2cpp_TypeInfo,
	&IEnumerable_1_t8691_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8690_0_0_0;
extern Il2CppType IList_1_t8690_1_0_0;
struct IList_1_t8690;
extern Il2CppGenericClass IList_1_t8690_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8690_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8690_MethodInfos/* methods */
	, IList_1_t8690_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8690_il2cpp_TypeInfo/* element_class */
	, IList_1_t8690_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8690_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8690_0_0_0/* byval_arg */
	, &IList_1_t8690_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8690_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6735_il2cpp_TypeInfo;

// System.Globalization.Calendar
#include "mscorlib_System_Globalization_Calendar.h"


// T System.Collections.Generic.IEnumerator`1<System.Globalization.Calendar>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.Calendar>
extern MethodInfo IEnumerator_1_get_Current_m45081_MethodInfo;
static PropertyInfo IEnumerator_1_t6735____Current_PropertyInfo = 
{
	&IEnumerator_1_t6735_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45081_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6735_PropertyInfos[] =
{
	&IEnumerator_1_t6735____Current_PropertyInfo,
	NULL
};
extern Il2CppType Calendar_t1908_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45081_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.Calendar>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45081_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6735_il2cpp_TypeInfo/* declaring_type */
	, &Calendar_t1908_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45081_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6735_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45081_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6735_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6735_0_0_0;
extern Il2CppType IEnumerator_1_t6735_1_0_0;
struct IEnumerator_1_t6735;
extern Il2CppGenericClass IEnumerator_1_t6735_GenericClass;
TypeInfo IEnumerator_1_t6735_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6735_MethodInfos/* methods */
	, IEnumerator_1_t6735_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6735_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6735_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6735_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6735_0_0_0/* byval_arg */
	, &IEnumerator_1_t6735_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6735_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Globalization.Calendar>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_603.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4767_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.Calendar>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_603MethodDeclarations.h"

extern TypeInfo Calendar_t1908_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26068_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCalendar_t1908_m34716_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26983_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26983(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.Calendar>(System.Int32)
#define Array_InternalArray__get_Item_TisCalendar_t1908_m34716(__this, p0, method) (Calendar_t1908 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Globalization.Calendar>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.Calendar>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Globalization.Calendar>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.Calendar>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4767____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4767, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4767____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4767, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4767_FieldInfos[] =
{
	&InternalEnumerator_1_t4767____array_0_FieldInfo,
	&InternalEnumerator_1_t4767____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26065_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4767____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4767_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4767____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4767_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26068_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4767_PropertyInfos[] =
{
	&InternalEnumerator_1_t4767____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4767____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4767_InternalEnumerator_1__ctor_m26064_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26064_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26064_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4767_InternalEnumerator_1__ctor_m26064_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26064_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26065_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.Calendar>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26065_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26065_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26066_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.Calendar>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26066_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26066_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26067_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.Calendar>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26067_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26067_GenericMethod/* genericMethod */

};
extern Il2CppType Calendar_t1908_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26068_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.Calendar>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26068_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* declaring_type */
	, &Calendar_t1908_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26068_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4767_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26064_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26065_MethodInfo,
	&InternalEnumerator_1_Dispose_m26066_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26067_MethodInfo,
	&InternalEnumerator_1_get_Current_m26068_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26067_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26066_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4767_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26065_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26067_MethodInfo,
	&InternalEnumerator_1_Dispose_m26066_MethodInfo,
	&InternalEnumerator_1_get_Current_m26068_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4767_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6735_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4767_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6735_il2cpp_TypeInfo, 7},
};
extern TypeInfo Calendar_t1908_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4767_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26068_MethodInfo/* Method Usage */,
	&Calendar_t1908_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCalendar_t1908_m34716_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4767_0_0_0;
extern Il2CppType InternalEnumerator_1_t4767_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4767_GenericClass;
TypeInfo InternalEnumerator_1_t4767_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4767_MethodInfos/* methods */
	, InternalEnumerator_1_t4767_PropertyInfos/* properties */
	, InternalEnumerator_1_t4767_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4767_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4767_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4767_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4767_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4767_1_0_0/* this_arg */
	, InternalEnumerator_1_t4767_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4767_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4767_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4767)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8692_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.Calendar>
extern MethodInfo ICollection_1_get_Count_m45082_MethodInfo;
static PropertyInfo ICollection_1_t8692____Count_PropertyInfo = 
{
	&ICollection_1_t8692_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45082_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45083_MethodInfo;
static PropertyInfo ICollection_1_t8692____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8692_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45083_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8692_PropertyInfos[] =
{
	&ICollection_1_t8692____Count_PropertyInfo,
	&ICollection_1_t8692____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45082_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_Count()
MethodInfo ICollection_1_get_Count_m45082_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45082_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45083_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45083_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45083_GenericMethod/* genericMethod */

};
extern Il2CppType Calendar_t1908_0_0_0;
extern Il2CppType Calendar_t1908_0_0_0;
static ParameterInfo ICollection_1_t8692_ICollection_1_Add_m45084_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Calendar_t1908_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45084_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Add(T)
MethodInfo ICollection_1_Add_m45084_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8692_ICollection_1_Add_m45084_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45084_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45085_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Clear()
MethodInfo ICollection_1_Clear_m45085_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45085_GenericMethod/* genericMethod */

};
extern Il2CppType Calendar_t1908_0_0_0;
static ParameterInfo ICollection_1_t8692_ICollection_1_Contains_m45086_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Calendar_t1908_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45086_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Contains(T)
MethodInfo ICollection_1_Contains_m45086_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8692_ICollection_1_Contains_m45086_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45086_GenericMethod/* genericMethod */

};
extern Il2CppType CalendarU5BU5D_t1913_0_0_0;
extern Il2CppType CalendarU5BU5D_t1913_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8692_ICollection_1_CopyTo_m45087_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CalendarU5BU5D_t1913_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45087_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45087_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8692_ICollection_1_CopyTo_m45087_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45087_GenericMethod/* genericMethod */

};
extern Il2CppType Calendar_t1908_0_0_0;
static ParameterInfo ICollection_1_t8692_ICollection_1_Remove_m45088_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Calendar_t1908_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45088_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.Calendar>::Remove(T)
MethodInfo ICollection_1_Remove_m45088_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8692_ICollection_1_Remove_m45088_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45088_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8692_MethodInfos[] =
{
	&ICollection_1_get_Count_m45082_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45083_MethodInfo,
	&ICollection_1_Add_m45084_MethodInfo,
	&ICollection_1_Clear_m45085_MethodInfo,
	&ICollection_1_Contains_m45086_MethodInfo,
	&ICollection_1_CopyTo_m45087_MethodInfo,
	&ICollection_1_Remove_m45088_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8694_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8692_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8694_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8692_0_0_0;
extern Il2CppType ICollection_1_t8692_1_0_0;
struct ICollection_1_t8692;
extern Il2CppGenericClass ICollection_1_t8692_GenericClass;
TypeInfo ICollection_1_t8692_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8692_MethodInfos/* methods */
	, ICollection_1_t8692_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8692_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8692_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8692_0_0_0/* byval_arg */
	, &ICollection_1_t8692_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8692_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.Calendar>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.Calendar>
extern Il2CppType IEnumerator_1_t6735_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45089_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.Calendar>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45089_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8694_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6735_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45089_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8694_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45089_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8694_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8694_0_0_0;
extern Il2CppType IEnumerable_1_t8694_1_0_0;
struct IEnumerable_1_t8694;
extern Il2CppGenericClass IEnumerable_1_t8694_GenericClass;
TypeInfo IEnumerable_1_t8694_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8694_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8694_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8694_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8694_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8694_0_0_0/* byval_arg */
	, &IEnumerable_1_t8694_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8694_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8693_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.Calendar>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.Calendar>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.Calendar>
extern MethodInfo IList_1_get_Item_m45090_MethodInfo;
extern MethodInfo IList_1_set_Item_m45091_MethodInfo;
static PropertyInfo IList_1_t8693____Item_PropertyInfo = 
{
	&IList_1_t8693_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45090_MethodInfo/* get */
	, &IList_1_set_Item_m45091_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8693_PropertyInfos[] =
{
	&IList_1_t8693____Item_PropertyInfo,
	NULL
};
extern Il2CppType Calendar_t1908_0_0_0;
static ParameterInfo IList_1_t8693_IList_1_IndexOf_m45092_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Calendar_t1908_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45092_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Globalization.Calendar>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45092_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8693_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8693_IList_1_IndexOf_m45092_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45092_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Calendar_t1908_0_0_0;
static ParameterInfo IList_1_t8693_IList_1_Insert_m45093_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Calendar_t1908_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45093_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45093_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8693_IList_1_Insert_m45093_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45093_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8693_IList_1_RemoveAt_m45094_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45094_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45094_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8693_IList_1_RemoveAt_m45094_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45094_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8693_IList_1_get_Item_m45090_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Calendar_t1908_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45090_GenericMethod;
// T System.Collections.Generic.IList`1<System.Globalization.Calendar>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45090_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8693_il2cpp_TypeInfo/* declaring_type */
	, &Calendar_t1908_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8693_IList_1_get_Item_m45090_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45090_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Calendar_t1908_0_0_0;
static ParameterInfo IList_1_t8693_IList_1_set_Item_m45091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Calendar_t1908_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45091_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.Calendar>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45091_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8693_IList_1_set_Item_m45091_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45091_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8693_MethodInfos[] =
{
	&IList_1_IndexOf_m45092_MethodInfo,
	&IList_1_Insert_m45093_MethodInfo,
	&IList_1_RemoveAt_m45094_MethodInfo,
	&IList_1_get_Item_m45090_MethodInfo,
	&IList_1_set_Item_m45091_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8693_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8692_il2cpp_TypeInfo,
	&IEnumerable_1_t8694_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8693_0_0_0;
extern Il2CppType IList_1_t8693_1_0_0;
struct IList_1_t8693;
extern Il2CppGenericClass IList_1_t8693_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8693_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8693_MethodInfos/* methods */
	, IList_1_t8693_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8693_il2cpp_TypeInfo/* element_class */
	, IList_1_t8693_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8693_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8693_0_0_0/* byval_arg */
	, &IList_1_t8693_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8693_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6737_il2cpp_TypeInfo;

// System.Globalization.DateTimeFormatFlags
#include "mscorlib_System_Globalization_DateTimeFormatFlags.h"


// T System.Collections.Generic.IEnumerator`1<System.Globalization.DateTimeFormatFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.DateTimeFormatFlags>
extern MethodInfo IEnumerator_1_get_Current_m45095_MethodInfo;
static PropertyInfo IEnumerator_1_t6737____Current_PropertyInfo = 
{
	&IEnumerator_1_t6737_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45095_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6737_PropertyInfos[] =
{
	&IEnumerator_1_t6737____Current_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
extern void* RuntimeInvoker_DateTimeFormatFlags_t1914 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45095_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.DateTimeFormatFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45095_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6737_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeFormatFlags_t1914_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeFormatFlags_t1914/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45095_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6737_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45095_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6737_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6737_0_0_0;
extern Il2CppType IEnumerator_1_t6737_1_0_0;
struct IEnumerator_1_t6737;
extern Il2CppGenericClass IEnumerator_1_t6737_GenericClass;
TypeInfo IEnumerator_1_t6737_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6737_MethodInfos/* methods */
	, IEnumerator_1_t6737_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6737_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6737_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6737_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6737_0_0_0/* byval_arg */
	, &IEnumerator_1_t6737_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6737_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_604.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4768_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_604MethodDeclarations.h"

extern TypeInfo DateTimeFormatFlags_t1914_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26073_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDateTimeFormatFlags_t1914_m34727_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.DateTimeFormatFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.DateTimeFormatFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDateTimeFormatFlags_t1914_m34727 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26069_MethodInfo;
 void InternalEnumerator_1__ctor_m26069 (InternalEnumerator_1_t4768 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070 (InternalEnumerator_1_t4768 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26073(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26073_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DateTimeFormatFlags_t1914_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26071_MethodInfo;
 void InternalEnumerator_1_Dispose_m26071 (InternalEnumerator_1_t4768 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26072_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26072 (InternalEnumerator_1_t4768 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26073 (InternalEnumerator_1_t4768 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDateTimeFormatFlags_t1914_m34727(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDateTimeFormatFlags_t1914_m34727_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4768____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4768, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4768____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4768, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4768_FieldInfos[] =
{
	&InternalEnumerator_1_t4768____array_0_FieldInfo,
	&InternalEnumerator_1_t4768____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4768____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4768_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4768____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4768_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26073_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4768_PropertyInfos[] =
{
	&InternalEnumerator_1_t4768____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4768____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4768_InternalEnumerator_1__ctor_m26069_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26069_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26069_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26069/* method */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4768_InternalEnumerator_1__ctor_m26069_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26069_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070/* method */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26071_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26071_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26071/* method */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26071_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26072_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26072_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26072/* method */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26072_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
extern void* RuntimeInvoker_DateTimeFormatFlags_t1914 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26073_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.DateTimeFormatFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26073_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26073/* method */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeFormatFlags_t1914_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeFormatFlags_t1914/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26073_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4768_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26069_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070_MethodInfo,
	&InternalEnumerator_1_Dispose_m26071_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26072_MethodInfo,
	&InternalEnumerator_1_get_Current_m26073_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4768_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26070_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26072_MethodInfo,
	&InternalEnumerator_1_Dispose_m26071_MethodInfo,
	&InternalEnumerator_1_get_Current_m26073_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4768_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6737_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4768_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6737_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4768_0_0_0;
extern Il2CppType InternalEnumerator_1_t4768_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4768_GenericClass;
TypeInfo InternalEnumerator_1_t4768_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4768_MethodInfos/* methods */
	, InternalEnumerator_1_t4768_PropertyInfos/* properties */
	, InternalEnumerator_1_t4768_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4768_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4768_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4768_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4768_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4768_1_0_0/* this_arg */
	, InternalEnumerator_1_t4768_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4768_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4768)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8695_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>
extern MethodInfo ICollection_1_get_Count_m45096_MethodInfo;
static PropertyInfo ICollection_1_t8695____Count_PropertyInfo = 
{
	&ICollection_1_t8695_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45096_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45097_MethodInfo;
static PropertyInfo ICollection_1_t8695____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8695_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45097_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8695_PropertyInfos[] =
{
	&ICollection_1_t8695____Count_PropertyInfo,
	&ICollection_1_t8695____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45096_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m45096_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45096_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45097_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45097_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45097_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
static ParameterInfo ICollection_1_t8695_ICollection_1_Add_m45098_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeFormatFlags_t1914_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45098_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::Add(T)
MethodInfo ICollection_1_Add_m45098_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8695_ICollection_1_Add_m45098_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45098_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45099_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::Clear()
MethodInfo ICollection_1_Clear_m45099_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45099_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
static ParameterInfo ICollection_1_t8695_ICollection_1_Contains_m45100_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeFormatFlags_t1914_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45100_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m45100_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8695_ICollection_1_Contains_m45100_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45100_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeFormatFlagsU5BU5D_t5041_0_0_0;
extern Il2CppType DateTimeFormatFlagsU5BU5D_t5041_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8695_ICollection_1_CopyTo_m45101_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeFormatFlagsU5BU5D_t5041_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45101_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45101_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8695_ICollection_1_CopyTo_m45101_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45101_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
static ParameterInfo ICollection_1_t8695_ICollection_1_Remove_m45102_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeFormatFlags_t1914_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45102_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeFormatFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m45102_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8695_ICollection_1_Remove_m45102_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45102_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8695_MethodInfos[] =
{
	&ICollection_1_get_Count_m45096_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45097_MethodInfo,
	&ICollection_1_Add_m45098_MethodInfo,
	&ICollection_1_Clear_m45099_MethodInfo,
	&ICollection_1_Contains_m45100_MethodInfo,
	&ICollection_1_CopyTo_m45101_MethodInfo,
	&ICollection_1_Remove_m45102_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8697_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8695_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8697_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8695_0_0_0;
extern Il2CppType ICollection_1_t8695_1_0_0;
struct ICollection_1_t8695;
extern Il2CppGenericClass ICollection_1_t8695_GenericClass;
TypeInfo ICollection_1_t8695_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8695_MethodInfos/* methods */
	, ICollection_1_t8695_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8695_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8695_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8695_0_0_0/* byval_arg */
	, &ICollection_1_t8695_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8695_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.DateTimeFormatFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.DateTimeFormatFlags>
extern Il2CppType IEnumerator_1_t6737_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45103_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.DateTimeFormatFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45103_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8697_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6737_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45103_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8697_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45103_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8697_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8697_0_0_0;
extern Il2CppType IEnumerable_1_t8697_1_0_0;
struct IEnumerable_1_t8697;
extern Il2CppGenericClass IEnumerable_1_t8697_GenericClass;
TypeInfo IEnumerable_1_t8697_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8697_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8697_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8697_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8697_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8697_0_0_0/* byval_arg */
	, &IEnumerable_1_t8697_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8697_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8696_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>
extern MethodInfo IList_1_get_Item_m45104_MethodInfo;
extern MethodInfo IList_1_set_Item_m45105_MethodInfo;
static PropertyInfo IList_1_t8696____Item_PropertyInfo = 
{
	&IList_1_t8696_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45104_MethodInfo/* get */
	, &IList_1_set_Item_m45105_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8696_PropertyInfos[] =
{
	&IList_1_t8696____Item_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
static ParameterInfo IList_1_t8696_IList_1_IndexOf_m45106_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeFormatFlags_t1914_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45106_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45106_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8696_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8696_IList_1_IndexOf_m45106_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45106_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
static ParameterInfo IList_1_t8696_IList_1_Insert_m45107_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeFormatFlags_t1914_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45107_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45107_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8696_IList_1_Insert_m45107_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45107_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8696_IList_1_RemoveAt_m45108_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45108_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45108_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8696_IList_1_RemoveAt_m45108_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45108_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8696_IList_1_get_Item_m45104_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
extern void* RuntimeInvoker_DateTimeFormatFlags_t1914_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45104_GenericMethod;
// T System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45104_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8696_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeFormatFlags_t1914_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeFormatFlags_t1914_Int32_t73/* invoker_method */
	, IList_1_t8696_IList_1_get_Item_m45104_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45104_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DateTimeFormatFlags_t1914_0_0_0;
static ParameterInfo IList_1_t8696_IList_1_set_Item_m45105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeFormatFlags_t1914_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45105_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeFormatFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45105_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8696_IList_1_set_Item_m45105_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45105_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8696_MethodInfos[] =
{
	&IList_1_IndexOf_m45106_MethodInfo,
	&IList_1_Insert_m45107_MethodInfo,
	&IList_1_RemoveAt_m45108_MethodInfo,
	&IList_1_get_Item_m45104_MethodInfo,
	&IList_1_set_Item_m45105_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8696_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8695_il2cpp_TypeInfo,
	&IEnumerable_1_t8697_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8696_0_0_0;
extern Il2CppType IList_1_t8696_1_0_0;
struct IList_1_t8696;
extern Il2CppGenericClass IList_1_t8696_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8696_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8696_MethodInfos/* methods */
	, IList_1_t8696_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8696_il2cpp_TypeInfo/* element_class */
	, IList_1_t8696_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8696_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8696_0_0_0/* byval_arg */
	, &IList_1_t8696_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8696_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6739_il2cpp_TypeInfo;

// System.Globalization.DateTimeStyles
#include "mscorlib_System_Globalization_DateTimeStyles.h"


// T System.Collections.Generic.IEnumerator`1<System.Globalization.DateTimeStyles>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.DateTimeStyles>
extern MethodInfo IEnumerator_1_get_Current_m45109_MethodInfo;
static PropertyInfo IEnumerator_1_t6739____Current_PropertyInfo = 
{
	&IEnumerator_1_t6739_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45109_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6739_PropertyInfos[] =
{
	&IEnumerator_1_t6739____Current_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeStyles_t1915_0_0_0;
extern void* RuntimeInvoker_DateTimeStyles_t1915 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45109_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.DateTimeStyles>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45109_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6739_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeStyles_t1915_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeStyles_t1915/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45109_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6739_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45109_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6739_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6739_0_0_0;
extern Il2CppType IEnumerator_1_t6739_1_0_0;
struct IEnumerator_1_t6739;
extern Il2CppGenericClass IEnumerator_1_t6739_GenericClass;
TypeInfo IEnumerator_1_t6739_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6739_MethodInfos/* methods */
	, IEnumerator_1_t6739_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6739_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6739_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6739_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6739_0_0_0/* byval_arg */
	, &IEnumerator_1_t6739_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6739_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_605.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4769_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_605MethodDeclarations.h"

extern TypeInfo DateTimeStyles_t1915_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26078_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDateTimeStyles_t1915_m34738_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.DateTimeStyles>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.DateTimeStyles>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDateTimeStyles_t1915_m34738 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26074_MethodInfo;
 void InternalEnumerator_1__ctor_m26074 (InternalEnumerator_1_t4769 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075 (InternalEnumerator_1_t4769 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26078(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26078_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DateTimeStyles_t1915_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26076_MethodInfo;
 void InternalEnumerator_1_Dispose_m26076 (InternalEnumerator_1_t4769 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26077_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26077 (InternalEnumerator_1_t4769 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26078 (InternalEnumerator_1_t4769 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDateTimeStyles_t1915_m34738(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDateTimeStyles_t1915_m34738_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4769____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4769, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4769____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4769, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4769_FieldInfos[] =
{
	&InternalEnumerator_1_t4769____array_0_FieldInfo,
	&InternalEnumerator_1_t4769____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4769____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4769_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4769____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4769_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26078_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4769_PropertyInfos[] =
{
	&InternalEnumerator_1_t4769____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4769____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4769_InternalEnumerator_1__ctor_m26074_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26074_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26074_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26074/* method */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4769_InternalEnumerator_1__ctor_m26074_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26074_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075/* method */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26076_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26076_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26076/* method */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26076_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26077_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26077_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26077/* method */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26077_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeStyles_t1915_0_0_0;
extern void* RuntimeInvoker_DateTimeStyles_t1915 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26078_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.DateTimeStyles>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26078_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26078/* method */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeStyles_t1915_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeStyles_t1915/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26078_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4769_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26074_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075_MethodInfo,
	&InternalEnumerator_1_Dispose_m26076_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26077_MethodInfo,
	&InternalEnumerator_1_get_Current_m26078_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4769_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26075_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26077_MethodInfo,
	&InternalEnumerator_1_Dispose_m26076_MethodInfo,
	&InternalEnumerator_1_get_Current_m26078_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4769_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6739_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4769_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6739_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4769_0_0_0;
extern Il2CppType InternalEnumerator_1_t4769_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4769_GenericClass;
TypeInfo InternalEnumerator_1_t4769_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4769_MethodInfos/* methods */
	, InternalEnumerator_1_t4769_PropertyInfos/* properties */
	, InternalEnumerator_1_t4769_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4769_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4769_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4769_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4769_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4769_1_0_0/* this_arg */
	, InternalEnumerator_1_t4769_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4769_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4769)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8698_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>
extern MethodInfo ICollection_1_get_Count_m45110_MethodInfo;
static PropertyInfo ICollection_1_t8698____Count_PropertyInfo = 
{
	&ICollection_1_t8698_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45110_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45111_MethodInfo;
static PropertyInfo ICollection_1_t8698____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8698_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45111_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8698_PropertyInfos[] =
{
	&ICollection_1_t8698____Count_PropertyInfo,
	&ICollection_1_t8698____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45110_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::get_Count()
MethodInfo ICollection_1_get_Count_m45110_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45110_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45111_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45111_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45111_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeStyles_t1915_0_0_0;
extern Il2CppType DateTimeStyles_t1915_0_0_0;
static ParameterInfo ICollection_1_t8698_ICollection_1_Add_m45112_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeStyles_t1915_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45112_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::Add(T)
MethodInfo ICollection_1_Add_m45112_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8698_ICollection_1_Add_m45112_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45112_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45113_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::Clear()
MethodInfo ICollection_1_Clear_m45113_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45113_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeStyles_t1915_0_0_0;
static ParameterInfo ICollection_1_t8698_ICollection_1_Contains_m45114_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeStyles_t1915_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45114_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::Contains(T)
MethodInfo ICollection_1_Contains_m45114_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8698_ICollection_1_Contains_m45114_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45114_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeStylesU5BU5D_t5042_0_0_0;
extern Il2CppType DateTimeStylesU5BU5D_t5042_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8698_ICollection_1_CopyTo_m45115_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeStylesU5BU5D_t5042_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45115_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45115_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8698_ICollection_1_CopyTo_m45115_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45115_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeStyles_t1915_0_0_0;
static ParameterInfo ICollection_1_t8698_ICollection_1_Remove_m45116_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeStyles_t1915_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45116_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.DateTimeStyles>::Remove(T)
MethodInfo ICollection_1_Remove_m45116_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8698_ICollection_1_Remove_m45116_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45116_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8698_MethodInfos[] =
{
	&ICollection_1_get_Count_m45110_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45111_MethodInfo,
	&ICollection_1_Add_m45112_MethodInfo,
	&ICollection_1_Clear_m45113_MethodInfo,
	&ICollection_1_Contains_m45114_MethodInfo,
	&ICollection_1_CopyTo_m45115_MethodInfo,
	&ICollection_1_Remove_m45116_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8700_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8698_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8700_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8698_0_0_0;
extern Il2CppType ICollection_1_t8698_1_0_0;
struct ICollection_1_t8698;
extern Il2CppGenericClass ICollection_1_t8698_GenericClass;
TypeInfo ICollection_1_t8698_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8698_MethodInfos/* methods */
	, ICollection_1_t8698_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8698_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8698_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8698_0_0_0/* byval_arg */
	, &ICollection_1_t8698_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8698_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.DateTimeStyles>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.DateTimeStyles>
extern Il2CppType IEnumerator_1_t6739_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45117_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.DateTimeStyles>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45117_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8700_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6739_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45117_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8700_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45117_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8700_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8700_0_0_0;
extern Il2CppType IEnumerable_1_t8700_1_0_0;
struct IEnumerable_1_t8700;
extern Il2CppGenericClass IEnumerable_1_t8700_GenericClass;
TypeInfo IEnumerable_1_t8700_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8700_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8700_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8700_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8700_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8700_0_0_0/* byval_arg */
	, &IEnumerable_1_t8700_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8700_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8699_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>
extern MethodInfo IList_1_get_Item_m45118_MethodInfo;
extern MethodInfo IList_1_set_Item_m45119_MethodInfo;
static PropertyInfo IList_1_t8699____Item_PropertyInfo = 
{
	&IList_1_t8699_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45118_MethodInfo/* get */
	, &IList_1_set_Item_m45119_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8699_PropertyInfos[] =
{
	&IList_1_t8699____Item_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeStyles_t1915_0_0_0;
static ParameterInfo IList_1_t8699_IList_1_IndexOf_m45120_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeStyles_t1915_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45120_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45120_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8699_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8699_IList_1_IndexOf_m45120_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45120_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DateTimeStyles_t1915_0_0_0;
static ParameterInfo IList_1_t8699_IList_1_Insert_m45121_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeStyles_t1915_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45121_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45121_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8699_IList_1_Insert_m45121_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45121_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8699_IList_1_RemoveAt_m45122_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45122_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45122_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8699_IList_1_RemoveAt_m45122_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45122_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8699_IList_1_get_Item_m45118_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DateTimeStyles_t1915_0_0_0;
extern void* RuntimeInvoker_DateTimeStyles_t1915_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45118_GenericMethod;
// T System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45118_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8699_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeStyles_t1915_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeStyles_t1915_Int32_t73/* invoker_method */
	, IList_1_t8699_IList_1_get_Item_m45118_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45118_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DateTimeStyles_t1915_0_0_0;
static ParameterInfo IList_1_t8699_IList_1_set_Item_m45119_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeStyles_t1915_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45119_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.DateTimeStyles>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45119_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8699_IList_1_set_Item_m45119_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45119_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8699_MethodInfos[] =
{
	&IList_1_IndexOf_m45120_MethodInfo,
	&IList_1_Insert_m45121_MethodInfo,
	&IList_1_RemoveAt_m45122_MethodInfo,
	&IList_1_get_Item_m45118_MethodInfo,
	&IList_1_set_Item_m45119_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8699_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8698_il2cpp_TypeInfo,
	&IEnumerable_1_t8700_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8699_0_0_0;
extern Il2CppType IList_1_t8699_1_0_0;
struct IList_1_t8699;
extern Il2CppGenericClass IList_1_t8699_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8699_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8699_MethodInfos/* methods */
	, IList_1_t8699_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8699_il2cpp_TypeInfo/* element_class */
	, IList_1_t8699_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8699_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8699_0_0_0/* byval_arg */
	, &IList_1_t8699_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8699_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6741_il2cpp_TypeInfo;

// System.Globalization.GregorianCalendarTypes
#include "mscorlib_System_Globalization_GregorianCalendarTypes.h"


// T System.Collections.Generic.IEnumerator`1<System.Globalization.GregorianCalendarTypes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo IEnumerator_1_get_Current_m45123_MethodInfo;
static PropertyInfo IEnumerator_1_t6741____Current_PropertyInfo = 
{
	&IEnumerator_1_t6741_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45123_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6741_PropertyInfos[] =
{
	&IEnumerator_1_t6741____Current_PropertyInfo,
	NULL
};
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
extern void* RuntimeInvoker_GregorianCalendarTypes_t1918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45123_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.GregorianCalendarTypes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45123_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6741_il2cpp_TypeInfo/* declaring_type */
	, &GregorianCalendarTypes_t1918_0_0_0/* return_type */
	, RuntimeInvoker_GregorianCalendarTypes_t1918/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45123_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6741_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45123_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6741_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6741_0_0_0;
extern Il2CppType IEnumerator_1_t6741_1_0_0;
struct IEnumerator_1_t6741;
extern Il2CppGenericClass IEnumerator_1_t6741_GenericClass;
TypeInfo IEnumerator_1_t6741_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6741_MethodInfos/* methods */
	, IEnumerator_1_t6741_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6741_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6741_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6741_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6741_0_0_0/* byval_arg */
	, &IEnumerator_1_t6741_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6741_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_606.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4770_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_606MethodDeclarations.h"

extern TypeInfo GregorianCalendarTypes_t1918_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26083_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGregorianCalendarTypes_t1918_m34749_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.GregorianCalendarTypes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.GregorianCalendarTypes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisGregorianCalendarTypes_t1918_m34749 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26079_MethodInfo;
 void InternalEnumerator_1__ctor_m26079 (InternalEnumerator_1_t4770 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080 (InternalEnumerator_1_t4770 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26083(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26083_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&GregorianCalendarTypes_t1918_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26081_MethodInfo;
 void InternalEnumerator_1_Dispose_m26081 (InternalEnumerator_1_t4770 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26082_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26082 (InternalEnumerator_1_t4770 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26083 (InternalEnumerator_1_t4770 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisGregorianCalendarTypes_t1918_m34749(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisGregorianCalendarTypes_t1918_m34749_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4770____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4770, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4770____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4770, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4770_FieldInfos[] =
{
	&InternalEnumerator_1_t4770____array_0_FieldInfo,
	&InternalEnumerator_1_t4770____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4770____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4770_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4770____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4770_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26083_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4770_PropertyInfos[] =
{
	&InternalEnumerator_1_t4770____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4770____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4770_InternalEnumerator_1__ctor_m26079_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26079_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26079_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26079/* method */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4770_InternalEnumerator_1__ctor_m26079_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26079_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080/* method */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26081_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26081_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26081/* method */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26081_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26082_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26082_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26082/* method */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26082_GenericMethod/* genericMethod */

};
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
extern void* RuntimeInvoker_GregorianCalendarTypes_t1918 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26083_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.GregorianCalendarTypes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26083_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26083/* method */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* declaring_type */
	, &GregorianCalendarTypes_t1918_0_0_0/* return_type */
	, RuntimeInvoker_GregorianCalendarTypes_t1918/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26083_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4770_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26079_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080_MethodInfo,
	&InternalEnumerator_1_Dispose_m26081_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26082_MethodInfo,
	&InternalEnumerator_1_get_Current_m26083_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4770_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26080_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26082_MethodInfo,
	&InternalEnumerator_1_Dispose_m26081_MethodInfo,
	&InternalEnumerator_1_get_Current_m26083_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4770_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6741_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4770_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6741_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4770_0_0_0;
extern Il2CppType InternalEnumerator_1_t4770_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4770_GenericClass;
TypeInfo InternalEnumerator_1_t4770_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4770_MethodInfos/* methods */
	, InternalEnumerator_1_t4770_PropertyInfos/* properties */
	, InternalEnumerator_1_t4770_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4770_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4770_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4770_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4770_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4770_1_0_0/* this_arg */
	, InternalEnumerator_1_t4770_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4770_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4770)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8701_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo ICollection_1_get_Count_m45124_MethodInfo;
static PropertyInfo ICollection_1_t8701____Count_PropertyInfo = 
{
	&ICollection_1_t8701_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45124_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45125_MethodInfo;
static PropertyInfo ICollection_1_t8701____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8701_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45125_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8701_PropertyInfos[] =
{
	&ICollection_1_t8701____Count_PropertyInfo,
	&ICollection_1_t8701____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45124_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::get_Count()
MethodInfo ICollection_1_get_Count_m45124_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45124_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45125_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45125_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45125_GenericMethod/* genericMethod */

};
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
static ParameterInfo ICollection_1_t8701_ICollection_1_Add_m45126_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GregorianCalendarTypes_t1918_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45126_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::Add(T)
MethodInfo ICollection_1_Add_m45126_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8701_ICollection_1_Add_m45126_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45126_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45127_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::Clear()
MethodInfo ICollection_1_Clear_m45127_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45127_GenericMethod/* genericMethod */

};
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
static ParameterInfo ICollection_1_t8701_ICollection_1_Contains_m45128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GregorianCalendarTypes_t1918_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45128_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::Contains(T)
MethodInfo ICollection_1_Contains_m45128_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8701_ICollection_1_Contains_m45128_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45128_GenericMethod/* genericMethod */

};
extern Il2CppType GregorianCalendarTypesU5BU5D_t5043_0_0_0;
extern Il2CppType GregorianCalendarTypesU5BU5D_t5043_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8701_ICollection_1_CopyTo_m45129_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GregorianCalendarTypesU5BU5D_t5043_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45129_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45129_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8701_ICollection_1_CopyTo_m45129_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45129_GenericMethod/* genericMethod */

};
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
static ParameterInfo ICollection_1_t8701_ICollection_1_Remove_m45130_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GregorianCalendarTypes_t1918_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45130_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.GregorianCalendarTypes>::Remove(T)
MethodInfo ICollection_1_Remove_m45130_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8701_ICollection_1_Remove_m45130_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45130_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8701_MethodInfos[] =
{
	&ICollection_1_get_Count_m45124_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45125_MethodInfo,
	&ICollection_1_Add_m45126_MethodInfo,
	&ICollection_1_Clear_m45127_MethodInfo,
	&ICollection_1_Contains_m45128_MethodInfo,
	&ICollection_1_CopyTo_m45129_MethodInfo,
	&ICollection_1_Remove_m45130_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8703_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8701_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8703_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8701_0_0_0;
extern Il2CppType ICollection_1_t8701_1_0_0;
struct ICollection_1_t8701;
extern Il2CppGenericClass ICollection_1_t8701_GenericClass;
TypeInfo ICollection_1_t8701_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8701_MethodInfos/* methods */
	, ICollection_1_t8701_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8701_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8701_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8701_0_0_0/* byval_arg */
	, &ICollection_1_t8701_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8701_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.GregorianCalendarTypes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.GregorianCalendarTypes>
extern Il2CppType IEnumerator_1_t6741_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45131_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.GregorianCalendarTypes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45131_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8703_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6741_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45131_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8703_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45131_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8703_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8703_0_0_0;
extern Il2CppType IEnumerable_1_t8703_1_0_0;
struct IEnumerable_1_t8703;
extern Il2CppGenericClass IEnumerable_1_t8703_GenericClass;
TypeInfo IEnumerable_1_t8703_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8703_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8703_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8703_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8703_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8703_0_0_0/* byval_arg */
	, &IEnumerable_1_t8703_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8703_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8702_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>
extern MethodInfo IList_1_get_Item_m45132_MethodInfo;
extern MethodInfo IList_1_set_Item_m45133_MethodInfo;
static PropertyInfo IList_1_t8702____Item_PropertyInfo = 
{
	&IList_1_t8702_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45132_MethodInfo/* get */
	, &IList_1_set_Item_m45133_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8702_PropertyInfos[] =
{
	&IList_1_t8702____Item_PropertyInfo,
	NULL
};
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
static ParameterInfo IList_1_t8702_IList_1_IndexOf_m45134_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GregorianCalendarTypes_t1918_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45134_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45134_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8702_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8702_IList_1_IndexOf_m45134_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45134_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
static ParameterInfo IList_1_t8702_IList_1_Insert_m45135_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GregorianCalendarTypes_t1918_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45135_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45135_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8702_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8702_IList_1_Insert_m45135_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45135_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8702_IList_1_RemoveAt_m45136_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45136_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45136_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8702_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8702_IList_1_RemoveAt_m45136_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45136_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8702_IList_1_get_Item_m45132_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
extern void* RuntimeInvoker_GregorianCalendarTypes_t1918_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45132_GenericMethod;
// T System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45132_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8702_il2cpp_TypeInfo/* declaring_type */
	, &GregorianCalendarTypes_t1918_0_0_0/* return_type */
	, RuntimeInvoker_GregorianCalendarTypes_t1918_Int32_t73/* invoker_method */
	, IList_1_t8702_IList_1_get_Item_m45132_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45132_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType GregorianCalendarTypes_t1918_0_0_0;
static ParameterInfo IList_1_t8702_IList_1_set_Item_m45133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GregorianCalendarTypes_t1918_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45133_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.GregorianCalendarTypes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45133_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8702_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8702_IList_1_set_Item_m45133_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45133_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8702_MethodInfos[] =
{
	&IList_1_IndexOf_m45134_MethodInfo,
	&IList_1_Insert_m45135_MethodInfo,
	&IList_1_RemoveAt_m45136_MethodInfo,
	&IList_1_get_Item_m45132_MethodInfo,
	&IList_1_set_Item_m45133_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8702_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8701_il2cpp_TypeInfo,
	&IEnumerable_1_t8703_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8702_0_0_0;
extern Il2CppType IList_1_t8702_1_0_0;
struct IList_1_t8702;
extern Il2CppGenericClass IList_1_t8702_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8702_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8702_MethodInfos/* methods */
	, IList_1_t8702_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8702_il2cpp_TypeInfo/* element_class */
	, IList_1_t8702_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8702_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8702_0_0_0/* byval_arg */
	, &IList_1_t8702_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8702_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6743_il2cpp_TypeInfo;

// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"


// T System.Collections.Generic.IEnumerator`1<System.Globalization.NumberStyles>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.NumberStyles>
extern MethodInfo IEnumerator_1_get_Current_m45137_MethodInfo;
static PropertyInfo IEnumerator_1_t6743____Current_PropertyInfo = 
{
	&IEnumerator_1_t6743_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45137_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6743_PropertyInfos[] =
{
	&IEnumerator_1_t6743____Current_PropertyInfo,
	NULL
};
extern Il2CppType NumberStyles_t1919_0_0_0;
extern void* RuntimeInvoker_NumberStyles_t1919 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45137_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.NumberStyles>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45137_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6743_il2cpp_TypeInfo/* declaring_type */
	, &NumberStyles_t1919_0_0_0/* return_type */
	, RuntimeInvoker_NumberStyles_t1919/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45137_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6743_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45137_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6743_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6743_0_0_0;
extern Il2CppType IEnumerator_1_t6743_1_0_0;
struct IEnumerator_1_t6743;
extern Il2CppGenericClass IEnumerator_1_t6743_GenericClass;
TypeInfo IEnumerator_1_t6743_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6743_MethodInfos/* methods */
	, IEnumerator_1_t6743_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6743_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6743_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6743_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6743_0_0_0/* byval_arg */
	, &IEnumerator_1_t6743_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6743_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_607.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4771_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_607MethodDeclarations.h"

extern TypeInfo NumberStyles_t1919_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26088_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNumberStyles_t1919_m34760_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.NumberStyles>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.NumberStyles>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisNumberStyles_t1919_m34760 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26084_MethodInfo;
 void InternalEnumerator_1__ctor_m26084 (InternalEnumerator_1_t4771 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085 (InternalEnumerator_1_t4771 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26088(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26088_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NumberStyles_t1919_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26086_MethodInfo;
 void InternalEnumerator_1_Dispose_m26086 (InternalEnumerator_1_t4771 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26087_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26087 (InternalEnumerator_1_t4771 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26088 (InternalEnumerator_1_t4771 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisNumberStyles_t1919_m34760(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNumberStyles_t1919_m34760_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4771____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4771, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4771____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4771, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4771_FieldInfos[] =
{
	&InternalEnumerator_1_t4771____array_0_FieldInfo,
	&InternalEnumerator_1_t4771____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4771____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4771_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4771____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4771_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26088_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4771_PropertyInfos[] =
{
	&InternalEnumerator_1_t4771____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4771____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4771_InternalEnumerator_1__ctor_m26084_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26084_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26084_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26084/* method */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4771_InternalEnumerator_1__ctor_m26084_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26084_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085/* method */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26086_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26086_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26086/* method */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26086_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26087_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26087_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26087/* method */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26087_GenericMethod/* genericMethod */

};
extern Il2CppType NumberStyles_t1919_0_0_0;
extern void* RuntimeInvoker_NumberStyles_t1919 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26088_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.NumberStyles>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26088_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26088/* method */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* declaring_type */
	, &NumberStyles_t1919_0_0_0/* return_type */
	, RuntimeInvoker_NumberStyles_t1919/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26088_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4771_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26084_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085_MethodInfo,
	&InternalEnumerator_1_Dispose_m26086_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26087_MethodInfo,
	&InternalEnumerator_1_get_Current_m26088_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4771_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26085_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26087_MethodInfo,
	&InternalEnumerator_1_Dispose_m26086_MethodInfo,
	&InternalEnumerator_1_get_Current_m26088_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4771_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6743_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4771_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6743_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4771_0_0_0;
extern Il2CppType InternalEnumerator_1_t4771_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4771_GenericClass;
TypeInfo InternalEnumerator_1_t4771_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4771_MethodInfos/* methods */
	, InternalEnumerator_1_t4771_PropertyInfos/* properties */
	, InternalEnumerator_1_t4771_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4771_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4771_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4771_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4771_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4771_1_0_0/* this_arg */
	, InternalEnumerator_1_t4771_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4771_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4771)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8704_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>
extern MethodInfo ICollection_1_get_Count_m45138_MethodInfo;
static PropertyInfo ICollection_1_t8704____Count_PropertyInfo = 
{
	&ICollection_1_t8704_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45138_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45139_MethodInfo;
static PropertyInfo ICollection_1_t8704____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8704_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45139_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8704_PropertyInfos[] =
{
	&ICollection_1_t8704____Count_PropertyInfo,
	&ICollection_1_t8704____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45138_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::get_Count()
MethodInfo ICollection_1_get_Count_m45138_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45138_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45139_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45139_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45139_GenericMethod/* genericMethod */

};
extern Il2CppType NumberStyles_t1919_0_0_0;
extern Il2CppType NumberStyles_t1919_0_0_0;
static ParameterInfo ICollection_1_t8704_ICollection_1_Add_m45140_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NumberStyles_t1919_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45140_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::Add(T)
MethodInfo ICollection_1_Add_m45140_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8704_ICollection_1_Add_m45140_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45140_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45141_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::Clear()
MethodInfo ICollection_1_Clear_m45141_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45141_GenericMethod/* genericMethod */

};
extern Il2CppType NumberStyles_t1919_0_0_0;
static ParameterInfo ICollection_1_t8704_ICollection_1_Contains_m45142_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NumberStyles_t1919_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45142_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::Contains(T)
MethodInfo ICollection_1_Contains_m45142_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8704_ICollection_1_Contains_m45142_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45142_GenericMethod/* genericMethod */

};
extern Il2CppType NumberStylesU5BU5D_t5044_0_0_0;
extern Il2CppType NumberStylesU5BU5D_t5044_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8704_ICollection_1_CopyTo_m45143_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NumberStylesU5BU5D_t5044_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45143_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45143_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8704_ICollection_1_CopyTo_m45143_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45143_GenericMethod/* genericMethod */

};
extern Il2CppType NumberStyles_t1919_0_0_0;
static ParameterInfo ICollection_1_t8704_ICollection_1_Remove_m45144_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NumberStyles_t1919_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45144_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.NumberStyles>::Remove(T)
MethodInfo ICollection_1_Remove_m45144_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8704_ICollection_1_Remove_m45144_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45144_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8704_MethodInfos[] =
{
	&ICollection_1_get_Count_m45138_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45139_MethodInfo,
	&ICollection_1_Add_m45140_MethodInfo,
	&ICollection_1_Clear_m45141_MethodInfo,
	&ICollection_1_Contains_m45142_MethodInfo,
	&ICollection_1_CopyTo_m45143_MethodInfo,
	&ICollection_1_Remove_m45144_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8706_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8704_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8706_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8704_0_0_0;
extern Il2CppType ICollection_1_t8704_1_0_0;
struct ICollection_1_t8704;
extern Il2CppGenericClass ICollection_1_t8704_GenericClass;
TypeInfo ICollection_1_t8704_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8704_MethodInfos/* methods */
	, ICollection_1_t8704_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8704_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8704_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8704_0_0_0/* byval_arg */
	, &ICollection_1_t8704_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8704_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.NumberStyles>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.NumberStyles>
extern Il2CppType IEnumerator_1_t6743_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45145_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.NumberStyles>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45145_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8706_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6743_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45145_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8706_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45145_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8706_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8706_0_0_0;
extern Il2CppType IEnumerable_1_t8706_1_0_0;
struct IEnumerable_1_t8706;
extern Il2CppGenericClass IEnumerable_1_t8706_GenericClass;
TypeInfo IEnumerable_1_t8706_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8706_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8706_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8706_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8706_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8706_0_0_0/* byval_arg */
	, &IEnumerable_1_t8706_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8706_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8705_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.NumberStyles>
extern MethodInfo IList_1_get_Item_m45146_MethodInfo;
extern MethodInfo IList_1_set_Item_m45147_MethodInfo;
static PropertyInfo IList_1_t8705____Item_PropertyInfo = 
{
	&IList_1_t8705_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45146_MethodInfo/* get */
	, &IList_1_set_Item_m45147_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8705_PropertyInfos[] =
{
	&IList_1_t8705____Item_PropertyInfo,
	NULL
};
extern Il2CppType NumberStyles_t1919_0_0_0;
static ParameterInfo IList_1_t8705_IList_1_IndexOf_m45148_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NumberStyles_t1919_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45148_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45148_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8705_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8705_IList_1_IndexOf_m45148_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45148_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType NumberStyles_t1919_0_0_0;
static ParameterInfo IList_1_t8705_IList_1_Insert_m45149_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NumberStyles_t1919_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45149_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45149_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8705_IList_1_Insert_m45149_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45149_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8705_IList_1_RemoveAt_m45150_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45150_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45150_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8705_IList_1_RemoveAt_m45150_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45150_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8705_IList_1_get_Item_m45146_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType NumberStyles_t1919_0_0_0;
extern void* RuntimeInvoker_NumberStyles_t1919_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45146_GenericMethod;
// T System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45146_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8705_il2cpp_TypeInfo/* declaring_type */
	, &NumberStyles_t1919_0_0_0/* return_type */
	, RuntimeInvoker_NumberStyles_t1919_Int32_t73/* invoker_method */
	, IList_1_t8705_IList_1_get_Item_m45146_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45146_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType NumberStyles_t1919_0_0_0;
static ParameterInfo IList_1_t8705_IList_1_set_Item_m45147_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NumberStyles_t1919_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45147_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.NumberStyles>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45147_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8705_IList_1_set_Item_m45147_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45147_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8705_MethodInfos[] =
{
	&IList_1_IndexOf_m45148_MethodInfo,
	&IList_1_Insert_m45149_MethodInfo,
	&IList_1_RemoveAt_m45150_MethodInfo,
	&IList_1_get_Item_m45146_MethodInfo,
	&IList_1_set_Item_m45147_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8705_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8704_il2cpp_TypeInfo,
	&IEnumerable_1_t8706_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8705_0_0_0;
extern Il2CppType IList_1_t8705_1_0_0;
struct IList_1_t8705;
extern Il2CppGenericClass IList_1_t8705_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8705_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8705_MethodInfos/* methods */
	, IList_1_t8705_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8705_il2cpp_TypeInfo/* element_class */
	, IList_1_t8705_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8705_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8705_0_0_0/* byval_arg */
	, &IList_1_t8705_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8705_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6745_il2cpp_TypeInfo;

// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"


// T System.Collections.Generic.IEnumerator`1<System.Globalization.UnicodeCategory>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Globalization.UnicodeCategory>
extern MethodInfo IEnumerator_1_get_Current_m45151_MethodInfo;
static PropertyInfo IEnumerator_1_t6745____Current_PropertyInfo = 
{
	&IEnumerator_1_t6745_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45151_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6745_PropertyInfos[] =
{
	&IEnumerator_1_t6745____Current_PropertyInfo,
	NULL
};
extern Il2CppType UnicodeCategory_t1742_0_0_0;
extern void* RuntimeInvoker_UnicodeCategory_t1742 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45151_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Globalization.UnicodeCategory>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45151_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6745_il2cpp_TypeInfo/* declaring_type */
	, &UnicodeCategory_t1742_0_0_0/* return_type */
	, RuntimeInvoker_UnicodeCategory_t1742/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45151_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6745_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45151_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6745_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6745_0_0_0;
extern Il2CppType IEnumerator_1_t6745_1_0_0;
struct IEnumerator_1_t6745;
extern Il2CppGenericClass IEnumerator_1_t6745_GenericClass;
TypeInfo IEnumerator_1_t6745_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6745_MethodInfos/* methods */
	, IEnumerator_1_t6745_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6745_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6745_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6745_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6745_0_0_0/* byval_arg */
	, &IEnumerator_1_t6745_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6745_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_608.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4772_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_608MethodDeclarations.h"

extern TypeInfo UnicodeCategory_t1742_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26093_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnicodeCategory_t1742_m34771_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Globalization.UnicodeCategory>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Globalization.UnicodeCategory>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUnicodeCategory_t1742_m34771 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26089_MethodInfo;
 void InternalEnumerator_1__ctor_m26089 (InternalEnumerator_1_t4772 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090 (InternalEnumerator_1_t4772 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26093(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26093_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UnicodeCategory_t1742_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26091_MethodInfo;
 void InternalEnumerator_1_Dispose_m26091 (InternalEnumerator_1_t4772 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26092_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26092 (InternalEnumerator_1_t4772 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26093 (InternalEnumerator_1_t4772 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUnicodeCategory_t1742_m34771(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUnicodeCategory_t1742_m34771_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4772____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4772, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4772____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4772, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4772_FieldInfos[] =
{
	&InternalEnumerator_1_t4772____array_0_FieldInfo,
	&InternalEnumerator_1_t4772____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4772____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4772_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4772____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4772_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26093_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4772_PropertyInfos[] =
{
	&InternalEnumerator_1_t4772____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4772____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4772_InternalEnumerator_1__ctor_m26089_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26089_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26089_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26089/* method */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4772_InternalEnumerator_1__ctor_m26089_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26089_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090/* method */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26091_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26091_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26091/* method */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26091_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26092_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26092_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26092/* method */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26092_GenericMethod/* genericMethod */

};
extern Il2CppType UnicodeCategory_t1742_0_0_0;
extern void* RuntimeInvoker_UnicodeCategory_t1742 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26093_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Globalization.UnicodeCategory>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26093_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26093/* method */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* declaring_type */
	, &UnicodeCategory_t1742_0_0_0/* return_type */
	, RuntimeInvoker_UnicodeCategory_t1742/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26093_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4772_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26089_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo,
	&InternalEnumerator_1_Dispose_m26091_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26092_MethodInfo,
	&InternalEnumerator_1_get_Current_m26093_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4772_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26090_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26092_MethodInfo,
	&InternalEnumerator_1_Dispose_m26091_MethodInfo,
	&InternalEnumerator_1_get_Current_m26093_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4772_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6745_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4772_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6745_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4772_0_0_0;
extern Il2CppType InternalEnumerator_1_t4772_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4772_GenericClass;
TypeInfo InternalEnumerator_1_t4772_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4772_MethodInfos/* methods */
	, InternalEnumerator_1_t4772_PropertyInfos/* properties */
	, InternalEnumerator_1_t4772_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4772_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4772_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4772_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4772_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4772_1_0_0/* this_arg */
	, InternalEnumerator_1_t4772_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4772_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4772)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8707_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>
extern MethodInfo ICollection_1_get_Count_m45152_MethodInfo;
static PropertyInfo ICollection_1_t8707____Count_PropertyInfo = 
{
	&ICollection_1_t8707_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45152_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45153_MethodInfo;
static PropertyInfo ICollection_1_t8707____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8707_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45153_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8707_PropertyInfos[] =
{
	&ICollection_1_t8707____Count_PropertyInfo,
	&ICollection_1_t8707____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45152_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::get_Count()
MethodInfo ICollection_1_get_Count_m45152_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45152_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45153_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45153_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45153_GenericMethod/* genericMethod */

};
extern Il2CppType UnicodeCategory_t1742_0_0_0;
extern Il2CppType UnicodeCategory_t1742_0_0_0;
static ParameterInfo ICollection_1_t8707_ICollection_1_Add_m45154_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnicodeCategory_t1742_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45154_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::Add(T)
MethodInfo ICollection_1_Add_m45154_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8707_ICollection_1_Add_m45154_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45154_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45155_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::Clear()
MethodInfo ICollection_1_Clear_m45155_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45155_GenericMethod/* genericMethod */

};
extern Il2CppType UnicodeCategory_t1742_0_0_0;
static ParameterInfo ICollection_1_t8707_ICollection_1_Contains_m45156_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnicodeCategory_t1742_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45156_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::Contains(T)
MethodInfo ICollection_1_Contains_m45156_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8707_ICollection_1_Contains_m45156_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45156_GenericMethod/* genericMethod */

};
extern Il2CppType UnicodeCategoryU5BU5D_t5045_0_0_0;
extern Il2CppType UnicodeCategoryU5BU5D_t5045_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8707_ICollection_1_CopyTo_m45157_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnicodeCategoryU5BU5D_t5045_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45157_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45157_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8707_ICollection_1_CopyTo_m45157_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45157_GenericMethod/* genericMethod */

};
extern Il2CppType UnicodeCategory_t1742_0_0_0;
static ParameterInfo ICollection_1_t8707_ICollection_1_Remove_m45158_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnicodeCategory_t1742_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45158_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Globalization.UnicodeCategory>::Remove(T)
MethodInfo ICollection_1_Remove_m45158_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8707_ICollection_1_Remove_m45158_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45158_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8707_MethodInfos[] =
{
	&ICollection_1_get_Count_m45152_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45153_MethodInfo,
	&ICollection_1_Add_m45154_MethodInfo,
	&ICollection_1_Clear_m45155_MethodInfo,
	&ICollection_1_Contains_m45156_MethodInfo,
	&ICollection_1_CopyTo_m45157_MethodInfo,
	&ICollection_1_Remove_m45158_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8709_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8707_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8709_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8707_0_0_0;
extern Il2CppType ICollection_1_t8707_1_0_0;
struct ICollection_1_t8707;
extern Il2CppGenericClass ICollection_1_t8707_GenericClass;
TypeInfo ICollection_1_t8707_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8707_MethodInfos/* methods */
	, ICollection_1_t8707_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8707_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8707_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8707_0_0_0/* byval_arg */
	, &ICollection_1_t8707_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8707_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.UnicodeCategory>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Globalization.UnicodeCategory>
extern Il2CppType IEnumerator_1_t6745_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45159_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Globalization.UnicodeCategory>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45159_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8709_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6745_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45159_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8709_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45159_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8709_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8709_0_0_0;
extern Il2CppType IEnumerable_1_t8709_1_0_0;
struct IEnumerable_1_t8709;
extern Il2CppGenericClass IEnumerable_1_t8709_GenericClass;
TypeInfo IEnumerable_1_t8709_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8709_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8709_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8709_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8709_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8709_0_0_0/* byval_arg */
	, &IEnumerable_1_t8709_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8709_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8708_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>
extern MethodInfo IList_1_get_Item_m45160_MethodInfo;
extern MethodInfo IList_1_set_Item_m45161_MethodInfo;
static PropertyInfo IList_1_t8708____Item_PropertyInfo = 
{
	&IList_1_t8708_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45160_MethodInfo/* get */
	, &IList_1_set_Item_m45161_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8708_PropertyInfos[] =
{
	&IList_1_t8708____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnicodeCategory_t1742_0_0_0;
static ParameterInfo IList_1_t8708_IList_1_IndexOf_m45162_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnicodeCategory_t1742_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45162_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45162_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8708_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8708_IList_1_IndexOf_m45162_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45162_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType UnicodeCategory_t1742_0_0_0;
static ParameterInfo IList_1_t8708_IList_1_Insert_m45163_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnicodeCategory_t1742_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45163_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45163_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8708_IList_1_Insert_m45163_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45163_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8708_IList_1_RemoveAt_m45164_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45164_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45164_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8708_IList_1_RemoveAt_m45164_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45164_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8708_IList_1_get_Item_m45160_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType UnicodeCategory_t1742_0_0_0;
extern void* RuntimeInvoker_UnicodeCategory_t1742_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45160_GenericMethod;
// T System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45160_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8708_il2cpp_TypeInfo/* declaring_type */
	, &UnicodeCategory_t1742_0_0_0/* return_type */
	, RuntimeInvoker_UnicodeCategory_t1742_Int32_t73/* invoker_method */
	, IList_1_t8708_IList_1_get_Item_m45160_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45160_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType UnicodeCategory_t1742_0_0_0;
static ParameterInfo IList_1_t8708_IList_1_set_Item_m45161_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnicodeCategory_t1742_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45161_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Globalization.UnicodeCategory>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45161_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8708_IList_1_set_Item_m45161_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45161_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8708_MethodInfos[] =
{
	&IList_1_IndexOf_m45162_MethodInfo,
	&IList_1_Insert_m45163_MethodInfo,
	&IList_1_RemoveAt_m45164_MethodInfo,
	&IList_1_get_Item_m45160_MethodInfo,
	&IList_1_set_Item_m45161_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8708_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8707_il2cpp_TypeInfo,
	&IEnumerable_1_t8709_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8708_0_0_0;
extern Il2CppType IList_1_t8708_1_0_0;
struct IList_1_t8708;
extern Il2CppGenericClass IList_1_t8708_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8708_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8708_MethodInfos/* methods */
	, IList_1_t8708_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8708_il2cpp_TypeInfo/* element_class */
	, IList_1_t8708_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8708_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8708_0_0_0/* byval_arg */
	, &IList_1_t8708_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8708_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6747_il2cpp_TypeInfo;

// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.IO.FileAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileAttributes>
extern MethodInfo IEnumerator_1_get_Current_m45165_MethodInfo;
static PropertyInfo IEnumerator_1_t6747____Current_PropertyInfo = 
{
	&IEnumerator_1_t6747_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45165_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6747_PropertyInfos[] =
{
	&IEnumerator_1_t6747____Current_PropertyInfo,
	NULL
};
extern Il2CppType FileAttributes_t1928_0_0_0;
extern void* RuntimeInvoker_FileAttributes_t1928 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45165_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IO.FileAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45165_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6747_il2cpp_TypeInfo/* declaring_type */
	, &FileAttributes_t1928_0_0_0/* return_type */
	, RuntimeInvoker_FileAttributes_t1928/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45165_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6747_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45165_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6747_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6747_0_0_0;
extern Il2CppType IEnumerator_1_t6747_1_0_0;
struct IEnumerator_1_t6747;
extern Il2CppGenericClass IEnumerator_1_t6747_GenericClass;
TypeInfo IEnumerator_1_t6747_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6747_MethodInfos/* methods */
	, IEnumerator_1_t6747_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6747_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6747_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6747_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6747_0_0_0/* byval_arg */
	, &IEnumerator_1_t6747_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6747_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IO.FileAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_609.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4773_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IO.FileAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_609MethodDeclarations.h"

extern TypeInfo FileAttributes_t1928_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26098_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFileAttributes_t1928_m34782_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.FileAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.FileAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFileAttributes_t1928_m34782 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.FileAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26094_MethodInfo;
 void InternalEnumerator_1__ctor_m26094 (InternalEnumerator_1_t4773 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.FileAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095 (InternalEnumerator_1_t4773 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26098(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26098_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FileAttributes_t1928_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26096_MethodInfo;
 void InternalEnumerator_1_Dispose_m26096 (InternalEnumerator_1_t4773 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26097_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26097 (InternalEnumerator_1_t4773 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.FileAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26098 (InternalEnumerator_1_t4773 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFileAttributes_t1928_m34782(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFileAttributes_t1928_m34782_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4773____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4773, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4773____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4773, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4773_FieldInfos[] =
{
	&InternalEnumerator_1_t4773____array_0_FieldInfo,
	&InternalEnumerator_1_t4773____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4773____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4773_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4773____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4773_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26098_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4773_PropertyInfos[] =
{
	&InternalEnumerator_1_t4773____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4773____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4773_InternalEnumerator_1__ctor_m26094_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26094_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26094_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26094/* method */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4773_InternalEnumerator_1__ctor_m26094_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26094_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.FileAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095/* method */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26096_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26096_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26096/* method */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26096_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26097_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26097_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26097/* method */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26097_GenericMethod/* genericMethod */

};
extern Il2CppType FileAttributes_t1928_0_0_0;
extern void* RuntimeInvoker_FileAttributes_t1928 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26098_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.FileAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26098_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26098/* method */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* declaring_type */
	, &FileAttributes_t1928_0_0_0/* return_type */
	, RuntimeInvoker_FileAttributes_t1928/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26098_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4773_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26094_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095_MethodInfo,
	&InternalEnumerator_1_Dispose_m26096_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26097_MethodInfo,
	&InternalEnumerator_1_get_Current_m26098_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4773_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26095_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26097_MethodInfo,
	&InternalEnumerator_1_Dispose_m26096_MethodInfo,
	&InternalEnumerator_1_get_Current_m26098_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4773_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6747_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4773_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6747_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4773_0_0_0;
extern Il2CppType InternalEnumerator_1_t4773_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4773_GenericClass;
TypeInfo InternalEnumerator_1_t4773_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4773_MethodInfos/* methods */
	, InternalEnumerator_1_t4773_PropertyInfos/* properties */
	, InternalEnumerator_1_t4773_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4773_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4773_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4773_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4773_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4773_1_0_0/* this_arg */
	, InternalEnumerator_1_t4773_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4773_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4773)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8710_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileAttributes>
extern MethodInfo ICollection_1_get_Count_m45166_MethodInfo;
static PropertyInfo ICollection_1_t8710____Count_PropertyInfo = 
{
	&ICollection_1_t8710_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45166_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45167_MethodInfo;
static PropertyInfo ICollection_1_t8710____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8710_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45167_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8710_PropertyInfos[] =
{
	&ICollection_1_t8710____Count_PropertyInfo,
	&ICollection_1_t8710____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45166_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m45166_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45166_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45167_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45167_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45167_GenericMethod/* genericMethod */

};
extern Il2CppType FileAttributes_t1928_0_0_0;
extern Il2CppType FileAttributes_t1928_0_0_0;
static ParameterInfo ICollection_1_t8710_ICollection_1_Add_m45168_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAttributes_t1928_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45168_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::Add(T)
MethodInfo ICollection_1_Add_m45168_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8710_ICollection_1_Add_m45168_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45168_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45169_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::Clear()
MethodInfo ICollection_1_Clear_m45169_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45169_GenericMethod/* genericMethod */

};
extern Il2CppType FileAttributes_t1928_0_0_0;
static ParameterInfo ICollection_1_t8710_ICollection_1_Contains_m45170_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAttributes_t1928_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45170_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m45170_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8710_ICollection_1_Contains_m45170_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45170_GenericMethod/* genericMethod */

};
extern Il2CppType FileAttributesU5BU5D_t5046_0_0_0;
extern Il2CppType FileAttributesU5BU5D_t5046_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8710_ICollection_1_CopyTo_m45171_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FileAttributesU5BU5D_t5046_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45171_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45171_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8710_ICollection_1_CopyTo_m45171_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45171_GenericMethod/* genericMethod */

};
extern Il2CppType FileAttributes_t1928_0_0_0;
static ParameterInfo ICollection_1_t8710_ICollection_1_Remove_m45172_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAttributes_t1928_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45172_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m45172_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8710_ICollection_1_Remove_m45172_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45172_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8710_MethodInfos[] =
{
	&ICollection_1_get_Count_m45166_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45167_MethodInfo,
	&ICollection_1_Add_m45168_MethodInfo,
	&ICollection_1_Clear_m45169_MethodInfo,
	&ICollection_1_Contains_m45170_MethodInfo,
	&ICollection_1_CopyTo_m45171_MethodInfo,
	&ICollection_1_Remove_m45172_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8712_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8710_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8712_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8710_0_0_0;
extern Il2CppType ICollection_1_t8710_1_0_0;
struct ICollection_1_t8710;
extern Il2CppGenericClass ICollection_1_t8710_GenericClass;
TypeInfo ICollection_1_t8710_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8710_MethodInfos/* methods */
	, ICollection_1_t8710_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8710_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8710_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8710_0_0_0/* byval_arg */
	, &ICollection_1_t8710_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8710_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileAttributes>
extern Il2CppType IEnumerator_1_t6747_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45173_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45173_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8712_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6747_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45173_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8712_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45173_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8712_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8712_0_0_0;
extern Il2CppType IEnumerable_1_t8712_1_0_0;
struct IEnumerable_1_t8712;
extern Il2CppGenericClass IEnumerable_1_t8712_GenericClass;
TypeInfo IEnumerable_1_t8712_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8712_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8712_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8712_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8712_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8712_0_0_0/* byval_arg */
	, &IEnumerable_1_t8712_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8712_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8711_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.FileAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.FileAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.FileAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileAttributes>
extern MethodInfo IList_1_get_Item_m45174_MethodInfo;
extern MethodInfo IList_1_set_Item_m45175_MethodInfo;
static PropertyInfo IList_1_t8711____Item_PropertyInfo = 
{
	&IList_1_t8711_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45174_MethodInfo/* get */
	, &IList_1_set_Item_m45175_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8711_PropertyInfos[] =
{
	&IList_1_t8711____Item_PropertyInfo,
	NULL
};
extern Il2CppType FileAttributes_t1928_0_0_0;
static ParameterInfo IList_1_t8711_IList_1_IndexOf_m45176_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileAttributes_t1928_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45176_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.FileAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45176_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8711_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8711_IList_1_IndexOf_m45176_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45176_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileAttributes_t1928_0_0_0;
static ParameterInfo IList_1_t8711_IList_1_Insert_m45177_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FileAttributes_t1928_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45177_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45177_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8711_IList_1_Insert_m45177_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45177_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8711_IList_1_RemoveAt_m45178_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45178_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45178_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8711_IList_1_RemoveAt_m45178_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45178_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8711_IList_1_get_Item_m45174_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FileAttributes_t1928_0_0_0;
extern void* RuntimeInvoker_FileAttributes_t1928_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45174_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.FileAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45174_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8711_il2cpp_TypeInfo/* declaring_type */
	, &FileAttributes_t1928_0_0_0/* return_type */
	, RuntimeInvoker_FileAttributes_t1928_Int32_t73/* invoker_method */
	, IList_1_t8711_IList_1_get_Item_m45174_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45174_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileAttributes_t1928_0_0_0;
static ParameterInfo IList_1_t8711_IList_1_set_Item_m45175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FileAttributes_t1928_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45175_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45175_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8711_IList_1_set_Item_m45175_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45175_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8711_MethodInfos[] =
{
	&IList_1_IndexOf_m45176_MethodInfo,
	&IList_1_Insert_m45177_MethodInfo,
	&IList_1_RemoveAt_m45178_MethodInfo,
	&IList_1_get_Item_m45174_MethodInfo,
	&IList_1_set_Item_m45175_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8711_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8710_il2cpp_TypeInfo,
	&IEnumerable_1_t8712_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8711_0_0_0;
extern Il2CppType IList_1_t8711_1_0_0;
struct IList_1_t8711;
extern Il2CppGenericClass IList_1_t8711_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8711_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8711_MethodInfos/* methods */
	, IList_1_t8711_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8711_il2cpp_TypeInfo/* element_class */
	, IList_1_t8711_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8711_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8711_0_0_0/* byval_arg */
	, &IList_1_t8711_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8711_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6749_il2cpp_TypeInfo;

// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"


// T System.Collections.Generic.IEnumerator`1<System.IO.FileMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileMode>
extern MethodInfo IEnumerator_1_get_Current_m45179_MethodInfo;
static PropertyInfo IEnumerator_1_t6749____Current_PropertyInfo = 
{
	&IEnumerator_1_t6749_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45179_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6749_PropertyInfos[] =
{
	&IEnumerator_1_t6749____Current_PropertyInfo,
	NULL
};
extern Il2CppType FileMode_t1929_0_0_0;
extern void* RuntimeInvoker_FileMode_t1929 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45179_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IO.FileMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45179_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6749_il2cpp_TypeInfo/* declaring_type */
	, &FileMode_t1929_0_0_0/* return_type */
	, RuntimeInvoker_FileMode_t1929/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45179_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6749_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45179_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6749_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6749_0_0_0;
extern Il2CppType IEnumerator_1_t6749_1_0_0;
struct IEnumerator_1_t6749;
extern Il2CppGenericClass IEnumerator_1_t6749_GenericClass;
TypeInfo IEnumerator_1_t6749_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6749_MethodInfos/* methods */
	, IEnumerator_1_t6749_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6749_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6749_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6749_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6749_0_0_0/* byval_arg */
	, &IEnumerator_1_t6749_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6749_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IO.FileMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_610.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4774_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IO.FileMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_610MethodDeclarations.h"

extern TypeInfo FileMode_t1929_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26103_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFileMode_t1929_m34793_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.FileMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.FileMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFileMode_t1929_m34793 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.FileMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26099_MethodInfo;
 void InternalEnumerator_1__ctor_m26099 (InternalEnumerator_1_t4774 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.FileMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100 (InternalEnumerator_1_t4774 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26103(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26103_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FileMode_t1929_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.FileMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26101_MethodInfo;
 void InternalEnumerator_1_Dispose_m26101 (InternalEnumerator_1_t4774 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26102_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26102 (InternalEnumerator_1_t4774 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.FileMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26103 (InternalEnumerator_1_t4774 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFileMode_t1929_m34793(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFileMode_t1929_m34793_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4774____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4774, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4774____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4774, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4774_FieldInfos[] =
{
	&InternalEnumerator_1_t4774____array_0_FieldInfo,
	&InternalEnumerator_1_t4774____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4774____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4774_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4774____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4774_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26103_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4774_PropertyInfos[] =
{
	&InternalEnumerator_1_t4774____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4774____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4774_InternalEnumerator_1__ctor_m26099_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26099_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26099_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26099/* method */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4774_InternalEnumerator_1__ctor_m26099_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26099_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.FileMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100/* method */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26101_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26101_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26101/* method */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26101_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26102_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26102_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26102/* method */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26102_GenericMethod/* genericMethod */

};
extern Il2CppType FileMode_t1929_0_0_0;
extern void* RuntimeInvoker_FileMode_t1929 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26103_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.FileMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26103_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26103/* method */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* declaring_type */
	, &FileMode_t1929_0_0_0/* return_type */
	, RuntimeInvoker_FileMode_t1929/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26103_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4774_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26099_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100_MethodInfo,
	&InternalEnumerator_1_Dispose_m26101_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26102_MethodInfo,
	&InternalEnumerator_1_get_Current_m26103_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4774_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26100_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26102_MethodInfo,
	&InternalEnumerator_1_Dispose_m26101_MethodInfo,
	&InternalEnumerator_1_get_Current_m26103_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4774_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6749_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4774_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6749_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4774_0_0_0;
extern Il2CppType InternalEnumerator_1_t4774_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4774_GenericClass;
TypeInfo InternalEnumerator_1_t4774_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4774_MethodInfos/* methods */
	, InternalEnumerator_1_t4774_PropertyInfos/* properties */
	, InternalEnumerator_1_t4774_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4774_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4774_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4774_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4774_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4774_1_0_0/* this_arg */
	, InternalEnumerator_1_t4774_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4774_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4774)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8713_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileMode>
extern MethodInfo ICollection_1_get_Count_m45180_MethodInfo;
static PropertyInfo ICollection_1_t8713____Count_PropertyInfo = 
{
	&ICollection_1_t8713_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45180_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45181_MethodInfo;
static PropertyInfo ICollection_1_t8713____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8713_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45181_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8713_PropertyInfos[] =
{
	&ICollection_1_t8713____Count_PropertyInfo,
	&ICollection_1_t8713____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45180_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileMode>::get_Count()
MethodInfo ICollection_1_get_Count_m45180_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45180_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45181_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45181_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45181_GenericMethod/* genericMethod */

};
extern Il2CppType FileMode_t1929_0_0_0;
extern Il2CppType FileMode_t1929_0_0_0;
static ParameterInfo ICollection_1_t8713_ICollection_1_Add_m45182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileMode_t1929_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45182_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileMode>::Add(T)
MethodInfo ICollection_1_Add_m45182_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8713_ICollection_1_Add_m45182_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45182_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45183_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileMode>::Clear()
MethodInfo ICollection_1_Clear_m45183_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45183_GenericMethod/* genericMethod */

};
extern Il2CppType FileMode_t1929_0_0_0;
static ParameterInfo ICollection_1_t8713_ICollection_1_Contains_m45184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileMode_t1929_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45184_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileMode>::Contains(T)
MethodInfo ICollection_1_Contains_m45184_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8713_ICollection_1_Contains_m45184_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45184_GenericMethod/* genericMethod */

};
extern Il2CppType FileModeU5BU5D_t5047_0_0_0;
extern Il2CppType FileModeU5BU5D_t5047_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8713_ICollection_1_CopyTo_m45185_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FileModeU5BU5D_t5047_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45185_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45185_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8713_ICollection_1_CopyTo_m45185_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45185_GenericMethod/* genericMethod */

};
extern Il2CppType FileMode_t1929_0_0_0;
static ParameterInfo ICollection_1_t8713_ICollection_1_Remove_m45186_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileMode_t1929_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45186_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileMode>::Remove(T)
MethodInfo ICollection_1_Remove_m45186_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8713_ICollection_1_Remove_m45186_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45186_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8713_MethodInfos[] =
{
	&ICollection_1_get_Count_m45180_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45181_MethodInfo,
	&ICollection_1_Add_m45182_MethodInfo,
	&ICollection_1_Clear_m45183_MethodInfo,
	&ICollection_1_Contains_m45184_MethodInfo,
	&ICollection_1_CopyTo_m45185_MethodInfo,
	&ICollection_1_Remove_m45186_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8715_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8713_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8715_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8713_0_0_0;
extern Il2CppType ICollection_1_t8713_1_0_0;
struct ICollection_1_t8713;
extern Il2CppGenericClass ICollection_1_t8713_GenericClass;
TypeInfo ICollection_1_t8713_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8713_MethodInfos/* methods */
	, ICollection_1_t8713_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8713_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8713_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8713_0_0_0/* byval_arg */
	, &ICollection_1_t8713_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8713_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileMode>
extern Il2CppType IEnumerator_1_t6749_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45187_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45187_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8715_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6749_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45187_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8715_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45187_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8715_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8715_0_0_0;
extern Il2CppType IEnumerable_1_t8715_1_0_0;
struct IEnumerable_1_t8715;
extern Il2CppGenericClass IEnumerable_1_t8715_GenericClass;
TypeInfo IEnumerable_1_t8715_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8715_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8715_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8715_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8715_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8715_0_0_0/* byval_arg */
	, &IEnumerable_1_t8715_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8715_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8714_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.FileMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.FileMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.FileMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileMode>
extern MethodInfo IList_1_get_Item_m45188_MethodInfo;
extern MethodInfo IList_1_set_Item_m45189_MethodInfo;
static PropertyInfo IList_1_t8714____Item_PropertyInfo = 
{
	&IList_1_t8714_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45188_MethodInfo/* get */
	, &IList_1_set_Item_m45189_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8714_PropertyInfos[] =
{
	&IList_1_t8714____Item_PropertyInfo,
	NULL
};
extern Il2CppType FileMode_t1929_0_0_0;
static ParameterInfo IList_1_t8714_IList_1_IndexOf_m45190_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileMode_t1929_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45190_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.FileMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45190_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8714_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8714_IList_1_IndexOf_m45190_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45190_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileMode_t1929_0_0_0;
static ParameterInfo IList_1_t8714_IList_1_Insert_m45191_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FileMode_t1929_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45191_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45191_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8714_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8714_IList_1_Insert_m45191_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45191_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8714_IList_1_RemoveAt_m45192_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45192_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45192_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8714_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8714_IList_1_RemoveAt_m45192_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45192_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8714_IList_1_get_Item_m45188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FileMode_t1929_0_0_0;
extern void* RuntimeInvoker_FileMode_t1929_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45188_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.FileMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45188_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8714_il2cpp_TypeInfo/* declaring_type */
	, &FileMode_t1929_0_0_0/* return_type */
	, RuntimeInvoker_FileMode_t1929_Int32_t73/* invoker_method */
	, IList_1_t8714_IList_1_get_Item_m45188_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45188_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileMode_t1929_0_0_0;
static ParameterInfo IList_1_t8714_IList_1_set_Item_m45189_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FileMode_t1929_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45189_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45189_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8714_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8714_IList_1_set_Item_m45189_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45189_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8714_MethodInfos[] =
{
	&IList_1_IndexOf_m45190_MethodInfo,
	&IList_1_Insert_m45191_MethodInfo,
	&IList_1_RemoveAt_m45192_MethodInfo,
	&IList_1_get_Item_m45188_MethodInfo,
	&IList_1_set_Item_m45189_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8714_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8713_il2cpp_TypeInfo,
	&IEnumerable_1_t8715_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8714_0_0_0;
extern Il2CppType IList_1_t8714_1_0_0;
struct IList_1_t8714;
extern Il2CppGenericClass IList_1_t8714_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8714_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8714_MethodInfos/* methods */
	, IList_1_t8714_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8714_il2cpp_TypeInfo/* element_class */
	, IList_1_t8714_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8714_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8714_0_0_0/* byval_arg */
	, &IList_1_t8714_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8714_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6751_il2cpp_TypeInfo;

// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"


// T System.Collections.Generic.IEnumerator`1<System.IO.FileOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileOptions>
extern MethodInfo IEnumerator_1_get_Current_m45193_MethodInfo;
static PropertyInfo IEnumerator_1_t6751____Current_PropertyInfo = 
{
	&IEnumerator_1_t6751_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45193_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6751_PropertyInfos[] =
{
	&IEnumerator_1_t6751____Current_PropertyInfo,
	NULL
};
extern Il2CppType FileOptions_t1931_0_0_0;
extern void* RuntimeInvoker_FileOptions_t1931 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45193_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IO.FileOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45193_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6751_il2cpp_TypeInfo/* declaring_type */
	, &FileOptions_t1931_0_0_0/* return_type */
	, RuntimeInvoker_FileOptions_t1931/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45193_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6751_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45193_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6751_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6751_0_0_0;
extern Il2CppType IEnumerator_1_t6751_1_0_0;
struct IEnumerator_1_t6751;
extern Il2CppGenericClass IEnumerator_1_t6751_GenericClass;
TypeInfo IEnumerator_1_t6751_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6751_MethodInfos/* methods */
	, IEnumerator_1_t6751_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6751_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6751_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6751_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6751_0_0_0/* byval_arg */
	, &IEnumerator_1_t6751_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6751_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IO.FileOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_611.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4775_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IO.FileOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_611MethodDeclarations.h"

extern TypeInfo FileOptions_t1931_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26108_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFileOptions_t1931_m34804_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.FileOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.FileOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFileOptions_t1931_m34804 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.FileOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26104_MethodInfo;
 void InternalEnumerator_1__ctor_m26104 (InternalEnumerator_1_t4775 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.FileOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105 (InternalEnumerator_1_t4775 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26108(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26108_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FileOptions_t1931_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.FileOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26106_MethodInfo;
 void InternalEnumerator_1_Dispose_m26106 (InternalEnumerator_1_t4775 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26107_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26107 (InternalEnumerator_1_t4775 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.FileOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26108 (InternalEnumerator_1_t4775 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFileOptions_t1931_m34804(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFileOptions_t1931_m34804_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4775____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4775, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4775____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4775, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4775_FieldInfos[] =
{
	&InternalEnumerator_1_t4775____array_0_FieldInfo,
	&InternalEnumerator_1_t4775____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4775____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4775_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4775____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4775_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26108_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4775_PropertyInfos[] =
{
	&InternalEnumerator_1_t4775____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4775____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4775_InternalEnumerator_1__ctor_m26104_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26104_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26104_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26104/* method */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4775_InternalEnumerator_1__ctor_m26104_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26104_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.FileOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105/* method */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26106_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26106_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26106/* method */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26106_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26107_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26107_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26107/* method */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26107_GenericMethod/* genericMethod */

};
extern Il2CppType FileOptions_t1931_0_0_0;
extern void* RuntimeInvoker_FileOptions_t1931 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26108_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.FileOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26108_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26108/* method */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* declaring_type */
	, &FileOptions_t1931_0_0_0/* return_type */
	, RuntimeInvoker_FileOptions_t1931/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26108_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4775_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26104_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105_MethodInfo,
	&InternalEnumerator_1_Dispose_m26106_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26107_MethodInfo,
	&InternalEnumerator_1_get_Current_m26108_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4775_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26105_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26107_MethodInfo,
	&InternalEnumerator_1_Dispose_m26106_MethodInfo,
	&InternalEnumerator_1_get_Current_m26108_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4775_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6751_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4775_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6751_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4775_0_0_0;
extern Il2CppType InternalEnumerator_1_t4775_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4775_GenericClass;
TypeInfo InternalEnumerator_1_t4775_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4775_MethodInfos/* methods */
	, InternalEnumerator_1_t4775_PropertyInfos/* properties */
	, InternalEnumerator_1_t4775_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4775_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4775_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4775_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4775_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4775_1_0_0/* this_arg */
	, InternalEnumerator_1_t4775_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4775_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4775)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8716_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileOptions>
extern MethodInfo ICollection_1_get_Count_m45194_MethodInfo;
static PropertyInfo ICollection_1_t8716____Count_PropertyInfo = 
{
	&ICollection_1_t8716_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45194_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45195_MethodInfo;
static PropertyInfo ICollection_1_t8716____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8716_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45195_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8716_PropertyInfos[] =
{
	&ICollection_1_t8716____Count_PropertyInfo,
	&ICollection_1_t8716____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45194_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m45194_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45194_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45195_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45195_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45195_GenericMethod/* genericMethod */

};
extern Il2CppType FileOptions_t1931_0_0_0;
extern Il2CppType FileOptions_t1931_0_0_0;
static ParameterInfo ICollection_1_t8716_ICollection_1_Add_m45196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileOptions_t1931_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45196_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileOptions>::Add(T)
MethodInfo ICollection_1_Add_m45196_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8716_ICollection_1_Add_m45196_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45196_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45197_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileOptions>::Clear()
MethodInfo ICollection_1_Clear_m45197_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45197_GenericMethod/* genericMethod */

};
extern Il2CppType FileOptions_t1931_0_0_0;
static ParameterInfo ICollection_1_t8716_ICollection_1_Contains_m45198_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileOptions_t1931_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45198_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m45198_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8716_ICollection_1_Contains_m45198_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45198_GenericMethod/* genericMethod */

};
extern Il2CppType FileOptionsU5BU5D_t5048_0_0_0;
extern Il2CppType FileOptionsU5BU5D_t5048_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8716_ICollection_1_CopyTo_m45199_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FileOptionsU5BU5D_t5048_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45199_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45199_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8716_ICollection_1_CopyTo_m45199_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45199_GenericMethod/* genericMethod */

};
extern Il2CppType FileOptions_t1931_0_0_0;
static ParameterInfo ICollection_1_t8716_ICollection_1_Remove_m45200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileOptions_t1931_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45200_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m45200_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8716_ICollection_1_Remove_m45200_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45200_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8716_MethodInfos[] =
{
	&ICollection_1_get_Count_m45194_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45195_MethodInfo,
	&ICollection_1_Add_m45196_MethodInfo,
	&ICollection_1_Clear_m45197_MethodInfo,
	&ICollection_1_Contains_m45198_MethodInfo,
	&ICollection_1_CopyTo_m45199_MethodInfo,
	&ICollection_1_Remove_m45200_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8718_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8716_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8718_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8716_0_0_0;
extern Il2CppType ICollection_1_t8716_1_0_0;
struct ICollection_1_t8716;
extern Il2CppGenericClass ICollection_1_t8716_GenericClass;
TypeInfo ICollection_1_t8716_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8716_MethodInfos/* methods */
	, ICollection_1_t8716_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8716_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8716_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8716_0_0_0/* byval_arg */
	, &ICollection_1_t8716_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8716_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileOptions>
extern Il2CppType IEnumerator_1_t6751_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45201_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45201_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8718_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6751_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45201_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8718_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45201_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8718_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8718_0_0_0;
extern Il2CppType IEnumerable_1_t8718_1_0_0;
struct IEnumerable_1_t8718;
extern Il2CppGenericClass IEnumerable_1_t8718_GenericClass;
TypeInfo IEnumerable_1_t8718_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8718_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8718_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8718_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8718_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8718_0_0_0/* byval_arg */
	, &IEnumerable_1_t8718_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8718_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8717_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.FileOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.FileOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.FileOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileOptions>
extern MethodInfo IList_1_get_Item_m45202_MethodInfo;
extern MethodInfo IList_1_set_Item_m45203_MethodInfo;
static PropertyInfo IList_1_t8717____Item_PropertyInfo = 
{
	&IList_1_t8717_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45202_MethodInfo/* get */
	, &IList_1_set_Item_m45203_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8717_PropertyInfos[] =
{
	&IList_1_t8717____Item_PropertyInfo,
	NULL
};
extern Il2CppType FileOptions_t1931_0_0_0;
static ParameterInfo IList_1_t8717_IList_1_IndexOf_m45204_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileOptions_t1931_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45204_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.FileOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45204_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8717_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8717_IList_1_IndexOf_m45204_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45204_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileOptions_t1931_0_0_0;
static ParameterInfo IList_1_t8717_IList_1_Insert_m45205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FileOptions_t1931_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45205_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45205_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8717_IList_1_Insert_m45205_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45205_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8717_IList_1_RemoveAt_m45206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45206_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45206_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8717_IList_1_RemoveAt_m45206_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45206_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8717_IList_1_get_Item_m45202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FileOptions_t1931_0_0_0;
extern void* RuntimeInvoker_FileOptions_t1931_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45202_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.FileOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45202_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8717_il2cpp_TypeInfo/* declaring_type */
	, &FileOptions_t1931_0_0_0/* return_type */
	, RuntimeInvoker_FileOptions_t1931_Int32_t73/* invoker_method */
	, IList_1_t8717_IList_1_get_Item_m45202_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45202_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileOptions_t1931_0_0_0;
static ParameterInfo IList_1_t8717_IList_1_set_Item_m45203_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FileOptions_t1931_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45203_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45203_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8717_IList_1_set_Item_m45203_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45203_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8717_MethodInfos[] =
{
	&IList_1_IndexOf_m45204_MethodInfo,
	&IList_1_Insert_m45205_MethodInfo,
	&IList_1_RemoveAt_m45206_MethodInfo,
	&IList_1_get_Item_m45202_MethodInfo,
	&IList_1_set_Item_m45203_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8717_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8716_il2cpp_TypeInfo,
	&IEnumerable_1_t8718_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8717_0_0_0;
extern Il2CppType IList_1_t8717_1_0_0;
struct IList_1_t8717;
extern Il2CppGenericClass IList_1_t8717_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8717_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8717_MethodInfos/* methods */
	, IList_1_t8717_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8717_il2cpp_TypeInfo/* element_class */
	, IList_1_t8717_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8717_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8717_0_0_0/* byval_arg */
	, &IList_1_t8717_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8717_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6753_il2cpp_TypeInfo;

// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"


// T System.Collections.Generic.IEnumerator`1<System.IO.FileShare>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.FileShare>
extern MethodInfo IEnumerator_1_get_Current_m45207_MethodInfo;
static PropertyInfo IEnumerator_1_t6753____Current_PropertyInfo = 
{
	&IEnumerator_1_t6753_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45207_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6753_PropertyInfos[] =
{
	&IEnumerator_1_t6753____Current_PropertyInfo,
	NULL
};
extern Il2CppType FileShare_t1932_0_0_0;
extern void* RuntimeInvoker_FileShare_t1932 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45207_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IO.FileShare>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45207_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6753_il2cpp_TypeInfo/* declaring_type */
	, &FileShare_t1932_0_0_0/* return_type */
	, RuntimeInvoker_FileShare_t1932/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45207_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6753_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45207_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6753_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6753_0_0_0;
extern Il2CppType IEnumerator_1_t6753_1_0_0;
struct IEnumerator_1_t6753;
extern Il2CppGenericClass IEnumerator_1_t6753_GenericClass;
TypeInfo IEnumerator_1_t6753_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6753_MethodInfos/* methods */
	, IEnumerator_1_t6753_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6753_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6753_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6753_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6753_0_0_0/* byval_arg */
	, &IEnumerator_1_t6753_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6753_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IO.FileShare>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_612.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4776_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IO.FileShare>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_612MethodDeclarations.h"

extern TypeInfo FileShare_t1932_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26113_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFileShare_t1932_m34815_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.FileShare>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.FileShare>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFileShare_t1932_m34815 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.FileShare>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26109_MethodInfo;
 void InternalEnumerator_1__ctor_m26109 (InternalEnumerator_1_t4776 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.FileShare>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110 (InternalEnumerator_1_t4776 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26113(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26113_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FileShare_t1932_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.FileShare>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26111_MethodInfo;
 void InternalEnumerator_1_Dispose_m26111 (InternalEnumerator_1_t4776 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileShare>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26112_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26112 (InternalEnumerator_1_t4776 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.FileShare>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26113 (InternalEnumerator_1_t4776 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFileShare_t1932_m34815(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFileShare_t1932_m34815_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.FileShare>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4776____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4776, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4776____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4776, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4776_FieldInfos[] =
{
	&InternalEnumerator_1_t4776____array_0_FieldInfo,
	&InternalEnumerator_1_t4776____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4776____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4776_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4776____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4776_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26113_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4776_PropertyInfos[] =
{
	&InternalEnumerator_1_t4776____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4776____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4776_InternalEnumerator_1__ctor_m26109_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26109_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileShare>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26109_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26109/* method */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4776_InternalEnumerator_1__ctor_m26109_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26109_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.FileShare>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110/* method */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26111_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.FileShare>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26111_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26111/* method */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26111_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26112_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.FileShare>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26112_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26112/* method */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26112_GenericMethod/* genericMethod */

};
extern Il2CppType FileShare_t1932_0_0_0;
extern void* RuntimeInvoker_FileShare_t1932 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26113_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.FileShare>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26113_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26113/* method */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* declaring_type */
	, &FileShare_t1932_0_0_0/* return_type */
	, RuntimeInvoker_FileShare_t1932/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26113_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4776_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26109_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110_MethodInfo,
	&InternalEnumerator_1_Dispose_m26111_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26112_MethodInfo,
	&InternalEnumerator_1_get_Current_m26113_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4776_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26110_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26112_MethodInfo,
	&InternalEnumerator_1_Dispose_m26111_MethodInfo,
	&InternalEnumerator_1_get_Current_m26113_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4776_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6753_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4776_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6753_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4776_0_0_0;
extern Il2CppType InternalEnumerator_1_t4776_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4776_GenericClass;
TypeInfo InternalEnumerator_1_t4776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4776_MethodInfos/* methods */
	, InternalEnumerator_1_t4776_PropertyInfos/* properties */
	, InternalEnumerator_1_t4776_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4776_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4776_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4776_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4776_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4776_1_0_0/* this_arg */
	, InternalEnumerator_1_t4776_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4776_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4776)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8719_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileShare>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileShare>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileShare>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileShare>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileShare>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileShare>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileShare>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.FileShare>
extern MethodInfo ICollection_1_get_Count_m45208_MethodInfo;
static PropertyInfo ICollection_1_t8719____Count_PropertyInfo = 
{
	&ICollection_1_t8719_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45208_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45209_MethodInfo;
static PropertyInfo ICollection_1_t8719____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8719_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45209_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8719_PropertyInfos[] =
{
	&ICollection_1_t8719____Count_PropertyInfo,
	&ICollection_1_t8719____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45208_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.FileShare>::get_Count()
MethodInfo ICollection_1_get_Count_m45208_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45208_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45209_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileShare>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45209_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45209_GenericMethod/* genericMethod */

};
extern Il2CppType FileShare_t1932_0_0_0;
extern Il2CppType FileShare_t1932_0_0_0;
static ParameterInfo ICollection_1_t8719_ICollection_1_Add_m45210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileShare_t1932_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45210_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileShare>::Add(T)
MethodInfo ICollection_1_Add_m45210_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8719_ICollection_1_Add_m45210_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45210_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45211_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileShare>::Clear()
MethodInfo ICollection_1_Clear_m45211_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45211_GenericMethod/* genericMethod */

};
extern Il2CppType FileShare_t1932_0_0_0;
static ParameterInfo ICollection_1_t8719_ICollection_1_Contains_m45212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileShare_t1932_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45212_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileShare>::Contains(T)
MethodInfo ICollection_1_Contains_m45212_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8719_ICollection_1_Contains_m45212_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45212_GenericMethod/* genericMethod */

};
extern Il2CppType FileShareU5BU5D_t5049_0_0_0;
extern Il2CppType FileShareU5BU5D_t5049_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8719_ICollection_1_CopyTo_m45213_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FileShareU5BU5D_t5049_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45213_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.FileShare>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45213_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8719_ICollection_1_CopyTo_m45213_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45213_GenericMethod/* genericMethod */

};
extern Il2CppType FileShare_t1932_0_0_0;
static ParameterInfo ICollection_1_t8719_ICollection_1_Remove_m45214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileShare_t1932_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45214_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.FileShare>::Remove(T)
MethodInfo ICollection_1_Remove_m45214_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8719_ICollection_1_Remove_m45214_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45214_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8719_MethodInfos[] =
{
	&ICollection_1_get_Count_m45208_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45209_MethodInfo,
	&ICollection_1_Add_m45210_MethodInfo,
	&ICollection_1_Clear_m45211_MethodInfo,
	&ICollection_1_Contains_m45212_MethodInfo,
	&ICollection_1_CopyTo_m45213_MethodInfo,
	&ICollection_1_Remove_m45214_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8721_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8719_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8721_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8719_0_0_0;
extern Il2CppType ICollection_1_t8719_1_0_0;
struct ICollection_1_t8719;
extern Il2CppGenericClass ICollection_1_t8719_GenericClass;
TypeInfo ICollection_1_t8719_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8719_MethodInfos/* methods */
	, ICollection_1_t8719_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8719_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8719_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8719_0_0_0/* byval_arg */
	, &ICollection_1_t8719_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8719_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileShare>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.FileShare>
extern Il2CppType IEnumerator_1_t6753_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45215_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.FileShare>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45215_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8721_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6753_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45215_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8721_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45215_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8721_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8721_0_0_0;
extern Il2CppType IEnumerable_1_t8721_1_0_0;
struct IEnumerable_1_t8721;
extern Il2CppGenericClass IEnumerable_1_t8721_GenericClass;
TypeInfo IEnumerable_1_t8721_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8721_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8721_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8721_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8721_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8721_0_0_0/* byval_arg */
	, &IEnumerable_1_t8721_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8721_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8720_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.FileShare>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileShare>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.FileShare>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.FileShare>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.FileShare>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.FileShare>
extern MethodInfo IList_1_get_Item_m45216_MethodInfo;
extern MethodInfo IList_1_set_Item_m45217_MethodInfo;
static PropertyInfo IList_1_t8720____Item_PropertyInfo = 
{
	&IList_1_t8720_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45216_MethodInfo/* get */
	, &IList_1_set_Item_m45217_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8720_PropertyInfos[] =
{
	&IList_1_t8720____Item_PropertyInfo,
	NULL
};
extern Il2CppType FileShare_t1932_0_0_0;
static ParameterInfo IList_1_t8720_IList_1_IndexOf_m45218_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FileShare_t1932_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45218_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.FileShare>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45218_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8720_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8720_IList_1_IndexOf_m45218_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45218_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileShare_t1932_0_0_0;
static ParameterInfo IList_1_t8720_IList_1_Insert_m45219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FileShare_t1932_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45219_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileShare>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45219_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8720_IList_1_Insert_m45219_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45219_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8720_IList_1_RemoveAt_m45220_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45220_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileShare>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45220_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8720_IList_1_RemoveAt_m45220_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45220_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8720_IList_1_get_Item_m45216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FileShare_t1932_0_0_0;
extern void* RuntimeInvoker_FileShare_t1932_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45216_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.FileShare>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45216_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8720_il2cpp_TypeInfo/* declaring_type */
	, &FileShare_t1932_0_0_0/* return_type */
	, RuntimeInvoker_FileShare_t1932_Int32_t73/* invoker_method */
	, IList_1_t8720_IList_1_get_Item_m45216_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45216_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FileShare_t1932_0_0_0;
static ParameterInfo IList_1_t8720_IList_1_set_Item_m45217_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FileShare_t1932_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45217_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.FileShare>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45217_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8720_IList_1_set_Item_m45217_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45217_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8720_MethodInfos[] =
{
	&IList_1_IndexOf_m45218_MethodInfo,
	&IList_1_Insert_m45219_MethodInfo,
	&IList_1_RemoveAt_m45220_MethodInfo,
	&IList_1_get_Item_m45216_MethodInfo,
	&IList_1_set_Item_m45217_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8720_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8719_il2cpp_TypeInfo,
	&IEnumerable_1_t8721_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8720_0_0_0;
extern Il2CppType IList_1_t8720_1_0_0;
struct IList_1_t8720;
extern Il2CppGenericClass IList_1_t8720_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8720_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8720_MethodInfos/* methods */
	, IList_1_t8720_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8720_il2cpp_TypeInfo/* element_class */
	, IList_1_t8720_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8720_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8720_0_0_0/* byval_arg */
	, &IList_1_t8720_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8720_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6755_il2cpp_TypeInfo;

// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileType.h"


// T System.Collections.Generic.IEnumerator`1<System.IO.MonoFileType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.MonoFileType>
extern MethodInfo IEnumerator_1_get_Current_m45221_MethodInfo;
static PropertyInfo IEnumerator_1_t6755____Current_PropertyInfo = 
{
	&IEnumerator_1_t6755_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45221_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6755_PropertyInfos[] =
{
	&IEnumerator_1_t6755____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoFileType_t1937_0_0_0;
extern void* RuntimeInvoker_MonoFileType_t1937 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45221_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IO.MonoFileType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45221_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6755_il2cpp_TypeInfo/* declaring_type */
	, &MonoFileType_t1937_0_0_0/* return_type */
	, RuntimeInvoker_MonoFileType_t1937/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45221_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6755_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45221_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6755_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6755_0_0_0;
extern Il2CppType IEnumerator_1_t6755_1_0_0;
struct IEnumerator_1_t6755;
extern Il2CppGenericClass IEnumerator_1_t6755_GenericClass;
TypeInfo IEnumerator_1_t6755_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6755_MethodInfos/* methods */
	, IEnumerator_1_t6755_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6755_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6755_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6755_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6755_0_0_0/* byval_arg */
	, &IEnumerator_1_t6755_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6755_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IO.MonoFileType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_613.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4777_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IO.MonoFileType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_613MethodDeclarations.h"

extern TypeInfo MonoFileType_t1937_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26118_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoFileType_t1937_m34826_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.MonoFileType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.MonoFileType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMonoFileType_t1937_m34826 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.MonoFileType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26114_MethodInfo;
 void InternalEnumerator_1__ctor_m26114 (InternalEnumerator_1_t4777 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.MonoFileType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115 (InternalEnumerator_1_t4777 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26118(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26118_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MonoFileType_t1937_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.MonoFileType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26116_MethodInfo;
 void InternalEnumerator_1_Dispose_m26116 (InternalEnumerator_1_t4777 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.MonoFileType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26117_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26117 (InternalEnumerator_1_t4777 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.MonoFileType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26118 (InternalEnumerator_1_t4777 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMonoFileType_t1937_m34826(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMonoFileType_t1937_m34826_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.MonoFileType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4777____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4777, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4777____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4777, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4777_FieldInfos[] =
{
	&InternalEnumerator_1_t4777____array_0_FieldInfo,
	&InternalEnumerator_1_t4777____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4777____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4777_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4777____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4777_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26118_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4777_PropertyInfos[] =
{
	&InternalEnumerator_1_t4777____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4777____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4777_InternalEnumerator_1__ctor_m26114_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26114_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.MonoFileType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26114_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26114/* method */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4777_InternalEnumerator_1__ctor_m26114_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26114_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.MonoFileType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115/* method */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26116_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.MonoFileType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26116_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26116/* method */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26116_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26117_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.MonoFileType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26117_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26117/* method */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26117_GenericMethod/* genericMethod */

};
extern Il2CppType MonoFileType_t1937_0_0_0;
extern void* RuntimeInvoker_MonoFileType_t1937 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26118_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.MonoFileType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26118_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26118/* method */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* declaring_type */
	, &MonoFileType_t1937_0_0_0/* return_type */
	, RuntimeInvoker_MonoFileType_t1937/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26118_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4777_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26114_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo,
	&InternalEnumerator_1_Dispose_m26116_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26117_MethodInfo,
	&InternalEnumerator_1_get_Current_m26118_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4777_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26115_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26117_MethodInfo,
	&InternalEnumerator_1_Dispose_m26116_MethodInfo,
	&InternalEnumerator_1_get_Current_m26118_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4777_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6755_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4777_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6755_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4777_0_0_0;
extern Il2CppType InternalEnumerator_1_t4777_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4777_GenericClass;
TypeInfo InternalEnumerator_1_t4777_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4777_MethodInfos/* methods */
	, InternalEnumerator_1_t4777_PropertyInfos/* properties */
	, InternalEnumerator_1_t4777_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4777_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4777_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4777_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4777_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4777_1_0_0/* this_arg */
	, InternalEnumerator_1_t4777_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4777_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4777)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8722_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.MonoFileType>
extern MethodInfo ICollection_1_get_Count_m45222_MethodInfo;
static PropertyInfo ICollection_1_t8722____Count_PropertyInfo = 
{
	&ICollection_1_t8722_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45222_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45223_MethodInfo;
static PropertyInfo ICollection_1_t8722____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8722_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45223_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8722_PropertyInfos[] =
{
	&ICollection_1_t8722____Count_PropertyInfo,
	&ICollection_1_t8722____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45222_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::get_Count()
MethodInfo ICollection_1_get_Count_m45222_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45222_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45223_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45223_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45223_GenericMethod/* genericMethod */

};
extern Il2CppType MonoFileType_t1937_0_0_0;
extern Il2CppType MonoFileType_t1937_0_0_0;
static ParameterInfo ICollection_1_t8722_ICollection_1_Add_m45224_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoFileType_t1937_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45224_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::Add(T)
MethodInfo ICollection_1_Add_m45224_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8722_ICollection_1_Add_m45224_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45224_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45225_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::Clear()
MethodInfo ICollection_1_Clear_m45225_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45225_GenericMethod/* genericMethod */

};
extern Il2CppType MonoFileType_t1937_0_0_0;
static ParameterInfo ICollection_1_t8722_ICollection_1_Contains_m45226_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoFileType_t1937_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45226_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::Contains(T)
MethodInfo ICollection_1_Contains_m45226_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8722_ICollection_1_Contains_m45226_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45226_GenericMethod/* genericMethod */

};
extern Il2CppType MonoFileTypeU5BU5D_t5050_0_0_0;
extern Il2CppType MonoFileTypeU5BU5D_t5050_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8722_ICollection_1_CopyTo_m45227_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoFileTypeU5BU5D_t5050_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45227_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45227_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8722_ICollection_1_CopyTo_m45227_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45227_GenericMethod/* genericMethod */

};
extern Il2CppType MonoFileType_t1937_0_0_0;
static ParameterInfo ICollection_1_t8722_ICollection_1_Remove_m45228_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoFileType_t1937_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45228_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoFileType>::Remove(T)
MethodInfo ICollection_1_Remove_m45228_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8722_ICollection_1_Remove_m45228_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45228_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8722_MethodInfos[] =
{
	&ICollection_1_get_Count_m45222_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45223_MethodInfo,
	&ICollection_1_Add_m45224_MethodInfo,
	&ICollection_1_Clear_m45225_MethodInfo,
	&ICollection_1_Contains_m45226_MethodInfo,
	&ICollection_1_CopyTo_m45227_MethodInfo,
	&ICollection_1_Remove_m45228_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8724_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8722_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8724_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8722_0_0_0;
extern Il2CppType ICollection_1_t8722_1_0_0;
struct ICollection_1_t8722;
extern Il2CppGenericClass ICollection_1_t8722_GenericClass;
TypeInfo ICollection_1_t8722_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8722_MethodInfos/* methods */
	, ICollection_1_t8722_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8722_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8722_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8722_0_0_0/* byval_arg */
	, &ICollection_1_t8722_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8722_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.MonoFileType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.MonoFileType>
extern Il2CppType IEnumerator_1_t6755_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45229_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.MonoFileType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45229_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8724_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6755_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45229_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8724_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45229_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8724_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8724_0_0_0;
extern Il2CppType IEnumerable_1_t8724_1_0_0;
struct IEnumerable_1_t8724;
extern Il2CppGenericClass IEnumerable_1_t8724_GenericClass;
TypeInfo IEnumerable_1_t8724_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8724_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8724_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8724_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8724_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8724_0_0_0/* byval_arg */
	, &IEnumerable_1_t8724_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8724_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8723_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.MonoFileType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.MonoFileType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.MonoFileType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.MonoFileType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.MonoFileType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.MonoFileType>
extern MethodInfo IList_1_get_Item_m45230_MethodInfo;
extern MethodInfo IList_1_set_Item_m45231_MethodInfo;
static PropertyInfo IList_1_t8723____Item_PropertyInfo = 
{
	&IList_1_t8723_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45230_MethodInfo/* get */
	, &IList_1_set_Item_m45231_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8723_PropertyInfos[] =
{
	&IList_1_t8723____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoFileType_t1937_0_0_0;
static ParameterInfo IList_1_t8723_IList_1_IndexOf_m45232_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoFileType_t1937_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45232_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.MonoFileType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45232_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8723_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8723_IList_1_IndexOf_m45232_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45232_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoFileType_t1937_0_0_0;
static ParameterInfo IList_1_t8723_IList_1_Insert_m45233_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoFileType_t1937_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45233_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.MonoFileType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45233_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8723_IList_1_Insert_m45233_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45233_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8723_IList_1_RemoveAt_m45234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45234_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.MonoFileType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45234_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8723_IList_1_RemoveAt_m45234_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45234_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8723_IList_1_get_Item_m45230_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MonoFileType_t1937_0_0_0;
extern void* RuntimeInvoker_MonoFileType_t1937_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45230_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.MonoFileType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45230_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8723_il2cpp_TypeInfo/* declaring_type */
	, &MonoFileType_t1937_0_0_0/* return_type */
	, RuntimeInvoker_MonoFileType_t1937_Int32_t73/* invoker_method */
	, IList_1_t8723_IList_1_get_Item_m45230_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45230_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoFileType_t1937_0_0_0;
static ParameterInfo IList_1_t8723_IList_1_set_Item_m45231_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoFileType_t1937_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45231_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.MonoFileType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45231_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8723_IList_1_set_Item_m45231_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45231_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8723_MethodInfos[] =
{
	&IList_1_IndexOf_m45232_MethodInfo,
	&IList_1_Insert_m45233_MethodInfo,
	&IList_1_RemoveAt_m45234_MethodInfo,
	&IList_1_get_Item_m45230_MethodInfo,
	&IList_1_set_Item_m45231_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8723_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8722_il2cpp_TypeInfo,
	&IEnumerable_1_t8724_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8723_0_0_0;
extern Il2CppType IList_1_t8723_1_0_0;
struct IList_1_t8723;
extern Il2CppGenericClass IList_1_t8723_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8723_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8723_MethodInfos/* methods */
	, IList_1_t8723_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8723_il2cpp_TypeInfo/* element_class */
	, IList_1_t8723_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8723_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8723_0_0_0/* byval_arg */
	, &IList_1_t8723_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8723_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6756_il2cpp_TypeInfo;

// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOError.h"


// T System.Collections.Generic.IEnumerator`1<System.IO.MonoIOError>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.MonoIOError>
extern MethodInfo IEnumerator_1_get_Current_m45235_MethodInfo;
static PropertyInfo IEnumerator_1_t6756____Current_PropertyInfo = 
{
	&IEnumerator_1_t6756_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45235_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6756_PropertyInfos[] =
{
	&IEnumerator_1_t6756____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoIOError_t1939_0_0_0;
extern void* RuntimeInvoker_MonoIOError_t1939 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45235_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IO.MonoIOError>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45235_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6756_il2cpp_TypeInfo/* declaring_type */
	, &MonoIOError_t1939_0_0_0/* return_type */
	, RuntimeInvoker_MonoIOError_t1939/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45235_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6756_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45235_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6756_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6756_0_0_0;
extern Il2CppType IEnumerator_1_t6756_1_0_0;
struct IEnumerator_1_t6756;
extern Il2CppGenericClass IEnumerator_1_t6756_GenericClass;
TypeInfo IEnumerator_1_t6756_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6756_MethodInfos/* methods */
	, IEnumerator_1_t6756_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6756_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6756_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6756_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6756_0_0_0/* byval_arg */
	, &IEnumerator_1_t6756_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6756_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IO.MonoIOError>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_614.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4778_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IO.MonoIOError>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_614MethodDeclarations.h"

extern TypeInfo MonoIOError_t1939_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26123_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoIOError_t1939_m34837_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.MonoIOError>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.MonoIOError>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMonoIOError_t1939_m34837 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.MonoIOError>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26119_MethodInfo;
 void InternalEnumerator_1__ctor_m26119 (InternalEnumerator_1_t4778 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.MonoIOError>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120 (InternalEnumerator_1_t4778 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26123(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26123_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MonoIOError_t1939_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.MonoIOError>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26121_MethodInfo;
 void InternalEnumerator_1_Dispose_m26121 (InternalEnumerator_1_t4778 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.MonoIOError>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26122_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26122 (InternalEnumerator_1_t4778 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.MonoIOError>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26123 (InternalEnumerator_1_t4778 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMonoIOError_t1939_m34837(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMonoIOError_t1939_m34837_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.MonoIOError>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4778____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4778, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4778____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4778, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4778_FieldInfos[] =
{
	&InternalEnumerator_1_t4778____array_0_FieldInfo,
	&InternalEnumerator_1_t4778____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4778____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4778_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4778____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4778_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26123_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4778_PropertyInfos[] =
{
	&InternalEnumerator_1_t4778____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4778____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4778_InternalEnumerator_1__ctor_m26119_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26119_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.MonoIOError>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26119_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26119/* method */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4778_InternalEnumerator_1__ctor_m26119_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26119_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.MonoIOError>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120/* method */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26121_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.MonoIOError>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26121_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26121/* method */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26121_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26122_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.MonoIOError>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26122_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26122/* method */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26122_GenericMethod/* genericMethod */

};
extern Il2CppType MonoIOError_t1939_0_0_0;
extern void* RuntimeInvoker_MonoIOError_t1939 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26123_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.MonoIOError>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26123_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26123/* method */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* declaring_type */
	, &MonoIOError_t1939_0_0_0/* return_type */
	, RuntimeInvoker_MonoIOError_t1939/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26123_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4778_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26119_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120_MethodInfo,
	&InternalEnumerator_1_Dispose_m26121_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26122_MethodInfo,
	&InternalEnumerator_1_get_Current_m26123_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4778_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26120_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26122_MethodInfo,
	&InternalEnumerator_1_Dispose_m26121_MethodInfo,
	&InternalEnumerator_1_get_Current_m26123_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4778_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6756_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4778_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6756_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4778_0_0_0;
extern Il2CppType InternalEnumerator_1_t4778_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4778_GenericClass;
TypeInfo InternalEnumerator_1_t4778_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4778_MethodInfos/* methods */
	, InternalEnumerator_1_t4778_PropertyInfos/* properties */
	, InternalEnumerator_1_t4778_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4778_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4778_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4778_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4778_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4778_1_0_0/* this_arg */
	, InternalEnumerator_1_t4778_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4778_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4778)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8725_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.MonoIOError>
extern MethodInfo ICollection_1_get_Count_m45236_MethodInfo;
static PropertyInfo ICollection_1_t8725____Count_PropertyInfo = 
{
	&ICollection_1_t8725_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45236_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45237_MethodInfo;
static PropertyInfo ICollection_1_t8725____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8725_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45237_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8725_PropertyInfos[] =
{
	&ICollection_1_t8725____Count_PropertyInfo,
	&ICollection_1_t8725____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45236_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::get_Count()
MethodInfo ICollection_1_get_Count_m45236_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45236_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45237_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45237_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45237_GenericMethod/* genericMethod */

};
extern Il2CppType MonoIOError_t1939_0_0_0;
extern Il2CppType MonoIOError_t1939_0_0_0;
static ParameterInfo ICollection_1_t8725_ICollection_1_Add_m45238_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoIOError_t1939_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45238_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::Add(T)
MethodInfo ICollection_1_Add_m45238_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8725_ICollection_1_Add_m45238_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45238_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45239_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::Clear()
MethodInfo ICollection_1_Clear_m45239_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45239_GenericMethod/* genericMethod */

};
extern Il2CppType MonoIOError_t1939_0_0_0;
static ParameterInfo ICollection_1_t8725_ICollection_1_Contains_m45240_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoIOError_t1939_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45240_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::Contains(T)
MethodInfo ICollection_1_Contains_m45240_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8725_ICollection_1_Contains_m45240_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45240_GenericMethod/* genericMethod */

};
extern Il2CppType MonoIOErrorU5BU5D_t5051_0_0_0;
extern Il2CppType MonoIOErrorU5BU5D_t5051_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8725_ICollection_1_CopyTo_m45241_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoIOErrorU5BU5D_t5051_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45241_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45241_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8725_ICollection_1_CopyTo_m45241_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45241_GenericMethod/* genericMethod */

};
extern Il2CppType MonoIOError_t1939_0_0_0;
static ParameterInfo ICollection_1_t8725_ICollection_1_Remove_m45242_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoIOError_t1939_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45242_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.MonoIOError>::Remove(T)
MethodInfo ICollection_1_Remove_m45242_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8725_ICollection_1_Remove_m45242_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45242_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8725_MethodInfos[] =
{
	&ICollection_1_get_Count_m45236_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45237_MethodInfo,
	&ICollection_1_Add_m45238_MethodInfo,
	&ICollection_1_Clear_m45239_MethodInfo,
	&ICollection_1_Contains_m45240_MethodInfo,
	&ICollection_1_CopyTo_m45241_MethodInfo,
	&ICollection_1_Remove_m45242_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8727_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8725_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8727_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8725_0_0_0;
extern Il2CppType ICollection_1_t8725_1_0_0;
struct ICollection_1_t8725;
extern Il2CppGenericClass ICollection_1_t8725_GenericClass;
TypeInfo ICollection_1_t8725_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8725_MethodInfos/* methods */
	, ICollection_1_t8725_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8725_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8725_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8725_0_0_0/* byval_arg */
	, &ICollection_1_t8725_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8725_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.MonoIOError>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.MonoIOError>
extern Il2CppType IEnumerator_1_t6756_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45243_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.MonoIOError>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45243_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8727_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6756_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45243_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8727_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45243_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8727_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8727_0_0_0;
extern Il2CppType IEnumerable_1_t8727_1_0_0;
struct IEnumerable_1_t8727;
extern Il2CppGenericClass IEnumerable_1_t8727_GenericClass;
TypeInfo IEnumerable_1_t8727_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8727_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8727_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8727_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8727_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8727_0_0_0/* byval_arg */
	, &IEnumerable_1_t8727_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8727_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8726_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.MonoIOError>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.MonoIOError>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.MonoIOError>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.MonoIOError>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.MonoIOError>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.MonoIOError>
extern MethodInfo IList_1_get_Item_m45244_MethodInfo;
extern MethodInfo IList_1_set_Item_m45245_MethodInfo;
static PropertyInfo IList_1_t8726____Item_PropertyInfo = 
{
	&IList_1_t8726_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45244_MethodInfo/* get */
	, &IList_1_set_Item_m45245_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8726_PropertyInfos[] =
{
	&IList_1_t8726____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoIOError_t1939_0_0_0;
static ParameterInfo IList_1_t8726_IList_1_IndexOf_m45246_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoIOError_t1939_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45246_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.MonoIOError>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45246_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8726_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8726_IList_1_IndexOf_m45246_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45246_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoIOError_t1939_0_0_0;
static ParameterInfo IList_1_t8726_IList_1_Insert_m45247_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoIOError_t1939_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45247_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.MonoIOError>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45247_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8726_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8726_IList_1_Insert_m45247_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45247_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8726_IList_1_RemoveAt_m45248_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45248_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.MonoIOError>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45248_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8726_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8726_IList_1_RemoveAt_m45248_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45248_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8726_IList_1_get_Item_m45244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MonoIOError_t1939_0_0_0;
extern void* RuntimeInvoker_MonoIOError_t1939_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45244_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.MonoIOError>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45244_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8726_il2cpp_TypeInfo/* declaring_type */
	, &MonoIOError_t1939_0_0_0/* return_type */
	, RuntimeInvoker_MonoIOError_t1939_Int32_t73/* invoker_method */
	, IList_1_t8726_IList_1_get_Item_m45244_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45244_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoIOError_t1939_0_0_0;
static ParameterInfo IList_1_t8726_IList_1_set_Item_m45245_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoIOError_t1939_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45245_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.MonoIOError>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45245_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8726_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8726_IList_1_set_Item_m45245_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45245_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8726_MethodInfos[] =
{
	&IList_1_IndexOf_m45246_MethodInfo,
	&IList_1_Insert_m45247_MethodInfo,
	&IList_1_RemoveAt_m45248_MethodInfo,
	&IList_1_get_Item_m45244_MethodInfo,
	&IList_1_set_Item_m45245_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8726_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8725_il2cpp_TypeInfo,
	&IEnumerable_1_t8727_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8726_0_0_0;
extern Il2CppType IList_1_t8726_1_0_0;
struct IList_1_t8726;
extern Il2CppGenericClass IList_1_t8726_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8726_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8726_MethodInfos/* methods */
	, IList_1_t8726_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8726_il2cpp_TypeInfo/* element_class */
	, IList_1_t8726_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8726_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8726_0_0_0/* byval_arg */
	, &IList_1_t8726_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8726_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6758_il2cpp_TypeInfo;

// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"


// T System.Collections.Generic.IEnumerator`1<System.IO.SeekOrigin>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IO.SeekOrigin>
extern MethodInfo IEnumerator_1_get_Current_m45249_MethodInfo;
static PropertyInfo IEnumerator_1_t6758____Current_PropertyInfo = 
{
	&IEnumerator_1_t6758_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45249_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6758_PropertyInfos[] =
{
	&IEnumerator_1_t6758____Current_PropertyInfo,
	NULL
};
extern Il2CppType SeekOrigin_t1556_0_0_0;
extern void* RuntimeInvoker_SeekOrigin_t1556 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45249_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IO.SeekOrigin>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45249_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6758_il2cpp_TypeInfo/* declaring_type */
	, &SeekOrigin_t1556_0_0_0/* return_type */
	, RuntimeInvoker_SeekOrigin_t1556/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45249_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6758_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45249_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6758_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6758_0_0_0;
extern Il2CppType IEnumerator_1_t6758_1_0_0;
struct IEnumerator_1_t6758;
extern Il2CppGenericClass IEnumerator_1_t6758_GenericClass;
TypeInfo IEnumerator_1_t6758_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6758_MethodInfos/* methods */
	, IEnumerator_1_t6758_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6758_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6758_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6758_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6758_0_0_0/* byval_arg */
	, &IEnumerator_1_t6758_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6758_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IO.SeekOrigin>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_615.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4779_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IO.SeekOrigin>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_615MethodDeclarations.h"

extern TypeInfo SeekOrigin_t1556_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26128_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSeekOrigin_t1556_m34848_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IO.SeekOrigin>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IO.SeekOrigin>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSeekOrigin_t1556_m34848 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26124_MethodInfo;
 void InternalEnumerator_1__ctor_m26124 (InternalEnumerator_1_t4779 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125 (InternalEnumerator_1_t4779 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26128(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26128_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SeekOrigin_t1556_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26126_MethodInfo;
 void InternalEnumerator_1_Dispose_m26126 (InternalEnumerator_1_t4779 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26127_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26127 (InternalEnumerator_1_t4779 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26128 (InternalEnumerator_1_t4779 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSeekOrigin_t1556_m34848(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSeekOrigin_t1556_m34848_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IO.SeekOrigin>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4779____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4779, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4779____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4779, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4779_FieldInfos[] =
{
	&InternalEnumerator_1_t4779____array_0_FieldInfo,
	&InternalEnumerator_1_t4779____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4779____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4779_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4779____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4779_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26128_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4779_PropertyInfos[] =
{
	&InternalEnumerator_1_t4779____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4779____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4779_InternalEnumerator_1__ctor_m26124_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26124_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26124_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26124/* method */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4779_InternalEnumerator_1__ctor_m26124_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26124_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125/* method */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26126_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26126_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26126/* method */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26126_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26127_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26127_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26127/* method */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26127_GenericMethod/* genericMethod */

};
extern Il2CppType SeekOrigin_t1556_0_0_0;
extern void* RuntimeInvoker_SeekOrigin_t1556 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26128_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IO.SeekOrigin>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26128_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26128/* method */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* declaring_type */
	, &SeekOrigin_t1556_0_0_0/* return_type */
	, RuntimeInvoker_SeekOrigin_t1556/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26128_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4779_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26124_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125_MethodInfo,
	&InternalEnumerator_1_Dispose_m26126_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26127_MethodInfo,
	&InternalEnumerator_1_get_Current_m26128_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4779_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26125_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26127_MethodInfo,
	&InternalEnumerator_1_Dispose_m26126_MethodInfo,
	&InternalEnumerator_1_get_Current_m26128_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4779_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6758_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4779_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6758_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4779_0_0_0;
extern Il2CppType InternalEnumerator_1_t4779_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4779_GenericClass;
TypeInfo InternalEnumerator_1_t4779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4779_MethodInfos/* methods */
	, InternalEnumerator_1_t4779_PropertyInfos/* properties */
	, InternalEnumerator_1_t4779_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4779_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4779_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4779_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4779_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4779_1_0_0/* this_arg */
	, InternalEnumerator_1_t4779_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4779_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4779)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8728_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>
extern MethodInfo ICollection_1_get_Count_m45250_MethodInfo;
static PropertyInfo ICollection_1_t8728____Count_PropertyInfo = 
{
	&ICollection_1_t8728_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45250_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45251_MethodInfo;
static PropertyInfo ICollection_1_t8728____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8728_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45251_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8728_PropertyInfos[] =
{
	&ICollection_1_t8728____Count_PropertyInfo,
	&ICollection_1_t8728____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45250_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::get_Count()
MethodInfo ICollection_1_get_Count_m45250_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45250_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45251_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45251_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45251_GenericMethod/* genericMethod */

};
extern Il2CppType SeekOrigin_t1556_0_0_0;
extern Il2CppType SeekOrigin_t1556_0_0_0;
static ParameterInfo ICollection_1_t8728_ICollection_1_Add_m45252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SeekOrigin_t1556_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45252_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::Add(T)
MethodInfo ICollection_1_Add_m45252_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8728_ICollection_1_Add_m45252_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45252_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45253_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::Clear()
MethodInfo ICollection_1_Clear_m45253_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45253_GenericMethod/* genericMethod */

};
extern Il2CppType SeekOrigin_t1556_0_0_0;
static ParameterInfo ICollection_1_t8728_ICollection_1_Contains_m45254_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SeekOrigin_t1556_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45254_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::Contains(T)
MethodInfo ICollection_1_Contains_m45254_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8728_ICollection_1_Contains_m45254_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45254_GenericMethod/* genericMethod */

};
extern Il2CppType SeekOriginU5BU5D_t5052_0_0_0;
extern Il2CppType SeekOriginU5BU5D_t5052_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8728_ICollection_1_CopyTo_m45255_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SeekOriginU5BU5D_t5052_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45255_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45255_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8728_ICollection_1_CopyTo_m45255_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45255_GenericMethod/* genericMethod */

};
extern Il2CppType SeekOrigin_t1556_0_0_0;
static ParameterInfo ICollection_1_t8728_ICollection_1_Remove_m45256_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SeekOrigin_t1556_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45256_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IO.SeekOrigin>::Remove(T)
MethodInfo ICollection_1_Remove_m45256_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8728_ICollection_1_Remove_m45256_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45256_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8728_MethodInfos[] =
{
	&ICollection_1_get_Count_m45250_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45251_MethodInfo,
	&ICollection_1_Add_m45252_MethodInfo,
	&ICollection_1_Clear_m45253_MethodInfo,
	&ICollection_1_Contains_m45254_MethodInfo,
	&ICollection_1_CopyTo_m45255_MethodInfo,
	&ICollection_1_Remove_m45256_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8730_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8728_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8730_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8728_0_0_0;
extern Il2CppType ICollection_1_t8728_1_0_0;
struct ICollection_1_t8728;
extern Il2CppGenericClass ICollection_1_t8728_GenericClass;
TypeInfo ICollection_1_t8728_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8728_MethodInfos/* methods */
	, ICollection_1_t8728_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8728_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8728_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8728_0_0_0/* byval_arg */
	, &ICollection_1_t8728_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8728_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.SeekOrigin>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IO.SeekOrigin>
extern Il2CppType IEnumerator_1_t6758_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45257_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IO.SeekOrigin>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45257_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8730_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6758_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45257_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8730_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45257_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8730_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8730_0_0_0;
extern Il2CppType IEnumerable_1_t8730_1_0_0;
struct IEnumerable_1_t8730;
extern Il2CppGenericClass IEnumerable_1_t8730_GenericClass;
TypeInfo IEnumerable_1_t8730_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8730_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8730_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8730_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8730_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8730_0_0_0/* byval_arg */
	, &IEnumerable_1_t8730_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8730_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8729_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IO.SeekOrigin>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IO.SeekOrigin>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IO.SeekOrigin>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IO.SeekOrigin>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IO.SeekOrigin>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IO.SeekOrigin>
extern MethodInfo IList_1_get_Item_m45258_MethodInfo;
extern MethodInfo IList_1_set_Item_m45259_MethodInfo;
static PropertyInfo IList_1_t8729____Item_PropertyInfo = 
{
	&IList_1_t8729_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45258_MethodInfo/* get */
	, &IList_1_set_Item_m45259_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8729_PropertyInfos[] =
{
	&IList_1_t8729____Item_PropertyInfo,
	NULL
};
extern Il2CppType SeekOrigin_t1556_0_0_0;
static ParameterInfo IList_1_t8729_IList_1_IndexOf_m45260_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SeekOrigin_t1556_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45260_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IO.SeekOrigin>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45260_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8729_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8729_IList_1_IndexOf_m45260_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45260_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SeekOrigin_t1556_0_0_0;
static ParameterInfo IList_1_t8729_IList_1_Insert_m45261_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SeekOrigin_t1556_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45261_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.SeekOrigin>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45261_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8729_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8729_IList_1_Insert_m45261_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45261_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8729_IList_1_RemoveAt_m45262_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45262_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.SeekOrigin>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45262_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8729_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8729_IList_1_RemoveAt_m45262_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45262_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8729_IList_1_get_Item_m45258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SeekOrigin_t1556_0_0_0;
extern void* RuntimeInvoker_SeekOrigin_t1556_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45258_GenericMethod;
// T System.Collections.Generic.IList`1<System.IO.SeekOrigin>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45258_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8729_il2cpp_TypeInfo/* declaring_type */
	, &SeekOrigin_t1556_0_0_0/* return_type */
	, RuntimeInvoker_SeekOrigin_t1556_Int32_t73/* invoker_method */
	, IList_1_t8729_IList_1_get_Item_m45258_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45258_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SeekOrigin_t1556_0_0_0;
static ParameterInfo IList_1_t8729_IList_1_set_Item_m45259_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SeekOrigin_t1556_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45259_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IO.SeekOrigin>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45259_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8729_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8729_IList_1_set_Item_m45259_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45259_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8729_MethodInfos[] =
{
	&IList_1_IndexOf_m45260_MethodInfo,
	&IList_1_Insert_m45261_MethodInfo,
	&IList_1_RemoveAt_m45262_MethodInfo,
	&IList_1_get_Item_m45258_MethodInfo,
	&IList_1_set_Item_m45259_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8729_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8728_il2cpp_TypeInfo,
	&IEnumerable_1_t8730_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8729_0_0_0;
extern Il2CppType IList_1_t8729_1_0_0;
struct IList_1_t8729;
extern Il2CppGenericClass IList_1_t8729_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8729_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8729_MethodInfos/* methods */
	, IList_1_t8729_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8729_il2cpp_TypeInfo/* element_class */
	, IList_1_t8729_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8729_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8729_0_0_0/* byval_arg */
	, &IList_1_t8729_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8729_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6760_il2cpp_TypeInfo;

// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ModuleBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45263_MethodInfo;
static PropertyInfo IEnumerator_1_t6760____Current_PropertyInfo = 
{
	&IEnumerator_1_t6760_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45263_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6760_PropertyInfos[] =
{
	&IEnumerator_1_t6760____Current_PropertyInfo,
	NULL
};
extern Il2CppType ModuleBuilder_t1968_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45263_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ModuleBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45263_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6760_il2cpp_TypeInfo/* declaring_type */
	, &ModuleBuilder_t1968_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45263_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6760_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45263_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6760_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6760_0_0_0;
extern Il2CppType IEnumerator_1_t6760_1_0_0;
struct IEnumerator_1_t6760;
extern Il2CppGenericClass IEnumerator_1_t6760_GenericClass;
TypeInfo IEnumerator_1_t6760_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6760_MethodInfos/* methods */
	, IEnumerator_1_t6760_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6760_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6760_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6760_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6760_0_0_0/* byval_arg */
	, &IEnumerator_1_t6760_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6760_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_616.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4780_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_616MethodDeclarations.h"

extern TypeInfo ModuleBuilder_t1968_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26133_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisModuleBuilder_t1968_m34859_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ModuleBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisModuleBuilder_t1968_m34859(__this, p0, method) (ModuleBuilder_t1968 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4780____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4780, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4780____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4780, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4780_FieldInfos[] =
{
	&InternalEnumerator_1_t4780____array_0_FieldInfo,
	&InternalEnumerator_1_t4780____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26130_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4780____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4780_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26130_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4780____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4780_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26133_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4780_PropertyInfos[] =
{
	&InternalEnumerator_1_t4780____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4780____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4780_InternalEnumerator_1__ctor_m26129_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26129_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26129_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4780_InternalEnumerator_1__ctor_m26129_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26129_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26130_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26130_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26130_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26131_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26131_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26131_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26132_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26132_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26132_GenericMethod/* genericMethod */

};
extern Il2CppType ModuleBuilder_t1968_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26133_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ModuleBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26133_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* declaring_type */
	, &ModuleBuilder_t1968_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26133_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4780_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26129_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26130_MethodInfo,
	&InternalEnumerator_1_Dispose_m26131_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26132_MethodInfo,
	&InternalEnumerator_1_get_Current_m26133_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26132_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26131_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4780_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26130_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26132_MethodInfo,
	&InternalEnumerator_1_Dispose_m26131_MethodInfo,
	&InternalEnumerator_1_get_Current_m26133_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4780_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6760_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4780_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6760_il2cpp_TypeInfo, 7},
};
extern TypeInfo ModuleBuilder_t1968_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4780_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26133_MethodInfo/* Method Usage */,
	&ModuleBuilder_t1968_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisModuleBuilder_t1968_m34859_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4780_0_0_0;
extern Il2CppType InternalEnumerator_1_t4780_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4780_GenericClass;
TypeInfo InternalEnumerator_1_t4780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4780_MethodInfos/* methods */
	, InternalEnumerator_1_t4780_PropertyInfos/* properties */
	, InternalEnumerator_1_t4780_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4780_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4780_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4780_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4780_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4780_1_0_0/* this_arg */
	, InternalEnumerator_1_t4780_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4780_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4780_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4780)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8731_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo ICollection_1_get_Count_m45264_MethodInfo;
static PropertyInfo ICollection_1_t8731____Count_PropertyInfo = 
{
	&ICollection_1_t8731_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45264_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45265_MethodInfo;
static PropertyInfo ICollection_1_t8731____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8731_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45265_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8731_PropertyInfos[] =
{
	&ICollection_1_t8731____Count_PropertyInfo,
	&ICollection_1_t8731____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45264_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45264_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45264_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45265_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45265_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45265_GenericMethod/* genericMethod */

};
extern Il2CppType ModuleBuilder_t1968_0_0_0;
extern Il2CppType ModuleBuilder_t1968_0_0_0;
static ParameterInfo ICollection_1_t8731_ICollection_1_Add_m45266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ModuleBuilder_t1968_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45266_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45266_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8731_ICollection_1_Add_m45266_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45266_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45267_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45267_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45267_GenericMethod/* genericMethod */

};
extern Il2CppType ModuleBuilder_t1968_0_0_0;
static ParameterInfo ICollection_1_t8731_ICollection_1_Contains_m45268_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ModuleBuilder_t1968_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45268_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45268_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8731_ICollection_1_Contains_m45268_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45268_GenericMethod/* genericMethod */

};
extern Il2CppType ModuleBuilderU5BU5D_t1953_0_0_0;
extern Il2CppType ModuleBuilderU5BU5D_t1953_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8731_ICollection_1_CopyTo_m45269_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ModuleBuilderU5BU5D_t1953_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45269_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45269_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8731_ICollection_1_CopyTo_m45269_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45269_GenericMethod/* genericMethod */

};
extern Il2CppType ModuleBuilder_t1968_0_0_0;
static ParameterInfo ICollection_1_t8731_ICollection_1_Remove_m45270_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ModuleBuilder_t1968_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45270_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ModuleBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45270_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8731_ICollection_1_Remove_m45270_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45270_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8731_MethodInfos[] =
{
	&ICollection_1_get_Count_m45264_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45265_MethodInfo,
	&ICollection_1_Add_m45266_MethodInfo,
	&ICollection_1_Clear_m45267_MethodInfo,
	&ICollection_1_Contains_m45268_MethodInfo,
	&ICollection_1_CopyTo_m45269_MethodInfo,
	&ICollection_1_Remove_m45270_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8733_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8731_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8733_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8731_0_0_0;
extern Il2CppType ICollection_1_t8731_1_0_0;
struct ICollection_1_t8731;
extern Il2CppGenericClass ICollection_1_t8731_GenericClass;
TypeInfo ICollection_1_t8731_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8731_MethodInfos/* methods */
	, ICollection_1_t8731_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8731_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8731_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8731_0_0_0/* byval_arg */
	, &ICollection_1_t8731_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8731_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ModuleBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ModuleBuilder>
extern Il2CppType IEnumerator_1_t6760_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45271_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ModuleBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45271_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8733_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6760_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45271_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8733_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45271_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8733_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8733_0_0_0;
extern Il2CppType IEnumerable_1_t8733_1_0_0;
struct IEnumerable_1_t8733;
extern Il2CppGenericClass IEnumerable_1_t8733_GenericClass;
TypeInfo IEnumerable_1_t8733_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8733_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8733_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8733_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8733_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8733_0_0_0/* byval_arg */
	, &IEnumerable_1_t8733_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8733_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8732_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>
extern MethodInfo IList_1_get_Item_m45272_MethodInfo;
extern MethodInfo IList_1_set_Item_m45273_MethodInfo;
static PropertyInfo IList_1_t8732____Item_PropertyInfo = 
{
	&IList_1_t8732_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45272_MethodInfo/* get */
	, &IList_1_set_Item_m45273_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8732_PropertyInfos[] =
{
	&IList_1_t8732____Item_PropertyInfo,
	NULL
};
extern Il2CppType ModuleBuilder_t1968_0_0_0;
static ParameterInfo IList_1_t8732_IList_1_IndexOf_m45274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ModuleBuilder_t1968_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45274_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45274_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8732_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8732_IList_1_IndexOf_m45274_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45274_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ModuleBuilder_t1968_0_0_0;
static ParameterInfo IList_1_t8732_IList_1_Insert_m45275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ModuleBuilder_t1968_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45275_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45275_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8732_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8732_IList_1_Insert_m45275_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45275_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8732_IList_1_RemoveAt_m45276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45276_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45276_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8732_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8732_IList_1_RemoveAt_m45276_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45276_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8732_IList_1_get_Item_m45272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ModuleBuilder_t1968_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45272_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45272_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8732_il2cpp_TypeInfo/* declaring_type */
	, &ModuleBuilder_t1968_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8732_IList_1_get_Item_m45272_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45272_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ModuleBuilder_t1968_0_0_0;
static ParameterInfo IList_1_t8732_IList_1_set_Item_m45273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ModuleBuilder_t1968_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45273_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ModuleBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45273_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8732_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8732_IList_1_set_Item_m45273_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45273_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8732_MethodInfos[] =
{
	&IList_1_IndexOf_m45274_MethodInfo,
	&IList_1_Insert_m45275_MethodInfo,
	&IList_1_RemoveAt_m45276_MethodInfo,
	&IList_1_get_Item_m45272_MethodInfo,
	&IList_1_set_Item_m45273_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8732_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8731_il2cpp_TypeInfo,
	&IEnumerable_1_t8733_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8732_0_0_0;
extern Il2CppType IList_1_t8732_1_0_0;
struct IList_1_t8732;
extern Il2CppGenericClass IList_1_t8732_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8732_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8732_MethodInfos/* methods */
	, IList_1_t8732_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8732_il2cpp_TypeInfo/* element_class */
	, IList_1_t8732_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8732_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8732_0_0_0/* byval_arg */
	, &IList_1_t8732_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8732_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t8734_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo ICollection_1_get_Count_m45277_MethodInfo;
static PropertyInfo ICollection_1_t8734____Count_PropertyInfo = 
{
	&ICollection_1_t8734_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45277_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45278_MethodInfo;
static PropertyInfo ICollection_1_t8734____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8734_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8734_PropertyInfos[] =
{
	&ICollection_1_t8734____Count_PropertyInfo,
	&ICollection_1_t8734____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45277_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45277_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45277_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45278_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45278_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45278_GenericMethod/* genericMethod */

};
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
static ParameterInfo ICollection_1_t8734_ICollection_1_Add_m45279_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ModuleBuilder_t2656_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45279_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45279_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8734_ICollection_1_Add_m45279_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45279_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45280_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45280_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45280_GenericMethod/* genericMethod */

};
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
static ParameterInfo ICollection_1_t8734_ICollection_1_Contains_m45281_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ModuleBuilder_t2656_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45281_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45281_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8734_ICollection_1_Contains_m45281_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45281_GenericMethod/* genericMethod */

};
extern Il2CppType _ModuleBuilderU5BU5D_t5053_0_0_0;
extern Il2CppType _ModuleBuilderU5BU5D_t5053_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8734_ICollection_1_CopyTo_m45282_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_ModuleBuilderU5BU5D_t5053_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45282_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45282_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8734_ICollection_1_CopyTo_m45282_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45282_GenericMethod/* genericMethod */

};
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
static ParameterInfo ICollection_1_t8734_ICollection_1_Remove_m45283_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ModuleBuilder_t2656_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45283_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ModuleBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45283_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8734_ICollection_1_Remove_m45283_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45283_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8734_MethodInfos[] =
{
	&ICollection_1_get_Count_m45277_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45278_MethodInfo,
	&ICollection_1_Add_m45279_MethodInfo,
	&ICollection_1_Clear_m45280_MethodInfo,
	&ICollection_1_Contains_m45281_MethodInfo,
	&ICollection_1_CopyTo_m45282_MethodInfo,
	&ICollection_1_Remove_m45283_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8736_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8734_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8736_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8734_0_0_0;
extern Il2CppType ICollection_1_t8734_1_0_0;
struct ICollection_1_t8734;
extern Il2CppGenericClass ICollection_1_t8734_GenericClass;
TypeInfo ICollection_1_t8734_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8734_MethodInfos/* methods */
	, ICollection_1_t8734_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8734_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8734_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8734_0_0_0/* byval_arg */
	, &ICollection_1_t8734_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8734_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ModuleBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ModuleBuilder>
extern Il2CppType IEnumerator_1_t6762_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45284_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ModuleBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45284_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8736_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6762_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45284_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8736_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45284_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8736_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8736_0_0_0;
extern Il2CppType IEnumerable_1_t8736_1_0_0;
struct IEnumerable_1_t8736;
extern Il2CppGenericClass IEnumerable_1_t8736_GenericClass;
TypeInfo IEnumerable_1_t8736_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8736_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8736_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8736_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8736_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8736_0_0_0/* byval_arg */
	, &IEnumerable_1_t8736_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8736_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6762_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45285_MethodInfo;
static PropertyInfo IEnumerator_1_t6762____Current_PropertyInfo = 
{
	&IEnumerator_1_t6762_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45285_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6762_PropertyInfos[] =
{
	&IEnumerator_1_t6762____Current_PropertyInfo,
	NULL
};
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45285_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45285_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6762_il2cpp_TypeInfo/* declaring_type */
	, &_ModuleBuilder_t2656_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45285_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6762_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45285_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6762_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6762_0_0_0;
extern Il2CppType IEnumerator_1_t6762_1_0_0;
struct IEnumerator_1_t6762;
extern Il2CppGenericClass IEnumerator_1_t6762_GenericClass;
TypeInfo IEnumerator_1_t6762_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6762_MethodInfos/* methods */
	, IEnumerator_1_t6762_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6762_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6762_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6762_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6762_0_0_0/* byval_arg */
	, &IEnumerator_1_t6762_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6762_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_617.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4781_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_617MethodDeclarations.h"

extern TypeInfo _ModuleBuilder_t2656_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26138_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_ModuleBuilder_t2656_m34870_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ModuleBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ModuleBuilder_t2656_m34870(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4781____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4781, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4781____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4781, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4781_FieldInfos[] =
{
	&InternalEnumerator_1_t4781____array_0_FieldInfo,
	&InternalEnumerator_1_t4781____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26135_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4781____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4781_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26135_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4781____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4781_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26138_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4781_PropertyInfos[] =
{
	&InternalEnumerator_1_t4781____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4781____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4781_InternalEnumerator_1__ctor_m26134_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26134_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26134_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4781_InternalEnumerator_1__ctor_m26134_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26134_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26135_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26135_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26135_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26136_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26136_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26136_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26137_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26137_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26137_GenericMethod/* genericMethod */

};
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26138_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ModuleBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26138_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* declaring_type */
	, &_ModuleBuilder_t2656_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26138_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4781_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26134_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26135_MethodInfo,
	&InternalEnumerator_1_Dispose_m26136_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26137_MethodInfo,
	&InternalEnumerator_1_get_Current_m26138_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26137_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26136_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4781_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26135_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26137_MethodInfo,
	&InternalEnumerator_1_Dispose_m26136_MethodInfo,
	&InternalEnumerator_1_get_Current_m26138_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4781_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6762_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4781_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6762_il2cpp_TypeInfo, 7},
};
extern TypeInfo _ModuleBuilder_t2656_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4781_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26138_MethodInfo/* Method Usage */,
	&_ModuleBuilder_t2656_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_ModuleBuilder_t2656_m34870_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4781_0_0_0;
extern Il2CppType InternalEnumerator_1_t4781_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4781_GenericClass;
TypeInfo InternalEnumerator_1_t4781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4781_MethodInfos/* methods */
	, InternalEnumerator_1_t4781_PropertyInfos/* properties */
	, InternalEnumerator_1_t4781_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4781_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4781_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4781_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4781_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4781_1_0_0/* this_arg */
	, InternalEnumerator_1_t4781_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4781_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4781_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4781)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8735_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>
extern MethodInfo IList_1_get_Item_m45286_MethodInfo;
extern MethodInfo IList_1_set_Item_m45287_MethodInfo;
static PropertyInfo IList_1_t8735____Item_PropertyInfo = 
{
	&IList_1_t8735_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45286_MethodInfo/* get */
	, &IList_1_set_Item_m45287_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8735_PropertyInfos[] =
{
	&IList_1_t8735____Item_PropertyInfo,
	NULL
};
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
static ParameterInfo IList_1_t8735_IList_1_IndexOf_m45288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ModuleBuilder_t2656_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45288_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45288_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8735_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8735_IList_1_IndexOf_m45288_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45288_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
static ParameterInfo IList_1_t8735_IList_1_Insert_m45289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_ModuleBuilder_t2656_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45289_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45289_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8735_IList_1_Insert_m45289_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45289_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8735_IList_1_RemoveAt_m45290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45290_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45290_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8735_IList_1_RemoveAt_m45290_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45290_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8735_IList_1_get_Item_m45286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45286_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45286_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8735_il2cpp_TypeInfo/* declaring_type */
	, &_ModuleBuilder_t2656_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8735_IList_1_get_Item_m45286_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45286_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _ModuleBuilder_t2656_0_0_0;
static ParameterInfo IList_1_t8735_IList_1_set_Item_m45287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_ModuleBuilder_t2656_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45287_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ModuleBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45287_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8735_IList_1_set_Item_m45287_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45287_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8735_MethodInfos[] =
{
	&IList_1_IndexOf_m45288_MethodInfo,
	&IList_1_Insert_m45289_MethodInfo,
	&IList_1_RemoveAt_m45290_MethodInfo,
	&IList_1_get_Item_m45286_MethodInfo,
	&IList_1_set_Item_m45287_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8735_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8734_il2cpp_TypeInfo,
	&IEnumerable_1_t8736_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8735_0_0_0;
extern Il2CppType IList_1_t8735_1_0_0;
struct IList_1_t8735;
extern Il2CppGenericClass IList_1_t8735_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8735_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8735_MethodInfos/* methods */
	, IList_1_t8735_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8735_il2cpp_TypeInfo/* element_class */
	, IList_1_t8735_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8735_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8735_0_0_0/* byval_arg */
	, &IList_1_t8735_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8735_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t8737_il2cpp_TypeInfo;

// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Module>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Module>
extern MethodInfo ICollection_1_get_Count_m45291_MethodInfo;
static PropertyInfo ICollection_1_t8737____Count_PropertyInfo = 
{
	&ICollection_1_t8737_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45292_MethodInfo;
static PropertyInfo ICollection_1_t8737____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8737_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45292_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8737_PropertyInfos[] =
{
	&ICollection_1_t8737____Count_PropertyInfo,
	&ICollection_1_t8737____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45291_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Module>::get_Count()
MethodInfo ICollection_1_get_Count_m45291_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45291_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45292_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45292_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45292_GenericMethod/* genericMethod */

};
extern Il2CppType Module_t1764_0_0_0;
extern Il2CppType Module_t1764_0_0_0;
static ParameterInfo ICollection_1_t8737_ICollection_1_Add_m45293_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Module_t1764_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45293_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::Add(T)
MethodInfo ICollection_1_Add_m45293_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8737_ICollection_1_Add_m45293_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45293_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45294_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::Clear()
MethodInfo ICollection_1_Clear_m45294_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45294_GenericMethod/* genericMethod */

};
extern Il2CppType Module_t1764_0_0_0;
static ParameterInfo ICollection_1_t8737_ICollection_1_Contains_m45295_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Module_t1764_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45295_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::Contains(T)
MethodInfo ICollection_1_Contains_m45295_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8737_ICollection_1_Contains_m45295_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45295_GenericMethod/* genericMethod */

};
extern Il2CppType ModuleU5BU5D_t1954_0_0_0;
extern Il2CppType ModuleU5BU5D_t1954_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8737_ICollection_1_CopyTo_m45296_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ModuleU5BU5D_t1954_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45296_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Module>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45296_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8737_ICollection_1_CopyTo_m45296_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45296_GenericMethod/* genericMethod */

};
extern Il2CppType Module_t1764_0_0_0;
static ParameterInfo ICollection_1_t8737_ICollection_1_Remove_m45297_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Module_t1764_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45297_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Module>::Remove(T)
MethodInfo ICollection_1_Remove_m45297_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8737_ICollection_1_Remove_m45297_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45297_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8737_MethodInfos[] =
{
	&ICollection_1_get_Count_m45291_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45292_MethodInfo,
	&ICollection_1_Add_m45293_MethodInfo,
	&ICollection_1_Clear_m45294_MethodInfo,
	&ICollection_1_Contains_m45295_MethodInfo,
	&ICollection_1_CopyTo_m45296_MethodInfo,
	&ICollection_1_Remove_m45297_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8739_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8737_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8739_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8737_0_0_0;
extern Il2CppType ICollection_1_t8737_1_0_0;
struct ICollection_1_t8737;
extern Il2CppGenericClass ICollection_1_t8737_GenericClass;
TypeInfo ICollection_1_t8737_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8737_MethodInfos/* methods */
	, ICollection_1_t8737_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8737_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8737_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8737_0_0_0/* byval_arg */
	, &ICollection_1_t8737_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8737_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Module>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Module>
extern Il2CppType IEnumerator_1_t6763_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45298_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Module>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45298_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8739_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6763_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45298_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8739_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45298_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8739_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8739_0_0_0;
extern Il2CppType IEnumerable_1_t8739_1_0_0;
struct IEnumerable_1_t8739;
extern Il2CppGenericClass IEnumerable_1_t8739_GenericClass;
TypeInfo IEnumerable_1_t8739_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8739_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8739_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8739_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8739_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8739_0_0_0/* byval_arg */
	, &IEnumerable_1_t8739_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8739_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6763_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.Module>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Module>
extern MethodInfo IEnumerator_1_get_Current_m45299_MethodInfo;
static PropertyInfo IEnumerator_1_t6763____Current_PropertyInfo = 
{
	&IEnumerator_1_t6763_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45299_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6763_PropertyInfos[] =
{
	&IEnumerator_1_t6763____Current_PropertyInfo,
	NULL
};
extern Il2CppType Module_t1764_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45299_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.Module>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45299_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6763_il2cpp_TypeInfo/* declaring_type */
	, &Module_t1764_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45299_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6763_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45299_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6763_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6763_0_0_0;
extern Il2CppType IEnumerator_1_t6763_1_0_0;
struct IEnumerator_1_t6763;
extern Il2CppGenericClass IEnumerator_1_t6763_GenericClass;
TypeInfo IEnumerator_1_t6763_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6763_MethodInfos/* methods */
	, IEnumerator_1_t6763_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6763_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6763_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6763_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6763_0_0_0/* byval_arg */
	, &IEnumerator_1_t6763_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6763_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_618.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4782_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_618MethodDeclarations.h"

extern TypeInfo Module_t1764_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26143_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisModule_t1764_m34881_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Module>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Module>(System.Int32)
#define Array_InternalArray__get_Item_TisModule_t1764_m34881(__this, p0, method) (Module_t1764 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Module>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Module>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Module>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Module>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Module>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Module>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4782____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4782, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4782____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4782, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4782_FieldInfos[] =
{
	&InternalEnumerator_1_t4782____array_0_FieldInfo,
	&InternalEnumerator_1_t4782____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26140_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4782____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4782_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26140_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4782____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4782_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26143_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4782_PropertyInfos[] =
{
	&InternalEnumerator_1_t4782____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4782____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4782_InternalEnumerator_1__ctor_m26139_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26139_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Module>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26139_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4782_InternalEnumerator_1__ctor_m26139_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26139_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26140_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Module>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26140_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26140_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26141_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Module>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26141_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26141_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26142_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Module>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26142_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26142_GenericMethod/* genericMethod */

};
extern Il2CppType Module_t1764_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26143_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.Module>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26143_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* declaring_type */
	, &Module_t1764_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26143_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4782_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26139_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26140_MethodInfo,
	&InternalEnumerator_1_Dispose_m26141_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26142_MethodInfo,
	&InternalEnumerator_1_get_Current_m26143_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26142_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26141_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4782_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26140_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26142_MethodInfo,
	&InternalEnumerator_1_Dispose_m26141_MethodInfo,
	&InternalEnumerator_1_get_Current_m26143_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4782_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6763_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4782_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6763_il2cpp_TypeInfo, 7},
};
extern TypeInfo Module_t1764_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4782_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26143_MethodInfo/* Method Usage */,
	&Module_t1764_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisModule_t1764_m34881_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4782_0_0_0;
extern Il2CppType InternalEnumerator_1_t4782_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4782_GenericClass;
TypeInfo InternalEnumerator_1_t4782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4782_MethodInfos/* methods */
	, InternalEnumerator_1_t4782_PropertyInfos/* properties */
	, InternalEnumerator_1_t4782_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4782_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4782_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4782_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4782_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4782_1_0_0/* this_arg */
	, InternalEnumerator_1_t4782_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4782_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4782_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4782)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8738_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Module>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Module>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Module>
extern MethodInfo IList_1_get_Item_m45300_MethodInfo;
extern MethodInfo IList_1_set_Item_m45301_MethodInfo;
static PropertyInfo IList_1_t8738____Item_PropertyInfo = 
{
	&IList_1_t8738_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45300_MethodInfo/* get */
	, &IList_1_set_Item_m45301_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8738_PropertyInfos[] =
{
	&IList_1_t8738____Item_PropertyInfo,
	NULL
};
extern Il2CppType Module_t1764_0_0_0;
static ParameterInfo IList_1_t8738_IList_1_IndexOf_m45302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Module_t1764_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45302_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Module>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45302_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8738_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8738_IList_1_IndexOf_m45302_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45302_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Module_t1764_0_0_0;
static ParameterInfo IList_1_t8738_IList_1_Insert_m45303_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Module_t1764_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45303_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45303_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8738_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8738_IList_1_Insert_m45303_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45303_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8738_IList_1_RemoveAt_m45304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45304_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45304_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8738_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8738_IList_1_RemoveAt_m45304_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45304_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8738_IList_1_get_Item_m45300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Module_t1764_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45300_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.Module>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45300_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8738_il2cpp_TypeInfo/* declaring_type */
	, &Module_t1764_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8738_IList_1_get_Item_m45300_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45300_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Module_t1764_0_0_0;
static ParameterInfo IList_1_t8738_IList_1_set_Item_m45301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Module_t1764_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45301_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Module>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45301_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8738_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8738_IList_1_set_Item_m45301_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45301_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8738_MethodInfos[] =
{
	&IList_1_IndexOf_m45302_MethodInfo,
	&IList_1_Insert_m45303_MethodInfo,
	&IList_1_RemoveAt_m45304_MethodInfo,
	&IList_1_get_Item_m45300_MethodInfo,
	&IList_1_set_Item_m45301_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8738_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8737_il2cpp_TypeInfo,
	&IEnumerable_1_t8739_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8738_0_0_0;
extern Il2CppType IList_1_t8738_1_0_0;
struct IList_1_t8738;
extern Il2CppGenericClass IList_1_t8738_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8738_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8738_MethodInfos/* methods */
	, IList_1_t8738_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8738_il2cpp_TypeInfo/* element_class */
	, IList_1_t8738_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8738_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8738_0_0_0/* byval_arg */
	, &IList_1_t8738_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8738_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t8740_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>
extern MethodInfo ICollection_1_get_Count_m45305_MethodInfo;
static PropertyInfo ICollection_1_t8740____Count_PropertyInfo = 
{
	&ICollection_1_t8740_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45305_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45306_MethodInfo;
static PropertyInfo ICollection_1_t8740____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8740_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45306_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8740_PropertyInfos[] =
{
	&ICollection_1_t8740____Count_PropertyInfo,
	&ICollection_1_t8740____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45305_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::get_Count()
MethodInfo ICollection_1_get_Count_m45305_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45305_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45306_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45306_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45306_GenericMethod/* genericMethod */

};
extern Il2CppType _Module_t2657_0_0_0;
extern Il2CppType _Module_t2657_0_0_0;
static ParameterInfo ICollection_1_t8740_ICollection_1_Add_m45307_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_Module_t2657_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45307_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Add(T)
MethodInfo ICollection_1_Add_m45307_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8740_ICollection_1_Add_m45307_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45307_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45308_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Clear()
MethodInfo ICollection_1_Clear_m45308_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45308_GenericMethod/* genericMethod */

};
extern Il2CppType _Module_t2657_0_0_0;
static ParameterInfo ICollection_1_t8740_ICollection_1_Contains_m45309_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_Module_t2657_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45309_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Contains(T)
MethodInfo ICollection_1_Contains_m45309_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8740_ICollection_1_Contains_m45309_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45309_GenericMethod/* genericMethod */

};
extern Il2CppType _ModuleU5BU5D_t5054_0_0_0;
extern Il2CppType _ModuleU5BU5D_t5054_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8740_ICollection_1_CopyTo_m45310_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_ModuleU5BU5D_t5054_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45310_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45310_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8740_ICollection_1_CopyTo_m45310_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45310_GenericMethod/* genericMethod */

};
extern Il2CppType _Module_t2657_0_0_0;
static ParameterInfo ICollection_1_t8740_ICollection_1_Remove_m45311_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_Module_t2657_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45311_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._Module>::Remove(T)
MethodInfo ICollection_1_Remove_m45311_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8740_ICollection_1_Remove_m45311_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45311_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8740_MethodInfos[] =
{
	&ICollection_1_get_Count_m45305_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45306_MethodInfo,
	&ICollection_1_Add_m45307_MethodInfo,
	&ICollection_1_Clear_m45308_MethodInfo,
	&ICollection_1_Contains_m45309_MethodInfo,
	&ICollection_1_CopyTo_m45310_MethodInfo,
	&ICollection_1_Remove_m45311_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8742_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8740_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8742_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8740_0_0_0;
extern Il2CppType ICollection_1_t8740_1_0_0;
struct ICollection_1_t8740;
extern Il2CppGenericClass ICollection_1_t8740_GenericClass;
TypeInfo ICollection_1_t8740_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8740_MethodInfos/* methods */
	, ICollection_1_t8740_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8740_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8740_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8740_0_0_0/* byval_arg */
	, &ICollection_1_t8740_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8740_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Module>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Module>
extern Il2CppType IEnumerator_1_t6765_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45312_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._Module>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45312_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8742_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6765_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45312_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8742_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45312_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8742_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8742_0_0_0;
extern Il2CppType IEnumerable_1_t8742_1_0_0;
struct IEnumerable_1_t8742;
extern Il2CppGenericClass IEnumerable_1_t8742_GenericClass;
TypeInfo IEnumerable_1_t8742_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8742_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8742_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8742_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8742_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8742_0_0_0/* byval_arg */
	, &IEnumerable_1_t8742_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8742_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6765_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Module>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Module>
extern MethodInfo IEnumerator_1_get_Current_m45313_MethodInfo;
static PropertyInfo IEnumerator_1_t6765____Current_PropertyInfo = 
{
	&IEnumerator_1_t6765_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45313_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6765_PropertyInfos[] =
{
	&IEnumerator_1_t6765____Current_PropertyInfo,
	NULL
};
extern Il2CppType _Module_t2657_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45313_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._Module>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45313_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6765_il2cpp_TypeInfo/* declaring_type */
	, &_Module_t2657_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45313_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6765_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45313_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6765_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6765_0_0_0;
extern Il2CppType IEnumerator_1_t6765_1_0_0;
struct IEnumerator_1_t6765;
extern Il2CppGenericClass IEnumerator_1_t6765_GenericClass;
TypeInfo IEnumerator_1_t6765_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6765_MethodInfos/* methods */
	, IEnumerator_1_t6765_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6765_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6765_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6765_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6765_0_0_0/* byval_arg */
	, &IEnumerator_1_t6765_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6765_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_619.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4783_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_619MethodDeclarations.h"

extern TypeInfo _Module_t2657_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26148_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_Module_t2657_m34892_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Module>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._Module>(System.Int32)
#define Array_InternalArray__get_Item_Tis_Module_t2657_m34892(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4783____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4783, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4783____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4783, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4783_FieldInfos[] =
{
	&InternalEnumerator_1_t4783____array_0_FieldInfo,
	&InternalEnumerator_1_t4783____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26145_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4783____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4783_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26145_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4783____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4783_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26148_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4783_PropertyInfos[] =
{
	&InternalEnumerator_1_t4783____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4783____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4783_InternalEnumerator_1__ctor_m26144_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26144_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26144_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4783_InternalEnumerator_1__ctor_m26144_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26144_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26145_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26145_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26145_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26146_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26146_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26146_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26147_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26147_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26147_GenericMethod/* genericMethod */

};
extern Il2CppType _Module_t2657_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26148_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._Module>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26148_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* declaring_type */
	, &_Module_t2657_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26148_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4783_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26144_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26145_MethodInfo,
	&InternalEnumerator_1_Dispose_m26146_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26147_MethodInfo,
	&InternalEnumerator_1_get_Current_m26148_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26147_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26146_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4783_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26145_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26147_MethodInfo,
	&InternalEnumerator_1_Dispose_m26146_MethodInfo,
	&InternalEnumerator_1_get_Current_m26148_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4783_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6765_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4783_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6765_il2cpp_TypeInfo, 7},
};
extern TypeInfo _Module_t2657_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4783_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26148_MethodInfo/* Method Usage */,
	&_Module_t2657_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_Module_t2657_m34892_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4783_0_0_0;
extern Il2CppType InternalEnumerator_1_t4783_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4783_GenericClass;
TypeInfo InternalEnumerator_1_t4783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4783_MethodInfos/* methods */
	, InternalEnumerator_1_t4783_PropertyInfos/* properties */
	, InternalEnumerator_1_t4783_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4783_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4783_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4783_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4783_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4783_1_0_0/* this_arg */
	, InternalEnumerator_1_t4783_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4783_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4783_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4783)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8741_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>
extern MethodInfo IList_1_get_Item_m45314_MethodInfo;
extern MethodInfo IList_1_set_Item_m45315_MethodInfo;
static PropertyInfo IList_1_t8741____Item_PropertyInfo = 
{
	&IList_1_t8741_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45314_MethodInfo/* get */
	, &IList_1_set_Item_m45315_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8741_PropertyInfos[] =
{
	&IList_1_t8741____Item_PropertyInfo,
	NULL
};
extern Il2CppType _Module_t2657_0_0_0;
static ParameterInfo IList_1_t8741_IList_1_IndexOf_m45316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_Module_t2657_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45316_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45316_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8741_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8741_IList_1_IndexOf_m45316_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45316_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _Module_t2657_0_0_0;
static ParameterInfo IList_1_t8741_IList_1_Insert_m45317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_Module_t2657_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45317_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45317_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8741_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8741_IList_1_Insert_m45317_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45317_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8741_IList_1_RemoveAt_m45318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45318_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45318_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8741_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8741_IList_1_RemoveAt_m45318_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45318_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8741_IList_1_get_Item_m45314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _Module_t2657_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45314_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45314_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8741_il2cpp_TypeInfo/* declaring_type */
	, &_Module_t2657_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8741_IList_1_get_Item_m45314_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45314_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _Module_t2657_0_0_0;
static ParameterInfo IList_1_t8741_IList_1_set_Item_m45315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_Module_t2657_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45315_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._Module>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45315_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8741_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8741_IList_1_set_Item_m45315_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45315_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8741_MethodInfos[] =
{
	&IList_1_IndexOf_m45316_MethodInfo,
	&IList_1_Insert_m45317_MethodInfo,
	&IList_1_RemoveAt_m45318_MethodInfo,
	&IList_1_get_Item_m45314_MethodInfo,
	&IList_1_set_Item_m45315_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8741_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8740_il2cpp_TypeInfo,
	&IEnumerable_1_t8742_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8741_0_0_0;
extern Il2CppType IList_1_t8741_1_0_0;
struct IList_1_t8741;
extern Il2CppGenericClass IList_1_t8741_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8741_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8741_MethodInfos/* methods */
	, IList_1_t8741_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8741_il2cpp_TypeInfo/* element_class */
	, IList_1_t8741_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8741_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8741_0_0_0/* byval_arg */
	, &IList_1_t8741_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8741_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6767_il2cpp_TypeInfo;

// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ParameterBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45319_MethodInfo;
static PropertyInfo IEnumerator_1_t6767____Current_PropertyInfo = 
{
	&IEnumerator_1_t6767_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45319_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6767_PropertyInfos[] =
{
	&IEnumerator_1_t6767____Current_PropertyInfo,
	NULL
};
extern Il2CppType ParameterBuilder_t1969_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45319_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.Emit.ParameterBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45319_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6767_il2cpp_TypeInfo/* declaring_type */
	, &ParameterBuilder_t1969_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45319_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6767_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45319_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6767_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6767_0_0_0;
extern Il2CppType IEnumerator_1_t6767_1_0_0;
struct IEnumerator_1_t6767;
extern Il2CppGenericClass IEnumerator_1_t6767_GenericClass;
TypeInfo IEnumerator_1_t6767_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6767_MethodInfos/* methods */
	, IEnumerator_1_t6767_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6767_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6767_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6767_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6767_0_0_0/* byval_arg */
	, &IEnumerator_1_t6767_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6767_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_620.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4784_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_620MethodDeclarations.h"

extern TypeInfo ParameterBuilder_t1969_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26153_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParameterBuilder_t1969_m34903_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.Emit.ParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_TisParameterBuilder_t1969_m34903(__this, p0, method) (ParameterBuilder_t1969 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4784____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4784, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4784____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4784, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4784_FieldInfos[] =
{
	&InternalEnumerator_1_t4784____array_0_FieldInfo,
	&InternalEnumerator_1_t4784____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26150_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4784____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4784_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26150_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4784____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4784_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26153_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4784_PropertyInfos[] =
{
	&InternalEnumerator_1_t4784____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4784____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4784_InternalEnumerator_1__ctor_m26149_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26149_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26149_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4784_InternalEnumerator_1__ctor_m26149_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26149_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26150_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26150_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26150_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26151_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26151_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26151_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26152_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26152_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26152_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterBuilder_t1969_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26153_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ParameterBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26153_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* declaring_type */
	, &ParameterBuilder_t1969_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26153_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4784_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26149_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26150_MethodInfo,
	&InternalEnumerator_1_Dispose_m26151_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26152_MethodInfo,
	&InternalEnumerator_1_get_Current_m26153_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26152_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26151_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4784_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26150_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26152_MethodInfo,
	&InternalEnumerator_1_Dispose_m26151_MethodInfo,
	&InternalEnumerator_1_get_Current_m26153_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4784_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6767_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4784_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6767_il2cpp_TypeInfo, 7},
};
extern TypeInfo ParameterBuilder_t1969_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4784_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26153_MethodInfo/* Method Usage */,
	&ParameterBuilder_t1969_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisParameterBuilder_t1969_m34903_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4784_0_0_0;
extern Il2CppType InternalEnumerator_1_t4784_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4784_GenericClass;
TypeInfo InternalEnumerator_1_t4784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4784_MethodInfos/* methods */
	, InternalEnumerator_1_t4784_PropertyInfos/* properties */
	, InternalEnumerator_1_t4784_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4784_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4784_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4784_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4784_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4784_1_0_0/* this_arg */
	, InternalEnumerator_1_t4784_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4784_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4784_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4784)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8743_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo ICollection_1_get_Count_m45320_MethodInfo;
static PropertyInfo ICollection_1_t8743____Count_PropertyInfo = 
{
	&ICollection_1_t8743_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45320_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45321_MethodInfo;
static PropertyInfo ICollection_1_t8743____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8743_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45321_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8743_PropertyInfos[] =
{
	&ICollection_1_t8743____Count_PropertyInfo,
	&ICollection_1_t8743____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45320_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45320_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45320_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45321_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45321_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45321_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterBuilder_t1969_0_0_0;
extern Il2CppType ParameterBuilder_t1969_0_0_0;
static ParameterInfo ICollection_1_t8743_ICollection_1_Add_m45322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterBuilder_t1969_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45322_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45322_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8743_ICollection_1_Add_m45322_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45322_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45323_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45323_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45323_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterBuilder_t1969_0_0_0;
static ParameterInfo ICollection_1_t8743_ICollection_1_Contains_m45324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterBuilder_t1969_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45324_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45324_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8743_ICollection_1_Contains_m45324_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45324_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterBuilderU5BU5D_t1958_0_0_0;
extern Il2CppType ParameterBuilderU5BU5D_t1958_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8743_ICollection_1_CopyTo_m45325_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ParameterBuilderU5BU5D_t1958_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45325_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45325_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8743_ICollection_1_CopyTo_m45325_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45325_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterBuilder_t1969_0_0_0;
static ParameterInfo ICollection_1_t8743_ICollection_1_Remove_m45326_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterBuilder_t1969_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45326_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.Emit.ParameterBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45326_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8743_ICollection_1_Remove_m45326_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45326_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8743_MethodInfos[] =
{
	&ICollection_1_get_Count_m45320_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45321_MethodInfo,
	&ICollection_1_Add_m45322_MethodInfo,
	&ICollection_1_Clear_m45323_MethodInfo,
	&ICollection_1_Contains_m45324_MethodInfo,
	&ICollection_1_CopyTo_m45325_MethodInfo,
	&ICollection_1_Remove_m45326_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8745_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8743_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8745_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8743_0_0_0;
extern Il2CppType ICollection_1_t8743_1_0_0;
struct ICollection_1_t8743;
extern Il2CppGenericClass ICollection_1_t8743_GenericClass;
TypeInfo ICollection_1_t8743_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8743_MethodInfos/* methods */
	, ICollection_1_t8743_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8743_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8743_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8743_0_0_0/* byval_arg */
	, &ICollection_1_t8743_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8743_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ParameterBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ParameterBuilder>
extern Il2CppType IEnumerator_1_t6767_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45327_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.Emit.ParameterBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45327_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8745_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6767_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45327_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8745_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45327_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8745_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8745_0_0_0;
extern Il2CppType IEnumerable_1_t8745_1_0_0;
struct IEnumerable_1_t8745;
extern Il2CppGenericClass IEnumerable_1_t8745_GenericClass;
TypeInfo IEnumerable_1_t8745_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8745_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8745_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8745_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8745_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8745_0_0_0/* byval_arg */
	, &IEnumerable_1_t8745_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8745_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8744_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>
extern MethodInfo IList_1_get_Item_m45328_MethodInfo;
extern MethodInfo IList_1_set_Item_m45329_MethodInfo;
static PropertyInfo IList_1_t8744____Item_PropertyInfo = 
{
	&IList_1_t8744_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45328_MethodInfo/* get */
	, &IList_1_set_Item_m45329_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8744_PropertyInfos[] =
{
	&IList_1_t8744____Item_PropertyInfo,
	NULL
};
extern Il2CppType ParameterBuilder_t1969_0_0_0;
static ParameterInfo IList_1_t8744_IList_1_IndexOf_m45330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterBuilder_t1969_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45330_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45330_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8744_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8744_IList_1_IndexOf_m45330_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45330_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ParameterBuilder_t1969_0_0_0;
static ParameterInfo IList_1_t8744_IList_1_Insert_m45331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ParameterBuilder_t1969_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45331_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45331_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8744_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8744_IList_1_Insert_m45331_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45331_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8744_IList_1_RemoveAt_m45332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45332_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45332_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8744_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8744_IList_1_RemoveAt_m45332_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45332_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8744_IList_1_get_Item_m45328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ParameterBuilder_t1969_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45328_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45328_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8744_il2cpp_TypeInfo/* declaring_type */
	, &ParameterBuilder_t1969_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8744_IList_1_get_Item_m45328_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45328_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ParameterBuilder_t1969_0_0_0;
static ParameterInfo IList_1_t8744_IList_1_set_Item_m45329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ParameterBuilder_t1969_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45329_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.Emit.ParameterBuilder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45329_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8744_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8744_IList_1_set_Item_m45329_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45329_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8744_MethodInfos[] =
{
	&IList_1_IndexOf_m45330_MethodInfo,
	&IList_1_Insert_m45331_MethodInfo,
	&IList_1_RemoveAt_m45332_MethodInfo,
	&IList_1_get_Item_m45328_MethodInfo,
	&IList_1_set_Item_m45329_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8744_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8743_il2cpp_TypeInfo,
	&IEnumerable_1_t8745_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8744_0_0_0;
extern Il2CppType IList_1_t8744_1_0_0;
struct IList_1_t8744;
extern Il2CppGenericClass IList_1_t8744_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8744_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8744_MethodInfos/* methods */
	, IList_1_t8744_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8744_il2cpp_TypeInfo/* element_class */
	, IList_1_t8744_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8744_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8744_0_0_0/* byval_arg */
	, &IList_1_t8744_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8744_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t8746_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo ICollection_1_get_Count_m45333_MethodInfo;
static PropertyInfo ICollection_1_t8746____Count_PropertyInfo = 
{
	&ICollection_1_t8746_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45334_MethodInfo;
static PropertyInfo ICollection_1_t8746____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8746_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45334_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8746_PropertyInfos[] =
{
	&ICollection_1_t8746____Count_PropertyInfo,
	&ICollection_1_t8746____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45333_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::get_Count()
MethodInfo ICollection_1_get_Count_m45333_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45333_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45334_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45334_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45334_GenericMethod/* genericMethod */

};
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
static ParameterInfo ICollection_1_t8746_ICollection_1_Add_m45335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ParameterBuilder_t2658_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45335_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Add(T)
MethodInfo ICollection_1_Add_m45335_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8746_ICollection_1_Add_m45335_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45335_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45336_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Clear()
MethodInfo ICollection_1_Clear_m45336_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45336_GenericMethod/* genericMethod */

};
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
static ParameterInfo ICollection_1_t8746_ICollection_1_Contains_m45337_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ParameterBuilder_t2658_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45337_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Contains(T)
MethodInfo ICollection_1_Contains_m45337_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8746_ICollection_1_Contains_m45337_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45337_GenericMethod/* genericMethod */

};
extern Il2CppType _ParameterBuilderU5BU5D_t5055_0_0_0;
extern Il2CppType _ParameterBuilderU5BU5D_t5055_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8746_ICollection_1_CopyTo_m45338_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_ParameterBuilderU5BU5D_t5055_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45338_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45338_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8746_ICollection_1_CopyTo_m45338_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45338_GenericMethod/* genericMethod */

};
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
static ParameterInfo ICollection_1_t8746_ICollection_1_Remove_m45339_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ParameterBuilder_t2658_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45339_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ParameterBuilder>::Remove(T)
MethodInfo ICollection_1_Remove_m45339_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8746_ICollection_1_Remove_m45339_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45339_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8746_MethodInfos[] =
{
	&ICollection_1_get_Count_m45333_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45334_MethodInfo,
	&ICollection_1_Add_m45335_MethodInfo,
	&ICollection_1_Clear_m45336_MethodInfo,
	&ICollection_1_Contains_m45337_MethodInfo,
	&ICollection_1_CopyTo_m45338_MethodInfo,
	&ICollection_1_Remove_m45339_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8748_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8746_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8748_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8746_0_0_0;
extern Il2CppType ICollection_1_t8746_1_0_0;
struct ICollection_1_t8746;
extern Il2CppGenericClass ICollection_1_t8746_GenericClass;
TypeInfo ICollection_1_t8746_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8746_MethodInfos/* methods */
	, ICollection_1_t8746_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8746_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8746_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8746_0_0_0/* byval_arg */
	, &ICollection_1_t8746_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8746_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ParameterBuilder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ParameterBuilder>
extern Il2CppType IEnumerator_1_t6769_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45340_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ParameterBuilder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45340_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8748_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6769_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45340_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8748_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45340_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8748_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8748_0_0_0;
extern Il2CppType IEnumerable_1_t8748_1_0_0;
struct IEnumerable_1_t8748;
extern Il2CppGenericClass IEnumerable_1_t8748_GenericClass;
TypeInfo IEnumerable_1_t8748_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8748_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8748_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8748_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8748_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8748_0_0_0/* byval_arg */
	, &IEnumerable_1_t8748_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8748_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6769_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
extern MethodInfo IEnumerator_1_get_Current_m45341_MethodInfo;
static PropertyInfo IEnumerator_1_t6769____Current_PropertyInfo = 
{
	&IEnumerator_1_t6769_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45341_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6769_PropertyInfos[] =
{
	&IEnumerator_1_t6769____Current_PropertyInfo,
	NULL
};
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45341_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45341_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6769_il2cpp_TypeInfo/* declaring_type */
	, &_ParameterBuilder_t2658_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45341_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6769_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45341_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6769_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6769_0_0_0;
extern Il2CppType IEnumerator_1_t6769_1_0_0;
struct IEnumerator_1_t6769;
extern Il2CppGenericClass IEnumerator_1_t6769_GenericClass;
TypeInfo IEnumerator_1_t6769_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6769_MethodInfos/* methods */
	, IEnumerator_1_t6769_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6769_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6769_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6769_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6769_0_0_0/* byval_arg */
	, &IEnumerator_1_t6769_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6769_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_621.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4785_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_621MethodDeclarations.h"

extern TypeInfo _ParameterBuilder_t2658_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26158_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_ParameterBuilder_t2658_m34914_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ParameterBuilder>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ParameterBuilder_t2658_m34914(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4785____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4785, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4785____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4785, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4785_FieldInfos[] =
{
	&InternalEnumerator_1_t4785____array_0_FieldInfo,
	&InternalEnumerator_1_t4785____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26155_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4785____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4785_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26155_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4785____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4785_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26158_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4785_PropertyInfos[] =
{
	&InternalEnumerator_1_t4785____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4785____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4785_InternalEnumerator_1__ctor_m26154_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26154_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26154_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4785_InternalEnumerator_1__ctor_m26154_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26154_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26155_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26155_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26155_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26156_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26156_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26156_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26157_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26157_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26157_GenericMethod/* genericMethod */

};
extern Il2CppType _ParameterBuilder_t2658_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26158_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ParameterBuilder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26158_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* declaring_type */
	, &_ParameterBuilder_t2658_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26158_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4785_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26154_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26155_MethodInfo,
	&InternalEnumerator_1_Dispose_m26156_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26157_MethodInfo,
	&InternalEnumerator_1_get_Current_m26158_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26157_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26156_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4785_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26155_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26157_MethodInfo,
	&InternalEnumerator_1_Dispose_m26156_MethodInfo,
	&InternalEnumerator_1_get_Current_m26158_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4785_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6769_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4785_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6769_il2cpp_TypeInfo, 7},
};
extern TypeInfo _ParameterBuilder_t2658_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4785_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26158_MethodInfo/* Method Usage */,
	&_ParameterBuilder_t2658_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_ParameterBuilder_t2658_m34914_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4785_0_0_0;
extern Il2CppType InternalEnumerator_1_t4785_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4785_GenericClass;
TypeInfo InternalEnumerator_1_t4785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4785_MethodInfos/* methods */
	, InternalEnumerator_1_t4785_PropertyInfos/* properties */
	, InternalEnumerator_1_t4785_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4785_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4785_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4785_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4785_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4785_1_0_0/* this_arg */
	, InternalEnumerator_1_t4785_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4785_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4785_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4785)+ sizeof (Il2CppObject)/* instance_size */
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
