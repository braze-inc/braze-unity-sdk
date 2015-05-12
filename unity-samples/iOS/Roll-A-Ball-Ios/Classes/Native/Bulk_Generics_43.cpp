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
extern TypeInfo IList_1_t8516_il2cpp_TypeInfo;

// System.Int64
#include "mscorlib_System_Int64.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Int64>
extern MethodInfo IList_1_get_Item_m44254_MethodInfo;
extern MethodInfo IList_1_set_Item_m44255_MethodInfo;
static PropertyInfo IList_1_t8516____Item_PropertyInfo = 
{
	&IList_1_t8516_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44254_MethodInfo/* get */
	, &IList_1_set_Item_m44255_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8516_PropertyInfos[] =
{
	&IList_1_t8516____Item_PropertyInfo,
	NULL
};
extern Il2CppType Int64_t77_0_0_0;
extern Il2CppType Int64_t77_0_0_0;
static ParameterInfo IList_1_t8516_IList_1_IndexOf_m44256_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t77_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44256_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Int64>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44256_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8516_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int64_t77/* invoker_method */
	, IList_1_t8516_IList_1_IndexOf_m44256_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44256_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int64_t77_0_0_0;
static ParameterInfo IList_1_t8516_IList_1_Insert_m44257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Int64_t77_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44257_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int64>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44257_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8516_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int64_t77/* invoker_method */
	, IList_1_t8516_IList_1_Insert_m44257_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44257_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8516_IList_1_RemoveAt_m44258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44258_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int64>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44258_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8516_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8516_IList_1_RemoveAt_m44258_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44258_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8516_IList_1_get_Item_m44254_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Int64_t77_0_0_0;
extern void* RuntimeInvoker_Int64_t77_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44254_GenericMethod;
// T System.Collections.Generic.IList`1<System.Int64>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44254_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8516_il2cpp_TypeInfo/* declaring_type */
	, &Int64_t77_0_0_0/* return_type */
	, RuntimeInvoker_Int64_t77_Int32_t73/* invoker_method */
	, IList_1_t8516_IList_1_get_Item_m44254_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44254_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int64_t77_0_0_0;
static ParameterInfo IList_1_t8516_IList_1_set_Item_m44255_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Int64_t77_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44255_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int64>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44255_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8516_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int64_t77/* invoker_method */
	, IList_1_t8516_IList_1_set_Item_m44255_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44255_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8516_MethodInfos[] =
{
	&IList_1_IndexOf_m44256_MethodInfo,
	&IList_1_Insert_m44257_MethodInfo,
	&IList_1_RemoveAt_m44258_MethodInfo,
	&IList_1_get_Item_m44254_MethodInfo,
	&IList_1_set_Item_m44255_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t103_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t8515_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t8517_il2cpp_TypeInfo;
static TypeInfo* IList_1_t8516_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8515_il2cpp_TypeInfo,
	&IEnumerable_1_t8517_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8516_0_0_0;
extern Il2CppType IList_1_t8516_1_0_0;
struct IList_1_t8516;
extern Il2CppGenericClass IList_1_t8516_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8516_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8516_MethodInfos/* methods */
	, IList_1_t8516_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8516_il2cpp_TypeInfo/* element_class */
	, IList_1_t8516_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8516_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8516_0_0_0/* byval_arg */
	, &IList_1_t8516_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8516_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8518_il2cpp_TypeInfo;

// System.Boolean
#include "mscorlib_System_Boolean.h"
#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>
extern MethodInfo ICollection_1_get_Count_m44259_MethodInfo;
static PropertyInfo ICollection_1_t8518____Count_PropertyInfo = 
{
	&ICollection_1_t8518_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44259_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44260_MethodInfo;
static PropertyInfo ICollection_1_t8518____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8518_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44260_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8518_PropertyInfos[] =
{
	&ICollection_1_t8518____Count_PropertyInfo,
	&ICollection_1_t8518____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44259_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_Count()
MethodInfo ICollection_1_get_Count_m44259_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44259_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44260_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44260_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44260_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2346_0_0_0;
extern Il2CppType IComparable_1_t2346_0_0_0;
static ParameterInfo ICollection_1_t8518_ICollection_1_Add_m44261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2346_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44261_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Add(T)
MethodInfo ICollection_1_Add_m44261_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8518_ICollection_1_Add_m44261_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44261_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44262_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Clear()
MethodInfo ICollection_1_Clear_m44262_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44262_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2346_0_0_0;
static ParameterInfo ICollection_1_t8518_ICollection_1_Contains_m44263_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2346_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44263_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Contains(T)
MethodInfo ICollection_1_Contains_m44263_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8518_ICollection_1_Contains_m44263_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44263_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t4995_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t4995_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8518_ICollection_1_CopyTo_m44264_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t4995_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44264_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44264_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8518_ICollection_1_CopyTo_m44264_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44264_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2346_0_0_0;
static ParameterInfo ICollection_1_t8518_ICollection_1_Remove_m44265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2346_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44265_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int64>>::Remove(T)
MethodInfo ICollection_1_Remove_m44265_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8518_ICollection_1_Remove_m44265_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44265_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8518_MethodInfos[] =
{
	&ICollection_1_get_Count_m44259_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44260_MethodInfo,
	&ICollection_1_Add_m44261_MethodInfo,
	&ICollection_1_Clear_m44262_MethodInfo,
	&ICollection_1_Contains_m44263_MethodInfo,
	&ICollection_1_CopyTo_m44264_MethodInfo,
	&ICollection_1_Remove_m44265_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8520_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8518_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8520_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8518_0_0_0;
extern Il2CppType ICollection_1_t8518_1_0_0;
struct ICollection_1_t8518;
extern Il2CppGenericClass ICollection_1_t8518_GenericClass;
TypeInfo ICollection_1_t8518_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8518_MethodInfos/* methods */
	, ICollection_1_t8518_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8518_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8518_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8518_0_0_0/* byval_arg */
	, &ICollection_1_t8518_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8518_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int64>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int64>>
extern Il2CppType IEnumerator_1_t6623_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44266_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int64>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44266_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8520_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6623_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44266_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8520_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44266_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8520_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8520_0_0_0;
extern Il2CppType IEnumerable_1_t8520_1_0_0;
struct IEnumerable_1_t8520;
extern Il2CppGenericClass IEnumerable_1_t8520_GenericClass;
TypeInfo IEnumerable_1_t8520_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8520_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8520_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8520_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8520_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8520_0_0_0/* byval_arg */
	, &IEnumerable_1_t8520_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8520_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6623_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int64>>
extern MethodInfo IEnumerator_1_get_Current_m44267_MethodInfo;
static PropertyInfo IEnumerator_1_t6623____Current_PropertyInfo = 
{
	&IEnumerator_1_t6623_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44267_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6623_PropertyInfos[] =
{
	&IEnumerator_1_t6623____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2346_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44267_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44267_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6623_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2346_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44267_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6623_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44267_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t19_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t6623_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6623_0_0_0;
extern Il2CppType IEnumerator_1_t6623_1_0_0;
struct IEnumerator_1_t6623;
extern Il2CppGenericClass IEnumerator_1_t6623_GenericClass;
TypeInfo IEnumerator_1_t6623_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6623_MethodInfos/* methods */
	, IEnumerator_1_t6623_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6623_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6623_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6623_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6623_0_0_0/* byval_arg */
	, &IEnumerator_1_t6623_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6623_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IComparable_1_t2346_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Int64>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Int64>
extern Il2CppType Int64_t77_0_0_0;
static ParameterInfo IComparable_1_t2346_IComparable_1_CompareTo_m44268_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t77_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m44268_GenericMethod;
// System.Int32 System.IComparable`1<System.Int64>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m44268_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2346_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int64_t77/* invoker_method */
	, IComparable_1_t2346_IComparable_1_CompareTo_m44268_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m44268_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2346_MethodInfos[] =
{
	&IComparable_1_CompareTo_m44268_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2346_1_0_0;
struct IComparable_1_t2346;
extern Il2CppGenericClass IComparable_1_t2346_GenericClass;
TypeInfo IComparable_1_t2346_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2346_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2346_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2346_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2346_0_0_0/* byval_arg */
	, &IComparable_1_t2346_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2346_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_545.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4704_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_545MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo InvalidOperationException_t1545_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m25753_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m6656_MethodInfo;
extern MethodInfo Array_get_Length_m1925_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2346_m34050_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m26983_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m26983(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2346_m34050(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4704____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4704, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4704____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4704, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4704_FieldInfos[] =
{
	&InternalEnumerator_1_t4704____array_0_FieldInfo,
	&InternalEnumerator_1_t4704____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25750_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4704____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4704_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4704____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4704_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25753_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4704_PropertyInfos[] =
{
	&InternalEnumerator_1_t4704____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4704____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4704_InternalEnumerator_1__ctor_m25749_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25749_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25749_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4704_InternalEnumerator_1__ctor_m25749_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25749_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25750_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25750_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25750_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25751_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25751_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25751_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25752_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25752_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25752_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2346_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25753_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int64>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25753_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2346_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25753_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4704_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25749_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25750_MethodInfo,
	&InternalEnumerator_1_Dispose_m25751_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25752_MethodInfo,
	&InternalEnumerator_1_get_Current_m25753_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m25752_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25751_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4704_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25750_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25752_MethodInfo,
	&InternalEnumerator_1_Dispose_m25751_MethodInfo,
	&InternalEnumerator_1_get_Current_m25753_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4704_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6623_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4704_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6623_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2346_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4704_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25753_MethodInfo/* Method Usage */,
	&IComparable_1_t2346_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2346_m34050_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4704_0_0_0;
extern Il2CppType InternalEnumerator_1_t4704_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t4704_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t4704_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4704_MethodInfos/* methods */
	, InternalEnumerator_1_t4704_PropertyInfos/* properties */
	, InternalEnumerator_1_t4704_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4704_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4704_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4704_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4704_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4704_1_0_0/* this_arg */
	, InternalEnumerator_1_t4704_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4704_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4704_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4704)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8519_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>
extern MethodInfo IList_1_get_Item_m44269_MethodInfo;
extern MethodInfo IList_1_set_Item_m44270_MethodInfo;
static PropertyInfo IList_1_t8519____Item_PropertyInfo = 
{
	&IList_1_t8519_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44269_MethodInfo/* get */
	, &IList_1_set_Item_m44270_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8519_PropertyInfos[] =
{
	&IList_1_t8519____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2346_0_0_0;
static ParameterInfo IList_1_t8519_IList_1_IndexOf_m44271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2346_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44271_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44271_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8519_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8519_IList_1_IndexOf_m44271_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44271_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IComparable_1_t2346_0_0_0;
static ParameterInfo IList_1_t8519_IList_1_Insert_m44272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2346_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44272_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44272_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8519_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8519_IList_1_Insert_m44272_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44272_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8519_IList_1_RemoveAt_m44273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44273_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44273_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8519_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8519_IList_1_RemoveAt_m44273_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44273_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8519_IList_1_get_Item_m44269_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IComparable_1_t2346_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44269_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44269_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8519_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2346_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8519_IList_1_get_Item_m44269_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44269_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IComparable_1_t2346_0_0_0;
static ParameterInfo IList_1_t8519_IList_1_set_Item_m44270_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2346_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44270_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int64>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44270_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8519_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8519_IList_1_set_Item_m44270_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44270_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8519_MethodInfos[] =
{
	&IList_1_IndexOf_m44271_MethodInfo,
	&IList_1_Insert_m44272_MethodInfo,
	&IList_1_RemoveAt_m44273_MethodInfo,
	&IList_1_get_Item_m44269_MethodInfo,
	&IList_1_set_Item_m44270_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8519_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8518_il2cpp_TypeInfo,
	&IEnumerable_1_t8520_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8519_0_0_0;
extern Il2CppType IList_1_t8519_1_0_0;
struct IList_1_t8519;
extern Il2CppGenericClass IList_1_t8519_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8519_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8519_MethodInfos/* methods */
	, IList_1_t8519_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8519_il2cpp_TypeInfo/* element_class */
	, IList_1_t8519_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8519_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8519_0_0_0/* byval_arg */
	, &IList_1_t8519_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8519_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8521_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>
extern MethodInfo ICollection_1_get_Count_m44274_MethodInfo;
static PropertyInfo ICollection_1_t8521____Count_PropertyInfo = 
{
	&ICollection_1_t8521_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44274_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44275_MethodInfo;
static PropertyInfo ICollection_1_t8521____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8521_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44275_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8521_PropertyInfos[] =
{
	&ICollection_1_t8521____Count_PropertyInfo,
	&ICollection_1_t8521____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44274_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_Count()
MethodInfo ICollection_1_get_Count_m44274_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44274_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44275_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44275_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44275_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2347_0_0_0;
extern Il2CppType IEquatable_1_t2347_0_0_0;
static ParameterInfo ICollection_1_t8521_ICollection_1_Add_m44276_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2347_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44276_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Add(T)
MethodInfo ICollection_1_Add_m44276_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8521_ICollection_1_Add_m44276_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44276_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44277_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Clear()
MethodInfo ICollection_1_Clear_m44277_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44277_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2347_0_0_0;
static ParameterInfo ICollection_1_t8521_ICollection_1_Contains_m44278_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2347_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44278_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Contains(T)
MethodInfo ICollection_1_Contains_m44278_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8521_ICollection_1_Contains_m44278_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44278_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t4996_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t4996_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8521_ICollection_1_CopyTo_m44279_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t4996_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44279_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44279_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8521_ICollection_1_CopyTo_m44279_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44279_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2347_0_0_0;
static ParameterInfo ICollection_1_t8521_ICollection_1_Remove_m44280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2347_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44280_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int64>>::Remove(T)
MethodInfo ICollection_1_Remove_m44280_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8521_ICollection_1_Remove_m44280_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44280_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8521_MethodInfos[] =
{
	&ICollection_1_get_Count_m44274_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44275_MethodInfo,
	&ICollection_1_Add_m44276_MethodInfo,
	&ICollection_1_Clear_m44277_MethodInfo,
	&ICollection_1_Contains_m44278_MethodInfo,
	&ICollection_1_CopyTo_m44279_MethodInfo,
	&ICollection_1_Remove_m44280_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8523_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8521_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8523_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8521_0_0_0;
extern Il2CppType ICollection_1_t8521_1_0_0;
struct ICollection_1_t8521;
extern Il2CppGenericClass ICollection_1_t8521_GenericClass;
TypeInfo ICollection_1_t8521_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8521_MethodInfos/* methods */
	, ICollection_1_t8521_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8521_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8521_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8521_0_0_0/* byval_arg */
	, &ICollection_1_t8521_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8521_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int64>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int64>>
extern Il2CppType IEnumerator_1_t6625_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44281_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int64>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44281_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8523_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6625_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44281_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8523_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44281_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8523_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8523_0_0_0;
extern Il2CppType IEnumerable_1_t8523_1_0_0;
struct IEnumerable_1_t8523;
extern Il2CppGenericClass IEnumerable_1_t8523_GenericClass;
TypeInfo IEnumerable_1_t8523_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8523_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8523_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8523_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8523_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8523_0_0_0/* byval_arg */
	, &IEnumerable_1_t8523_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8523_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6625_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int64>>
extern MethodInfo IEnumerator_1_get_Current_m44282_MethodInfo;
static PropertyInfo IEnumerator_1_t6625____Current_PropertyInfo = 
{
	&IEnumerator_1_t6625_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6625_PropertyInfos[] =
{
	&IEnumerator_1_t6625____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2347_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44282_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44282_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6625_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2347_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44282_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6625_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44282_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6625_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6625_0_0_0;
extern Il2CppType IEnumerator_1_t6625_1_0_0;
struct IEnumerator_1_t6625;
extern Il2CppGenericClass IEnumerator_1_t6625_GenericClass;
TypeInfo IEnumerator_1_t6625_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6625_MethodInfos/* methods */
	, IEnumerator_1_t6625_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6625_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6625_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6625_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6625_0_0_0/* byval_arg */
	, &IEnumerator_1_t6625_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6625_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEquatable_1_t2347_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Int64>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Int64>
extern Il2CppType Int64_t77_0_0_0;
static ParameterInfo IEquatable_1_t2347_IEquatable_1_Equals_m44283_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t77_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m44283_GenericMethod;
// System.Boolean System.IEquatable`1<System.Int64>::Equals(T)
MethodInfo IEquatable_1_Equals_m44283_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2347_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int64_t77/* invoker_method */
	, IEquatable_1_t2347_IEquatable_1_Equals_m44283_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m44283_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2347_MethodInfos[] =
{
	&IEquatable_1_Equals_m44283_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2347_1_0_0;
struct IEquatable_1_t2347;
extern Il2CppGenericClass IEquatable_1_t2347_GenericClass;
TypeInfo IEquatable_1_t2347_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2347_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2347_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2347_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2347_0_0_0/* byval_arg */
	, &IEquatable_1_t2347_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2347_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_546.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4705_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_546MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m25758_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2347_m34061_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2347_m34061(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4705____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4705, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4705____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4705, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4705_FieldInfos[] =
{
	&InternalEnumerator_1_t4705____array_0_FieldInfo,
	&InternalEnumerator_1_t4705____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25755_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4705____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4705_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25755_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4705____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4705_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25758_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4705_PropertyInfos[] =
{
	&InternalEnumerator_1_t4705____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4705____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4705_InternalEnumerator_1__ctor_m25754_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25754_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25754_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4705_InternalEnumerator_1__ctor_m25754_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25754_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25755_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25755_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25755_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25756_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25756_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25756_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25757_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25757_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25757_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2347_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25758_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int64>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25758_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2347_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25758_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4705_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25754_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25755_MethodInfo,
	&InternalEnumerator_1_Dispose_m25756_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25757_MethodInfo,
	&InternalEnumerator_1_get_Current_m25758_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25757_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25756_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4705_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25755_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25757_MethodInfo,
	&InternalEnumerator_1_Dispose_m25756_MethodInfo,
	&InternalEnumerator_1_get_Current_m25758_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4705_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6625_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4705_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6625_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2347_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4705_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25758_MethodInfo/* Method Usage */,
	&IEquatable_1_t2347_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2347_m34061_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4705_0_0_0;
extern Il2CppType InternalEnumerator_1_t4705_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4705_GenericClass;
TypeInfo InternalEnumerator_1_t4705_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4705_MethodInfos/* methods */
	, InternalEnumerator_1_t4705_PropertyInfos/* properties */
	, InternalEnumerator_1_t4705_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4705_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4705_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4705_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4705_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4705_1_0_0/* this_arg */
	, InternalEnumerator_1_t4705_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4705_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4705_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4705)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8522_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>
extern MethodInfo IList_1_get_Item_m44284_MethodInfo;
extern MethodInfo IList_1_set_Item_m44285_MethodInfo;
static PropertyInfo IList_1_t8522____Item_PropertyInfo = 
{
	&IList_1_t8522_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44284_MethodInfo/* get */
	, &IList_1_set_Item_m44285_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8522_PropertyInfos[] =
{
	&IList_1_t8522____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2347_0_0_0;
static ParameterInfo IList_1_t8522_IList_1_IndexOf_m44286_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2347_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44286_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44286_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8522_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8522_IList_1_IndexOf_m44286_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44286_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IEquatable_1_t2347_0_0_0;
static ParameterInfo IList_1_t8522_IList_1_Insert_m44287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2347_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44287_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44287_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8522_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8522_IList_1_Insert_m44287_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44287_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8522_IList_1_RemoveAt_m44288_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44288_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44288_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8522_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8522_IList_1_RemoveAt_m44288_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44288_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8522_IList_1_get_Item_m44284_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IEquatable_1_t2347_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44284_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44284_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8522_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2347_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8522_IList_1_get_Item_m44284_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44284_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IEquatable_1_t2347_0_0_0;
static ParameterInfo IList_1_t8522_IList_1_set_Item_m44285_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2347_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44285_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int64>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44285_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8522_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8522_IList_1_set_Item_m44285_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44285_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8522_MethodInfos[] =
{
	&IList_1_IndexOf_m44286_MethodInfo,
	&IList_1_Insert_m44287_MethodInfo,
	&IList_1_RemoveAt_m44288_MethodInfo,
	&IList_1_get_Item_m44284_MethodInfo,
	&IList_1_set_Item_m44285_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8522_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8521_il2cpp_TypeInfo,
	&IEnumerable_1_t8523_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8522_0_0_0;
extern Il2CppType IList_1_t8522_1_0_0;
struct IList_1_t8522;
extern Il2CppGenericClass IList_1_t8522_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8522_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8522_MethodInfos/* methods */
	, IList_1_t8522_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8522_il2cpp_TypeInfo/* element_class */
	, IList_1_t8522_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8522_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8522_0_0_0/* byval_arg */
	, &IList_1_t8522_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8522_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6627_il2cpp_TypeInfo;

// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.CLSCompliantAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.CLSCompliantAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44289_MethodInfo;
static PropertyInfo IEnumerator_1_t6627____Current_PropertyInfo = 
{
	&IEnumerator_1_t6627_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44289_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6627_PropertyInfos[] =
{
	&IEnumerator_1_t6627____Current_PropertyInfo,
	NULL
};
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44289_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.CLSCompliantAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44289_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6627_il2cpp_TypeInfo/* declaring_type */
	, &CLSCompliantAttribute_t1368_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44289_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6627_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44289_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6627_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6627_0_0_0;
extern Il2CppType IEnumerator_1_t6627_1_0_0;
struct IEnumerator_1_t6627;
extern Il2CppGenericClass IEnumerator_1_t6627_GenericClass;
TypeInfo IEnumerator_1_t6627_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6627_MethodInfos/* methods */
	, IEnumerator_1_t6627_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6627_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6627_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6627_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6627_0_0_0/* byval_arg */
	, &IEnumerator_1_t6627_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6627_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_547.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4706_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_547MethodDeclarations.h"

extern TypeInfo CLSCompliantAttribute_t1368_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25763_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCLSCompliantAttribute_t1368_m34072_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.CLSCompliantAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.CLSCompliantAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisCLSCompliantAttribute_t1368_m34072(__this, p0, method) (CLSCompliantAttribute_t1368 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4706____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4706, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4706____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4706, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4706_FieldInfos[] =
{
	&InternalEnumerator_1_t4706____array_0_FieldInfo,
	&InternalEnumerator_1_t4706____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25760_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4706____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4706_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25760_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4706____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4706_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25763_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4706_PropertyInfos[] =
{
	&InternalEnumerator_1_t4706____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4706____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4706_InternalEnumerator_1__ctor_m25759_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25759_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25759_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4706_InternalEnumerator_1__ctor_m25759_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25759_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25760_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25760_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25760_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25761_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25761_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25761_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25762_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25762_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25762_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25763_GenericMethod;
// T System.Array/InternalEnumerator`1<System.CLSCompliantAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25763_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* declaring_type */
	, &CLSCompliantAttribute_t1368_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25763_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4706_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25759_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25760_MethodInfo,
	&InternalEnumerator_1_Dispose_m25761_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25762_MethodInfo,
	&InternalEnumerator_1_get_Current_m25763_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25762_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25761_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4706_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25760_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25762_MethodInfo,
	&InternalEnumerator_1_Dispose_m25761_MethodInfo,
	&InternalEnumerator_1_get_Current_m25763_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4706_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6627_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4706_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6627_il2cpp_TypeInfo, 7},
};
extern TypeInfo CLSCompliantAttribute_t1368_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4706_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25763_MethodInfo/* Method Usage */,
	&CLSCompliantAttribute_t1368_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCLSCompliantAttribute_t1368_m34072_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4706_0_0_0;
extern Il2CppType InternalEnumerator_1_t4706_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4706_GenericClass;
TypeInfo InternalEnumerator_1_t4706_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4706_MethodInfos/* methods */
	, InternalEnumerator_1_t4706_PropertyInfos/* properties */
	, InternalEnumerator_1_t4706_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4706_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4706_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4706_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4706_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4706_1_0_0/* this_arg */
	, InternalEnumerator_1_t4706_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4706_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4706_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4706)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8524_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>
extern MethodInfo ICollection_1_get_Count_m44290_MethodInfo;
static PropertyInfo ICollection_1_t8524____Count_PropertyInfo = 
{
	&ICollection_1_t8524_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44290_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44291_MethodInfo;
static PropertyInfo ICollection_1_t8524____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8524_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8524_PropertyInfos[] =
{
	&ICollection_1_t8524____Count_PropertyInfo,
	&ICollection_1_t8524____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44290_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44290_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44290_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44291_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44291_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44291_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
static ParameterInfo ICollection_1_t8524_ICollection_1_Add_m44292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t1368_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44292_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44292_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8524_ICollection_1_Add_m44292_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44292_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44293_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44293_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44293_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
static ParameterInfo ICollection_1_t8524_ICollection_1_Contains_m44294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t1368_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44294_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44294_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8524_ICollection_1_Contains_m44294_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44294_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttributeU5BU5D_t4997_0_0_0;
extern Il2CppType CLSCompliantAttributeU5BU5D_t4997_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8524_ICollection_1_CopyTo_m44295_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttributeU5BU5D_t4997_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44295_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44295_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8524_ICollection_1_CopyTo_m44295_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44295_GenericMethod/* genericMethod */

};
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
static ParameterInfo ICollection_1_t8524_ICollection_1_Remove_m44296_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t1368_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44296_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.CLSCompliantAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44296_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8524_ICollection_1_Remove_m44296_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44296_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8524_MethodInfos[] =
{
	&ICollection_1_get_Count_m44290_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44291_MethodInfo,
	&ICollection_1_Add_m44292_MethodInfo,
	&ICollection_1_Clear_m44293_MethodInfo,
	&ICollection_1_Contains_m44294_MethodInfo,
	&ICollection_1_CopyTo_m44295_MethodInfo,
	&ICollection_1_Remove_m44296_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8526_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8524_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8526_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8524_0_0_0;
extern Il2CppType ICollection_1_t8524_1_0_0;
struct ICollection_1_t8524;
extern Il2CppGenericClass ICollection_1_t8524_GenericClass;
TypeInfo ICollection_1_t8524_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8524_MethodInfos/* methods */
	, ICollection_1_t8524_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8524_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8524_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8524_0_0_0/* byval_arg */
	, &ICollection_1_t8524_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8524_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.CLSCompliantAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.CLSCompliantAttribute>
extern Il2CppType IEnumerator_1_t6627_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44297_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.CLSCompliantAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44297_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8526_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6627_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44297_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8526_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44297_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8526_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8526_0_0_0;
extern Il2CppType IEnumerable_1_t8526_1_0_0;
struct IEnumerable_1_t8526;
extern Il2CppGenericClass IEnumerable_1_t8526_GenericClass;
TypeInfo IEnumerable_1_t8526_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8526_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8526_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8526_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8526_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8526_0_0_0/* byval_arg */
	, &IEnumerable_1_t8526_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8526_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8525_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.CLSCompliantAttribute>
extern MethodInfo IList_1_get_Item_m44298_MethodInfo;
extern MethodInfo IList_1_set_Item_m44299_MethodInfo;
static PropertyInfo IList_1_t8525____Item_PropertyInfo = 
{
	&IList_1_t8525_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44298_MethodInfo/* get */
	, &IList_1_set_Item_m44299_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8525_PropertyInfos[] =
{
	&IList_1_t8525____Item_PropertyInfo,
	NULL
};
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
static ParameterInfo IList_1_t8525_IList_1_IndexOf_m44300_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t1368_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44300_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44300_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8525_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8525_IList_1_IndexOf_m44300_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44300_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
static ParameterInfo IList_1_t8525_IList_1_Insert_m44301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t1368_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44301_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44301_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8525_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8525_IList_1_Insert_m44301_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44301_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8525_IList_1_RemoveAt_m44302_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44302_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44302_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8525_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8525_IList_1_RemoveAt_m44302_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44302_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8525_IList_1_get_Item_m44298_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44298_GenericMethod;
// T System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44298_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8525_il2cpp_TypeInfo/* declaring_type */
	, &CLSCompliantAttribute_t1368_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8525_IList_1_get_Item_m44298_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44298_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType CLSCompliantAttribute_t1368_0_0_0;
static ParameterInfo IList_1_t8525_IList_1_set_Item_m44299_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CLSCompliantAttribute_t1368_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44299_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.CLSCompliantAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44299_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8525_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8525_IList_1_set_Item_m44299_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44299_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8525_MethodInfos[] =
{
	&IList_1_IndexOf_m44300_MethodInfo,
	&IList_1_Insert_m44301_MethodInfo,
	&IList_1_RemoveAt_m44302_MethodInfo,
	&IList_1_get_Item_m44298_MethodInfo,
	&IList_1_set_Item_m44299_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8525_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8524_il2cpp_TypeInfo,
	&IEnumerable_1_t8526_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8525_0_0_0;
extern Il2CppType IList_1_t8525_1_0_0;
struct IList_1_t8525;
extern Il2CppGenericClass IList_1_t8525_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8525_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8525_MethodInfos/* methods */
	, IList_1_t8525_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8525_il2cpp_TypeInfo/* element_class */
	, IList_1_t8525_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8525_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8525_0_0_0/* byval_arg */
	, &IList_1_t8525_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8525_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6628_il2cpp_TypeInfo;

// System.UInt64
#include "mscorlib_System_UInt64.h"


// T System.Collections.Generic.IEnumerator`1<System.UInt64>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UInt64>
extern MethodInfo IEnumerator_1_get_Current_m44303_MethodInfo;
static PropertyInfo IEnumerator_1_t6628____Current_PropertyInfo = 
{
	&IEnumerator_1_t6628_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44303_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6628_PropertyInfos[] =
{
	&IEnumerator_1_t6628____Current_PropertyInfo,
	NULL
};
extern Il2CppType UInt64_t1068_0_0_0;
extern void* RuntimeInvoker_UInt64_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44303_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UInt64>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44303_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6628_il2cpp_TypeInfo/* declaring_type */
	, &UInt64_t1068_0_0_0/* return_type */
	, RuntimeInvoker_UInt64_t1068/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m44303_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6628_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44303_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6628_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6628_0_0_0;
extern Il2CppType IEnumerator_1_t6628_1_0_0;
struct IEnumerator_1_t6628;
extern Il2CppGenericClass IEnumerator_1_t6628_GenericClass;
TypeInfo IEnumerator_1_t6628_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6628_MethodInfos/* methods */
	, IEnumerator_1_t6628_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6628_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6628_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6628_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6628_0_0_0/* byval_arg */
	, &IEnumerator_1_t6628_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6628_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_548.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4707_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UInt64>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_548MethodDeclarations.h"

extern TypeInfo UInt64_t1068_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25768_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUInt64_t1068_m34083_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
 uint64_t Array_InternalArray__get_Item_TisUInt64_t1068_m34083 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25764_MethodInfo;
 void InternalEnumerator_1__ctor_m25764 (InternalEnumerator_1_t4707 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765 (InternalEnumerator_1_t4707 * __this, MethodInfo* method){
	{
		uint64_t L_0 = InternalEnumerator_1_get_Current_m25768(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25768_MethodInfo);
		uint64_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UInt64_t1068_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25766_MethodInfo;
 void InternalEnumerator_1_Dispose_m25766 (InternalEnumerator_1_t4707 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25767_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25767 (InternalEnumerator_1_t4707 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
 uint64_t InternalEnumerator_1_get_Current_m25768 (InternalEnumerator_1_t4707 * __this, MethodInfo* method){
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
		uint64_t L_8 = Array_InternalArray__get_Item_TisUInt64_t1068_m34083(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUInt64_t1068_m34083_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UInt64>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4707____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4707, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4707____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4707, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4707_FieldInfos[] =
{
	&InternalEnumerator_1_t4707____array_0_FieldInfo,
	&InternalEnumerator_1_t4707____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4707____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4707_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4707____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4707_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25768_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4707_PropertyInfos[] =
{
	&InternalEnumerator_1_t4707____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4707____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4707_InternalEnumerator_1__ctor_m25764_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25764_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25764_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25764/* method */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4707_InternalEnumerator_1__ctor_m25764_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25764_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UInt64>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765/* method */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25766_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UInt64>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25766_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25766/* method */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25766_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25767_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UInt64>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25767_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25767/* method */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25767_GenericMethod/* genericMethod */

};
extern Il2CppType UInt64_t1068_0_0_0;
extern void* RuntimeInvoker_UInt64_t1068 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25768_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UInt64>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25768_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25768/* method */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* declaring_type */
	, &UInt64_t1068_0_0_0/* return_type */
	, RuntimeInvoker_UInt64_t1068/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25768_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4707_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25764_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765_MethodInfo,
	&InternalEnumerator_1_Dispose_m25766_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25767_MethodInfo,
	&InternalEnumerator_1_get_Current_m25768_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4707_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25765_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25767_MethodInfo,
	&InternalEnumerator_1_Dispose_m25766_MethodInfo,
	&InternalEnumerator_1_get_Current_m25768_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4707_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6628_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4707_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6628_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4707_0_0_0;
extern Il2CppType InternalEnumerator_1_t4707_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4707_GenericClass;
TypeInfo InternalEnumerator_1_t4707_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4707_MethodInfos/* methods */
	, InternalEnumerator_1_t4707_PropertyInfos/* properties */
	, InternalEnumerator_1_t4707_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4707_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4707_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4707_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4707_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4707_1_0_0/* this_arg */
	, InternalEnumerator_1_t4707_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4707_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4707)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8527_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UInt64>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UInt64>
extern MethodInfo ICollection_1_get_Count_m44304_MethodInfo;
static PropertyInfo ICollection_1_t8527____Count_PropertyInfo = 
{
	&ICollection_1_t8527_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44304_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44305_MethodInfo;
static PropertyInfo ICollection_1_t8527____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8527_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44305_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8527_PropertyInfos[] =
{
	&ICollection_1_t8527____Count_PropertyInfo,
	&ICollection_1_t8527____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44304_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UInt64>::get_Count()
MethodInfo ICollection_1_get_Count_m44304_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44304_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44305_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44305_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44305_GenericMethod/* genericMethod */

};
extern Il2CppType UInt64_t1068_0_0_0;
extern Il2CppType UInt64_t1068_0_0_0;
static ParameterInfo ICollection_1_t8527_ICollection_1_Add_m44306_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UInt64_t1068_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44306_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Add(T)
MethodInfo ICollection_1_Add_m44306_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int64_t77/* invoker_method */
	, ICollection_1_t8527_ICollection_1_Add_m44306_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44306_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44307_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::Clear()
MethodInfo ICollection_1_Clear_m44307_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44307_GenericMethod/* genericMethod */

};
extern Il2CppType UInt64_t1068_0_0_0;
static ParameterInfo ICollection_1_t8527_ICollection_1_Contains_m44308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UInt64_t1068_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44308_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Contains(T)
MethodInfo ICollection_1_Contains_m44308_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int64_t77/* invoker_method */
	, ICollection_1_t8527_ICollection_1_Contains_m44308_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44308_GenericMethod/* genericMethod */

};
extern Il2CppType UInt64U5BU5D_t2175_0_0_0;
extern Il2CppType UInt64U5BU5D_t2175_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8527_ICollection_1_CopyTo_m44309_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UInt64U5BU5D_t2175_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44309_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UInt64>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44309_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8527_ICollection_1_CopyTo_m44309_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44309_GenericMethod/* genericMethod */

};
extern Il2CppType UInt64_t1068_0_0_0;
static ParameterInfo ICollection_1_t8527_ICollection_1_Remove_m44310_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UInt64_t1068_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44310_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UInt64>::Remove(T)
MethodInfo ICollection_1_Remove_m44310_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int64_t77/* invoker_method */
	, ICollection_1_t8527_ICollection_1_Remove_m44310_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44310_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8527_MethodInfos[] =
{
	&ICollection_1_get_Count_m44304_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44305_MethodInfo,
	&ICollection_1_Add_m44306_MethodInfo,
	&ICollection_1_Clear_m44307_MethodInfo,
	&ICollection_1_Contains_m44308_MethodInfo,
	&ICollection_1_CopyTo_m44309_MethodInfo,
	&ICollection_1_Remove_m44310_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8529_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8527_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8529_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8527_0_0_0;
extern Il2CppType ICollection_1_t8527_1_0_0;
struct ICollection_1_t8527;
extern Il2CppGenericClass ICollection_1_t8527_GenericClass;
TypeInfo ICollection_1_t8527_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8527_MethodInfos/* methods */
	, ICollection_1_t8527_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8527_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8527_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8527_0_0_0/* byval_arg */
	, &ICollection_1_t8527_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8527_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt64>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UInt64>
extern Il2CppType IEnumerator_1_t6628_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44311_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UInt64>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44311_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8529_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6628_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44311_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8529_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44311_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8529_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8529_0_0_0;
extern Il2CppType IEnumerable_1_t8529_1_0_0;
struct IEnumerable_1_t8529;
extern Il2CppGenericClass IEnumerable_1_t8529_GenericClass;
TypeInfo IEnumerable_1_t8529_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8529_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8529_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8529_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8529_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8529_0_0_0/* byval_arg */
	, &IEnumerable_1_t8529_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8529_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8528_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UInt64>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UInt64>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UInt64>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UInt64>
extern MethodInfo IList_1_get_Item_m44312_MethodInfo;
extern MethodInfo IList_1_set_Item_m44313_MethodInfo;
static PropertyInfo IList_1_t8528____Item_PropertyInfo = 
{
	&IList_1_t8528_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44312_MethodInfo/* get */
	, &IList_1_set_Item_m44313_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8528_PropertyInfos[] =
{
	&IList_1_t8528____Item_PropertyInfo,
	NULL
};
extern Il2CppType UInt64_t1068_0_0_0;
static ParameterInfo IList_1_t8528_IList_1_IndexOf_m44314_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UInt64_t1068_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44314_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UInt64>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44314_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8528_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int64_t77/* invoker_method */
	, IList_1_t8528_IList_1_IndexOf_m44314_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44314_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType UInt64_t1068_0_0_0;
static ParameterInfo IList_1_t8528_IList_1_Insert_m44315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UInt64_t1068_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44315_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UInt64>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44315_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8528_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int64_t77/* invoker_method */
	, IList_1_t8528_IList_1_Insert_m44315_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44315_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8528_IList_1_RemoveAt_m44316_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44316_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UInt64>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44316_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8528_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8528_IList_1_RemoveAt_m44316_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44316_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8528_IList_1_get_Item_m44312_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType UInt64_t1068_0_0_0;
extern void* RuntimeInvoker_UInt64_t1068_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44312_GenericMethod;
// T System.Collections.Generic.IList`1<System.UInt64>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44312_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8528_il2cpp_TypeInfo/* declaring_type */
	, &UInt64_t1068_0_0_0/* return_type */
	, RuntimeInvoker_UInt64_t1068_Int32_t73/* invoker_method */
	, IList_1_t8528_IList_1_get_Item_m44312_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44312_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType UInt64_t1068_0_0_0;
static ParameterInfo IList_1_t8528_IList_1_set_Item_m44313_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UInt64_t1068_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44313_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UInt64>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44313_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8528_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int64_t77/* invoker_method */
	, IList_1_t8528_IList_1_set_Item_m44313_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44313_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8528_MethodInfos[] =
{
	&IList_1_IndexOf_m44314_MethodInfo,
	&IList_1_Insert_m44315_MethodInfo,
	&IList_1_RemoveAt_m44316_MethodInfo,
	&IList_1_get_Item_m44312_MethodInfo,
	&IList_1_set_Item_m44313_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8528_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8527_il2cpp_TypeInfo,
	&IEnumerable_1_t8529_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8528_0_0_0;
extern Il2CppType IList_1_t8528_1_0_0;
struct IList_1_t8528;
extern Il2CppGenericClass IList_1_t8528_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8528_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8528_MethodInfos/* methods */
	, IList_1_t8528_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8528_il2cpp_TypeInfo/* element_class */
	, IList_1_t8528_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8528_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8528_0_0_0/* byval_arg */
	, &IList_1_t8528_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8528_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8530_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>
extern MethodInfo ICollection_1_get_Count_m44317_MethodInfo;
static PropertyInfo ICollection_1_t8530____Count_PropertyInfo = 
{
	&ICollection_1_t8530_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44317_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44318_MethodInfo;
static PropertyInfo ICollection_1_t8530____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8530_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44318_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8530_PropertyInfos[] =
{
	&ICollection_1_t8530____Count_PropertyInfo,
	&ICollection_1_t8530____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44317_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::get_Count()
MethodInfo ICollection_1_get_Count_m44317_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44317_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44318_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44318_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44318_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2352_0_0_0;
extern Il2CppType IComparable_1_t2352_0_0_0;
static ParameterInfo ICollection_1_t8530_ICollection_1_Add_m44319_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2352_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44319_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Add(T)
MethodInfo ICollection_1_Add_m44319_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8530_ICollection_1_Add_m44319_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44319_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44320_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Clear()
MethodInfo ICollection_1_Clear_m44320_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44320_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2352_0_0_0;
static ParameterInfo ICollection_1_t8530_ICollection_1_Contains_m44321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2352_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44321_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Contains(T)
MethodInfo ICollection_1_Contains_m44321_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8530_ICollection_1_Contains_m44321_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44321_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t4998_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t4998_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8530_ICollection_1_CopyTo_m44322_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t4998_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44322_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44322_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8530_ICollection_1_CopyTo_m44322_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44322_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2352_0_0_0;
static ParameterInfo ICollection_1_t8530_ICollection_1_Remove_m44323_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2352_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44323_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.UInt64>>::Remove(T)
MethodInfo ICollection_1_Remove_m44323_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8530_ICollection_1_Remove_m44323_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44323_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8530_MethodInfos[] =
{
	&ICollection_1_get_Count_m44317_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44318_MethodInfo,
	&ICollection_1_Add_m44319_MethodInfo,
	&ICollection_1_Clear_m44320_MethodInfo,
	&ICollection_1_Contains_m44321_MethodInfo,
	&ICollection_1_CopyTo_m44322_MethodInfo,
	&ICollection_1_Remove_m44323_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8532_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8530_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8532_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8530_0_0_0;
extern Il2CppType ICollection_1_t8530_1_0_0;
struct ICollection_1_t8530;
extern Il2CppGenericClass ICollection_1_t8530_GenericClass;
TypeInfo ICollection_1_t8530_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8530_MethodInfos/* methods */
	, ICollection_1_t8530_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8530_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8530_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8530_0_0_0/* byval_arg */
	, &ICollection_1_t8530_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8530_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt64>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt64>>
extern Il2CppType IEnumerator_1_t6630_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44324_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.UInt64>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44324_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8532_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6630_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44324_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8532_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44324_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8532_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8532_0_0_0;
extern Il2CppType IEnumerable_1_t8532_1_0_0;
struct IEnumerable_1_t8532;
extern Il2CppGenericClass IEnumerable_1_t8532_GenericClass;
TypeInfo IEnumerable_1_t8532_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8532_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8532_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8532_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8532_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8532_0_0_0/* byval_arg */
	, &IEnumerable_1_t8532_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8532_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6630_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt64>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt64>>
extern MethodInfo IEnumerator_1_get_Current_m44325_MethodInfo;
static PropertyInfo IEnumerator_1_t6630____Current_PropertyInfo = 
{
	&IEnumerator_1_t6630_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44325_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6630_PropertyInfos[] =
{
	&IEnumerator_1_t6630____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2352_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44325_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.UInt64>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44325_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6630_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2352_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44325_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6630_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44325_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6630_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6630_0_0_0;
extern Il2CppType IEnumerator_1_t6630_1_0_0;
struct IEnumerator_1_t6630;
extern Il2CppGenericClass IEnumerator_1_t6630_GenericClass;
TypeInfo IEnumerator_1_t6630_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6630_MethodInfos/* methods */
	, IEnumerator_1_t6630_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6630_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6630_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6630_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6630_0_0_0/* byval_arg */
	, &IEnumerator_1_t6630_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6630_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IComparable_1_t2352_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.UInt64>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.UInt64>
extern Il2CppType UInt64_t1068_0_0_0;
static ParameterInfo IComparable_1_t2352_IComparable_1_CompareTo_m44326_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &UInt64_t1068_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m44326_GenericMethod;
// System.Int32 System.IComparable`1<System.UInt64>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m44326_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2352_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int64_t77/* invoker_method */
	, IComparable_1_t2352_IComparable_1_CompareTo_m44326_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m44326_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2352_MethodInfos[] =
{
	&IComparable_1_CompareTo_m44326_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2352_1_0_0;
struct IComparable_1_t2352;
extern Il2CppGenericClass IComparable_1_t2352_GenericClass;
TypeInfo IComparable_1_t2352_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2352_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2352_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2352_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2352_0_0_0/* byval_arg */
	, &IComparable_1_t2352_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2352_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_549.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4708_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_549MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m25773_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2352_m34094_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.UInt64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2352_m34094(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4708____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4708, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4708____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4708, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4708_FieldInfos[] =
{
	&InternalEnumerator_1_t4708____array_0_FieldInfo,
	&InternalEnumerator_1_t4708____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25770_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4708____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4708_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25770_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4708____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4708_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25773_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4708_PropertyInfos[] =
{
	&InternalEnumerator_1_t4708____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4708____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4708_InternalEnumerator_1__ctor_m25769_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25769_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25769_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4708_InternalEnumerator_1__ctor_m25769_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25769_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25770_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25770_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25770_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25771_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25771_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25771_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25772_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25772_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25772_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2352_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25773_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.UInt64>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25773_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2352_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25773_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4708_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25769_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25770_MethodInfo,
	&InternalEnumerator_1_Dispose_m25771_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25772_MethodInfo,
	&InternalEnumerator_1_get_Current_m25773_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25772_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25771_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4708_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25770_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25772_MethodInfo,
	&InternalEnumerator_1_Dispose_m25771_MethodInfo,
	&InternalEnumerator_1_get_Current_m25773_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4708_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6630_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4708_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6630_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2352_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4708_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25773_MethodInfo/* Method Usage */,
	&IComparable_1_t2352_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2352_m34094_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4708_0_0_0;
extern Il2CppType InternalEnumerator_1_t4708_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4708_GenericClass;
TypeInfo InternalEnumerator_1_t4708_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4708_MethodInfos/* methods */
	, InternalEnumerator_1_t4708_PropertyInfos/* properties */
	, InternalEnumerator_1_t4708_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4708_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4708_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4708_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4708_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4708_1_0_0/* this_arg */
	, InternalEnumerator_1_t4708_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4708_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4708_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4708)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8531_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>
extern MethodInfo IList_1_get_Item_m44327_MethodInfo;
extern MethodInfo IList_1_set_Item_m44328_MethodInfo;
static PropertyInfo IList_1_t8531____Item_PropertyInfo = 
{
	&IList_1_t8531_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44327_MethodInfo/* get */
	, &IList_1_set_Item_m44328_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8531_PropertyInfos[] =
{
	&IList_1_t8531____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2352_0_0_0;
static ParameterInfo IList_1_t8531_IList_1_IndexOf_m44329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2352_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44329_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44329_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8531_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8531_IList_1_IndexOf_m44329_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44329_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IComparable_1_t2352_0_0_0;
static ParameterInfo IList_1_t8531_IList_1_Insert_m44330_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2352_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44330_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44330_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8531_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8531_IList_1_Insert_m44330_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44330_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8531_IList_1_RemoveAt_m44331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44331_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44331_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8531_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8531_IList_1_RemoveAt_m44331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44331_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8531_IList_1_get_Item_m44327_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IComparable_1_t2352_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44327_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44327_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8531_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2352_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8531_IList_1_get_Item_m44327_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44327_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IComparable_1_t2352_0_0_0;
static ParameterInfo IList_1_t8531_IList_1_set_Item_m44328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2352_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44328_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.UInt64>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44328_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8531_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8531_IList_1_set_Item_m44328_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44328_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8531_MethodInfos[] =
{
	&IList_1_IndexOf_m44329_MethodInfo,
	&IList_1_Insert_m44330_MethodInfo,
	&IList_1_RemoveAt_m44331_MethodInfo,
	&IList_1_get_Item_m44327_MethodInfo,
	&IList_1_set_Item_m44328_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8531_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8530_il2cpp_TypeInfo,
	&IEnumerable_1_t8532_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8531_0_0_0;
extern Il2CppType IList_1_t8531_1_0_0;
struct IList_1_t8531;
extern Il2CppGenericClass IList_1_t8531_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8531_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8531_MethodInfos/* methods */
	, IList_1_t8531_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8531_il2cpp_TypeInfo/* element_class */
	, IList_1_t8531_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8531_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8531_0_0_0/* byval_arg */
	, &IList_1_t8531_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8531_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8533_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>
extern MethodInfo ICollection_1_get_Count_m44332_MethodInfo;
static PropertyInfo ICollection_1_t8533____Count_PropertyInfo = 
{
	&ICollection_1_t8533_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44332_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44333_MethodInfo;
static PropertyInfo ICollection_1_t8533____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8533_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8533_PropertyInfos[] =
{
	&ICollection_1_t8533____Count_PropertyInfo,
	&ICollection_1_t8533____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44332_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::get_Count()
MethodInfo ICollection_1_get_Count_m44332_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44332_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44333_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44333_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44333_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2353_0_0_0;
extern Il2CppType IEquatable_1_t2353_0_0_0;
static ParameterInfo ICollection_1_t8533_ICollection_1_Add_m44334_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2353_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44334_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Add(T)
MethodInfo ICollection_1_Add_m44334_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8533_ICollection_1_Add_m44334_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44334_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44335_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Clear()
MethodInfo ICollection_1_Clear_m44335_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44335_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2353_0_0_0;
static ParameterInfo ICollection_1_t8533_ICollection_1_Contains_m44336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2353_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44336_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Contains(T)
MethodInfo ICollection_1_Contains_m44336_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8533_ICollection_1_Contains_m44336_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44336_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t4999_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t4999_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8533_ICollection_1_CopyTo_m44337_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t4999_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44337_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44337_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8533_ICollection_1_CopyTo_m44337_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44337_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2353_0_0_0;
static ParameterInfo ICollection_1_t8533_ICollection_1_Remove_m44338_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2353_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44338_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.UInt64>>::Remove(T)
MethodInfo ICollection_1_Remove_m44338_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8533_ICollection_1_Remove_m44338_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44338_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8533_MethodInfos[] =
{
	&ICollection_1_get_Count_m44332_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44333_MethodInfo,
	&ICollection_1_Add_m44334_MethodInfo,
	&ICollection_1_Clear_m44335_MethodInfo,
	&ICollection_1_Contains_m44336_MethodInfo,
	&ICollection_1_CopyTo_m44337_MethodInfo,
	&ICollection_1_Remove_m44338_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8535_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8533_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8535_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8533_0_0_0;
extern Il2CppType ICollection_1_t8533_1_0_0;
struct ICollection_1_t8533;
extern Il2CppGenericClass ICollection_1_t8533_GenericClass;
TypeInfo ICollection_1_t8533_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8533_MethodInfos/* methods */
	, ICollection_1_t8533_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8533_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8533_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8533_0_0_0/* byval_arg */
	, &ICollection_1_t8533_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8533_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt64>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt64>>
extern Il2CppType IEnumerator_1_t6632_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44339_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.UInt64>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44339_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8535_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6632_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44339_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8535_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44339_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8535_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8535_0_0_0;
extern Il2CppType IEnumerable_1_t8535_1_0_0;
struct IEnumerable_1_t8535;
extern Il2CppGenericClass IEnumerable_1_t8535_GenericClass;
TypeInfo IEnumerable_1_t8535_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8535_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8535_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8535_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8535_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8535_0_0_0/* byval_arg */
	, &IEnumerable_1_t8535_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8535_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6632_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt64>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt64>>
extern MethodInfo IEnumerator_1_get_Current_m44340_MethodInfo;
static PropertyInfo IEnumerator_1_t6632____Current_PropertyInfo = 
{
	&IEnumerator_1_t6632_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44340_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6632_PropertyInfos[] =
{
	&IEnumerator_1_t6632____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2353_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44340_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.UInt64>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44340_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6632_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2353_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44340_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6632_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44340_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6632_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6632_0_0_0;
extern Il2CppType IEnumerator_1_t6632_1_0_0;
struct IEnumerator_1_t6632;
extern Il2CppGenericClass IEnumerator_1_t6632_GenericClass;
TypeInfo IEnumerator_1_t6632_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6632_MethodInfos/* methods */
	, IEnumerator_1_t6632_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6632_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6632_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6632_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6632_0_0_0/* byval_arg */
	, &IEnumerator_1_t6632_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6632_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEquatable_1_t2353_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.UInt64>::Equals(T)
// Metadata Definition System.IEquatable`1<System.UInt64>
extern Il2CppType UInt64_t1068_0_0_0;
static ParameterInfo IEquatable_1_t2353_IEquatable_1_Equals_m44341_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &UInt64_t1068_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int64_t77 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m44341_GenericMethod;
// System.Boolean System.IEquatable`1<System.UInt64>::Equals(T)
MethodInfo IEquatable_1_Equals_m44341_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2353_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int64_t77/* invoker_method */
	, IEquatable_1_t2353_IEquatable_1_Equals_m44341_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m44341_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2353_MethodInfos[] =
{
	&IEquatable_1_Equals_m44341_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2353_1_0_0;
struct IEquatable_1_t2353;
extern Il2CppGenericClass IEquatable_1_t2353_GenericClass;
TypeInfo IEquatable_1_t2353_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2353_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2353_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2353_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2353_0_0_0/* byval_arg */
	, &IEquatable_1_t2353_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2353_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_550.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4709_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_550MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m25778_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2353_m34105_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt64>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.UInt64>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2353_m34105(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4709____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4709, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4709____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4709, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4709_FieldInfos[] =
{
	&InternalEnumerator_1_t4709____array_0_FieldInfo,
	&InternalEnumerator_1_t4709____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25775_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4709____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4709_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25775_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4709____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4709_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25778_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4709_PropertyInfos[] =
{
	&InternalEnumerator_1_t4709____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4709____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4709_InternalEnumerator_1__ctor_m25774_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25774_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25774_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4709_InternalEnumerator_1__ctor_m25774_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25774_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25775_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25775_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25775_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25776_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25776_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25776_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25777_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25777_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25777_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2353_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25778_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.UInt64>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25778_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2353_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25778_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4709_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25774_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25775_MethodInfo,
	&InternalEnumerator_1_Dispose_m25776_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25777_MethodInfo,
	&InternalEnumerator_1_get_Current_m25778_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25777_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25776_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4709_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25775_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25777_MethodInfo,
	&InternalEnumerator_1_Dispose_m25776_MethodInfo,
	&InternalEnumerator_1_get_Current_m25778_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4709_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6632_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4709_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6632_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2353_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4709_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25778_MethodInfo/* Method Usage */,
	&IEquatable_1_t2353_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2353_m34105_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4709_0_0_0;
extern Il2CppType InternalEnumerator_1_t4709_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4709_GenericClass;
TypeInfo InternalEnumerator_1_t4709_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4709_MethodInfos/* methods */
	, InternalEnumerator_1_t4709_PropertyInfos/* properties */
	, InternalEnumerator_1_t4709_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4709_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4709_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4709_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4709_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4709_1_0_0/* this_arg */
	, InternalEnumerator_1_t4709_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4709_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4709_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4709)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8534_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>
extern MethodInfo IList_1_get_Item_m44342_MethodInfo;
extern MethodInfo IList_1_set_Item_m44343_MethodInfo;
static PropertyInfo IList_1_t8534____Item_PropertyInfo = 
{
	&IList_1_t8534_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44342_MethodInfo/* get */
	, &IList_1_set_Item_m44343_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8534_PropertyInfos[] =
{
	&IList_1_t8534____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2353_0_0_0;
static ParameterInfo IList_1_t8534_IList_1_IndexOf_m44344_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2353_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44344_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44344_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8534_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8534_IList_1_IndexOf_m44344_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44344_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IEquatable_1_t2353_0_0_0;
static ParameterInfo IList_1_t8534_IList_1_Insert_m44345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2353_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44345_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44345_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8534_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8534_IList_1_Insert_m44345_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44345_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8534_IList_1_RemoveAt_m44346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44346_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44346_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8534_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8534_IList_1_RemoveAt_m44346_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44346_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8534_IList_1_get_Item_m44342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IEquatable_1_t2353_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44342_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44342_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8534_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2353_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8534_IList_1_get_Item_m44342_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44342_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IEquatable_1_t2353_0_0_0;
static ParameterInfo IList_1_t8534_IList_1_set_Item_m44343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2353_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44343_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.UInt64>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44343_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8534_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8534_IList_1_set_Item_m44343_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44343_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8534_MethodInfos[] =
{
	&IList_1_IndexOf_m44344_MethodInfo,
	&IList_1_Insert_m44345_MethodInfo,
	&IList_1_RemoveAt_m44346_MethodInfo,
	&IList_1_get_Item_m44342_MethodInfo,
	&IList_1_set_Item_m44343_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8534_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8533_il2cpp_TypeInfo,
	&IEnumerable_1_t8535_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8534_0_0_0;
extern Il2CppType IList_1_t8534_1_0_0;
struct IList_1_t8534;
extern Il2CppGenericClass IList_1_t8534_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8534_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8534_MethodInfos/* methods */
	, IList_1_t8534_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8534_il2cpp_TypeInfo/* element_class */
	, IList_1_t8534_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8534_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8534_0_0_0/* byval_arg */
	, &IList_1_t8534_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8534_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6633_il2cpp_TypeInfo;

// System.SByte
#include "mscorlib_System_SByte.h"


// T System.Collections.Generic.IEnumerator`1<System.SByte>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.SByte>
extern MethodInfo IEnumerator_1_get_Current_m44347_MethodInfo;
static PropertyInfo IEnumerator_1_t6633____Current_PropertyInfo = 
{
	&IEnumerator_1_t6633_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44347_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6633_PropertyInfos[] =
{
	&IEnumerator_1_t6633____Current_PropertyInfo,
	NULL
};
extern Il2CppType SByte_t75_0_0_0;
extern void* RuntimeInvoker_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44347_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.SByte>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44347_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6633_il2cpp_TypeInfo/* declaring_type */
	, &SByte_t75_0_0_0/* return_type */
	, RuntimeInvoker_SByte_t75/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m44347_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6633_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44347_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6633_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6633_0_0_0;
extern Il2CppType IEnumerator_1_t6633_1_0_0;
struct IEnumerator_1_t6633;
extern Il2CppGenericClass IEnumerator_1_t6633_GenericClass;
TypeInfo IEnumerator_1_t6633_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6633_MethodInfos/* methods */
	, IEnumerator_1_t6633_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6633_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6633_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6633_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6633_0_0_0/* byval_arg */
	, &IEnumerator_1_t6633_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6633_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_551.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4710_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_551MethodDeclarations.h"

extern TypeInfo SByte_t75_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25783_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSByte_t75_m34116_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
 int8_t Array_InternalArray__get_Item_TisSByte_t75_m34116 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25779_MethodInfo;
 void InternalEnumerator_1__ctor_m25779 (InternalEnumerator_1_t4710 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780 (InternalEnumerator_1_t4710 * __this, MethodInfo* method){
	{
		int8_t L_0 = InternalEnumerator_1_get_Current_m25783(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25783_MethodInfo);
		int8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SByte_t75_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25781_MethodInfo;
 void InternalEnumerator_1_Dispose_m25781 (InternalEnumerator_1_t4710 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25782_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25782 (InternalEnumerator_1_t4710 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
 int8_t InternalEnumerator_1_get_Current_m25783 (InternalEnumerator_1_t4710 * __this, MethodInfo* method){
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
		int8_t L_8 = Array_InternalArray__get_Item_TisSByte_t75_m34116(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSByte_t75_m34116_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.SByte>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4710____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4710, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4710____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4710, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4710_FieldInfos[] =
{
	&InternalEnumerator_1_t4710____array_0_FieldInfo,
	&InternalEnumerator_1_t4710____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4710____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4710_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4710____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4710_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25783_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4710_PropertyInfos[] =
{
	&InternalEnumerator_1_t4710____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4710____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4710_InternalEnumerator_1__ctor_m25779_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25779_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25779_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25779/* method */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4710_InternalEnumerator_1__ctor_m25779_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25779_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780/* method */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25781_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25781_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25781/* method */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25781_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25782_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25782_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25782/* method */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25782_GenericMethod/* genericMethod */

};
extern Il2CppType SByte_t75_0_0_0;
extern void* RuntimeInvoker_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25783_GenericMethod;
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25783_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25783/* method */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* declaring_type */
	, &SByte_t75_0_0_0/* return_type */
	, RuntimeInvoker_SByte_t75/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25783_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4710_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25779_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780_MethodInfo,
	&InternalEnumerator_1_Dispose_m25781_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25782_MethodInfo,
	&InternalEnumerator_1_get_Current_m25783_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4710_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25780_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25782_MethodInfo,
	&InternalEnumerator_1_Dispose_m25781_MethodInfo,
	&InternalEnumerator_1_get_Current_m25783_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4710_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6633_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4710_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6633_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4710_0_0_0;
extern Il2CppType InternalEnumerator_1_t4710_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4710_GenericClass;
TypeInfo InternalEnumerator_1_t4710_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4710_MethodInfos/* methods */
	, InternalEnumerator_1_t4710_PropertyInfos/* properties */
	, InternalEnumerator_1_t4710_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4710_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4710_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4710_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4710_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4710_1_0_0/* this_arg */
	, InternalEnumerator_1_t4710_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4710_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4710)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8536_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.SByte>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.SByte>
extern MethodInfo ICollection_1_get_Count_m44348_MethodInfo;
static PropertyInfo ICollection_1_t8536____Count_PropertyInfo = 
{
	&ICollection_1_t8536_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44349_MethodInfo;
static PropertyInfo ICollection_1_t8536____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8536_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44349_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8536_PropertyInfos[] =
{
	&ICollection_1_t8536____Count_PropertyInfo,
	&ICollection_1_t8536____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44348_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.SByte>::get_Count()
MethodInfo ICollection_1_get_Count_m44348_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44348_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44349_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44349_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44349_GenericMethod/* genericMethod */

};
extern Il2CppType SByte_t75_0_0_0;
extern Il2CppType SByte_t75_0_0_0;
static ParameterInfo ICollection_1_t8536_ICollection_1_Add_m44350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t75_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44350_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Add(T)
MethodInfo ICollection_1_Add_m44350_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_SByte_t75/* invoker_method */
	, ICollection_1_t8536_ICollection_1_Add_m44350_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44350_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44351_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Clear()
MethodInfo ICollection_1_Clear_m44351_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44351_GenericMethod/* genericMethod */

};
extern Il2CppType SByte_t75_0_0_0;
static ParameterInfo ICollection_1_t8536_ICollection_1_Contains_m44352_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t75_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44352_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Contains(T)
MethodInfo ICollection_1_Contains_m44352_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_SByte_t75/* invoker_method */
	, ICollection_1_t8536_ICollection_1_Contains_m44352_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44352_GenericMethod/* genericMethod */

};
extern Il2CppType SByteU5BU5D_t2218_0_0_0;
extern Il2CppType SByteU5BU5D_t2218_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8536_ICollection_1_CopyTo_m44353_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SByteU5BU5D_t2218_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44353_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44353_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8536_ICollection_1_CopyTo_m44353_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44353_GenericMethod/* genericMethod */

};
extern Il2CppType SByte_t75_0_0_0;
static ParameterInfo ICollection_1_t8536_ICollection_1_Remove_m44354_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t75_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44354_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Remove(T)
MethodInfo ICollection_1_Remove_m44354_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_SByte_t75/* invoker_method */
	, ICollection_1_t8536_ICollection_1_Remove_m44354_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44354_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8536_MethodInfos[] =
{
	&ICollection_1_get_Count_m44348_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44349_MethodInfo,
	&ICollection_1_Add_m44350_MethodInfo,
	&ICollection_1_Clear_m44351_MethodInfo,
	&ICollection_1_Contains_m44352_MethodInfo,
	&ICollection_1_CopyTo_m44353_MethodInfo,
	&ICollection_1_Remove_m44354_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8538_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8536_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8538_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8536_0_0_0;
extern Il2CppType ICollection_1_t8536_1_0_0;
struct ICollection_1_t8536;
extern Il2CppGenericClass ICollection_1_t8536_GenericClass;
TypeInfo ICollection_1_t8536_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8536_MethodInfos/* methods */
	, ICollection_1_t8536_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8536_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8536_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8536_0_0_0/* byval_arg */
	, &ICollection_1_t8536_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8536_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SByte>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.SByte>
extern Il2CppType IEnumerator_1_t6633_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44355_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SByte>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44355_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8538_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6633_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44355_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8538_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44355_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8538_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8538_0_0_0;
extern Il2CppType IEnumerable_1_t8538_1_0_0;
struct IEnumerable_1_t8538;
extern Il2CppGenericClass IEnumerable_1_t8538_GenericClass;
TypeInfo IEnumerable_1_t8538_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8538_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8538_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8538_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8538_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8538_0_0_0/* byval_arg */
	, &IEnumerable_1_t8538_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8538_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8537_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.SByte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.SByte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.SByte>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.SByte>
extern MethodInfo IList_1_get_Item_m44356_MethodInfo;
extern MethodInfo IList_1_set_Item_m44357_MethodInfo;
static PropertyInfo IList_1_t8537____Item_PropertyInfo = 
{
	&IList_1_t8537_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44356_MethodInfo/* get */
	, &IList_1_set_Item_m44357_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8537_PropertyInfos[] =
{
	&IList_1_t8537____Item_PropertyInfo,
	NULL
};
extern Il2CppType SByte_t75_0_0_0;
static ParameterInfo IList_1_t8537_IList_1_IndexOf_m44358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t75_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44358_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.SByte>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44358_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8537_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_SByte_t75/* invoker_method */
	, IList_1_t8537_IList_1_IndexOf_m44358_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44358_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SByte_t75_0_0_0;
static ParameterInfo IList_1_t8537_IList_1_Insert_m44359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SByte_t75_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44359_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SByte>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44359_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8537_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_SByte_t75/* invoker_method */
	, IList_1_t8537_IList_1_Insert_m44359_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44359_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8537_IList_1_RemoveAt_m44360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44360_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SByte>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44360_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8537_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8537_IList_1_RemoveAt_m44360_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44360_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8537_IList_1_get_Item_m44356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType SByte_t75_0_0_0;
extern void* RuntimeInvoker_SByte_t75_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44356_GenericMethod;
// T System.Collections.Generic.IList`1<System.SByte>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44356_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8537_il2cpp_TypeInfo/* declaring_type */
	, &SByte_t75_0_0_0/* return_type */
	, RuntimeInvoker_SByte_t75_Int32_t73/* invoker_method */
	, IList_1_t8537_IList_1_get_Item_m44356_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44356_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SByte_t75_0_0_0;
static ParameterInfo IList_1_t8537_IList_1_set_Item_m44357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SByte_t75_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44357_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SByte>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44357_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8537_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_SByte_t75/* invoker_method */
	, IList_1_t8537_IList_1_set_Item_m44357_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44357_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8537_MethodInfos[] =
{
	&IList_1_IndexOf_m44358_MethodInfo,
	&IList_1_Insert_m44359_MethodInfo,
	&IList_1_RemoveAt_m44360_MethodInfo,
	&IList_1_get_Item_m44356_MethodInfo,
	&IList_1_set_Item_m44357_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8537_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8536_il2cpp_TypeInfo,
	&IEnumerable_1_t8538_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8537_0_0_0;
extern Il2CppType IList_1_t8537_1_0_0;
struct IList_1_t8537;
extern Il2CppGenericClass IList_1_t8537_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8537_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8537_MethodInfos/* methods */
	, IList_1_t8537_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8537_il2cpp_TypeInfo/* element_class */
	, IList_1_t8537_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8537_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8537_0_0_0/* byval_arg */
	, &IList_1_t8537_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8537_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8539_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>
extern MethodInfo ICollection_1_get_Count_m44361_MethodInfo;
static PropertyInfo ICollection_1_t8539____Count_PropertyInfo = 
{
	&ICollection_1_t8539_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44361_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44362_MethodInfo;
static PropertyInfo ICollection_1_t8539____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8539_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44362_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8539_PropertyInfos[] =
{
	&ICollection_1_t8539____Count_PropertyInfo,
	&ICollection_1_t8539____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44361_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_Count()
MethodInfo ICollection_1_get_Count_m44361_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44361_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44362_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44362_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44362_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2357_0_0_0;
extern Il2CppType IComparable_1_t2357_0_0_0;
static ParameterInfo ICollection_1_t8539_ICollection_1_Add_m44363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2357_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44363_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Add(T)
MethodInfo ICollection_1_Add_m44363_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8539_ICollection_1_Add_m44363_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44363_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44364_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Clear()
MethodInfo ICollection_1_Clear_m44364_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44364_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2357_0_0_0;
static ParameterInfo ICollection_1_t8539_ICollection_1_Contains_m44365_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2357_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44365_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Contains(T)
MethodInfo ICollection_1_Contains_m44365_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8539_ICollection_1_Contains_m44365_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44365_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t5000_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t5000_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8539_ICollection_1_CopyTo_m44366_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t5000_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44366_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44366_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8539_ICollection_1_CopyTo_m44366_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44366_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2357_0_0_0;
static ParameterInfo ICollection_1_t8539_ICollection_1_Remove_m44367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2357_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44367_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Remove(T)
MethodInfo ICollection_1_Remove_m44367_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8539_ICollection_1_Remove_m44367_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44367_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8539_MethodInfos[] =
{
	&ICollection_1_get_Count_m44361_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44362_MethodInfo,
	&ICollection_1_Add_m44363_MethodInfo,
	&ICollection_1_Clear_m44364_MethodInfo,
	&ICollection_1_Contains_m44365_MethodInfo,
	&ICollection_1_CopyTo_m44366_MethodInfo,
	&ICollection_1_Remove_m44367_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8541_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8539_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8541_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8539_0_0_0;
extern Il2CppType ICollection_1_t8539_1_0_0;
struct ICollection_1_t8539;
extern Il2CppGenericClass ICollection_1_t8539_GenericClass;
TypeInfo ICollection_1_t8539_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8539_MethodInfos/* methods */
	, ICollection_1_t8539_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8539_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8539_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8539_0_0_0/* byval_arg */
	, &ICollection_1_t8539_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8539_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.SByte>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.SByte>>
extern Il2CppType IEnumerator_1_t6635_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44368_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.SByte>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44368_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8541_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6635_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44368_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8541_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44368_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8541_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8541_0_0_0;
extern Il2CppType IEnumerable_1_t8541_1_0_0;
struct IEnumerable_1_t8541;
extern Il2CppGenericClass IEnumerable_1_t8541_GenericClass;
TypeInfo IEnumerable_1_t8541_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8541_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8541_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8541_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8541_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8541_0_0_0/* byval_arg */
	, &IEnumerable_1_t8541_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8541_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6635_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.SByte>>
extern MethodInfo IEnumerator_1_get_Current_m44369_MethodInfo;
static PropertyInfo IEnumerator_1_t6635____Current_PropertyInfo = 
{
	&IEnumerator_1_t6635_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6635_PropertyInfos[] =
{
	&IEnumerator_1_t6635____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2357_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44369_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44369_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6635_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2357_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44369_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6635_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44369_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6635_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6635_0_0_0;
extern Il2CppType IEnumerator_1_t6635_1_0_0;
struct IEnumerator_1_t6635;
extern Il2CppGenericClass IEnumerator_1_t6635_GenericClass;
TypeInfo IEnumerator_1_t6635_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6635_MethodInfos/* methods */
	, IEnumerator_1_t6635_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6635_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6635_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6635_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6635_0_0_0/* byval_arg */
	, &IEnumerator_1_t6635_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6635_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IComparable_1_t2357_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.SByte>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.SByte>
extern Il2CppType SByte_t75_0_0_0;
static ParameterInfo IComparable_1_t2357_IComparable_1_CompareTo_m44370_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t75_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m44370_GenericMethod;
// System.Int32 System.IComparable`1<System.SByte>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m44370_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2357_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_SByte_t75/* invoker_method */
	, IComparable_1_t2357_IComparable_1_CompareTo_m44370_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m44370_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2357_MethodInfos[] =
{
	&IComparable_1_CompareTo_m44370_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2357_1_0_0;
struct IComparable_1_t2357;
extern Il2CppGenericClass IComparable_1_t2357_GenericClass;
TypeInfo IComparable_1_t2357_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2357_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2357_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2357_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2357_0_0_0/* byval_arg */
	, &IComparable_1_t2357_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2357_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_552.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4711_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_552MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m25788_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2357_m34127_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2357_m34127(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4711____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4711, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4711____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4711, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4711_FieldInfos[] =
{
	&InternalEnumerator_1_t4711____array_0_FieldInfo,
	&InternalEnumerator_1_t4711____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25785_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4711____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4711_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25785_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4711____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4711_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25788_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4711_PropertyInfos[] =
{
	&InternalEnumerator_1_t4711____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4711____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4711_InternalEnumerator_1__ctor_m25784_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25784_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25784_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4711_InternalEnumerator_1__ctor_m25784_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25784_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25785_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25785_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25785_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25786_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25786_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25786_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25787_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25787_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25787_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2357_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25788_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25788_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2357_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25788_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4711_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25784_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25785_MethodInfo,
	&InternalEnumerator_1_Dispose_m25786_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25787_MethodInfo,
	&InternalEnumerator_1_get_Current_m25788_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25787_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25786_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4711_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25785_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25787_MethodInfo,
	&InternalEnumerator_1_Dispose_m25786_MethodInfo,
	&InternalEnumerator_1_get_Current_m25788_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4711_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6635_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4711_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6635_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2357_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4711_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25788_MethodInfo/* Method Usage */,
	&IComparable_1_t2357_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2357_m34127_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4711_0_0_0;
extern Il2CppType InternalEnumerator_1_t4711_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4711_GenericClass;
TypeInfo InternalEnumerator_1_t4711_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4711_MethodInfos/* methods */
	, InternalEnumerator_1_t4711_PropertyInfos/* properties */
	, InternalEnumerator_1_t4711_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4711_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4711_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4711_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4711_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4711_1_0_0/* this_arg */
	, InternalEnumerator_1_t4711_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4711_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4711_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4711)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8540_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>
extern MethodInfo IList_1_get_Item_m44371_MethodInfo;
extern MethodInfo IList_1_set_Item_m44372_MethodInfo;
static PropertyInfo IList_1_t8540____Item_PropertyInfo = 
{
	&IList_1_t8540_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44371_MethodInfo/* get */
	, &IList_1_set_Item_m44372_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8540_PropertyInfos[] =
{
	&IList_1_t8540____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2357_0_0_0;
static ParameterInfo IList_1_t8540_IList_1_IndexOf_m44373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2357_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44373_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44373_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8540_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8540_IList_1_IndexOf_m44373_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44373_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IComparable_1_t2357_0_0_0;
static ParameterInfo IList_1_t8540_IList_1_Insert_m44374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2357_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44374_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44374_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8540_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8540_IList_1_Insert_m44374_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44374_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8540_IList_1_RemoveAt_m44375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44375_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44375_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8540_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8540_IList_1_RemoveAt_m44375_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44375_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8540_IList_1_get_Item_m44371_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IComparable_1_t2357_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44371_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44371_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8540_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2357_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8540_IList_1_get_Item_m44371_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44371_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IComparable_1_t2357_0_0_0;
static ParameterInfo IList_1_t8540_IList_1_set_Item_m44372_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2357_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44372_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44372_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8540_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8540_IList_1_set_Item_m44372_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44372_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8540_MethodInfos[] =
{
	&IList_1_IndexOf_m44373_MethodInfo,
	&IList_1_Insert_m44374_MethodInfo,
	&IList_1_RemoveAt_m44375_MethodInfo,
	&IList_1_get_Item_m44371_MethodInfo,
	&IList_1_set_Item_m44372_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8540_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8539_il2cpp_TypeInfo,
	&IEnumerable_1_t8541_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8540_0_0_0;
extern Il2CppType IList_1_t8540_1_0_0;
struct IList_1_t8540;
extern Il2CppGenericClass IList_1_t8540_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8540_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8540_MethodInfos/* methods */
	, IList_1_t8540_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8540_il2cpp_TypeInfo/* element_class */
	, IList_1_t8540_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8540_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8540_0_0_0/* byval_arg */
	, &IList_1_t8540_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8540_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8542_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>
extern MethodInfo ICollection_1_get_Count_m44376_MethodInfo;
static PropertyInfo ICollection_1_t8542____Count_PropertyInfo = 
{
	&ICollection_1_t8542_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44376_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44377_MethodInfo;
static PropertyInfo ICollection_1_t8542____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8542_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44377_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8542_PropertyInfos[] =
{
	&ICollection_1_t8542____Count_PropertyInfo,
	&ICollection_1_t8542____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44376_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_Count()
MethodInfo ICollection_1_get_Count_m44376_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44376_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44377_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44377_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44377_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2358_0_0_0;
extern Il2CppType IEquatable_1_t2358_0_0_0;
static ParameterInfo ICollection_1_t8542_ICollection_1_Add_m44378_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2358_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44378_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Add(T)
MethodInfo ICollection_1_Add_m44378_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8542_ICollection_1_Add_m44378_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44378_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44379_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Clear()
MethodInfo ICollection_1_Clear_m44379_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44379_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2358_0_0_0;
static ParameterInfo ICollection_1_t8542_ICollection_1_Contains_m44380_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2358_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44380_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Contains(T)
MethodInfo ICollection_1_Contains_m44380_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8542_ICollection_1_Contains_m44380_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44380_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t5001_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t5001_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8542_ICollection_1_CopyTo_m44381_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t5001_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44381_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44381_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8542_ICollection_1_CopyTo_m44381_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44381_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2358_0_0_0;
static ParameterInfo ICollection_1_t8542_ICollection_1_Remove_m44382_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2358_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44382_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Remove(T)
MethodInfo ICollection_1_Remove_m44382_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8542_ICollection_1_Remove_m44382_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44382_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8542_MethodInfos[] =
{
	&ICollection_1_get_Count_m44376_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44377_MethodInfo,
	&ICollection_1_Add_m44378_MethodInfo,
	&ICollection_1_Clear_m44379_MethodInfo,
	&ICollection_1_Contains_m44380_MethodInfo,
	&ICollection_1_CopyTo_m44381_MethodInfo,
	&ICollection_1_Remove_m44382_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8544_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8542_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8544_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8542_0_0_0;
extern Il2CppType ICollection_1_t8542_1_0_0;
struct ICollection_1_t8542;
extern Il2CppGenericClass ICollection_1_t8542_GenericClass;
TypeInfo ICollection_1_t8542_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8542_MethodInfos/* methods */
	, ICollection_1_t8542_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8542_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8542_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8542_0_0_0/* byval_arg */
	, &ICollection_1_t8542_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8542_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.SByte>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.SByte>>
extern Il2CppType IEnumerator_1_t6637_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44383_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.SByte>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44383_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8544_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6637_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44383_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8544_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44383_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8544_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8544_0_0_0;
extern Il2CppType IEnumerable_1_t8544_1_0_0;
struct IEnumerable_1_t8544;
extern Il2CppGenericClass IEnumerable_1_t8544_GenericClass;
TypeInfo IEnumerable_1_t8544_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8544_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8544_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8544_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8544_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8544_0_0_0/* byval_arg */
	, &IEnumerable_1_t8544_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8544_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6637_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.SByte>>
extern MethodInfo IEnumerator_1_get_Current_m44384_MethodInfo;
static PropertyInfo IEnumerator_1_t6637____Current_PropertyInfo = 
{
	&IEnumerator_1_t6637_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44384_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6637_PropertyInfos[] =
{
	&IEnumerator_1_t6637____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2358_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44384_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44384_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6637_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2358_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44384_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6637_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44384_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6637_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6637_0_0_0;
extern Il2CppType IEnumerator_1_t6637_1_0_0;
struct IEnumerator_1_t6637;
extern Il2CppGenericClass IEnumerator_1_t6637_GenericClass;
TypeInfo IEnumerator_1_t6637_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6637_MethodInfos/* methods */
	, IEnumerator_1_t6637_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6637_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6637_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6637_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6637_0_0_0/* byval_arg */
	, &IEnumerator_1_t6637_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6637_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEquatable_1_t2358_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.SByte>::Equals(T)
// Metadata Definition System.IEquatable`1<System.SByte>
extern Il2CppType SByte_t75_0_0_0;
static ParameterInfo IEquatable_1_t2358_IEquatable_1_Equals_m44385_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t75_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_SByte_t75 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m44385_GenericMethod;
// System.Boolean System.IEquatable`1<System.SByte>::Equals(T)
MethodInfo IEquatable_1_Equals_m44385_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2358_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_SByte_t75/* invoker_method */
	, IEquatable_1_t2358_IEquatable_1_Equals_m44385_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m44385_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2358_MethodInfos[] =
{
	&IEquatable_1_Equals_m44385_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2358_1_0_0;
struct IEquatable_1_t2358;
extern Il2CppGenericClass IEquatable_1_t2358_GenericClass;
TypeInfo IEquatable_1_t2358_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2358_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2358_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2358_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2358_0_0_0/* byval_arg */
	, &IEquatable_1_t2358_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2358_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_553.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4712_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_553MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m25793_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2358_m34138_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2358_m34138(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4712____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4712, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4712____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4712, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4712_FieldInfos[] =
{
	&InternalEnumerator_1_t4712____array_0_FieldInfo,
	&InternalEnumerator_1_t4712____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25790_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4712____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4712_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25790_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4712____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4712_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25793_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4712_PropertyInfos[] =
{
	&InternalEnumerator_1_t4712____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4712____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4712_InternalEnumerator_1__ctor_m25789_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25789_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25789_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4712_InternalEnumerator_1__ctor_m25789_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25789_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25790_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25790_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25790_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25791_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25791_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25791_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25792_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25792_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25792_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2358_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25793_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25793_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2358_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25793_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4712_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25789_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25790_MethodInfo,
	&InternalEnumerator_1_Dispose_m25791_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25792_MethodInfo,
	&InternalEnumerator_1_get_Current_m25793_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25792_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25791_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4712_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25790_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25792_MethodInfo,
	&InternalEnumerator_1_Dispose_m25791_MethodInfo,
	&InternalEnumerator_1_get_Current_m25793_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4712_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6637_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4712_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6637_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2358_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4712_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25793_MethodInfo/* Method Usage */,
	&IEquatable_1_t2358_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2358_m34138_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4712_0_0_0;
extern Il2CppType InternalEnumerator_1_t4712_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4712_GenericClass;
TypeInfo InternalEnumerator_1_t4712_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4712_MethodInfos/* methods */
	, InternalEnumerator_1_t4712_PropertyInfos/* properties */
	, InternalEnumerator_1_t4712_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4712_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4712_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4712_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4712_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4712_1_0_0/* this_arg */
	, InternalEnumerator_1_t4712_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4712_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4712_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4712)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8543_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>
extern MethodInfo IList_1_get_Item_m44386_MethodInfo;
extern MethodInfo IList_1_set_Item_m44387_MethodInfo;
static PropertyInfo IList_1_t8543____Item_PropertyInfo = 
{
	&IList_1_t8543_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44386_MethodInfo/* get */
	, &IList_1_set_Item_m44387_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8543_PropertyInfos[] =
{
	&IList_1_t8543____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2358_0_0_0;
static ParameterInfo IList_1_t8543_IList_1_IndexOf_m44388_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2358_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44388_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44388_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8543_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8543_IList_1_IndexOf_m44388_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44388_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IEquatable_1_t2358_0_0_0;
static ParameterInfo IList_1_t8543_IList_1_Insert_m44389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2358_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44389_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44389_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8543_IList_1_Insert_m44389_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44389_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8543_IList_1_RemoveAt_m44390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44390_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44390_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8543_IList_1_RemoveAt_m44390_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44390_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8543_IList_1_get_Item_m44386_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IEquatable_1_t2358_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44386_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44386_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8543_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2358_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8543_IList_1_get_Item_m44386_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44386_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IEquatable_1_t2358_0_0_0;
static ParameterInfo IList_1_t8543_IList_1_set_Item_m44387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2358_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44387_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44387_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8543_IList_1_set_Item_m44387_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44387_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8543_MethodInfos[] =
{
	&IList_1_IndexOf_m44388_MethodInfo,
	&IList_1_Insert_m44389_MethodInfo,
	&IList_1_RemoveAt_m44390_MethodInfo,
	&IList_1_get_Item_m44386_MethodInfo,
	&IList_1_set_Item_m44387_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8543_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8542_il2cpp_TypeInfo,
	&IEnumerable_1_t8544_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8543_0_0_0;
extern Il2CppType IList_1_t8543_1_0_0;
struct IList_1_t8543;
extern Il2CppGenericClass IList_1_t8543_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8543_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8543_MethodInfos/* methods */
	, IList_1_t8543_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8543_il2cpp_TypeInfo/* element_class */
	, IList_1_t8543_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8543_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8543_0_0_0/* byval_arg */
	, &IList_1_t8543_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8543_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6638_il2cpp_TypeInfo;

// System.Int16
#include "mscorlib_System_Int16.h"


// T System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Int16>
extern MethodInfo IEnumerator_1_get_Current_m44391_MethodInfo;
static PropertyInfo IEnumerator_1_t6638____Current_PropertyInfo = 
{
	&IEnumerator_1_t6638_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44391_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6638_PropertyInfos[] =
{
	&IEnumerator_1_t6638____Current_PropertyInfo,
	NULL
};
extern Il2CppType Int16_t754_0_0_0;
extern void* RuntimeInvoker_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44391_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44391_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6638_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t754_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t754/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m44391_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6638_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44391_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6638_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6638_0_0_0;
extern Il2CppType IEnumerator_1_t6638_1_0_0;
struct IEnumerator_1_t6638;
extern Il2CppGenericClass IEnumerator_1_t6638_GenericClass;
TypeInfo IEnumerator_1_t6638_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6638_MethodInfos/* methods */
	, IEnumerator_1_t6638_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6638_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6638_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6638_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6638_0_0_0/* byval_arg */
	, &IEnumerator_1_t6638_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6638_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_554.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4713_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_554MethodDeclarations.h"

extern TypeInfo Int16_t754_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25798_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInt16_t754_m34149_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
 int16_t Array_InternalArray__get_Item_TisInt16_t754_m34149 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25794_MethodInfo;
 void InternalEnumerator_1__ctor_m25794 (InternalEnumerator_1_t4713 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795 (InternalEnumerator_1_t4713 * __this, MethodInfo* method){
	{
		int16_t L_0 = InternalEnumerator_1_get_Current_m25798(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25798_MethodInfo);
		int16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Int16_t754_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25796_MethodInfo;
 void InternalEnumerator_1_Dispose_m25796 (InternalEnumerator_1_t4713 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25797_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25797 (InternalEnumerator_1_t4713 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
 int16_t InternalEnumerator_1_get_Current_m25798 (InternalEnumerator_1_t4713 * __this, MethodInfo* method){
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
		int16_t L_8 = Array_InternalArray__get_Item_TisInt16_t754_m34149(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisInt16_t754_m34149_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Int16>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4713____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4713, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4713____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4713, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4713_FieldInfos[] =
{
	&InternalEnumerator_1_t4713____array_0_FieldInfo,
	&InternalEnumerator_1_t4713____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4713____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4713_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4713____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4713_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25798_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4713_PropertyInfos[] =
{
	&InternalEnumerator_1_t4713____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4713____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4713_InternalEnumerator_1__ctor_m25794_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25794_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25794_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25794/* method */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4713_InternalEnumerator_1__ctor_m25794_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25794_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795/* method */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25796_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25796_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25796/* method */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25796_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25797_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25797_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25797/* method */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25797_GenericMethod/* genericMethod */

};
extern Il2CppType Int16_t754_0_0_0;
extern void* RuntimeInvoker_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25798_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25798_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25798/* method */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t754_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t754/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25798_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4713_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25794_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795_MethodInfo,
	&InternalEnumerator_1_Dispose_m25796_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25797_MethodInfo,
	&InternalEnumerator_1_get_Current_m25798_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4713_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25795_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25797_MethodInfo,
	&InternalEnumerator_1_Dispose_m25796_MethodInfo,
	&InternalEnumerator_1_get_Current_m25798_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4713_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6638_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4713_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6638_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4713_0_0_0;
extern Il2CppType InternalEnumerator_1_t4713_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4713_GenericClass;
TypeInfo InternalEnumerator_1_t4713_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4713_MethodInfos/* methods */
	, InternalEnumerator_1_t4713_PropertyInfos/* properties */
	, InternalEnumerator_1_t4713_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4713_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4713_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4713_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4713_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4713_1_0_0/* this_arg */
	, InternalEnumerator_1_t4713_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4713_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4713)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8545_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Int16>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Int16>
extern MethodInfo ICollection_1_get_Count_m44392_MethodInfo;
static PropertyInfo ICollection_1_t8545____Count_PropertyInfo = 
{
	&ICollection_1_t8545_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44392_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44393_MethodInfo;
static PropertyInfo ICollection_1_t8545____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8545_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44393_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8545_PropertyInfos[] =
{
	&ICollection_1_t8545____Count_PropertyInfo,
	&ICollection_1_t8545____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44392_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Int16>::get_Count()
MethodInfo ICollection_1_get_Count_m44392_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44392_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44393_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44393_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44393_GenericMethod/* genericMethod */

};
extern Il2CppType Int16_t754_0_0_0;
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo ICollection_1_t8545_ICollection_1_Add_m44394_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44394_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Add(T)
MethodInfo ICollection_1_Add_m44394_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int16_t754/* invoker_method */
	, ICollection_1_t8545_ICollection_1_Add_m44394_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44394_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44395_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Clear()
MethodInfo ICollection_1_Clear_m44395_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44395_GenericMethod/* genericMethod */

};
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo ICollection_1_t8545_ICollection_1_Contains_m44396_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44396_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Contains(T)
MethodInfo ICollection_1_Contains_m44396_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int16_t754/* invoker_method */
	, ICollection_1_t8545_ICollection_1_Contains_m44396_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44396_GenericMethod/* genericMethod */

};
extern Il2CppType Int16U5BU5D_t2393_0_0_0;
extern Il2CppType Int16U5BU5D_t2393_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8545_ICollection_1_CopyTo_m44397_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Int16U5BU5D_t2393_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44397_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44397_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8545_ICollection_1_CopyTo_m44397_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44397_GenericMethod/* genericMethod */

};
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo ICollection_1_t8545_ICollection_1_Remove_m44398_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44398_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Remove(T)
MethodInfo ICollection_1_Remove_m44398_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int16_t754/* invoker_method */
	, ICollection_1_t8545_ICollection_1_Remove_m44398_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44398_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8545_MethodInfos[] =
{
	&ICollection_1_get_Count_m44392_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44393_MethodInfo,
	&ICollection_1_Add_m44394_MethodInfo,
	&ICollection_1_Clear_m44395_MethodInfo,
	&ICollection_1_Contains_m44396_MethodInfo,
	&ICollection_1_CopyTo_m44397_MethodInfo,
	&ICollection_1_Remove_m44398_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8547_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8545_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8547_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8545_0_0_0;
extern Il2CppType ICollection_1_t8545_1_0_0;
struct ICollection_1_t8545;
extern Il2CppGenericClass ICollection_1_t8545_GenericClass;
TypeInfo ICollection_1_t8545_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8545_MethodInfos/* methods */
	, ICollection_1_t8545_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8545_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8545_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8545_0_0_0/* byval_arg */
	, &ICollection_1_t8545_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8545_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Int16>
extern Il2CppType IEnumerator_1_t6638_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44399_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44399_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8547_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6638_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44399_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8547_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44399_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8547_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8547_0_0_0;
extern Il2CppType IEnumerable_1_t8547_1_0_0;
struct IEnumerable_1_t8547;
extern Il2CppGenericClass IEnumerable_1_t8547_GenericClass;
TypeInfo IEnumerable_1_t8547_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8547_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8547_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8547_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8547_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8547_0_0_0/* byval_arg */
	, &IEnumerable_1_t8547_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8547_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8546_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Int16>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int16>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int16>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Int16>
extern MethodInfo IList_1_get_Item_m44400_MethodInfo;
extern MethodInfo IList_1_set_Item_m44401_MethodInfo;
static PropertyInfo IList_1_t8546____Item_PropertyInfo = 
{
	&IList_1_t8546_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44400_MethodInfo/* get */
	, &IList_1_set_Item_m44401_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8546_PropertyInfos[] =
{
	&IList_1_t8546____Item_PropertyInfo,
	NULL
};
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo IList_1_t8546_IList_1_IndexOf_m44402_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44402_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Int16>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44402_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8546_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int16_t754/* invoker_method */
	, IList_1_t8546_IList_1_IndexOf_m44402_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44402_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo IList_1_t8546_IList_1_Insert_m44403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44403_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int16>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44403_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int16_t754/* invoker_method */
	, IList_1_t8546_IList_1_Insert_m44403_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44403_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8546_IList_1_RemoveAt_m44404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44404_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int16>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44404_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8546_IList_1_RemoveAt_m44404_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44404_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8546_IList_1_get_Item_m44400_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Int16_t754_0_0_0;
extern void* RuntimeInvoker_Int16_t754_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44400_GenericMethod;
// T System.Collections.Generic.IList`1<System.Int16>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44400_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8546_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t754_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t754_Int32_t73/* invoker_method */
	, IList_1_t8546_IList_1_get_Item_m44400_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44400_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo IList_1_t8546_IList_1_set_Item_m44401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44401_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int16>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44401_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Int16_t754/* invoker_method */
	, IList_1_t8546_IList_1_set_Item_m44401_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44401_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8546_MethodInfos[] =
{
	&IList_1_IndexOf_m44402_MethodInfo,
	&IList_1_Insert_m44403_MethodInfo,
	&IList_1_RemoveAt_m44404_MethodInfo,
	&IList_1_get_Item_m44400_MethodInfo,
	&IList_1_set_Item_m44401_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8546_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8545_il2cpp_TypeInfo,
	&IEnumerable_1_t8547_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8546_0_0_0;
extern Il2CppType IList_1_t8546_1_0_0;
struct IList_1_t8546;
extern Il2CppGenericClass IList_1_t8546_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8546_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8546_MethodInfos/* methods */
	, IList_1_t8546_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8546_il2cpp_TypeInfo/* element_class */
	, IList_1_t8546_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8546_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8546_0_0_0/* byval_arg */
	, &IList_1_t8546_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8546_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8548_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>
extern MethodInfo ICollection_1_get_Count_m44405_MethodInfo;
static PropertyInfo ICollection_1_t8548____Count_PropertyInfo = 
{
	&ICollection_1_t8548_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44405_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44406_MethodInfo;
static PropertyInfo ICollection_1_t8548____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8548_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44406_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8548_PropertyInfos[] =
{
	&ICollection_1_t8548____Count_PropertyInfo,
	&ICollection_1_t8548____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44405_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_Count()
MethodInfo ICollection_1_get_Count_m44405_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44405_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44406_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44406_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44406_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2360_0_0_0;
extern Il2CppType IComparable_1_t2360_0_0_0;
static ParameterInfo ICollection_1_t8548_ICollection_1_Add_m44407_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2360_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44407_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Add(T)
MethodInfo ICollection_1_Add_m44407_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8548_ICollection_1_Add_m44407_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44407_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44408_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Clear()
MethodInfo ICollection_1_Clear_m44408_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44408_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2360_0_0_0;
static ParameterInfo ICollection_1_t8548_ICollection_1_Contains_m44409_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2360_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44409_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Contains(T)
MethodInfo ICollection_1_Contains_m44409_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8548_ICollection_1_Contains_m44409_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44409_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t5002_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t5002_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8548_ICollection_1_CopyTo_m44410_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t5002_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44410_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44410_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8548_ICollection_1_CopyTo_m44410_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44410_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2360_0_0_0;
static ParameterInfo ICollection_1_t8548_ICollection_1_Remove_m44411_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2360_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44411_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Remove(T)
MethodInfo ICollection_1_Remove_m44411_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8548_ICollection_1_Remove_m44411_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44411_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8548_MethodInfos[] =
{
	&ICollection_1_get_Count_m44405_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44406_MethodInfo,
	&ICollection_1_Add_m44407_MethodInfo,
	&ICollection_1_Clear_m44408_MethodInfo,
	&ICollection_1_Contains_m44409_MethodInfo,
	&ICollection_1_CopyTo_m44410_MethodInfo,
	&ICollection_1_Remove_m44411_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8550_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8548_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8550_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8548_0_0_0;
extern Il2CppType ICollection_1_t8548_1_0_0;
struct ICollection_1_t8548;
extern Il2CppGenericClass ICollection_1_t8548_GenericClass;
TypeInfo ICollection_1_t8548_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8548_MethodInfos/* methods */
	, ICollection_1_t8548_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8548_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8548_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8548_0_0_0/* byval_arg */
	, &ICollection_1_t8548_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8548_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int16>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int16>>
extern Il2CppType IEnumerator_1_t6640_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44412_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int16>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44412_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8550_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6640_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44412_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8550_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44412_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8550_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8550_0_0_0;
extern Il2CppType IEnumerable_1_t8550_1_0_0;
struct IEnumerable_1_t8550;
extern Il2CppGenericClass IEnumerable_1_t8550_GenericClass;
TypeInfo IEnumerable_1_t8550_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8550_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8550_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8550_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8550_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8550_0_0_0/* byval_arg */
	, &IEnumerable_1_t8550_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8550_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6640_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int16>>
extern MethodInfo IEnumerator_1_get_Current_m44413_MethodInfo;
static PropertyInfo IEnumerator_1_t6640____Current_PropertyInfo = 
{
	&IEnumerator_1_t6640_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44413_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6640_PropertyInfos[] =
{
	&IEnumerator_1_t6640____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2360_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44413_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44413_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6640_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2360_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44413_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6640_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44413_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6640_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6640_0_0_0;
extern Il2CppType IEnumerator_1_t6640_1_0_0;
struct IEnumerator_1_t6640;
extern Il2CppGenericClass IEnumerator_1_t6640_GenericClass;
TypeInfo IEnumerator_1_t6640_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6640_MethodInfos/* methods */
	, IEnumerator_1_t6640_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6640_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6640_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6640_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6640_0_0_0/* byval_arg */
	, &IEnumerator_1_t6640_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6640_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IComparable_1_t2360_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Int16>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Int16>
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo IComparable_1_t2360_IComparable_1_CompareTo_m44414_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m44414_GenericMethod;
// System.Int32 System.IComparable`1<System.Int16>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m44414_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2360_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int16_t754/* invoker_method */
	, IComparable_1_t2360_IComparable_1_CompareTo_m44414_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m44414_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2360_MethodInfos[] =
{
	&IComparable_1_CompareTo_m44414_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2360_1_0_0;
struct IComparable_1_t2360;
extern Il2CppGenericClass IComparable_1_t2360_GenericClass;
TypeInfo IComparable_1_t2360_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2360_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2360_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2360_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2360_0_0_0/* byval_arg */
	, &IComparable_1_t2360_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2360_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_555.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4714_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_555MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m25803_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2360_m34160_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2360_m34160(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4714____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4714, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4714____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4714, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4714_FieldInfos[] =
{
	&InternalEnumerator_1_t4714____array_0_FieldInfo,
	&InternalEnumerator_1_t4714____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25800_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4714____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4714_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25800_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4714____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4714_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25803_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4714_PropertyInfos[] =
{
	&InternalEnumerator_1_t4714____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4714____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4714_InternalEnumerator_1__ctor_m25799_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25799_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25799_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4714_InternalEnumerator_1__ctor_m25799_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25799_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25800_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25800_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25800_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25801_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25801_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25801_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25802_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25802_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25802_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2360_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25803_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25803_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2360_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25803_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4714_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25799_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25800_MethodInfo,
	&InternalEnumerator_1_Dispose_m25801_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25802_MethodInfo,
	&InternalEnumerator_1_get_Current_m25803_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25802_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25801_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4714_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25800_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25802_MethodInfo,
	&InternalEnumerator_1_Dispose_m25801_MethodInfo,
	&InternalEnumerator_1_get_Current_m25803_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4714_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6640_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4714_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6640_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2360_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4714_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25803_MethodInfo/* Method Usage */,
	&IComparable_1_t2360_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2360_m34160_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4714_0_0_0;
extern Il2CppType InternalEnumerator_1_t4714_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4714_GenericClass;
TypeInfo InternalEnumerator_1_t4714_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4714_MethodInfos/* methods */
	, InternalEnumerator_1_t4714_PropertyInfos/* properties */
	, InternalEnumerator_1_t4714_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4714_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4714_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4714_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4714_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4714_1_0_0/* this_arg */
	, InternalEnumerator_1_t4714_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4714_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4714_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4714)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8549_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>
extern MethodInfo IList_1_get_Item_m44415_MethodInfo;
extern MethodInfo IList_1_set_Item_m44416_MethodInfo;
static PropertyInfo IList_1_t8549____Item_PropertyInfo = 
{
	&IList_1_t8549_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44415_MethodInfo/* get */
	, &IList_1_set_Item_m44416_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8549_PropertyInfos[] =
{
	&IList_1_t8549____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2360_0_0_0;
static ParameterInfo IList_1_t8549_IList_1_IndexOf_m44417_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2360_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44417_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44417_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8549_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8549_IList_1_IndexOf_m44417_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44417_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IComparable_1_t2360_0_0_0;
static ParameterInfo IList_1_t8549_IList_1_Insert_m44418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2360_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44418_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44418_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8549_IList_1_Insert_m44418_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44418_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8549_IList_1_RemoveAt_m44419_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44419_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44419_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8549_IList_1_RemoveAt_m44419_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44419_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8549_IList_1_get_Item_m44415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IComparable_1_t2360_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44415_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44415_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8549_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2360_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8549_IList_1_get_Item_m44415_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44415_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IComparable_1_t2360_0_0_0;
static ParameterInfo IList_1_t8549_IList_1_set_Item_m44416_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2360_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44416_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44416_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8549_IList_1_set_Item_m44416_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44416_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8549_MethodInfos[] =
{
	&IList_1_IndexOf_m44417_MethodInfo,
	&IList_1_Insert_m44418_MethodInfo,
	&IList_1_RemoveAt_m44419_MethodInfo,
	&IList_1_get_Item_m44415_MethodInfo,
	&IList_1_set_Item_m44416_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8549_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8548_il2cpp_TypeInfo,
	&IEnumerable_1_t8550_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8549_0_0_0;
extern Il2CppType IList_1_t8549_1_0_0;
struct IList_1_t8549;
extern Il2CppGenericClass IList_1_t8549_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8549_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8549_MethodInfos/* methods */
	, IList_1_t8549_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8549_il2cpp_TypeInfo/* element_class */
	, IList_1_t8549_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8549_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8549_0_0_0/* byval_arg */
	, &IList_1_t8549_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8549_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8551_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>
extern MethodInfo ICollection_1_get_Count_m44420_MethodInfo;
static PropertyInfo ICollection_1_t8551____Count_PropertyInfo = 
{
	&ICollection_1_t8551_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44420_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44421_MethodInfo;
static PropertyInfo ICollection_1_t8551____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8551_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44421_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8551_PropertyInfos[] =
{
	&ICollection_1_t8551____Count_PropertyInfo,
	&ICollection_1_t8551____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44420_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_Count()
MethodInfo ICollection_1_get_Count_m44420_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44420_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44421_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44421_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44421_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2361_0_0_0;
extern Il2CppType IEquatable_1_t2361_0_0_0;
static ParameterInfo ICollection_1_t8551_ICollection_1_Add_m44422_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2361_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44422_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Add(T)
MethodInfo ICollection_1_Add_m44422_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8551_ICollection_1_Add_m44422_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44422_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44423_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Clear()
MethodInfo ICollection_1_Clear_m44423_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44423_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2361_0_0_0;
static ParameterInfo ICollection_1_t8551_ICollection_1_Contains_m44424_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2361_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44424_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Contains(T)
MethodInfo ICollection_1_Contains_m44424_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8551_ICollection_1_Contains_m44424_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44424_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t5003_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t5003_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8551_ICollection_1_CopyTo_m44425_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t5003_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44425_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44425_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8551_ICollection_1_CopyTo_m44425_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44425_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2361_0_0_0;
static ParameterInfo ICollection_1_t8551_ICollection_1_Remove_m44426_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2361_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44426_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Remove(T)
MethodInfo ICollection_1_Remove_m44426_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8551_ICollection_1_Remove_m44426_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44426_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8551_MethodInfos[] =
{
	&ICollection_1_get_Count_m44420_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44421_MethodInfo,
	&ICollection_1_Add_m44422_MethodInfo,
	&ICollection_1_Clear_m44423_MethodInfo,
	&ICollection_1_Contains_m44424_MethodInfo,
	&ICollection_1_CopyTo_m44425_MethodInfo,
	&ICollection_1_Remove_m44426_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8553_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8551_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8553_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8551_0_0_0;
extern Il2CppType ICollection_1_t8551_1_0_0;
struct ICollection_1_t8551;
extern Il2CppGenericClass ICollection_1_t8551_GenericClass;
TypeInfo ICollection_1_t8551_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8551_MethodInfos/* methods */
	, ICollection_1_t8551_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8551_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8551_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8551_0_0_0/* byval_arg */
	, &ICollection_1_t8551_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8551_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int16>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int16>>
extern Il2CppType IEnumerator_1_t6642_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44427_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int16>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44427_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8553_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6642_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44427_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8553_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44427_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8553_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8553_0_0_0;
extern Il2CppType IEnumerable_1_t8553_1_0_0;
struct IEnumerable_1_t8553;
extern Il2CppGenericClass IEnumerable_1_t8553_GenericClass;
TypeInfo IEnumerable_1_t8553_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8553_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8553_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8553_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8553_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8553_0_0_0/* byval_arg */
	, &IEnumerable_1_t8553_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8553_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6642_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int16>>
extern MethodInfo IEnumerator_1_get_Current_m44428_MethodInfo;
static PropertyInfo IEnumerator_1_t6642____Current_PropertyInfo = 
{
	&IEnumerator_1_t6642_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44428_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6642_PropertyInfos[] =
{
	&IEnumerator_1_t6642____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2361_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44428_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44428_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6642_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2361_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44428_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6642_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44428_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6642_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6642_0_0_0;
extern Il2CppType IEnumerator_1_t6642_1_0_0;
struct IEnumerator_1_t6642;
extern Il2CppGenericClass IEnumerator_1_t6642_GenericClass;
TypeInfo IEnumerator_1_t6642_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6642_MethodInfos/* methods */
	, IEnumerator_1_t6642_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6642_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6642_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6642_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6642_0_0_0/* byval_arg */
	, &IEnumerator_1_t6642_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6642_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEquatable_1_t2361_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Int16>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Int16>
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo IEquatable_1_t2361_IEquatable_1_Equals_m44429_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Int16_t754 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m44429_GenericMethod;
// System.Boolean System.IEquatable`1<System.Int16>::Equals(T)
MethodInfo IEquatable_1_Equals_m44429_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Int16_t754/* invoker_method */
	, IEquatable_1_t2361_IEquatable_1_Equals_m44429_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m44429_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2361_MethodInfos[] =
{
	&IEquatable_1_Equals_m44429_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2361_1_0_0;
struct IEquatable_1_t2361;
extern Il2CppGenericClass IEquatable_1_t2361_GenericClass;
TypeInfo IEquatable_1_t2361_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2361_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2361_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2361_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2361_0_0_0/* byval_arg */
	, &IEquatable_1_t2361_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2361_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_556.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4715_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_556MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m25808_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2361_m34171_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2361_m34171(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4715____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4715, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4715____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4715, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4715_FieldInfos[] =
{
	&InternalEnumerator_1_t4715____array_0_FieldInfo,
	&InternalEnumerator_1_t4715____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25805_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4715____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4715_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25805_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4715____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4715_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25808_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4715_PropertyInfos[] =
{
	&InternalEnumerator_1_t4715____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4715____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4715_InternalEnumerator_1__ctor_m25804_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25804_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25804_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4715_InternalEnumerator_1__ctor_m25804_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25804_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25805_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25805_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25805_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25806_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25806_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25806_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25807_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25807_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25807_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2361_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25808_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25808_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2361_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25808_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4715_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25804_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25805_MethodInfo,
	&InternalEnumerator_1_Dispose_m25806_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25807_MethodInfo,
	&InternalEnumerator_1_get_Current_m25808_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25807_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25806_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4715_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25805_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25807_MethodInfo,
	&InternalEnumerator_1_Dispose_m25806_MethodInfo,
	&InternalEnumerator_1_get_Current_m25808_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4715_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6642_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4715_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6642_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2361_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4715_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25808_MethodInfo/* Method Usage */,
	&IEquatable_1_t2361_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2361_m34171_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4715_0_0_0;
extern Il2CppType InternalEnumerator_1_t4715_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4715_GenericClass;
TypeInfo InternalEnumerator_1_t4715_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4715_MethodInfos/* methods */
	, InternalEnumerator_1_t4715_PropertyInfos/* properties */
	, InternalEnumerator_1_t4715_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4715_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4715_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4715_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4715_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4715_1_0_0/* this_arg */
	, InternalEnumerator_1_t4715_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4715_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4715_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4715)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8552_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>
extern MethodInfo IList_1_get_Item_m44430_MethodInfo;
extern MethodInfo IList_1_set_Item_m44431_MethodInfo;
static PropertyInfo IList_1_t8552____Item_PropertyInfo = 
{
	&IList_1_t8552_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44430_MethodInfo/* get */
	, &IList_1_set_Item_m44431_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8552_PropertyInfos[] =
{
	&IList_1_t8552____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2361_0_0_0;
static ParameterInfo IList_1_t8552_IList_1_IndexOf_m44432_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2361_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44432_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44432_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8552_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8552_IList_1_IndexOf_m44432_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44432_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IEquatable_1_t2361_0_0_0;
static ParameterInfo IList_1_t8552_IList_1_Insert_m44433_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2361_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44433_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44433_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8552_IList_1_Insert_m44433_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44433_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8552_IList_1_RemoveAt_m44434_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44434_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44434_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8552_IList_1_RemoveAt_m44434_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44434_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8552_IList_1_get_Item_m44430_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType IEquatable_1_t2361_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44430_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44430_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8552_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2361_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8552_IList_1_get_Item_m44430_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44430_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType IEquatable_1_t2361_0_0_0;
static ParameterInfo IList_1_t8552_IList_1_set_Item_m44431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2361_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44431_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44431_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8552_IList_1_set_Item_m44431_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44431_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8552_MethodInfos[] =
{
	&IList_1_IndexOf_m44432_MethodInfo,
	&IList_1_Insert_m44433_MethodInfo,
	&IList_1_RemoveAt_m44434_MethodInfo,
	&IList_1_get_Item_m44430_MethodInfo,
	&IList_1_set_Item_m44431_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8552_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8551_il2cpp_TypeInfo,
	&IEnumerable_1_t8553_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8552_0_0_0;
extern Il2CppType IList_1_t8552_1_0_0;
struct IList_1_t8552;
extern Il2CppGenericClass IList_1_t8552_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8552_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8552_MethodInfos/* methods */
	, IList_1_t8552_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8552_il2cpp_TypeInfo/* element_class */
	, IList_1_t8552_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8552_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8552_0_0_0/* byval_arg */
	, &IList_1_t8552_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8552_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IComparable_1_t2387_il2cpp_TypeInfo;

// System.Decimal
#include "mscorlib_System_Decimal.h"


// System.Int32 System.IComparable`1<System.Decimal>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Decimal>
extern Il2CppType Decimal_t5_0_0_0;
extern Il2CppType Decimal_t5_0_0_0;
static ParameterInfo IComparable_1_t2387_IComparable_1_CompareTo_m44435_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t5_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m44435_GenericMethod;
// System.Int32 System.IComparable`1<System.Decimal>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m44435_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2387_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Decimal_t5/* invoker_method */
	, IComparable_1_t2387_IComparable_1_CompareTo_m44435_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m44435_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2387_MethodInfos[] =
{
	&IComparable_1_CompareTo_m44435_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2387_0_0_0;
extern Il2CppType IComparable_1_t2387_1_0_0;
struct IComparable_1_t2387;
extern Il2CppGenericClass IComparable_1_t2387_GenericClass;
TypeInfo IComparable_1_t2387_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2387_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2387_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2387_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2387_0_0_0/* byval_arg */
	, &IComparable_1_t2387_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2387_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2388_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Decimal>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Decimal>
extern Il2CppType Decimal_t5_0_0_0;
static ParameterInfo IEquatable_1_t2388_IEquatable_1_Equals_m44436_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t5_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Decimal_t5 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m44436_GenericMethod;
// System.Boolean System.IEquatable`1<System.Decimal>::Equals(T)
MethodInfo IEquatable_1_Equals_m44436_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2388_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Decimal_t5/* invoker_method */
	, IEquatable_1_t2388_IEquatable_1_Equals_m44436_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m44436_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2388_MethodInfos[] =
{
	&IEquatable_1_Equals_m44436_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2388_0_0_0;
extern Il2CppType IEquatable_1_t2388_1_0_0;
struct IEquatable_1_t2388;
extern Il2CppGenericClass IEquatable_1_t2388_GenericClass;
TypeInfo IEquatable_1_t2388_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2388_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2388_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2388_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2388_0_0_0/* byval_arg */
	, &IEquatable_1_t2388_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2388_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6644_il2cpp_TypeInfo;

// System.UIntPtr
#include "mscorlib_System_UIntPtr.h"


// T System.Collections.Generic.IEnumerator`1<System.UIntPtr>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UIntPtr>
extern MethodInfo IEnumerator_1_get_Current_m44437_MethodInfo;
static PropertyInfo IEnumerator_1_t6644____Current_PropertyInfo = 
{
	&IEnumerator_1_t6644_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44437_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6644_PropertyInfos[] =
{
	&IEnumerator_1_t6644____Current_PropertyInfo,
	NULL
};
extern Il2CppType UIntPtr_t1752_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t1752 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44437_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UIntPtr>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44437_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6644_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t1752_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t1752/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m44437_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6644_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44437_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6644_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6644_0_0_0;
extern Il2CppType IEnumerator_1_t6644_1_0_0;
struct IEnumerator_1_t6644;
extern Il2CppGenericClass IEnumerator_1_t6644_GenericClass;
TypeInfo IEnumerator_1_t6644_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6644_MethodInfos/* methods */
	, IEnumerator_1_t6644_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6644_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6644_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6644_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6644_0_0_0/* byval_arg */
	, &IEnumerator_1_t6644_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6644_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.UIntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_557.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4716_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UIntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_557MethodDeclarations.h"

extern TypeInfo UIntPtr_t1752_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25813_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUIntPtr_t1752_m34182_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UIntPtr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UIntPtr>(System.Int32)
 UIntPtr_t1752  Array_InternalArray__get_Item_TisUIntPtr_t1752_m34182 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25809_MethodInfo;
 void InternalEnumerator_1__ctor_m25809 (InternalEnumerator_1_t4716 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810 (InternalEnumerator_1_t4716 * __this, MethodInfo* method){
	{
		UIntPtr_t1752  L_0 = InternalEnumerator_1_get_Current_m25813(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25813_MethodInfo);
		UIntPtr_t1752  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UIntPtr_t1752_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25811_MethodInfo;
 void InternalEnumerator_1_Dispose_m25811 (InternalEnumerator_1_t4716 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UIntPtr>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25812_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25812 (InternalEnumerator_1_t4716 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UIntPtr>::get_Current()
 UIntPtr_t1752  InternalEnumerator_1_get_Current_m25813 (InternalEnumerator_1_t4716 * __this, MethodInfo* method){
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
		UIntPtr_t1752  L_8 = Array_InternalArray__get_Item_TisUIntPtr_t1752_m34182(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUIntPtr_t1752_m34182_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UIntPtr>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4716____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4716, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4716____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4716, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4716_FieldInfos[] =
{
	&InternalEnumerator_1_t4716____array_0_FieldInfo,
	&InternalEnumerator_1_t4716____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t4716____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4716_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4716____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4716_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25813_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4716_PropertyInfos[] =
{
	&InternalEnumerator_1_t4716____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4716____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4716_InternalEnumerator_1__ctor_m25809_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25809_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25809_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25809/* method */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4716_InternalEnumerator_1__ctor_m25809_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25809_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810/* method */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25811_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25811_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25811/* method */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25811_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25812_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UIntPtr>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25812_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25812/* method */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25812_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t1752_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t1752 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25813_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UIntPtr>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25813_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25813/* method */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t1752_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t1752/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25813_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4716_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25809_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810_MethodInfo,
	&InternalEnumerator_1_Dispose_m25811_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25812_MethodInfo,
	&InternalEnumerator_1_get_Current_m25813_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t4716_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25810_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25812_MethodInfo,
	&InternalEnumerator_1_Dispose_m25811_MethodInfo,
	&InternalEnumerator_1_get_Current_m25813_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4716_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6644_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4716_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6644_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4716_0_0_0;
extern Il2CppType InternalEnumerator_1_t4716_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4716_GenericClass;
TypeInfo InternalEnumerator_1_t4716_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4716_MethodInfos/* methods */
	, InternalEnumerator_1_t4716_PropertyInfos/* properties */
	, InternalEnumerator_1_t4716_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4716_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4716_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4716_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4716_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4716_1_0_0/* this_arg */
	, InternalEnumerator_1_t4716_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4716_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4716)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8554_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UIntPtr>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UIntPtr>
extern MethodInfo ICollection_1_get_Count_m44438_MethodInfo;
static PropertyInfo ICollection_1_t8554____Count_PropertyInfo = 
{
	&ICollection_1_t8554_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44438_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44439_MethodInfo;
static PropertyInfo ICollection_1_t8554____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8554_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44439_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8554_PropertyInfos[] =
{
	&ICollection_1_t8554____Count_PropertyInfo,
	&ICollection_1_t8554____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44438_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UIntPtr>::get_Count()
MethodInfo ICollection_1_get_Count_m44438_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44438_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44439_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44439_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44439_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t1752_0_0_0;
extern Il2CppType UIntPtr_t1752_0_0_0;
static ParameterInfo ICollection_1_t8554_ICollection_1_Add_m44440_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1752_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44440_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Add(T)
MethodInfo ICollection_1_Add_m44440_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_IntPtr_t120/* invoker_method */
	, ICollection_1_t8554_ICollection_1_Add_m44440_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44440_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44441_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Clear()
MethodInfo ICollection_1_Clear_m44441_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44441_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t1752_0_0_0;
static ParameterInfo ICollection_1_t8554_ICollection_1_Contains_m44442_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1752_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44442_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Contains(T)
MethodInfo ICollection_1_Contains_m44442_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_IntPtr_t120/* invoker_method */
	, ICollection_1_t8554_ICollection_1_Contains_m44442_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44442_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtrU5BU5D_t5005_0_0_0;
extern Il2CppType UIntPtrU5BU5D_t5005_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8554_ICollection_1_CopyTo_m44443_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtrU5BU5D_t5005_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44443_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44443_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8554_ICollection_1_CopyTo_m44443_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44443_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t1752_0_0_0;
static ParameterInfo ICollection_1_t8554_ICollection_1_Remove_m44444_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1752_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44444_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Remove(T)
MethodInfo ICollection_1_Remove_m44444_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_IntPtr_t120/* invoker_method */
	, ICollection_1_t8554_ICollection_1_Remove_m44444_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44444_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8554_MethodInfos[] =
{
	&ICollection_1_get_Count_m44438_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44439_MethodInfo,
	&ICollection_1_Add_m44440_MethodInfo,
	&ICollection_1_Clear_m44441_MethodInfo,
	&ICollection_1_Contains_m44442_MethodInfo,
	&ICollection_1_CopyTo_m44443_MethodInfo,
	&ICollection_1_Remove_m44444_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8556_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8554_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8556_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8554_0_0_0;
extern Il2CppType ICollection_1_t8554_1_0_0;
struct ICollection_1_t8554;
extern Il2CppGenericClass ICollection_1_t8554_GenericClass;
TypeInfo ICollection_1_t8554_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8554_MethodInfos/* methods */
	, ICollection_1_t8554_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8554_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8554_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8554_0_0_0/* byval_arg */
	, &ICollection_1_t8554_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8554_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UIntPtr>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UIntPtr>
extern Il2CppType IEnumerator_1_t6644_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44445_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UIntPtr>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44445_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8556_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6644_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44445_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8556_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44445_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8556_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8556_0_0_0;
extern Il2CppType IEnumerable_1_t8556_1_0_0;
struct IEnumerable_1_t8556;
extern Il2CppGenericClass IEnumerable_1_t8556_GenericClass;
TypeInfo IEnumerable_1_t8556_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8556_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8556_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8556_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8556_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8556_0_0_0/* byval_arg */
	, &IEnumerable_1_t8556_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8556_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8555_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UIntPtr>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UIntPtr>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UIntPtr>
extern MethodInfo IList_1_get_Item_m44446_MethodInfo;
extern MethodInfo IList_1_set_Item_m44447_MethodInfo;
static PropertyInfo IList_1_t8555____Item_PropertyInfo = 
{
	&IList_1_t8555_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44446_MethodInfo/* get */
	, &IList_1_set_Item_m44447_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8555_PropertyInfos[] =
{
	&IList_1_t8555____Item_PropertyInfo,
	NULL
};
extern Il2CppType UIntPtr_t1752_0_0_0;
static ParameterInfo IList_1_t8555_IList_1_IndexOf_m44448_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1752_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44448_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UIntPtr>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44448_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8555_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_IntPtr_t120/* invoker_method */
	, IList_1_t8555_IList_1_IndexOf_m44448_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44448_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType UIntPtr_t1752_0_0_0;
static ParameterInfo IList_1_t8555_IList_1_Insert_m44449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1752_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44449_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44449_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_IntPtr_t120/* invoker_method */
	, IList_1_t8555_IList_1_Insert_m44449_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44449_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8555_IList_1_RemoveAt_m44450_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44450_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44450_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8555_IList_1_RemoveAt_m44450_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44450_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8555_IList_1_get_Item_m44446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType UIntPtr_t1752_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t1752_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44446_GenericMethod;
// T System.Collections.Generic.IList`1<System.UIntPtr>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44446_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8555_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t1752_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t1752_Int32_t73/* invoker_method */
	, IList_1_t8555_IList_1_get_Item_m44446_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44446_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType UIntPtr_t1752_0_0_0;
static ParameterInfo IList_1_t8555_IList_1_set_Item_m44447_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1752_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44447_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44447_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_IntPtr_t120/* invoker_method */
	, IList_1_t8555_IList_1_set_Item_m44447_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44447_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8555_MethodInfos[] =
{
	&IList_1_IndexOf_m44448_MethodInfo,
	&IList_1_Insert_m44449_MethodInfo,
	&IList_1_RemoveAt_m44450_MethodInfo,
	&IList_1_get_Item_m44446_MethodInfo,
	&IList_1_set_Item_m44447_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8555_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8554_il2cpp_TypeInfo,
	&IEnumerable_1_t8556_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8555_0_0_0;
extern Il2CppType IList_1_t8555_1_0_0;
struct IList_1_t8555;
extern Il2CppGenericClass IList_1_t8555_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8555_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8555_MethodInfos/* methods */
	, IList_1_t8555_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8555_il2cpp_TypeInfo/* element_class */
	, IList_1_t8555_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8555_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8555_0_0_0/* byval_arg */
	, &IList_1_t8555_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8555_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6646_il2cpp_TypeInfo;

// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44451_MethodInfo;
static PropertyInfo IEnumerator_1_t6646____Current_PropertyInfo = 
{
	&IEnumerator_1_t6646_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44451_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6646_PropertyInfos[] =
{
	&IEnumerator_1_t6646____Current_PropertyInfo,
	NULL
};
extern Il2CppType FlagsAttribute_t307_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44451_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44451_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6646_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t307_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44451_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6646_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44451_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6646_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6646_0_0_0;
extern Il2CppType IEnumerator_1_t6646_1_0_0;
struct IEnumerator_1_t6646;
extern Il2CppGenericClass IEnumerator_1_t6646_GenericClass;
TypeInfo IEnumerator_1_t6646_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6646_MethodInfos/* methods */
	, IEnumerator_1_t6646_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6646_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6646_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6646_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6646_0_0_0/* byval_arg */
	, &IEnumerator_1_t6646_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6646_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.FlagsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_558.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4717_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.FlagsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_558MethodDeclarations.h"

extern TypeInfo FlagsAttribute_t307_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25818_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFlagsAttribute_t307_m34193_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.FlagsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.FlagsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisFlagsAttribute_t307_m34193(__this, p0, method) (FlagsAttribute_t307 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.FlagsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.FlagsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.FlagsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4717____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4717, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4717____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4717, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4717_FieldInfos[] =
{
	&InternalEnumerator_1_t4717____array_0_FieldInfo,
	&InternalEnumerator_1_t4717____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25815_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4717____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4717_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25815_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4717____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4717_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25818_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4717_PropertyInfos[] =
{
	&InternalEnumerator_1_t4717____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4717____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4717_InternalEnumerator_1__ctor_m25814_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25814_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25814_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4717_InternalEnumerator_1__ctor_m25814_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25814_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25815_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25815_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25815_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25816_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25816_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25816_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25817_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.FlagsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25817_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25817_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t307_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25818_GenericMethod;
// T System.Array/InternalEnumerator`1<System.FlagsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25818_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t307_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25818_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4717_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25814_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25815_MethodInfo,
	&InternalEnumerator_1_Dispose_m25816_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25817_MethodInfo,
	&InternalEnumerator_1_get_Current_m25818_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25817_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25816_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4717_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25815_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25817_MethodInfo,
	&InternalEnumerator_1_Dispose_m25816_MethodInfo,
	&InternalEnumerator_1_get_Current_m25818_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4717_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6646_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4717_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6646_il2cpp_TypeInfo, 7},
};
extern TypeInfo FlagsAttribute_t307_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4717_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25818_MethodInfo/* Method Usage */,
	&FlagsAttribute_t307_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisFlagsAttribute_t307_m34193_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4717_0_0_0;
extern Il2CppType InternalEnumerator_1_t4717_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4717_GenericClass;
TypeInfo InternalEnumerator_1_t4717_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4717_MethodInfos/* methods */
	, InternalEnumerator_1_t4717_PropertyInfos/* properties */
	, InternalEnumerator_1_t4717_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4717_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4717_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4717_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4717_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4717_1_0_0/* this_arg */
	, InternalEnumerator_1_t4717_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4717_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4717_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4717)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8557_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.FlagsAttribute>
extern MethodInfo ICollection_1_get_Count_m44452_MethodInfo;
static PropertyInfo ICollection_1_t8557____Count_PropertyInfo = 
{
	&ICollection_1_t8557_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44452_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44453_MethodInfo;
static PropertyInfo ICollection_1_t8557____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8557_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44453_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8557_PropertyInfos[] =
{
	&ICollection_1_t8557____Count_PropertyInfo,
	&ICollection_1_t8557____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44452_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m44452_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44452_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44453_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44453_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44453_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t307_0_0_0;
extern Il2CppType FlagsAttribute_t307_0_0_0;
static ParameterInfo ICollection_1_t8557_ICollection_1_Add_m44454_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t307_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44454_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m44454_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8557_ICollection_1_Add_m44454_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44454_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44455_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m44455_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44455_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t307_0_0_0;
static ParameterInfo ICollection_1_t8557_ICollection_1_Contains_m44456_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t307_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44456_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m44456_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8557_ICollection_1_Contains_m44456_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44456_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttributeU5BU5D_t5006_0_0_0;
extern Il2CppType FlagsAttributeU5BU5D_t5006_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8557_ICollection_1_CopyTo_m44457_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttributeU5BU5D_t5006_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44457_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44457_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8557_ICollection_1_CopyTo_m44457_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44457_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t307_0_0_0;
static ParameterInfo ICollection_1_t8557_ICollection_1_Remove_m44458_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t307_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44458_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m44458_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8557_ICollection_1_Remove_m44458_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44458_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8557_MethodInfos[] =
{
	&ICollection_1_get_Count_m44452_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44453_MethodInfo,
	&ICollection_1_Add_m44454_MethodInfo,
	&ICollection_1_Clear_m44455_MethodInfo,
	&ICollection_1_Contains_m44456_MethodInfo,
	&ICollection_1_CopyTo_m44457_MethodInfo,
	&ICollection_1_Remove_m44458_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8559_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8557_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8559_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8557_0_0_0;
extern Il2CppType ICollection_1_t8557_1_0_0;
struct ICollection_1_t8557;
extern Il2CppGenericClass ICollection_1_t8557_GenericClass;
TypeInfo ICollection_1_t8557_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8557_MethodInfos/* methods */
	, ICollection_1_t8557_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8557_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8557_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8557_0_0_0/* byval_arg */
	, &ICollection_1_t8557_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8557_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>
extern Il2CppType IEnumerator_1_t6646_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44459_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44459_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8559_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6646_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44459_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8559_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44459_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8559_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8559_0_0_0;
extern Il2CppType IEnumerable_1_t8559_1_0_0;
struct IEnumerable_1_t8559;
extern Il2CppGenericClass IEnumerable_1_t8559_GenericClass;
TypeInfo IEnumerable_1_t8559_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8559_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8559_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8559_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8559_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8559_0_0_0/* byval_arg */
	, &IEnumerable_1_t8559_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8559_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8558_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.FlagsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.FlagsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.FlagsAttribute>
extern MethodInfo IList_1_get_Item_m44460_MethodInfo;
extern MethodInfo IList_1_set_Item_m44461_MethodInfo;
static PropertyInfo IList_1_t8558____Item_PropertyInfo = 
{
	&IList_1_t8558_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44460_MethodInfo/* get */
	, &IList_1_set_Item_m44461_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8558_PropertyInfos[] =
{
	&IList_1_t8558____Item_PropertyInfo,
	NULL
};
extern Il2CppType FlagsAttribute_t307_0_0_0;
static ParameterInfo IList_1_t8558_IList_1_IndexOf_m44462_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t307_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44462_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.FlagsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44462_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8558_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8558_IList_1_IndexOf_m44462_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44462_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FlagsAttribute_t307_0_0_0;
static ParameterInfo IList_1_t8558_IList_1_Insert_m44463_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t307_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44463_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44463_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8558_IList_1_Insert_m44463_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44463_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8558_IList_1_RemoveAt_m44464_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44464_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44464_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8558_IList_1_RemoveAt_m44464_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44464_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8558_IList_1_get_Item_m44460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType FlagsAttribute_t307_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44460_GenericMethod;
// T System.Collections.Generic.IList`1<System.FlagsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44460_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8558_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t307_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8558_IList_1_get_Item_m44460_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44460_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType FlagsAttribute_t307_0_0_0;
static ParameterInfo IList_1_t8558_IList_1_set_Item_m44461_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t307_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44461_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44461_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8558_IList_1_set_Item_m44461_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44461_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8558_MethodInfos[] =
{
	&IList_1_IndexOf_m44462_MethodInfo,
	&IList_1_Insert_m44463_MethodInfo,
	&IList_1_RemoveAt_m44464_MethodInfo,
	&IList_1_get_Item_m44460_MethodInfo,
	&IList_1_set_Item_m44461_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8558_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8557_il2cpp_TypeInfo,
	&IEnumerable_1_t8559_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8558_0_0_0;
extern Il2CppType IList_1_t8558_1_0_0;
struct IList_1_t8558;
extern Il2CppGenericClass IList_1_t8558_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8558_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8558_MethodInfos/* methods */
	, IList_1_t8558_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8558_il2cpp_TypeInfo/* element_class */
	, IList_1_t8558_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8558_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8558_0_0_0/* byval_arg */
	, &IList_1_t8558_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8558_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Converter_2_t4718_il2cpp_TypeInfo;
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Converter_2__ctor_m25819_MethodInfo;
 void Converter_2__ctor_m25819_gshared (Converter_2_t4718 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern MethodInfo Converter_2_Invoke_m25820_MethodInfo;
 Object_t * Converter_2_Invoke_m25820_gshared (Converter_2_t4718 * __this, Object_t * ___input, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m25820((Converter_2_t4718 *)__this->___prev_9,___input, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern MethodInfo Converter_2_BeginInvoke_m25821_MethodInfo;
 Object_t * Converter_2_BeginInvoke_m25821_gshared (Converter_2_t4718 * __this, Object_t * ___input, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern MethodInfo Converter_2_EndInvoke_m25822_MethodInfo;
 Object_t * Converter_2_EndInvoke_m25822_gshared (Converter_2_t4718 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition System.Converter`2<System.Object,System.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo Converter_2_t4718_Converter_2__ctor_m25819_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2__ctor_m25819_GenericMethod;
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo Converter_2__ctor_m25819_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Converter_2__ctor_m25819_gshared/* method */
	, &Converter_2_t4718_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, Converter_2_t4718_Converter_2__ctor_m25819_ParameterInfos/* parameters */
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
	, &Converter_2__ctor_m25819_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Converter_2_t4718_Converter_2_Invoke_m25820_ParameterInfos[] = 
{
	{"input", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_Invoke_m25820_GenericMethod;
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
MethodInfo Converter_2_Invoke_m25820_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Converter_2_Invoke_m25820_gshared/* method */
	, &Converter_2_t4718_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Converter_2_t4718_Converter_2_Invoke_m25820_ParameterInfos/* parameters */
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
	, &Converter_2_Invoke_m25820_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Converter_2_t4718_Converter_2_BeginInvoke_m25821_ParameterInfos[] = 
{
	{"input", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_BeginInvoke_m25821_GenericMethod;
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
MethodInfo Converter_2_BeginInvoke_m25821_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Converter_2_BeginInvoke_m25821_gshared/* method */
	, &Converter_2_t4718_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Converter_2_t4718_Converter_2_BeginInvoke_m25821_ParameterInfos/* parameters */
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
	, &Converter_2_BeginInvoke_m25821_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo Converter_2_t4718_Converter_2_EndInvoke_m25822_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_EndInvoke_m25822_GenericMethod;
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
MethodInfo Converter_2_EndInvoke_m25822_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Converter_2_EndInvoke_m25822_gshared/* method */
	, &Converter_2_t4718_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Converter_2_t4718_Converter_2_EndInvoke_m25822_ParameterInfos/* parameters */
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
	, &Converter_2_EndInvoke_m25822_GenericMethod/* genericMethod */

};
static MethodInfo* Converter_2_t4718_MethodInfos[] =
{
	&Converter_2__ctor_m25819_MethodInfo,
	&Converter_2_Invoke_m25820_MethodInfo,
	&Converter_2_BeginInvoke_m25821_MethodInfo,
	&Converter_2_EndInvoke_m25822_MethodInfo,
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
static MethodInfo* Converter_2_t4718_VTable[] =
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
	&Converter_2_Invoke_m25820_MethodInfo,
	&Converter_2_BeginInvoke_m25821_MethodInfo,
	&Converter_2_EndInvoke_m25822_MethodInfo,
};
extern TypeInfo ICloneable_t755_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t305_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Converter_2_t4718_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Converter_2_t4718_0_0_0;
extern Il2CppType Converter_2_t4718_1_0_0;
extern TypeInfo MulticastDelegate_t608_il2cpp_TypeInfo;
struct Converter_2_t4718;
extern Il2CppGenericClass Converter_2_t4718_GenericClass;
TypeInfo Converter_2_t4718_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t4718_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Converter_2_t4718_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Converter_2_t4718_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Converter_2_t4718_il2cpp_TypeInfo/* cast_class */
	, &Converter_2_t4718_0_0_0/* byval_arg */
	, &Converter_2_t4718_1_0_0/* this_arg */
	, Converter_2_t4718_InterfacesOffsets/* interface_offsets */
	, &Converter_2_t4718_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Converter_2_t4718)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
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
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo;
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3_0.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo ArgumentOutOfRangeException_t1515_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t88_il2cpp_TypeInfo;
extern TypeInfo Void_t72_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t102_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3_0MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo ArgumentOutOfRangeException__ctor_m6483_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_ReadOnlyError_m25838_MethodInfo;
extern MethodInfo Object__ctor_m499_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_GetEnumerator_m25833_MethodInfo;
extern MethodInfo Array_IndexOf_TisObject_t_m12656_MethodInfo;
extern MethodInfo Array_CopyTo_m7716_MethodInfo;
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m25839_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5283_MethodInfo;
struct Array_t;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
 int32_t Array_IndexOf_TisObject_t_m12656_gshared (Object_t * __this/* static, unused */, ObjectU5BU5D_t96* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m12656(__this/* static, unused */, p0, p1, method) (int32_t)Array_IndexOf_TisObject_t_m12656_gshared((Object_t *)__this/* static, unused */, (ObjectU5BU5D_t96*)p0, (Object_t *)p1, method)


// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern MethodInfo ArrayReadOnlyList_1__ctor_m25823_MethodInfo;
 void ArrayReadOnlyList_1__ctor_m25823_gshared (ArrayReadOnlyList_1_t4719 * __this, ObjectU5BU5D_t96* ___array, MethodInfo* method)
{
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		__this->___array_0 = ___array;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25824_MethodInfo;
 Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25824_gshared (ArrayReadOnlyList_1_t4719 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern MethodInfo ArrayReadOnlyList_1_get_Item_m25825_MethodInfo;
 Object_t * ArrayReadOnlyList_1_get_Item_m25825_gshared (ArrayReadOnlyList_1_t4719 * __this, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t96* L_0 = (__this->___array_0);
		NullCheck(L_0);
		if ((((uint32_t)___index) < ((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t1515 * L_1 = (ArgumentOutOfRangeException_t1515 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1515_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m6483(L_1, (String_t*) &_stringLiteral500, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m6483_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ObjectU5BU5D_t96* L_2 = (__this->___array_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ___index);
		int32_t L_3 = ___index;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern MethodInfo ArrayReadOnlyList_1_set_Item_m25826_MethodInfo;
 void ArrayReadOnlyList_1_set_Item_m25826_gshared (ArrayReadOnlyList_1_t4719 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		Exception_t82 * L_0 = (( Exception_t82 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern MethodInfo ArrayReadOnlyList_1_get_Count_m25827_MethodInfo;
 int32_t ArrayReadOnlyList_1_get_Count_m25827_gshared (ArrayReadOnlyList_1_t4719 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t96* L_0 = (__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern MethodInfo ArrayReadOnlyList_1_get_IsReadOnly_m25828_MethodInfo;
 bool ArrayReadOnlyList_1_get_IsReadOnly_m25828_gshared (ArrayReadOnlyList_1_t4719 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern MethodInfo ArrayReadOnlyList_1_Add_m25829_MethodInfo;
 void ArrayReadOnlyList_1_Add_m25829_gshared (ArrayReadOnlyList_1_t4719 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t82 * L_0 = (( Exception_t82 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern MethodInfo ArrayReadOnlyList_1_Clear_m25830_MethodInfo;
 void ArrayReadOnlyList_1_Clear_m25830_gshared (ArrayReadOnlyList_1_t4719 * __this, MethodInfo* method)
{
	{
		Exception_t82 * L_0 = (( Exception_t82 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern MethodInfo ArrayReadOnlyList_1_Contains_m25831_MethodInfo;
 bool ArrayReadOnlyList_1_Contains_m25831_gshared (ArrayReadOnlyList_1_t4719 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t96* L_0 = (__this->___array_0);
		int32_t L_1 = (( int32_t (*) (Object_t * __this/* static, unused */, ObjectU5BU5D_t96* p0, Object_t * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern MethodInfo ArrayReadOnlyList_1_CopyTo_m25832_MethodInfo;
 void ArrayReadOnlyList_1_CopyTo_m25832_gshared (ArrayReadOnlyList_1_t4719 * __this, ObjectU5BU5D_t96* ___array, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t96* L_0 = (__this->___array_0);
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m7716_MethodInfo, L_0, (Array_t *)(Array_t *)___array, ___index);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
 Object_t* ArrayReadOnlyList_1_GetEnumerator_m25833_gshared (ArrayReadOnlyList_1_t4719 * __this, MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t4720 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t4720 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t4720 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t4720 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_3 = __this;
		return V_0;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern MethodInfo ArrayReadOnlyList_1_IndexOf_m25834_MethodInfo;
 int32_t ArrayReadOnlyList_1_IndexOf_m25834_gshared (ArrayReadOnlyList_1_t4719 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t96* L_0 = (__this->___array_0);
		int32_t L_1 = (( int32_t (*) (Object_t * __this/* static, unused */, ObjectU5BU5D_t96* p0, Object_t * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern MethodInfo ArrayReadOnlyList_1_Insert_m25835_MethodInfo;
 void ArrayReadOnlyList_1_Insert_m25835_gshared (ArrayReadOnlyList_1_t4719 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t82 * L_0 = (( Exception_t82 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern MethodInfo ArrayReadOnlyList_1_Remove_m25836_MethodInfo;
 bool ArrayReadOnlyList_1_Remove_m25836_gshared (ArrayReadOnlyList_1_t4719 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t82 * L_0 = (( Exception_t82 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern MethodInfo ArrayReadOnlyList_1_RemoveAt_m25837_MethodInfo;
 void ArrayReadOnlyList_1_RemoveAt_m25837_gshared (ArrayReadOnlyList_1_t4719 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Exception_t82 * L_0 = (( Exception_t82 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
 Exception_t82 * ArrayReadOnlyList_1_ReadOnlyError_m25838_gshared (Object_t * __this/* static, unused */, MethodInfo* method)
{
	{
		NotSupportedException_t102 * L_0 = (NotSupportedException_t102 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t102_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5283(L_0, (String_t*) &_stringLiteral1343, /*hidden argument*/&NotSupportedException__ctor_m5283_MethodInfo);
		return L_0;
	}
}
// Metadata Definition System.Array/ArrayReadOnlyList`1<System.Object>
extern Il2CppType ObjectU5BU5D_t96_0_0_1;
FieldInfo ArrayReadOnlyList_1_t4719____array_0_FieldInfo = 
{
	"array"/* name */
	, &ObjectU5BU5D_t96_0_0_1/* type */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* parent */
	, offsetof(ArrayReadOnlyList_1_t4719, ___array_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ArrayReadOnlyList_1_t4719_FieldInfos[] =
{
	&ArrayReadOnlyList_1_t4719____array_0_FieldInfo,
	NULL
};
static PropertyInfo ArrayReadOnlyList_1_t4719____Item_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ArrayReadOnlyList_1_get_Item_m25825_MethodInfo/* get */
	, &ArrayReadOnlyList_1_set_Item_m25826_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArrayReadOnlyList_1_t4719____Count_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ArrayReadOnlyList_1_get_Count_m25827_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArrayReadOnlyList_1_t4719____IsReadOnly_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ArrayReadOnlyList_1_get_IsReadOnly_m25828_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ArrayReadOnlyList_1_t4719_PropertyInfos[] =
{
	&ArrayReadOnlyList_1_t4719____Item_PropertyInfo,
	&ArrayReadOnlyList_1_t4719____Count_PropertyInfo,
	&ArrayReadOnlyList_1_t4719____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1__ctor_m25823_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1__ctor_m25823_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
MethodInfo ArrayReadOnlyList_1__ctor_m25823_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1__ctor_m25823_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1__ctor_m25823_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1__ctor_m25823_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_t19_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25824_GenericMethod;
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
MethodInfo ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25824_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25824_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t19_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25824_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_get_Item_m25825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Item_m25825_GenericMethod;
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
MethodInfo ArrayReadOnlyList_1_get_Item_m25825_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_Item_m25825_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_get_Item_m25825_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_Item_m25825_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_set_Item_m25826_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_set_Item_m25826_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
MethodInfo ArrayReadOnlyList_1_set_Item_m25826_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_set_Item_m25826_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_set_Item_m25826_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_set_Item_m25826_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Count_m25827_GenericMethod;
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
MethodInfo ArrayReadOnlyList_1_get_Count_m25827_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_Count_m25827_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_Count_m25827_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_IsReadOnly_m25828_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
MethodInfo ArrayReadOnlyList_1_get_IsReadOnly_m25828_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_IsReadOnly_m25828_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_IsReadOnly_m25828_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_Add_m25829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Add_m25829_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
MethodInfo ArrayReadOnlyList_1_Add_m25829_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Add_m25829_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_Add_m25829_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Add_m25829_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Clear_m25830_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
MethodInfo ArrayReadOnlyList_1_Clear_m25830_MethodInfo = 
{
	"Clear"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Clear_m25830_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Clear_m25830_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_Contains_m25831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Contains_m25831_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
MethodInfo ArrayReadOnlyList_1_Contains_m25831_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Contains_m25831_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_Contains_m25831_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Contains_m25831_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t96_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_CopyTo_m25832_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t96_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_CopyTo_m25832_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
MethodInfo ArrayReadOnlyList_1_CopyTo_m25832_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_CopyTo_m25832_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_CopyTo_m25832_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_CopyTo_m25832_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_1_t88_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache ArrayReadOnlyList_1_t1758__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m12194;
extern Il2CppGenericMethod ArrayReadOnlyList_1_GetEnumerator_m25833_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
MethodInfo ArrayReadOnlyList_1_GetEnumerator_m25833_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_GetEnumerator_m25833_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t88_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &ArrayReadOnlyList_1_t1758__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m12194/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_GetEnumerator_m25833_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_IndexOf_m25834_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_IndexOf_m25834_GenericMethod;
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
MethodInfo ArrayReadOnlyList_1_IndexOf_m25834_MethodInfo = 
{
	"IndexOf"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_IndexOf_m25834_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_IndexOf_m25834_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_IndexOf_m25834_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_Insert_m25835_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Insert_m25835_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
MethodInfo ArrayReadOnlyList_1_Insert_m25835_MethodInfo = 
{
	"Insert"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Insert_m25835_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_Insert_m25835_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Insert_m25835_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_Remove_m25836_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Remove_m25836_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
MethodInfo ArrayReadOnlyList_1_Remove_m25836_MethodInfo = 
{
	"Remove"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Remove_m25836_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_Remove_m25836_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Remove_m25836_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_RemoveAt_m25837_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_RemoveAt_m25837_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
MethodInfo ArrayReadOnlyList_1_RemoveAt_m25837_MethodInfo = 
{
	"RemoveAt"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_RemoveAt_m25837_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, ArrayReadOnlyList_1_t4719_ArrayReadOnlyList_1_RemoveAt_m25837_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_RemoveAt_m25837_GenericMethod/* genericMethod */

};
extern Il2CppType Exception_t82_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_ReadOnlyError_m25838_GenericMethod;
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
MethodInfo ArrayReadOnlyList_1_ReadOnlyError_m25838_MethodInfo = 
{
	"ReadOnlyError"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_ReadOnlyError_m25838_gshared/* method */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* declaring_type */
	, &Exception_t82_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_ReadOnlyError_m25838_GenericMethod/* genericMethod */

};
static MethodInfo* ArrayReadOnlyList_1_t4719_MethodInfos[] =
{
	&ArrayReadOnlyList_1__ctor_m25823_MethodInfo,
	&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25824_MethodInfo,
	&ArrayReadOnlyList_1_get_Item_m25825_MethodInfo,
	&ArrayReadOnlyList_1_set_Item_m25826_MethodInfo,
	&ArrayReadOnlyList_1_get_Count_m25827_MethodInfo,
	&ArrayReadOnlyList_1_get_IsReadOnly_m25828_MethodInfo,
	&ArrayReadOnlyList_1_Add_m25829_MethodInfo,
	&ArrayReadOnlyList_1_Clear_m25830_MethodInfo,
	&ArrayReadOnlyList_1_Contains_m25831_MethodInfo,
	&ArrayReadOnlyList_1_CopyTo_m25832_MethodInfo,
	&ArrayReadOnlyList_1_GetEnumerator_m25833_MethodInfo,
	&ArrayReadOnlyList_1_IndexOf_m25834_MethodInfo,
	&ArrayReadOnlyList_1_Insert_m25835_MethodInfo,
	&ArrayReadOnlyList_1_Remove_m25836_MethodInfo,
	&ArrayReadOnlyList_1_RemoveAt_m25837_MethodInfo,
	&ArrayReadOnlyList_1_ReadOnlyError_m25838_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m517_MethodInfo;
extern MethodInfo Object_GetHashCode_m518_MethodInfo;
static MethodInfo* ArrayReadOnlyList_1_t4719_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m25824_MethodInfo,
	&ArrayReadOnlyList_1_IndexOf_m25834_MethodInfo,
	&ArrayReadOnlyList_1_Insert_m25835_MethodInfo,
	&ArrayReadOnlyList_1_RemoveAt_m25837_MethodInfo,
	&ArrayReadOnlyList_1_get_Item_m25825_MethodInfo,
	&ArrayReadOnlyList_1_set_Item_m25826_MethodInfo,
	&ArrayReadOnlyList_1_get_Count_m25827_MethodInfo,
	&ArrayReadOnlyList_1_get_IsReadOnly_m25828_MethodInfo,
	&ArrayReadOnlyList_1_Add_m25829_MethodInfo,
	&ArrayReadOnlyList_1_Clear_m25830_MethodInfo,
	&ArrayReadOnlyList_1_Contains_m25831_MethodInfo,
	&ArrayReadOnlyList_1_CopyTo_m25832_MethodInfo,
	&ArrayReadOnlyList_1_Remove_m25836_MethodInfo,
	&ArrayReadOnlyList_1_GetEnumerator_m25833_MethodInfo,
};
extern TypeInfo IList_1_t86_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t124_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t87_il2cpp_TypeInfo;
static TypeInfo* ArrayReadOnlyList_1_t4719_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IList_1_t86_il2cpp_TypeInfo,
	&ICollection_1_t124_il2cpp_TypeInfo,
	&IEnumerable_1_t87_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair ArrayReadOnlyList_1_t4719_InterfacesOffsets[] = 
{
	{ &IEnumerable_t103_il2cpp_TypeInfo, 4},
	{ &IList_1_t86_il2cpp_TypeInfo, 5},
	{ &ICollection_1_t124_il2cpp_TypeInfo, 10},
	{ &IEnumerable_1_t87_il2cpp_TypeInfo, 17},
};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo;
static Il2CppRGCTXData ArrayReadOnlyList_1_t4719_RGCTXData[5] = 
{
	&ArrayReadOnlyList_1_GetEnumerator_m25833_MethodInfo/* Method Usage */,
	&ArrayReadOnlyList_1_ReadOnlyError_m25838_MethodInfo/* Method Usage */,
	&Array_IndexOf_TisObject_t_m12656_MethodInfo/* Method Usage */,
	&U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* Class Usage */,
	&U3CGetEnumeratorU3Ec__Iterator0__ctor_m25839_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ArrayReadOnlyList_1_t4719_0_0_0;
extern Il2CppType ArrayReadOnlyList_1_t4719_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct ArrayReadOnlyList_1_t4719;
extern Il2CppGenericClass ArrayReadOnlyList_1_t4719_GenericClass;
extern CustomAttributesCache ArrayReadOnlyList_1_t1758__CustomAttributeCache;
extern CustomAttributesCache ArrayReadOnlyList_1_t1758__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m12194;
TypeInfo ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArrayReadOnlyList`1"/* name */
	, ""/* namespaze */
	, ArrayReadOnlyList_1_t4719_MethodInfos/* methods */
	, ArrayReadOnlyList_1_t4719_PropertyInfos/* properties */
	, ArrayReadOnlyList_1_t4719_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* element_class */
	, ArrayReadOnlyList_1_t4719_InterfacesTypeInfos/* implemented_interfaces */
	, ArrayReadOnlyList_1_t4719_VTable/* vtable */
	, &ArrayReadOnlyList_1_t1758__CustomAttributeCache/* custom_attributes_cache */
	, &ArrayReadOnlyList_1_t4719_il2cpp_TypeInfo/* cast_class */
	, &ArrayReadOnlyList_1_t4719_0_0_0/* byval_arg */
	, &ArrayReadOnlyList_1_t4719_1_0_0/* this_arg */
	, ArrayReadOnlyList_1_t4719_InterfacesOffsets/* interface_offsets */
	, &ArrayReadOnlyList_1_t4719_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, ArrayReadOnlyList_1_t4719_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArrayReadOnlyList_1_t4719)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
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
	, 16/* method_count */
	, 3/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 18/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
 void U3CGetEnumeratorU3Ec__Iterator0__ctor_m25839_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4720 * __this, MethodInfo* method)
{
	{
		Object__ctor_m499(__this, /*hidden argument*/&Object__ctor_m499_MethodInfo);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_MethodInfo;
 Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4720 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_MethodInfo;
 Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4720 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m25842_MethodInfo;
 bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m25842_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4720 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_001e;
		}
		if (V_0 == 1)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0076;
	}

IL_001e:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		ArrayReadOnlyList_1_t4719 * L_1 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_1);
		ObjectU5BU5D_t96* L_2 = (L_1->___array_0);
		int32_t L_3 = (__this->___U3CiU3E__0_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		__this->___$current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
		__this->___$PC_1 = 1;
		goto IL_0078;
	}

IL_004c:
	{
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)(L_5+1));
	}

IL_005a:
	{
		int32_t L_6 = (__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t4719 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		ObjectU5BU5D_t96* L_8 = (L_7->___array_0);
		NullCheck(L_8);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___$PC_1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Dispose_m25843_MethodInfo;
 void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m25843_gshared (U3CGetEnumeratorU3Ec__Iterator0_t4720 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// Metadata Definition System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t4720____U3CiU3E__0_0_FieldInfo = 
{
	"<i>__0"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t4720, ___U3CiU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t4720____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t73_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t4720, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t4720____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t4720, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ArrayReadOnlyList_1_t4719_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t4720____U3CU3Ef__this_3_FieldInfo = 
{
	"<>f__this"/* name */
	, &ArrayReadOnlyList_1_t4719_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t4720, ___U3CU3Ef__this_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CGetEnumeratorU3Ec__Iterator0_t4720_FieldInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0_t4720____U3CiU3E__0_0_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t4720____$PC_1_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t4720____$current_2_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t4720____U3CU3Ef__this_3_FieldInfo,
	NULL
};
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator0_t4720____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<T>.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator0_t4720____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CGetEnumeratorU3Ec__Iterator0_t4720_PropertyInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0_t4720____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t4720____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0__ctor_m25839_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m25839_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0__ctor_m25839_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0__ctor_m25839_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m12180;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_GenericMethod;
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<T>.get_Current"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m12180/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12181;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_GenericMethod;
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12181/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m25842_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m25842_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m25842_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* declaring_type */
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
	, &U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m25842_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m12183;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_Dispose_m25843_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Dispose_m25843_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m25843_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m12183/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_Dispose_m25843_GenericMethod/* genericMethod */

};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator0_t4720_MethodInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0__ctor_m25839_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m25842_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m25843_MethodInfo,
	NULL
};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator0_t4720_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m25841_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m25842_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m25843_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m25840_MethodInfo,
};
static TypeInfo* U3CGetEnumeratorU3Ec__Iterator0_t4720_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t88_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CGetEnumeratorU3Ec__Iterator0_t4720_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t88_il2cpp_TypeInfo, 7},
};
extern TypeInfo Object_t_il2cpp_TypeInfo;
static Il2CppRGCTXData U3CGetEnumeratorU3Ec__Iterator0_t4720_RGCTXData[1] = 
{
	&Object_t_il2cpp_TypeInfo/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t4720_0_0_0;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t4720_1_0_0;
struct U3CGetEnumeratorU3Ec__Iterator0_t4720;
extern Il2CppGenericClass U3CGetEnumeratorU3Ec__Iterator0_t4720_GenericClass;
extern TypeInfo ArrayReadOnlyList_1_t1758_il2cpp_TypeInfo;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m12180;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m12181;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m12183;
TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetEnumerator>c__Iterator0"/* name */
	, ""/* namespaze */
	, U3CGetEnumeratorU3Ec__Iterator0_t4720_MethodInfos/* methods */
	, U3CGetEnumeratorU3Ec__Iterator0_t4720_PropertyInfos/* properties */
	, U3CGetEnumeratorU3Ec__Iterator0_t4720_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ArrayReadOnlyList_1_t1758_il2cpp_TypeInfo/* nested_in */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* element_class */
	, U3CGetEnumeratorU3Ec__Iterator0_t4720_InterfacesTypeInfos/* implemented_interfaces */
	, U3CGetEnumeratorU3Ec__Iterator0_t4720_VTable/* vtable */
	, &U3CGetEnumeratorU3Ec__Iterator0_t1757__CustomAttributeCache/* custom_attributes_cache */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_il2cpp_TypeInfo/* cast_class */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_0_0_0/* byval_arg */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_1_0_0/* this_arg */
	, U3CGetEnumeratorU3Ec__Iterator0_t4720_InterfacesOffsets/* interface_offsets */
	, &U3CGetEnumeratorU3Ec__Iterator0_t4720_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, U3CGetEnumeratorU3Ec__Iterator0_t4720_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetEnumeratorU3Ec__Iterator0_t4720)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
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
	, 5/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t6648_il2cpp_TypeInfo;

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>
extern MethodInfo IEnumerator_1_get_Current_m44465_MethodInfo;
static PropertyInfo IEnumerator_1_t6648____Current_PropertyInfo = 
{
	&IEnumerator_1_t6648_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44465_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6648_PropertyInfos[] =
{
	&IEnumerator_1_t6648____Current_PropertyInfo,
	NULL
};
extern Il2CppType ConstructorInfo_t1100_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44465_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44465_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6648_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t1100_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44465_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6648_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44465_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6648_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6648_0_0_0;
extern Il2CppType IEnumerator_1_t6648_1_0_0;
struct IEnumerator_1_t6648;
extern Il2CppGenericClass IEnumerator_1_t6648_GenericClass;
TypeInfo IEnumerator_1_t6648_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6648_MethodInfos/* methods */
	, IEnumerator_1_t6648_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6648_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6648_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6648_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6648_0_0_0/* byval_arg */
	, &IEnumerator_1_t6648_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6648_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_559.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4721_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_559MethodDeclarations.h"

extern TypeInfo ConstructorInfo_t1100_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25848_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConstructorInfo_t1100_m34232_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ConstructorInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ConstructorInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisConstructorInfo_t1100_m34232(__this, p0, method) (ConstructorInfo_t1100 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4721____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4721, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4721____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4721, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4721_FieldInfos[] =
{
	&InternalEnumerator_1_t4721____array_0_FieldInfo,
	&InternalEnumerator_1_t4721____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25845_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4721____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4721_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25845_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4721____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4721_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25848_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4721_PropertyInfos[] =
{
	&InternalEnumerator_1_t4721____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4721____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4721_InternalEnumerator_1__ctor_m25844_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25844_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25844_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4721_InternalEnumerator_1__ctor_m25844_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25844_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25845_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25845_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25845_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25846_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25846_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25846_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25847_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25847_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25847_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t1100_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25848_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25848_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t1100_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25848_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4721_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25844_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25845_MethodInfo,
	&InternalEnumerator_1_Dispose_m25846_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25847_MethodInfo,
	&InternalEnumerator_1_get_Current_m25848_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25847_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25846_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4721_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25845_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25847_MethodInfo,
	&InternalEnumerator_1_Dispose_m25846_MethodInfo,
	&InternalEnumerator_1_get_Current_m25848_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4721_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6648_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4721_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6648_il2cpp_TypeInfo, 7},
};
extern TypeInfo ConstructorInfo_t1100_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4721_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25848_MethodInfo/* Method Usage */,
	&ConstructorInfo_t1100_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisConstructorInfo_t1100_m34232_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4721_0_0_0;
extern Il2CppType InternalEnumerator_1_t4721_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4721_GenericClass;
TypeInfo InternalEnumerator_1_t4721_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4721_MethodInfos/* methods */
	, InternalEnumerator_1_t4721_PropertyInfos/* properties */
	, InternalEnumerator_1_t4721_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4721_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4721_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4721_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4721_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4721_1_0_0/* this_arg */
	, InternalEnumerator_1_t4721_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4721_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4721_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4721)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8560_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>
extern MethodInfo ICollection_1_get_Count_m44466_MethodInfo;
static PropertyInfo ICollection_1_t8560____Count_PropertyInfo = 
{
	&ICollection_1_t8560_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44466_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44467_MethodInfo;
static PropertyInfo ICollection_1_t8560____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8560_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44467_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8560_PropertyInfos[] =
{
	&ICollection_1_t8560____Count_PropertyInfo,
	&ICollection_1_t8560____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44466_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m44466_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44466_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44467_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44467_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44467_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t1100_0_0_0;
extern Il2CppType ConstructorInfo_t1100_0_0_0;
static ParameterInfo ICollection_1_t8560_ICollection_1_Add_m44468_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t1100_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44468_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Add(T)
MethodInfo ICollection_1_Add_m44468_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8560_ICollection_1_Add_m44468_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44468_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44469_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Clear()
MethodInfo ICollection_1_Clear_m44469_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44469_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t1100_0_0_0;
static ParameterInfo ICollection_1_t8560_ICollection_1_Contains_m44470_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t1100_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44470_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m44470_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8560_ICollection_1_Contains_m44470_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44470_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfoU5BU5D_t1766_0_0_0;
extern Il2CppType ConstructorInfoU5BU5D_t1766_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8560_ICollection_1_CopyTo_m44471_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfoU5BU5D_t1766_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44471_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44471_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8560_ICollection_1_CopyTo_m44471_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44471_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t1100_0_0_0;
static ParameterInfo ICollection_1_t8560_ICollection_1_Remove_m44472_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t1100_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44472_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m44472_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8560_ICollection_1_Remove_m44472_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44472_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8560_MethodInfos[] =
{
	&ICollection_1_get_Count_m44466_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44467_MethodInfo,
	&ICollection_1_Add_m44468_MethodInfo,
	&ICollection_1_Clear_m44469_MethodInfo,
	&ICollection_1_Contains_m44470_MethodInfo,
	&ICollection_1_CopyTo_m44471_MethodInfo,
	&ICollection_1_Remove_m44472_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8562_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8560_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8562_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8560_0_0_0;
extern Il2CppType ICollection_1_t8560_1_0_0;
struct ICollection_1_t8560;
extern Il2CppGenericClass ICollection_1_t8560_GenericClass;
TypeInfo ICollection_1_t8560_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8560_MethodInfos/* methods */
	, ICollection_1_t8560_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8560_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8560_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8560_0_0_0/* byval_arg */
	, &ICollection_1_t8560_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8560_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
extern Il2CppType IEnumerator_1_t6648_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44473_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44473_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8562_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6648_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44473_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8562_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44473_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8562_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8562_0_0_0;
extern Il2CppType IEnumerable_1_t8562_1_0_0;
struct IEnumerable_1_t8562;
extern Il2CppGenericClass IEnumerable_1_t8562_GenericClass;
TypeInfo IEnumerable_1_t8562_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8562_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8562_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8562_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8562_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8562_0_0_0/* byval_arg */
	, &IEnumerable_1_t8562_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8562_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8561_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>
extern MethodInfo IList_1_get_Item_m44474_MethodInfo;
extern MethodInfo IList_1_set_Item_m44475_MethodInfo;
static PropertyInfo IList_1_t8561____Item_PropertyInfo = 
{
	&IList_1_t8561_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44474_MethodInfo/* get */
	, &IList_1_set_Item_m44475_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8561_PropertyInfos[] =
{
	&IList_1_t8561____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConstructorInfo_t1100_0_0_0;
static ParameterInfo IList_1_t8561_IList_1_IndexOf_m44476_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t1100_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44476_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44476_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8561_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8561_IList_1_IndexOf_m44476_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44476_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ConstructorInfo_t1100_0_0_0;
static ParameterInfo IList_1_t8561_IList_1_Insert_m44477_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t1100_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44477_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44477_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8561_IList_1_Insert_m44477_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44477_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8561_IList_1_RemoveAt_m44478_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44478_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44478_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8561_IList_1_RemoveAt_m44478_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44478_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8561_IList_1_get_Item_m44474_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType ConstructorInfo_t1100_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44474_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44474_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8561_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t1100_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8561_IList_1_get_Item_m44474_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44474_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType ConstructorInfo_t1100_0_0_0;
static ParameterInfo IList_1_t8561_IList_1_set_Item_m44475_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t1100_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44475_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44475_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8561_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8561_IList_1_set_Item_m44475_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44475_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8561_MethodInfos[] =
{
	&IList_1_IndexOf_m44476_MethodInfo,
	&IList_1_Insert_m44477_MethodInfo,
	&IList_1_RemoveAt_m44478_MethodInfo,
	&IList_1_get_Item_m44474_MethodInfo,
	&IList_1_set_Item_m44475_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8561_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8560_il2cpp_TypeInfo,
	&IEnumerable_1_t8562_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8561_0_0_0;
extern Il2CppType IList_1_t8561_1_0_0;
struct IList_1_t8561;
extern Il2CppGenericClass IList_1_t8561_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8561_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8561_MethodInfos/* methods */
	, IList_1_t8561_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8561_il2cpp_TypeInfo/* element_class */
	, IList_1_t8561_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8561_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8561_0_0_0/* byval_arg */
	, &IList_1_t8561_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8561_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo ICollection_1_t8563_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo ICollection_1_get_Count_m44479_MethodInfo;
static PropertyInfo ICollection_1_t8563____Count_PropertyInfo = 
{
	&ICollection_1_t8563_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44479_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44480_MethodInfo;
static PropertyInfo ICollection_1_t8563____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8563_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44480_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8563_PropertyInfos[] =
{
	&ICollection_1_t8563____Count_PropertyInfo,
	&ICollection_1_t8563____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44479_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m44479_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44479_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44480_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44480_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44480_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
static ParameterInfo ICollection_1_t8563_ICollection_1_Add_m44481_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2649_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44481_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Add(T)
MethodInfo ICollection_1_Add_m44481_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8563_ICollection_1_Add_m44481_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44481_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44482_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Clear()
MethodInfo ICollection_1_Clear_m44482_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44482_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
static ParameterInfo ICollection_1_t8563_ICollection_1_Contains_m44483_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2649_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44483_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m44483_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8563_ICollection_1_Contains_m44483_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44483_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfoU5BU5D_t5007_0_0_0;
extern Il2CppType _ConstructorInfoU5BU5D_t5007_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8563_ICollection_1_CopyTo_m44484_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfoU5BU5D_t5007_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44484_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44484_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8563_ICollection_1_CopyTo_m44484_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44484_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
static ParameterInfo ICollection_1_t8563_ICollection_1_Remove_m44485_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2649_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44485_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m44485_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8563_ICollection_1_Remove_m44485_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44485_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8563_MethodInfos[] =
{
	&ICollection_1_get_Count_m44479_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44480_MethodInfo,
	&ICollection_1_Add_m44481_MethodInfo,
	&ICollection_1_Clear_m44482_MethodInfo,
	&ICollection_1_Contains_m44483_MethodInfo,
	&ICollection_1_CopyTo_m44484_MethodInfo,
	&ICollection_1_Remove_m44485_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8565_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8563_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8565_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8563_0_0_0;
extern Il2CppType ICollection_1_t8563_1_0_0;
struct ICollection_1_t8563;
extern Il2CppGenericClass ICollection_1_t8563_GenericClass;
TypeInfo ICollection_1_t8563_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8563_MethodInfos/* methods */
	, ICollection_1_t8563_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8563_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8563_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8563_0_0_0/* byval_arg */
	, &ICollection_1_t8563_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8563_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType IEnumerator_1_t6650_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44486_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44486_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8565_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6650_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44486_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8565_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44486_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8565_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8565_0_0_0;
extern Il2CppType IEnumerable_1_t8565_1_0_0;
struct IEnumerable_1_t8565;
extern Il2CppGenericClass IEnumerable_1_t8565_GenericClass;
TypeInfo IEnumerable_1_t8565_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8565_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8565_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8565_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8565_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8565_0_0_0/* byval_arg */
	, &IEnumerable_1_t8565_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8565_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6650_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo IEnumerator_1_get_Current_m44487_MethodInfo;
static PropertyInfo IEnumerator_1_t6650____Current_PropertyInfo = 
{
	&IEnumerator_1_t6650_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44487_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6650_PropertyInfos[] =
{
	&IEnumerator_1_t6650____Current_PropertyInfo,
	NULL
};
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44487_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44487_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6650_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t2649_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44487_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6650_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44487_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6650_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6650_0_0_0;
extern Il2CppType IEnumerator_1_t6650_1_0_0;
struct IEnumerator_1_t6650;
extern Il2CppGenericClass IEnumerator_1_t6650_GenericClass;
TypeInfo IEnumerator_1_t6650_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6650_MethodInfos/* methods */
	, IEnumerator_1_t6650_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6650_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6650_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6650_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6650_0_0_0/* byval_arg */
	, &IEnumerator_1_t6650_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6650_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_560.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4722_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_560MethodDeclarations.h"

extern TypeInfo _ConstructorInfo_t2649_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25853_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_ConstructorInfo_t2649_m34243_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ConstructorInfo_t2649_m34243(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4722____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4722, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4722____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4722, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4722_FieldInfos[] =
{
	&InternalEnumerator_1_t4722____array_0_FieldInfo,
	&InternalEnumerator_1_t4722____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25850_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4722____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4722_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25850_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4722____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4722_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25853_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4722_PropertyInfos[] =
{
	&InternalEnumerator_1_t4722____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4722____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4722_InternalEnumerator_1__ctor_m25849_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25849_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25849_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4722_InternalEnumerator_1__ctor_m25849_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25849_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25850_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25850_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25850_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25851_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25851_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25851_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25852_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25852_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25852_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25853_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25853_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t2649_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25853_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4722_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25849_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25850_MethodInfo,
	&InternalEnumerator_1_Dispose_m25851_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25852_MethodInfo,
	&InternalEnumerator_1_get_Current_m25853_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25852_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25851_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4722_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25850_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25852_MethodInfo,
	&InternalEnumerator_1_Dispose_m25851_MethodInfo,
	&InternalEnumerator_1_get_Current_m25853_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4722_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6650_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4722_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6650_il2cpp_TypeInfo, 7},
};
extern TypeInfo _ConstructorInfo_t2649_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4722_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25853_MethodInfo/* Method Usage */,
	&_ConstructorInfo_t2649_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_ConstructorInfo_t2649_m34243_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4722_0_0_0;
extern Il2CppType InternalEnumerator_1_t4722_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4722_GenericClass;
TypeInfo InternalEnumerator_1_t4722_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4722_MethodInfos/* methods */
	, InternalEnumerator_1_t4722_PropertyInfos/* properties */
	, InternalEnumerator_1_t4722_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4722_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4722_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4722_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4722_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4722_1_0_0/* this_arg */
	, InternalEnumerator_1_t4722_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4722_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4722_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4722)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t8564_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo IList_1_get_Item_m44488_MethodInfo;
extern MethodInfo IList_1_set_Item_m44489_MethodInfo;
static PropertyInfo IList_1_t8564____Item_PropertyInfo = 
{
	&IList_1_t8564_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44488_MethodInfo/* get */
	, &IList_1_set_Item_m44489_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8564_PropertyInfos[] =
{
	&IList_1_t8564____Item_PropertyInfo,
	NULL
};
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
static ParameterInfo IList_1_t8564_IList_1_IndexOf_m44490_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2649_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44490_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44490_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8564_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8564_IList_1_IndexOf_m44490_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44490_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
static ParameterInfo IList_1_t8564_IList_1_Insert_m44491_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2649_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44491_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44491_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8564_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8564_IList_1_Insert_m44491_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44491_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8564_IList_1_RemoveAt_m44492_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44492_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44492_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8564_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8564_IList_1_RemoveAt_m44492_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44492_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8564_IList_1_get_Item_m44488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44488_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44488_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8564_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t2649_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8564_IList_1_get_Item_m44488_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44488_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType _ConstructorInfo_t2649_0_0_0;
static ParameterInfo IList_1_t8564_IList_1_set_Item_m44489_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2649_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44489_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44489_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8564_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8564_IList_1_set_Item_m44489_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44489_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8564_MethodInfos[] =
{
	&IList_1_IndexOf_m44490_MethodInfo,
	&IList_1_Insert_m44491_MethodInfo,
	&IList_1_RemoveAt_m44492_MethodInfo,
	&IList_1_get_Item_m44488_MethodInfo,
	&IList_1_set_Item_m44489_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8564_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8563_il2cpp_TypeInfo,
	&IEnumerable_1_t8565_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8564_0_0_0;
extern Il2CppType IList_1_t8564_1_0_0;
struct IList_1_t8564;
extern Il2CppGenericClass IList_1_t8564_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8564_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8564_MethodInfos/* methods */
	, IList_1_t8564_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8564_il2cpp_TypeInfo/* element_class */
	, IList_1_t8564_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8564_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8564_0_0_0/* byval_arg */
	, &IList_1_t8564_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8564_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6652_il2cpp_TypeInfo;

// System.MonoType
#include "mscorlib_System_MonoType.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoType>
extern MethodInfo IEnumerator_1_get_Current_m44493_MethodInfo;
static PropertyInfo IEnumerator_1_t6652____Current_PropertyInfo = 
{
	&IEnumerator_1_t6652_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44493_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6652_PropertyInfos[] =
{
	&IEnumerator_1_t6652____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoType_t2291_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44493_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44493_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6652_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t2291_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44493_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6652_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44493_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6652_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6652_0_0_0;
extern Il2CppType IEnumerator_1_t6652_1_0_0;
struct IEnumerator_1_t6652;
extern Il2CppGenericClass IEnumerator_1_t6652_GenericClass;
TypeInfo IEnumerator_1_t6652_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6652_MethodInfos/* methods */
	, IEnumerator_1_t6652_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6652_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6652_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6652_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6652_0_0_0/* byval_arg */
	, &IEnumerator_1_t6652_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6652_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_561.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t4723_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_561MethodDeclarations.h"

extern TypeInfo MonoType_t2291_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25858_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoType_t2291_m34254_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoType_t2291_m34254(__this, p0, method) (MonoType_t2291 *)Array_InternalArray__get_Item_TisObject_t_m26983_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t4723____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4723, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t4723____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t4723, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t4723_FieldInfos[] =
{
	&InternalEnumerator_1_t4723____array_0_FieldInfo,
	&InternalEnumerator_1_t4723____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25855_MethodInfo;
static PropertyInfo InternalEnumerator_1_t4723____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4723_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25855_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t4723____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t4723_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25858_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t4723_PropertyInfos[] =
{
	&InternalEnumerator_1_t4723____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t4723____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t4723_InternalEnumerator_1__ctor_m25854_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25854_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25854_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m12797_gshared/* method */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, InternalEnumerator_1_t4723_InternalEnumerator_1__ctor_m25854_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25854_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25855_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25855_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m12799_gshared/* method */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25855_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25856_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25856_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m12801_gshared/* method */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25856_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25857_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25857_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m12803_gshared/* method */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25857_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t2291_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25858_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25858_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m12805_gshared/* method */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t2291_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25858_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t4723_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25854_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25855_MethodInfo,
	&InternalEnumerator_1_Dispose_m25856_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25857_MethodInfo,
	&InternalEnumerator_1_get_Current_m25858_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25857_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25856_MethodInfo;
static MethodInfo* InternalEnumerator_1_t4723_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25855_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25857_MethodInfo,
	&InternalEnumerator_1_Dispose_m25856_MethodInfo,
	&InternalEnumerator_1_get_Current_m25858_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t4723_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
	&IEnumerator_1_t6652_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t4723_InterfacesOffsets[] = 
{
	{ &IEnumerator_t19_il2cpp_TypeInfo, 4},
	{ &IDisposable_t81_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t6652_il2cpp_TypeInfo, 7},
};
extern TypeInfo MonoType_t2291_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t4723_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25858_MethodInfo/* Method Usage */,
	&MonoType_t2291_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoType_t2291_m34254_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t4723_0_0_0;
extern Il2CppType InternalEnumerator_1_t4723_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t4723_GenericClass;
TypeInfo InternalEnumerator_1_t4723_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t4723_MethodInfos/* methods */
	, InternalEnumerator_1_t4723_PropertyInfos/* properties */
	, InternalEnumerator_1_t4723_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t4723_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t4723_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t4723_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t4723_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t4723_1_0_0/* this_arg */
	, InternalEnumerator_1_t4723_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t4723_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t4723_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t4723)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t8566_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoType>
extern MethodInfo ICollection_1_get_Count_m44494_MethodInfo;
static PropertyInfo ICollection_1_t8566____Count_PropertyInfo = 
{
	&ICollection_1_t8566_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m44494_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m44495_MethodInfo;
static PropertyInfo ICollection_1_t8566____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t8566_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m44495_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t8566_PropertyInfos[] =
{
	&ICollection_1_t8566____Count_PropertyInfo,
	&ICollection_1_t8566____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m44494_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
MethodInfo ICollection_1_get_Count_m44494_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m44494_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m44495_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m44495_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m44495_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t2291_0_0_0;
extern Il2CppType MonoType_t2291_0_0_0;
static ParameterInfo ICollection_1_t8566_ICollection_1_Add_m44496_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t2291_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m44496_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
MethodInfo ICollection_1_Add_m44496_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, ICollection_1_t8566_ICollection_1_Add_m44496_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m44496_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m44497_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
MethodInfo ICollection_1_Clear_m44497_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m44497_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t2291_0_0_0;
static ParameterInfo ICollection_1_t8566_ICollection_1_Contains_m44498_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t2291_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m44498_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
MethodInfo ICollection_1_Contains_m44498_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8566_ICollection_1_Contains_m44498_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m44498_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTypeU5BU5D_t2696_0_0_0;
extern Il2CppType MonoTypeU5BU5D_t2696_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t8566_ICollection_1_CopyTo_m44499_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoTypeU5BU5D_t2696_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m44499_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m44499_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t8566_ICollection_1_CopyTo_m44499_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m44499_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t2291_0_0_0;
static ParameterInfo ICollection_1_t8566_ICollection_1_Remove_m44500_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t2291_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m44500_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
MethodInfo ICollection_1_Remove_m44500_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, ICollection_1_t8566_ICollection_1_Remove_m44500_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m44500_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t8566_MethodInfos[] =
{
	&ICollection_1_get_Count_m44494_MethodInfo,
	&ICollection_1_get_IsReadOnly_m44495_MethodInfo,
	&ICollection_1_Add_m44496_MethodInfo,
	&ICollection_1_Clear_m44497_MethodInfo,
	&ICollection_1_Contains_m44498_MethodInfo,
	&ICollection_1_CopyTo_m44499_MethodInfo,
	&ICollection_1_Remove_m44500_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t8568_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t8566_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&IEnumerable_1_t8568_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t8566_0_0_0;
extern Il2CppType ICollection_1_t8566_1_0_0;
struct ICollection_1_t8566;
extern Il2CppGenericClass ICollection_1_t8566_GenericClass;
TypeInfo ICollection_1_t8566_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t8566_MethodInfos/* methods */
	, ICollection_1_t8566_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t8566_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t8566_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t8566_0_0_0/* byval_arg */
	, &ICollection_1_t8566_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t8566_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoType>
extern Il2CppType IEnumerator_1_t6652_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m44501_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m44501_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t8568_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t6652_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m44501_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t8568_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m44501_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t8568_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t8568_0_0_0;
extern Il2CppType IEnumerable_1_t8568_1_0_0;
struct IEnumerable_1_t8568;
extern Il2CppGenericClass IEnumerable_1_t8568_GenericClass;
TypeInfo IEnumerable_1_t8568_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t8568_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t8568_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t8568_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t8568_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t8568_0_0_0/* byval_arg */
	, &IEnumerable_1_t8568_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t8568_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IList_1_t8567_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoType>
extern MethodInfo IList_1_get_Item_m44502_MethodInfo;
extern MethodInfo IList_1_set_Item_m44503_MethodInfo;
static PropertyInfo IList_1_t8567____Item_PropertyInfo = 
{
	&IList_1_t8567_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m44502_MethodInfo/* get */
	, &IList_1_set_Item_m44503_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t8567_PropertyInfos[] =
{
	&IList_1_t8567____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoType_t2291_0_0_0;
static ParameterInfo IList_1_t8567_IList_1_IndexOf_m44504_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t2291_0_0_0},
};
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m44504_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m44504_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t8567_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8567_IList_1_IndexOf_m44504_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m44504_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoType_t2291_0_0_0;
static ParameterInfo IList_1_t8567_IList_1_Insert_m44505_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoType_t2291_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m44505_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m44505_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t8567_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8567_IList_1_Insert_m44505_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m44505_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8567_IList_1_RemoveAt_m44506_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m44506_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m44506_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t8567_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73/* invoker_method */
	, IList_1_t8567_IList_1_RemoveAt_m44506_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m44506_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t8567_IList_1_get_Item_m44502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern Il2CppType MonoType_t2291_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m44502_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m44502_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t8567_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t2291_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t8567_IList_1_get_Item_m44502_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m44502_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType MonoType_t2291_0_0_0;
static ParameterInfo IList_1_t8567_IList_1_set_Item_m44503_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoType_t2291_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m44503_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m44503_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t8567_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int32_t73_Object_t/* invoker_method */
	, IList_1_t8567_IList_1_set_Item_m44503_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m44503_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t8567_MethodInfos[] =
{
	&IList_1_IndexOf_m44504_MethodInfo,
	&IList_1_Insert_m44505_MethodInfo,
	&IList_1_RemoveAt_m44506_MethodInfo,
	&IList_1_get_Item_m44502_MethodInfo,
	&IList_1_set_Item_m44503_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t8567_InterfacesTypeInfos[] = 
{
	&IEnumerable_t103_il2cpp_TypeInfo,
	&ICollection_1_t8566_il2cpp_TypeInfo,
	&IEnumerable_1_t8568_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t8567_0_0_0;
extern Il2CppType IList_1_t8567_1_0_0;
struct IList_1_t8567;
extern Il2CppGenericClass IList_1_t8567_GenericClass;
extern CustomAttributesCache IList_1_t2538__CustomAttributeCache;
TypeInfo IList_1_t8567_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t8567_MethodInfos/* methods */
	, IList_1_t8567_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t8567_il2cpp_TypeInfo/* element_class */
	, IList_1_t8567_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t2538__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t8567_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t8567_0_0_0/* byval_arg */
	, &IList_1_t8567_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t8567_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
extern TypeInfo IEnumerator_1_t6654_il2cpp_TypeInfo;

// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>
extern MethodInfo IEnumerator_1_get_Current_m44507_MethodInfo;
static PropertyInfo IEnumerator_1_t6654____Current_PropertyInfo = 
{
	&IEnumerator_1_t6654_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m44507_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t6654_PropertyInfos[] =
{
	&IEnumerator_1_t6654____Current_PropertyInfo,
	NULL
};
extern Il2CppType ParamArrayAttribute_t338_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m44507_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m44507_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t6654_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t338_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m44507_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t6654_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m44507_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t6654_InterfacesTypeInfos[] = 
{
	&IEnumerator_t19_il2cpp_TypeInfo,
	&IDisposable_t81_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t6654_0_0_0;
extern Il2CppType IEnumerator_1_t6654_1_0_0;
struct IEnumerator_1_t6654;
extern Il2CppGenericClass IEnumerator_1_t6654_GenericClass;
TypeInfo IEnumerator_1_t6654_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t6654_MethodInfos/* methods */
	, IEnumerator_1_t6654_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t6654_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t6654_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t6654_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t6654_0_0_0/* byval_arg */
	, &IEnumerator_1_t6654_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t6654_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
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
