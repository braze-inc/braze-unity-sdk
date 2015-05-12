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
extern TypeInfo IList_1_t8807_il2cpp_TypeInfo;

// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>
extern MethodInfo IList_1_get_Item_m45622_MethodInfo;
extern MethodInfo IList_1_set_Item_m45623_MethodInfo;
static PropertyInfo IList_1_t8807____Item_PropertyInfo = 
{
	&IList_1_t8807_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45622_MethodInfo/* get */
	, &IList_1_set_Item_m45623_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8807_PropertyInfos[] =
{
	&IList_1_t8807____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
static ParameterInfo IList_1_t8807_IList_1_IndexOf_m45624_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1978_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45624_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45624_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8807_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8807_IList_1_IndexOf_m45624_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45624_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
static ParameterInfo IList_1_t8807_IList_1_Insert_m45625_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1978_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45625_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45625_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8807_IList_1_Insert_m45625_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45625_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8807_IList_1_RemoveAt_m45626_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45626_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45626_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8807_IList_1_RemoveAt_m45626_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45626_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8807_IList_1_get_Item_m45622_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
extern void* RuntimeInvoker_AssemblyNameFlags_t1978_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45622_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45622_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8807_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyNameFlags_t1978_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyNameFlags_t1978_Int32_t73/* invoker_method */
	, IList_1_t8807_IList_1_get_Item_m45622_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45622_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyNameFlags_t1978_0_0_0;
static ParameterInfo IList_1_t8807_IList_1_set_Item_m45623_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1978_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45623_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45623_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8807_IList_1_set_Item_m45623_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45623_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8807_MethodInfos[] =
{
	&IList_1_IndexOf_m45624_MethodInfo,
	&IList_1_Insert_m45625_MethodInfo,
	&IList_1_RemoveAt_m45626_MethodInfo,
	&IList_1_get_Item_m45622_MethodInfo,
	&IList_1_set_Item_m45623_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t8806_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8808_il2cpp_TypeInfo;
static TypeInfo* IList_1_t8807_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8806_il2cpp_TypeInfo,
	&IEnumerable_1_t8808_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8807_0_0_0;
extern Il2CppType IList_1_t8807_1_0_0;
struct IList_1_t8807;
extern Il2CppGenericClass IList_1_t8807_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8807_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8807_MethodInfos/* methods */
	, IList_1_t8807_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8807_il2cpp_TypeInfo/* element_class */
	, IList_1_t8807_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8807_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8807_0_0_0/* byval_arg */
	, &IList_1_t8807_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8807_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6811_il2cpp_TypeInfo;

// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyProductAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyProductAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45627_MethodInfo;
static PropertyInfo IEnumerator_1_t6811____Current_PropertyInfo = 
{
	&IEnumerator_1_t6811_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45627_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6811_PropertyInfos[] =
{
	&IEnumerator_1_t6811____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45627_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyProductAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45627_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6811_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyProductAttribute_t799_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45627_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6811_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45627_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t19_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t6811_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6811_0_0_0;
extern Il2CppType IEnumerator_1_t6811_1_0_0;
struct IEnumerator_1_t6811;
extern Il2CppGenericClass IEnumerator_1_t6811_GenericClass;
TypeInfo IEnumerator_1_t6811_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6811_MethodInfos/* methods */
	, IEnumerator_1_t6811_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6811_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6811_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6811_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6811_0_0_0/* byval_arg */
	, &IEnumerator_1_t6811_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6811_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_642.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4806_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_642MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo AssemblyProductAttribute_t799_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1545_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m26263_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6656_MethodInfo;
extern MethodInfo Array_get_Length_m1925_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyProductAttribute_t799_m35145_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26983_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26983(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyProductAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyProductAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyProductAttribute_t799_m35145(__this, p0, method) (AssemblyProductAttribute_t799 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4806____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4806, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4806____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4806, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4806_FieldInfos[] =
{
	&InternalEnumerator_1_t4806____array_0_FieldInfo,
	&InternalEnumerator_1_t4806____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26260_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4806____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4806_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26260_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4806____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4806_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26263_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4806_PropertyInfos[] =
{
	&InternalEnumerator_1_t4806____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4806____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4806_InternalEnumerator_1__ctor_m26259_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26259_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26259_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4806_InternalEnumerator_1__ctor_m26259_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26259_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26260_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26260_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26260_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26261_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26261_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26261_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26262_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26262_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26262_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26263_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26263_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyProductAttribute_t799_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26263_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4806_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26259_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26260_MethodInfo,
	&InternalEnumerator_1_Dispose_m26261_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26262_MethodInfo,
	&InternalEnumerator_1_get_Current_m26263_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m26262_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26261_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4806_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26260_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26262_MethodInfo,
	&InternalEnumerator_1_Dispose_m26261_MethodInfo,
	&InternalEnumerator_1_get_Current_m26263_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4806_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6811_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4806_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6811_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyProductAttribute_t799_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4806_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26263_MethodInfo/* Method Usage */,
	&AssemblyProductAttribute_t799_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyProductAttribute_t799_m35145_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4806_0_0_0;
extern Il2CppType InternalEnumerator_1_t4806_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4806_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4806_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4806_MethodInfos/* methods */
	, InternalEnumerator_1_t4806_PropertyInfos/* properties */
	, InternalEnumerator_1_t4806_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4806_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4806_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4806_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4806_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4806_1_0_0/* this_arg */
	, InternalEnumerator_1_t4806_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4806_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4806_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4806)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8809_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>
extern MethodInfo ICollection_1_get_Count_m45628_MethodInfo;
static PropertyInfo ICollection_1_t8809____Count_PropertyInfo = 
{
	&ICollection_1_t8809_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45628_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45629_MethodInfo;
static PropertyInfo ICollection_1_t8809____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8809_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45629_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8809_PropertyInfos[] =
{
	&ICollection_1_t8809____Count_PropertyInfo,
	&ICollection_1_t8809____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45628_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45628_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45628_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45629_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45629_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45629_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
static ParameterInfo ICollection_1_t8809_ICollection_1_Add_m45630_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t799_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45630_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45630_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8809_ICollection_1_Add_m45630_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45630_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45631_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45631_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45631_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
static ParameterInfo ICollection_1_t8809_ICollection_1_Contains_m45632_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t799_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45632_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45632_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8809_ICollection_1_Contains_m45632_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45632_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttributeU5BU5D_t5071_0_0_0;
extern Il2CppType AssemblyProductAttributeU5BU5D_t5071_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8809_ICollection_1_CopyTo_m45633_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttributeU5BU5D_t5071_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45633_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45633_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8809_ICollection_1_CopyTo_m45633_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45633_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
static ParameterInfo ICollection_1_t8809_ICollection_1_Remove_m45634_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t799_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45634_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45634_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8809_ICollection_1_Remove_m45634_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45634_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8809_MethodInfos[] =
{
	&ICollection_1_get_Count_m45628_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45629_MethodInfo,
	&ICollection_1_Add_m45630_MethodInfo,
	&ICollection_1_Clear_m45631_MethodInfo,
	&ICollection_1_Contains_m45632_MethodInfo,
	&ICollection_1_CopyTo_m45633_MethodInfo,
	&ICollection_1_Remove_m45634_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8811_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8809_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8811_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8809_0_0_0;
extern Il2CppType ICollection_1_t8809_1_0_0;
struct ICollection_1_t8809;
extern Il2CppGenericClass ICollection_1_t8809_GenericClass;
TypeInfo ICollection_1_t8809_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8809_MethodInfos/* methods */
	, ICollection_1_t8809_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8809_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8809_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8809_0_0_0/* byval_arg */
	, &ICollection_1_t8809_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8809_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyProductAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyProductAttribute>
extern Il2CppType IEnumerator_1_t6811_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45635_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyProductAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45635_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8811_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6811_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45635_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8811_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45635_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8811_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8811_0_0_0;
extern Il2CppType IEnumerable_1_t8811_1_0_0;
struct IEnumerable_1_t8811;
extern Il2CppGenericClass IEnumerable_1_t8811_GenericClass;
TypeInfo IEnumerable_1_t8811_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8811_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8811_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8811_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8811_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8811_0_0_0/* byval_arg */
	, &IEnumerable_1_t8811_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8811_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8810_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>
extern MethodInfo IList_1_get_Item_m45636_MethodInfo;
extern MethodInfo IList_1_set_Item_m45637_MethodInfo;
static PropertyInfo IList_1_t8810____Item_PropertyInfo = 
{
	&IList_1_t8810_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45636_MethodInfo/* get */
	, &IList_1_set_Item_m45637_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8810_PropertyInfos[] =
{
	&IList_1_t8810____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
static ParameterInfo IList_1_t8810_IList_1_IndexOf_m45638_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t799_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45638_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45638_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8810_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8810_IList_1_IndexOf_m45638_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45638_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
static ParameterInfo IList_1_t8810_IList_1_Insert_m45639_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t799_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45639_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45639_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8810_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8810_IList_1_Insert_m45639_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45639_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8810_IList_1_RemoveAt_m45640_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45640_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45640_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8810_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8810_IList_1_RemoveAt_m45640_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45640_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8810_IList_1_get_Item_m45636_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45636_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45636_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8810_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyProductAttribute_t799_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8810_IList_1_get_Item_m45636_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45636_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyProductAttribute_t799_0_0_0;
static ParameterInfo IList_1_t8810_IList_1_set_Item_m45637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t799_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45637_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45637_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8810_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8810_IList_1_set_Item_m45637_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45637_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8810_MethodInfos[] =
{
	&IList_1_IndexOf_m45638_MethodInfo,
	&IList_1_Insert_m45639_MethodInfo,
	&IList_1_RemoveAt_m45640_MethodInfo,
	&IList_1_get_Item_m45636_MethodInfo,
	&IList_1_set_Item_m45637_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8810_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8809_il2cpp_TypeInfo,
	&IEnumerable_1_t8811_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8810_0_0_0;
extern Il2CppType IList_1_t8810_1_0_0;
struct IList_1_t8810;
extern Il2CppGenericClass IList_1_t8810_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8810_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8810_MethodInfos/* methods */
	, IList_1_t8810_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8810_il2cpp_TypeInfo/* element_class */
	, IList_1_t8810_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8810_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8810_0_0_0/* byval_arg */
	, &IList_1_t8810_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8810_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6813_il2cpp_TypeInfo;

// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTitleAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTitleAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45641_MethodInfo;
static PropertyInfo IEnumerator_1_t6813____Current_PropertyInfo = 
{
	&IEnumerator_1_t6813_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45641_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6813_PropertyInfos[] =
{
	&IEnumerator_1_t6813____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45641_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTitleAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45641_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6813_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTitleAttribute_t795_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45641_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6813_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45641_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6813_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6813_0_0_0;
extern Il2CppType IEnumerator_1_t6813_1_0_0;
struct IEnumerator_1_t6813;
extern Il2CppGenericClass IEnumerator_1_t6813_GenericClass;
TypeInfo IEnumerator_1_t6813_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6813_MethodInfos/* methods */
	, IEnumerator_1_t6813_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6813_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6813_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6813_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6813_0_0_0/* byval_arg */
	, &IEnumerator_1_t6813_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6813_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_643.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4807_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_643MethodDeclarations.h"

extern TypeInfo AssemblyTitleAttribute_t795_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26268_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyTitleAttribute_t795_m35156_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyTitleAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyTitleAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyTitleAttribute_t795_m35156(__this, p0, method) (AssemblyTitleAttribute_t795 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4807____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4807, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4807____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4807, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4807_FieldInfos[] =
{
	&InternalEnumerator_1_t4807____array_0_FieldInfo,
	&InternalEnumerator_1_t4807____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26265_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4807____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4807_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26265_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4807____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4807_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26268_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4807_PropertyInfos[] =
{
	&InternalEnumerator_1_t4807____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4807____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4807_InternalEnumerator_1__ctor_m26264_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26264_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26264_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4807_InternalEnumerator_1__ctor_m26264_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26264_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26265_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26265_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26265_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26266_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26266_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26266_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26267_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26267_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26267_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26268_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26268_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTitleAttribute_t795_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26268_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4807_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26264_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26265_MethodInfo,
	&InternalEnumerator_1_Dispose_m26266_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26267_MethodInfo,
	&InternalEnumerator_1_get_Current_m26268_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26267_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26266_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4807_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26265_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26267_MethodInfo,
	&InternalEnumerator_1_Dispose_m26266_MethodInfo,
	&InternalEnumerator_1_get_Current_m26268_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4807_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6813_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4807_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6813_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyTitleAttribute_t795_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4807_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26268_MethodInfo/* Method Usage */,
	&AssemblyTitleAttribute_t795_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyTitleAttribute_t795_m35156_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4807_0_0_0;
extern Il2CppType InternalEnumerator_1_t4807_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4807_GenericClass;
TypeInfo InternalEnumerator_1_t4807_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4807_MethodInfos/* methods */
	, InternalEnumerator_1_t4807_PropertyInfos/* properties */
	, InternalEnumerator_1_t4807_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4807_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4807_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4807_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4807_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4807_1_0_0/* this_arg */
	, InternalEnumerator_1_t4807_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4807_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4807_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4807)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8812_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>
extern MethodInfo ICollection_1_get_Count_m45642_MethodInfo;
static PropertyInfo ICollection_1_t8812____Count_PropertyInfo = 
{
	&ICollection_1_t8812_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45642_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45643_MethodInfo;
static PropertyInfo ICollection_1_t8812____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8812_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45643_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8812_PropertyInfos[] =
{
	&ICollection_1_t8812____Count_PropertyInfo,
	&ICollection_1_t8812____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45642_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45642_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45642_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45643_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45643_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45643_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
static ParameterInfo ICollection_1_t8812_ICollection_1_Add_m45644_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t795_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45644_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45644_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8812_ICollection_1_Add_m45644_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45644_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45645_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45645_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45645_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
static ParameterInfo ICollection_1_t8812_ICollection_1_Contains_m45646_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t795_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45646_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45646_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8812_ICollection_1_Contains_m45646_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45646_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttributeU5BU5D_t5072_0_0_0;
extern Il2CppType AssemblyTitleAttributeU5BU5D_t5072_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8812_ICollection_1_CopyTo_m45647_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttributeU5BU5D_t5072_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45647_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45647_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8812_ICollection_1_CopyTo_m45647_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45647_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
static ParameterInfo ICollection_1_t8812_ICollection_1_Remove_m45648_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t795_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45648_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45648_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8812_ICollection_1_Remove_m45648_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45648_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8812_MethodInfos[] =
{
	&ICollection_1_get_Count_m45642_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45643_MethodInfo,
	&ICollection_1_Add_m45644_MethodInfo,
	&ICollection_1_Clear_m45645_MethodInfo,
	&ICollection_1_Contains_m45646_MethodInfo,
	&ICollection_1_CopyTo_m45647_MethodInfo,
	&ICollection_1_Remove_m45648_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8814_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8812_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8814_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8812_0_0_0;
extern Il2CppType ICollection_1_t8812_1_0_0;
struct ICollection_1_t8812;
extern Il2CppGenericClass ICollection_1_t8812_GenericClass;
TypeInfo ICollection_1_t8812_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8812_MethodInfos/* methods */
	, ICollection_1_t8812_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8812_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8812_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8812_0_0_0/* byval_arg */
	, &ICollection_1_t8812_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8812_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTitleAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTitleAttribute>
extern Il2CppType IEnumerator_1_t6813_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45649_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTitleAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45649_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8814_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6813_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45649_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8814_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45649_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8814_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8814_0_0_0;
extern Il2CppType IEnumerable_1_t8814_1_0_0;
struct IEnumerable_1_t8814;
extern Il2CppGenericClass IEnumerable_1_t8814_GenericClass;
TypeInfo IEnumerable_1_t8814_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8814_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8814_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8814_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8814_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8814_0_0_0/* byval_arg */
	, &IEnumerable_1_t8814_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8814_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8813_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>
extern MethodInfo IList_1_get_Item_m45650_MethodInfo;
extern MethodInfo IList_1_set_Item_m45651_MethodInfo;
static PropertyInfo IList_1_t8813____Item_PropertyInfo = 
{
	&IList_1_t8813_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45650_MethodInfo/* get */
	, &IList_1_set_Item_m45651_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8813_PropertyInfos[] =
{
	&IList_1_t8813____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
static ParameterInfo IList_1_t8813_IList_1_IndexOf_m45652_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t795_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45652_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45652_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8813_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8813_IList_1_IndexOf_m45652_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45652_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
static ParameterInfo IList_1_t8813_IList_1_Insert_m45653_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t795_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45653_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45653_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8813_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8813_IList_1_Insert_m45653_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45653_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8813_IList_1_RemoveAt_m45654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45654_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45654_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8813_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8813_IList_1_RemoveAt_m45654_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45654_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8813_IList_1_get_Item_m45650_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45650_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45650_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8813_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTitleAttribute_t795_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8813_IList_1_get_Item_m45650_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45650_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyTitleAttribute_t795_0_0_0;
static ParameterInfo IList_1_t8813_IList_1_set_Item_m45651_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t795_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45651_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45651_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8813_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8813_IList_1_set_Item_m45651_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45651_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8813_MethodInfos[] =
{
	&IList_1_IndexOf_m45652_MethodInfo,
	&IList_1_Insert_m45653_MethodInfo,
	&IList_1_RemoveAt_m45654_MethodInfo,
	&IList_1_get_Item_m45650_MethodInfo,
	&IList_1_set_Item_m45651_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8813_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8812_il2cpp_TypeInfo,
	&IEnumerable_1_t8814_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8813_0_0_0;
extern Il2CppType IList_1_t8813_1_0_0;
struct IList_1_t8813;
extern Il2CppGenericClass IList_1_t8813_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8813_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8813_MethodInfos/* methods */
	, IList_1_t8813_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8813_il2cpp_TypeInfo/* element_class */
	, IList_1_t8813_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8813_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8813_0_0_0/* byval_arg */
	, &IList_1_t8813_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8813_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6815_il2cpp_TypeInfo;

// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45655_MethodInfo;
static PropertyInfo IEnumerator_1_t6815____Current_PropertyInfo = 
{
	&IEnumerator_1_t6815_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45655_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6815_PropertyInfos[] =
{
	&IEnumerator_1_t6815____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45655_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45655_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6815_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTrademarkAttribute_t804_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45655_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6815_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45655_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6815_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6815_0_0_0;
extern Il2CppType IEnumerator_1_t6815_1_0_0;
struct IEnumerator_1_t6815;
extern Il2CppGenericClass IEnumerator_1_t6815_GenericClass;
TypeInfo IEnumerator_1_t6815_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6815_MethodInfos/* methods */
	, IEnumerator_1_t6815_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6815_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6815_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6815_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6815_0_0_0/* byval_arg */
	, &IEnumerator_1_t6815_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6815_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_644.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4808_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_644MethodDeclarations.h"

extern TypeInfo AssemblyTrademarkAttribute_t804_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26273_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyTrademarkAttribute_t804_m35167_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyTrademarkAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyTrademarkAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyTrademarkAttribute_t804_m35167(__this, p0, method) (AssemblyTrademarkAttribute_t804 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4808____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4808, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4808____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4808, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4808_FieldInfos[] =
{
	&InternalEnumerator_1_t4808____array_0_FieldInfo,
	&InternalEnumerator_1_t4808____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26270_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4808____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4808_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26270_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4808____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4808_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26273_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4808_PropertyInfos[] =
{
	&InternalEnumerator_1_t4808____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4808____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4808_InternalEnumerator_1__ctor_m26269_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26269_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26269_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4808_InternalEnumerator_1__ctor_m26269_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26269_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26270_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26270_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26270_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26271_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26271_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26271_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26272_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26272_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26272_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26273_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26273_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTrademarkAttribute_t804_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26273_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4808_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26269_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26270_MethodInfo,
	&InternalEnumerator_1_Dispose_m26271_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26272_MethodInfo,
	&InternalEnumerator_1_get_Current_m26273_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26272_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26271_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4808_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26270_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26272_MethodInfo,
	&InternalEnumerator_1_Dispose_m26271_MethodInfo,
	&InternalEnumerator_1_get_Current_m26273_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4808_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6815_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4808_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6815_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyTrademarkAttribute_t804_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4808_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26273_MethodInfo/* Method Usage */,
	&AssemblyTrademarkAttribute_t804_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyTrademarkAttribute_t804_m35167_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4808_0_0_0;
extern Il2CppType InternalEnumerator_1_t4808_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4808_GenericClass;
TypeInfo InternalEnumerator_1_t4808_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4808_MethodInfos/* methods */
	, InternalEnumerator_1_t4808_PropertyInfos/* properties */
	, InternalEnumerator_1_t4808_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4808_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4808_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4808_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4808_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4808_1_0_0/* this_arg */
	, InternalEnumerator_1_t4808_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4808_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4808_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4808)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8815_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>
extern MethodInfo ICollection_1_get_Count_m45656_MethodInfo;
static PropertyInfo ICollection_1_t8815____Count_PropertyInfo = 
{
	&ICollection_1_t8815_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45656_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45657_MethodInfo;
static PropertyInfo ICollection_1_t8815____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8815_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45657_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8815_PropertyInfos[] =
{
	&ICollection_1_t8815____Count_PropertyInfo,
	&ICollection_1_t8815____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45656_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45656_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45656_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45657_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45657_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45657_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
static ParameterInfo ICollection_1_t8815_ICollection_1_Add_m45658_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t804_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45658_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45658_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8815_ICollection_1_Add_m45658_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45658_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45659_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45659_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45659_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
static ParameterInfo ICollection_1_t8815_ICollection_1_Contains_m45660_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t804_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45660_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45660_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8815_ICollection_1_Contains_m45660_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45660_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttributeU5BU5D_t5073_0_0_0;
extern Il2CppType AssemblyTrademarkAttributeU5BU5D_t5073_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8815_ICollection_1_CopyTo_m45661_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttributeU5BU5D_t5073_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45661_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45661_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8815_ICollection_1_CopyTo_m45661_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45661_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
static ParameterInfo ICollection_1_t8815_ICollection_1_Remove_m45662_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t804_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45662_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45662_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8815_ICollection_1_Remove_m45662_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45662_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8815_MethodInfos[] =
{
	&ICollection_1_get_Count_m45656_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45657_MethodInfo,
	&ICollection_1_Add_m45658_MethodInfo,
	&ICollection_1_Clear_m45659_MethodInfo,
	&ICollection_1_Contains_m45660_MethodInfo,
	&ICollection_1_CopyTo_m45661_MethodInfo,
	&ICollection_1_Remove_m45662_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8817_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8815_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8817_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8815_0_0_0;
extern Il2CppType ICollection_1_t8815_1_0_0;
struct ICollection_1_t8815;
extern Il2CppGenericClass ICollection_1_t8815_GenericClass;
TypeInfo ICollection_1_t8815_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8815_MethodInfos/* methods */
	, ICollection_1_t8815_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8815_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8815_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8815_0_0_0/* byval_arg */
	, &ICollection_1_t8815_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8815_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTrademarkAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTrademarkAttribute>
extern Il2CppType IEnumerator_1_t6815_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45663_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTrademarkAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45663_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8817_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6815_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45663_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8817_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45663_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8817_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8817_0_0_0;
extern Il2CppType IEnumerable_1_t8817_1_0_0;
struct IEnumerable_1_t8817;
extern Il2CppGenericClass IEnumerable_1_t8817_GenericClass;
TypeInfo IEnumerable_1_t8817_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8817_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8817_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8817_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8817_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8817_0_0_0/* byval_arg */
	, &IEnumerable_1_t8817_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8817_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8816_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>
extern MethodInfo IList_1_get_Item_m45664_MethodInfo;
extern MethodInfo IList_1_set_Item_m45665_MethodInfo;
static PropertyInfo IList_1_t8816____Item_PropertyInfo = 
{
	&IList_1_t8816_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45664_MethodInfo/* get */
	, &IList_1_set_Item_m45665_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8816_PropertyInfos[] =
{
	&IList_1_t8816____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
static ParameterInfo IList_1_t8816_IList_1_IndexOf_m45666_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t804_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45666_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45666_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8816_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8816_IList_1_IndexOf_m45666_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45666_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
static ParameterInfo IList_1_t8816_IList_1_Insert_m45667_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t804_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45667_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45667_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8816_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8816_IList_1_Insert_m45667_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45667_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8816_IList_1_RemoveAt_m45668_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45668_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45668_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8816_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8816_IList_1_RemoveAt_m45668_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45668_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8816_IList_1_get_Item_m45664_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45664_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45664_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8816_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTrademarkAttribute_t804_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8816_IList_1_get_Item_m45664_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45664_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyTrademarkAttribute_t804_0_0_0;
static ParameterInfo IList_1_t8816_IList_1_set_Item_m45665_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t804_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45665_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45665_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8816_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8816_IList_1_set_Item_m45665_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45665_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8816_MethodInfos[] =
{
	&IList_1_IndexOf_m45666_MethodInfo,
	&IList_1_Insert_m45667_MethodInfo,
	&IList_1_RemoveAt_m45668_MethodInfo,
	&IList_1_get_Item_m45664_MethodInfo,
	&IList_1_set_Item_m45665_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8816_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8815_il2cpp_TypeInfo,
	&IEnumerable_1_t8817_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8816_0_0_0;
extern Il2CppType IList_1_t8816_1_0_0;
struct IList_1_t8816;
extern Il2CppGenericClass IList_1_t8816_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8816_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8816_MethodInfos/* methods */
	, IList_1_t8816_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8816_il2cpp_TypeInfo/* element_class */
	, IList_1_t8816_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8816_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8816_0_0_0/* byval_arg */
	, &IList_1_t8816_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8816_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6817_il2cpp_TypeInfo;

// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>
extern MethodInfo IEnumerator_1_get_Current_m45669_MethodInfo;
static PropertyInfo IEnumerator_1_t6817____Current_PropertyInfo = 
{
	&IEnumerator_1_t6817_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45669_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6817_PropertyInfos[] =
{
	&IEnumerator_1_t6817____Current_PropertyInfo,
	NULL
};
extern Il2CppType PropertyInfo_t210_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45669_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45669_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6817_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfo_t210_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45669_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6817_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45669_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6817_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6817_0_0_0;
extern Il2CppType IEnumerator_1_t6817_1_0_0;
struct IEnumerator_1_t6817;
extern Il2CppGenericClass IEnumerator_1_t6817_GenericClass;
TypeInfo IEnumerator_1_t6817_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6817_MethodInfos/* methods */
	, IEnumerator_1_t6817_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6817_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6817_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6817_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6817_0_0_0/* byval_arg */
	, &IEnumerator_1_t6817_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6817_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_645.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4809_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_645MethodDeclarations.h"

extern TypeInfo PropertyInfo_t210_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26278_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPropertyInfo_t210_m35178_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisPropertyInfo_t210_m35178(__this, p0, method) (PropertyInfo_t210 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4809____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4809, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4809____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4809, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4809_FieldInfos[] =
{
	&InternalEnumerator_1_t4809____array_0_FieldInfo,
	&InternalEnumerator_1_t4809____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26275_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4809____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4809_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26275_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4809____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4809_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4809_PropertyInfos[] =
{
	&InternalEnumerator_1_t4809____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4809____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4809_InternalEnumerator_1__ctor_m26274_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26274_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26274_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4809_InternalEnumerator_1__ctor_m26274_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26274_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26275_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26275_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26275_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26276_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26276_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26276_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26277_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26277_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26277_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfo_t210_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26278_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26278_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfo_t210_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26278_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4809_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26274_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26275_MethodInfo,
	&InternalEnumerator_1_Dispose_m26276_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26277_MethodInfo,
	&InternalEnumerator_1_get_Current_m26278_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26277_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26276_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4809_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26275_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26277_MethodInfo,
	&InternalEnumerator_1_Dispose_m26276_MethodInfo,
	&InternalEnumerator_1_get_Current_m26278_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4809_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6817_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4809_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6817_il2cpp_TypeInfo, 7},
};
extern TypeInfo PropertyInfo_t210_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4809_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26278_MethodInfo/* Method Usage */,
	&PropertyInfo_t210_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisPropertyInfo_t210_m35178_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4809_0_0_0;
extern Il2CppType InternalEnumerator_1_t4809_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4809_GenericClass;
TypeInfo InternalEnumerator_1_t4809_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4809_MethodInfos/* methods */
	, InternalEnumerator_1_t4809_PropertyInfos/* properties */
	, InternalEnumerator_1_t4809_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4809_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4809_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4809_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4809_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4809_1_0_0/* this_arg */
	, InternalEnumerator_1_t4809_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4809_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4809_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4809)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8818_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>
extern MethodInfo ICollection_1_get_Count_m45670_MethodInfo;
static PropertyInfo ICollection_1_t8818____Count_PropertyInfo = 
{
	&ICollection_1_t8818_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45670_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45671_MethodInfo;
static PropertyInfo ICollection_1_t8818____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8818_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45671_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8818_PropertyInfos[] =
{
	&ICollection_1_t8818____Count_PropertyInfo,
	&ICollection_1_t8818____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45670_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m45670_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45670_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45671_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45671_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45671_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfo_t210_0_0_0;
extern Il2CppType PropertyInfo_t210_0_0_0;
static ParameterInfo ICollection_1_t8818_ICollection_1_Add_m45672_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t210_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45672_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(T)
MethodInfo ICollection_1_Add_m45672_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8818_ICollection_1_Add_m45672_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45672_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45673_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Clear()
MethodInfo ICollection_1_Clear_m45673_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45673_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfo_t210_0_0_0;
static ParameterInfo ICollection_1_t8818_ICollection_1_Contains_m45674_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t210_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45674_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m45674_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8818_ICollection_1_Contains_m45674_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45674_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfoU5BU5D_t1981_0_0_0;
extern Il2CppType PropertyInfoU5BU5D_t1981_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8818_ICollection_1_CopyTo_m45675_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfoU5BU5D_t1981_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45675_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45675_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8818_ICollection_1_CopyTo_m45675_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45675_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfo_t210_0_0_0;
static ParameterInfo ICollection_1_t8818_ICollection_1_Remove_m45676_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t210_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45676_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m45676_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8818_ICollection_1_Remove_m45676_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45676_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8818_MethodInfos[] =
{
	&ICollection_1_get_Count_m45670_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45671_MethodInfo,
	&ICollection_1_Add_m45672_MethodInfo,
	&ICollection_1_Clear_m45673_MethodInfo,
	&ICollection_1_Contains_m45674_MethodInfo,
	&ICollection_1_CopyTo_m45675_MethodInfo,
	&ICollection_1_Remove_m45676_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8820_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8818_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8820_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8818_0_0_0;
extern Il2CppType ICollection_1_t8818_1_0_0;
struct ICollection_1_t8818;
extern Il2CppGenericClass ICollection_1_t8818_GenericClass;
TypeInfo ICollection_1_t8818_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8818_MethodInfos/* methods */
	, ICollection_1_t8818_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8818_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8818_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8818_0_0_0/* byval_arg */
	, &ICollection_1_t8818_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8818_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
extern Il2CppType IEnumerator_1_t6817_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45677_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45677_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8820_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6817_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45677_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8820_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45677_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8820_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8820_0_0_0;
extern Il2CppType IEnumerable_1_t8820_1_0_0;
struct IEnumerable_1_t8820;
extern Il2CppGenericClass IEnumerable_1_t8820_GenericClass;
TypeInfo IEnumerable_1_t8820_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8820_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8820_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8820_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8820_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8820_0_0_0/* byval_arg */
	, &IEnumerable_1_t8820_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8820_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8819_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>
extern MethodInfo IList_1_get_Item_m45678_MethodInfo;
extern MethodInfo IList_1_set_Item_m45679_MethodInfo;
static PropertyInfo IList_1_t8819____Item_PropertyInfo = 
{
	&IList_1_t8819_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45678_MethodInfo/* get */
	, &IList_1_set_Item_m45679_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8819_PropertyInfos[] =
{
	&IList_1_t8819____Item_PropertyInfo,
	NULL
};
extern Il2CppType PropertyInfo_t210_0_0_0;
static ParameterInfo IList_1_t8819_IList_1_IndexOf_m45680_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t210_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45680_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45680_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8819_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8819_IList_1_IndexOf_m45680_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45680_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType PropertyInfo_t210_0_0_0;
static ParameterInfo IList_1_t8819_IList_1_Insert_m45681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t210_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45681_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45681_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8819_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8819_IList_1_Insert_m45681_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45681_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8819_IList_1_RemoveAt_m45682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45682_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45682_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8819_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8819_IList_1_RemoveAt_m45682_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45682_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8819_IList_1_get_Item_m45678_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType PropertyInfo_t210_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45678_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45678_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8819_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfo_t210_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8819_IList_1_get_Item_m45678_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45678_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType PropertyInfo_t210_0_0_0;
static ParameterInfo IList_1_t8819_IList_1_set_Item_m45679_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t210_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45679_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45679_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8819_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8819_IList_1_set_Item_m45679_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45679_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8819_MethodInfos[] =
{
	&IList_1_IndexOf_m45680_MethodInfo,
	&IList_1_Insert_m45681_MethodInfo,
	&IList_1_RemoveAt_m45682_MethodInfo,
	&IList_1_get_Item_m45678_MethodInfo,
	&IList_1_set_Item_m45679_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8819_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8818_il2cpp_TypeInfo,
	&IEnumerable_1_t8820_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8819_0_0_0;
extern Il2CppType IList_1_t8819_1_0_0;
struct IList_1_t8819;
extern Il2CppGenericClass IList_1_t8819_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8819_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8819_MethodInfos/* methods */
	, IList_1_t8819_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8819_il2cpp_TypeInfo/* element_class */
	, IList_1_t8819_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8819_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8819_0_0_0/* byval_arg */
	, &IList_1_t8819_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8819_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t8821_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>
extern MethodInfo ICollection_1_get_Count_m45683_MethodInfo;
static PropertyInfo ICollection_1_t8821____Count_PropertyInfo = 
{
	&ICollection_1_t8821_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45683_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45684_MethodInfo;
static PropertyInfo ICollection_1_t8821____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8821_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45684_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8821_PropertyInfos[] =
{
	&ICollection_1_t8821____Count_PropertyInfo,
	&ICollection_1_t8821____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45683_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m45683_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45683_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45684_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45684_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45684_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfo_t2675_0_0_0;
extern Il2CppType _PropertyInfo_t2675_0_0_0;
static ParameterInfo ICollection_1_t8821_ICollection_1_Add_m45685_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2675_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45685_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Add(T)
MethodInfo ICollection_1_Add_m45685_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8821_ICollection_1_Add_m45685_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45685_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45686_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Clear()
MethodInfo ICollection_1_Clear_m45686_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45686_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfo_t2675_0_0_0;
static ParameterInfo ICollection_1_t8821_ICollection_1_Contains_m45687_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2675_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45687_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m45687_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8821_ICollection_1_Contains_m45687_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45687_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfoU5BU5D_t5074_0_0_0;
extern Il2CppType _PropertyInfoU5BU5D_t5074_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8821_ICollection_1_CopyTo_m45688_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfoU5BU5D_t5074_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45688_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45688_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8821_ICollection_1_CopyTo_m45688_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45688_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfo_t2675_0_0_0;
static ParameterInfo ICollection_1_t8821_ICollection_1_Remove_m45689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2675_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45689_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m45689_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8821_ICollection_1_Remove_m45689_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45689_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8821_MethodInfos[] =
{
	&ICollection_1_get_Count_m45683_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45684_MethodInfo,
	&ICollection_1_Add_m45685_MethodInfo,
	&ICollection_1_Clear_m45686_MethodInfo,
	&ICollection_1_Contains_m45687_MethodInfo,
	&ICollection_1_CopyTo_m45688_MethodInfo,
	&ICollection_1_Remove_m45689_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8823_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8821_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8823_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8821_0_0_0;
extern Il2CppType ICollection_1_t8821_1_0_0;
struct ICollection_1_t8821;
extern Il2CppGenericClass ICollection_1_t8821_GenericClass;
TypeInfo ICollection_1_t8821_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8821_MethodInfos/* methods */
	, ICollection_1_t8821_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8821_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8821_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8821_0_0_0/* byval_arg */
	, &ICollection_1_t8821_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8821_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._PropertyInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._PropertyInfo>
extern Il2CppType IEnumerator_1_t6819_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45690_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._PropertyInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45690_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8823_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6819_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45690_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8823_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45690_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8823_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8823_0_0_0;
extern Il2CppType IEnumerable_1_t8823_1_0_0;
struct IEnumerable_1_t8823;
extern Il2CppGenericClass IEnumerable_1_t8823_GenericClass;
TypeInfo IEnumerable_1_t8823_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8823_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8823_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8823_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8823_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8823_0_0_0/* byval_arg */
	, &IEnumerable_1_t8823_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8823_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6819_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._PropertyInfo>
extern MethodInfo IEnumerator_1_get_Current_m45691_MethodInfo;
static PropertyInfo IEnumerator_1_t6819____Current_PropertyInfo = 
{
	&IEnumerator_1_t6819_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45691_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6819_PropertyInfos[] =
{
	&IEnumerator_1_t6819____Current_PropertyInfo,
	NULL
};
extern Il2CppType _PropertyInfo_t2675_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45691_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45691_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6819_il2cpp_TypeInfo/* declaring_type */
	, &_PropertyInfo_t2675_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45691_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6819_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45691_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6819_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6819_0_0_0;
extern Il2CppType IEnumerator_1_t6819_1_0_0;
struct IEnumerator_1_t6819;
extern Il2CppGenericClass IEnumerator_1_t6819_GenericClass;
TypeInfo IEnumerator_1_t6819_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6819_MethodInfos/* methods */
	, IEnumerator_1_t6819_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6819_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6819_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6819_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6819_0_0_0/* byval_arg */
	, &IEnumerator_1_t6819_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6819_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_646.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4810_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_646MethodDeclarations.h"

extern TypeInfo _PropertyInfo_t2675_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26283_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_PropertyInfo_t2675_m35189_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._PropertyInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._PropertyInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_PropertyInfo_t2675_m35189(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4810____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4810, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4810____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4810, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4810_FieldInfos[] =
{
	&InternalEnumerator_1_t4810____array_0_FieldInfo,
	&InternalEnumerator_1_t4810____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26280_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4810____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4810_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26280_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4810____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4810_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26283_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4810_PropertyInfos[] =
{
	&InternalEnumerator_1_t4810____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4810____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4810_InternalEnumerator_1__ctor_m26279_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26279_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26279_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4810_InternalEnumerator_1__ctor_m26279_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26279_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26280_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26280_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26280_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26281_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26281_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26281_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26282_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26282_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26282_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfo_t2675_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26283_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26283_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
	, &_PropertyInfo_t2675_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26283_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4810_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26279_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26280_MethodInfo,
	&InternalEnumerator_1_Dispose_m26281_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26282_MethodInfo,
	&InternalEnumerator_1_get_Current_m26283_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26282_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26281_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4810_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26280_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26282_MethodInfo,
	&InternalEnumerator_1_Dispose_m26281_MethodInfo,
	&InternalEnumerator_1_get_Current_m26283_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4810_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6819_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4810_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6819_il2cpp_TypeInfo, 7},
};
extern TypeInfo _PropertyInfo_t2675_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4810_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26283_MethodInfo/* Method Usage */,
	&_PropertyInfo_t2675_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_PropertyInfo_t2675_m35189_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4810_0_0_0;
extern Il2CppType InternalEnumerator_1_t4810_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4810_GenericClass;
TypeInfo InternalEnumerator_1_t4810_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4810_MethodInfos/* methods */
	, InternalEnumerator_1_t4810_PropertyInfos/* properties */
	, InternalEnumerator_1_t4810_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4810_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4810_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4810_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4810_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4810_1_0_0/* this_arg */
	, InternalEnumerator_1_t4810_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4810_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4810_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4810)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8822_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>
extern MethodInfo IList_1_get_Item_m45692_MethodInfo;
extern MethodInfo IList_1_set_Item_m45693_MethodInfo;
static PropertyInfo IList_1_t8822____Item_PropertyInfo = 
{
	&IList_1_t8822_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45692_MethodInfo/* get */
	, &IList_1_set_Item_m45693_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8822_PropertyInfos[] =
{
	&IList_1_t8822____Item_PropertyInfo,
	NULL
};
extern Il2CppType _PropertyInfo_t2675_0_0_0;
static ParameterInfo IList_1_t8822_IList_1_IndexOf_m45694_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2675_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45694_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45694_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8822_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8822_IList_1_IndexOf_m45694_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45694_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _PropertyInfo_t2675_0_0_0;
static ParameterInfo IList_1_t8822_IList_1_Insert_m45695_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2675_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45695_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45695_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8822_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8822_IList_1_Insert_m45695_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45695_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8822_IList_1_RemoveAt_m45696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45696_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45696_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8822_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8822_IList_1_RemoveAt_m45696_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45696_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8822_IList_1_get_Item_m45692_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _PropertyInfo_t2675_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45692_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45692_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8822_il2cpp_TypeInfo/* declaring_type */
	, &_PropertyInfo_t2675_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8822_IList_1_get_Item_m45692_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45692_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _PropertyInfo_t2675_0_0_0;
static ParameterInfo IList_1_t8822_IList_1_set_Item_m45693_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2675_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45693_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45693_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8822_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8822_IList_1_set_Item_m45693_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45693_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8822_MethodInfos[] =
{
	&IList_1_IndexOf_m45694_MethodInfo,
	&IList_1_Insert_m45695_MethodInfo,
	&IList_1_RemoveAt_m45696_MethodInfo,
	&IList_1_get_Item_m45692_MethodInfo,
	&IList_1_set_Item_m45693_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8822_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8821_il2cpp_TypeInfo,
	&IEnumerable_1_t8823_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8822_0_0_0;
extern Il2CppType IList_1_t8822_1_0_0;
struct IList_1_t8822;
extern Il2CppGenericClass IList_1_t8822_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8822_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8822_MethodInfos/* methods */
	, IList_1_t8822_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8822_il2cpp_TypeInfo/* element_class */
	, IList_1_t8822_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8822_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8822_0_0_0/* byval_arg */
	, &IList_1_t8822_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8822_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6821_il2cpp_TypeInfo;

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.BindingFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.BindingFlags>
extern MethodInfo IEnumerator_1_get_Current_m45697_MethodInfo;
static PropertyInfo IEnumerator_1_t6821____Current_PropertyInfo = 
{
	&IEnumerator_1_t6821_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45697_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6821_PropertyInfos[] =
{
	&IEnumerator_1_t6821____Current_PropertyInfo,
	NULL
};
extern Il2CppType BindingFlags_t309_0_0_0;
extern void* RuntimeInvoker_BindingFlags_t309 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45697_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.BindingFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45697_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6821_il2cpp_TypeInfo/* declaring_type */
	, &BindingFlags_t309_0_0_0/* return_type */
	, RuntimeInvoker_BindingFlags_t309/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45697_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6821_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45697_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6821_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6821_0_0_0;
extern Il2CppType IEnumerator_1_t6821_1_0_0;
struct IEnumerator_1_t6821;
extern Il2CppGenericClass IEnumerator_1_t6821_GenericClass;
TypeInfo IEnumerator_1_t6821_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6821_MethodInfos/* methods */
	, IEnumerator_1_t6821_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6821_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6821_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6821_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6821_0_0_0/* byval_arg */
	, &IEnumerator_1_t6821_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6821_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_647.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4811_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_647MethodDeclarations.h"

extern TypeInfo BindingFlags_t309_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26288_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBindingFlags_t309_m35200_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.BindingFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.BindingFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisBindingFlags_t309_m35200 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26284_MethodInfo;
 void InternalEnumerator_1__ctor_m26284 (InternalEnumerator_1_t4811 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285 (InternalEnumerator_1_t4811 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26288(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26288_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&BindingFlags_t309_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26286_MethodInfo;
 void InternalEnumerator_1_Dispose_m26286 (InternalEnumerator_1_t4811 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26287_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26287 (InternalEnumerator_1_t4811 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26288 (InternalEnumerator_1_t4811 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisBindingFlags_t309_m35200(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisBindingFlags_t309_m35200_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4811____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4811, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4811____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4811, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4811_FieldInfos[] =
{
	&InternalEnumerator_1_t4811____array_0_FieldInfo,
	&InternalEnumerator_1_t4811____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4811____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4811_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4811____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4811_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26288_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4811_PropertyInfos[] =
{
	&InternalEnumerator_1_t4811____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4811____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4811_InternalEnumerator_1__ctor_m26284_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26284_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26284_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26284/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4811_InternalEnumerator_1__ctor_m26284_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26284_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26286_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26286_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26286/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26286_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26287_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26287_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26287/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26287_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlags_t309_0_0_0;
extern void* RuntimeInvoker_BindingFlags_t309 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26288_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26288_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26288/* method */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* declaring_type */
	, &BindingFlags_t309_0_0_0/* return_type */
	, RuntimeInvoker_BindingFlags_t309/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26288_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4811_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26284_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285_MethodInfo,
	&InternalEnumerator_1_Dispose_m26286_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26287_MethodInfo,
	&InternalEnumerator_1_get_Current_m26288_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4811_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26285_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26287_MethodInfo,
	&InternalEnumerator_1_Dispose_m26286_MethodInfo,
	&InternalEnumerator_1_get_Current_m26288_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4811_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6821_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4811_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6821_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4811_0_0_0;
extern Il2CppType InternalEnumerator_1_t4811_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4811_GenericClass;
TypeInfo InternalEnumerator_1_t4811_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4811_MethodInfos/* methods */
	, InternalEnumerator_1_t4811_PropertyInfos/* properties */
	, InternalEnumerator_1_t4811_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4811_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4811_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4811_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4811_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4811_1_0_0/* this_arg */
	, InternalEnumerator_1_t4811_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4811_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4811)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8824_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>
extern MethodInfo ICollection_1_get_Count_m45698_MethodInfo;
static PropertyInfo ICollection_1_t8824____Count_PropertyInfo = 
{
	&ICollection_1_t8824_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45698_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45699_MethodInfo;
static PropertyInfo ICollection_1_t8824____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8824_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45699_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8824_PropertyInfos[] =
{
	&ICollection_1_t8824____Count_PropertyInfo,
	&ICollection_1_t8824____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45698_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m45698_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45698_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45699_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45699_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45699_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlags_t309_0_0_0;
extern Il2CppType BindingFlags_t309_0_0_0;
static ParameterInfo ICollection_1_t8824_ICollection_1_Add_m45700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t309_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45700_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Add(T)
MethodInfo ICollection_1_Add_m45700_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8824_ICollection_1_Add_m45700_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45700_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45701_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Clear()
MethodInfo ICollection_1_Clear_m45701_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45701_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlags_t309_0_0_0;
static ParameterInfo ICollection_1_t8824_ICollection_1_Contains_m45702_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t309_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45702_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m45702_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8824_ICollection_1_Contains_m45702_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45702_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlagsU5BU5D_t5075_0_0_0;
extern Il2CppType BindingFlagsU5BU5D_t5075_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8824_ICollection_1_CopyTo_m45703_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlagsU5BU5D_t5075_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45703_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45703_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8824_ICollection_1_CopyTo_m45703_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45703_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlags_t309_0_0_0;
static ParameterInfo ICollection_1_t8824_ICollection_1_Remove_m45704_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t309_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45704_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m45704_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8824_ICollection_1_Remove_m45704_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45704_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8824_MethodInfos[] =
{
	&ICollection_1_get_Count_m45698_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45699_MethodInfo,
	&ICollection_1_Add_m45700_MethodInfo,
	&ICollection_1_Clear_m45701_MethodInfo,
	&ICollection_1_Contains_m45702_MethodInfo,
	&ICollection_1_CopyTo_m45703_MethodInfo,
	&ICollection_1_Remove_m45704_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8826_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8824_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8826_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8824_0_0_0;
extern Il2CppType ICollection_1_t8824_1_0_0;
struct ICollection_1_t8824;
extern Il2CppGenericClass ICollection_1_t8824_GenericClass;
TypeInfo ICollection_1_t8824_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8824_MethodInfos/* methods */
	, ICollection_1_t8824_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8824_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8824_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8824_0_0_0/* byval_arg */
	, &ICollection_1_t8824_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8824_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.BindingFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.BindingFlags>
extern Il2CppType IEnumerator_1_t6821_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45705_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.BindingFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45705_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8826_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6821_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45705_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8826_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45705_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8826_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8826_0_0_0;
extern Il2CppType IEnumerable_1_t8826_1_0_0;
struct IEnumerable_1_t8826;
extern Il2CppGenericClass IEnumerable_1_t8826_GenericClass;
TypeInfo IEnumerable_1_t8826_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8826_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8826_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8826_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8826_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8826_0_0_0/* byval_arg */
	, &IEnumerable_1_t8826_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8826_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8825_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.BindingFlags>
extern MethodInfo IList_1_get_Item_m45706_MethodInfo;
extern MethodInfo IList_1_set_Item_m45707_MethodInfo;
static PropertyInfo IList_1_t8825____Item_PropertyInfo = 
{
	&IList_1_t8825_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45706_MethodInfo/* get */
	, &IList_1_set_Item_m45707_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8825_PropertyInfos[] =
{
	&IList_1_t8825____Item_PropertyInfo,
	NULL
};
extern Il2CppType BindingFlags_t309_0_0_0;
static ParameterInfo IList_1_t8825_IList_1_IndexOf_m45708_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t309_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45708_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45708_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8825_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8825_IList_1_IndexOf_m45708_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45708_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType BindingFlags_t309_0_0_0;
static ParameterInfo IList_1_t8825_IList_1_Insert_m45709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t309_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45709_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45709_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8825_IList_1_Insert_m45709_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45709_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8825_IList_1_RemoveAt_m45710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45710_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45710_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8825_IList_1_RemoveAt_m45710_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45710_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8825_IList_1_get_Item_m45706_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType BindingFlags_t309_0_0_0;
extern void* RuntimeInvoker_BindingFlags_t309_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45706_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45706_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8825_il2cpp_TypeInfo/* declaring_type */
	, &BindingFlags_t309_0_0_0/* return_type */
	, RuntimeInvoker_BindingFlags_t309_Int32_t73/* invoker_method */
	, IList_1_t8825_IList_1_get_Item_m45706_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45706_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType BindingFlags_t309_0_0_0;
static ParameterInfo IList_1_t8825_IList_1_set_Item_m45707_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t309_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45707_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45707_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8825_IList_1_set_Item_m45707_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45707_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8825_MethodInfos[] =
{
	&IList_1_IndexOf_m45708_MethodInfo,
	&IList_1_Insert_m45709_MethodInfo,
	&IList_1_RemoveAt_m45710_MethodInfo,
	&IList_1_get_Item_m45706_MethodInfo,
	&IList_1_set_Item_m45707_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8825_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8824_il2cpp_TypeInfo,
	&IEnumerable_1_t8826_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8825_0_0_0;
extern Il2CppType IList_1_t8825_1_0_0;
struct IList_1_t8825;
extern Il2CppGenericClass IList_1_t8825_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8825_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8825_MethodInfos/* methods */
	, IList_1_t8825_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8825_il2cpp_TypeInfo/* element_class */
	, IList_1_t8825_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8825_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8825_0_0_0/* byval_arg */
	, &IList_1_t8825_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8825_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6823_il2cpp_TypeInfo;

// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.CallingConventions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.CallingConventions>
extern MethodInfo IEnumerator_1_get_Current_m45711_MethodInfo;
static PropertyInfo IEnumerator_1_t6823____Current_PropertyInfo = 
{
	&IEnumerator_1_t6823_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45711_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6823_PropertyInfos[] =
{
	&IEnumerator_1_t6823____Current_PropertyInfo,
	NULL
};
extern Il2CppType CallingConventions_t1982_0_0_0;
extern void* RuntimeInvoker_CallingConventions_t1982 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45711_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.CallingConventions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45711_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6823_il2cpp_TypeInfo/* declaring_type */
	, &CallingConventions_t1982_0_0_0/* return_type */
	, RuntimeInvoker_CallingConventions_t1982/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45711_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6823_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45711_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6823_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6823_0_0_0;
extern Il2CppType IEnumerator_1_t6823_1_0_0;
struct IEnumerator_1_t6823;
extern Il2CppGenericClass IEnumerator_1_t6823_GenericClass;
TypeInfo IEnumerator_1_t6823_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6823_MethodInfos/* methods */
	, IEnumerator_1_t6823_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6823_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6823_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6823_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6823_0_0_0/* byval_arg */
	, &IEnumerator_1_t6823_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6823_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_648.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4812_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_648MethodDeclarations.h"

extern TypeInfo CallingConventions_t1982_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26293_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCallingConventions_t1982_m35211_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.CallingConventions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.CallingConventions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCallingConventions_t1982_m35211 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26289_MethodInfo;
 void InternalEnumerator_1__ctor_m26289 (InternalEnumerator_1_t4812 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290 (InternalEnumerator_1_t4812 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26293(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26293_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CallingConventions_t1982_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26291_MethodInfo;
 void InternalEnumerator_1_Dispose_m26291 (InternalEnumerator_1_t4812 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26292_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26292 (InternalEnumerator_1_t4812 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26293 (InternalEnumerator_1_t4812 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCallingConventions_t1982_m35211(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCallingConventions_t1982_m35211_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4812____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4812, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4812____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4812, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4812_FieldInfos[] =
{
	&InternalEnumerator_1_t4812____array_0_FieldInfo,
	&InternalEnumerator_1_t4812____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4812____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4812_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4812____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4812_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26293_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4812_PropertyInfos[] =
{
	&InternalEnumerator_1_t4812____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4812____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4812_InternalEnumerator_1__ctor_m26289_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26289_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26289_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26289/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4812_InternalEnumerator_1__ctor_m26289_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26289_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26291_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26291_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26291/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26291_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26292_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26292_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26292/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26292_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventions_t1982_0_0_0;
extern void* RuntimeInvoker_CallingConventions_t1982 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26293_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26293_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26293/* method */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
	, &CallingConventions_t1982_0_0_0/* return_type */
	, RuntimeInvoker_CallingConventions_t1982/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26293_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4812_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26289_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290_MethodInfo,
	&InternalEnumerator_1_Dispose_m26291_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26292_MethodInfo,
	&InternalEnumerator_1_get_Current_m26293_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4812_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26290_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26292_MethodInfo,
	&InternalEnumerator_1_Dispose_m26291_MethodInfo,
	&InternalEnumerator_1_get_Current_m26293_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4812_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6823_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4812_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6823_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4812_0_0_0;
extern Il2CppType InternalEnumerator_1_t4812_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4812_GenericClass;
TypeInfo InternalEnumerator_1_t4812_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4812_MethodInfos/* methods */
	, InternalEnumerator_1_t4812_PropertyInfos/* properties */
	, InternalEnumerator_1_t4812_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4812_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4812_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4812_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4812_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4812_1_0_0/* this_arg */
	, InternalEnumerator_1_t4812_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4812_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4812)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8827_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>
extern MethodInfo ICollection_1_get_Count_m45712_MethodInfo;
static PropertyInfo ICollection_1_t8827____Count_PropertyInfo = 
{
	&ICollection_1_t8827_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45712_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45713_MethodInfo;
static PropertyInfo ICollection_1_t8827____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8827_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45713_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8827_PropertyInfos[] =
{
	&ICollection_1_t8827____Count_PropertyInfo,
	&ICollection_1_t8827____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45712_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::get_Count()
MethodInfo ICollection_1_get_Count_m45712_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45712_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45713_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45713_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45713_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventions_t1982_0_0_0;
extern Il2CppType CallingConventions_t1982_0_0_0;
static ParameterInfo ICollection_1_t8827_ICollection_1_Add_m45714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1982_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45714_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Add(T)
MethodInfo ICollection_1_Add_m45714_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8827_ICollection_1_Add_m45714_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45714_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45715_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Clear()
MethodInfo ICollection_1_Clear_m45715_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45715_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventions_t1982_0_0_0;
static ParameterInfo ICollection_1_t8827_ICollection_1_Contains_m45716_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1982_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45716_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Contains(T)
MethodInfo ICollection_1_Contains_m45716_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8827_ICollection_1_Contains_m45716_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45716_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventionsU5BU5D_t5076_0_0_0;
extern Il2CppType CallingConventionsU5BU5D_t5076_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8827_ICollection_1_CopyTo_m45717_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventionsU5BU5D_t5076_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45717_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45717_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8827_ICollection_1_CopyTo_m45717_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45717_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventions_t1982_0_0_0;
static ParameterInfo ICollection_1_t8827_ICollection_1_Remove_m45718_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1982_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45718_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Remove(T)
MethodInfo ICollection_1_Remove_m45718_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8827_ICollection_1_Remove_m45718_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45718_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8827_MethodInfos[] =
{
	&ICollection_1_get_Count_m45712_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45713_MethodInfo,
	&ICollection_1_Add_m45714_MethodInfo,
	&ICollection_1_Clear_m45715_MethodInfo,
	&ICollection_1_Contains_m45716_MethodInfo,
	&ICollection_1_CopyTo_m45717_MethodInfo,
	&ICollection_1_Remove_m45718_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8829_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8827_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8829_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8827_0_0_0;
extern Il2CppType ICollection_1_t8827_1_0_0;
struct ICollection_1_t8827;
extern Il2CppGenericClass ICollection_1_t8827_GenericClass;
TypeInfo ICollection_1_t8827_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8827_MethodInfos/* methods */
	, ICollection_1_t8827_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8827_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8827_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8827_0_0_0/* byval_arg */
	, &ICollection_1_t8827_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8827_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CallingConventions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.CallingConventions>
extern Il2CppType IEnumerator_1_t6823_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45719_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CallingConventions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45719_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8829_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6823_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45719_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8829_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45719_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8829_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8829_0_0_0;
extern Il2CppType IEnumerable_1_t8829_1_0_0;
struct IEnumerable_1_t8829;
extern Il2CppGenericClass IEnumerable_1_t8829_GenericClass;
TypeInfo IEnumerable_1_t8829_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8829_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8829_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8829_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8829_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8829_0_0_0/* byval_arg */
	, &IEnumerable_1_t8829_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8829_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8828_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.CallingConventions>
extern MethodInfo IList_1_get_Item_m45720_MethodInfo;
extern MethodInfo IList_1_set_Item_m45721_MethodInfo;
static PropertyInfo IList_1_t8828____Item_PropertyInfo = 
{
	&IList_1_t8828_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45720_MethodInfo/* get */
	, &IList_1_set_Item_m45721_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8828_PropertyInfos[] =
{
	&IList_1_t8828____Item_PropertyInfo,
	NULL
};
extern Il2CppType CallingConventions_t1982_0_0_0;
static ParameterInfo IList_1_t8828_IList_1_IndexOf_m45722_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1982_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45722_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45722_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8828_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8828_IList_1_IndexOf_m45722_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45722_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CallingConventions_t1982_0_0_0;
static ParameterInfo IList_1_t8828_IList_1_Insert_m45723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1982_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45723_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45723_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8828_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8828_IList_1_Insert_m45723_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45723_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8828_IList_1_RemoveAt_m45724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45724_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45724_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8828_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8828_IList_1_RemoveAt_m45724_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45724_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8828_IList_1_get_Item_m45720_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType CallingConventions_t1982_0_0_0;
extern void* RuntimeInvoker_CallingConventions_t1982_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45720_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45720_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8828_il2cpp_TypeInfo/* declaring_type */
	, &CallingConventions_t1982_0_0_0/* return_type */
	, RuntimeInvoker_CallingConventions_t1982_Int32_t73/* invoker_method */
	, IList_1_t8828_IList_1_get_Item_m45720_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45720_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CallingConventions_t1982_0_0_0;
static ParameterInfo IList_1_t8828_IList_1_set_Item_m45721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1982_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45721_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45721_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8828_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8828_IList_1_set_Item_m45721_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45721_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8828_MethodInfos[] =
{
	&IList_1_IndexOf_m45722_MethodInfo,
	&IList_1_Insert_m45723_MethodInfo,
	&IList_1_RemoveAt_m45724_MethodInfo,
	&IList_1_get_Item_m45720_MethodInfo,
	&IList_1_set_Item_m45721_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8828_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8827_il2cpp_TypeInfo,
	&IEnumerable_1_t8829_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8828_0_0_0;
extern Il2CppType IList_1_t8828_1_0_0;
struct IList_1_t8828;
extern Il2CppGenericClass IList_1_t8828_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8828_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8828_MethodInfos/* methods */
	, IList_1_t8828_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8828_il2cpp_TypeInfo/* element_class */
	, IList_1_t8828_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8828_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8828_0_0_0/* byval_arg */
	, &IList_1_t8828_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8828_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6825_il2cpp_TypeInfo;

// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.EventAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.EventAttributes>
extern MethodInfo IEnumerator_1_get_Current_m45725_MethodInfo;
static PropertyInfo IEnumerator_1_t6825____Current_PropertyInfo = 
{
	&IEnumerator_1_t6825_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45725_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6825_PropertyInfos[] =
{
	&IEnumerator_1_t6825____Current_PropertyInfo,
	NULL
};
extern Il2CppType EventAttributes_t1983_0_0_0;
extern void* RuntimeInvoker_EventAttributes_t1983 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45725_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.EventAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45725_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6825_il2cpp_TypeInfo/* declaring_type */
	, &EventAttributes_t1983_0_0_0/* return_type */
	, RuntimeInvoker_EventAttributes_t1983/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45725_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6825_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45725_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6825_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6825_0_0_0;
extern Il2CppType IEnumerator_1_t6825_1_0_0;
struct IEnumerator_1_t6825;
extern Il2CppGenericClass IEnumerator_1_t6825_GenericClass;
TypeInfo IEnumerator_1_t6825_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6825_MethodInfos/* methods */
	, IEnumerator_1_t6825_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6825_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6825_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6825_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6825_0_0_0/* byval_arg */
	, &IEnumerator_1_t6825_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6825_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_649.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4813_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_649MethodDeclarations.h"

extern TypeInfo EventAttributes_t1983_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26298_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEventAttributes_t1983_m35222_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.EventAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.EventAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEventAttributes_t1983_m35222 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26294_MethodInfo;
 void InternalEnumerator_1__ctor_m26294 (InternalEnumerator_1_t4813 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295 (InternalEnumerator_1_t4813 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26298(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26298_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EventAttributes_t1983_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26296_MethodInfo;
 void InternalEnumerator_1_Dispose_m26296 (InternalEnumerator_1_t4813 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26297_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26297 (InternalEnumerator_1_t4813 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26298 (InternalEnumerator_1_t4813 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEventAttributes_t1983_m35222(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEventAttributes_t1983_m35222_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4813____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4813, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4813____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4813, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4813_FieldInfos[] =
{
	&InternalEnumerator_1_t4813____array_0_FieldInfo,
	&InternalEnumerator_1_t4813____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4813____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4813_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4813____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4813_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26298_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4813_PropertyInfos[] =
{
	&InternalEnumerator_1_t4813____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4813____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4813_InternalEnumerator_1__ctor_m26294_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26294_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26294_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26294/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4813_InternalEnumerator_1__ctor_m26294_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26294_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26296_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26296_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26296/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26296_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26297_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26297_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26297/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26297_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributes_t1983_0_0_0;
extern void* RuntimeInvoker_EventAttributes_t1983 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26298_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26298_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26298/* method */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* declaring_type */
	, &EventAttributes_t1983_0_0_0/* return_type */
	, RuntimeInvoker_EventAttributes_t1983/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26298_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4813_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26294_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295_MethodInfo,
	&InternalEnumerator_1_Dispose_m26296_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26297_MethodInfo,
	&InternalEnumerator_1_get_Current_m26298_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4813_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26295_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26297_MethodInfo,
	&InternalEnumerator_1_Dispose_m26296_MethodInfo,
	&InternalEnumerator_1_get_Current_m26298_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4813_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6825_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4813_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6825_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4813_0_0_0;
extern Il2CppType InternalEnumerator_1_t4813_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4813_GenericClass;
TypeInfo InternalEnumerator_1_t4813_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4813_MethodInfos/* methods */
	, InternalEnumerator_1_t4813_PropertyInfos/* properties */
	, InternalEnumerator_1_t4813_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4813_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4813_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4813_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4813_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4813_1_0_0/* this_arg */
	, InternalEnumerator_1_t4813_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4813_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4813)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8830_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>
extern MethodInfo ICollection_1_get_Count_m45726_MethodInfo;
static PropertyInfo ICollection_1_t8830____Count_PropertyInfo = 
{
	&ICollection_1_t8830_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45726_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45727_MethodInfo;
static PropertyInfo ICollection_1_t8830____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8830_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8830_PropertyInfos[] =
{
	&ICollection_1_t8830____Count_PropertyInfo,
	&ICollection_1_t8830____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45726_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m45726_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45726_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45727_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45727_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45727_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributes_t1983_0_0_0;
extern Il2CppType EventAttributes_t1983_0_0_0;
static ParameterInfo ICollection_1_t8830_ICollection_1_Add_m45728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1983_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45728_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Add(T)
MethodInfo ICollection_1_Add_m45728_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8830_ICollection_1_Add_m45728_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45728_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45729_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Clear()
MethodInfo ICollection_1_Clear_m45729_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45729_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributes_t1983_0_0_0;
static ParameterInfo ICollection_1_t8830_ICollection_1_Contains_m45730_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1983_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45730_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m45730_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8830_ICollection_1_Contains_m45730_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45730_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributesU5BU5D_t5077_0_0_0;
extern Il2CppType EventAttributesU5BU5D_t5077_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8830_ICollection_1_CopyTo_m45731_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributesU5BU5D_t5077_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45731_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45731_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8830_ICollection_1_CopyTo_m45731_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45731_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributes_t1983_0_0_0;
static ParameterInfo ICollection_1_t8830_ICollection_1_Remove_m45732_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1983_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45732_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m45732_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8830_ICollection_1_Remove_m45732_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45732_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8830_MethodInfos[] =
{
	&ICollection_1_get_Count_m45726_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45727_MethodInfo,
	&ICollection_1_Add_m45728_MethodInfo,
	&ICollection_1_Clear_m45729_MethodInfo,
	&ICollection_1_Contains_m45730_MethodInfo,
	&ICollection_1_CopyTo_m45731_MethodInfo,
	&ICollection_1_Remove_m45732_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8832_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8830_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8832_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8830_0_0_0;
extern Il2CppType ICollection_1_t8830_1_0_0;
struct ICollection_1_t8830;
extern Il2CppGenericClass ICollection_1_t8830_GenericClass;
TypeInfo ICollection_1_t8830_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8830_MethodInfos/* methods */
	, ICollection_1_t8830_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8830_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8830_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8830_0_0_0/* byval_arg */
	, &ICollection_1_t8830_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8830_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.EventAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.EventAttributes>
extern Il2CppType IEnumerator_1_t6825_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45733_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.EventAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45733_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8832_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6825_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45733_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8832_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45733_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8832_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8832_0_0_0;
extern Il2CppType IEnumerable_1_t8832_1_0_0;
struct IEnumerable_1_t8832;
extern Il2CppGenericClass IEnumerable_1_t8832_GenericClass;
TypeInfo IEnumerable_1_t8832_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8832_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8832_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8832_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8832_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8832_0_0_0/* byval_arg */
	, &IEnumerable_1_t8832_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8832_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8831_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.EventAttributes>
extern MethodInfo IList_1_get_Item_m45734_MethodInfo;
extern MethodInfo IList_1_set_Item_m45735_MethodInfo;
static PropertyInfo IList_1_t8831____Item_PropertyInfo = 
{
	&IList_1_t8831_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45734_MethodInfo/* get */
	, &IList_1_set_Item_m45735_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8831_PropertyInfos[] =
{
	&IList_1_t8831____Item_PropertyInfo,
	NULL
};
extern Il2CppType EventAttributes_t1983_0_0_0;
static ParameterInfo IList_1_t8831_IList_1_IndexOf_m45736_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1983_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45736_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45736_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8831_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8831_IList_1_IndexOf_m45736_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45736_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EventAttributes_t1983_0_0_0;
static ParameterInfo IList_1_t8831_IList_1_Insert_m45737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1983_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45737_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45737_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8831_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8831_IList_1_Insert_m45737_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45737_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8831_IList_1_RemoveAt_m45738_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45738_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45738_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8831_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8831_IList_1_RemoveAt_m45738_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45738_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8831_IList_1_get_Item_m45734_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType EventAttributes_t1983_0_0_0;
extern void* RuntimeInvoker_EventAttributes_t1983_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45734_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45734_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8831_il2cpp_TypeInfo/* declaring_type */
	, &EventAttributes_t1983_0_0_0/* return_type */
	, RuntimeInvoker_EventAttributes_t1983_Int32_t73/* invoker_method */
	, IList_1_t8831_IList_1_get_Item_m45734_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45734_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType EventAttributes_t1983_0_0_0;
static ParameterInfo IList_1_t8831_IList_1_set_Item_m45735_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1983_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45735_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45735_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8831_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8831_IList_1_set_Item_m45735_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45735_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8831_MethodInfos[] =
{
	&IList_1_IndexOf_m45736_MethodInfo,
	&IList_1_Insert_m45737_MethodInfo,
	&IList_1_RemoveAt_m45738_MethodInfo,
	&IList_1_get_Item_m45734_MethodInfo,
	&IList_1_set_Item_m45735_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8831_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8830_il2cpp_TypeInfo,
	&IEnumerable_1_t8832_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8831_0_0_0;
extern Il2CppType IList_1_t8831_1_0_0;
struct IList_1_t8831;
extern Il2CppGenericClass IList_1_t8831_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8831_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8831_MethodInfos/* methods */
	, IList_1_t8831_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8831_il2cpp_TypeInfo/* element_class */
	, IList_1_t8831_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8831_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8831_0_0_0/* byval_arg */
	, &IList_1_t8831_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8831_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6827_il2cpp_TypeInfo;

// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.FieldAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.FieldAttributes>
extern MethodInfo IEnumerator_1_get_Current_m45739_MethodInfo;
static PropertyInfo IEnumerator_1_t6827____Current_PropertyInfo = 
{
	&IEnumerator_1_t6827_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45739_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6827_PropertyInfos[] =
{
	&IEnumerator_1_t6827____Current_PropertyInfo,
	NULL
};
extern Il2CppType FieldAttributes_t1985_0_0_0;
extern void* RuntimeInvoker_FieldAttributes_t1985 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45739_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.FieldAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45739_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6827_il2cpp_TypeInfo/* declaring_type */
	, &FieldAttributes_t1985_0_0_0/* return_type */
	, RuntimeInvoker_FieldAttributes_t1985/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45739_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6827_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45739_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6827_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6827_0_0_0;
extern Il2CppType IEnumerator_1_t6827_1_0_0;
struct IEnumerator_1_t6827;
extern Il2CppGenericClass IEnumerator_1_t6827_GenericClass;
TypeInfo IEnumerator_1_t6827_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6827_MethodInfos/* methods */
	, IEnumerator_1_t6827_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6827_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6827_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6827_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6827_0_0_0/* byval_arg */
	, &IEnumerator_1_t6827_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6827_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_650.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4814_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_650MethodDeclarations.h"

extern TypeInfo FieldAttributes_t1985_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26303_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFieldAttributes_t1985_m35233_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.FieldAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.FieldAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFieldAttributes_t1985_m35233 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26299_MethodInfo;
 void InternalEnumerator_1__ctor_m26299 (InternalEnumerator_1_t4814 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300 (InternalEnumerator_1_t4814 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26303(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26303_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FieldAttributes_t1985_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26301_MethodInfo;
 void InternalEnumerator_1_Dispose_m26301 (InternalEnumerator_1_t4814 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26302_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26302 (InternalEnumerator_1_t4814 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26303 (InternalEnumerator_1_t4814 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFieldAttributes_t1985_m35233(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFieldAttributes_t1985_m35233_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4814____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4814, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4814____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4814, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4814_FieldInfos[] =
{
	&InternalEnumerator_1_t4814____array_0_FieldInfo,
	&InternalEnumerator_1_t4814____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4814____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4814_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4814____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4814_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26303_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4814_PropertyInfos[] =
{
	&InternalEnumerator_1_t4814____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4814____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4814_InternalEnumerator_1__ctor_m26299_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26299_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26299_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26299/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4814_InternalEnumerator_1__ctor_m26299_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26299_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26301_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26301_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26301/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26301_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26302_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26302_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26302/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26302_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributes_t1985_0_0_0;
extern void* RuntimeInvoker_FieldAttributes_t1985 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26303_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26303_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26303/* method */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
	, &FieldAttributes_t1985_0_0_0/* return_type */
	, RuntimeInvoker_FieldAttributes_t1985/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26303_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4814_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26299_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300_MethodInfo,
	&InternalEnumerator_1_Dispose_m26301_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26302_MethodInfo,
	&InternalEnumerator_1_get_Current_m26303_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4814_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26300_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26302_MethodInfo,
	&InternalEnumerator_1_Dispose_m26301_MethodInfo,
	&InternalEnumerator_1_get_Current_m26303_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4814_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6827_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4814_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6827_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4814_0_0_0;
extern Il2CppType InternalEnumerator_1_t4814_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4814_GenericClass;
TypeInfo InternalEnumerator_1_t4814_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4814_MethodInfos/* methods */
	, InternalEnumerator_1_t4814_PropertyInfos/* properties */
	, InternalEnumerator_1_t4814_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4814_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4814_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4814_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4814_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4814_1_0_0/* this_arg */
	, InternalEnumerator_1_t4814_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4814_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4814)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8833_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>
extern MethodInfo ICollection_1_get_Count_m45740_MethodInfo;
static PropertyInfo ICollection_1_t8833____Count_PropertyInfo = 
{
	&ICollection_1_t8833_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45740_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45741_MethodInfo;
static PropertyInfo ICollection_1_t8833____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8833_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45741_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8833_PropertyInfos[] =
{
	&ICollection_1_t8833____Count_PropertyInfo,
	&ICollection_1_t8833____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45740_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m45740_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45740_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45741_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45741_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45741_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributes_t1985_0_0_0;
extern Il2CppType FieldAttributes_t1985_0_0_0;
static ParameterInfo ICollection_1_t8833_ICollection_1_Add_m45742_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1985_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45742_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Add(T)
MethodInfo ICollection_1_Add_m45742_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8833_ICollection_1_Add_m45742_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45742_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45743_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Clear()
MethodInfo ICollection_1_Clear_m45743_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45743_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributes_t1985_0_0_0;
static ParameterInfo ICollection_1_t8833_ICollection_1_Contains_m45744_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1985_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45744_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m45744_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8833_ICollection_1_Contains_m45744_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45744_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributesU5BU5D_t5078_0_0_0;
extern Il2CppType FieldAttributesU5BU5D_t5078_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8833_ICollection_1_CopyTo_m45745_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributesU5BU5D_t5078_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45745_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45745_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8833_ICollection_1_CopyTo_m45745_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45745_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributes_t1985_0_0_0;
static ParameterInfo ICollection_1_t8833_ICollection_1_Remove_m45746_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1985_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45746_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m45746_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8833_ICollection_1_Remove_m45746_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45746_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8833_MethodInfos[] =
{
	&ICollection_1_get_Count_m45740_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45741_MethodInfo,
	&ICollection_1_Add_m45742_MethodInfo,
	&ICollection_1_Clear_m45743_MethodInfo,
	&ICollection_1_Contains_m45744_MethodInfo,
	&ICollection_1_CopyTo_m45745_MethodInfo,
	&ICollection_1_Remove_m45746_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8835_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8833_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8835_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8833_0_0_0;
extern Il2CppType ICollection_1_t8833_1_0_0;
struct ICollection_1_t8833;
extern Il2CppGenericClass ICollection_1_t8833_GenericClass;
TypeInfo ICollection_1_t8833_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8833_MethodInfos/* methods */
	, ICollection_1_t8833_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8833_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8833_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8833_0_0_0/* byval_arg */
	, &ICollection_1_t8833_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8833_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.FieldAttributes>
extern Il2CppType IEnumerator_1_t6827_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45747_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45747_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8835_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6827_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45747_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8835_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45747_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8835_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8835_0_0_0;
extern Il2CppType IEnumerable_1_t8835_1_0_0;
struct IEnumerable_1_t8835;
extern Il2CppGenericClass IEnumerable_1_t8835_GenericClass;
TypeInfo IEnumerable_1_t8835_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8835_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8835_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8835_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8835_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8835_0_0_0/* byval_arg */
	, &IEnumerable_1_t8835_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8835_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8834_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>
extern MethodInfo IList_1_get_Item_m45748_MethodInfo;
extern MethodInfo IList_1_set_Item_m45749_MethodInfo;
static PropertyInfo IList_1_t8834____Item_PropertyInfo = 
{
	&IList_1_t8834_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45748_MethodInfo/* get */
	, &IList_1_set_Item_m45749_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8834_PropertyInfos[] =
{
	&IList_1_t8834____Item_PropertyInfo,
	NULL
};
extern Il2CppType FieldAttributes_t1985_0_0_0;
static ParameterInfo IList_1_t8834_IList_1_IndexOf_m45750_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1985_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45750_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45750_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8834_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8834_IList_1_IndexOf_m45750_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45750_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FieldAttributes_t1985_0_0_0;
static ParameterInfo IList_1_t8834_IList_1_Insert_m45751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1985_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45751_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45751_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8834_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8834_IList_1_Insert_m45751_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45751_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8834_IList_1_RemoveAt_m45752_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45752_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45752_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8834_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8834_IList_1_RemoveAt_m45752_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45752_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8834_IList_1_get_Item_m45748_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FieldAttributes_t1985_0_0_0;
extern void* RuntimeInvoker_FieldAttributes_t1985_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45748_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45748_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8834_il2cpp_TypeInfo/* declaring_type */
	, &FieldAttributes_t1985_0_0_0/* return_type */
	, RuntimeInvoker_FieldAttributes_t1985_Int32_t73/* invoker_method */
	, IList_1_t8834_IList_1_get_Item_m45748_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45748_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FieldAttributes_t1985_0_0_0;
static ParameterInfo IList_1_t8834_IList_1_set_Item_m45749_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1985_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45749_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45749_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8834_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8834_IList_1_set_Item_m45749_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45749_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8834_MethodInfos[] =
{
	&IList_1_IndexOf_m45750_MethodInfo,
	&IList_1_Insert_m45751_MethodInfo,
	&IList_1_RemoveAt_m45752_MethodInfo,
	&IList_1_get_Item_m45748_MethodInfo,
	&IList_1_set_Item_m45749_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8834_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8833_il2cpp_TypeInfo,
	&IEnumerable_1_t8835_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8834_0_0_0;
extern Il2CppType IList_1_t8834_1_0_0;
struct IList_1_t8834;
extern Il2CppGenericClass IList_1_t8834_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8834_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8834_MethodInfos/* methods */
	, IList_1_t8834_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8834_il2cpp_TypeInfo/* element_class */
	, IList_1_t8834_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8834_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8834_0_0_0/* byval_arg */
	, &IList_1_t8834_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8834_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6829_il2cpp_TypeInfo;

// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>
extern MethodInfo IEnumerator_1_get_Current_m45753_MethodInfo;
static PropertyInfo IEnumerator_1_t6829____Current_PropertyInfo = 
{
	&IEnumerator_1_t6829_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45753_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6829_PropertyInfos[] =
{
	&IEnumerator_1_t6829____Current_PropertyInfo,
	NULL
};
extern Il2CppType MemberTypes_t1171_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t1171 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45753_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45753_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6829_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t1171_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t1171/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45753_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6829_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45753_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6829_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6829_0_0_0;
extern Il2CppType IEnumerator_1_t6829_1_0_0;
struct IEnumerator_1_t6829;
extern Il2CppGenericClass IEnumerator_1_t6829_GenericClass;
TypeInfo IEnumerator_1_t6829_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6829_MethodInfos/* methods */
	, IEnumerator_1_t6829_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6829_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6829_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6829_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6829_0_0_0/* byval_arg */
	, &IEnumerator_1_t6829_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6829_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_651.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4815_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_651MethodDeclarations.h"

extern TypeInfo MemberTypes_t1171_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26308_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMemberTypes_t1171_m35244_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberTypes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberTypes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMemberTypes_t1171_m35244 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26304_MethodInfo;
 void InternalEnumerator_1__ctor_m26304 (InternalEnumerator_1_t4815 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305 (InternalEnumerator_1_t4815 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26308(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26308_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MemberTypes_t1171_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26306_MethodInfo;
 void InternalEnumerator_1_Dispose_m26306 (InternalEnumerator_1_t4815 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26307_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26307 (InternalEnumerator_1_t4815 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26308 (InternalEnumerator_1_t4815 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMemberTypes_t1171_m35244(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMemberTypes_t1171_m35244_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4815____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4815, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4815____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4815, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4815_FieldInfos[] =
{
	&InternalEnumerator_1_t4815____array_0_FieldInfo,
	&InternalEnumerator_1_t4815____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4815____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4815_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4815____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4815_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26308_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4815_PropertyInfos[] =
{
	&InternalEnumerator_1_t4815____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4815____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4815_InternalEnumerator_1__ctor_m26304_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26304_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26304_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26304/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4815_InternalEnumerator_1__ctor_m26304_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26304_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26306_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26306_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26306/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26306_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26307_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26307_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26307/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26307_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypes_t1171_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t1171 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26308_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26308_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26308/* method */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t1171_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t1171/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26308_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4815_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26304_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305_MethodInfo,
	&InternalEnumerator_1_Dispose_m26306_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26307_MethodInfo,
	&InternalEnumerator_1_get_Current_m26308_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4815_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26305_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26307_MethodInfo,
	&InternalEnumerator_1_Dispose_m26306_MethodInfo,
	&InternalEnumerator_1_get_Current_m26308_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4815_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6829_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4815_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6829_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4815_0_0_0;
extern Il2CppType InternalEnumerator_1_t4815_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4815_GenericClass;
TypeInfo InternalEnumerator_1_t4815_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4815_MethodInfos/* methods */
	, InternalEnumerator_1_t4815_PropertyInfos/* properties */
	, InternalEnumerator_1_t4815_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4815_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4815_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4815_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4815_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4815_1_0_0/* this_arg */
	, InternalEnumerator_1_t4815_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4815_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4815)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8836_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>
extern MethodInfo ICollection_1_get_Count_m45754_MethodInfo;
static PropertyInfo ICollection_1_t8836____Count_PropertyInfo = 
{
	&ICollection_1_t8836_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45754_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45755_MethodInfo;
static PropertyInfo ICollection_1_t8836____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8836_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45755_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8836_PropertyInfos[] =
{
	&ICollection_1_t8836____Count_PropertyInfo,
	&ICollection_1_t8836____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45754_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_Count()
MethodInfo ICollection_1_get_Count_m45754_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45754_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45755_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45755_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45755_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypes_t1171_0_0_0;
extern Il2CppType MemberTypes_t1171_0_0_0;
static ParameterInfo ICollection_1_t8836_ICollection_1_Add_m45756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1171_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45756_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Add(T)
MethodInfo ICollection_1_Add_m45756_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8836_ICollection_1_Add_m45756_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45756_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45757_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Clear()
MethodInfo ICollection_1_Clear_m45757_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45757_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypes_t1171_0_0_0;
static ParameterInfo ICollection_1_t8836_ICollection_1_Contains_m45758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1171_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45758_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Contains(T)
MethodInfo ICollection_1_Contains_m45758_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8836_ICollection_1_Contains_m45758_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45758_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypesU5BU5D_t5079_0_0_0;
extern Il2CppType MemberTypesU5BU5D_t5079_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8836_ICollection_1_CopyTo_m45759_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypesU5BU5D_t5079_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45759_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45759_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8836_ICollection_1_CopyTo_m45759_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45759_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypes_t1171_0_0_0;
static ParameterInfo ICollection_1_t8836_ICollection_1_Remove_m45760_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1171_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45760_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Remove(T)
MethodInfo ICollection_1_Remove_m45760_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8836_ICollection_1_Remove_m45760_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45760_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8836_MethodInfos[] =
{
	&ICollection_1_get_Count_m45754_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45755_MethodInfo,
	&ICollection_1_Add_m45756_MethodInfo,
	&ICollection_1_Clear_m45757_MethodInfo,
	&ICollection_1_Contains_m45758_MethodInfo,
	&ICollection_1_CopyTo_m45759_MethodInfo,
	&ICollection_1_Remove_m45760_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8838_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8836_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8838_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8836_0_0_0;
extern Il2CppType ICollection_1_t8836_1_0_0;
struct ICollection_1_t8836;
extern Il2CppGenericClass ICollection_1_t8836_GenericClass;
TypeInfo ICollection_1_t8836_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8836_MethodInfos/* methods */
	, ICollection_1_t8836_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8836_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8836_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8836_0_0_0/* byval_arg */
	, &ICollection_1_t8836_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8836_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>
extern Il2CppType IEnumerator_1_t6829_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45761_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45761_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8838_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6829_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45761_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8838_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45761_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8838_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8838_0_0_0;
extern Il2CppType IEnumerable_1_t8838_1_0_0;
struct IEnumerable_1_t8838;
extern Il2CppGenericClass IEnumerable_1_t8838_GenericClass;
TypeInfo IEnumerable_1_t8838_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8838_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8838_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8838_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8838_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8838_0_0_0/* byval_arg */
	, &IEnumerable_1_t8838_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8838_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8837_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MemberTypes>
extern MethodInfo IList_1_get_Item_m45762_MethodInfo;
extern MethodInfo IList_1_set_Item_m45763_MethodInfo;
static PropertyInfo IList_1_t8837____Item_PropertyInfo = 
{
	&IList_1_t8837_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45762_MethodInfo/* get */
	, &IList_1_set_Item_m45763_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8837_PropertyInfos[] =
{
	&IList_1_t8837____Item_PropertyInfo,
	NULL
};
extern Il2CppType MemberTypes_t1171_0_0_0;
static ParameterInfo IList_1_t8837_IList_1_IndexOf_m45764_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1171_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45764_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45764_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8837_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8837_IList_1_IndexOf_m45764_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45764_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MemberTypes_t1171_0_0_0;
static ParameterInfo IList_1_t8837_IList_1_Insert_m45765_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1171_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45765_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45765_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8837_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8837_IList_1_Insert_m45765_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45765_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8837_IList_1_RemoveAt_m45766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45766_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45766_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8837_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8837_IList_1_RemoveAt_m45766_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45766_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8837_IList_1_get_Item_m45762_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MemberTypes_t1171_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t1171_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45762_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45762_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8837_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t1171_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t1171_Int32_t73/* invoker_method */
	, IList_1_t8837_IList_1_get_Item_m45762_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45762_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MemberTypes_t1171_0_0_0;
static ParameterInfo IList_1_t8837_IList_1_set_Item_m45763_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1171_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45763_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45763_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8837_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8837_IList_1_set_Item_m45763_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45763_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8837_MethodInfos[] =
{
	&IList_1_IndexOf_m45764_MethodInfo,
	&IList_1_Insert_m45765_MethodInfo,
	&IList_1_RemoveAt_m45766_MethodInfo,
	&IList_1_get_Item_m45762_MethodInfo,
	&IList_1_set_Item_m45763_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8837_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8836_il2cpp_TypeInfo,
	&IEnumerable_1_t8838_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8837_0_0_0;
extern Il2CppType IList_1_t8837_1_0_0;
struct IList_1_t8837;
extern Il2CppGenericClass IList_1_t8837_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8837_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8837_MethodInfos/* methods */
	, IList_1_t8837_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8837_il2cpp_TypeInfo/* element_class */
	, IList_1_t8837_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8837_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8837_0_0_0/* byval_arg */
	, &IList_1_t8837_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8837_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6831_il2cpp_TypeInfo;

// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>
extern MethodInfo IEnumerator_1_get_Current_m45767_MethodInfo;
static PropertyInfo IEnumerator_1_t6831____Current_PropertyInfo = 
{
	&IEnumerator_1_t6831_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45767_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6831_PropertyInfos[] =
{
	&IEnumerator_1_t6831____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodAttributes_t1987_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t1987 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45767_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45767_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6831_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t1987_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t1987/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45767_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6831_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45767_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6831_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6831_0_0_0;
extern Il2CppType IEnumerator_1_t6831_1_0_0;
struct IEnumerator_1_t6831;
extern Il2CppGenericClass IEnumerator_1_t6831_GenericClass;
TypeInfo IEnumerator_1_t6831_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6831_MethodInfos/* methods */
	, IEnumerator_1_t6831_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6831_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6831_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6831_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6831_0_0_0/* byval_arg */
	, &IEnumerator_1_t6831_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6831_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_652.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4816_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_652MethodDeclarations.h"

extern TypeInfo MethodAttributes_t1987_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26313_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodAttributes_t1987_m35255_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMethodAttributes_t1987_m35255 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26309_MethodInfo;
 void InternalEnumerator_1__ctor_m26309 (InternalEnumerator_1_t4816 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310 (InternalEnumerator_1_t4816 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26313(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26313_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MethodAttributes_t1987_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26311_MethodInfo;
 void InternalEnumerator_1_Dispose_m26311 (InternalEnumerator_1_t4816 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26312_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26312 (InternalEnumerator_1_t4816 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26313 (InternalEnumerator_1_t4816 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMethodAttributes_t1987_m35255(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMethodAttributes_t1987_m35255_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4816____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4816, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4816____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4816, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4816_FieldInfos[] =
{
	&InternalEnumerator_1_t4816____array_0_FieldInfo,
	&InternalEnumerator_1_t4816____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4816____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4816_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4816____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4816_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26313_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4816_PropertyInfos[] =
{
	&InternalEnumerator_1_t4816____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4816____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4816_InternalEnumerator_1__ctor_m26309_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26309_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26309_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26309/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4816_InternalEnumerator_1__ctor_m26309_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26309_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26311_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26311_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26311/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26311_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26312_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26312_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26312/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26312_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributes_t1987_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t1987 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26313_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26313_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26313/* method */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t1987_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t1987/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26313_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4816_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26309_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310_MethodInfo,
	&InternalEnumerator_1_Dispose_m26311_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26312_MethodInfo,
	&InternalEnumerator_1_get_Current_m26313_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4816_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26310_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26312_MethodInfo,
	&InternalEnumerator_1_Dispose_m26311_MethodInfo,
	&InternalEnumerator_1_get_Current_m26313_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4816_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6831_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4816_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6831_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4816_0_0_0;
extern Il2CppType InternalEnumerator_1_t4816_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4816_GenericClass;
TypeInfo InternalEnumerator_1_t4816_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4816_MethodInfos/* methods */
	, InternalEnumerator_1_t4816_PropertyInfos/* properties */
	, InternalEnumerator_1_t4816_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4816_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4816_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4816_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4816_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4816_1_0_0/* this_arg */
	, InternalEnumerator_1_t4816_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4816_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4816)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8839_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>
extern MethodInfo ICollection_1_get_Count_m45768_MethodInfo;
static PropertyInfo ICollection_1_t8839____Count_PropertyInfo = 
{
	&ICollection_1_t8839_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45768_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45769_MethodInfo;
static PropertyInfo ICollection_1_t8839____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8839_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45769_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8839_PropertyInfos[] =
{
	&ICollection_1_t8839____Count_PropertyInfo,
	&ICollection_1_t8839____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45768_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m45768_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45768_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45769_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45769_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45769_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributes_t1987_0_0_0;
extern Il2CppType MethodAttributes_t1987_0_0_0;
static ParameterInfo ICollection_1_t8839_ICollection_1_Add_m45770_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1987_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45770_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Add(T)
MethodInfo ICollection_1_Add_m45770_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8839_ICollection_1_Add_m45770_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45770_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45771_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Clear()
MethodInfo ICollection_1_Clear_m45771_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45771_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributes_t1987_0_0_0;
static ParameterInfo ICollection_1_t8839_ICollection_1_Contains_m45772_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1987_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45772_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m45772_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8839_ICollection_1_Contains_m45772_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45772_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributesU5BU5D_t5080_0_0_0;
extern Il2CppType MethodAttributesU5BU5D_t5080_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8839_ICollection_1_CopyTo_m45773_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributesU5BU5D_t5080_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45773_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45773_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8839_ICollection_1_CopyTo_m45773_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45773_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributes_t1987_0_0_0;
static ParameterInfo ICollection_1_t8839_ICollection_1_Remove_m45774_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1987_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45774_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m45774_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8839_ICollection_1_Remove_m45774_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45774_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8839_MethodInfos[] =
{
	&ICollection_1_get_Count_m45768_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45769_MethodInfo,
	&ICollection_1_Add_m45770_MethodInfo,
	&ICollection_1_Clear_m45771_MethodInfo,
	&ICollection_1_Contains_m45772_MethodInfo,
	&ICollection_1_CopyTo_m45773_MethodInfo,
	&ICollection_1_Remove_m45774_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8841_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8839_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8841_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8839_0_0_0;
extern Il2CppType ICollection_1_t8839_1_0_0;
struct ICollection_1_t8839;
extern Il2CppGenericClass ICollection_1_t8839_GenericClass;
TypeInfo ICollection_1_t8839_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8839_MethodInfos/* methods */
	, ICollection_1_t8839_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8839_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8839_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8839_0_0_0/* byval_arg */
	, &ICollection_1_t8839_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8839_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>
extern Il2CppType IEnumerator_1_t6831_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45775_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45775_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8841_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6831_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45775_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8841_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45775_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8841_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8841_0_0_0;
extern Il2CppType IEnumerable_1_t8841_1_0_0;
struct IEnumerable_1_t8841;
extern Il2CppGenericClass IEnumerable_1_t8841_GenericClass;
TypeInfo IEnumerable_1_t8841_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8841_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8841_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8841_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8841_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8841_0_0_0/* byval_arg */
	, &IEnumerable_1_t8841_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8841_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8840_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>
extern MethodInfo IList_1_get_Item_m45776_MethodInfo;
extern MethodInfo IList_1_set_Item_m45777_MethodInfo;
static PropertyInfo IList_1_t8840____Item_PropertyInfo = 
{
	&IList_1_t8840_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45776_MethodInfo/* get */
	, &IList_1_set_Item_m45777_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8840_PropertyInfos[] =
{
	&IList_1_t8840____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodAttributes_t1987_0_0_0;
static ParameterInfo IList_1_t8840_IList_1_IndexOf_m45778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1987_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45778_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45778_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8840_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8840_IList_1_IndexOf_m45778_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45778_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MethodAttributes_t1987_0_0_0;
static ParameterInfo IList_1_t8840_IList_1_Insert_m45779_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1987_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45779_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45779_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8840_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8840_IList_1_Insert_m45779_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45779_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8840_IList_1_RemoveAt_m45780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45780_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45780_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8840_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8840_IList_1_RemoveAt_m45780_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45780_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8840_IList_1_get_Item_m45776_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MethodAttributes_t1987_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t1987_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45776_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45776_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8840_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t1987_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t1987_Int32_t73/* invoker_method */
	, IList_1_t8840_IList_1_get_Item_m45776_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45776_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MethodAttributes_t1987_0_0_0;
static ParameterInfo IList_1_t8840_IList_1_set_Item_m45777_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1987_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45777_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45777_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8840_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8840_IList_1_set_Item_m45777_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45777_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8840_MethodInfos[] =
{
	&IList_1_IndexOf_m45778_MethodInfo,
	&IList_1_Insert_m45779_MethodInfo,
	&IList_1_RemoveAt_m45780_MethodInfo,
	&IList_1_get_Item_m45776_MethodInfo,
	&IList_1_set_Item_m45777_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8840_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8839_il2cpp_TypeInfo,
	&IEnumerable_1_t8841_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8840_0_0_0;
extern Il2CppType IList_1_t8840_1_0_0;
struct IList_1_t8840;
extern Il2CppGenericClass IList_1_t8840_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8840_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8840_MethodInfos/* methods */
	, IList_1_t8840_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8840_il2cpp_TypeInfo/* element_class */
	, IList_1_t8840_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8840_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8840_0_0_0/* byval_arg */
	, &IList_1_t8840_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8840_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6833_il2cpp_TypeInfo;

// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>
extern MethodInfo IEnumerator_1_get_Current_m45781_MethodInfo;
static PropertyInfo IEnumerator_1_t6833____Current_PropertyInfo = 
{
	&IEnumerator_1_t6833_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45781_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6833_PropertyInfos[] =
{
	&IEnumerator_1_t6833____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t1988 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45781_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45781_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6833_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t1988_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t1988/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45781_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6833_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45781_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6833_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6833_0_0_0;
extern Il2CppType IEnumerator_1_t6833_1_0_0;
struct IEnumerator_1_t6833;
extern Il2CppGenericClass IEnumerator_1_t6833_GenericClass;
TypeInfo IEnumerator_1_t6833_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6833_MethodInfos/* methods */
	, IEnumerator_1_t6833_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6833_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6833_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6833_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6833_0_0_0/* byval_arg */
	, &IEnumerator_1_t6833_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6833_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_653.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4817_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_653MethodDeclarations.h"

extern TypeInfo MethodImplAttributes_t1988_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26318_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodImplAttributes_t1988_m35266_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodImplAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodImplAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMethodImplAttributes_t1988_m35266 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26314_MethodInfo;
 void InternalEnumerator_1__ctor_m26314 (InternalEnumerator_1_t4817 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315 (InternalEnumerator_1_t4817 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26318(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26318_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MethodImplAttributes_t1988_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26316_MethodInfo;
 void InternalEnumerator_1_Dispose_m26316 (InternalEnumerator_1_t4817 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26317_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26317 (InternalEnumerator_1_t4817 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26318 (InternalEnumerator_1_t4817 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMethodImplAttributes_t1988_m35266(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMethodImplAttributes_t1988_m35266_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4817____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4817, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4817____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4817, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4817_FieldInfos[] =
{
	&InternalEnumerator_1_t4817____array_0_FieldInfo,
	&InternalEnumerator_1_t4817____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4817____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4817_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4817____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4817_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26318_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4817_PropertyInfos[] =
{
	&InternalEnumerator_1_t4817____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4817____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4817_InternalEnumerator_1__ctor_m26314_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26314_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26314_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26314/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4817_InternalEnumerator_1__ctor_m26314_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26314_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26316_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26316_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26316/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26316_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26317_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26317_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26317/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26317_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t1988 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26318_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26318_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26318/* method */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t1988_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t1988/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26318_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4817_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26314_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315_MethodInfo,
	&InternalEnumerator_1_Dispose_m26316_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26317_MethodInfo,
	&InternalEnumerator_1_get_Current_m26318_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4817_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26315_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26317_MethodInfo,
	&InternalEnumerator_1_Dispose_m26316_MethodInfo,
	&InternalEnumerator_1_get_Current_m26318_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4817_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6833_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4817_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6833_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4817_0_0_0;
extern Il2CppType InternalEnumerator_1_t4817_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4817_GenericClass;
TypeInfo InternalEnumerator_1_t4817_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4817_MethodInfos/* methods */
	, InternalEnumerator_1_t4817_PropertyInfos/* properties */
	, InternalEnumerator_1_t4817_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4817_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4817_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4817_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4817_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4817_1_0_0/* this_arg */
	, InternalEnumerator_1_t4817_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4817_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4817)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8842_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>
extern MethodInfo ICollection_1_get_Count_m45782_MethodInfo;
static PropertyInfo ICollection_1_t8842____Count_PropertyInfo = 
{
	&ICollection_1_t8842_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45782_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45783_MethodInfo;
static PropertyInfo ICollection_1_t8842____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8842_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45783_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8842_PropertyInfos[] =
{
	&ICollection_1_t8842____Count_PropertyInfo,
	&ICollection_1_t8842____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45782_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m45782_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45782_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45783_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45783_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45783_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
static ParameterInfo ICollection_1_t8842_ICollection_1_Add_m45784_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1988_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45784_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Add(T)
MethodInfo ICollection_1_Add_m45784_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8842_ICollection_1_Add_m45784_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45784_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45785_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Clear()
MethodInfo ICollection_1_Clear_m45785_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45785_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
static ParameterInfo ICollection_1_t8842_ICollection_1_Contains_m45786_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1988_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45786_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m45786_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8842_ICollection_1_Contains_m45786_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45786_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributesU5BU5D_t5081_0_0_0;
extern Il2CppType MethodImplAttributesU5BU5D_t5081_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8842_ICollection_1_CopyTo_m45787_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributesU5BU5D_t5081_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45787_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45787_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8842_ICollection_1_CopyTo_m45787_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45787_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
static ParameterInfo ICollection_1_t8842_ICollection_1_Remove_m45788_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1988_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45788_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m45788_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8842_ICollection_1_Remove_m45788_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45788_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8842_MethodInfos[] =
{
	&ICollection_1_get_Count_m45782_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45783_MethodInfo,
	&ICollection_1_Add_m45784_MethodInfo,
	&ICollection_1_Clear_m45785_MethodInfo,
	&ICollection_1_Contains_m45786_MethodInfo,
	&ICollection_1_CopyTo_m45787_MethodInfo,
	&ICollection_1_Remove_m45788_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8844_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8842_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8844_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8842_0_0_0;
extern Il2CppType ICollection_1_t8842_1_0_0;
struct ICollection_1_t8842;
extern Il2CppGenericClass ICollection_1_t8842_GenericClass;
TypeInfo ICollection_1_t8842_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8842_MethodInfos/* methods */
	, ICollection_1_t8842_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8842_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8842_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8842_0_0_0/* byval_arg */
	, &ICollection_1_t8842_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8842_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>
extern Il2CppType IEnumerator_1_t6833_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45789_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45789_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8844_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6833_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45789_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8844_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45789_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8844_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8844_0_0_0;
extern Il2CppType IEnumerable_1_t8844_1_0_0;
struct IEnumerable_1_t8844;
extern Il2CppGenericClass IEnumerable_1_t8844_GenericClass;
TypeInfo IEnumerable_1_t8844_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8844_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8844_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8844_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8844_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8844_0_0_0/* byval_arg */
	, &IEnumerable_1_t8844_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8844_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8843_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>
extern MethodInfo IList_1_get_Item_m45790_MethodInfo;
extern MethodInfo IList_1_set_Item_m45791_MethodInfo;
static PropertyInfo IList_1_t8843____Item_PropertyInfo = 
{
	&IList_1_t8843_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45790_MethodInfo/* get */
	, &IList_1_set_Item_m45791_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8843_PropertyInfos[] =
{
	&IList_1_t8843____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
static ParameterInfo IList_1_t8843_IList_1_IndexOf_m45792_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1988_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45792_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45792_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8843_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8843_IList_1_IndexOf_m45792_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45792_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
static ParameterInfo IList_1_t8843_IList_1_Insert_m45793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1988_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45793_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45793_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8843_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8843_IList_1_Insert_m45793_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45793_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8843_IList_1_RemoveAt_m45794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45794_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45794_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8843_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8843_IList_1_RemoveAt_m45794_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45794_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8843_IList_1_get_Item_m45790_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t1988_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45790_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45790_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8843_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t1988_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t1988_Int32_t73/* invoker_method */
	, IList_1_t8843_IList_1_get_Item_m45790_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45790_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MethodImplAttributes_t1988_0_0_0;
static ParameterInfo IList_1_t8843_IList_1_set_Item_m45791_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1988_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45791_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45791_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8843_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8843_IList_1_set_Item_m45791_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45791_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8843_MethodInfos[] =
{
	&IList_1_IndexOf_m45792_MethodInfo,
	&IList_1_Insert_m45793_MethodInfo,
	&IList_1_RemoveAt_m45794_MethodInfo,
	&IList_1_get_Item_m45790_MethodInfo,
	&IList_1_set_Item_m45791_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8843_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8842_il2cpp_TypeInfo,
	&IEnumerable_1_t8844_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8843_0_0_0;
extern Il2CppType IList_1_t8843_1_0_0;
struct IList_1_t8843;
extern Il2CppGenericClass IList_1_t8843_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8843_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8843_MethodInfos/* methods */
	, IList_1_t8843_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8843_il2cpp_TypeInfo/* element_class */
	, IList_1_t8843_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8843_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8843_0_0_0/* byval_arg */
	, &IList_1_t8843_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8843_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6835_il2cpp_TypeInfo;

// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>
extern MethodInfo IEnumerator_1_get_Current_m45795_MethodInfo;
static PropertyInfo IEnumerator_1_t6835____Current_PropertyInfo = 
{
	&IEnumerator_1_t6835_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45795_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6835_PropertyInfos[] =
{
	&IEnumerator_1_t6835____Current_PropertyInfo,
	NULL
};
extern Il2CppType PInfo_t2001_0_0_0;
extern void* RuntimeInvoker_PInfo_t2001 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45795_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45795_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6835_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t2001_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t2001/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45795_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6835_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45795_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6835_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6835_0_0_0;
extern Il2CppType IEnumerator_1_t6835_1_0_0;
struct IEnumerator_1_t6835;
extern Il2CppGenericClass IEnumerator_1_t6835_GenericClass;
TypeInfo IEnumerator_1_t6835_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6835_MethodInfos/* methods */
	, IEnumerator_1_t6835_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6835_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6835_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6835_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6835_0_0_0/* byval_arg */
	, &IEnumerator_1_t6835_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6835_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.PInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_654.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4818_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_654MethodDeclarations.h"

extern TypeInfo PInfo_t2001_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26323_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPInfo_t2001_m35277_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PInfo>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPInfo_t2001_m35277 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26319_MethodInfo;
 void InternalEnumerator_1__ctor_m26319 (InternalEnumerator_1_t4818 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PInfo>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320 (InternalEnumerator_1_t4818 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26323(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26323_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PInfo_t2001_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26321_MethodInfo;
 void InternalEnumerator_1_Dispose_m26321 (InternalEnumerator_1_t4818 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PInfo>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26322_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26322 (InternalEnumerator_1_t4818 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.PInfo>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26323 (InternalEnumerator_1_t4818 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPInfo_t2001_m35277(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPInfo_t2001_m35277_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4818____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4818, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4818____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4818, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4818_FieldInfos[] =
{
	&InternalEnumerator_1_t4818____array_0_FieldInfo,
	&InternalEnumerator_1_t4818____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4818____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4818_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4818____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4818_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26323_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4818_PropertyInfos[] =
{
	&InternalEnumerator_1_t4818____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4818____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4818_InternalEnumerator_1__ctor_m26319_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26319_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26319_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26319/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4818_InternalEnumerator_1__ctor_m26319_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m26319_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26321_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26321_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26321/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26321_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26322_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26322_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26322/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26322_GenericMethod/* genericMethod */

};
extern Il2CppType PInfo_t2001_0_0_0;
extern void* RuntimeInvoker_PInfo_t2001 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26323_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.PInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26323_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26323/* method */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t2001_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t2001/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m26323_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4818_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26319_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320_MethodInfo,
	&InternalEnumerator_1_Dispose_m26321_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26322_MethodInfo,
	&InternalEnumerator_1_get_Current_m26323_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4818_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26320_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26322_MethodInfo,
	&InternalEnumerator_1_Dispose_m26321_MethodInfo,
	&InternalEnumerator_1_get_Current_m26323_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4818_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6835_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4818_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6835_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4818_0_0_0;
extern Il2CppType InternalEnumerator_1_t4818_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4818_GenericClass;
TypeInfo InternalEnumerator_1_t4818_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4818_MethodInfos/* methods */
	, InternalEnumerator_1_t4818_PropertyInfos/* properties */
	, InternalEnumerator_1_t4818_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4818_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4818_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4818_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4818_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4818_1_0_0/* this_arg */
	, InternalEnumerator_1_t4818_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4818_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4818)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8845_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PInfo>
extern MethodInfo ICollection_1_get_Count_m45796_MethodInfo;
static PropertyInfo ICollection_1_t8845____Count_PropertyInfo = 
{
	&ICollection_1_t8845_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45796_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45797_MethodInfo;
static PropertyInfo ICollection_1_t8845____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8845_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45797_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8845_PropertyInfos[] =
{
	&ICollection_1_t8845____Count_PropertyInfo,
	&ICollection_1_t8845____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45796_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m45796_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45796_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45797_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45797_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45797_GenericMethod/* genericMethod */

};
extern Il2CppType PInfo_t2001_0_0_0;
extern Il2CppType PInfo_t2001_0_0_0;
static ParameterInfo ICollection_1_t8845_ICollection_1_Add_m45798_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t2001_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45798_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Add(T)
MethodInfo ICollection_1_Add_m45798_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8845_ICollection_1_Add_m45798_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45798_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45799_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Clear()
MethodInfo ICollection_1_Clear_m45799_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45799_GenericMethod/* genericMethod */

};
extern Il2CppType PInfo_t2001_0_0_0;
static ParameterInfo ICollection_1_t8845_ICollection_1_Contains_m45800_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t2001_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45800_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m45800_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8845_ICollection_1_Contains_m45800_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45800_GenericMethod/* genericMethod */

};
extern Il2CppType PInfoU5BU5D_t5082_0_0_0;
extern Il2CppType PInfoU5BU5D_t5082_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8845_ICollection_1_CopyTo_m45801_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PInfoU5BU5D_t5082_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45801_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45801_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8845_ICollection_1_CopyTo_m45801_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45801_GenericMethod/* genericMethod */

};
extern Il2CppType PInfo_t2001_0_0_0;
static ParameterInfo ICollection_1_t8845_ICollection_1_Remove_m45802_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t2001_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45802_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m45802_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8845_ICollection_1_Remove_m45802_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45802_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8845_MethodInfos[] =
{
	&ICollection_1_get_Count_m45796_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45797_MethodInfo,
	&ICollection_1_Add_m45798_MethodInfo,
	&ICollection_1_Clear_m45799_MethodInfo,
	&ICollection_1_Contains_m45800_MethodInfo,
	&ICollection_1_CopyTo_m45801_MethodInfo,
	&ICollection_1_Remove_m45802_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8847_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8845_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8847_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8845_0_0_0;
extern Il2CppType ICollection_1_t8845_1_0_0;
struct ICollection_1_t8845;
extern Il2CppGenericClass ICollection_1_t8845_GenericClass;
TypeInfo ICollection_1_t8845_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8845_MethodInfos/* methods */
	, ICollection_1_t8845_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8845_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8845_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8845_0_0_0/* byval_arg */
	, &ICollection_1_t8845_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8845_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>
extern Il2CppType IEnumerator_1_t6835_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45803_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45803_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8847_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6835_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45803_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8847_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45803_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8847_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8847_0_0_0;
extern Il2CppType IEnumerable_1_t8847_1_0_0;
struct IEnumerable_1_t8847;
extern Il2CppGenericClass IEnumerable_1_t8847_GenericClass;
TypeInfo IEnumerable_1_t8847_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8847_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8847_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8847_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8847_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8847_0_0_0/* byval_arg */
	, &IEnumerable_1_t8847_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8847_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8846_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.PInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PInfo>
extern MethodInfo IList_1_get_Item_m45804_MethodInfo;
extern MethodInfo IList_1_set_Item_m45805_MethodInfo;
static PropertyInfo IList_1_t8846____Item_PropertyInfo = 
{
	&IList_1_t8846_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45804_MethodInfo/* get */
	, &IList_1_set_Item_m45805_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8846_PropertyInfos[] =
{
	&IList_1_t8846____Item_PropertyInfo,
	NULL
};
extern Il2CppType PInfo_t2001_0_0_0;
static ParameterInfo IList_1_t8846_IList_1_IndexOf_m45806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t2001_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45806_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45806_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8846_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8846_IList_1_IndexOf_m45806_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45806_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType PInfo_t2001_0_0_0;
static ParameterInfo IList_1_t8846_IList_1_Insert_m45807_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PInfo_t2001_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45807_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45807_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8846_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8846_IList_1_Insert_m45807_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45807_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8846_IList_1_RemoveAt_m45808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45808_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45808_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8846_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8846_IList_1_RemoveAt_m45808_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45808_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8846_IList_1_get_Item_m45804_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType PInfo_t2001_0_0_0;
extern void* RuntimeInvoker_PInfo_t2001_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45804_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.PInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45804_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8846_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t2001_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t2001_Int32_t73/* invoker_method */
	, IList_1_t8846_IList_1_get_Item_m45804_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45804_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType PInfo_t2001_0_0_0;
static ParameterInfo IList_1_t8846_IList_1_set_Item_m45805_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PInfo_t2001_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45805_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45805_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8846_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8846_IList_1_set_Item_m45805_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45805_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8846_MethodInfos[] =
{
	&IList_1_IndexOf_m45806_MethodInfo,
	&IList_1_Insert_m45807_MethodInfo,
	&IList_1_RemoveAt_m45808_MethodInfo,
	&IList_1_get_Item_m45804_MethodInfo,
	&IList_1_set_Item_m45805_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8846_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8845_il2cpp_TypeInfo,
	&IEnumerable_1_t8847_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8846_0_0_0;
extern Il2CppType IList_1_t8846_1_0_0;
struct IList_1_t8846;
extern Il2CppGenericClass IList_1_t8846_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8846_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8846_MethodInfos/* methods */
	, IList_1_t8846_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8846_il2cpp_TypeInfo/* element_class */
	, IList_1_t8846_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8846_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8846_0_0_0/* byval_arg */
	, &IList_1_t8846_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8846_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Getter_2_t4819_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_genMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Getter_2__ctor_m26324_MethodInfo;
 void Getter_2__ctor_m26324_gshared (Getter_2_t4819 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern MethodInfo Getter_2_Invoke_m26325_MethodInfo;
 Object_t * Getter_2_Invoke_m26325_gshared (Getter_2_t4819 * __this, Object_t * ____this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Getter_2_Invoke_m26325((Getter_2_t4819 *)__this->___prev_9,____this, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern MethodInfo Getter_2_BeginInvoke_m26326_MethodInfo;
 Object_t * Getter_2_BeginInvoke_m26326_gshared (Getter_2_t4819 * __this, Object_t * ____this, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern MethodInfo Getter_2_EndInvoke_m26327_MethodInfo;
 Object_t * Getter_2_EndInvoke_m26327_gshared (Getter_2_t4819 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo Getter_2_t4819_Getter_2__ctor_m26324_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Getter_2__ctor_m26324_GenericMethod;
// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo Getter_2__ctor_m26324_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Getter_2__ctor_m26324_gshared/* method */
	, &Getter_2_t4819_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, Getter_2_t4819_Getter_2__ctor_m26324_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Getter_2__ctor_m26324_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Getter_2_t4819_Getter_2_Invoke_m26325_ParameterInfos[] = 
{
	{"_this", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Getter_2_Invoke_m26325_GenericMethod;
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
MethodInfo Getter_2_Invoke_m26325_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Getter_2_Invoke_m26325_gshared/* method */
	, &Getter_2_t4819_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Getter_2_t4819_Getter_2_Invoke_m26325_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Getter_2_Invoke_m26325_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Getter_2_t4819_Getter_2_BeginInvoke_m26326_ParameterInfos[] = 
{
	{"_this", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Getter_2_BeginInvoke_m26326_GenericMethod;
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
MethodInfo Getter_2_BeginInvoke_m26326_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Getter_2_BeginInvoke_m26326_gshared/* method */
	, &Getter_2_t4819_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Getter_2_t4819_Getter_2_BeginInvoke_m26326_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Getter_2_BeginInvoke_m26326_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo Getter_2_t4819_Getter_2_EndInvoke_m26327_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Getter_2_EndInvoke_m26327_GenericMethod;
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
MethodInfo Getter_2_EndInvoke_m26327_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Getter_2_EndInvoke_m26327_gshared/* method */
	, &Getter_2_t4819_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Getter_2_t4819_Getter_2_EndInvoke_m26327_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Getter_2_EndInvoke_m26327_GenericMethod/* genericMethod */

};
static MethodInfo* Getter_2_t4819_MethodInfos[] =
{
	&Getter_2__ctor_m26324_MethodInfo,
	&Getter_2_Invoke_m26325_MethodInfo,
	&Getter_2_BeginInvoke_m26326_MethodInfo,
	&Getter_2_EndInvoke_m26327_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m3646_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m3647_MethodInfo;
extern MethodInfo Object_ToString_m498_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m3648_MethodInfo;
extern MethodInfo Delegate_Clone_m3649_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m3650_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m3651_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m3652_MethodInfo;
static MethodInfo* Getter_2_t4819_VTable[] =
{
	&MulticastDelegate_Equals_m3646_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&MulticastDelegate_GetHashCode_m3647_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&Delegate_Clone_m3649_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3650_MethodInfo,
	&MulticastDelegate_CombineImpl_m3651_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3652_MethodInfo,
	&Getter_2_Invoke_m26325_MethodInfo,
	&Getter_2_BeginInvoke_m26326_MethodInfo,
	&Getter_2_EndInvoke_m26327_MethodInfo,
};
extern TypeInfo ICloneable_t755_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t305_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Getter_2_t4819_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Getter_2_t4819_0_0_0;
extern Il2CppType Getter_2_t4819_1_0_0;
extern TypeInfo MulticastDelegate_t608_il2cpp_TypeInfo;
struct Getter_2_t4819;
extern Il2CppGenericClass Getter_2_t4819_GenericClass;
extern TypeInfo MonoProperty_t2000_il2cpp_TypeInfo;
TypeInfo Getter_2_t4819_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Getter`2"/* name */
	, ""/* namespaze */
	, Getter_2_t4819_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &MonoProperty_t2000_il2cpp_TypeInfo/* nested_in */
	, &Getter_2_t4819_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Getter_2_t4819_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Getter_2_t4819_il2cpp_TypeInfo/* cast_class */
	, &Getter_2_t4819_0_0_0/* byval_arg */
	, &Getter_2_t4819_1_0_0/* this_arg */
	, Getter_2_t4819_InterfacesOffsets/* interface_offsets */
	, &Getter_2_t4819_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Getter_2_t4819)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StaticGetter_1_t4820_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"



// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern MethodInfo StaticGetter_1__ctor_m26328_MethodInfo;
 void StaticGetter_1__ctor_m26328_gshared (StaticGetter_1_t4820 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern MethodInfo StaticGetter_1_Invoke_m26329_MethodInfo;
 Object_t * StaticGetter_1_Invoke_m26329_gshared (StaticGetter_1_t4820 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StaticGetter_1_Invoke_m26329((StaticGetter_1_t4820 *)__this->___prev_9, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo StaticGetter_1_BeginInvoke_m26330_MethodInfo;
 Object_t * StaticGetter_1_BeginInvoke_m26330_gshared (StaticGetter_1_t4820 * __this, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern MethodInfo StaticGetter_1_EndInvoke_m26331_MethodInfo;
 Object_t * StaticGetter_1_EndInvoke_m26331_gshared (StaticGetter_1_t4820 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition System.Reflection.MonoProperty/StaticGetter`1<System.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo StaticGetter_1_t4820_StaticGetter_1__ctor_m26328_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod StaticGetter_1__ctor_m26328_GenericMethod;
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo StaticGetter_1__ctor_m26328_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StaticGetter_1__ctor_m26328_gshared/* method */
	, &StaticGetter_1_t4820_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, StaticGetter_1_t4820_StaticGetter_1__ctor_m26328_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &StaticGetter_1__ctor_m26328_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod StaticGetter_1_Invoke_m26329_GenericMethod;
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
MethodInfo StaticGetter_1_Invoke_m26329_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&StaticGetter_1_Invoke_m26329_gshared/* method */
	, &StaticGetter_1_t4820_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &StaticGetter_1_Invoke_m26329_GenericMethod/* genericMethod */

};
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo StaticGetter_1_t4820_StaticGetter_1_BeginInvoke_m26330_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod StaticGetter_1_BeginInvoke_m26330_GenericMethod;
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
MethodInfo StaticGetter_1_BeginInvoke_m26330_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&StaticGetter_1_BeginInvoke_m26330_gshared/* method */
	, &StaticGetter_1_t4820_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, StaticGetter_1_t4820_StaticGetter_1_BeginInvoke_m26330_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &StaticGetter_1_BeginInvoke_m26330_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo StaticGetter_1_t4820_StaticGetter_1_EndInvoke_m26331_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod StaticGetter_1_EndInvoke_m26331_GenericMethod;
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
MethodInfo StaticGetter_1_EndInvoke_m26331_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&StaticGetter_1_EndInvoke_m26331_gshared/* method */
	, &StaticGetter_1_t4820_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, StaticGetter_1_t4820_StaticGetter_1_EndInvoke_m26331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &StaticGetter_1_EndInvoke_m26331_GenericMethod/* genericMethod */

};
static MethodInfo* StaticGetter_1_t4820_MethodInfos[] =
{
	&StaticGetter_1__ctor_m26328_MethodInfo,
	&StaticGetter_1_Invoke_m26329_MethodInfo,
	&StaticGetter_1_BeginInvoke_m26330_MethodInfo,
	&StaticGetter_1_EndInvoke_m26331_MethodInfo,
	NULL
};
static MethodInfo* StaticGetter_1_t4820_VTable[] =
{
	&MulticastDelegate_Equals_m3646_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&MulticastDelegate_GetHashCode_m3647_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&Delegate_Clone_m3649_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3650_MethodInfo,
	&MulticastDelegate_CombineImpl_m3651_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3652_MethodInfo,
	&StaticGetter_1_Invoke_m26329_MethodInfo,
	&StaticGetter_1_BeginInvoke_m26330_MethodInfo,
	&StaticGetter_1_EndInvoke_m26331_MethodInfo,
};
static Il2CppInterfaceOffsetPair StaticGetter_1_t4820_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType StaticGetter_1_t4820_0_0_0;
extern Il2CppType StaticGetter_1_t4820_1_0_0;
struct StaticGetter_1_t4820;
extern Il2CppGenericClass StaticGetter_1_t4820_GenericClass;
TypeInfo StaticGetter_1_t4820_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "StaticGetter`1"/* name */
	, ""/* namespaze */
	, StaticGetter_1_t4820_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &MonoProperty_t2000_il2cpp_TypeInfo/* nested_in */
	, &StaticGetter_1_t4820_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, StaticGetter_1_t4820_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &StaticGetter_1_t4820_il2cpp_TypeInfo/* cast_class */
	, &StaticGetter_1_t4820_0_0_0/* byval_arg */
	, &StaticGetter_1_t4820_1_0_0/* this_arg */
	, StaticGetter_1_t4820_InterfacesOffsets/* interface_offsets */
	, &StaticGetter_1_t4820_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StaticGetter_1_t4820)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
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
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6837_il2cpp_TypeInfo;

// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>
extern MethodInfo IEnumerator_1_get_Current_m45809_MethodInfo;
static PropertyInfo IEnumerator_1_t6837____Current_PropertyInfo = 
{
	&IEnumerator_1_t6837_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45809_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6837_PropertyInfos[] =
{
	&IEnumerator_1_t6837____Current_PropertyInfo,
	NULL
};
extern Il2CppType ParameterAttributes_t2005_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t2005 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45809_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45809_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6837_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t2005_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t2005/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45809_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6837_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45809_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6837_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6837_0_0_0;
extern Il2CppType IEnumerator_1_t6837_1_0_0;
struct IEnumerator_1_t6837;
extern Il2CppGenericClass IEnumerator_1_t6837_GenericClass;
TypeInfo IEnumerator_1_t6837_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6837_MethodInfos/* methods */
	, IEnumerator_1_t6837_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6837_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6837_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6837_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6837_0_0_0/* byval_arg */
	, &IEnumerator_1_t6837_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6837_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_655.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4821_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_655MethodDeclarations.h"

extern TypeInfo ParameterAttributes_t2005_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26336_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParameterAttributes_t2005_m35290_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisParameterAttributes_t2005_m35290 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26332_MethodInfo;
 void InternalEnumerator_1__ctor_m26332 (InternalEnumerator_1_t4821 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333 (InternalEnumerator_1_t4821 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26336(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26336_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ParameterAttributes_t2005_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26334_MethodInfo;
 void InternalEnumerator_1_Dispose_m26334 (InternalEnumerator_1_t4821 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26335_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26335 (InternalEnumerator_1_t4821 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26336 (InternalEnumerator_1_t4821 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisParameterAttributes_t2005_m35290(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisParameterAttributes_t2005_m35290_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4821____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4821, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4821____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4821, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4821_FieldInfos[] =
{
	&InternalEnumerator_1_t4821____array_0_FieldInfo,
	&InternalEnumerator_1_t4821____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4821____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4821_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4821____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4821_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26336_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4821_PropertyInfos[] =
{
	&InternalEnumerator_1_t4821____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4821____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4821_InternalEnumerator_1__ctor_m26332_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26332_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26332_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26332/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4821_InternalEnumerator_1__ctor_m26332_ParameterInfos/* parameters */
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
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26334_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26334_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26334/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26334_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26335_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26335_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26335/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26335_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t2005_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t2005 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26336_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26336_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26336/* method */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t2005_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t2005/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t4821_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26332_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo,
	&InternalEnumerator_1_Dispose_m26334_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26335_MethodInfo,
	&InternalEnumerator_1_get_Current_m26336_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4821_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26333_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26335_MethodInfo,
	&InternalEnumerator_1_Dispose_m26334_MethodInfo,
	&InternalEnumerator_1_get_Current_m26336_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4821_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6837_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4821_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6837_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4821_0_0_0;
extern Il2CppType InternalEnumerator_1_t4821_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4821_GenericClass;
TypeInfo InternalEnumerator_1_t4821_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4821_MethodInfos/* methods */
	, InternalEnumerator_1_t4821_PropertyInfos/* properties */
	, InternalEnumerator_1_t4821_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4821_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4821_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4821_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4821_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4821_1_0_0/* this_arg */
	, InternalEnumerator_1_t4821_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4821_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4821)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8848_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>
extern MethodInfo ICollection_1_get_Count_m45810_MethodInfo;
static PropertyInfo ICollection_1_t8848____Count_PropertyInfo = 
{
	&ICollection_1_t8848_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45810_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45811_MethodInfo;
static PropertyInfo ICollection_1_t8848____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8848_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45811_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8848_PropertyInfos[] =
{
	&ICollection_1_t8848____Count_PropertyInfo,
	&ICollection_1_t8848____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45810_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m45810_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45810_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45811_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45811_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45811_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t2005_0_0_0;
extern Il2CppType ParameterAttributes_t2005_0_0_0;
static ParameterInfo ICollection_1_t8848_ICollection_1_Add_m45812_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t2005_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45812_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Add(T)
MethodInfo ICollection_1_Add_m45812_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8848_ICollection_1_Add_m45812_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45812_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45813_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Clear()
MethodInfo ICollection_1_Clear_m45813_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45813_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t2005_0_0_0;
static ParameterInfo ICollection_1_t8848_ICollection_1_Contains_m45814_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t2005_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45814_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m45814_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8848_ICollection_1_Contains_m45814_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45814_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributesU5BU5D_t5083_0_0_0;
extern Il2CppType ParameterAttributesU5BU5D_t5083_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8848_ICollection_1_CopyTo_m45815_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributesU5BU5D_t5083_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45815_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45815_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8848_ICollection_1_CopyTo_m45815_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45815_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t2005_0_0_0;
static ParameterInfo ICollection_1_t8848_ICollection_1_Remove_m45816_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t2005_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45816_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m45816_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8848_ICollection_1_Remove_m45816_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45816_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8848_MethodInfos[] =
{
	&ICollection_1_get_Count_m45810_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45811_MethodInfo,
	&ICollection_1_Add_m45812_MethodInfo,
	&ICollection_1_Clear_m45813_MethodInfo,
	&ICollection_1_Contains_m45814_MethodInfo,
	&ICollection_1_CopyTo_m45815_MethodInfo,
	&ICollection_1_Remove_m45816_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8850_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8848_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8850_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8848_0_0_0;
extern Il2CppType ICollection_1_t8848_1_0_0;
struct ICollection_1_t8848;
extern Il2CppGenericClass ICollection_1_t8848_GenericClass;
TypeInfo ICollection_1_t8848_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8848_MethodInfos/* methods */
	, ICollection_1_t8848_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8848_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8848_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8848_0_0_0/* byval_arg */
	, &ICollection_1_t8848_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8848_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>
extern Il2CppType IEnumerator_1_t6837_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45817_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45817_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8850_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6837_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45817_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8850_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45817_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8850_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8850_0_0_0;
extern Il2CppType IEnumerable_1_t8850_1_0_0;
struct IEnumerable_1_t8850;
extern Il2CppGenericClass IEnumerable_1_t8850_GenericClass;
TypeInfo IEnumerable_1_t8850_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8850_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8850_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8850_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8850_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8850_0_0_0/* byval_arg */
	, &IEnumerable_1_t8850_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8850_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8849_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>
extern MethodInfo IList_1_get_Item_m45818_MethodInfo;
extern MethodInfo IList_1_set_Item_m45819_MethodInfo;
static PropertyInfo IList_1_t8849____Item_PropertyInfo = 
{
	&IList_1_t8849_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45818_MethodInfo/* get */
	, &IList_1_set_Item_m45819_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8849_PropertyInfos[] =
{
	&IList_1_t8849____Item_PropertyInfo,
	NULL
};
extern Il2CppType ParameterAttributes_t2005_0_0_0;
static ParameterInfo IList_1_t8849_IList_1_IndexOf_m45820_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t2005_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45820_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45820_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8849_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8849_IList_1_IndexOf_m45820_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45820_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ParameterAttributes_t2005_0_0_0;
static ParameterInfo IList_1_t8849_IList_1_Insert_m45821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t2005_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45821_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45821_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8849_IList_1_Insert_m45821_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45821_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8849_IList_1_RemoveAt_m45822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45822_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45822_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8849_IList_1_RemoveAt_m45822_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45822_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8849_IList_1_get_Item_m45818_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ParameterAttributes_t2005_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t2005_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45818_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45818_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8849_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t2005_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t2005_Int32_t73/* invoker_method */
	, IList_1_t8849_IList_1_get_Item_m45818_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45818_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ParameterAttributes_t2005_0_0_0;
static ParameterInfo IList_1_t8849_IList_1_set_Item_m45819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t2005_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45819_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45819_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8849_IList_1_set_Item_m45819_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45819_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8849_MethodInfos[] =
{
	&IList_1_IndexOf_m45820_MethodInfo,
	&IList_1_Insert_m45821_MethodInfo,
	&IList_1_RemoveAt_m45822_MethodInfo,
	&IList_1_get_Item_m45818_MethodInfo,
	&IList_1_set_Item_m45819_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8849_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8848_il2cpp_TypeInfo,
	&IEnumerable_1_t8850_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8849_0_0_0;
extern Il2CppType IList_1_t8849_1_0_0;
struct IList_1_t8849;
extern Il2CppGenericClass IList_1_t8849_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8849_MethodInfos/* methods */
	, IList_1_t8849_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8849_il2cpp_TypeInfo/* element_class */
	, IList_1_t8849_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8849_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8849_0_0_0/* byval_arg */
	, &IList_1_t8849_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8849_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6839_il2cpp_TypeInfo;

// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo IEnumerator_1_get_Current_m45823_MethodInfo;
static PropertyInfo IEnumerator_1_t6839____Current_PropertyInfo = 
{
	&IEnumerator_1_t6839_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45823_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6839_PropertyInfos[] =
{
	&IEnumerator_1_t6839____Current_PropertyInfo,
	NULL
};
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t2007 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45823_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45823_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6839_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t2007_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t2007/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45823_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6839_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45823_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6839_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6839_0_0_0;
extern Il2CppType IEnumerator_1_t6839_1_0_0;
struct IEnumerator_1_t6839;
extern Il2CppGenericClass IEnumerator_1_t6839_GenericClass;
TypeInfo IEnumerator_1_t6839_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6839_MethodInfos/* methods */
	, IEnumerator_1_t6839_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6839_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6839_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6839_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6839_0_0_0/* byval_arg */
	, &IEnumerator_1_t6839_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6839_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_656.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4822_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_656MethodDeclarations.h"

extern TypeInfo ProcessorArchitecture_t2007_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26341_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisProcessorArchitecture_t2007_m35301_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ProcessorArchitecture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ProcessorArchitecture>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisProcessorArchitecture_t2007_m35301 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26337_MethodInfo;
 void InternalEnumerator_1__ctor_m26337 (InternalEnumerator_1_t4822 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338 (InternalEnumerator_1_t4822 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26341(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26341_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ProcessorArchitecture_t2007_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26339_MethodInfo;
 void InternalEnumerator_1_Dispose_m26339 (InternalEnumerator_1_t4822 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26340_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26340 (InternalEnumerator_1_t4822 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26341 (InternalEnumerator_1_t4822 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisProcessorArchitecture_t2007_m35301(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisProcessorArchitecture_t2007_m35301_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4822____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4822, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4822____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4822, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4822_FieldInfos[] =
{
	&InternalEnumerator_1_t4822____array_0_FieldInfo,
	&InternalEnumerator_1_t4822____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4822____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4822_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4822____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4822_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26341_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4822_PropertyInfos[] =
{
	&InternalEnumerator_1_t4822____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4822____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4822_InternalEnumerator_1__ctor_m26337_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26337_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26337_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26337/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4822_InternalEnumerator_1__ctor_m26337_ParameterInfos/* parameters */
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
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26339_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26339_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26339/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26339_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26340_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26340_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26340/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26340_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t2007 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26341_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26341_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26341/* method */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t2007_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t2007/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t4822_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26337_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo,
	&InternalEnumerator_1_Dispose_m26339_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26340_MethodInfo,
	&InternalEnumerator_1_get_Current_m26341_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4822_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26338_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26340_MethodInfo,
	&InternalEnumerator_1_Dispose_m26339_MethodInfo,
	&InternalEnumerator_1_get_Current_m26341_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4822_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6839_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4822_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6839_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4822_0_0_0;
extern Il2CppType InternalEnumerator_1_t4822_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4822_GenericClass;
TypeInfo InternalEnumerator_1_t4822_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4822_MethodInfos/* methods */
	, InternalEnumerator_1_t4822_PropertyInfos/* properties */
	, InternalEnumerator_1_t4822_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4822_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4822_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4822_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4822_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4822_1_0_0/* this_arg */
	, InternalEnumerator_1_t4822_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4822_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4822)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8851_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo ICollection_1_get_Count_m45824_MethodInfo;
static PropertyInfo ICollection_1_t8851____Count_PropertyInfo = 
{
	&ICollection_1_t8851_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45824_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45825_MethodInfo;
static PropertyInfo ICollection_1_t8851____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8851_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45825_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8851_PropertyInfos[] =
{
	&ICollection_1_t8851____Count_PropertyInfo,
	&ICollection_1_t8851____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45824_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_Count()
MethodInfo ICollection_1_get_Count_m45824_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45824_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45825_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45825_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45825_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
static ParameterInfo ICollection_1_t8851_ICollection_1_Add_m45826_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t2007_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45826_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Add(T)
MethodInfo ICollection_1_Add_m45826_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8851_ICollection_1_Add_m45826_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45826_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45827_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Clear()
MethodInfo ICollection_1_Clear_m45827_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45827_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
static ParameterInfo ICollection_1_t8851_ICollection_1_Contains_m45828_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t2007_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45828_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Contains(T)
MethodInfo ICollection_1_Contains_m45828_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8851_ICollection_1_Contains_m45828_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45828_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitectureU5BU5D_t5084_0_0_0;
extern Il2CppType ProcessorArchitectureU5BU5D_t5084_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8851_ICollection_1_CopyTo_m45829_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitectureU5BU5D_t5084_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45829_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45829_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8851_ICollection_1_CopyTo_m45829_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45829_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
static ParameterInfo ICollection_1_t8851_ICollection_1_Remove_m45830_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t2007_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45830_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Remove(T)
MethodInfo ICollection_1_Remove_m45830_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8851_ICollection_1_Remove_m45830_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45830_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8851_MethodInfos[] =
{
	&ICollection_1_get_Count_m45824_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45825_MethodInfo,
	&ICollection_1_Add_m45826_MethodInfo,
	&ICollection_1_Clear_m45827_MethodInfo,
	&ICollection_1_Contains_m45828_MethodInfo,
	&ICollection_1_CopyTo_m45829_MethodInfo,
	&ICollection_1_Remove_m45830_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8853_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8851_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8853_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8851_0_0_0;
extern Il2CppType ICollection_1_t8851_1_0_0;
struct ICollection_1_t8851;
extern Il2CppGenericClass ICollection_1_t8851_GenericClass;
TypeInfo ICollection_1_t8851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8851_MethodInfos/* methods */
	, ICollection_1_t8851_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8851_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8851_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8851_0_0_0/* byval_arg */
	, &ICollection_1_t8851_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8851_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>
extern Il2CppType IEnumerator_1_t6839_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45831_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45831_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8853_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6839_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45831_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8853_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45831_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8853_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8853_0_0_0;
extern Il2CppType IEnumerable_1_t8853_1_0_0;
struct IEnumerable_1_t8853;
extern Il2CppGenericClass IEnumerable_1_t8853_GenericClass;
TypeInfo IEnumerable_1_t8853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8853_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8853_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8853_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8853_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8853_0_0_0/* byval_arg */
	, &IEnumerable_1_t8853_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8853_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8852_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo IList_1_get_Item_m45832_MethodInfo;
extern MethodInfo IList_1_set_Item_m45833_MethodInfo;
static PropertyInfo IList_1_t8852____Item_PropertyInfo = 
{
	&IList_1_t8852_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45832_MethodInfo/* get */
	, &IList_1_set_Item_m45833_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8852_PropertyInfos[] =
{
	&IList_1_t8852____Item_PropertyInfo,
	NULL
};
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
static ParameterInfo IList_1_t8852_IList_1_IndexOf_m45834_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t2007_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45834_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45834_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8852_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8852_IList_1_IndexOf_m45834_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45834_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
static ParameterInfo IList_1_t8852_IList_1_Insert_m45835_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t2007_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45835_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45835_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8852_IList_1_Insert_m45835_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45835_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8852_IList_1_RemoveAt_m45836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45836_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45836_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8852_IList_1_RemoveAt_m45836_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45836_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8852_IList_1_get_Item_m45832_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t2007_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45832_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45832_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8852_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t2007_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t2007_Int32_t73/* invoker_method */
	, IList_1_t8852_IList_1_get_Item_m45832_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45832_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ProcessorArchitecture_t2007_0_0_0;
static ParameterInfo IList_1_t8852_IList_1_set_Item_m45833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t2007_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45833_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45833_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8852_IList_1_set_Item_m45833_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45833_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8852_MethodInfos[] =
{
	&IList_1_IndexOf_m45834_MethodInfo,
	&IList_1_Insert_m45835_MethodInfo,
	&IList_1_RemoveAt_m45836_MethodInfo,
	&IList_1_get_Item_m45832_MethodInfo,
	&IList_1_set_Item_m45833_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8852_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8851_il2cpp_TypeInfo,
	&IEnumerable_1_t8853_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8852_0_0_0;
extern Il2CppType IList_1_t8852_1_0_0;
struct IList_1_t8852;
extern Il2CppGenericClass IList_1_t8852_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8852_MethodInfos/* methods */
	, IList_1_t8852_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8852_il2cpp_TypeInfo/* element_class */
	, IList_1_t8852_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8852_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8852_0_0_0/* byval_arg */
	, &IList_1_t8852_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8852_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6841_il2cpp_TypeInfo;

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>
extern MethodInfo IEnumerator_1_get_Current_m45837_MethodInfo;
static PropertyInfo IEnumerator_1_t6841____Current_PropertyInfo = 
{
	&IEnumerator_1_t6841_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45837_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6841_PropertyInfos[] =
{
	&IEnumerator_1_t6841____Current_PropertyInfo,
	NULL
};
extern Il2CppType PropertyAttributes_t2008_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t2008 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45837_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45837_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6841_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t2008_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t2008/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45837_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6841_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45837_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6841_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6841_0_0_0;
extern Il2CppType IEnumerator_1_t6841_1_0_0;
struct IEnumerator_1_t6841;
extern Il2CppGenericClass IEnumerator_1_t6841_GenericClass;
TypeInfo IEnumerator_1_t6841_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6841_MethodInfos/* methods */
	, IEnumerator_1_t6841_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6841_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6841_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6841_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6841_0_0_0/* byval_arg */
	, &IEnumerator_1_t6841_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6841_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_657.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4823_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_657MethodDeclarations.h"

extern TypeInfo PropertyAttributes_t2008_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26346_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPropertyAttributes_t2008_m35312_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPropertyAttributes_t2008_m35312 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26342_MethodInfo;
 void InternalEnumerator_1__ctor_m26342 (InternalEnumerator_1_t4823 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343 (InternalEnumerator_1_t4823 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26346(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26346_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PropertyAttributes_t2008_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26344_MethodInfo;
 void InternalEnumerator_1_Dispose_m26344 (InternalEnumerator_1_t4823 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26345_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26345 (InternalEnumerator_1_t4823 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26346 (InternalEnumerator_1_t4823 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPropertyAttributes_t2008_m35312(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPropertyAttributes_t2008_m35312_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4823____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4823, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4823____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4823, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4823_FieldInfos[] =
{
	&InternalEnumerator_1_t4823____array_0_FieldInfo,
	&InternalEnumerator_1_t4823____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4823____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4823_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4823____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4823_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26346_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4823_PropertyInfos[] =
{
	&InternalEnumerator_1_t4823____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4823____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4823_InternalEnumerator_1__ctor_m26342_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26342_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26342_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26342/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4823_InternalEnumerator_1__ctor_m26342_ParameterInfos/* parameters */
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
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26344_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26344_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26344/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26344_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26345_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26345_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26345/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26345_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributes_t2008_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t2008 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26346_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26346_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26346/* method */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t2008_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t2008/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t4823_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26342_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo,
	&InternalEnumerator_1_Dispose_m26344_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26345_MethodInfo,
	&InternalEnumerator_1_get_Current_m26346_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4823_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26343_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26345_MethodInfo,
	&InternalEnumerator_1_Dispose_m26344_MethodInfo,
	&InternalEnumerator_1_get_Current_m26346_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4823_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6841_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4823_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6841_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4823_0_0_0;
extern Il2CppType InternalEnumerator_1_t4823_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4823_GenericClass;
TypeInfo InternalEnumerator_1_t4823_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4823_MethodInfos/* methods */
	, InternalEnumerator_1_t4823_PropertyInfos/* properties */
	, InternalEnumerator_1_t4823_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4823_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4823_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4823_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4823_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4823_1_0_0/* this_arg */
	, InternalEnumerator_1_t4823_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4823_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4823)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8854_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>
extern MethodInfo ICollection_1_get_Count_m45838_MethodInfo;
static PropertyInfo ICollection_1_t8854____Count_PropertyInfo = 
{
	&ICollection_1_t8854_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45838_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45839_MethodInfo;
static PropertyInfo ICollection_1_t8854____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8854_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45839_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8854_PropertyInfos[] =
{
	&ICollection_1_t8854____Count_PropertyInfo,
	&ICollection_1_t8854____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45838_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m45838_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45838_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45839_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45839_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45839_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributes_t2008_0_0_0;
extern Il2CppType PropertyAttributes_t2008_0_0_0;
static ParameterInfo ICollection_1_t8854_ICollection_1_Add_m45840_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t2008_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45840_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Add(T)
MethodInfo ICollection_1_Add_m45840_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8854_ICollection_1_Add_m45840_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45840_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45841_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Clear()
MethodInfo ICollection_1_Clear_m45841_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45841_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributes_t2008_0_0_0;
static ParameterInfo ICollection_1_t8854_ICollection_1_Contains_m45842_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t2008_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45842_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m45842_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8854_ICollection_1_Contains_m45842_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45842_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributesU5BU5D_t5085_0_0_0;
extern Il2CppType PropertyAttributesU5BU5D_t5085_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8854_ICollection_1_CopyTo_m45843_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributesU5BU5D_t5085_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45843_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45843_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8854_ICollection_1_CopyTo_m45843_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45843_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributes_t2008_0_0_0;
static ParameterInfo ICollection_1_t8854_ICollection_1_Remove_m45844_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t2008_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45844_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m45844_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8854_ICollection_1_Remove_m45844_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45844_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8854_MethodInfos[] =
{
	&ICollection_1_get_Count_m45838_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45839_MethodInfo,
	&ICollection_1_Add_m45840_MethodInfo,
	&ICollection_1_Clear_m45841_MethodInfo,
	&ICollection_1_Contains_m45842_MethodInfo,
	&ICollection_1_CopyTo_m45843_MethodInfo,
	&ICollection_1_Remove_m45844_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8856_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8854_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8856_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8854_0_0_0;
extern Il2CppType ICollection_1_t8854_1_0_0;
struct ICollection_1_t8854;
extern Il2CppGenericClass ICollection_1_t8854_GenericClass;
TypeInfo ICollection_1_t8854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8854_MethodInfos/* methods */
	, ICollection_1_t8854_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8854_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8854_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8854_0_0_0/* byval_arg */
	, &ICollection_1_t8854_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8854_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>
extern Il2CppType IEnumerator_1_t6841_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45845_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45845_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8856_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6841_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45845_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8856_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45845_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8856_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8856_0_0_0;
extern Il2CppType IEnumerable_1_t8856_1_0_0;
struct IEnumerable_1_t8856;
extern Il2CppGenericClass IEnumerable_1_t8856_GenericClass;
TypeInfo IEnumerable_1_t8856_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8856_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8856_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8856_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8856_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8856_0_0_0/* byval_arg */
	, &IEnumerable_1_t8856_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8856_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8855_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>
extern MethodInfo IList_1_get_Item_m45846_MethodInfo;
extern MethodInfo IList_1_set_Item_m45847_MethodInfo;
static PropertyInfo IList_1_t8855____Item_PropertyInfo = 
{
	&IList_1_t8855_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45846_MethodInfo/* get */
	, &IList_1_set_Item_m45847_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8855_PropertyInfos[] =
{
	&IList_1_t8855____Item_PropertyInfo,
	NULL
};
extern Il2CppType PropertyAttributes_t2008_0_0_0;
static ParameterInfo IList_1_t8855_IList_1_IndexOf_m45848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t2008_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45848_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45848_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8855_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8855_IList_1_IndexOf_m45848_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45848_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType PropertyAttributes_t2008_0_0_0;
static ParameterInfo IList_1_t8855_IList_1_Insert_m45849_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t2008_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45849_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45849_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8855_IList_1_Insert_m45849_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45849_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8855_IList_1_RemoveAt_m45850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45850_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45850_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8855_IList_1_RemoveAt_m45850_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45850_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8855_IList_1_get_Item_m45846_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType PropertyAttributes_t2008_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t2008_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45846_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45846_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8855_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t2008_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t2008_Int32_t73/* invoker_method */
	, IList_1_t8855_IList_1_get_Item_m45846_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45846_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType PropertyAttributes_t2008_0_0_0;
static ParameterInfo IList_1_t8855_IList_1_set_Item_m45847_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t2008_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45847_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45847_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8855_IList_1_set_Item_m45847_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45847_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8855_MethodInfos[] =
{
	&IList_1_IndexOf_m45848_MethodInfo,
	&IList_1_Insert_m45849_MethodInfo,
	&IList_1_RemoveAt_m45850_MethodInfo,
	&IList_1_get_Item_m45846_MethodInfo,
	&IList_1_set_Item_m45847_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8855_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8854_il2cpp_TypeInfo,
	&IEnumerable_1_t8856_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8855_0_0_0;
extern Il2CppType IList_1_t8855_1_0_0;
struct IList_1_t8855;
extern Il2CppGenericClass IList_1_t8855_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8855_MethodInfos/* methods */
	, IList_1_t8855_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8855_il2cpp_TypeInfo/* element_class */
	, IList_1_t8855_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8855_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8855_0_0_0/* byval_arg */
	, &IList_1_t8855_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8855_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6843_il2cpp_TypeInfo;

// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>
extern MethodInfo IEnumerator_1_get_Current_m45851_MethodInfo;
static PropertyInfo IEnumerator_1_t6843____Current_PropertyInfo = 
{
	&IEnumerator_1_t6843_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45851_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6843_PropertyInfos[] =
{
	&IEnumerator_1_t6843____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeAttributes_t2012_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t2012 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45851_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45851_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6843_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t2012_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t2012/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45851_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6843_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45851_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6843_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6843_0_0_0;
extern Il2CppType IEnumerator_1_t6843_1_0_0;
struct IEnumerator_1_t6843;
extern Il2CppGenericClass IEnumerator_1_t6843_GenericClass;
TypeInfo IEnumerator_1_t6843_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6843_MethodInfos/* methods */
	, IEnumerator_1_t6843_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6843_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6843_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6843_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6843_0_0_0/* byval_arg */
	, &IEnumerator_1_t6843_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6843_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_658.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4824_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_658MethodDeclarations.h"

extern TypeInfo TypeAttributes_t2012_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26351_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeAttributes_t2012_m35323_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.TypeAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.TypeAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTypeAttributes_t2012_m35323 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26347_MethodInfo;
 void InternalEnumerator_1__ctor_m26347 (InternalEnumerator_1_t4824 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348 (InternalEnumerator_1_t4824 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26351(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26351_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeAttributes_t2012_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26349_MethodInfo;
 void InternalEnumerator_1_Dispose_m26349 (InternalEnumerator_1_t4824 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26350_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26350 (InternalEnumerator_1_t4824 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26351 (InternalEnumerator_1_t4824 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisTypeAttributes_t2012_m35323(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeAttributes_t2012_m35323_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4824____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4824, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4824____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4824, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4824_FieldInfos[] =
{
	&InternalEnumerator_1_t4824____array_0_FieldInfo,
	&InternalEnumerator_1_t4824____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4824____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4824_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4824____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4824_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26351_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4824_PropertyInfos[] =
{
	&InternalEnumerator_1_t4824____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4824____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4824_InternalEnumerator_1__ctor_m26347_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26347_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26347_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26347/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4824_InternalEnumerator_1__ctor_m26347_ParameterInfos/* parameters */
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
// System.Object System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26349_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26349_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26349/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26349_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26350_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26350_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26350/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26350_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributes_t2012_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t2012 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26351_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26351_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26351/* method */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t2012_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t2012/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t4824_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26347_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo,
	&InternalEnumerator_1_Dispose_m26349_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26350_MethodInfo,
	&InternalEnumerator_1_get_Current_m26351_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4824_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26348_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26350_MethodInfo,
	&InternalEnumerator_1_Dispose_m26349_MethodInfo,
	&InternalEnumerator_1_get_Current_m26351_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4824_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6843_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4824_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6843_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4824_0_0_0;
extern Il2CppType InternalEnumerator_1_t4824_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4824_GenericClass;
TypeInfo InternalEnumerator_1_t4824_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4824_MethodInfos/* methods */
	, InternalEnumerator_1_t4824_PropertyInfos/* properties */
	, InternalEnumerator_1_t4824_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4824_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4824_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4824_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4824_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4824_1_0_0/* this_arg */
	, InternalEnumerator_1_t4824_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4824_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4824)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8857_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>
extern MethodInfo ICollection_1_get_Count_m45852_MethodInfo;
static PropertyInfo ICollection_1_t8857____Count_PropertyInfo = 
{
	&ICollection_1_t8857_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45852_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45853_MethodInfo;
static PropertyInfo ICollection_1_t8857____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8857_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45853_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8857_PropertyInfos[] =
{
	&ICollection_1_t8857____Count_PropertyInfo,
	&ICollection_1_t8857____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45852_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m45852_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45852_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45853_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45853_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45853_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributes_t2012_0_0_0;
extern Il2CppType TypeAttributes_t2012_0_0_0;
static ParameterInfo ICollection_1_t8857_ICollection_1_Add_m45854_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t2012_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45854_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Add(T)
MethodInfo ICollection_1_Add_m45854_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ICollection_1_t8857_ICollection_1_Add_m45854_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45854_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45855_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Clear()
MethodInfo ICollection_1_Clear_m45855_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45855_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributes_t2012_0_0_0;
static ParameterInfo ICollection_1_t8857_ICollection_1_Contains_m45856_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t2012_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45856_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m45856_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8857_ICollection_1_Contains_m45856_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45856_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributesU5BU5D_t5086_0_0_0;
extern Il2CppType TypeAttributesU5BU5D_t5086_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8857_ICollection_1_CopyTo_m45857_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributesU5BU5D_t5086_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45857_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45857_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8857_ICollection_1_CopyTo_m45857_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45857_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributes_t2012_0_0_0;
static ParameterInfo ICollection_1_t8857_ICollection_1_Remove_m45858_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t2012_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45858_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m45858_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int32_t73/* invoker_method */
	, ICollection_1_t8857_ICollection_1_Remove_m45858_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45858_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8857_MethodInfos[] =
{
	&ICollection_1_get_Count_m45852_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45853_MethodInfo,
	&ICollection_1_Add_m45854_MethodInfo,
	&ICollection_1_Clear_m45855_MethodInfo,
	&ICollection_1_Contains_m45856_MethodInfo,
	&ICollection_1_CopyTo_m45857_MethodInfo,
	&ICollection_1_Remove_m45858_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8859_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8857_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8859_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8857_0_0_0;
extern Il2CppType ICollection_1_t8857_1_0_0;
struct ICollection_1_t8857;
extern Il2CppGenericClass ICollection_1_t8857_GenericClass;
TypeInfo ICollection_1_t8857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8857_MethodInfos/* methods */
	, ICollection_1_t8857_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8857_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8857_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8857_0_0_0/* byval_arg */
	, &ICollection_1_t8857_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8857_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>
extern Il2CppType IEnumerator_1_t6843_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45859_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45859_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8859_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6843_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45859_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8859_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45859_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8859_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8859_0_0_0;
extern Il2CppType IEnumerable_1_t8859_1_0_0;
struct IEnumerable_1_t8859;
extern Il2CppGenericClass IEnumerable_1_t8859_GenericClass;
TypeInfo IEnumerable_1_t8859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8859_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8859_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8859_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8859_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8859_0_0_0/* byval_arg */
	, &IEnumerable_1_t8859_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8859_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8858_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>
extern MethodInfo IList_1_get_Item_m45860_MethodInfo;
extern MethodInfo IList_1_set_Item_m45861_MethodInfo;
static PropertyInfo IList_1_t8858____Item_PropertyInfo = 
{
	&IList_1_t8858_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45860_MethodInfo/* get */
	, &IList_1_set_Item_m45861_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8858_PropertyInfos[] =
{
	&IList_1_t8858____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeAttributes_t2012_0_0_0;
static ParameterInfo IList_1_t8858_IList_1_IndexOf_m45862_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t2012_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45862_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45862_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8858_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8858_IList_1_IndexOf_m45862_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45862_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TypeAttributes_t2012_0_0_0;
static ParameterInfo IList_1_t8858_IList_1_Insert_m45863_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t2012_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45863_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45863_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8858_IList_1_Insert_m45863_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45863_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8858_IList_1_RemoveAt_m45864_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45864_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45864_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8858_IList_1_RemoveAt_m45864_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45864_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8858_IList_1_get_Item_m45860_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType TypeAttributes_t2012_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t2012_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45860_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45860_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8858_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t2012_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t2012_Int32_t73/* invoker_method */
	, IList_1_t8858_IList_1_get_Item_m45860_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45860_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TypeAttributes_t2012_0_0_0;
static ParameterInfo IList_1_t8858_IList_1_set_Item_m45861_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t2012_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45861_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45861_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t8858_IList_1_set_Item_m45861_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45861_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8858_MethodInfos[] =
{
	&IList_1_IndexOf_m45862_MethodInfo,
	&IList_1_Insert_m45863_MethodInfo,
	&IList_1_RemoveAt_m45864_MethodInfo,
	&IList_1_get_Item_m45860_MethodInfo,
	&IList_1_set_Item_m45861_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8858_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8857_il2cpp_TypeInfo,
	&IEnumerable_1_t8859_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8858_0_0_0;
extern Il2CppType IList_1_t8858_1_0_0;
struct IList_1_t8858;
extern Il2CppGenericClass IList_1_t8858_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8858_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8858_MethodInfos/* methods */
	, IList_1_t8858_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8858_il2cpp_TypeInfo/* element_class */
	, IList_1_t8858_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8858_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8858_0_0_0/* byval_arg */
	, &IList_1_t8858_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8858_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6845_il2cpp_TypeInfo;

// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45865_MethodInfo;
static PropertyInfo IEnumerator_1_t6845____Current_PropertyInfo = 
{
	&IEnumerator_1_t6845_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45865_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6845_PropertyInfos[] =
{
	&IEnumerator_1_t6845____Current_PropertyInfo,
	NULL
};
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45865_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45865_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6845_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t1175_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45865_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6845_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45865_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6845_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6845_0_0_0;
extern Il2CppType IEnumerator_1_t6845_1_0_0;
struct IEnumerator_1_t6845;
extern Il2CppGenericClass IEnumerator_1_t6845_GenericClass;
TypeInfo IEnumerator_1_t6845_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6845_MethodInfos/* methods */
	, IEnumerator_1_t6845_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6845_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6845_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6845_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6845_0_0_0/* byval_arg */
	, &IEnumerator_1_t6845_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6845_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_659.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4825_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_659MethodDeclarations.h"

extern TypeInfo NeutralResourcesLanguageAttribute_t1175_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26356_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t1175_m35334_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Resources.NeutralResourcesLanguageAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Resources.NeutralResourcesLanguageAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t1175_m35334(__this, p0, method) (NeutralResourcesLanguageAttribute_t1175 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4825____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4825, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4825____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4825, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4825_FieldInfos[] =
{
	&InternalEnumerator_1_t4825____array_0_FieldInfo,
	&InternalEnumerator_1_t4825____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4825____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4825_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4825____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4825_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26356_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4825_PropertyInfos[] =
{
	&InternalEnumerator_1_t4825____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4825____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4825_InternalEnumerator_1__ctor_m26352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26352_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26352_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4825_InternalEnumerator_1__ctor_m26352_ParameterInfos/* parameters */
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
// System.Object System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26354_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26354_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26354_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26355_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26355_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26355_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26356_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26356_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t1175_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m26356_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4825_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26352_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo,
	&InternalEnumerator_1_Dispose_m26354_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26355_MethodInfo,
	&InternalEnumerator_1_get_Current_m26356_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m26355_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m26354_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4825_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26353_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26355_MethodInfo,
	&InternalEnumerator_1_Dispose_m26354_MethodInfo,
	&InternalEnumerator_1_get_Current_m26356_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4825_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6845_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4825_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6845_il2cpp_TypeInfo, 7},
};
extern TypeInfo NeutralResourcesLanguageAttribute_t1175_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4825_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26356_MethodInfo/* Method Usage */,
	&NeutralResourcesLanguageAttribute_t1175_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t1175_m35334_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4825_0_0_0;
extern Il2CppType InternalEnumerator_1_t4825_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4825_GenericClass;
TypeInfo InternalEnumerator_1_t4825_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4825_MethodInfos/* methods */
	, InternalEnumerator_1_t4825_PropertyInfos/* properties */
	, InternalEnumerator_1_t4825_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4825_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4825_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4825_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4825_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4825_1_0_0/* this_arg */
	, InternalEnumerator_1_t4825_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4825_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4825_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4825)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8860_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo ICollection_1_get_Count_m45866_MethodInfo;
static PropertyInfo ICollection_1_t8860____Count_PropertyInfo = 
{
	&ICollection_1_t8860_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45866_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45867_MethodInfo;
static PropertyInfo ICollection_1_t8860____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8860_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45867_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8860_PropertyInfos[] =
{
	&ICollection_1_t8860____Count_PropertyInfo,
	&ICollection_1_t8860____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45866_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45866_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45866_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45867_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45867_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45867_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
static ParameterInfo ICollection_1_t8860_ICollection_1_Add_m45868_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t1175_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45868_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45868_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8860_ICollection_1_Add_m45868_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45868_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45869_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45869_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45869_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
static ParameterInfo ICollection_1_t8860_ICollection_1_Contains_m45870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t1175_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45870_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45870_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8860_ICollection_1_Contains_m45870_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45870_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttributeU5BU5D_t5087_0_0_0;
extern Il2CppType NeutralResourcesLanguageAttributeU5BU5D_t5087_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8860_ICollection_1_CopyTo_m45871_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttributeU5BU5D_t5087_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45871_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45871_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8860_ICollection_1_CopyTo_m45871_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45871_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
static ParameterInfo ICollection_1_t8860_ICollection_1_Remove_m45872_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t1175_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45872_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45872_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8860_ICollection_1_Remove_m45872_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45872_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8860_MethodInfos[] =
{
	&ICollection_1_get_Count_m45866_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45867_MethodInfo,
	&ICollection_1_Add_m45868_MethodInfo,
	&ICollection_1_Clear_m45869_MethodInfo,
	&ICollection_1_Contains_m45870_MethodInfo,
	&ICollection_1_CopyTo_m45871_MethodInfo,
	&ICollection_1_Remove_m45872_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8862_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8860_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8862_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8860_0_0_0;
extern Il2CppType ICollection_1_t8860_1_0_0;
struct ICollection_1_t8860;
extern Il2CppGenericClass ICollection_1_t8860_GenericClass;
TypeInfo ICollection_1_t8860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8860_MethodInfos/* methods */
	, ICollection_1_t8860_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8860_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8860_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8860_0_0_0/* byval_arg */
	, &ICollection_1_t8860_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8860_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>
extern Il2CppType IEnumerator_1_t6845_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45873_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45873_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8862_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6845_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45873_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8862_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45873_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8862_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8862_0_0_0;
extern Il2CppType IEnumerable_1_t8862_1_0_0;
struct IEnumerable_1_t8862;
extern Il2CppGenericClass IEnumerable_1_t8862_GenericClass;
TypeInfo IEnumerable_1_t8862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8862_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8862_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8862_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8862_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8862_0_0_0/* byval_arg */
	, &IEnumerable_1_t8862_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8862_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8861_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo IList_1_get_Item_m45874_MethodInfo;
extern MethodInfo IList_1_set_Item_m45875_MethodInfo;
static PropertyInfo IList_1_t8861____Item_PropertyInfo = 
{
	&IList_1_t8861_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45874_MethodInfo/* get */
	, &IList_1_set_Item_m45875_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8861_PropertyInfos[] =
{
	&IList_1_t8861____Item_PropertyInfo,
	NULL
};
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
static ParameterInfo IList_1_t8861_IList_1_IndexOf_m45876_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t1175_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45876_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45876_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8861_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8861_IList_1_IndexOf_m45876_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45876_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
static ParameterInfo IList_1_t8861_IList_1_Insert_m45877_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t1175_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45877_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45877_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8861_IList_1_Insert_m45877_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45877_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8861_IList_1_RemoveAt_m45878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45878_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45878_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8861_IList_1_RemoveAt_m45878_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45878_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8861_IList_1_get_Item_m45874_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45874_GenericMethod;
// T System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45874_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8861_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t1175_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8861_IList_1_get_Item_m45874_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45874_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType NeutralResourcesLanguageAttribute_t1175_0_0_0;
static ParameterInfo IList_1_t8861_IList_1_set_Item_m45875_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t1175_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45875_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45875_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8861_IList_1_set_Item_m45875_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45875_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8861_MethodInfos[] =
{
	&IList_1_IndexOf_m45876_MethodInfo,
	&IList_1_Insert_m45877_MethodInfo,
	&IList_1_RemoveAt_m45878_MethodInfo,
	&IList_1_get_Item_m45874_MethodInfo,
	&IList_1_set_Item_m45875_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8861_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8860_il2cpp_TypeInfo,
	&IEnumerable_1_t8862_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8861_0_0_0;
extern Il2CppType IList_1_t8861_1_0_0;
struct IList_1_t8861;
extern Il2CppGenericClass IList_1_t8861_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8861_MethodInfos/* methods */
	, IList_1_t8861_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8861_il2cpp_TypeInfo/* element_class */
	, IList_1_t8861_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8861_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8861_0_0_0/* byval_arg */
	, &IList_1_t8861_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8861_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6847_il2cpp_TypeInfo;

// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m45879_MethodInfo;
static PropertyInfo IEnumerator_1_t6847____Current_PropertyInfo = 
{
	&IEnumerator_1_t6847_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45879_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6847_PropertyInfos[] =
{
	&IEnumerator_1_t6847____Current_PropertyInfo,
	NULL
};
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45879_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45879_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6847_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t1365_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m45879_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6847_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45879_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6847_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6847_0_0_0;
extern Il2CppType IEnumerator_1_t6847_1_0_0;
struct IEnumerator_1_t6847;
extern Il2CppGenericClass IEnumerator_1_t6847_GenericClass;
TypeInfo IEnumerator_1_t6847_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6847_MethodInfos/* methods */
	, IEnumerator_1_t6847_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6847_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6847_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6847_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6847_0_0_0/* byval_arg */
	, &IEnumerator_1_t6847_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6847_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_660.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4826_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_660MethodDeclarations.h"

extern TypeInfo SatelliteContractVersionAttribute_t1365_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26361_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t1365_m35345_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Resources.SatelliteContractVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Resources.SatelliteContractVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t1365_m35345(__this, p0, method) (SatelliteContractVersionAttribute_t1365 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4826____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4826, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4826____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4826, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4826_FieldInfos[] =
{
	&InternalEnumerator_1_t4826____array_0_FieldInfo,
	&InternalEnumerator_1_t4826____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4826____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4826_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4826____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4826_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26361_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4826_PropertyInfos[] =
{
	&InternalEnumerator_1_t4826____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4826____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4826_InternalEnumerator_1__ctor_m26357_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26357_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26357_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4826_InternalEnumerator_1__ctor_m26357_ParameterInfos/* parameters */
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
// System.Object System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26359_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26359_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26359_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26360_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26360_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26360_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26361_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26361_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t1365_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t4826_MethodInfos[] =
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
static MethodInfo* InternalEnumerator_1_t4826_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26358_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26360_MethodInfo,
	&InternalEnumerator_1_Dispose_m26359_MethodInfo,
	&InternalEnumerator_1_get_Current_m26361_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4826_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6847_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4826_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6847_il2cpp_TypeInfo, 7},
};
extern TypeInfo SatelliteContractVersionAttribute_t1365_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4826_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m26361_MethodInfo/* Method Usage */,
	&SatelliteContractVersionAttribute_t1365_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t1365_m35345_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4826_0_0_0;
extern Il2CppType InternalEnumerator_1_t4826_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4826_GenericClass;
TypeInfo InternalEnumerator_1_t4826_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4826_MethodInfos/* methods */
	, InternalEnumerator_1_t4826_PropertyInfos/* properties */
	, InternalEnumerator_1_t4826_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4826_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4826_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4826_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4826_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4826_1_0_0/* this_arg */
	, InternalEnumerator_1_t4826_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4826_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4826_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4826)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8863_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m45880_MethodInfo;
static PropertyInfo ICollection_1_t8863____Count_PropertyInfo = 
{
	&ICollection_1_t8863_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45880_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45881_MethodInfo;
static PropertyInfo ICollection_1_t8863____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8863_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45881_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8863_PropertyInfos[] =
{
	&ICollection_1_t8863____Count_PropertyInfo,
	&ICollection_1_t8863____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45880_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m45880_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m45880_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45881_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45881_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m45881_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
static ParameterInfo ICollection_1_t8863_ICollection_1_Add_m45882_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t1365_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45882_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m45882_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8863_ICollection_1_Add_m45882_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m45882_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45883_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m45883_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m45883_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
static ParameterInfo ICollection_1_t8863_ICollection_1_Contains_m45884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t1365_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45884_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m45884_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8863_ICollection_1_Contains_m45884_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m45884_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttributeU5BU5D_t5088_0_0_0;
extern Il2CppType SatelliteContractVersionAttributeU5BU5D_t5088_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8863_ICollection_1_CopyTo_m45885_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttributeU5BU5D_t5088_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45885_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45885_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8863_ICollection_1_CopyTo_m45885_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m45885_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
static ParameterInfo ICollection_1_t8863_ICollection_1_Remove_m45886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t1365_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45886_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m45886_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8863_ICollection_1_Remove_m45886_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m45886_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8863_MethodInfos[] =
{
	&ICollection_1_get_Count_m45880_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45881_MethodInfo,
	&ICollection_1_Add_m45882_MethodInfo,
	&ICollection_1_Clear_m45883_MethodInfo,
	&ICollection_1_Contains_m45884_MethodInfo,
	&ICollection_1_CopyTo_m45885_MethodInfo,
	&ICollection_1_Remove_m45886_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8865_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8863_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8865_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8863_0_0_0;
extern Il2CppType ICollection_1_t8863_1_0_0;
struct ICollection_1_t8863;
extern Il2CppGenericClass ICollection_1_t8863_GenericClass;
TypeInfo ICollection_1_t8863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8863_MethodInfos/* methods */
	, ICollection_1_t8863_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8863_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8863_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8863_0_0_0/* byval_arg */
	, &ICollection_1_t8863_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8863_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>
extern Il2CppType IEnumerator_1_t6847_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45887_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45887_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8865_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6847_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m45887_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8865_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45887_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8865_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8865_0_0_0;
extern Il2CppType IEnumerable_1_t8865_1_0_0;
struct IEnumerable_1_t8865;
extern Il2CppGenericClass IEnumerable_1_t8865_GenericClass;
TypeInfo IEnumerable_1_t8865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8865_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8865_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8865_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8865_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8865_0_0_0/* byval_arg */
	, &IEnumerable_1_t8865_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8865_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8864_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo IList_1_get_Item_m45888_MethodInfo;
extern MethodInfo IList_1_set_Item_m45889_MethodInfo;
static PropertyInfo IList_1_t8864____Item_PropertyInfo = 
{
	&IList_1_t8864_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45888_MethodInfo/* get */
	, &IList_1_set_Item_m45889_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8864_PropertyInfos[] =
{
	&IList_1_t8864____Item_PropertyInfo,
	NULL
};
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
static ParameterInfo IList_1_t8864_IList_1_IndexOf_m45890_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t1365_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45890_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45890_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8864_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8864_IList_1_IndexOf_m45890_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m45890_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
static ParameterInfo IList_1_t8864_IList_1_Insert_m45891_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t1365_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45891_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45891_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8864_IList_1_Insert_m45891_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m45891_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8864_IList_1_RemoveAt_m45892_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45892_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45892_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8864_IList_1_RemoveAt_m45892_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m45892_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8864_IList_1_get_Item_m45888_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45888_GenericMethod;
// T System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45888_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8864_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t1365_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8864_IList_1_get_Item_m45888_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m45888_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SatelliteContractVersionAttribute_t1365_0_0_0;
static ParameterInfo IList_1_t8864_IList_1_set_Item_m45889_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t1365_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45889_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45889_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8864_IList_1_set_Item_m45889_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m45889_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8864_MethodInfos[] =
{
	&IList_1_IndexOf_m45890_MethodInfo,
	&IList_1_Insert_m45891_MethodInfo,
	&IList_1_RemoveAt_m45892_MethodInfo,
	&IList_1_get_Item_m45888_MethodInfo,
	&IList_1_set_Item_m45889_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8864_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8863_il2cpp_TypeInfo,
	&IEnumerable_1_t8865_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8864_0_0_0;
extern Il2CppType IList_1_t8864_1_0_0;
struct IList_1_t8864;
extern Il2CppGenericClass IList_1_t8864_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8864_MethodInfos/* methods */
	, IList_1_t8864_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8864_il2cpp_TypeInfo/* element_class */
	, IList_1_t8864_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8864_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8864_0_0_0/* byval_arg */
	, &IList_1_t8864_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8864_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6849_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo IEnumerator_1_get_Current_m45893_MethodInfo;
static PropertyInfo IEnumerator_1_t6849____Current_PropertyInfo = 
{
	&IEnumerator_1_t6849_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45893_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6849_PropertyInfos[] =
{
	&IEnumerator_1_t6849____Current_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxations_t2013_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t2013 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45893_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45893_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6849_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t2013_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t2013/* invoker_method */
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
	, &IEnumerator_1_get_Current_m45893_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6849_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45893_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6849_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6849_0_0_0;
extern Il2CppType IEnumerator_1_t6849_1_0_0;
struct IEnumerator_1_t6849;
extern Il2CppGenericClass IEnumerator_1_t6849_GenericClass;
TypeInfo IEnumerator_1_t6849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6849_MethodInfos/* methods */
	, IEnumerator_1_t6849_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6849_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6849_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6849_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6849_0_0_0/* byval_arg */
	, &IEnumerator_1_t6849_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6849_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_661.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4827_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_661MethodDeclarations.h"

extern TypeInfo CompilationRelaxations_t2013_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m26366_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxations_t2013_m35356_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxations>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxations>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCompilationRelaxations_t2013_m35356 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m26362_MethodInfo;
 void InternalEnumerator_1__ctor_m26362 (InternalEnumerator_1_t4827 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363 (InternalEnumerator_1_t4827 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m26366(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m26366_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CompilationRelaxations_t2013_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m26364_MethodInfo;
 void InternalEnumerator_1_Dispose_m26364 (InternalEnumerator_1_t4827 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m26365_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m26365 (InternalEnumerator_1_t4827 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m26366 (InternalEnumerator_1_t4827 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCompilationRelaxations_t2013_m35356(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCompilationRelaxations_t2013_m35356_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4827____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4827, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4827____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4827, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4827_FieldInfos[] =
{
	&InternalEnumerator_1_t4827____array_0_FieldInfo,
	&InternalEnumerator_1_t4827____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4827____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4827_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4827____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4827_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m26366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4827_PropertyInfos[] =
{
	&InternalEnumerator_1_t4827____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4827____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4827_InternalEnumerator_1__ctor_m26362_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m26362_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m26362_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m26362/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4827_InternalEnumerator_1__ctor_m26362_ParameterInfos/* parameters */
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
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m26364_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m26364_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m26364/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m26364_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m26365_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m26365_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m26365/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m26365_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t2013_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t2013 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m26366_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m26366_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m26366/* method */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t2013_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t2013/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t4827_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m26362_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo,
	&InternalEnumerator_1_Dispose_m26364_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26365_MethodInfo,
	&InternalEnumerator_1_get_Current_m26366_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4827_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m26363_MethodInfo,
	&InternalEnumerator_1_MoveNext_m26365_MethodInfo,
	&InternalEnumerator_1_Dispose_m26364_MethodInfo,
	&InternalEnumerator_1_get_Current_m26366_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4827_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6849_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4827_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6849_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4827_0_0_0;
extern Il2CppType InternalEnumerator_1_t4827_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4827_GenericClass;
TypeInfo InternalEnumerator_1_t4827_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4827_MethodInfos/* methods */
	, InternalEnumerator_1_t4827_PropertyInfos/* properties */
	, InternalEnumerator_1_t4827_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4827_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4827_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4827_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4827_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4827_1_0_0/* this_arg */
	, InternalEnumerator_1_t4827_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4827_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4827)+ sizeof (Il2CppObject)/* instance_size */
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
