#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_562.h"
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
extern TypeInfo InternalEnumerator_1_t4724_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_562MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
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
extern TypeInfo ParamArrayAttribute_t338_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1545_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m25863_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6656_MethodInfo;
extern MethodInfo Array_get_Length_m1925_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParamArrayAttribute_t338_m34265_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26983_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26983(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.ParamArrayAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ParamArrayAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisParamArrayAttribute_t338_m34265(__this, p0, method) (ParamArrayAttribute_t338 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4724____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4724, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4724____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4724, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4724_FieldInfos[] =
{
	&InternalEnumerator_1_t4724____array_0_FieldInfo,
	&InternalEnumerator_1_t4724____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25860_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4724____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4724_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25860_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4724____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4724_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25863_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4724_PropertyInfos[] =
{
	&InternalEnumerator_1_t4724____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4724____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4724_InternalEnumerator_1__ctor_m25859_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25859_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25859_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4724_InternalEnumerator_1__ctor_m25859_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25859_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25860_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25860_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25860_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25861_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25861_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25861_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25862_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25862_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25862_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25863_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25863_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t338_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25863_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4724_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25859_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25860_MethodInfo,
	&InternalEnumerator_1_Dispose_m25861_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25862_MethodInfo,
	&InternalEnumerator_1_get_Current_m25863_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m25862_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25861_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4724_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25860_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25862_MethodInfo,
	&InternalEnumerator_1_Dispose_m25861_MethodInfo,
	&InternalEnumerator_1_get_Current_m25863_MethodInfo,
};
extern TypeInfo IEnumerator_t19_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t6654_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t4724_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6654_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4724_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6654_il2cpp_TypeInfo, 7},
};
extern TypeInfo ParamArrayAttribute_t338_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4724_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25863_MethodInfo/* Method Usage */,
	&ParamArrayAttribute_t338_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisParamArrayAttribute_t338_m34265_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4724_0_0_0;
extern Il2CppType InternalEnumerator_1_t4724_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4724_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4724_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4724_MethodInfos/* methods */
	, InternalEnumerator_1_t4724_PropertyInfos/* properties */
	, InternalEnumerator_1_t4724_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4724_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4724_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4724_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4724_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4724_1_0_0/* this_arg */
	, InternalEnumerator_1_t4724_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4724_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4724_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4724)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8569_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>
extern MethodInfo ICollection_1_get_Count_m44508_MethodInfo;
static PropertyInfo ICollection_1_t8569____Count_PropertyInfo = 
{
	&ICollection_1_t8569_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44508_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44509_MethodInfo;
static PropertyInfo ICollection_1_t8569____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8569_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44509_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8569_PropertyInfos[] =
{
	&ICollection_1_t8569____Count_PropertyInfo,
	&ICollection_1_t8569____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44508_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44508_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44508_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44509_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44509_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44509_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
static ParameterInfo ICollection_1_t8569_ICollection_1_Add_m44510_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t338_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44510_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44510_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8569_ICollection_1_Add_m44510_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44510_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44511_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44511_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44511_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
static ParameterInfo ICollection_1_t8569_ICollection_1_Contains_m44512_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t338_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44512_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44512_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8569_ICollection_1_Contains_m44512_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44512_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttributeU5BU5D_t5008_0_0_0;
extern Il2CppType ParamArrayAttributeU5BU5D_t5008_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8569_ICollection_1_CopyTo_m44513_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttributeU5BU5D_t5008_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44513_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44513_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8569_ICollection_1_CopyTo_m44513_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44513_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
static ParameterInfo ICollection_1_t8569_ICollection_1_Remove_m44514_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t338_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44514_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44514_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8569_ICollection_1_Remove_m44514_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44514_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8569_MethodInfos[] =
{
	&ICollection_1_get_Count_m44508_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44509_MethodInfo,
	&ICollection_1_Add_m44510_MethodInfo,
	&ICollection_1_Clear_m44511_MethodInfo,
	&ICollection_1_Contains_m44512_MethodInfo,
	&ICollection_1_CopyTo_m44513_MethodInfo,
	&ICollection_1_Remove_m44514_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8571_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8569_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8571_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8569_0_0_0;
extern Il2CppType ICollection_1_t8569_1_0_0;
struct ICollection_1_t8569;
extern Il2CppGenericClass ICollection_1_t8569_GenericClass;
TypeInfo ICollection_1_t8569_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8569_MethodInfos/* methods */
	, ICollection_1_t8569_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8569_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8569_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8569_0_0_0/* byval_arg */
	, &ICollection_1_t8569_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8569_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>
extern Il2CppType IEnumerator_1_t6654_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44515_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44515_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8571_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6654_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44515_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8571_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44515_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8571_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8571_0_0_0;
extern Il2CppType IEnumerable_1_t8571_1_0_0;
struct IEnumerable_1_t8571;
extern Il2CppGenericClass IEnumerable_1_t8571_GenericClass;
TypeInfo IEnumerable_1_t8571_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8571_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8571_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8571_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8571_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8571_0_0_0/* byval_arg */
	, &IEnumerable_1_t8571_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8571_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8570_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ParamArrayAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ParamArrayAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ParamArrayAttribute>
extern MethodInfo IList_1_get_Item_m44516_MethodInfo;
extern MethodInfo IList_1_set_Item_m44517_MethodInfo;
static PropertyInfo IList_1_t8570____Item_PropertyInfo = 
{
	&IList_1_t8570_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44516_MethodInfo/* get */
	, &IList_1_set_Item_m44517_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8570_PropertyInfos[] =
{
	&IList_1_t8570____Item_PropertyInfo,
	NULL
};
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
static ParameterInfo IList_1_t8570_IList_1_IndexOf_m44518_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t338_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44518_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ParamArrayAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44518_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8570_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8570_IList_1_IndexOf_m44518_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44518_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
static ParameterInfo IList_1_t8570_IList_1_Insert_m44519_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t338_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44519_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44519_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8570_IList_1_Insert_m44519_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44519_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8570_IList_1_RemoveAt_m44520_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44520_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44520_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8570_IList_1_RemoveAt_m44520_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44520_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8570_IList_1_get_Item_m44516_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44516_GenericMethod;
// T System.Collections.Generic.IList`1<System.ParamArrayAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44516_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8570_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t338_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8570_IList_1_get_Item_m44516_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44516_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
static ParameterInfo IList_1_t8570_IList_1_set_Item_m44517_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t338_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44517_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44517_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8570_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8570_IList_1_set_Item_m44517_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44517_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8570_MethodInfos[] =
{
	&IList_1_IndexOf_m44518_MethodInfo,
	&IList_1_Insert_m44519_MethodInfo,
	&IList_1_RemoveAt_m44520_MethodInfo,
	&IList_1_get_Item_m44516_MethodInfo,
	&IList_1_set_Item_m44517_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8570_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8569_il2cpp_TypeInfo,
	&IEnumerable_1_t8571_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8570_0_0_0;
extern Il2CppType IList_1_t8570_1_0_0;
struct IList_1_t8570;
extern Il2CppGenericClass IList_1_t8570_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8570_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8570_MethodInfos/* methods */
	, IList_1_t8570_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8570_il2cpp_TypeInfo/* element_class */
	, IList_1_t8570_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8570_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8570_0_0_0/* byval_arg */
	, &IList_1_t8570_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8570_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6656_il2cpp_TypeInfo;

// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44521_MethodInfo;
static PropertyInfo IEnumerator_1_t6656____Current_PropertyInfo = 
{
	&IEnumerator_1_t6656_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44521_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6656_PropertyInfos[] =
{
	&IEnumerator_1_t6656____Current_PropertyInfo,
	NULL
};
extern Il2CppType OutAttribute_t1768_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44521_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44521_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6656_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t1768_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44521_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6656_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44521_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6656_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6656_0_0_0;
extern Il2CppType IEnumerator_1_t6656_1_0_0;
struct IEnumerator_1_t6656;
extern Il2CppGenericClass IEnumerator_1_t6656_GenericClass;
TypeInfo IEnumerator_1_t6656_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6656_MethodInfos/* methods */
	, IEnumerator_1_t6656_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6656_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6656_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6656_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6656_0_0_0/* byval_arg */
	, &IEnumerator_1_t6656_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6656_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_563.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4725_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_563MethodDeclarations.h"

extern TypeInfo OutAttribute_t1768_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25868_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOutAttribute_t1768_m34276_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OutAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OutAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOutAttribute_t1768_m34276(__this, p0, method) (OutAttribute_t1768 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4725____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4725, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4725____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4725, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4725_FieldInfos[] =
{
	&InternalEnumerator_1_t4725____array_0_FieldInfo,
	&InternalEnumerator_1_t4725____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25865_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4725____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4725_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25865_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4725____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4725_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25868_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4725_PropertyInfos[] =
{
	&InternalEnumerator_1_t4725____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4725____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4725_InternalEnumerator_1__ctor_m25864_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25864_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25864_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4725_InternalEnumerator_1__ctor_m25864_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25864_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25865_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25865_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25865_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25866_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25866_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25866_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25867_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25867_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25867_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t1768_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25868_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25868_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t1768_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25868_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4725_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25864_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25865_MethodInfo,
	&InternalEnumerator_1_Dispose_m25866_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25867_MethodInfo,
	&InternalEnumerator_1_get_Current_m25868_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25867_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25866_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4725_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25865_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25867_MethodInfo,
	&InternalEnumerator_1_Dispose_m25866_MethodInfo,
	&InternalEnumerator_1_get_Current_m25868_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4725_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6656_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4725_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6656_il2cpp_TypeInfo, 7},
};
extern TypeInfo OutAttribute_t1768_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4725_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25868_MethodInfo/* Method Usage */,
	&OutAttribute_t1768_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOutAttribute_t1768_m34276_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4725_0_0_0;
extern Il2CppType InternalEnumerator_1_t4725_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4725_GenericClass;
TypeInfo InternalEnumerator_1_t4725_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4725_MethodInfos/* methods */
	, InternalEnumerator_1_t4725_PropertyInfos/* properties */
	, InternalEnumerator_1_t4725_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4725_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4725_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4725_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4725_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4725_1_0_0/* this_arg */
	, InternalEnumerator_1_t4725_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4725_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4725_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4725)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8572_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo ICollection_1_get_Count_m44522_MethodInfo;
static PropertyInfo ICollection_1_t8572____Count_PropertyInfo = 
{
	&ICollection_1_t8572_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44522_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44523_MethodInfo;
static PropertyInfo ICollection_1_t8572____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8572_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44523_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8572_PropertyInfos[] =
{
	&ICollection_1_t8572____Count_PropertyInfo,
	&ICollection_1_t8572____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44522_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44522_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44522_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44523_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44523_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44523_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t1768_0_0_0;
extern Il2CppType OutAttribute_t1768_0_0_0;
static ParameterInfo ICollection_1_t8572_ICollection_1_Add_m44524_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1768_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44524_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44524_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8572_ICollection_1_Add_m44524_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44524_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44525_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44525_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44525_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t1768_0_0_0;
static ParameterInfo ICollection_1_t8572_ICollection_1_Contains_m44526_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1768_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44526_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44526_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8572_ICollection_1_Contains_m44526_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44526_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttributeU5BU5D_t5009_0_0_0;
extern Il2CppType OutAttributeU5BU5D_t5009_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8572_ICollection_1_CopyTo_m44527_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OutAttributeU5BU5D_t5009_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44527_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44527_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8572_ICollection_1_CopyTo_m44527_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44527_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t1768_0_0_0;
static ParameterInfo ICollection_1_t8572_ICollection_1_Remove_m44528_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1768_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44528_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44528_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8572_ICollection_1_Remove_m44528_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44528_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8572_MethodInfos[] =
{
	&ICollection_1_get_Count_m44522_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44523_MethodInfo,
	&ICollection_1_Add_m44524_MethodInfo,
	&ICollection_1_Clear_m44525_MethodInfo,
	&ICollection_1_Contains_m44526_MethodInfo,
	&ICollection_1_CopyTo_m44527_MethodInfo,
	&ICollection_1_Remove_m44528_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8574_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8572_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8574_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8572_0_0_0;
extern Il2CppType ICollection_1_t8572_1_0_0;
struct ICollection_1_t8572;
extern Il2CppGenericClass ICollection_1_t8572_GenericClass;
TypeInfo ICollection_1_t8572_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8572_MethodInfos/* methods */
	, ICollection_1_t8572_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8572_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8572_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8572_0_0_0/* byval_arg */
	, &ICollection_1_t8572_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8572_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType IEnumerator_1_t6656_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44529_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44529_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8574_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6656_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44529_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8574_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44529_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8574_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8574_0_0_0;
extern Il2CppType IEnumerable_1_t8574_1_0_0;
struct IEnumerable_1_t8574;
extern Il2CppGenericClass IEnumerable_1_t8574_GenericClass;
TypeInfo IEnumerable_1_t8574_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8574_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8574_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8574_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8574_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8574_0_0_0/* byval_arg */
	, &IEnumerable_1_t8574_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8574_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8573_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo IList_1_get_Item_m44530_MethodInfo;
extern MethodInfo IList_1_set_Item_m44531_MethodInfo;
static PropertyInfo IList_1_t8573____Item_PropertyInfo = 
{
	&IList_1_t8573_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44530_MethodInfo/* get */
	, &IList_1_set_Item_m44531_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8573_PropertyInfos[] =
{
	&IList_1_t8573____Item_PropertyInfo,
	NULL
};
extern Il2CppType OutAttribute_t1768_0_0_0;
static ParameterInfo IList_1_t8573_IList_1_IndexOf_m44532_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1768_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44532_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44532_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8573_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8573_IList_1_IndexOf_m44532_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44532_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType OutAttribute_t1768_0_0_0;
static ParameterInfo IList_1_t8573_IList_1_Insert_m44533_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1768_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44533_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44533_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8573_IList_1_Insert_m44533_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44533_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8573_IList_1_RemoveAt_m44534_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44534_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44534_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8573_IList_1_RemoveAt_m44534_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44534_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8573_IList_1_get_Item_m44530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType OutAttribute_t1768_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44530_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44530_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8573_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t1768_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8573_IList_1_get_Item_m44530_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44530_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType OutAttribute_t1768_0_0_0;
static ParameterInfo IList_1_t8573_IList_1_set_Item_m44531_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1768_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44531_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44531_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8573_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8573_IList_1_set_Item_m44531_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44531_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8573_MethodInfos[] =
{
	&IList_1_IndexOf_m44532_MethodInfo,
	&IList_1_Insert_m44533_MethodInfo,
	&IList_1_RemoveAt_m44534_MethodInfo,
	&IList_1_get_Item_m44530_MethodInfo,
	&IList_1_set_Item_m44531_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8573_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8572_il2cpp_TypeInfo,
	&IEnumerable_1_t8574_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8573_0_0_0;
extern Il2CppType IList_1_t8573_1_0_0;
struct IList_1_t8573;
extern Il2CppGenericClass IList_1_t8573_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8573_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8573_MethodInfos/* methods */
	, IList_1_t8573_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8573_il2cpp_TypeInfo/* element_class */
	, IList_1_t8573_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8573_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8573_0_0_0/* byval_arg */
	, &IList_1_t8573_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8573_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6658_il2cpp_TypeInfo;

// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44535_MethodInfo;
static PropertyInfo IEnumerator_1_t6658____Current_PropertyInfo = 
{
	&IEnumerator_1_t6658_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44535_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6658_PropertyInfos[] =
{
	&IEnumerator_1_t6658____Current_PropertyInfo,
	NULL
};
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44535_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44535_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6658_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t78_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44535_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6658_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44535_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6658_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6658_0_0_0;
extern Il2CppType IEnumerator_1_t6658_1_0_0;
struct IEnumerator_1_t6658;
extern Il2CppGenericClass IEnumerator_1_t6658_GenericClass;
TypeInfo IEnumerator_1_t6658_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6658_MethodInfos/* methods */
	, IEnumerator_1_t6658_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6658_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6658_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6658_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6658_0_0_0/* byval_arg */
	, &IEnumerator_1_t6658_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6658_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_564.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4726_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_564MethodDeclarations.h"

extern TypeInfo ObsoleteAttribute_t78_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25873_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisObsoleteAttribute_t78_m34287_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ObsoleteAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ObsoleteAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisObsoleteAttribute_t78_m34287(__this, p0, method) (ObsoleteAttribute_t78 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4726____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4726, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4726____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4726, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4726_FieldInfos[] =
{
	&InternalEnumerator_1_t4726____array_0_FieldInfo,
	&InternalEnumerator_1_t4726____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25870_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4726____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4726_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25870_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4726____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4726_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25873_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4726_PropertyInfos[] =
{
	&InternalEnumerator_1_t4726____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4726____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4726_InternalEnumerator_1__ctor_m25869_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25869_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25869_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4726_InternalEnumerator_1__ctor_m25869_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25869_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25870_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25870_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25870_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25871_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25871_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25871_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25872_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25872_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25872_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25873_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25873_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t78_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25873_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4726_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25869_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25870_MethodInfo,
	&InternalEnumerator_1_Dispose_m25871_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25872_MethodInfo,
	&InternalEnumerator_1_get_Current_m25873_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25872_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25871_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4726_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25870_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25872_MethodInfo,
	&InternalEnumerator_1_Dispose_m25871_MethodInfo,
	&InternalEnumerator_1_get_Current_m25873_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4726_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6658_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4726_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6658_il2cpp_TypeInfo, 7},
};
extern TypeInfo ObsoleteAttribute_t78_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4726_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25873_MethodInfo/* Method Usage */,
	&ObsoleteAttribute_t78_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisObsoleteAttribute_t78_m34287_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4726_0_0_0;
extern Il2CppType InternalEnumerator_1_t4726_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4726_GenericClass;
TypeInfo InternalEnumerator_1_t4726_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4726_MethodInfos/* methods */
	, InternalEnumerator_1_t4726_PropertyInfos/* properties */
	, InternalEnumerator_1_t4726_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4726_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4726_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4726_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4726_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4726_1_0_0/* this_arg */
	, InternalEnumerator_1_t4726_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4726_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4726_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4726)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8575_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>
extern MethodInfo ICollection_1_get_Count_m44536_MethodInfo;
static PropertyInfo ICollection_1_t8575____Count_PropertyInfo = 
{
	&ICollection_1_t8575_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44536_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44537_MethodInfo;
static PropertyInfo ICollection_1_t8575____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8575_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44537_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8575_PropertyInfos[] =
{
	&ICollection_1_t8575____Count_PropertyInfo,
	&ICollection_1_t8575____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44536_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44536_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44536_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44537_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44537_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44537_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
static ParameterInfo ICollection_1_t8575_ICollection_1_Add_m44538_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t78_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44538_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44538_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8575_ICollection_1_Add_m44538_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44538_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44539_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44539_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44539_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
static ParameterInfo ICollection_1_t8575_ICollection_1_Contains_m44540_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t78_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44540_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44540_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8575_ICollection_1_Contains_m44540_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44540_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttributeU5BU5D_t5010_0_0_0;
extern Il2CppType ObsoleteAttributeU5BU5D_t5010_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8575_ICollection_1_CopyTo_m44541_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttributeU5BU5D_t5010_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44541_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44541_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8575_ICollection_1_CopyTo_m44541_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44541_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
static ParameterInfo ICollection_1_t8575_ICollection_1_Remove_m44542_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t78_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44542_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44542_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8575_ICollection_1_Remove_m44542_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44542_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8575_MethodInfos[] =
{
	&ICollection_1_get_Count_m44536_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44537_MethodInfo,
	&ICollection_1_Add_m44538_MethodInfo,
	&ICollection_1_Clear_m44539_MethodInfo,
	&ICollection_1_Contains_m44540_MethodInfo,
	&ICollection_1_CopyTo_m44541_MethodInfo,
	&ICollection_1_Remove_m44542_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8577_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8575_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8577_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8575_0_0_0;
extern Il2CppType ICollection_1_t8575_1_0_0;
struct ICollection_1_t8575;
extern Il2CppGenericClass ICollection_1_t8575_GenericClass;
TypeInfo ICollection_1_t8575_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8575_MethodInfos/* methods */
	, ICollection_1_t8575_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8575_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8575_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8575_0_0_0/* byval_arg */
	, &ICollection_1_t8575_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8575_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>
extern Il2CppType IEnumerator_1_t6658_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44543_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44543_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8577_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6658_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44543_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8577_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44543_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8577_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8577_0_0_0;
extern Il2CppType IEnumerable_1_t8577_1_0_0;
struct IEnumerable_1_t8577;
extern Il2CppGenericClass IEnumerable_1_t8577_GenericClass;
TypeInfo IEnumerable_1_t8577_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8577_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8577_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8577_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8577_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8577_0_0_0/* byval_arg */
	, &IEnumerable_1_t8577_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8577_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8576_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ObsoleteAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ObsoleteAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ObsoleteAttribute>
extern MethodInfo IList_1_get_Item_m44544_MethodInfo;
extern MethodInfo IList_1_set_Item_m44545_MethodInfo;
static PropertyInfo IList_1_t8576____Item_PropertyInfo = 
{
	&IList_1_t8576_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44544_MethodInfo/* get */
	, &IList_1_set_Item_m44545_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8576_PropertyInfos[] =
{
	&IList_1_t8576____Item_PropertyInfo,
	NULL
};
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
static ParameterInfo IList_1_t8576_IList_1_IndexOf_m44546_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t78_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44546_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ObsoleteAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44546_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8576_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8576_IList_1_IndexOf_m44546_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44546_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
static ParameterInfo IList_1_t8576_IList_1_Insert_m44547_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t78_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44547_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44547_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8576_IList_1_Insert_m44547_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44547_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8576_IList_1_RemoveAt_m44548_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44548_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44548_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8576_IList_1_RemoveAt_m44548_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44548_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8576_IList_1_get_Item_m44544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44544_GenericMethod;
// T System.Collections.Generic.IList`1<System.ObsoleteAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44544_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8576_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t78_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8576_IList_1_get_Item_m44544_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44544_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ObsoleteAttribute_t78_0_0_0;
static ParameterInfo IList_1_t8576_IList_1_set_Item_m44545_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t78_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44545_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44545_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8576_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8576_IList_1_set_Item_m44545_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44545_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8576_MethodInfos[] =
{
	&IList_1_IndexOf_m44546_MethodInfo,
	&IList_1_Insert_m44547_MethodInfo,
	&IList_1_RemoveAt_m44548_MethodInfo,
	&IList_1_get_Item_m44544_MethodInfo,
	&IList_1_set_Item_m44545_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8576_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8575_il2cpp_TypeInfo,
	&IEnumerable_1_t8577_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8576_0_0_0;
extern Il2CppType IList_1_t8576_1_0_0;
struct IList_1_t8576;
extern Il2CppGenericClass IList_1_t8576_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8576_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8576_MethodInfos/* methods */
	, IList_1_t8576_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8576_il2cpp_TypeInfo/* element_class */
	, IList_1_t8576_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8576_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8576_0_0_0/* byval_arg */
	, &IList_1_t8576_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8576_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6660_il2cpp_TypeInfo;

// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44549_MethodInfo;
static PropertyInfo IEnumerator_1_t6660____Current_PropertyInfo = 
{
	&IEnumerator_1_t6660_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44549_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6660_PropertyInfos[] =
{
	&IEnumerator_1_t6660____Current_PropertyInfo,
	NULL
};
extern Il2CppType DllImportAttribute_t1769_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44549_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44549_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6660_il2cpp_TypeInfo/* declaring_type */
	, &DllImportAttribute_t1769_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44549_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6660_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44549_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6660_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6660_0_0_0;
extern Il2CppType IEnumerator_1_t6660_1_0_0;
struct IEnumerator_1_t6660;
extern Il2CppGenericClass IEnumerator_1_t6660_GenericClass;
TypeInfo IEnumerator_1_t6660_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6660_MethodInfos/* methods */
	, IEnumerator_1_t6660_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6660_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6660_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6660_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6660_0_0_0/* byval_arg */
	, &IEnumerator_1_t6660_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6660_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_565.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4727_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_565MethodDeclarations.h"

extern TypeInfo DllImportAttribute_t1769_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25878_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDllImportAttribute_t1769_m34298_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DllImportAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DllImportAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDllImportAttribute_t1769_m34298(__this, p0, method) (DllImportAttribute_t1769 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4727____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4727, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4727____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4727, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4727_FieldInfos[] =
{
	&InternalEnumerator_1_t4727____array_0_FieldInfo,
	&InternalEnumerator_1_t4727____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25875_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4727____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4727_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25875_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4727____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4727_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25878_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4727_PropertyInfos[] =
{
	&InternalEnumerator_1_t4727____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4727____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4727_InternalEnumerator_1__ctor_m25874_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25874_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25874_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4727_InternalEnumerator_1__ctor_m25874_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25874_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25875_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25875_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25875_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25876_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25876_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25876_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25877_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25877_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25877_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t1769_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25878_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25878_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* declaring_type */
	, &DllImportAttribute_t1769_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25878_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4727_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25874_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25875_MethodInfo,
	&InternalEnumerator_1_Dispose_m25876_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25877_MethodInfo,
	&InternalEnumerator_1_get_Current_m25878_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25877_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25876_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4727_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25875_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25877_MethodInfo,
	&InternalEnumerator_1_Dispose_m25876_MethodInfo,
	&InternalEnumerator_1_get_Current_m25878_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4727_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6660_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4727_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6660_il2cpp_TypeInfo, 7},
};
extern TypeInfo DllImportAttribute_t1769_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4727_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25878_MethodInfo/* Method Usage */,
	&DllImportAttribute_t1769_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDllImportAttribute_t1769_m34298_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4727_0_0_0;
extern Il2CppType InternalEnumerator_1_t4727_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4727_GenericClass;
TypeInfo InternalEnumerator_1_t4727_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4727_MethodInfos/* methods */
	, InternalEnumerator_1_t4727_PropertyInfos/* properties */
	, InternalEnumerator_1_t4727_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4727_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4727_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4727_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4727_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4727_1_0_0/* this_arg */
	, InternalEnumerator_1_t4727_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4727_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4727_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4727)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8578_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo ICollection_1_get_Count_m44550_MethodInfo;
static PropertyInfo ICollection_1_t8578____Count_PropertyInfo = 
{
	&ICollection_1_t8578_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44550_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44551_MethodInfo;
static PropertyInfo ICollection_1_t8578____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8578_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44551_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8578_PropertyInfos[] =
{
	&ICollection_1_t8578____Count_PropertyInfo,
	&ICollection_1_t8578____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44550_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44550_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44550_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44551_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44551_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44551_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t1769_0_0_0;
extern Il2CppType DllImportAttribute_t1769_0_0_0;
static ParameterInfo ICollection_1_t8578_ICollection_1_Add_m44552_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1769_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44552_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44552_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8578_ICollection_1_Add_m44552_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44552_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44553_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44553_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44553_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t1769_0_0_0;
static ParameterInfo ICollection_1_t8578_ICollection_1_Contains_m44554_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1769_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44554_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44554_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8578_ICollection_1_Contains_m44554_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44554_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttributeU5BU5D_t5011_0_0_0;
extern Il2CppType DllImportAttributeU5BU5D_t5011_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8578_ICollection_1_CopyTo_m44555_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttributeU5BU5D_t5011_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44555_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44555_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8578_ICollection_1_CopyTo_m44555_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44555_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t1769_0_0_0;
static ParameterInfo ICollection_1_t8578_ICollection_1_Remove_m44556_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1769_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44556_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44556_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8578_ICollection_1_Remove_m44556_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44556_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8578_MethodInfos[] =
{
	&ICollection_1_get_Count_m44550_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44551_MethodInfo,
	&ICollection_1_Add_m44552_MethodInfo,
	&ICollection_1_Clear_m44553_MethodInfo,
	&ICollection_1_Contains_m44554_MethodInfo,
	&ICollection_1_CopyTo_m44555_MethodInfo,
	&ICollection_1_Remove_m44556_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8580_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8578_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8580_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8578_0_0_0;
extern Il2CppType ICollection_1_t8578_1_0_0;
struct ICollection_1_t8578;
extern Il2CppGenericClass ICollection_1_t8578_GenericClass;
TypeInfo ICollection_1_t8578_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8578_MethodInfos/* methods */
	, ICollection_1_t8578_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8578_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8578_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8578_0_0_0/* byval_arg */
	, &ICollection_1_t8578_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8578_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType IEnumerator_1_t6660_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44557_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44557_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8580_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6660_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44557_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8580_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44557_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8580_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8580_0_0_0;
extern Il2CppType IEnumerable_1_t8580_1_0_0;
struct IEnumerable_1_t8580;
extern Il2CppGenericClass IEnumerable_1_t8580_GenericClass;
TypeInfo IEnumerable_1_t8580_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8580_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8580_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8580_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8580_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8580_0_0_0/* byval_arg */
	, &IEnumerable_1_t8580_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8580_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8579_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo IList_1_get_Item_m44558_MethodInfo;
extern MethodInfo IList_1_set_Item_m44559_MethodInfo;
static PropertyInfo IList_1_t8579____Item_PropertyInfo = 
{
	&IList_1_t8579_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44558_MethodInfo/* get */
	, &IList_1_set_Item_m44559_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8579_PropertyInfos[] =
{
	&IList_1_t8579____Item_PropertyInfo,
	NULL
};
extern Il2CppType DllImportAttribute_t1769_0_0_0;
static ParameterInfo IList_1_t8579_IList_1_IndexOf_m44560_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1769_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44560_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44560_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8579_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8579_IList_1_IndexOf_m44560_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44560_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DllImportAttribute_t1769_0_0_0;
static ParameterInfo IList_1_t8579_IList_1_Insert_m44561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1769_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44561_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44561_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8579_IList_1_Insert_m44561_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44561_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8579_IList_1_RemoveAt_m44562_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44562_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44562_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8579_IList_1_RemoveAt_m44562_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44562_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8579_IList_1_get_Item_m44558_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DllImportAttribute_t1769_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44558_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44558_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8579_il2cpp_TypeInfo/* declaring_type */
	, &DllImportAttribute_t1769_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8579_IList_1_get_Item_m44558_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44558_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DllImportAttribute_t1769_0_0_0;
static ParameterInfo IList_1_t8579_IList_1_set_Item_m44559_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1769_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44559_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44559_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8579_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8579_IList_1_set_Item_m44559_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44559_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8579_MethodInfos[] =
{
	&IList_1_IndexOf_m44560_MethodInfo,
	&IList_1_Insert_m44561_MethodInfo,
	&IList_1_RemoveAt_m44562_MethodInfo,
	&IList_1_get_Item_m44558_MethodInfo,
	&IList_1_set_Item_m44559_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8579_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8578_il2cpp_TypeInfo,
	&IEnumerable_1_t8580_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8579_0_0_0;
extern Il2CppType IList_1_t8579_1_0_0;
struct IList_1_t8579;
extern Il2CppGenericClass IList_1_t8579_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8579_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8579_MethodInfos/* methods */
	, IList_1_t8579_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8579_il2cpp_TypeInfo/* element_class */
	, IList_1_t8579_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8579_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8579_0_0_0/* byval_arg */
	, &IList_1_t8579_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8579_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6662_il2cpp_TypeInfo;

// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44563_MethodInfo;
static PropertyInfo IEnumerator_1_t6662____Current_PropertyInfo = 
{
	&IEnumerator_1_t6662_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44563_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6662_PropertyInfos[] =
{
	&IEnumerator_1_t6662____Current_PropertyInfo,
	NULL
};
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44563_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44563_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6662_il2cpp_TypeInfo/* declaring_type */
	, &MarshalAsAttribute_t1770_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44563_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6662_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44563_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6662_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6662_0_0_0;
extern Il2CppType IEnumerator_1_t6662_1_0_0;
struct IEnumerator_1_t6662;
extern Il2CppGenericClass IEnumerator_1_t6662_GenericClass;
TypeInfo IEnumerator_1_t6662_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6662_MethodInfos/* methods */
	, IEnumerator_1_t6662_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6662_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6662_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6662_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6662_0_0_0/* byval_arg */
	, &IEnumerator_1_t6662_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6662_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_566.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4728_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_566MethodDeclarations.h"

extern TypeInfo MarshalAsAttribute_t1770_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25883_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMarshalAsAttribute_t1770_m34309_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.MarshalAsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.MarshalAsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMarshalAsAttribute_t1770_m34309(__this, p0, method) (MarshalAsAttribute_t1770 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4728____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4728, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4728____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4728, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4728_FieldInfos[] =
{
	&InternalEnumerator_1_t4728____array_0_FieldInfo,
	&InternalEnumerator_1_t4728____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25880_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4728____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4728_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25880_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4728____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4728_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25883_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4728_PropertyInfos[] =
{
	&InternalEnumerator_1_t4728____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4728____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4728_InternalEnumerator_1__ctor_m25879_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25879_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25879_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4728_InternalEnumerator_1__ctor_m25879_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25879_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25880_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25880_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25880_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25881_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25881_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25881_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25882_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25882_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25882_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25883_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25883_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* declaring_type */
	, &MarshalAsAttribute_t1770_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25883_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4728_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25879_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25880_MethodInfo,
	&InternalEnumerator_1_Dispose_m25881_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25882_MethodInfo,
	&InternalEnumerator_1_get_Current_m25883_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25882_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25881_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4728_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25880_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25882_MethodInfo,
	&InternalEnumerator_1_Dispose_m25881_MethodInfo,
	&InternalEnumerator_1_get_Current_m25883_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4728_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6662_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4728_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6662_il2cpp_TypeInfo, 7},
};
extern TypeInfo MarshalAsAttribute_t1770_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4728_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25883_MethodInfo/* Method Usage */,
	&MarshalAsAttribute_t1770_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMarshalAsAttribute_t1770_m34309_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4728_0_0_0;
extern Il2CppType InternalEnumerator_1_t4728_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4728_GenericClass;
TypeInfo InternalEnumerator_1_t4728_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4728_MethodInfos/* methods */
	, InternalEnumerator_1_t4728_PropertyInfos/* properties */
	, InternalEnumerator_1_t4728_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4728_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4728_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4728_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4728_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4728_1_0_0/* this_arg */
	, InternalEnumerator_1_t4728_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4728_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4728_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4728)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8581_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo ICollection_1_get_Count_m44564_MethodInfo;
static PropertyInfo ICollection_1_t8581____Count_PropertyInfo = 
{
	&ICollection_1_t8581_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44564_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44565_MethodInfo;
static PropertyInfo ICollection_1_t8581____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8581_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44565_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8581_PropertyInfos[] =
{
	&ICollection_1_t8581____Count_PropertyInfo,
	&ICollection_1_t8581____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44564_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44564_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44564_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44565_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44565_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44565_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
static ParameterInfo ICollection_1_t8581_ICollection_1_Add_m44566_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1770_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44566_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44566_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8581_ICollection_1_Add_m44566_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44566_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44567_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44567_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44567_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
static ParameterInfo ICollection_1_t8581_ICollection_1_Contains_m44568_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1770_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44568_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44568_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8581_ICollection_1_Contains_m44568_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44568_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttributeU5BU5D_t5012_0_0_0;
extern Il2CppType MarshalAsAttributeU5BU5D_t5012_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8581_ICollection_1_CopyTo_m44569_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttributeU5BU5D_t5012_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44569_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44569_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8581_ICollection_1_CopyTo_m44569_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44569_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
static ParameterInfo ICollection_1_t8581_ICollection_1_Remove_m44570_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1770_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44570_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44570_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8581_ICollection_1_Remove_m44570_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44570_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8581_MethodInfos[] =
{
	&ICollection_1_get_Count_m44564_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44565_MethodInfo,
	&ICollection_1_Add_m44566_MethodInfo,
	&ICollection_1_Clear_m44567_MethodInfo,
	&ICollection_1_Contains_m44568_MethodInfo,
	&ICollection_1_CopyTo_m44569_MethodInfo,
	&ICollection_1_Remove_m44570_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8583_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8581_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8583_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8581_0_0_0;
extern Il2CppType ICollection_1_t8581_1_0_0;
struct ICollection_1_t8581;
extern Il2CppGenericClass ICollection_1_t8581_GenericClass;
TypeInfo ICollection_1_t8581_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8581_MethodInfos/* methods */
	, ICollection_1_t8581_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8581_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8581_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8581_0_0_0/* byval_arg */
	, &ICollection_1_t8581_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8581_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern Il2CppType IEnumerator_1_t6662_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44571_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44571_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8583_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6662_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44571_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8583_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44571_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8583_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8583_0_0_0;
extern Il2CppType IEnumerable_1_t8583_1_0_0;
struct IEnumerable_1_t8583;
extern Il2CppGenericClass IEnumerable_1_t8583_GenericClass;
TypeInfo IEnumerable_1_t8583_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8583_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8583_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8583_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8583_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8583_0_0_0/* byval_arg */
	, &IEnumerable_1_t8583_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8583_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8582_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo IList_1_get_Item_m44572_MethodInfo;
extern MethodInfo IList_1_set_Item_m44573_MethodInfo;
static PropertyInfo IList_1_t8582____Item_PropertyInfo = 
{
	&IList_1_t8582_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44572_MethodInfo/* get */
	, &IList_1_set_Item_m44573_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8582_PropertyInfos[] =
{
	&IList_1_t8582____Item_PropertyInfo,
	NULL
};
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
static ParameterInfo IList_1_t8582_IList_1_IndexOf_m44574_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1770_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44574_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44574_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8582_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8582_IList_1_IndexOf_m44574_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44574_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
static ParameterInfo IList_1_t8582_IList_1_Insert_m44575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1770_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44575_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44575_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8582_IList_1_Insert_m44575_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44575_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8582_IList_1_RemoveAt_m44576_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44576_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44576_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8582_IList_1_RemoveAt_m44576_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44576_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8582_IList_1_get_Item_m44572_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44572_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44572_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8582_il2cpp_TypeInfo/* declaring_type */
	, &MarshalAsAttribute_t1770_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8582_IList_1_get_Item_m44572_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44572_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MarshalAsAttribute_t1770_0_0_0;
static ParameterInfo IList_1_t8582_IList_1_set_Item_m44573_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1770_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44573_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44573_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8582_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8582_IList_1_set_Item_m44573_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44573_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8582_MethodInfos[] =
{
	&IList_1_IndexOf_m44574_MethodInfo,
	&IList_1_Insert_m44575_MethodInfo,
	&IList_1_RemoveAt_m44576_MethodInfo,
	&IList_1_get_Item_m44572_MethodInfo,
	&IList_1_set_Item_m44573_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8582_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8581_il2cpp_TypeInfo,
	&IEnumerable_1_t8583_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8582_0_0_0;
extern Il2CppType IList_1_t8582_1_0_0;
struct IList_1_t8582;
extern Il2CppGenericClass IList_1_t8582_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8582_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8582_MethodInfos/* methods */
	, IList_1_t8582_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8582_il2cpp_TypeInfo/* element_class */
	, IList_1_t8582_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8582_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8582_0_0_0/* byval_arg */
	, &IList_1_t8582_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8582_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6664_il2cpp_TypeInfo;

// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44577_MethodInfo;
static PropertyInfo IEnumerator_1_t6664____Current_PropertyInfo = 
{
	&IEnumerator_1_t6664_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44577_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6664_PropertyInfos[] =
{
	&IEnumerator_1_t6664____Current_PropertyInfo,
	NULL
};
extern Il2CppType InAttribute_t1771_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44577_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44577_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6664_il2cpp_TypeInfo/* declaring_type */
	, &InAttribute_t1771_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44577_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6664_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44577_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6664_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6664_0_0_0;
extern Il2CppType IEnumerator_1_t6664_1_0_0;
struct IEnumerator_1_t6664;
extern Il2CppGenericClass IEnumerator_1_t6664_GenericClass;
TypeInfo IEnumerator_1_t6664_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6664_MethodInfos/* methods */
	, IEnumerator_1_t6664_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6664_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6664_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6664_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6664_0_0_0/* byval_arg */
	, &IEnumerator_1_t6664_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6664_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_567.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4729_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_567MethodDeclarations.h"

extern TypeInfo InAttribute_t1771_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25888_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInAttribute_t1771_m34320_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.InAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.InAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisInAttribute_t1771_m34320(__this, p0, method) (InAttribute_t1771 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4729____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4729, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4729____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4729, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4729_FieldInfos[] =
{
	&InternalEnumerator_1_t4729____array_0_FieldInfo,
	&InternalEnumerator_1_t4729____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25885_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4729____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4729_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25885_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4729____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4729_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25888_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4729_PropertyInfos[] =
{
	&InternalEnumerator_1_t4729____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4729____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4729_InternalEnumerator_1__ctor_m25884_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25884_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25884_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4729_InternalEnumerator_1__ctor_m25884_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25884_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25885_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25885_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25885_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25886_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25886_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25886_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25887_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25887_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25887_GenericMethod/* genericMethod */

};
extern Il2CppType InAttribute_t1771_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25888_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25888_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* declaring_type */
	, &InAttribute_t1771_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25888_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4729_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25884_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25885_MethodInfo,
	&InternalEnumerator_1_Dispose_m25886_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25887_MethodInfo,
	&InternalEnumerator_1_get_Current_m25888_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25887_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25886_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4729_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25885_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25887_MethodInfo,
	&InternalEnumerator_1_Dispose_m25886_MethodInfo,
	&InternalEnumerator_1_get_Current_m25888_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4729_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6664_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4729_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6664_il2cpp_TypeInfo, 7},
};
extern TypeInfo InAttribute_t1771_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4729_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25888_MethodInfo/* Method Usage */,
	&InAttribute_t1771_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisInAttribute_t1771_m34320_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4729_0_0_0;
extern Il2CppType InternalEnumerator_1_t4729_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4729_GenericClass;
TypeInfo InternalEnumerator_1_t4729_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4729_MethodInfos/* methods */
	, InternalEnumerator_1_t4729_PropertyInfos/* properties */
	, InternalEnumerator_1_t4729_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4729_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4729_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4729_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4729_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4729_1_0_0/* this_arg */
	, InternalEnumerator_1_t4729_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4729_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4729_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4729)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8584_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo ICollection_1_get_Count_m44578_MethodInfo;
static PropertyInfo ICollection_1_t8584____Count_PropertyInfo = 
{
	&ICollection_1_t8584_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44578_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44579_MethodInfo;
static PropertyInfo ICollection_1_t8584____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8584_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44579_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8584_PropertyInfos[] =
{
	&ICollection_1_t8584____Count_PropertyInfo,
	&ICollection_1_t8584____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44578_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44578_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44578_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44579_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44579_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44579_GenericMethod/* genericMethod */

};
extern Il2CppType InAttribute_t1771_0_0_0;
extern Il2CppType InAttribute_t1771_0_0_0;
static ParameterInfo ICollection_1_t8584_ICollection_1_Add_m44580_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1771_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44580_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44580_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8584_ICollection_1_Add_m44580_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44580_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44581_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44581_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44581_GenericMethod/* genericMethod */

};
extern Il2CppType InAttribute_t1771_0_0_0;
static ParameterInfo ICollection_1_t8584_ICollection_1_Contains_m44582_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1771_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44582_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44582_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8584_ICollection_1_Contains_m44582_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44582_GenericMethod/* genericMethod */

};
extern Il2CppType InAttributeU5BU5D_t5013_0_0_0;
extern Il2CppType InAttributeU5BU5D_t5013_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8584_ICollection_1_CopyTo_m44583_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InAttributeU5BU5D_t5013_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44583_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44583_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8584_ICollection_1_CopyTo_m44583_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44583_GenericMethod/* genericMethod */

};
extern Il2CppType InAttribute_t1771_0_0_0;
static ParameterInfo ICollection_1_t8584_ICollection_1_Remove_m44584_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1771_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44584_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44584_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8584_ICollection_1_Remove_m44584_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44584_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8584_MethodInfos[] =
{
	&ICollection_1_get_Count_m44578_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44579_MethodInfo,
	&ICollection_1_Add_m44580_MethodInfo,
	&ICollection_1_Clear_m44581_MethodInfo,
	&ICollection_1_Contains_m44582_MethodInfo,
	&ICollection_1_CopyTo_m44583_MethodInfo,
	&ICollection_1_Remove_m44584_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8586_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8584_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8586_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8584_0_0_0;
extern Il2CppType ICollection_1_t8584_1_0_0;
struct ICollection_1_t8584;
extern Il2CppGenericClass ICollection_1_t8584_GenericClass;
TypeInfo ICollection_1_t8584_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8584_MethodInfos/* methods */
	, ICollection_1_t8584_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8584_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8584_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8584_0_0_0/* byval_arg */
	, &ICollection_1_t8584_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8584_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>
extern Il2CppType IEnumerator_1_t6664_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44585_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44585_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8586_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6664_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44585_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8586_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44585_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8586_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8586_0_0_0;
extern Il2CppType IEnumerable_1_t8586_1_0_0;
struct IEnumerable_1_t8586;
extern Il2CppGenericClass IEnumerable_1_t8586_GenericClass;
TypeInfo IEnumerable_1_t8586_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8586_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8586_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8586_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8586_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8586_0_0_0/* byval_arg */
	, &IEnumerable_1_t8586_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8586_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8585_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo IList_1_get_Item_m44586_MethodInfo;
extern MethodInfo IList_1_set_Item_m44587_MethodInfo;
static PropertyInfo IList_1_t8585____Item_PropertyInfo = 
{
	&IList_1_t8585_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44586_MethodInfo/* get */
	, &IList_1_set_Item_m44587_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8585_PropertyInfos[] =
{
	&IList_1_t8585____Item_PropertyInfo,
	NULL
};
extern Il2CppType InAttribute_t1771_0_0_0;
static ParameterInfo IList_1_t8585_IList_1_IndexOf_m44588_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1771_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44588_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44588_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8585_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8585_IList_1_IndexOf_m44588_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44588_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType InAttribute_t1771_0_0_0;
static ParameterInfo IList_1_t8585_IList_1_Insert_m44589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1771_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44589_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44589_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8585_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8585_IList_1_Insert_m44589_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44589_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8585_IList_1_RemoveAt_m44590_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44590_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44590_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8585_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8585_IList_1_RemoveAt_m44590_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44590_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8585_IList_1_get_Item_m44586_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType InAttribute_t1771_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44586_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44586_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8585_il2cpp_TypeInfo/* declaring_type */
	, &InAttribute_t1771_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8585_IList_1_get_Item_m44586_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44586_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType InAttribute_t1771_0_0_0;
static ParameterInfo IList_1_t8585_IList_1_set_Item_m44587_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1771_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44587_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44587_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8585_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8585_IList_1_set_Item_m44587_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44587_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8585_MethodInfos[] =
{
	&IList_1_IndexOf_m44588_MethodInfo,
	&IList_1_Insert_m44589_MethodInfo,
	&IList_1_RemoveAt_m44590_MethodInfo,
	&IList_1_get_Item_m44586_MethodInfo,
	&IList_1_set_Item_m44587_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8585_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8584_il2cpp_TypeInfo,
	&IEnumerable_1_t8586_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8585_0_0_0;
extern Il2CppType IList_1_t8585_1_0_0;
struct IList_1_t8585;
extern Il2CppGenericClass IList_1_t8585_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8585_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8585_MethodInfos/* methods */
	, IList_1_t8585_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8585_il2cpp_TypeInfo/* element_class */
	, IList_1_t8585_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8585_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8585_0_0_0/* byval_arg */
	, &IList_1_t8585_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8585_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6666_il2cpp_TypeInfo;

// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44591_MethodInfo;
static PropertyInfo IEnumerator_1_t6666____Current_PropertyInfo = 
{
	&IEnumerator_1_t6666_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44591_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6666_PropertyInfos[] =
{
	&IEnumerator_1_t6666____Current_PropertyInfo,
	NULL
};
extern Il2CppType GuidAttribute_t802_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44591_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44591_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6666_il2cpp_TypeInfo/* declaring_type */
	, &GuidAttribute_t802_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44591_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6666_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44591_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6666_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6666_0_0_0;
extern Il2CppType IEnumerator_1_t6666_1_0_0;
struct IEnumerator_1_t6666;
extern Il2CppGenericClass IEnumerator_1_t6666_GenericClass;
TypeInfo IEnumerator_1_t6666_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6666_MethodInfos/* methods */
	, IEnumerator_1_t6666_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6666_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6666_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6666_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6666_0_0_0/* byval_arg */
	, &IEnumerator_1_t6666_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6666_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_568.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4730_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_568MethodDeclarations.h"

extern TypeInfo GuidAttribute_t802_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25893_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGuidAttribute_t802_m34331_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.GuidAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.GuidAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisGuidAttribute_t802_m34331(__this, p0, method) (GuidAttribute_t802 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4730____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4730, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4730____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4730, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4730_FieldInfos[] =
{
	&InternalEnumerator_1_t4730____array_0_FieldInfo,
	&InternalEnumerator_1_t4730____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25890_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4730____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4730_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25890_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4730____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4730_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25893_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4730_PropertyInfos[] =
{
	&InternalEnumerator_1_t4730____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4730____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4730_InternalEnumerator_1__ctor_m25889_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25889_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25889_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4730_InternalEnumerator_1__ctor_m25889_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25889_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25890_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25890_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25890_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25891_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25891_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25891_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25892_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25892_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25892_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttribute_t802_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25893_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25893_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* declaring_type */
	, &GuidAttribute_t802_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25893_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4730_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25889_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25890_MethodInfo,
	&InternalEnumerator_1_Dispose_m25891_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25892_MethodInfo,
	&InternalEnumerator_1_get_Current_m25893_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25892_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25891_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4730_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25890_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25892_MethodInfo,
	&InternalEnumerator_1_Dispose_m25891_MethodInfo,
	&InternalEnumerator_1_get_Current_m25893_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4730_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6666_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4730_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6666_il2cpp_TypeInfo, 7},
};
extern TypeInfo GuidAttribute_t802_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4730_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25893_MethodInfo/* Method Usage */,
	&GuidAttribute_t802_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisGuidAttribute_t802_m34331_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4730_0_0_0;
extern Il2CppType InternalEnumerator_1_t4730_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4730_GenericClass;
TypeInfo InternalEnumerator_1_t4730_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4730_MethodInfos/* methods */
	, InternalEnumerator_1_t4730_PropertyInfos/* properties */
	, InternalEnumerator_1_t4730_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4730_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4730_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4730_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4730_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4730_1_0_0/* this_arg */
	, InternalEnumerator_1_t4730_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4730_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4730_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4730)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8587_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo ICollection_1_get_Count_m44592_MethodInfo;
static PropertyInfo ICollection_1_t8587____Count_PropertyInfo = 
{
	&ICollection_1_t8587_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44592_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44593_MethodInfo;
static PropertyInfo ICollection_1_t8587____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8587_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44593_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8587_PropertyInfos[] =
{
	&ICollection_1_t8587____Count_PropertyInfo,
	&ICollection_1_t8587____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44592_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44592_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44592_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44593_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44593_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44593_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttribute_t802_0_0_0;
extern Il2CppType GuidAttribute_t802_0_0_0;
static ParameterInfo ICollection_1_t8587_ICollection_1_Add_m44594_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t802_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44594_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44594_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8587_ICollection_1_Add_m44594_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44594_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44595_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44595_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44595_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttribute_t802_0_0_0;
static ParameterInfo ICollection_1_t8587_ICollection_1_Contains_m44596_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t802_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44596_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44596_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8587_ICollection_1_Contains_m44596_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44596_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttributeU5BU5D_t5014_0_0_0;
extern Il2CppType GuidAttributeU5BU5D_t5014_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8587_ICollection_1_CopyTo_m44597_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttributeU5BU5D_t5014_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44597_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44597_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8587_ICollection_1_CopyTo_m44597_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44597_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttribute_t802_0_0_0;
static ParameterInfo ICollection_1_t8587_ICollection_1_Remove_m44598_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t802_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44598_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44598_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8587_ICollection_1_Remove_m44598_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44598_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8587_MethodInfos[] =
{
	&ICollection_1_get_Count_m44592_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44593_MethodInfo,
	&ICollection_1_Add_m44594_MethodInfo,
	&ICollection_1_Clear_m44595_MethodInfo,
	&ICollection_1_Contains_m44596_MethodInfo,
	&ICollection_1_CopyTo_m44597_MethodInfo,
	&ICollection_1_Remove_m44598_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8589_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8587_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8589_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8587_0_0_0;
extern Il2CppType ICollection_1_t8587_1_0_0;
struct ICollection_1_t8587;
extern Il2CppGenericClass ICollection_1_t8587_GenericClass;
TypeInfo ICollection_1_t8587_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8587_MethodInfos/* methods */
	, ICollection_1_t8587_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8587_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8587_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8587_0_0_0/* byval_arg */
	, &ICollection_1_t8587_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8587_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GuidAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GuidAttribute>
extern Il2CppType IEnumerator_1_t6666_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44599_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GuidAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44599_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8589_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6666_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44599_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8589_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44599_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8589_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8589_0_0_0;
extern Il2CppType IEnumerable_1_t8589_1_0_0;
struct IEnumerable_1_t8589;
extern Il2CppGenericClass IEnumerable_1_t8589_GenericClass;
TypeInfo IEnumerable_1_t8589_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8589_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8589_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8589_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8589_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8589_0_0_0/* byval_arg */
	, &IEnumerable_1_t8589_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8589_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8588_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo IList_1_get_Item_m44600_MethodInfo;
extern MethodInfo IList_1_set_Item_m44601_MethodInfo;
static PropertyInfo IList_1_t8588____Item_PropertyInfo = 
{
	&IList_1_t8588_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44600_MethodInfo/* get */
	, &IList_1_set_Item_m44601_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8588_PropertyInfos[] =
{
	&IList_1_t8588____Item_PropertyInfo,
	NULL
};
extern Il2CppType GuidAttribute_t802_0_0_0;
static ParameterInfo IList_1_t8588_IList_1_IndexOf_m44602_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t802_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44602_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44602_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8588_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8588_IList_1_IndexOf_m44602_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44602_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType GuidAttribute_t802_0_0_0;
static ParameterInfo IList_1_t8588_IList_1_Insert_m44603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t802_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44603_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44603_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8588_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8588_IList_1_Insert_m44603_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44603_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8588_IList_1_RemoveAt_m44604_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44604_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44604_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8588_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8588_IList_1_RemoveAt_m44604_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44604_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8588_IList_1_get_Item_m44600_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType GuidAttribute_t802_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44600_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44600_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8588_il2cpp_TypeInfo/* declaring_type */
	, &GuidAttribute_t802_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8588_IList_1_get_Item_m44600_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44600_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType GuidAttribute_t802_0_0_0;
static ParameterInfo IList_1_t8588_IList_1_set_Item_m44601_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t802_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44601_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44601_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8588_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8588_IList_1_set_Item_m44601_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44601_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8588_MethodInfos[] =
{
	&IList_1_IndexOf_m44602_MethodInfo,
	&IList_1_Insert_m44603_MethodInfo,
	&IList_1_RemoveAt_m44604_MethodInfo,
	&IList_1_get_Item_m44600_MethodInfo,
	&IList_1_set_Item_m44601_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8588_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8587_il2cpp_TypeInfo,
	&IEnumerable_1_t8589_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8588_0_0_0;
extern Il2CppType IList_1_t8588_1_0_0;
struct IList_1_t8588;
extern Il2CppGenericClass IList_1_t8588_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8588_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8588_MethodInfos/* methods */
	, IList_1_t8588_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8588_il2cpp_TypeInfo/* element_class */
	, IList_1_t8588_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8588_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8588_0_0_0/* byval_arg */
	, &IList_1_t8588_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8588_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6668_il2cpp_TypeInfo;

// System.Reflection.AssemblyCultureAttribute
#include "mscorlib_System_Reflection_AssemblyCultureAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCultureAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCultureAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44605_MethodInfo;
static PropertyInfo IEnumerator_1_t6668____Current_PropertyInfo = 
{
	&IEnumerator_1_t6668_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44605_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6668_PropertyInfos[] =
{
	&IEnumerator_1_t6668____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44605_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyCultureAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44605_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6668_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCultureAttribute_t1135_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44605_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6668_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44605_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6668_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6668_0_0_0;
extern Il2CppType IEnumerator_1_t6668_1_0_0;
struct IEnumerator_1_t6668;
extern Il2CppGenericClass IEnumerator_1_t6668_GenericClass;
TypeInfo IEnumerator_1_t6668_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6668_MethodInfos/* methods */
	, IEnumerator_1_t6668_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6668_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6668_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6668_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6668_0_0_0/* byval_arg */
	, &IEnumerator_1_t6668_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6668_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_569.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4731_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_569MethodDeclarations.h"

extern TypeInfo AssemblyCultureAttribute_t1135_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25898_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyCultureAttribute_t1135_m34342_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyCultureAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyCultureAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyCultureAttribute_t1135_m34342(__this, p0, method) (AssemblyCultureAttribute_t1135 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4731____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4731, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4731____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4731, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4731_FieldInfos[] =
{
	&InternalEnumerator_1_t4731____array_0_FieldInfo,
	&InternalEnumerator_1_t4731____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25895_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4731____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4731_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25895_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4731____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4731_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25898_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4731_PropertyInfos[] =
{
	&InternalEnumerator_1_t4731____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4731____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4731_InternalEnumerator_1__ctor_m25894_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25894_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25894_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4731_InternalEnumerator_1__ctor_m25894_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25894_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25895_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25895_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25895_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25896_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25896_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25896_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25897_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25897_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25897_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25898_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyCultureAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25898_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCultureAttribute_t1135_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25898_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4731_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25894_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25895_MethodInfo,
	&InternalEnumerator_1_Dispose_m25896_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25897_MethodInfo,
	&InternalEnumerator_1_get_Current_m25898_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25897_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25896_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4731_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25895_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25897_MethodInfo,
	&InternalEnumerator_1_Dispose_m25896_MethodInfo,
	&InternalEnumerator_1_get_Current_m25898_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4731_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6668_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4731_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6668_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyCultureAttribute_t1135_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4731_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25898_MethodInfo/* Method Usage */,
	&AssemblyCultureAttribute_t1135_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyCultureAttribute_t1135_m34342_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4731_0_0_0;
extern Il2CppType InternalEnumerator_1_t4731_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4731_GenericClass;
TypeInfo InternalEnumerator_1_t4731_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4731_MethodInfos/* methods */
	, InternalEnumerator_1_t4731_PropertyInfos/* properties */
	, InternalEnumerator_1_t4731_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4731_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4731_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4731_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4731_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4731_1_0_0/* this_arg */
	, InternalEnumerator_1_t4731_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4731_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4731_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4731)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8590_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>
extern MethodInfo ICollection_1_get_Count_m44606_MethodInfo;
static PropertyInfo ICollection_1_t8590____Count_PropertyInfo = 
{
	&ICollection_1_t8590_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44606_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44607_MethodInfo;
static PropertyInfo ICollection_1_t8590____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8590_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44607_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8590_PropertyInfos[] =
{
	&ICollection_1_t8590____Count_PropertyInfo,
	&ICollection_1_t8590____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44606_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44606_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44606_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44607_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44607_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44607_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
static ParameterInfo ICollection_1_t8590_ICollection_1_Add_m44608_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCultureAttribute_t1135_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44608_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44608_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8590_ICollection_1_Add_m44608_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44608_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44609_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44609_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44609_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
static ParameterInfo ICollection_1_t8590_ICollection_1_Contains_m44610_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCultureAttribute_t1135_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44610_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44610_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8590_ICollection_1_Contains_m44610_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44610_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCultureAttributeU5BU5D_t5015_0_0_0;
extern Il2CppType AssemblyCultureAttributeU5BU5D_t5015_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8590_ICollection_1_CopyTo_m44611_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCultureAttributeU5BU5D_t5015_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44611_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44611_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8590_ICollection_1_CopyTo_m44611_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44611_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
static ParameterInfo ICollection_1_t8590_ICollection_1_Remove_m44612_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCultureAttribute_t1135_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44612_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyCultureAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44612_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8590_ICollection_1_Remove_m44612_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44612_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8590_MethodInfos[] =
{
	&ICollection_1_get_Count_m44606_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44607_MethodInfo,
	&ICollection_1_Add_m44608_MethodInfo,
	&ICollection_1_Clear_m44609_MethodInfo,
	&ICollection_1_Contains_m44610_MethodInfo,
	&ICollection_1_CopyTo_m44611_MethodInfo,
	&ICollection_1_Remove_m44612_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8592_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8590_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8592_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8590_0_0_0;
extern Il2CppType ICollection_1_t8590_1_0_0;
struct ICollection_1_t8590;
extern Il2CppGenericClass ICollection_1_t8590_GenericClass;
TypeInfo ICollection_1_t8590_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8590_MethodInfos/* methods */
	, ICollection_1_t8590_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8590_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8590_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8590_0_0_0/* byval_arg */
	, &ICollection_1_t8590_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8590_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCultureAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCultureAttribute>
extern Il2CppType IEnumerator_1_t6668_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44613_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyCultureAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44613_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8592_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6668_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44613_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8592_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44613_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8592_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8592_0_0_0;
extern Il2CppType IEnumerable_1_t8592_1_0_0;
struct IEnumerable_1_t8592;
extern Il2CppGenericClass IEnumerable_1_t8592_GenericClass;
TypeInfo IEnumerable_1_t8592_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8592_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8592_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8592_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8592_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8592_0_0_0/* byval_arg */
	, &IEnumerable_1_t8592_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8592_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8591_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>
extern MethodInfo IList_1_get_Item_m44614_MethodInfo;
extern MethodInfo IList_1_set_Item_m44615_MethodInfo;
static PropertyInfo IList_1_t8591____Item_PropertyInfo = 
{
	&IList_1_t8591_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44614_MethodInfo/* get */
	, &IList_1_set_Item_m44615_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8591_PropertyInfos[] =
{
	&IList_1_t8591____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
static ParameterInfo IList_1_t8591_IList_1_IndexOf_m44616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyCultureAttribute_t1135_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44616_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44616_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8591_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8591_IList_1_IndexOf_m44616_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44616_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
static ParameterInfo IList_1_t8591_IList_1_Insert_m44617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyCultureAttribute_t1135_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44617_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44617_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8591_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8591_IList_1_Insert_m44617_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44617_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8591_IList_1_RemoveAt_m44618_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44618_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44618_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8591_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8591_IList_1_RemoveAt_m44618_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44618_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8591_IList_1_get_Item_m44614_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44614_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44614_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8591_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyCultureAttribute_t1135_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8591_IList_1_get_Item_m44614_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44614_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyCultureAttribute_t1135_0_0_0;
static ParameterInfo IList_1_t8591_IList_1_set_Item_m44615_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyCultureAttribute_t1135_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44615_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyCultureAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44615_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8591_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8591_IList_1_set_Item_m44615_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44615_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8591_MethodInfos[] =
{
	&IList_1_IndexOf_m44616_MethodInfo,
	&IList_1_Insert_m44617_MethodInfo,
	&IList_1_RemoveAt_m44618_MethodInfo,
	&IList_1_get_Item_m44614_MethodInfo,
	&IList_1_set_Item_m44615_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8591_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8590_il2cpp_TypeInfo,
	&IEnumerable_1_t8592_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8591_0_0_0;
extern Il2CppType IList_1_t8591_1_0_0;
struct IList_1_t8591;
extern Il2CppGenericClass IList_1_t8591_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8591_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8591_MethodInfos/* methods */
	, IList_1_t8591_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8591_il2cpp_TypeInfo/* element_class */
	, IList_1_t8591_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8591_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8591_0_0_0/* byval_arg */
	, &IList_1_t8591_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8591_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6670_il2cpp_TypeInfo;

// System.Reflection.AssemblyVersionAttribute
#include "mscorlib_System_Reflection_AssemblyVersionAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44619_MethodInfo;
static PropertyInfo IEnumerator_1_t6670____Current_PropertyInfo = 
{
	&IEnumerator_1_t6670_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44619_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6670_PropertyInfos[] =
{
	&IEnumerator_1_t6670____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44619_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44619_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6670_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionAttribute_t1136_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44619_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6670_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44619_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6670_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6670_0_0_0;
extern Il2CppType IEnumerator_1_t6670_1_0_0;
struct IEnumerator_1_t6670;
extern Il2CppGenericClass IEnumerator_1_t6670_GenericClass;
TypeInfo IEnumerator_1_t6670_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6670_MethodInfos/* methods */
	, IEnumerator_1_t6670_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6670_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6670_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6670_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6670_0_0_0/* byval_arg */
	, &IEnumerator_1_t6670_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6670_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_570.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4732_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_570MethodDeclarations.h"

extern TypeInfo AssemblyVersionAttribute_t1136_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25903_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyVersionAttribute_t1136_m34353_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyVersionAttribute_t1136_m34353(__this, p0, method) (AssemblyVersionAttribute_t1136 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4732____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4732, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4732____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4732, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4732_FieldInfos[] =
{
	&InternalEnumerator_1_t4732____array_0_FieldInfo,
	&InternalEnumerator_1_t4732____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25900_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4732____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4732_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4732____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4732_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25903_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4732_PropertyInfos[] =
{
	&InternalEnumerator_1_t4732____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4732____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4732_InternalEnumerator_1__ctor_m25899_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25899_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25899_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4732_InternalEnumerator_1__ctor_m25899_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25899_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25900_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25900_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25900_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25901_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25901_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25901_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25902_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25902_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25902_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25903_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25903_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionAttribute_t1136_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25903_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4732_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25899_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25900_MethodInfo,
	&InternalEnumerator_1_Dispose_m25901_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25902_MethodInfo,
	&InternalEnumerator_1_get_Current_m25903_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25902_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25901_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4732_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25900_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25902_MethodInfo,
	&InternalEnumerator_1_Dispose_m25901_MethodInfo,
	&InternalEnumerator_1_get_Current_m25903_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4732_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6670_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4732_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6670_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyVersionAttribute_t1136_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4732_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25903_MethodInfo/* Method Usage */,
	&AssemblyVersionAttribute_t1136_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyVersionAttribute_t1136_m34353_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4732_0_0_0;
extern Il2CppType InternalEnumerator_1_t4732_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4732_GenericClass;
TypeInfo InternalEnumerator_1_t4732_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4732_MethodInfos/* methods */
	, InternalEnumerator_1_t4732_PropertyInfos/* properties */
	, InternalEnumerator_1_t4732_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4732_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4732_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4732_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4732_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4732_1_0_0/* this_arg */
	, InternalEnumerator_1_t4732_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4732_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4732_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4732)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8593_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m44620_MethodInfo;
static PropertyInfo ICollection_1_t8593____Count_PropertyInfo = 
{
	&ICollection_1_t8593_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44620_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44621_MethodInfo;
static PropertyInfo ICollection_1_t8593____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8593_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44621_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8593_PropertyInfos[] =
{
	&ICollection_1_t8593____Count_PropertyInfo,
	&ICollection_1_t8593____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44620_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44620_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44620_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44621_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44621_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44621_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
static ParameterInfo ICollection_1_t8593_ICollection_1_Add_m44622_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionAttribute_t1136_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44622_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44622_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8593_ICollection_1_Add_m44622_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44622_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44623_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44623_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44623_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
static ParameterInfo ICollection_1_t8593_ICollection_1_Contains_m44624_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionAttribute_t1136_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44624_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44624_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8593_ICollection_1_Contains_m44624_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44624_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionAttributeU5BU5D_t5016_0_0_0;
extern Il2CppType AssemblyVersionAttributeU5BU5D_t5016_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8593_ICollection_1_CopyTo_m44625_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionAttributeU5BU5D_t5016_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44625_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44625_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8593_ICollection_1_CopyTo_m44625_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44625_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
static ParameterInfo ICollection_1_t8593_ICollection_1_Remove_m44626_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionAttribute_t1136_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44626_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44626_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8593_ICollection_1_Remove_m44626_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44626_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8593_MethodInfos[] =
{
	&ICollection_1_get_Count_m44620_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44621_MethodInfo,
	&ICollection_1_Add_m44622_MethodInfo,
	&ICollection_1_Clear_m44623_MethodInfo,
	&ICollection_1_Contains_m44624_MethodInfo,
	&ICollection_1_CopyTo_m44625_MethodInfo,
	&ICollection_1_Remove_m44626_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8595_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8593_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8595_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8593_0_0_0;
extern Il2CppType ICollection_1_t8593_1_0_0;
struct ICollection_1_t8593;
extern Il2CppGenericClass ICollection_1_t8593_GenericClass;
TypeInfo ICollection_1_t8593_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8593_MethodInfos/* methods */
	, ICollection_1_t8593_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8593_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8593_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8593_0_0_0/* byval_arg */
	, &ICollection_1_t8593_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8593_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyVersionAttribute>
extern Il2CppType IEnumerator_1_t6670_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44627_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44627_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8595_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6670_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44627_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8595_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44627_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8595_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8595_0_0_0;
extern Il2CppType IEnumerable_1_t8595_1_0_0;
struct IEnumerable_1_t8595;
extern Il2CppGenericClass IEnumerable_1_t8595_GenericClass;
TypeInfo IEnumerable_1_t8595_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8595_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8595_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8595_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8595_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8595_0_0_0/* byval_arg */
	, &IEnumerable_1_t8595_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8595_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8594_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>
extern MethodInfo IList_1_get_Item_m44628_MethodInfo;
extern MethodInfo IList_1_set_Item_m44629_MethodInfo;
static PropertyInfo IList_1_t8594____Item_PropertyInfo = 
{
	&IList_1_t8594_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44628_MethodInfo/* get */
	, &IList_1_set_Item_m44629_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8594_PropertyInfos[] =
{
	&IList_1_t8594____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
static ParameterInfo IList_1_t8594_IList_1_IndexOf_m44630_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionAttribute_t1136_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44630_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44630_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8594_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8594_IList_1_IndexOf_m44630_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44630_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
static ParameterInfo IList_1_t8594_IList_1_Insert_m44631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionAttribute_t1136_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44631_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44631_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8594_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8594_IList_1_Insert_m44631_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44631_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8594_IList_1_RemoveAt_m44632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44632_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44632_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8594_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8594_IList_1_RemoveAt_m44632_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44632_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8594_IList_1_get_Item_m44628_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44628_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44628_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8594_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyVersionAttribute_t1136_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8594_IList_1_get_Item_m44628_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44628_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType AssemblyVersionAttribute_t1136_0_0_0;
static ParameterInfo IList_1_t8594_IList_1_set_Item_m44629_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyVersionAttribute_t1136_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44629_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44629_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8594_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8594_IList_1_set_Item_m44629_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44629_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8594_MethodInfos[] =
{
	&IList_1_IndexOf_m44630_MethodInfo,
	&IList_1_Insert_m44631_MethodInfo,
	&IList_1_RemoveAt_m44632_MethodInfo,
	&IList_1_get_Item_m44628_MethodInfo,
	&IList_1_set_Item_m44629_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8594_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8593_il2cpp_TypeInfo,
	&IEnumerable_1_t8595_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8594_0_0_0;
extern Il2CppType IList_1_t8594_1_0_0;
struct IList_1_t8594;
extern Il2CppGenericClass IList_1_t8594_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8594_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8594_MethodInfos/* methods */
	, IList_1_t8594_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8594_il2cpp_TypeInfo/* element_class */
	, IList_1_t8594_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8594_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8594_0_0_0/* byval_arg */
	, &IList_1_t8594_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8594_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6672_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComImportAttribute
#include "mscorlib_System_Runtime_InteropServices_ComImportAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44633_MethodInfo;
static PropertyInfo IEnumerator_1_t6672____Current_PropertyInfo = 
{
	&IEnumerator_1_t6672_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44633_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6672_PropertyInfos[] =
{
	&IEnumerator_1_t6672____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComImportAttribute_t1772_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44633_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44633_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6672_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t1772_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44633_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6672_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44633_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6672_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6672_0_0_0;
extern Il2CppType IEnumerator_1_t6672_1_0_0;
struct IEnumerator_1_t6672;
extern Il2CppGenericClass IEnumerator_1_t6672_GenericClass;
TypeInfo IEnumerator_1_t6672_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6672_MethodInfos/* methods */
	, IEnumerator_1_t6672_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6672_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6672_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6672_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6672_0_0_0/* byval_arg */
	, &IEnumerator_1_t6672_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6672_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_571.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4733_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_571MethodDeclarations.h"

extern TypeInfo ComImportAttribute_t1772_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25908_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComImportAttribute_t1772_m34364_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComImportAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComImportAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisComImportAttribute_t1772_m34364(__this, p0, method) (ComImportAttribute_t1772 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4733____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4733, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4733____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4733, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4733_FieldInfos[] =
{
	&InternalEnumerator_1_t4733____array_0_FieldInfo,
	&InternalEnumerator_1_t4733____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25905_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4733____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4733_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25905_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4733____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4733_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25908_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4733_PropertyInfos[] =
{
	&InternalEnumerator_1_t4733____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4733____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4733_InternalEnumerator_1__ctor_m25904_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25904_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25904_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4733_InternalEnumerator_1__ctor_m25904_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25904_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25905_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25905_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25905_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25906_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25906_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25906_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25907_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25907_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25907_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttribute_t1772_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25908_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25908_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t1772_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25908_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4733_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25904_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25905_MethodInfo,
	&InternalEnumerator_1_Dispose_m25906_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25907_MethodInfo,
	&InternalEnumerator_1_get_Current_m25908_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25907_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25906_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4733_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25905_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25907_MethodInfo,
	&InternalEnumerator_1_Dispose_m25906_MethodInfo,
	&InternalEnumerator_1_get_Current_m25908_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4733_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6672_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4733_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6672_il2cpp_TypeInfo, 7},
};
extern TypeInfo ComImportAttribute_t1772_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4733_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25908_MethodInfo/* Method Usage */,
	&ComImportAttribute_t1772_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComImportAttribute_t1772_m34364_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4733_0_0_0;
extern Il2CppType InternalEnumerator_1_t4733_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4733_GenericClass;
TypeInfo InternalEnumerator_1_t4733_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4733_MethodInfos/* methods */
	, InternalEnumerator_1_t4733_PropertyInfos/* properties */
	, InternalEnumerator_1_t4733_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4733_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4733_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4733_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4733_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4733_1_0_0/* this_arg */
	, InternalEnumerator_1_t4733_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4733_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4733_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4733)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8596_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo ICollection_1_get_Count_m44634_MethodInfo;
static PropertyInfo ICollection_1_t8596____Count_PropertyInfo = 
{
	&ICollection_1_t8596_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44634_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44635_MethodInfo;
static PropertyInfo ICollection_1_t8596____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8596_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44635_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8596_PropertyInfos[] =
{
	&ICollection_1_t8596____Count_PropertyInfo,
	&ICollection_1_t8596____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44634_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44634_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44634_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44635_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44635_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44635_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttribute_t1772_0_0_0;
extern Il2CppType ComImportAttribute_t1772_0_0_0;
static ParameterInfo ICollection_1_t8596_ICollection_1_Add_m44636_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1772_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44636_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44636_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8596_ICollection_1_Add_m44636_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44636_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44637_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44637_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44637_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttribute_t1772_0_0_0;
static ParameterInfo ICollection_1_t8596_ICollection_1_Contains_m44638_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1772_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44638_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44638_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8596_ICollection_1_Contains_m44638_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44638_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttributeU5BU5D_t5017_0_0_0;
extern Il2CppType ComImportAttributeU5BU5D_t5017_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8596_ICollection_1_CopyTo_m44639_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttributeU5BU5D_t5017_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44639_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44639_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8596_ICollection_1_CopyTo_m44639_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44639_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttribute_t1772_0_0_0;
static ParameterInfo ICollection_1_t8596_ICollection_1_Remove_m44640_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1772_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44640_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44640_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8596_ICollection_1_Remove_m44640_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44640_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8596_MethodInfos[] =
{
	&ICollection_1_get_Count_m44634_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44635_MethodInfo,
	&ICollection_1_Add_m44636_MethodInfo,
	&ICollection_1_Clear_m44637_MethodInfo,
	&ICollection_1_Contains_m44638_MethodInfo,
	&ICollection_1_CopyTo_m44639_MethodInfo,
	&ICollection_1_Remove_m44640_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8598_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8596_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8598_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8596_0_0_0;
extern Il2CppType ICollection_1_t8596_1_0_0;
struct ICollection_1_t8596;
extern Il2CppGenericClass ICollection_1_t8596_GenericClass;
TypeInfo ICollection_1_t8596_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8596_MethodInfos/* methods */
	, ICollection_1_t8596_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8596_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8596_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8596_0_0_0/* byval_arg */
	, &ICollection_1_t8596_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8596_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>
extern Il2CppType IEnumerator_1_t6672_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44641_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44641_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8598_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6672_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44641_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8598_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44641_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8598_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8598_0_0_0;
extern Il2CppType IEnumerable_1_t8598_1_0_0;
struct IEnumerable_1_t8598;
extern Il2CppGenericClass IEnumerable_1_t8598_GenericClass;
TypeInfo IEnumerable_1_t8598_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8598_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8598_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8598_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8598_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8598_0_0_0/* byval_arg */
	, &IEnumerable_1_t8598_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8598_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8597_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo IList_1_get_Item_m44642_MethodInfo;
extern MethodInfo IList_1_set_Item_m44643_MethodInfo;
static PropertyInfo IList_1_t8597____Item_PropertyInfo = 
{
	&IList_1_t8597_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44642_MethodInfo/* get */
	, &IList_1_set_Item_m44643_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8597_PropertyInfos[] =
{
	&IList_1_t8597____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComImportAttribute_t1772_0_0_0;
static ParameterInfo IList_1_t8597_IList_1_IndexOf_m44644_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1772_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44644_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44644_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8597_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8597_IList_1_IndexOf_m44644_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44644_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ComImportAttribute_t1772_0_0_0;
static ParameterInfo IList_1_t8597_IList_1_Insert_m44645_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1772_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44645_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44645_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8597_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8597_IList_1_Insert_m44645_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44645_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8597_IList_1_RemoveAt_m44646_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44646_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44646_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8597_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8597_IList_1_RemoveAt_m44646_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44646_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8597_IList_1_get_Item_m44642_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ComImportAttribute_t1772_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44642_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44642_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8597_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t1772_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8597_IList_1_get_Item_m44642_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44642_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ComImportAttribute_t1772_0_0_0;
static ParameterInfo IList_1_t8597_IList_1_set_Item_m44643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1772_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44643_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44643_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8597_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8597_IList_1_set_Item_m44643_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44643_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8597_MethodInfos[] =
{
	&IList_1_IndexOf_m44644_MethodInfo,
	&IList_1_Insert_m44645_MethodInfo,
	&IList_1_RemoveAt_m44646_MethodInfo,
	&IList_1_get_Item_m44642_MethodInfo,
	&IList_1_set_Item_m44643_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8597_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8596_il2cpp_TypeInfo,
	&IEnumerable_1_t8598_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8597_0_0_0;
extern Il2CppType IList_1_t8597_1_0_0;
struct IList_1_t8597;
extern Il2CppGenericClass IList_1_t8597_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8597_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8597_MethodInfos/* methods */
	, IList_1_t8597_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8597_il2cpp_TypeInfo/* element_class */
	, IList_1_t8597_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8597_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8597_0_0_0/* byval_arg */
	, &IList_1_t8597_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8597_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6674_il2cpp_TypeInfo;

// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44647_MethodInfo;
static PropertyInfo IEnumerator_1_t6674____Current_PropertyInfo = 
{
	&IEnumerator_1_t6674_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44647_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6674_PropertyInfos[] =
{
	&IEnumerator_1_t6674____Current_PropertyInfo,
	NULL
};
extern Il2CppType OptionalAttribute_t1773_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44647_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44647_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6674_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t1773_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44647_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6674_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44647_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6674_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6674_0_0_0;
extern Il2CppType IEnumerator_1_t6674_1_0_0;
struct IEnumerator_1_t6674;
extern Il2CppGenericClass IEnumerator_1_t6674_GenericClass;
TypeInfo IEnumerator_1_t6674_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6674_MethodInfos/* methods */
	, IEnumerator_1_t6674_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6674_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6674_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6674_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6674_0_0_0/* byval_arg */
	, &IEnumerator_1_t6674_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6674_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_572.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4734_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_572MethodDeclarations.h"

extern TypeInfo OptionalAttribute_t1773_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25913_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOptionalAttribute_t1773_m34375_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OptionalAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OptionalAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOptionalAttribute_t1773_m34375(__this, p0, method) (OptionalAttribute_t1773 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4734____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4734, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4734____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4734, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4734_FieldInfos[] =
{
	&InternalEnumerator_1_t4734____array_0_FieldInfo,
	&InternalEnumerator_1_t4734____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25910_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4734____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4734_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25910_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4734____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4734_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25913_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4734_PropertyInfos[] =
{
	&InternalEnumerator_1_t4734____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4734____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4734_InternalEnumerator_1__ctor_m25909_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25909_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25909_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4734_InternalEnumerator_1__ctor_m25909_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25909_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25910_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25910_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25910_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25911_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25911_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25911_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25912_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25912_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25912_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttribute_t1773_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25913_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25913_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t1773_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25913_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4734_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25909_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25910_MethodInfo,
	&InternalEnumerator_1_Dispose_m25911_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25912_MethodInfo,
	&InternalEnumerator_1_get_Current_m25913_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25912_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25911_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4734_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25910_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25912_MethodInfo,
	&InternalEnumerator_1_Dispose_m25911_MethodInfo,
	&InternalEnumerator_1_get_Current_m25913_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4734_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6674_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4734_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6674_il2cpp_TypeInfo, 7},
};
extern TypeInfo OptionalAttribute_t1773_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4734_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25913_MethodInfo/* Method Usage */,
	&OptionalAttribute_t1773_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOptionalAttribute_t1773_m34375_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4734_0_0_0;
extern Il2CppType InternalEnumerator_1_t4734_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4734_GenericClass;
TypeInfo InternalEnumerator_1_t4734_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4734_MethodInfos/* methods */
	, InternalEnumerator_1_t4734_PropertyInfos/* properties */
	, InternalEnumerator_1_t4734_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4734_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4734_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4734_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4734_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4734_1_0_0/* this_arg */
	, InternalEnumerator_1_t4734_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4734_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4734_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4734)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8599_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo ICollection_1_get_Count_m44648_MethodInfo;
static PropertyInfo ICollection_1_t8599____Count_PropertyInfo = 
{
	&ICollection_1_t8599_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44648_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44649_MethodInfo;
static PropertyInfo ICollection_1_t8599____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8599_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44649_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8599_PropertyInfos[] =
{
	&ICollection_1_t8599____Count_PropertyInfo,
	&ICollection_1_t8599____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44648_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44648_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44648_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44649_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44649_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44649_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttribute_t1773_0_0_0;
extern Il2CppType OptionalAttribute_t1773_0_0_0;
static ParameterInfo ICollection_1_t8599_ICollection_1_Add_m44650_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1773_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44650_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44650_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8599_ICollection_1_Add_m44650_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44650_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44651_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44651_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44651_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttribute_t1773_0_0_0;
static ParameterInfo ICollection_1_t8599_ICollection_1_Contains_m44652_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1773_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44652_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44652_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8599_ICollection_1_Contains_m44652_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44652_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttributeU5BU5D_t5018_0_0_0;
extern Il2CppType OptionalAttributeU5BU5D_t5018_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8599_ICollection_1_CopyTo_m44653_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttributeU5BU5D_t5018_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44653_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44653_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8599_ICollection_1_CopyTo_m44653_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44653_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttribute_t1773_0_0_0;
static ParameterInfo ICollection_1_t8599_ICollection_1_Remove_m44654_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1773_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44654_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44654_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8599_ICollection_1_Remove_m44654_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44654_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8599_MethodInfos[] =
{
	&ICollection_1_get_Count_m44648_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44649_MethodInfo,
	&ICollection_1_Add_m44650_MethodInfo,
	&ICollection_1_Clear_m44651_MethodInfo,
	&ICollection_1_Contains_m44652_MethodInfo,
	&ICollection_1_CopyTo_m44653_MethodInfo,
	&ICollection_1_Remove_m44654_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8601_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8599_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8601_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8599_0_0_0;
extern Il2CppType ICollection_1_t8599_1_0_0;
struct ICollection_1_t8599;
extern Il2CppGenericClass ICollection_1_t8599_GenericClass;
TypeInfo ICollection_1_t8599_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8599_MethodInfos/* methods */
	, ICollection_1_t8599_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8599_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8599_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8599_0_0_0/* byval_arg */
	, &ICollection_1_t8599_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8599_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>
extern Il2CppType IEnumerator_1_t6674_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44655_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44655_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8601_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6674_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44655_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8601_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44655_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8601_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8601_0_0_0;
extern Il2CppType IEnumerable_1_t8601_1_0_0;
struct IEnumerable_1_t8601;
extern Il2CppGenericClass IEnumerable_1_t8601_GenericClass;
TypeInfo IEnumerable_1_t8601_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8601_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8601_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8601_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8601_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8601_0_0_0/* byval_arg */
	, &IEnumerable_1_t8601_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8601_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8600_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo IList_1_get_Item_m44656_MethodInfo;
extern MethodInfo IList_1_set_Item_m44657_MethodInfo;
static PropertyInfo IList_1_t8600____Item_PropertyInfo = 
{
	&IList_1_t8600_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44656_MethodInfo/* get */
	, &IList_1_set_Item_m44657_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8600_PropertyInfos[] =
{
	&IList_1_t8600____Item_PropertyInfo,
	NULL
};
extern Il2CppType OptionalAttribute_t1773_0_0_0;
static ParameterInfo IList_1_t8600_IList_1_IndexOf_m44658_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1773_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44658_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44658_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8600_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8600_IList_1_IndexOf_m44658_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44658_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType OptionalAttribute_t1773_0_0_0;
static ParameterInfo IList_1_t8600_IList_1_Insert_m44659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1773_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44659_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44659_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8600_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8600_IList_1_Insert_m44659_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44659_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8600_IList_1_RemoveAt_m44660_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44660_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44660_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8600_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8600_IList_1_RemoveAt_m44660_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44660_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8600_IList_1_get_Item_m44656_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType OptionalAttribute_t1773_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44656_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44656_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8600_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t1773_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8600_IList_1_get_Item_m44656_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44656_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType OptionalAttribute_t1773_0_0_0;
static ParameterInfo IList_1_t8600_IList_1_set_Item_m44657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1773_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44657_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44657_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8600_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8600_IList_1_set_Item_m44657_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44657_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8600_MethodInfos[] =
{
	&IList_1_IndexOf_m44658_MethodInfo,
	&IList_1_Insert_m44659_MethodInfo,
	&IList_1_RemoveAt_m44660_MethodInfo,
	&IList_1_get_Item_m44656_MethodInfo,
	&IList_1_set_Item_m44657_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8600_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8599_il2cpp_TypeInfo,
	&IEnumerable_1_t8601_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8600_0_0_0;
extern Il2CppType IList_1_t8600_1_0_0;
struct IList_1_t8600;
extern Il2CppGenericClass IList_1_t8600_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8600_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8600_MethodInfos/* methods */
	, IList_1_t8600_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8600_il2cpp_TypeInfo/* element_class */
	, IList_1_t8600_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8600_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8600_0_0_0/* byval_arg */
	, &IList_1_t8600_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8600_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6676_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44661_MethodInfo;
static PropertyInfo IEnumerator_1_t6676____Current_PropertyInfo = 
{
	&IEnumerator_1_t6676_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44661_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6676_PropertyInfos[] =
{
	&IEnumerator_1_t6676____Current_PropertyInfo,
	NULL
};
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44661_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44661_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6676_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t104_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44661_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6676_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44661_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6676_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6676_0_0_0;
extern Il2CppType IEnumerator_1_t6676_1_0_0;
struct IEnumerator_1_t6676;
extern Il2CppGenericClass IEnumerator_1_t6676_GenericClass;
TypeInfo IEnumerator_1_t6676_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6676_MethodInfos/* methods */
	, IEnumerator_1_t6676_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6676_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6676_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6676_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6676_0_0_0/* byval_arg */
	, &IEnumerator_1_t6676_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6676_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_573.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4735_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_573MethodDeclarations.h"

extern TypeInfo CompilerGeneratedAttribute_t104_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25918_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t104_m34386_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilerGeneratedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilerGeneratedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t104_m34386(__this, p0, method) (CompilerGeneratedAttribute_t104 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4735____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4735, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4735____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4735, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4735_FieldInfos[] =
{
	&InternalEnumerator_1_t4735____array_0_FieldInfo,
	&InternalEnumerator_1_t4735____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25915_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4735____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4735_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25915_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4735____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4735_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25918_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4735_PropertyInfos[] =
{
	&InternalEnumerator_1_t4735____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4735____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4735_InternalEnumerator_1__ctor_m25914_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25914_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25914_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4735_InternalEnumerator_1__ctor_m25914_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25914_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25915_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25915_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25915_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25916_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25916_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25916_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25917_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25917_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25917_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25918_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25918_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t104_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25918_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4735_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25914_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25915_MethodInfo,
	&InternalEnumerator_1_Dispose_m25916_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25917_MethodInfo,
	&InternalEnumerator_1_get_Current_m25918_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25917_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25916_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4735_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25915_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25917_MethodInfo,
	&InternalEnumerator_1_Dispose_m25916_MethodInfo,
	&InternalEnumerator_1_get_Current_m25918_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4735_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6676_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4735_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6676_il2cpp_TypeInfo, 7},
};
extern TypeInfo CompilerGeneratedAttribute_t104_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4735_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25918_MethodInfo/* Method Usage */,
	&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t104_m34386_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4735_0_0_0;
extern Il2CppType InternalEnumerator_1_t4735_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4735_GenericClass;
TypeInfo InternalEnumerator_1_t4735_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4735_MethodInfos/* methods */
	, InternalEnumerator_1_t4735_PropertyInfos/* properties */
	, InternalEnumerator_1_t4735_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4735_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4735_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4735_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4735_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4735_1_0_0/* this_arg */
	, InternalEnumerator_1_t4735_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4735_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4735_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4735)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8602_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo ICollection_1_get_Count_m44662_MethodInfo;
static PropertyInfo ICollection_1_t8602____Count_PropertyInfo = 
{
	&ICollection_1_t8602_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44662_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44663_MethodInfo;
static PropertyInfo ICollection_1_t8602____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8602_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44663_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8602_PropertyInfos[] =
{
	&ICollection_1_t8602____Count_PropertyInfo,
	&ICollection_1_t8602____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44662_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44662_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44662_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44663_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44663_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44663_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
static ParameterInfo ICollection_1_t8602_ICollection_1_Add_m44664_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t104_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44664_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44664_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8602_ICollection_1_Add_m44664_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44664_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44665_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44665_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44665_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
static ParameterInfo ICollection_1_t8602_ICollection_1_Contains_m44666_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t104_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44666_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44666_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8602_ICollection_1_Contains_m44666_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44666_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttributeU5BU5D_t5019_0_0_0;
extern Il2CppType CompilerGeneratedAttributeU5BU5D_t5019_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8602_ICollection_1_CopyTo_m44667_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttributeU5BU5D_t5019_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44667_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44667_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8602_ICollection_1_CopyTo_m44667_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44667_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
static ParameterInfo ICollection_1_t8602_ICollection_1_Remove_m44668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t104_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44668_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44668_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8602_ICollection_1_Remove_m44668_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44668_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8602_MethodInfos[] =
{
	&ICollection_1_get_Count_m44662_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44663_MethodInfo,
	&ICollection_1_Add_m44664_MethodInfo,
	&ICollection_1_Clear_m44665_MethodInfo,
	&ICollection_1_Contains_m44666_MethodInfo,
	&ICollection_1_CopyTo_m44667_MethodInfo,
	&ICollection_1_Remove_m44668_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8604_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8602_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8604_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8602_0_0_0;
extern Il2CppType ICollection_1_t8602_1_0_0;
struct ICollection_1_t8602;
extern Il2CppGenericClass ICollection_1_t8602_GenericClass;
TypeInfo ICollection_1_t8602_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8602_MethodInfos/* methods */
	, ICollection_1_t8602_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8602_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8602_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8602_0_0_0/* byval_arg */
	, &ICollection_1_t8602_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8602_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern Il2CppType IEnumerator_1_t6676_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44669_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44669_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8604_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6676_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44669_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8604_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44669_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8604_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8604_0_0_0;
extern Il2CppType IEnumerable_1_t8604_1_0_0;
struct IEnumerable_1_t8604;
extern Il2CppGenericClass IEnumerable_1_t8604_GenericClass;
TypeInfo IEnumerable_1_t8604_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8604_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8604_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8604_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8604_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8604_0_0_0/* byval_arg */
	, &IEnumerable_1_t8604_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8604_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8603_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo IList_1_get_Item_m44670_MethodInfo;
extern MethodInfo IList_1_set_Item_m44671_MethodInfo;
static PropertyInfo IList_1_t8603____Item_PropertyInfo = 
{
	&IList_1_t8603_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44670_MethodInfo/* get */
	, &IList_1_set_Item_m44671_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8603_PropertyInfos[] =
{
	&IList_1_t8603____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
static ParameterInfo IList_1_t8603_IList_1_IndexOf_m44672_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t104_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44672_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44672_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8603_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8603_IList_1_IndexOf_m44672_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44672_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
static ParameterInfo IList_1_t8603_IList_1_Insert_m44673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t104_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44673_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44673_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8603_IList_1_Insert_m44673_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44673_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8603_IList_1_RemoveAt_m44674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44674_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44674_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8603_IList_1_RemoveAt_m44674_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44674_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8603_IList_1_get_Item_m44670_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44670_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44670_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8603_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t104_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8603_IList_1_get_Item_m44670_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44670_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CompilerGeneratedAttribute_t104_0_0_0;
static ParameterInfo IList_1_t8603_IList_1_set_Item_m44671_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t104_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44671_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44671_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8603_IList_1_set_Item_m44671_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44671_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8603_MethodInfos[] =
{
	&IList_1_IndexOf_m44672_MethodInfo,
	&IList_1_Insert_m44673_MethodInfo,
	&IList_1_RemoveAt_m44674_MethodInfo,
	&IList_1_get_Item_m44670_MethodInfo,
	&IList_1_set_Item_m44671_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8603_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8602_il2cpp_TypeInfo,
	&IEnumerable_1_t8604_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8603_0_0_0;
extern Il2CppType IList_1_t8603_1_0_0;
struct IList_1_t8603;
extern Il2CppGenericClass IList_1_t8603_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8603_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8603_MethodInfos/* methods */
	, IList_1_t8603_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8603_il2cpp_TypeInfo/* element_class */
	, IList_1_t8603_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8603_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8603_0_0_0/* byval_arg */
	, &IList_1_t8603_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8603_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6678_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44675_MethodInfo;
static PropertyInfo IEnumerator_1_t6678____Current_PropertyInfo = 
{
	&IEnumerator_1_t6678_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44675_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6678_PropertyInfos[] =
{
	&IEnumerator_1_t6678____Current_PropertyInfo,
	NULL
};
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44675_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44675_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6678_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t1125_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44675_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6678_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44675_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6678_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6678_0_0_0;
extern Il2CppType IEnumerator_1_t6678_1_0_0;
struct IEnumerator_1_t6678;
extern Il2CppGenericClass IEnumerator_1_t6678_GenericClass;
TypeInfo IEnumerator_1_t6678_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6678_MethodInfos/* methods */
	, IEnumerator_1_t6678_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6678_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6678_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6678_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6678_0_0_0/* byval_arg */
	, &IEnumerator_1_t6678_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6678_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_574.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4736_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_574MethodDeclarations.h"

extern TypeInfo InternalsVisibleToAttribute_t1125_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25923_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t1125_m34397_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.InternalsVisibleToAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.InternalsVisibleToAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t1125_m34397(__this, p0, method) (InternalsVisibleToAttribute_t1125 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4736____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4736, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4736____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4736, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4736_FieldInfos[] =
{
	&InternalEnumerator_1_t4736____array_0_FieldInfo,
	&InternalEnumerator_1_t4736____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25920_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4736____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4736_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25920_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4736____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4736_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25923_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4736_PropertyInfos[] =
{
	&InternalEnumerator_1_t4736____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4736____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4736_InternalEnumerator_1__ctor_m25919_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25919_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25919_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4736_InternalEnumerator_1__ctor_m25919_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25919_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25920_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25920_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25920_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25921_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25921_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25921_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25922_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25922_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25922_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25923_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25923_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t1125_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25923_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4736_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25919_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25920_MethodInfo,
	&InternalEnumerator_1_Dispose_m25921_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25922_MethodInfo,
	&InternalEnumerator_1_get_Current_m25923_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25922_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25921_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4736_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25920_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25922_MethodInfo,
	&InternalEnumerator_1_Dispose_m25921_MethodInfo,
	&InternalEnumerator_1_get_Current_m25923_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4736_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6678_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4736_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6678_il2cpp_TypeInfo, 7},
};
extern TypeInfo InternalsVisibleToAttribute_t1125_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4736_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25923_MethodInfo/* Method Usage */,
	&InternalsVisibleToAttribute_t1125_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t1125_m34397_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4736_0_0_0;
extern Il2CppType InternalEnumerator_1_t4736_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4736_GenericClass;
TypeInfo InternalEnumerator_1_t4736_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4736_MethodInfos/* methods */
	, InternalEnumerator_1_t4736_PropertyInfos/* properties */
	, InternalEnumerator_1_t4736_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4736_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4736_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4736_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4736_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4736_1_0_0/* this_arg */
	, InternalEnumerator_1_t4736_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4736_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4736_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4736)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8605_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo ICollection_1_get_Count_m44676_MethodInfo;
static PropertyInfo ICollection_1_t8605____Count_PropertyInfo = 
{
	&ICollection_1_t8605_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44676_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44677_MethodInfo;
static PropertyInfo ICollection_1_t8605____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8605_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44677_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8605_PropertyInfos[] =
{
	&ICollection_1_t8605____Count_PropertyInfo,
	&ICollection_1_t8605____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44676_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44676_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44676_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44677_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44677_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44677_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
static ParameterInfo ICollection_1_t8605_ICollection_1_Add_m44678_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t1125_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44678_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44678_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8605_ICollection_1_Add_m44678_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44678_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44679_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44679_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44679_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
static ParameterInfo ICollection_1_t8605_ICollection_1_Contains_m44680_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t1125_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44680_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44680_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8605_ICollection_1_Contains_m44680_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44680_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttributeU5BU5D_t5020_0_0_0;
extern Il2CppType InternalsVisibleToAttributeU5BU5D_t5020_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8605_ICollection_1_CopyTo_m44681_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttributeU5BU5D_t5020_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44681_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44681_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8605_ICollection_1_CopyTo_m44681_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44681_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
static ParameterInfo ICollection_1_t8605_ICollection_1_Remove_m44682_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t1125_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44682_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44682_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8605_ICollection_1_Remove_m44682_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44682_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8605_MethodInfos[] =
{
	&ICollection_1_get_Count_m44676_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44677_MethodInfo,
	&ICollection_1_Add_m44678_MethodInfo,
	&ICollection_1_Clear_m44679_MethodInfo,
	&ICollection_1_Contains_m44680_MethodInfo,
	&ICollection_1_CopyTo_m44681_MethodInfo,
	&ICollection_1_Remove_m44682_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8607_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8605_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8607_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8605_0_0_0;
extern Il2CppType ICollection_1_t8605_1_0_0;
struct ICollection_1_t8605;
extern Il2CppGenericClass ICollection_1_t8605_GenericClass;
TypeInfo ICollection_1_t8605_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8605_MethodInfos/* methods */
	, ICollection_1_t8605_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8605_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8605_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8605_0_0_0/* byval_arg */
	, &ICollection_1_t8605_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8605_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern Il2CppType IEnumerator_1_t6678_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44683_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44683_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8607_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6678_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44683_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8607_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44683_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8607_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8607_0_0_0;
extern Il2CppType IEnumerable_1_t8607_1_0_0;
struct IEnumerable_1_t8607;
extern Il2CppGenericClass IEnumerable_1_t8607_GenericClass;
TypeInfo IEnumerable_1_t8607_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8607_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8607_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8607_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8607_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8607_0_0_0/* byval_arg */
	, &IEnumerable_1_t8607_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8607_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8606_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo IList_1_get_Item_m44684_MethodInfo;
extern MethodInfo IList_1_set_Item_m44685_MethodInfo;
static PropertyInfo IList_1_t8606____Item_PropertyInfo = 
{
	&IList_1_t8606_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44684_MethodInfo/* get */
	, &IList_1_set_Item_m44685_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8606_PropertyInfos[] =
{
	&IList_1_t8606____Item_PropertyInfo,
	NULL
};
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
static ParameterInfo IList_1_t8606_IList_1_IndexOf_m44686_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t1125_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44686_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44686_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8606_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8606_IList_1_IndexOf_m44686_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44686_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
static ParameterInfo IList_1_t8606_IList_1_Insert_m44687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t1125_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44687_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44687_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8606_IList_1_Insert_m44687_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44687_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8606_IList_1_RemoveAt_m44688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44688_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44688_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8606_IList_1_RemoveAt_m44688_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44688_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8606_IList_1_get_Item_m44684_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44684_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44684_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8606_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t1125_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8606_IList_1_get_Item_m44684_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44684_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType InternalsVisibleToAttribute_t1125_0_0_0;
static ParameterInfo IList_1_t8606_IList_1_set_Item_m44685_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t1125_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44685_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44685_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8606_IList_1_set_Item_m44685_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44685_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8606_MethodInfos[] =
{
	&IList_1_IndexOf_m44686_MethodInfo,
	&IList_1_Insert_m44687_MethodInfo,
	&IList_1_RemoveAt_m44688_MethodInfo,
	&IList_1_get_Item_m44684_MethodInfo,
	&IList_1_set_Item_m44685_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8606_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8605_il2cpp_TypeInfo,
	&IEnumerable_1_t8607_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8606_0_0_0;
extern Il2CppType IList_1_t8606_1_0_0;
struct IList_1_t8606;
extern Il2CppGenericClass IList_1_t8606_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8606_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8606_MethodInfos/* methods */
	, IList_1_t8606_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8606_il2cpp_TypeInfo/* element_class */
	, IList_1_t8606_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8606_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8606_0_0_0/* byval_arg */
	, &IList_1_t8606_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8606_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6680_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44689_MethodInfo;
static PropertyInfo IEnumerator_1_t6680____Current_PropertyInfo = 
{
	&IEnumerator_1_t6680_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44689_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6680_PropertyInfos[] =
{
	&IEnumerator_1_t6680____Current_PropertyInfo,
	NULL
};
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44689_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44689_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6680_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t132_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44689_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6680_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44689_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6680_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6680_0_0_0;
extern Il2CppType IEnumerator_1_t6680_1_0_0;
struct IEnumerator_1_t6680;
extern Il2CppGenericClass IEnumerator_1_t6680_GenericClass;
TypeInfo IEnumerator_1_t6680_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6680_MethodInfos/* methods */
	, IEnumerator_1_t6680_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6680_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6680_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6680_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6680_0_0_0/* byval_arg */
	, &IEnumerator_1_t6680_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6680_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_575.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4737_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_575MethodDeclarations.h"

extern TypeInfo RuntimeCompatibilityAttribute_t132_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25928_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t132_m34408_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t132_m34408(__this, p0, method) (RuntimeCompatibilityAttribute_t132 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4737____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4737, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4737____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4737, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4737_FieldInfos[] =
{
	&InternalEnumerator_1_t4737____array_0_FieldInfo,
	&InternalEnumerator_1_t4737____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25925_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4737____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4737_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25925_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4737____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4737_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25928_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4737_PropertyInfos[] =
{
	&InternalEnumerator_1_t4737____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4737____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4737_InternalEnumerator_1__ctor_m25924_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25924_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25924_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4737_InternalEnumerator_1__ctor_m25924_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25924_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25925_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25925_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25925_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25926_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25926_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25926_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25927_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25927_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25927_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25928_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25928_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t132_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25928_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4737_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25924_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25925_MethodInfo,
	&InternalEnumerator_1_Dispose_m25926_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25927_MethodInfo,
	&InternalEnumerator_1_get_Current_m25928_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25927_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25926_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4737_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25925_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25927_MethodInfo,
	&InternalEnumerator_1_Dispose_m25926_MethodInfo,
	&InternalEnumerator_1_get_Current_m25928_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4737_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6680_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4737_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6680_il2cpp_TypeInfo, 7},
};
extern TypeInfo RuntimeCompatibilityAttribute_t132_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4737_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25928_MethodInfo/* Method Usage */,
	&RuntimeCompatibilityAttribute_t132_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t132_m34408_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4737_0_0_0;
extern Il2CppType InternalEnumerator_1_t4737_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4737_GenericClass;
TypeInfo InternalEnumerator_1_t4737_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4737_MethodInfos/* methods */
	, InternalEnumerator_1_t4737_PropertyInfos/* properties */
	, InternalEnumerator_1_t4737_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4737_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4737_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4737_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4737_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4737_1_0_0/* this_arg */
	, InternalEnumerator_1_t4737_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4737_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4737_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4737)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8608_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo ICollection_1_get_Count_m44690_MethodInfo;
static PropertyInfo ICollection_1_t8608____Count_PropertyInfo = 
{
	&ICollection_1_t8608_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44690_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44691_MethodInfo;
static PropertyInfo ICollection_1_t8608____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8608_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44691_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8608_PropertyInfos[] =
{
	&ICollection_1_t8608____Count_PropertyInfo,
	&ICollection_1_t8608____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44690_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44690_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44690_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44691_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44691_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44691_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
static ParameterInfo ICollection_1_t8608_ICollection_1_Add_m44692_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t132_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44692_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44692_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8608_ICollection_1_Add_m44692_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44692_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44693_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44693_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44693_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
static ParameterInfo ICollection_1_t8608_ICollection_1_Contains_m44694_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t132_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44694_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44694_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8608_ICollection_1_Contains_m44694_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44694_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttributeU5BU5D_t5021_0_0_0;
extern Il2CppType RuntimeCompatibilityAttributeU5BU5D_t5021_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8608_ICollection_1_CopyTo_m44695_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttributeU5BU5D_t5021_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44695_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44695_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8608_ICollection_1_CopyTo_m44695_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44695_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
static ParameterInfo ICollection_1_t8608_ICollection_1_Remove_m44696_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t132_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44696_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44696_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8608_ICollection_1_Remove_m44696_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44696_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8608_MethodInfos[] =
{
	&ICollection_1_get_Count_m44690_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44691_MethodInfo,
	&ICollection_1_Add_m44692_MethodInfo,
	&ICollection_1_Clear_m44693_MethodInfo,
	&ICollection_1_Contains_m44694_MethodInfo,
	&ICollection_1_CopyTo_m44695_MethodInfo,
	&ICollection_1_Remove_m44696_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8610_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8608_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8610_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8608_0_0_0;
extern Il2CppType ICollection_1_t8608_1_0_0;
struct ICollection_1_t8608;
extern Il2CppGenericClass ICollection_1_t8608_GenericClass;
TypeInfo ICollection_1_t8608_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8608_MethodInfos/* methods */
	, ICollection_1_t8608_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8608_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8608_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8608_0_0_0/* byval_arg */
	, &ICollection_1_t8608_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8608_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern Il2CppType IEnumerator_1_t6680_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44697_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44697_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8610_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6680_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44697_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8610_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44697_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8610_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8610_0_0_0;
extern Il2CppType IEnumerable_1_t8610_1_0_0;
struct IEnumerable_1_t8610;
extern Il2CppGenericClass IEnumerable_1_t8610_GenericClass;
TypeInfo IEnumerable_1_t8610_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8610_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8610_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8610_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8610_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8610_0_0_0/* byval_arg */
	, &IEnumerable_1_t8610_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8610_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8609_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo IList_1_get_Item_m44698_MethodInfo;
extern MethodInfo IList_1_set_Item_m44699_MethodInfo;
static PropertyInfo IList_1_t8609____Item_PropertyInfo = 
{
	&IList_1_t8609_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44698_MethodInfo/* get */
	, &IList_1_set_Item_m44699_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8609_PropertyInfos[] =
{
	&IList_1_t8609____Item_PropertyInfo,
	NULL
};
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
static ParameterInfo IList_1_t8609_IList_1_IndexOf_m44700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t132_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44700_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44700_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8609_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8609_IList_1_IndexOf_m44700_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44700_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
static ParameterInfo IList_1_t8609_IList_1_Insert_m44701_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t132_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44701_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44701_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8609_IList_1_Insert_m44701_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44701_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8609_IList_1_RemoveAt_m44702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44702_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44702_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8609_IList_1_RemoveAt_m44702_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44702_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8609_IList_1_get_Item_m44698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44698_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44698_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8609_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t132_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8609_IList_1_get_Item_m44698_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44698_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType RuntimeCompatibilityAttribute_t132_0_0_0;
static ParameterInfo IList_1_t8609_IList_1_set_Item_m44699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t132_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44699_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44699_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8609_IList_1_set_Item_m44699_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44699_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8609_MethodInfos[] =
{
	&IList_1_IndexOf_m44700_MethodInfo,
	&IList_1_Insert_m44701_MethodInfo,
	&IList_1_RemoveAt_m44702_MethodInfo,
	&IList_1_get_Item_m44698_MethodInfo,
	&IList_1_set_Item_m44699_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8609_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8608_il2cpp_TypeInfo,
	&IEnumerable_1_t8610_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8609_0_0_0;
extern Il2CppType IList_1_t8609_1_0_0;
struct IList_1_t8609;
extern Il2CppGenericClass IList_1_t8609_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8609_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8609_MethodInfos/* methods */
	, IList_1_t8609_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8609_il2cpp_TypeInfo/* element_class */
	, IList_1_t8609_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8609_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8609_0_0_0/* byval_arg */
	, &IList_1_t8609_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8609_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6682_il2cpp_TypeInfo;

// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44703_MethodInfo;
static PropertyInfo IEnumerator_1_t6682____Current_PropertyInfo = 
{
	&IEnumerator_1_t6682_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44703_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6682_PropertyInfos[] =
{
	&IEnumerator_1_t6682____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44703_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44703_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6682_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t105_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44703_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6682_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44703_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6682_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6682_0_0_0;
extern Il2CppType IEnumerator_1_t6682_1_0_0;
struct IEnumerator_1_t6682;
extern Il2CppGenericClass IEnumerator_1_t6682_GenericClass;
TypeInfo IEnumerator_1_t6682_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6682_MethodInfos/* methods */
	, IEnumerator_1_t6682_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6682_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6682_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6682_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6682_0_0_0/* byval_arg */
	, &IEnumerator_1_t6682_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6682_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_576.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4738_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_576MethodDeclarations.h"

extern TypeInfo DebuggerHiddenAttribute_t105_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25933_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t105_m34419_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerHiddenAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerHiddenAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t105_m34419(__this, p0, method) (DebuggerHiddenAttribute_t105 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4738____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4738, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4738____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4738, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4738_FieldInfos[] =
{
	&InternalEnumerator_1_t4738____array_0_FieldInfo,
	&InternalEnumerator_1_t4738____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25930_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4738____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4738_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25930_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4738____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4738_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25933_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4738_PropertyInfos[] =
{
	&InternalEnumerator_1_t4738____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4738____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4738_InternalEnumerator_1__ctor_m25929_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25929_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25929_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4738_InternalEnumerator_1__ctor_m25929_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25929_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25930_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25930_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25930_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25931_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25931_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25931_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25932_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25932_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25932_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25933_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25933_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t105_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25933_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4738_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25929_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25930_MethodInfo,
	&InternalEnumerator_1_Dispose_m25931_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25932_MethodInfo,
	&InternalEnumerator_1_get_Current_m25933_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25932_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25931_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4738_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25930_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25932_MethodInfo,
	&InternalEnumerator_1_Dispose_m25931_MethodInfo,
	&InternalEnumerator_1_get_Current_m25933_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4738_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6682_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4738_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6682_il2cpp_TypeInfo, 7},
};
extern TypeInfo DebuggerHiddenAttribute_t105_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4738_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25933_MethodInfo/* Method Usage */,
	&DebuggerHiddenAttribute_t105_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t105_m34419_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4738_0_0_0;
extern Il2CppType InternalEnumerator_1_t4738_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4738_GenericClass;
TypeInfo InternalEnumerator_1_t4738_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4738_MethodInfos/* methods */
	, InternalEnumerator_1_t4738_PropertyInfos/* properties */
	, InternalEnumerator_1_t4738_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4738_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4738_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4738_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4738_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4738_1_0_0/* this_arg */
	, InternalEnumerator_1_t4738_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4738_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4738_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4738)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8611_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo ICollection_1_get_Count_m44704_MethodInfo;
static PropertyInfo ICollection_1_t8611____Count_PropertyInfo = 
{
	&ICollection_1_t8611_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44704_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44705_MethodInfo;
static PropertyInfo ICollection_1_t8611____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8611_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44705_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8611_PropertyInfos[] =
{
	&ICollection_1_t8611____Count_PropertyInfo,
	&ICollection_1_t8611____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44704_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44704_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44704_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44705_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44705_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44705_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
static ParameterInfo ICollection_1_t8611_ICollection_1_Add_m44706_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t105_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44706_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44706_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8611_ICollection_1_Add_m44706_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44706_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44707_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44707_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44707_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
static ParameterInfo ICollection_1_t8611_ICollection_1_Contains_m44708_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t105_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44708_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44708_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8611_ICollection_1_Contains_m44708_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44708_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttributeU5BU5D_t5022_0_0_0;
extern Il2CppType DebuggerHiddenAttributeU5BU5D_t5022_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8611_ICollection_1_CopyTo_m44709_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttributeU5BU5D_t5022_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44709_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44709_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8611_ICollection_1_CopyTo_m44709_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44709_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
static ParameterInfo ICollection_1_t8611_ICollection_1_Remove_m44710_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t105_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44710_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44710_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8611_ICollection_1_Remove_m44710_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44710_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8611_MethodInfos[] =
{
	&ICollection_1_get_Count_m44704_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44705_MethodInfo,
	&ICollection_1_Add_m44706_MethodInfo,
	&ICollection_1_Clear_m44707_MethodInfo,
	&ICollection_1_Contains_m44708_MethodInfo,
	&ICollection_1_CopyTo_m44709_MethodInfo,
	&ICollection_1_Remove_m44710_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8613_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8611_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8613_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8611_0_0_0;
extern Il2CppType ICollection_1_t8611_1_0_0;
struct ICollection_1_t8611;
extern Il2CppGenericClass ICollection_1_t8611_GenericClass;
TypeInfo ICollection_1_t8611_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8611_MethodInfos/* methods */
	, ICollection_1_t8611_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8611_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8611_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8611_0_0_0/* byval_arg */
	, &ICollection_1_t8611_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8611_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>
extern Il2CppType IEnumerator_1_t6682_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44711_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44711_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8613_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6682_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44711_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8613_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44711_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8613_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8613_0_0_0;
extern Il2CppType IEnumerable_1_t8613_1_0_0;
struct IEnumerable_1_t8613;
extern Il2CppGenericClass IEnumerable_1_t8613_GenericClass;
TypeInfo IEnumerable_1_t8613_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8613_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8613_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8613_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8613_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8613_0_0_0/* byval_arg */
	, &IEnumerable_1_t8613_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8613_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8612_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo IList_1_get_Item_m44712_MethodInfo;
extern MethodInfo IList_1_set_Item_m44713_MethodInfo;
static PropertyInfo IList_1_t8612____Item_PropertyInfo = 
{
	&IList_1_t8612_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44712_MethodInfo/* get */
	, &IList_1_set_Item_m44713_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8612_PropertyInfos[] =
{
	&IList_1_t8612____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
static ParameterInfo IList_1_t8612_IList_1_IndexOf_m44714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t105_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44714_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44714_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8612_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8612_IList_1_IndexOf_m44714_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44714_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
static ParameterInfo IList_1_t8612_IList_1_Insert_m44715_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t105_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44715_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44715_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8612_IList_1_Insert_m44715_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44715_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8612_IList_1_RemoveAt_m44716_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44716_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44716_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8612_IList_1_RemoveAt_m44716_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44716_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8612_IList_1_get_Item_m44712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44712_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44712_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8612_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t105_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8612_IList_1_get_Item_m44712_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44712_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DebuggerHiddenAttribute_t105_0_0_0;
static ParameterInfo IList_1_t8612_IList_1_set_Item_m44713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t105_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44713_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44713_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8612_IList_1_set_Item_m44713_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44713_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8612_MethodInfos[] =
{
	&IList_1_IndexOf_m44714_MethodInfo,
	&IList_1_Insert_m44715_MethodInfo,
	&IList_1_RemoveAt_m44716_MethodInfo,
	&IList_1_get_Item_m44712_MethodInfo,
	&IList_1_set_Item_m44713_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8612_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8611_il2cpp_TypeInfo,
	&IEnumerable_1_t8613_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8612_0_0_0;
extern Il2CppType IList_1_t8612_1_0_0;
struct IList_1_t8612;
extern Il2CppGenericClass IList_1_t8612_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8612_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8612_MethodInfos/* methods */
	, IList_1_t8612_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8612_il2cpp_TypeInfo/* element_class */
	, IList_1_t8612_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8612_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8612_0_0_0/* byval_arg */
	, &IList_1_t8612_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8612_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6684_il2cpp_TypeInfo;

// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44717_MethodInfo;
static PropertyInfo IEnumerator_1_t6684____Current_PropertyInfo = 
{
	&IEnumerator_1_t6684_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44717_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6684_PropertyInfos[] =
{
	&IEnumerator_1_t6684____Current_PropertyInfo,
	NULL
};
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44717_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44717_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6684_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t115_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44717_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6684_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44717_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6684_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6684_0_0_0;
extern Il2CppType IEnumerator_1_t6684_1_0_0;
struct IEnumerator_1_t6684;
extern Il2CppGenericClass IEnumerator_1_t6684_GenericClass;
TypeInfo IEnumerator_1_t6684_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6684_MethodInfos/* methods */
	, IEnumerator_1_t6684_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6684_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6684_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6684_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6684_0_0_0/* byval_arg */
	, &IEnumerator_1_t6684_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6684_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_577.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4739_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_577MethodDeclarations.h"

extern TypeInfo DefaultMemberAttribute_t115_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25938_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDefaultMemberAttribute_t115_m34430_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.DefaultMemberAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.DefaultMemberAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDefaultMemberAttribute_t115_m34430(__this, p0, method) (DefaultMemberAttribute_t115 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4739____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4739, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4739____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4739, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4739_FieldInfos[] =
{
	&InternalEnumerator_1_t4739____array_0_FieldInfo,
	&InternalEnumerator_1_t4739____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25935_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4739____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4739_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25935_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4739____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4739_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25938_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4739_PropertyInfos[] =
{
	&InternalEnumerator_1_t4739____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4739____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4739_InternalEnumerator_1__ctor_m25934_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25934_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25934_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4739_InternalEnumerator_1__ctor_m25934_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25934_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25935_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25935_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25935_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25936_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25936_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25936_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25937_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25937_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25937_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25938_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25938_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t115_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25938_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4739_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25934_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25935_MethodInfo,
	&InternalEnumerator_1_Dispose_m25936_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25937_MethodInfo,
	&InternalEnumerator_1_get_Current_m25938_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25937_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25936_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4739_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25935_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25937_MethodInfo,
	&InternalEnumerator_1_Dispose_m25936_MethodInfo,
	&InternalEnumerator_1_get_Current_m25938_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4739_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6684_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4739_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6684_il2cpp_TypeInfo, 7},
};
extern TypeInfo DefaultMemberAttribute_t115_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4739_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25938_MethodInfo/* Method Usage */,
	&DefaultMemberAttribute_t115_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDefaultMemberAttribute_t115_m34430_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4739_0_0_0;
extern Il2CppType InternalEnumerator_1_t4739_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4739_GenericClass;
TypeInfo InternalEnumerator_1_t4739_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4739_MethodInfos/* methods */
	, InternalEnumerator_1_t4739_PropertyInfos/* properties */
	, InternalEnumerator_1_t4739_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4739_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4739_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4739_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4739_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4739_1_0_0/* this_arg */
	, InternalEnumerator_1_t4739_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4739_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4739_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4739)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8614_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo ICollection_1_get_Count_m44718_MethodInfo;
static PropertyInfo ICollection_1_t8614____Count_PropertyInfo = 
{
	&ICollection_1_t8614_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44718_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44719_MethodInfo;
static PropertyInfo ICollection_1_t8614____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8614_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44719_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8614_PropertyInfos[] =
{
	&ICollection_1_t8614____Count_PropertyInfo,
	&ICollection_1_t8614____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44718_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44718_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44718_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44719_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44719_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44719_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
static ParameterInfo ICollection_1_t8614_ICollection_1_Add_m44720_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t115_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44720_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44720_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8614_ICollection_1_Add_m44720_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44720_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44721_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44721_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44721_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
static ParameterInfo ICollection_1_t8614_ICollection_1_Contains_m44722_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t115_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44722_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44722_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8614_ICollection_1_Contains_m44722_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44722_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttributeU5BU5D_t5023_0_0_0;
extern Il2CppType DefaultMemberAttributeU5BU5D_t5023_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8614_ICollection_1_CopyTo_m44723_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttributeU5BU5D_t5023_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44723_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44723_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8614_ICollection_1_CopyTo_m44723_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44723_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
static ParameterInfo ICollection_1_t8614_ICollection_1_Remove_m44724_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t115_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44724_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44724_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8614_ICollection_1_Remove_m44724_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44724_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8614_MethodInfos[] =
{
	&ICollection_1_get_Count_m44718_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44719_MethodInfo,
	&ICollection_1_Add_m44720_MethodInfo,
	&ICollection_1_Clear_m44721_MethodInfo,
	&ICollection_1_Contains_m44722_MethodInfo,
	&ICollection_1_CopyTo_m44723_MethodInfo,
	&ICollection_1_Remove_m44724_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8616_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8614_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8616_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8614_0_0_0;
extern Il2CppType ICollection_1_t8614_1_0_0;
struct ICollection_1_t8614;
extern Il2CppGenericClass ICollection_1_t8614_GenericClass;
TypeInfo ICollection_1_t8614_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8614_MethodInfos/* methods */
	, ICollection_1_t8614_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8614_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8614_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8614_0_0_0/* byval_arg */
	, &ICollection_1_t8614_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8614_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>
extern Il2CppType IEnumerator_1_t6684_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44725_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44725_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8616_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6684_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44725_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8616_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44725_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8616_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8616_0_0_0;
extern Il2CppType IEnumerable_1_t8616_1_0_0;
struct IEnumerable_1_t8616;
extern Il2CppGenericClass IEnumerable_1_t8616_GenericClass;
TypeInfo IEnumerable_1_t8616_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8616_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8616_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8616_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8616_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8616_0_0_0/* byval_arg */
	, &IEnumerable_1_t8616_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8616_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8615_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo IList_1_get_Item_m44726_MethodInfo;
extern MethodInfo IList_1_set_Item_m44727_MethodInfo;
static PropertyInfo IList_1_t8615____Item_PropertyInfo = 
{
	&IList_1_t8615_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44726_MethodInfo/* get */
	, &IList_1_set_Item_m44727_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8615_PropertyInfos[] =
{
	&IList_1_t8615____Item_PropertyInfo,
	NULL
};
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
static ParameterInfo IList_1_t8615_IList_1_IndexOf_m44728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t115_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44728_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44728_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8615_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8615_IList_1_IndexOf_m44728_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44728_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
static ParameterInfo IList_1_t8615_IList_1_Insert_m44729_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t115_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44729_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44729_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8615_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8615_IList_1_Insert_m44729_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44729_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8615_IList_1_RemoveAt_m44730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44730_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44730_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8615_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8615_IList_1_RemoveAt_m44730_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44730_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8615_IList_1_get_Item_m44726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44726_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44726_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8615_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t115_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8615_IList_1_get_Item_m44726_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44726_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DefaultMemberAttribute_t115_0_0_0;
static ParameterInfo IList_1_t8615_IList_1_set_Item_m44727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t115_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44727_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44727_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8615_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8615_IList_1_set_Item_m44727_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44727_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8615_MethodInfos[] =
{
	&IList_1_IndexOf_m44728_MethodInfo,
	&IList_1_Insert_m44729_MethodInfo,
	&IList_1_RemoveAt_m44730_MethodInfo,
	&IList_1_get_Item_m44726_MethodInfo,
	&IList_1_set_Item_m44727_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8615_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8614_il2cpp_TypeInfo,
	&IEnumerable_1_t8616_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8615_0_0_0;
extern Il2CppType IList_1_t8615_1_0_0;
struct IList_1_t8615;
extern Il2CppGenericClass IList_1_t8615_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8615_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8615_MethodInfos/* methods */
	, IList_1_t8615_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8615_il2cpp_TypeInfo/* element_class */
	, IList_1_t8615_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8615_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8615_0_0_0/* byval_arg */
	, &IList_1_t8615_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8615_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6686_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.DecimalConstantAttribute
#include "mscorlib_System_Runtime_CompilerServices_DecimalConstantAttr.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44731_MethodInfo;
static PropertyInfo IEnumerator_1_t6686____Current_PropertyInfo = 
{
	&IEnumerator_1_t6686_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44731_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6686_PropertyInfos[] =
{
	&IEnumerator_1_t6686____Current_PropertyInfo,
	NULL
};
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44731_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44731_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6686_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t1774_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44731_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6686_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44731_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6686_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6686_0_0_0;
extern Il2CppType IEnumerator_1_t6686_1_0_0;
struct IEnumerator_1_t6686;
extern Il2CppGenericClass IEnumerator_1_t6686_GenericClass;
TypeInfo IEnumerator_1_t6686_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6686_MethodInfos/* methods */
	, IEnumerator_1_t6686_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6686_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6686_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6686_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6686_0_0_0/* byval_arg */
	, &IEnumerator_1_t6686_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6686_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_578.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4740_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_578MethodDeclarations.h"

extern TypeInfo DecimalConstantAttribute_t1774_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25943_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDecimalConstantAttribute_t1774_m34441_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DecimalConstantAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DecimalConstantAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDecimalConstantAttribute_t1774_m34441(__this, p0, method) (DecimalConstantAttribute_t1774 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4740____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4740, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4740____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4740, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4740_FieldInfos[] =
{
	&InternalEnumerator_1_t4740____array_0_FieldInfo,
	&InternalEnumerator_1_t4740____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25940_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4740____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4740_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25940_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4740____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4740_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25943_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4740_PropertyInfos[] =
{
	&InternalEnumerator_1_t4740____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4740____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4740_InternalEnumerator_1__ctor_m25939_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25939_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25939_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4740_InternalEnumerator_1__ctor_m25939_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25939_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25940_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25940_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25940_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25941_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25941_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25941_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25942_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25942_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25942_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25943_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25943_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t1774_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25943_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4740_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25939_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25940_MethodInfo,
	&InternalEnumerator_1_Dispose_m25941_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25942_MethodInfo,
	&InternalEnumerator_1_get_Current_m25943_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25942_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25941_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4740_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25940_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25942_MethodInfo,
	&InternalEnumerator_1_Dispose_m25941_MethodInfo,
	&InternalEnumerator_1_get_Current_m25943_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4740_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6686_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4740_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6686_il2cpp_TypeInfo, 7},
};
extern TypeInfo DecimalConstantAttribute_t1774_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4740_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25943_MethodInfo/* Method Usage */,
	&DecimalConstantAttribute_t1774_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDecimalConstantAttribute_t1774_m34441_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4740_0_0_0;
extern Il2CppType InternalEnumerator_1_t4740_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4740_GenericClass;
TypeInfo InternalEnumerator_1_t4740_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4740_MethodInfos/* methods */
	, InternalEnumerator_1_t4740_PropertyInfos/* properties */
	, InternalEnumerator_1_t4740_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4740_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4740_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4740_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4740_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4740_1_0_0/* this_arg */
	, InternalEnumerator_1_t4740_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4740_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4740_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4740)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8617_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo ICollection_1_get_Count_m44732_MethodInfo;
static PropertyInfo ICollection_1_t8617____Count_PropertyInfo = 
{
	&ICollection_1_t8617_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44732_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44733_MethodInfo;
static PropertyInfo ICollection_1_t8617____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8617_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44733_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8617_PropertyInfos[] =
{
	&ICollection_1_t8617____Count_PropertyInfo,
	&ICollection_1_t8617____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44732_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44732_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44732_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44733_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44733_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44733_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
static ParameterInfo ICollection_1_t8617_ICollection_1_Add_m44734_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1774_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44734_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44734_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8617_ICollection_1_Add_m44734_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44734_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44735_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44735_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44735_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
static ParameterInfo ICollection_1_t8617_ICollection_1_Contains_m44736_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1774_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44736_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44736_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8617_ICollection_1_Contains_m44736_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44736_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttributeU5BU5D_t5024_0_0_0;
extern Il2CppType DecimalConstantAttributeU5BU5D_t5024_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8617_ICollection_1_CopyTo_m44737_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttributeU5BU5D_t5024_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44737_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44737_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8617_ICollection_1_CopyTo_m44737_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44737_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
static ParameterInfo ICollection_1_t8617_ICollection_1_Remove_m44738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1774_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44738_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44738_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8617_ICollection_1_Remove_m44738_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44738_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8617_MethodInfos[] =
{
	&ICollection_1_get_Count_m44732_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44733_MethodInfo,
	&ICollection_1_Add_m44734_MethodInfo,
	&ICollection_1_Clear_m44735_MethodInfo,
	&ICollection_1_Contains_m44736_MethodInfo,
	&ICollection_1_CopyTo_m44737_MethodInfo,
	&ICollection_1_Remove_m44738_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8619_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8617_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8619_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8617_0_0_0;
extern Il2CppType ICollection_1_t8617_1_0_0;
struct ICollection_1_t8617;
extern Il2CppGenericClass ICollection_1_t8617_GenericClass;
TypeInfo ICollection_1_t8617_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8617_MethodInfos/* methods */
	, ICollection_1_t8617_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8617_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8617_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8617_0_0_0/* byval_arg */
	, &ICollection_1_t8617_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8617_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern Il2CppType IEnumerator_1_t6686_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44739_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44739_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8619_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6686_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44739_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8619_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44739_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8619_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8619_0_0_0;
extern Il2CppType IEnumerable_1_t8619_1_0_0;
struct IEnumerable_1_t8619;
extern Il2CppGenericClass IEnumerable_1_t8619_GenericClass;
TypeInfo IEnumerable_1_t8619_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8619_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8619_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8619_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8619_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8619_0_0_0/* byval_arg */
	, &IEnumerable_1_t8619_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8619_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8618_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo IList_1_get_Item_m44740_MethodInfo;
extern MethodInfo IList_1_set_Item_m44741_MethodInfo;
static PropertyInfo IList_1_t8618____Item_PropertyInfo = 
{
	&IList_1_t8618_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44740_MethodInfo/* get */
	, &IList_1_set_Item_m44741_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8618_PropertyInfos[] =
{
	&IList_1_t8618____Item_PropertyInfo,
	NULL
};
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
static ParameterInfo IList_1_t8618_IList_1_IndexOf_m44742_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1774_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44742_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44742_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8618_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8618_IList_1_IndexOf_m44742_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44742_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
static ParameterInfo IList_1_t8618_IList_1_Insert_m44743_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1774_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44743_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44743_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8618_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8618_IList_1_Insert_m44743_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44743_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8618_IList_1_RemoveAt_m44744_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44744_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44744_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8618_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8618_IList_1_RemoveAt_m44744_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44744_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8618_IList_1_get_Item_m44740_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44740_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44740_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8618_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t1774_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8618_IList_1_get_Item_m44740_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44740_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType DecimalConstantAttribute_t1774_0_0_0;
static ParameterInfo IList_1_t8618_IList_1_set_Item_m44741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1774_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44741_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44741_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8618_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8618_IList_1_set_Item_m44741_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44741_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8618_MethodInfos[] =
{
	&IList_1_IndexOf_m44742_MethodInfo,
	&IList_1_Insert_m44743_MethodInfo,
	&IList_1_RemoveAt_m44744_MethodInfo,
	&IList_1_get_Item_m44740_MethodInfo,
	&IList_1_set_Item_m44741_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8618_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8617_il2cpp_TypeInfo,
	&IEnumerable_1_t8619_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8618_0_0_0;
extern Il2CppType IList_1_t8618_1_0_0;
struct IList_1_t8618;
extern Il2CppGenericClass IList_1_t8618_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8618_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8618_MethodInfos/* methods */
	, IList_1_t8618_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8618_il2cpp_TypeInfo/* element_class */
	, IList_1_t8618_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8618_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8618_0_0_0/* byval_arg */
	, &IList_1_t8618_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8618_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6688_il2cpp_TypeInfo;

// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44745_MethodInfo;
static PropertyInfo IEnumerator_1_t6688____Current_PropertyInfo = 
{
	&IEnumerator_1_t6688_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44745_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6688_PropertyInfos[] =
{
	&IEnumerator_1_t6688____Current_PropertyInfo,
	NULL
};
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44745_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44745_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6688_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t1775_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44745_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6688_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44745_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6688_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6688_0_0_0;
extern Il2CppType IEnumerator_1_t6688_1_0_0;
struct IEnumerator_1_t6688;
extern Il2CppGenericClass IEnumerator_1_t6688_GenericClass;
TypeInfo IEnumerator_1_t6688_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6688_MethodInfos/* methods */
	, IEnumerator_1_t6688_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6688_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6688_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6688_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6688_0_0_0/* byval_arg */
	, &IEnumerator_1_t6688_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6688_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_579.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4741_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_579MethodDeclarations.h"

extern TypeInfo FieldOffsetAttribute_t1775_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25948_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFieldOffsetAttribute_t1775_m34452_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.FieldOffsetAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.FieldOffsetAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisFieldOffsetAttribute_t1775_m34452(__this, p0, method) (FieldOffsetAttribute_t1775 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4741____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4741, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4741____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4741, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4741_FieldInfos[] =
{
	&InternalEnumerator_1_t4741____array_0_FieldInfo,
	&InternalEnumerator_1_t4741____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25945_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4741____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4741_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25945_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4741____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4741_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25948_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4741_PropertyInfos[] =
{
	&InternalEnumerator_1_t4741____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4741____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4741_InternalEnumerator_1__ctor_m25944_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25944_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25944_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4741_InternalEnumerator_1__ctor_m25944_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25944_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25945_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25945_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25945_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25946_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25946_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25946_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25947_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25947_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25947_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25948_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25948_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t1775_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25948_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4741_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25944_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25945_MethodInfo,
	&InternalEnumerator_1_Dispose_m25946_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25947_MethodInfo,
	&InternalEnumerator_1_get_Current_m25948_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25947_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25946_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4741_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25945_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25947_MethodInfo,
	&InternalEnumerator_1_Dispose_m25946_MethodInfo,
	&InternalEnumerator_1_get_Current_m25948_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4741_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6688_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4741_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6688_il2cpp_TypeInfo, 7},
};
extern TypeInfo FieldOffsetAttribute_t1775_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4741_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25948_MethodInfo/* Method Usage */,
	&FieldOffsetAttribute_t1775_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisFieldOffsetAttribute_t1775_m34452_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4741_0_0_0;
extern Il2CppType InternalEnumerator_1_t4741_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4741_GenericClass;
TypeInfo InternalEnumerator_1_t4741_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4741_MethodInfos/* methods */
	, InternalEnumerator_1_t4741_PropertyInfos/* properties */
	, InternalEnumerator_1_t4741_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4741_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4741_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4741_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4741_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4741_1_0_0/* this_arg */
	, InternalEnumerator_1_t4741_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4741_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4741_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4741)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8620_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo ICollection_1_get_Count_m44746_MethodInfo;
static PropertyInfo ICollection_1_t8620____Count_PropertyInfo = 
{
	&ICollection_1_t8620_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44746_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44747_MethodInfo;
static PropertyInfo ICollection_1_t8620____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8620_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44747_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8620_PropertyInfos[] =
{
	&ICollection_1_t8620____Count_PropertyInfo,
	&ICollection_1_t8620____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44746_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44746_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44746_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44747_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44747_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44747_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
static ParameterInfo ICollection_1_t8620_ICollection_1_Add_m44748_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1775_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44748_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44748_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8620_ICollection_1_Add_m44748_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44748_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44749_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44749_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44749_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
static ParameterInfo ICollection_1_t8620_ICollection_1_Contains_m44750_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1775_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44750_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44750_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8620_ICollection_1_Contains_m44750_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44750_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttributeU5BU5D_t5025_0_0_0;
extern Il2CppType FieldOffsetAttributeU5BU5D_t5025_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8620_ICollection_1_CopyTo_m44751_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttributeU5BU5D_t5025_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44751_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44751_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8620_ICollection_1_CopyTo_m44751_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44751_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
static ParameterInfo ICollection_1_t8620_ICollection_1_Remove_m44752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1775_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44752_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44752_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8620_ICollection_1_Remove_m44752_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44752_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8620_MethodInfos[] =
{
	&ICollection_1_get_Count_m44746_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44747_MethodInfo,
	&ICollection_1_Add_m44748_MethodInfo,
	&ICollection_1_Clear_m44749_MethodInfo,
	&ICollection_1_Contains_m44750_MethodInfo,
	&ICollection_1_CopyTo_m44751_MethodInfo,
	&ICollection_1_Remove_m44752_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8622_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8620_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8622_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8620_0_0_0;
extern Il2CppType ICollection_1_t8620_1_0_0;
struct ICollection_1_t8620;
extern Il2CppGenericClass ICollection_1_t8620_GenericClass;
TypeInfo ICollection_1_t8620_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8620_MethodInfos/* methods */
	, ICollection_1_t8620_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8620_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8620_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8620_0_0_0/* byval_arg */
	, &ICollection_1_t8620_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8620_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern Il2CppType IEnumerator_1_t6688_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44753_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44753_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8622_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6688_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44753_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8622_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44753_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8622_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8622_0_0_0;
extern Il2CppType IEnumerable_1_t8622_1_0_0;
struct IEnumerable_1_t8622;
extern Il2CppGenericClass IEnumerable_1_t8622_GenericClass;
TypeInfo IEnumerable_1_t8622_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8622_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8622_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8622_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8622_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8622_0_0_0/* byval_arg */
	, &IEnumerable_1_t8622_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8622_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8621_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo IList_1_get_Item_m44754_MethodInfo;
extern MethodInfo IList_1_set_Item_m44755_MethodInfo;
static PropertyInfo IList_1_t8621____Item_PropertyInfo = 
{
	&IList_1_t8621_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44754_MethodInfo/* get */
	, &IList_1_set_Item_m44755_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8621_PropertyInfos[] =
{
	&IList_1_t8621____Item_PropertyInfo,
	NULL
};
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
static ParameterInfo IList_1_t8621_IList_1_IndexOf_m44756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1775_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44756_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44756_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8621_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8621_IList_1_IndexOf_m44756_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44756_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
static ParameterInfo IList_1_t8621_IList_1_Insert_m44757_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1775_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44757_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44757_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8621_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8621_IList_1_Insert_m44757_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44757_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8621_IList_1_RemoveAt_m44758_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44758_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44758_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8621_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8621_IList_1_RemoveAt_m44758_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44758_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8621_IList_1_get_Item_m44754_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44754_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44754_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8621_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t1775_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8621_IList_1_get_Item_m44754_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44754_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FieldOffsetAttribute_t1775_0_0_0;
static ParameterInfo IList_1_t8621_IList_1_set_Item_m44755_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1775_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44755_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44755_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8621_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8621_IList_1_set_Item_m44755_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44755_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8621_MethodInfos[] =
{
	&IList_1_IndexOf_m44756_MethodInfo,
	&IList_1_Insert_m44757_MethodInfo,
	&IList_1_RemoveAt_m44758_MethodInfo,
	&IList_1_get_Item_m44754_MethodInfo,
	&IList_1_set_Item_m44755_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8621_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8620_il2cpp_TypeInfo,
	&IEnumerable_1_t8622_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8621_0_0_0;
extern Il2CppType IList_1_t8621_1_0_0;
struct IList_1_t8621;
extern Il2CppGenericClass IList_1_t8621_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8621_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8621_MethodInfos/* methods */
	, IList_1_t8621_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8621_il2cpp_TypeInfo/* element_class */
	, IList_1_t8621_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8621_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8621_0_0_0/* byval_arg */
	, &IList_1_t8621_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8621_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6690_il2cpp_TypeInfo;

// System.MonoTODOAttribute
#include "mscorlib_System_MonoTODOAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44759_MethodInfo;
static PropertyInfo IEnumerator_1_t6690____Current_PropertyInfo = 
{
	&IEnumerator_1_t6690_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44759_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6690_PropertyInfos[] =
{
	&IEnumerator_1_t6690____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44759_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44759_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6690_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1783_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44759_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6690_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44759_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6690_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6690_0_0_0;
extern Il2CppType IEnumerator_1_t6690_1_0_0;
struct IEnumerator_1_t6690;
extern Il2CppGenericClass IEnumerator_1_t6690_GenericClass;
TypeInfo IEnumerator_1_t6690_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6690_MethodInfos/* methods */
	, IEnumerator_1_t6690_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6690_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6690_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6690_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6690_0_0_0/* byval_arg */
	, &IEnumerator_1_t6690_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6690_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_580.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4742_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_580MethodDeclarations.h"

extern TypeInfo MonoTODOAttribute_t1783_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25953_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoTODOAttribute_t1783_m34463_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoTODOAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoTODOAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoTODOAttribute_t1783_m34463(__this, p0, method) (MonoTODOAttribute_t1783 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4742____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4742, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4742____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4742, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4742_FieldInfos[] =
{
	&InternalEnumerator_1_t4742____array_0_FieldInfo,
	&InternalEnumerator_1_t4742____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25950_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4742____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4742_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25950_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4742____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4742_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25953_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4742_PropertyInfos[] =
{
	&InternalEnumerator_1_t4742____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4742____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4742_InternalEnumerator_1__ctor_m25949_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25949_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25949_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4742_InternalEnumerator_1__ctor_m25949_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25949_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25950_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25950_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25950_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25951_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25951_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25951_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25952_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25952_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25952_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25953_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25953_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1783_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25953_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4742_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25949_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25950_MethodInfo,
	&InternalEnumerator_1_Dispose_m25951_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25952_MethodInfo,
	&InternalEnumerator_1_get_Current_m25953_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25952_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25951_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4742_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25950_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25952_MethodInfo,
	&InternalEnumerator_1_Dispose_m25951_MethodInfo,
	&InternalEnumerator_1_get_Current_m25953_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4742_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6690_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4742_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6690_il2cpp_TypeInfo, 7},
};
extern TypeInfo MonoTODOAttribute_t1783_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4742_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25953_MethodInfo/* Method Usage */,
	&MonoTODOAttribute_t1783_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoTODOAttribute_t1783_m34463_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4742_0_0_0;
extern Il2CppType InternalEnumerator_1_t4742_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4742_GenericClass;
TypeInfo InternalEnumerator_1_t4742_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4742_MethodInfos/* methods */
	, InternalEnumerator_1_t4742_PropertyInfos/* properties */
	, InternalEnumerator_1_t4742_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4742_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4742_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4742_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4742_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4742_1_0_0/* this_arg */
	, InternalEnumerator_1_t4742_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4742_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4742_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4742)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8623_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>
extern MethodInfo ICollection_1_get_Count_m44760_MethodInfo;
static PropertyInfo ICollection_1_t8623____Count_PropertyInfo = 
{
	&ICollection_1_t8623_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44760_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44761_MethodInfo;
static PropertyInfo ICollection_1_t8623____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8623_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44761_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8623_PropertyInfos[] =
{
	&ICollection_1_t8623____Count_PropertyInfo,
	&ICollection_1_t8623____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44760_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44760_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44760_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44761_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44761_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44761_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
static ParameterInfo ICollection_1_t8623_ICollection_1_Add_m44762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1783_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44762_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44762_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8623_ICollection_1_Add_m44762_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44762_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44763_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44763_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44763_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
static ParameterInfo ICollection_1_t8623_ICollection_1_Contains_m44764_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1783_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44764_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44764_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8623_ICollection_1_Contains_m44764_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44764_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttributeU5BU5D_t5026_0_0_0;
extern Il2CppType MonoTODOAttributeU5BU5D_t5026_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8623_ICollection_1_CopyTo_m44765_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttributeU5BU5D_t5026_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44765_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44765_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8623_ICollection_1_CopyTo_m44765_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44765_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
static ParameterInfo ICollection_1_t8623_ICollection_1_Remove_m44766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1783_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44766_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44766_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8623_ICollection_1_Remove_m44766_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44766_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8623_MethodInfos[] =
{
	&ICollection_1_get_Count_m44760_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44761_MethodInfo,
	&ICollection_1_Add_m44762_MethodInfo,
	&ICollection_1_Clear_m44763_MethodInfo,
	&ICollection_1_Contains_m44764_MethodInfo,
	&ICollection_1_CopyTo_m44765_MethodInfo,
	&ICollection_1_Remove_m44766_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8625_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8623_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8625_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8623_0_0_0;
extern Il2CppType ICollection_1_t8623_1_0_0;
struct ICollection_1_t8623;
extern Il2CppGenericClass ICollection_1_t8623_GenericClass;
TypeInfo ICollection_1_t8623_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8623_MethodInfos/* methods */
	, ICollection_1_t8623_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8623_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8623_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8623_0_0_0/* byval_arg */
	, &ICollection_1_t8623_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8623_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern Il2CppType IEnumerator_1_t6690_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44767_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44767_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8625_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6690_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44767_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8625_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44767_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8625_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8625_0_0_0;
extern Il2CppType IEnumerable_1_t8625_1_0_0;
struct IEnumerable_1_t8625;
extern Il2CppGenericClass IEnumerable_1_t8625_GenericClass;
TypeInfo IEnumerable_1_t8625_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8625_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8625_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8625_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8625_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8625_0_0_0/* byval_arg */
	, &IEnumerable_1_t8625_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8625_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8624_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoTODOAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoTODOAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoTODOAttribute>
extern MethodInfo IList_1_get_Item_m44768_MethodInfo;
extern MethodInfo IList_1_set_Item_m44769_MethodInfo;
static PropertyInfo IList_1_t8624____Item_PropertyInfo = 
{
	&IList_1_t8624_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44768_MethodInfo/* get */
	, &IList_1_set_Item_m44769_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8624_PropertyInfos[] =
{
	&IList_1_t8624____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
static ParameterInfo IList_1_t8624_IList_1_IndexOf_m44770_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1783_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44770_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoTODOAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44770_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8624_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8624_IList_1_IndexOf_m44770_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44770_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
static ParameterInfo IList_1_t8624_IList_1_Insert_m44771_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1783_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44771_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44771_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8624_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8624_IList_1_Insert_m44771_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44771_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8624_IList_1_RemoveAt_m44772_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44772_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44772_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8624_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8624_IList_1_RemoveAt_m44772_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44772_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8624_IList_1_get_Item_m44768_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44768_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoTODOAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44768_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8624_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1783_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8624_IList_1_get_Item_m44768_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44768_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoTODOAttribute_t1783_0_0_0;
static ParameterInfo IList_1_t8624_IList_1_set_Item_m44769_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1783_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44769_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44769_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8624_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8624_IList_1_set_Item_m44769_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44769_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8624_MethodInfos[] =
{
	&IList_1_IndexOf_m44770_MethodInfo,
	&IList_1_Insert_m44771_MethodInfo,
	&IList_1_RemoveAt_m44772_MethodInfo,
	&IList_1_get_Item_m44768_MethodInfo,
	&IList_1_set_Item_m44769_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8624_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8623_il2cpp_TypeInfo,
	&IEnumerable_1_t8625_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8624_0_0_0;
extern Il2CppType IList_1_t8624_1_0_0;
struct IList_1_t8624;
extern Il2CppGenericClass IList_1_t8624_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8624_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8624_MethodInfos/* methods */
	, IList_1_t8624_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8624_il2cpp_TypeInfo/* element_class */
	, IList_1_t8624_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8624_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8624_0_0_0/* byval_arg */
	, &IList_1_t8624_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8624_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6692_il2cpp_TypeInfo;

// System.MonoDocumentationNoteAttribute
#include "mscorlib_System_MonoDocumentationNoteAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44773_MethodInfo;
static PropertyInfo IEnumerator_1_t6692____Current_PropertyInfo = 
{
	&IEnumerator_1_t6692_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44773_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6692_PropertyInfos[] =
{
	&IEnumerator_1_t6692____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44773_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44773_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6692_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t1784_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44773_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6692_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44773_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6692_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6692_0_0_0;
extern Il2CppType IEnumerator_1_t6692_1_0_0;
struct IEnumerator_1_t6692;
extern Il2CppGenericClass IEnumerator_1_t6692_GenericClass;
TypeInfo IEnumerator_1_t6692_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6692_MethodInfos/* methods */
	, IEnumerator_1_t6692_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6692_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6692_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6692_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6692_0_0_0/* byval_arg */
	, &IEnumerator_1_t6692_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6692_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_581.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4743_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_581MethodDeclarations.h"

extern TypeInfo MonoDocumentationNoteAttribute_t1784_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25958_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t1784_m34474_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoDocumentationNoteAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoDocumentationNoteAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t1784_m34474(__this, p0, method) (MonoDocumentationNoteAttribute_t1784 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4743____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4743, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4743____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4743, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4743_FieldInfos[] =
{
	&InternalEnumerator_1_t4743____array_0_FieldInfo,
	&InternalEnumerator_1_t4743____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25955_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4743____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4743_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25955_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4743____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4743_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25958_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4743_PropertyInfos[] =
{
	&InternalEnumerator_1_t4743____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4743____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4743_InternalEnumerator_1__ctor_m25954_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25954_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25954_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4743_InternalEnumerator_1__ctor_m25954_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25954_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25955_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25955_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25955_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25956_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25956_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25956_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25957_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25957_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25957_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25958_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25958_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t1784_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25958_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4743_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25954_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25955_MethodInfo,
	&InternalEnumerator_1_Dispose_m25956_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25957_MethodInfo,
	&InternalEnumerator_1_get_Current_m25958_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25957_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25956_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4743_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25955_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25957_MethodInfo,
	&InternalEnumerator_1_Dispose_m25956_MethodInfo,
	&InternalEnumerator_1_get_Current_m25958_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4743_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6692_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4743_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6692_il2cpp_TypeInfo, 7},
};
extern TypeInfo MonoDocumentationNoteAttribute_t1784_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4743_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25958_MethodInfo/* Method Usage */,
	&MonoDocumentationNoteAttribute_t1784_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t1784_m34474_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4743_0_0_0;
extern Il2CppType InternalEnumerator_1_t4743_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4743_GenericClass;
TypeInfo InternalEnumerator_1_t4743_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4743_MethodInfos/* methods */
	, InternalEnumerator_1_t4743_PropertyInfos/* properties */
	, InternalEnumerator_1_t4743_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4743_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4743_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4743_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4743_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4743_1_0_0/* this_arg */
	, InternalEnumerator_1_t4743_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4743_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4743_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4743)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8626_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo ICollection_1_get_Count_m44774_MethodInfo;
static PropertyInfo ICollection_1_t8626____Count_PropertyInfo = 
{
	&ICollection_1_t8626_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44774_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44775_MethodInfo;
static PropertyInfo ICollection_1_t8626____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8626_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44775_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8626_PropertyInfos[] =
{
	&ICollection_1_t8626____Count_PropertyInfo,
	&ICollection_1_t8626____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44774_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44774_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44774_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44775_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44775_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44775_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
static ParameterInfo ICollection_1_t8626_ICollection_1_Add_m44776_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1784_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44776_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44776_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8626_ICollection_1_Add_m44776_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m44776_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44777_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44777_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44777_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
static ParameterInfo ICollection_1_t8626_ICollection_1_Contains_m44778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1784_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44778_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44778_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8626_ICollection_1_Contains_m44778_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44778_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttributeU5BU5D_t5027_0_0_0;
extern Il2CppType MonoDocumentationNoteAttributeU5BU5D_t5027_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8626_ICollection_1_CopyTo_m44779_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttributeU5BU5D_t5027_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44779_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44779_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8626_ICollection_1_CopyTo_m44779_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44779_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
static ParameterInfo ICollection_1_t8626_ICollection_1_Remove_m44780_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1784_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44780_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44780_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8626_ICollection_1_Remove_m44780_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44780_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8626_MethodInfos[] =
{
	&ICollection_1_get_Count_m44774_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44775_MethodInfo,
	&ICollection_1_Add_m44776_MethodInfo,
	&ICollection_1_Clear_m44777_MethodInfo,
	&ICollection_1_Contains_m44778_MethodInfo,
	&ICollection_1_CopyTo_m44779_MethodInfo,
	&ICollection_1_Remove_m44780_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8628_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8626_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8628_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8626_0_0_0;
extern Il2CppType ICollection_1_t8626_1_0_0;
struct ICollection_1_t8626;
extern Il2CppGenericClass ICollection_1_t8626_GenericClass;
TypeInfo ICollection_1_t8626_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8626_MethodInfos/* methods */
	, ICollection_1_t8626_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8626_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8626_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8626_0_0_0/* byval_arg */
	, &ICollection_1_t8626_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8626_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>
extern Il2CppType IEnumerator_1_t6692_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44781_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44781_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8628_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6692_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44781_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8628_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44781_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8628_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8628_0_0_0;
extern Il2CppType IEnumerable_1_t8628_1_0_0;
struct IEnumerable_1_t8628;
extern Il2CppGenericClass IEnumerable_1_t8628_GenericClass;
TypeInfo IEnumerable_1_t8628_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8628_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8628_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8628_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8628_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8628_0_0_0/* byval_arg */
	, &IEnumerable_1_t8628_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8628_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t8627_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo IList_1_get_Item_m44782_MethodInfo;
extern MethodInfo IList_1_set_Item_m44783_MethodInfo;
static PropertyInfo IList_1_t8627____Item_PropertyInfo = 
{
	&IList_1_t8627_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44782_MethodInfo/* get */
	, &IList_1_set_Item_m44783_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8627_PropertyInfos[] =
{
	&IList_1_t8627____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
static ParameterInfo IList_1_t8627_IList_1_IndexOf_m44784_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1784_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44784_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44784_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8627_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8627_IList_1_IndexOf_m44784_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44784_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
static ParameterInfo IList_1_t8627_IList_1_Insert_m44785_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1784_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44785_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44785_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8627_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8627_IList_1_Insert_m44785_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44785_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8627_IList_1_RemoveAt_m44786_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44786_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44786_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8627_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8627_IList_1_RemoveAt_m44786_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m44786_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8627_IList_1_get_Item_m44782_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44782_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44782_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8627_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t1784_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8627_IList_1_get_Item_m44782_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44782_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoDocumentationNoteAttribute_t1784_0_0_0;
static ParameterInfo IList_1_t8627_IList_1_set_Item_m44783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1784_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44783_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44783_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8627_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8627_IList_1_set_Item_m44783_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44783_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8627_MethodInfos[] =
{
	&IList_1_IndexOf_m44784_MethodInfo,
	&IList_1_Insert_m44785_MethodInfo,
	&IList_1_RemoveAt_m44786_MethodInfo,
	&IList_1_get_Item_m44782_MethodInfo,
	&IList_1_set_Item_m44783_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8627_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8626_il2cpp_TypeInfo,
	&IEnumerable_1_t8628_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8627_0_0_0;
extern Il2CppType IList_1_t8627_1_0_0;
struct IList_1_t8627;
extern Il2CppGenericClass IList_1_t8627_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8627_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8627_MethodInfos/* methods */
	, IList_1_t8627_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8627_il2cpp_TypeInfo/* element_class */
	, IList_1_t8627_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8627_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8627_0_0_0/* byval_arg */
	, &IList_1_t8627_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8627_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t6694_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo IEnumerator_1_get_Current_m44787_MethodInfo;
static PropertyInfo IEnumerator_1_t6694____Current_PropertyInfo = 
{
	&IEnumerator_1_t6694_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44787_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6694_PropertyInfos[] =
{
	&IEnumerator_1_t6694____Current_PropertyInfo,
	NULL
};
extern Il2CppType TableRange_t1788_0_0_0;
extern void* RuntimeInvoker_TableRange_t1788 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44787_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44787_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6694_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t1788_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t1788/* invoker_method */
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
	, &IEnumerator_1_get_Current_m44787_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6694_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44787_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6694_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6694_0_0_0;
extern Il2CppType IEnumerator_1_t6694_1_0_0;
struct IEnumerator_1_t6694;
extern Il2CppGenericClass IEnumerator_1_t6694_GenericClass;
TypeInfo IEnumerator_1_t6694_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6694_MethodInfos/* methods */
	, IEnumerator_1_t6694_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6694_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6694_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6694_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6694_0_0_0/* byval_arg */
	, &IEnumerator_1_t6694_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6694_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
